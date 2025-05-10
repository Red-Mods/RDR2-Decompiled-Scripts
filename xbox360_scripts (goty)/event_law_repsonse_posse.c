//Decompiled with MagicRDR v1.0
//Function Count : 324
//Statics Count : 222
//Natives Count : 520
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
	var uLocal_9 = 0;
	bool bLocal_10 = false;
	int iLocal_11 = 0;
	struct<725> Local_12 = { 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	vector3 vVar6;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	
	bLocal_10 = false;
	bVar1 = 250;
	Function_309(&Local_12, &ScriptParam_0);
	TOGGLE_ACTOR_ACTION_SIGNAL_ON(Global_34573, 0, "red_wanted");
	if (Function_308(0x1000000))
	{
		bVar4 = true;
		if (StackVal <= 1000.0f)
		{
			bVar5 = true;
		}
	}
	Global_3403 = 1;
	SET_FACTIONS_STATUS_TWO_WAY(Global_26361, 2, 6);
	Global_13111 = 1;
	iLocal_11 = 0;
	while (!IS_EXITFLAG_SET())
	{
		bVar1 = 250;
		Function_307(&Local_12);
		if (Global_3378)
		{
			if (iLocal_11 != 4)
			{
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
			}
		}
		if ((!IS_ACTOR_VALID(ScriptParam_0.f_48) && !iLocal_11 != 3) && !iLocal_11 != 4)
		{
			Function_305(Local_12.f_576, "posse_criminal_dead", 5.0f, ScriptParam_0.f_64, 20.0f, 1, 1);
			iLocal_11 = 3;
			bVar1 = false;
		}
		else if ((!IS_ACTOR_ALIVE(ScriptParam_0.f_48) && !iLocal_11 != 3) && !iLocal_11 != 4)
		{
			Function_305(Local_12.f_576, "posse_criminal_dead", 5.0f, ScriptParam_0.f_64, 20.0f, 1, 1);
			iLocal_11 = 3;
			bVar1 = false;
		}
		Function_304(&Local_12);
		if (IS_ACTOR_VALID(ScriptParam_0.f_48))
		{
			GET_POSITION(ScriptParam_0.f_48, &Local_12 + 416);
		}
		Global_26316.f_152 = SQUAD_GET_SIZE(Local_12.f_576);
		switch (iLocal_11)
		{
			case 0x00000000:
				if (GET_CURRENT_GAME_TIME() <= (Local_12.f_476 + 10.0f))
				{
					iLocal_11 = 3;
				}
				if (Function_299(&Local_12 + 8) && Function_299(&Local_12 + 60))
				{
					Local_12.f_476 = GET_CURRENT_GAME_TIME();
					iLocal_11 = 1;
					bVar1 = false;
				}
				Function_296(&Local_12, &ScriptParam_0);
				break;
				break;
			
			case 0x00000001:
				if (Function_255(&Local_12, &ScriptParam_0))
				{
					Local_12.f_476 = GET_CURRENT_GAME_TIME();
					Function_254(1);
					if (bVar4)
					{
						Function_253(0x1000000);
						Function_252();
						*(&Global_26316 + 156) = { StackVal, StackVal, Function_252() };
					}
					PLAYER_RUMBLE("RUMBLE_MED", 4294967295, 0);
					if (Function_251())
					{
						Function_250("tutorial_law_posse_spawn_mp", 0x41200000, 1, 0, 2, 1, 0);
						Function_227();
					}
					Local_12.f_648 = 0;
					iLocal_11 = 2;
					bVar1 = false;
				}
				else
				{
					if (Local_12.f_648 == 24)
					{
						iLocal_11 = 3;
					}
					bVar1 = 50;
				}
				Function_210(&Local_12);
				if (GET_CURRENT_GAME_TIME() <= (Local_12.f_476 + 10.0f))
				{
					iLocal_11 = 3;
				}
				break;
			
			case 0x00000002:
				if (Function_251())
				{
					Function_206(&Local_12);
				}
				bVar9 = Function_204(Local_12.f_576, ScriptParam_0.f_48, 1, 0);
				if (IS_ACTOR_VALID(bVar9))
				{
					GET_POSITION(bVar9, &Local_12 + 428);
				}
				else
				{
					*(&Local_12 + 428) = { 0.0f, 0.0f, 0.0f };
				}
				if ((((!Function_203(ScriptParam_0.f_48) && !IS_ACTOR_IN_HOGTIE(ScriptParam_0.f_48)) && !IS_GRINGO_VALID(GET_CURRENT_GRINGO(ScriptParam_0.f_48))) && !IS_ACTOR_RIDING_VEHICLE(ScriptParam_0.f_48)) && !IS_ACTOR_RIDING(ScriptParam_0.f_48))
				{
					Function_179(&Local_12, &ScriptParam_0);
					Function_172(&Local_12, &ScriptParam_0);
				}
				else if (IS_SCRIPT_USE_CONTEXT_VALID(Local_12.f_712))
				{
					RELEASE_SCRIPT_USE_CONTEXT(Local_12.f_712);
				}
				Function_170(&Local_12, &ScriptParam_0);
				Function_168(&Local_12, &ScriptParam_0);
				Function_167(&Local_12);
				Function_162();
				if (Function_156(&Local_12, &ScriptParam_0, 1))
				{
					Local_12.f_648 = 24;
					iLocal_11 = 3;
					bVar1 = false;
				}
				bVar1 = Function_95(bVar1, Function_96(&Local_12, &ScriptParam_0));
				Function_90(&Local_12, &ScriptParam_0);
				Function_79(&Local_12);
				Function_77(&Local_12, &ScriptParam_0);
				Function_76(&Local_12);
				if (Local_12.f_720)
				{
					iLocal_11 = 3;
				}
				if (Local_12.f_564)
				{
					iLocal_11 = 3;
				}
				bVar2 = true;
				bVar0 = false;
				while (bVar0 <= SQUAD_GET_SIZE(Local_12.f_576))
				{
					GET_POSITION(SQUAD_GET_ACTOR_BY_INDEX(Local_12.f_576, bVar0), &vVar6);
					if (VDIST(vVar6, *(&Local_12 + 416)) > 250.0f)
					{
						bVar2 = false;
					}
					bVar0++;
				}
				if (bVar2)
				{
					Local_12.f_648 = 24;
					iLocal_11 = 3;
					bVar1 = false;
				}
				bVar10 = false;
				if (Function_75(&Local_12, 1) != 0 && !bVar2)
				{
					if (Local_12.f_364 != 0.0f)
					{
						Local_12.f_364 = (GET_CURRENT_GAME_TIME() + 1.5f);
					}
					else if (GET_CURRENT_GAME_TIME() <= Local_12.f_364)
					{
						bVar10 = true;
					}
				}
				else
				{
					Local_12.f_364 = 0.0f;
				}
				if (bVar10)
				{
					Local_12.f_364 = GET_CURRENT_GAME_TIME();
					if (Function_75(&Local_12, 0) == 0)
					{
						bVar3 = true;
						Local_12.f_556 = 1;
					}
					bVar1 = false;
					iLocal_11 = 3;
				}
				if (!Function_251())
				{
					bLocal_198 = false;
					if (IS_ACTOR_VALID(Function_74()))
					{
						bVar11 = GET_LAST_ATTACKER(Function_74());
						if (IS_ACTOR_VALID(bVar11))
						{
							if (Function_73(bVar11, Local_12.f_576, 0))
							{
								bLocal_198 = true;
							}
						}
					}
				}
				break;
			
			case 0x00000003:
				if (IS_SCRIPT_USE_CONTEXT_VALID(Local_12.f_712))
				{
					RELEASE_SCRIPT_USE_CONTEXT(Local_12.f_712);
				}
				if (IS_BLIP_VALID(Local_12.f_384))
				{
					REMOVE_BLIP(Local_12.f_384);
				}
				bVar1 = Function_96(&Local_12, &ScriptParam_0);
				bVar0 = false;
				while (bVar0 <= SQUAD_GET_SIZE(Local_12.f_576))
				{
					if (!Local_12.f_552)
					{
						if (Function_251())
						{
							RELEASE_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(Local_12.f_576, bVar0));
						}
						else if ((!Function_72(SQUAD_GET_ACTOR_BY_INDEX(Local_12.f_576, bVar0), 1.0f, 75.0f, 1, 1, 0) || HUD_IS_FADED()) && !IS_ACTOR_HOGTIED(SQUAD_GET_ACTOR_BY_INDEX(Local_12.f_576, bVar0)))
						{
							DESTROY_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(Local_12.f_576, bVar0));
						}
						else
						{
							if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(Local_12.f_576, bVar0))))
							{
								REMOVE_BLIP(GET_BLIP_ON_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(Local_12.f_576, bVar0)));
							}
							RELEASE_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(Local_12.f_576, bVar0));
						}
					}
					else
					{
						bVar12 = SQUAD_GET_ACTOR_BY_INDEX(Local_12.f_576, bVar0);
						if (IS_ACTOR_VALID(bVar12))
						{
							TASK_CLEAR(bVar12);
							MEMORY_CONSIDER_AS(bVar12, Global_34573, 2);
							TASK_WANDER(bVar12, -1.0f);
							TASK_PRIORITY_SET(bVar12, 2);
							if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bVar12)))
							{
								REMOVE_BLIP(GET_BLIP_ON_ACTOR(bVar12));
							}
							RELEASE_ACTOR(bVar12);
						}
					}
					bVar0++;
				}
				Function_71(Local_12.f_576);
				bVar1 = false;
				iLocal_11 = 4;
				break;
			
			case 0x00000004:
				if (bVar3)
				{
					if (bVar4 && !bVar5)
					{
						if (Global_29007 == 3 && Global_29007 == 4)
						{
							Function_52();
						}
					}
				}
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				bVar1 = false;
				break;
			
			default:
				break;
		}
		WAIT(bVar1);
	}
	if (SQUAD_GET_SIZE(Local_12.f_576) < 0 && !Local_12.f_552)
	{
		Function_46(&Local_12 + 576, 0, 0, 0);
	}
	else if (Local_12.f_552)
	{
		Function_46(&Local_12 + 576, 0, 0, 1);
	}
	if (!Local_12.f_556)
	{
		Function_44();
	}
	Function_43(Local_12.f_580);
	Function_42(&Local_12 + 580, 0, 0);
	Function_40(&Local_12, 1);
	if (IS_SCRIPT_USE_CONTEXT_VALID(Local_12.f_712))
	{
		RELEASE_SCRIPT_USE_CONTEXT(Local_12.f_712);
	}
	if (IS_BLIP_VALID(Local_12.f_384))
	{
		REMOVE_BLIP(Local_12.f_384);
	}
	if (!Function_251())
	{
		if (!bVar4)
		{
			if (bLocal_198)
			{
				if (IS_ACTOR_VALID(Function_74()))
				{
					if (!IS_ACTOR_ALIVE(Function_74()))
					{
						Function_39(2048);
						Global_26401.f_2216 = ScriptParam_0.f_64;
						Function_35(Function_38(Global_26316[Local_12.f_724]), Function_36(Local_12.f_724), Local_12.f_724);
					}
				}
			}
		}
	}
	Function_31(&Local_12 + 8);
	Function_29(0);
	Function_39(1024);
	Global_13094 = 1.0f;
	if (Local_12.f_540 || Local_12.f_548)
	{
		Function_39(2048);
		Global_26401.f_2216 = ScriptParam_0.f_64;
	}
	else if (Local_12.f_552)
	{
	}
	else if (!Function_25(25, 0))
	{
		if (!Function_24(Global_76847, 2097152))
		{
			if (IS_ACTOR_ALIVE(Function_74()))
			{
				Function_20(Global_34573, 2097152, 2, 0);
			}
		}
	}
	Global_26316.f_152 = 0;
	Function_15(ScriptParam_0.f_64, 0);
	Function_13(ScriptParam_0.f_64, 3);
	Global_13111 = 4294967295;
	Function_11(32768);
	if (((!Local_12.f_540 && !Local_12.f_548) && !Global_3395) && !HUD_IS_FADED())
	{
		PLAYER_RUMBLE("RUMBLE_MED", 4294967295, 0);
	}
	ABORT_HUD_MAP_SCALE_OVERRIDE();
	Function_9(1);
	TOGGLE_ACTOR_ACTION_SIGNAL_OFF(Global_34573);
	Function_31(&Local_12 + 60);
	if (IS_POPSET_VALID(Local_12.f_332))
	{
		DESTROY_POPULATION_SET(Local_12.f_332);
	}
	Function_253(0x1000000);
	Function_252();
	*(&Global_26316 + 156) = { StackVal, StackVal, Function_252() };
	Global_3406 = 1;
	Global_26316.f_176 = 1;
	if (!Function_24(Global_76847, 128))
	{
		Function_7(Global_34573, 128, 2);
	}
	if (!Function_24(Global_76848, 32768))
	{
		Function_7(Function_74(), 32768, 3);
	}
	SET_AMBIENT_STREAMING_REQUIRED_POP_ACTOR_SCALE(1.0f);
	if (!Function_251())
	{
		RELEASE_LAYOUT_REF(Local_12.f_336);
	}
	else
	{
		Function_1(&Local_12);
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(int iParam0) //Position: 0x7C4 / 1988
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

void Function_2() //Position: 0x80B / 2059
{
	if (!Function_6())
	{
		Function_3(4096);
		UI_EXIT("XpHud");
	}
	return;
}

void Function_3(int iParam0) //Position: 0x829 / 2089
{
	Function_4(&Global_79336, iParam0);
	if (iParam0 & 512 != 0)
	{
		DECOR_SET_BOOL(Global_34573, "DISABLE_HORSE_WHISTLE", true);
	}
	return;
}

void Function_4(var uParam0, int iParam1) //Position: 0x862 / 2146
{
	Function_5(uParam0, iParam1);
	return;
}

void Function_5(var uParam0, int iParam1) //Position: 0x86F / 2159
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	return;
}

bool Function_6() //Position: 0x882 / 2178
{
	return Global_78480.f_24 == 4294967294;
}

void Function_7(bool bParam0, int iParam1, int iParam2) //Position: 0x892 / 2194
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

void Function_8(char* cParam0, int iParam1) //Position: 0x8E1 / 2273
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

void Function_9(int iParam0) //Position: 0x918 / 2328
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

bool Function_10() //Position: 0x954 / 2388
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

void Function_11(int iParam0) //Position: 0x979 / 2425
{
	Function_12(&Global_28842, iParam0);
	return;
}

void Function_12(var uParam0, int iParam1) //Position: 0x987 / 2439
{
	*uParam0 = (*uParam0 || iParam1);
	*uParam0 |= 1073741824;
	return;
}

void Function_13(int iParam0, int iParam1) //Position: 0x9A2 / 2466
{
	int iVar0;
	
	(*&Global_26316 + 72)[iParam0] = iParam1;
	if (iParam1 == 3)
	{
		iVar0 = Function_14(iParam0);
		if (iVar0 != 0 || iVar0 != 1)
		{
			(*&Global_26316 + 72)[iVar0] = iParam1;
		}
	}
	return;
}

int Function_14(int iParam0) //Position: 0x9D7 / 2519
{
	if (iParam0 == 0)
	{
		return 1;
	}
	if (iParam0 == 1)
	{
		return 0;
	}
	return 4294967295;
}

void Function_15(int iParam0, bool bParam1) //Position: 0x9F1 / 2545
{
	bool bVar0;
	
	if (bParam1)
	{
		if (IS_EARLIER_THAN((*&Global_26316 + 88)[iParam0], 0))
		{
			bVar0 = RAND_INT_RANGE(60, 180);
		}
		else
		{
			return;
		}
	}
	bVar0 = RAND_INT_RANGE(1800, 2400);
	if (Function_19() > 3)
	{
		bVar0 *= 2;
	}
	if (Function_251() && !bParam1)
	{
		Function_17(iParam0, 0, 0, 300, 0);
	}
	else
	{
		Function_17(iParam0, 0, 0, Function_16(bVar0), 0);
	}
	return;
}

bool Function_16(int iParam0) //Position: 0xA58 / 2648
{
	return CEIL(((IntToFloat(iParam0) * Global_63398) / 60.0f));
}

void Function_17(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4) //Position: 0xA6E / 2670
{
	int iVar0;
	
	iVar0 = GET_TIME_OF_DAY();
	ADD_TIME(&iVar0, iParam1, iParam2, bParam3, iParam4);
	if (IS_EARLIER_THAN((*&Global_26316 + 88)[iParam0], iVar0) || Function_18((*&Global_26316 + 88)[iParam0]))
	{
		(*&Global_26316 + 88)[iParam0] = iVar0;
	}
}

var Function_18(bool bParam0) //Position: 0xAB4 / 2740
{
	return (((GET_DAY(bParam0) != 0 && GET_HOUR(bParam0) != 0) && GET_MINUTE(bParam0) != 0) && GET_SECOND(bParam0) != 1);
}

int Function_19() //Position: 0xAD9 / 2777
{
	return Global_12976.f_156;
}

void Function_20(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0xAE4 / 2788
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_21(bParam0, iParam1, iParam2) && !bParam3)
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

bool Function_21(bool bParam0, var uParam1, int iParam2) //Position: 0xB50 / 2896
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
		if (Function_23(DECOR_GET_INT(bParam0, &cVar1)) > 3)
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
		switch (Function_22(uVar0))
		{
			case 0x00000002:
				if (!Function_24(Global_76847, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_22(char* cParam0) //Position: 0xBC8 / 3016
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

int Function_23(int iParam0) //Position: 0xC69 / 3177
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

bool Function_24(var uParam0, int iParam1) //Position: 0xCA6 / 3238
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

bool Function_25(int iParam0, bool bParam1) //Position: 0xCB9 / 3257
{
	int iVar0;
	
	iVar0 = Function_27(iParam0);
	if (!Function_26(iVar0))
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

bool Function_26(int iParam0) //Position: 0xCF6 / 3318
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

var Function_27(int iParam0) //Position: 0xD0D / 3341
{
	if (!Function_28(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_28(int iParam0) //Position: 0xD27 / 3367
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_29(bool bParam0) //Position: 0xD3D / 3389
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
		Function_30();
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

void Function_30() //Position: 0xDC8 / 3528
{
	int iVar0;
	
	Global_26960 = Function_36(StackVal);
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

void Function_31(int iParam0) //Position: 0xE16 / 3606
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		Function_32(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_32(var uParam0, int iParam1) //Position: 0xE3C / 3644
{
	if (Function_34(uParam0[iParam13], 4))
	{
		if (Function_34(uParam0[iParam13], 1))
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
			Function_33(uParam0[iParam13], 1);
			Function_33(uParam0[iParam13], 2);
			Function_33(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_33(var uParam0, int iParam1) //Position: 0xF6A / 3946
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_34(var uParam0, int iParam1) //Position: 0xF84 / 3972
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_35(var uParam0, var uParam1, int iParam2) //Position: 0xFA1 / 4001
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

int Function_36(int iParam0) //Position: 0xFD7 / 4055
{
	if (!Function_37(iParam0))
	{
		return 0;
	}
	return Global_26401[iParam0];
}

bool Function_37(int iParam0) //Position: 0xFEF / 4079
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return 1;
}

int Function_38(int iParam0) //Position: 0x1004 / 4100
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

void Function_39(int iParam0) //Position: 0x1068 / 4200
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

void Function_40(var uParam0, bool bParam1) //Position: 0x107B / 4219
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
									if ((iVar7 == 1 || Function_251()) || bParam1)
									{
										Function_41(bVar6, Function_74(), -1.0f, -1.0f, 0, 0);
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

void Function_41(bool bParam0, bool bParam1, float fParam2, float fParam3, int iParam4, int iParam5) //Position: 0x1175 / 4469
{
	if (Function_251())
	{
		MEMORY_REPORT_POSITION_AUTO(bParam0, Global_34573, 0);
		MEMORY_CONSIDER_AS(bParam0, Global_34573, 2);
		TASK_FLEE_ACTORSET(bParam0, Global_78576, fParam2, fParam3, iParam4, iParam5, 0);
	}
	else if (IS_ACTOR_VALID(bParam0) && IS_ACTOR_VALID(bParam1))
	{
		TASK_FLEE_ACTOR(bParam0, bParam1, fParam2, fParam3, iParam4, iParam5, 0);
	}
}

void Function_42(var uParam0, bool bParam1, bool bParam2) //Position: 0x11C8 / 4552
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(*uParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(*uParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(*uParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			SQUAD_LEAVE(bVar1);
			if (bParam2)
			{
				if (!Function_72(bVar1, 0x3f800000, 0x42960000, 1, 1, 0))
				{
					DESTROY_ACTOR(bVar1);
				}
			}
			if (IS_ACTOR_VALID(bVar1))
			{
				if (bParam1)
				{
					RELEASE_ACTOR_AS_AMBIENT(bVar1);
				}
				else
				{
					RELEASE_ACTOR(bVar1);
				}
			}
		}
		else
		{
			bVar0++;
		}
	}
	return;
}

void Function_43(bool bParam0) //Position: 0x1244 / 4676
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
			while (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bVar1)))
			{
				REMOVE_BLIP(GET_BLIP_ON_ACTOR(bVar1));
			}
		}
		bVar0++;
	}
	return;
}

void Function_44() //Position: 0x1291 / 4753
{
	AI_GLOBAL_CLEAR_ALL_DANGER();
	Function_45(GET_AMBIENT_LAYOUT());
	Function_45(GET_GC_LAYOUT());
	Function_45(Global_6289);
	Function_45(Global_6288);
	Function_45(Global_28841);
	Function_45(Global_6290);
	Function_45(Global_63535);
	return;
}

void Function_45(bool bParam0) //Position: 0x12C4 / 4804
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (IS_LAYOUTREF_VALID(bParam0))
	{
		bVar0 = CREATE_OBJECT_ITERATOR(bParam0);
		ITERATE_IN_LAYOUT(bVar0, bParam0);
		bVar1 = START_OBJECT_ITERATOR(bVar0);
		if (IS_ACTOR_VALID(Function_74()))
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
						MEMORY_CONSIDER_AS(bVar2, Function_74(), 2);
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

void Function_46(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x1360 / 4960
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(*uParam0))
	{
		return;
	}
	if (SQUAD_GET_SIZE(*uParam0) >= 0)
	{
		Function_51(*uParam0);
		Function_50(*uParam0, 0);
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
				MEMORY_REPORT_POSITION_AUTO(bVar1, Global_34573, 0);
				MEMORY_CONSIDER_AS(bVar1, Global_34573, 2);
				TASK_CLEAR(bVar1);
				if (!bParam3)
				{
					Function_41(bVar1, Global_34573, -1.0f, -1.0f, 0, 0);
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
				if (Function_49(bVar1))
				{
					Function_48(bVar1, 0);
					if (IS_PERS_CHAR_VALID(GET_PERS_CHAR_FROM_ACTOR(bVar1)))
					{
						Function_47(GET_PERS_CHAR_FROM_ACTOR(bVar1));
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

int Function_47(bool bParam0) //Position: 0x14A7 / 5287
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
			AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bVar0, 1);
		}
		bVar1 = FIND_OBJECT_IN_OBJECT(GET_OBJECT_FROM_PERS_CHAR(bParam0), "Persistent_Char_Brain");
		if (IS_OBJECT_VALID(bVar1))
		{
			return GRINGO_UPDATE_BOOL(GET_GRINGO_FROM_OBJECT(bVar1), "ScriptStructure", "stolen_flag", 0);
		}
	}
	return 0;
}

void Function_48(bool bParam0, int iParam1) //Position: 0x1541 / 5441
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

bool Function_49(bool bParam0) //Position: 0x157F / 5503
{
	return DECOR_CHECK_EXIST(bParam0, "nsharedlaw");
}

void Function_50(bool bParam0, int iParam1) //Position: 0x1596 / 5526
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
				SET_ACTOR_VISION_XRAY(bVar1, iParam1);
			}
		}
		bVar0++;
	}
	return;
}

void Function_51(bool bParam0) //Position: 0x15DF / 5599
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

void Function_52() //Position: 0x1614 / 5652
{
	int iVar0;
	int iVar1;
	
	Function_68(StackVal, Global_26960);
	iVar0 = 0;
	while (StackVal <= iVar0)
	{
		if (Global_26998[iVar018] != 0)
		{
			(*&Global_26401 + 36[iVar0181][35])[(*&Global_26960 + 4)[iVar0]] = StackVal;
			iVar1 = Function_67(Global_26998[iVar018]);
			if (iVar1 != 4294967295)
			{
				Function_53(iVar1, (*&Global_26960 + 4)[iVar0], 0);
			}
		}
		iVar0++;
	}
	Function_30();
	return;
}

int Function_53(int iParam0, bool bParam1, bool bParam2) //Position: 0x1687 / 5767
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
		Function_66(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_65(iParam0);
	if (bParam2)
	{
		Function_54(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_54(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x1922 / 6434
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
			bParam2 = (bParam2 * 3.28084f);
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_64(390))), 32);
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
					bVar19 = (Function_63(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_63(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_61(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, false, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_59(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_57(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_56(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_55(), &Var9);
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

var Function_55() //Position: 0x1F4F / 8015
{
	int iVar0;
	
	return iVar0;
}

var Function_56(int iParam0) //Position: 0x1F57 / 8023
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_57(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x1F68 / 8040
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_58("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_58("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_58("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_58(char* cParam0, bool bParam1) //Position: 0x205D / 8285
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_59(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x2076 / 8310
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_95(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_60(Function_95(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_60(int iParam0, int iParam1) //Position: 0x20DB / 8411
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_61(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x20ED / 8429
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
	if (((Function_62(iParam0) != 19 || Function_62(iParam0) != 17) || Function_62(iParam0) != 10) || Function_62(iParam0) != 9)
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

int Function_62(int iParam0) //Position: 0x221D / 8733
{
	return Global_35278[iParam020].f_48;
}

float Function_63(int iParam0) //Position: 0x222C / 8748
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_64(int iParam0) //Position: 0x2265 / 8805
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_65(int iParam0) //Position: 0x22A2 / 8866
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

int Function_66(int iParam0, bool bParam1, bool bParam2) //Position: 0x243C / 9276
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
		if ((iParam0 <= 500 && iParam0 >= 586) || iParam0 != 596)
		{
			Global_34581[iVar1] = (Global_34581[iVar1] + 1.0f);
		}
		else
		{
			Global_34581[iVar1] = (Global_34581[iVar1] + bParam1);
		}
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

int Function_67(int iParam0) //Position: 0x2680 / 9856
{
	switch (iParam0)
	{
		case 0x00000001:
			return 226;
			break;
		
		case 0x00000002:
			return 227;
			break;
		
		case 0x00000003:
			return 228;
			break;
		
		case 0x00000004:
			return 229;
			break;
		
		case 0x00000005:
			return 230;
			break;
		
		case 0x00000006:
			return 231;
			break;
		
		case 0x00000007:
			return 232;
			break;
		
		case 0x00000008:
			return 233;
			break;
		
		case 0x00000009:
			return 234;
			break;
		
		case 0x0000000A:
			return 235;
			break;
		
		case 0x0000000B:
			return 236;
			break;
		
		case 0x0000000C:
			return 237;
			break;
		
		case 0x0000000D:
			return 238;
			break;
		
		case 0x0000000E:
			return 239;
			break;
		
		case 0x0000000F:
			return 240;
			break;
		
		case 0x00000010:
		case 0x00000011:
			return 241;
			break;
		
		case 0x00000013:
		case 0x00000014:
			return 242;
			break;
		
		case 0x00000015:
			return 243;
			break;
		
		case 0x00000016:
			return 244;
			break;
		
		case 0x00000019:
			return 245;
			break;
		
		case 0x0000001B:
			return 246;
			break;
		
		case 0x0000001C:
			return 247;
			break;
		
		case 0x0000001E:
			return 248;
			break;
		
		case 0x00000020:
			return 249;
			break;
		
		case 0x00000023:
			return 250;
			break;
		
		default:
			LOG_ERROR("Trying to get a stat for a crime we dont' keep stats for");
			break;
	}
	return 4294967295;
}

void Function_68(int iParam0, bool bParam1) //Position: 0x2807 / 10247
{
	if (!Function_37(iParam0))
	{
		return;
	}
	Global_26401[iParam0] = bParam1;
	Function_70((*&Global_26401 + 2220)[iParam0], TO_FLOAT(bParam1), 0);
	Function_70(222, TO_FLOAT((Function_69(223) + Function_69(224))), 0);
	return;
}

int Function_69(int iParam0) //Position: 0x2848 / 10312
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[iParam0]);
}

int Function_70(int iParam0, bool bParam1, bool bParam2) //Position: 0x2889 / 10377
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_SET_VALUE_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 5)
	{
		PRINTSTRING("STAT_SET_VALUE_NOW: You cannot set value of this STAT_TYPE_LIFETIME directly: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_NOW: You cannot set value of a STAT_TYPE_LIFETIME directly, use the COLLECTION version instead!");
		return 0;
	}
	if (Global_35278[iParam020].f_48 == 2)
	{
		PRINTSTRING("STAT_SET_VALUE_NOW: You cannot set value of this STAT_TYPE_COLLECTIBLE directly: ");
		PRINTSTRING(&(Global_35278[iParam020]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_NOW: You cannot set value of a STAT_TYPE_COLLECTIBLE directly, only increase and decrease operations are allowed");
		return 0;
	}
	if (Global_34581[iParam0] > bParam1)
	{
		Function_66(iParam0, bParam1, 0);
	}
	Global_34581[iParam0] = bParam1;
	Function_65(iParam0);
	if (bParam2)
	{
		Function_54(iParam0, 1, bParam1, 0, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_71(bool bParam0) //Position: 0x2AF5 / 10997
{
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	SQUAD_MAKE_EMPTY(bParam0);
	return;
}

bool Function_72(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x2B0A / 11018
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), bParam0, iParam1, iParam2, iParam3, iParam4, iParam5);
}

bool Function_73(bool bParam0, bool bParam1, bool bParam2) //Position: 0x2B24 / 11044
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

bool Function_74() //Position: 0x2B64 / 11108
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

int Function_75(int iParam0, bool bParam1) //Position: 0x2B79 / 11129
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

void Function_76(int iParam0) //Position: 0x2BF3 / 11251
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
							SET_ACTOR_VISION_XRAY(bVar1, 0);
							if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bVar1)))
							{
								REMOVE_BLIP(GET_BLIP_ON_ACTOR(bVar1));
							}
							MEMORY_REPORT_POSITION_AUTO(bVar1, Global_34573, 0);
							MEMORY_CONSIDER_AS(bVar1, Global_34573, 2);
							TASK_CLEAR(bVar1);
							SQUAD_LEAVE(bVar1);
							if (Function_49(bVar1))
							{
								Function_48(bVar1, 0);
								if (IS_PERS_CHAR_VALID(GET_PERS_CHAR_FROM_ACTOR(bVar1)))
								{
									Function_47(GET_PERS_CHAR_FROM_ACTOR(bVar1));
									Function_41(bVar1, Global_34573, -1.0f, -1.0f, 0, 0);
									DEREFERENCE_ACTOR(bVar1);
								}
								else
								{
									Function_41(bVar1, Global_34573, -1.0f, -1.0f, 0, 0);
									RELEASE_ACTOR(bVar1);
								}
							}
							else
							{
								Function_41(bVar1, Global_34573, -1.0f, -1.0f, 0, 0);
								TASK_PRIORITY_SET(bVar1, 1);
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

void Function_77(var uParam0, int iParam1) //Position: 0x2D8F / 11663
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
			bVar0 = RAND_INT_RANGE(0, 10000);
			if (bVar0 <= 3333)
			{
				Function_78(uParam0->f_576, 109, iParam1->f_48);
			}
			else if (bVar0 <= 6666)
			{
				Function_78(uParam0->f_576, 58, iParam1->f_48);
			}
			else
			{
				Function_78(uParam0->f_576, 105, iParam1->f_48);
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
					if (RAND_INT_RANGE(0, true) == 0)
					{
						bVar9 = 110;
					}
				}
				else if ((((bVar10 != 184 || bVar10 != 185) || bVar10 != 186) || bVar10 != 187) || bVar10 != 188)
				{
					if (RAND_INT_RANGE(0, 3) == 0)
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

bool Function_78(bool bParam0, bool bParam1, bool bParam2) //Position: 0x2F87 / 12167
{
	DECOR_SET_INT(bParam0, "nextspeech", bParam1);
	DECOR_SET_INT(bParam0, "nextspeechtarget", bParam2);
	return 1;
}

void Function_79(int iParam0) //Position: 0x2FBE / 12222
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(iParam0->f_576))
	{
		Function_85(iParam0, SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_576, bVar0));
		bVar0++;
	}
	Function_80(iParam0);
	return;
}

void Function_80(int iParam0) //Position: 0x2FF1 / 12273
{
	struct<9> Var0;
	
	if (Global_3386)
	{
		if (!IS_OBJECT_VALID(iParam0->f_728) || GET_CURRENT_GAME_TIME() <= iParam0->f_732)
		{
			iParam0->f_728 = Function_82(Global_34573, 4);
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
		if ((Global_3386 && Function_81()) && IS_OBJECT_VALID(iParam0->f_728))
		{
			GET_OBJECT_POSITION(iParam0->f_728, iParam0 + 388);
			iParam0->f_384 = ADD_BLIP_FOR_COORD(iParam0 + 388, 440, 0f, 2, 0);
		}
		else
		{
			iParam0->f_384 = ADD_BLIP_FOR_COORD(iParam0 + 428, 440, 0f, 2, 0);
		}
	}
	if ((Global_3386 && Function_81()) && IS_OBJECT_VALID(iParam0->f_728))
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
		SET_BLIP_COLOR(iParam0->f_384, 0.1f, 0.1f, 0.1f, 0.5f);
	}
	else
	{
		SET_BLIP_COLOR(iParam0->f_384, 0.64f, 0.22f, 0.26f, 0.5f);
	}
	return;
}

int Function_81() //Position: 0x3157 / 12631
{
	if (StackVal != 5 || Global_29006 != Global_30707[3])
	{
		return 0;
	}
	return 1;
}

var Function_82(bool bParam0, int iParam1) //Position: 0x317A / 12666
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
			if (Function_84(GET_VOLUME_FROM_OBJECT(bVar8), iParam1))
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
	Function_83(&bVar10);
	ITERATE_IN_LAYOUT(bVar10, Global_30616);
	ITERATE_ON_OBJECT_TYPE(bVar10, 10);
	bVar8 = START_OBJECT_ITERATOR(bVar10);
	while (IS_OBJECT_VALID(bVar8))
	{
		if (DECOR_CHECK_EXIST(bVar8, "locflag"))
		{
			if (Function_84(GET_VOLUME_FROM_OBJECT(bVar8), iParam1))
			{
				GET_VOLUME_CENTER(GET_VOLUME_FROM_OBJECT(bVar8), &vVar4);
				if (VDIST(vVar1, vVar4) > bVar0)
				{
					bVar7 = bVar8;
					bVar0 = VDIST(vVar1, vVar4);
				}
			}
		}
		Function_83(&bVar11);
		ITERATE_IN_LAYOUT(bVar11, Global_30616);
		ITERATE_IN_VOLUME_SET(bVar11, GET_VOLUME_FROM_OBJECT(bVar8));
		bVar9 = START_OBJECT_ITERATOR(bVar11);
		while (IS_OBJECT_VALID(bVar9))
		{
			if (DECOR_CHECK_EXIST(bVar9, "locflag"))
			{
				if (Function_84(GET_VOLUME_FROM_OBJECT(bVar9), iParam1))
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

int Function_83(bool bParam0) //Position: 0x332B / 13099
{
	if (IS_ITERATOR_VALID(*bParam0))
	{
		ITERATE_EVERYWHERE(*bParam0);
		ITERATE_ON_PARTIAL_NAME(*bParam0, Function_55());
		ITERATE_ON_PARTIAL_MODEL_NAME(*bParam0, Function_55());
		ITERATE_ON_OBJECT_TYPE(*bParam0, 4294967295);
		return 1;
	}
	return 0;
}

bool Function_84(bool bParam0, int iParam1) //Position: 0x335C / 13148
{
	if (!DECOR_CHECK_EXIST(bParam0, "locflag"))
	{
		return 0;
	}
	return (DECOR_GET_INT(bParam0, "locflag") && iParam1) < 0;
}

void Function_85(int iParam0, bool bParam1) //Position: 0x338B / 13195
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
					Function_88(bParam1);
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
			if (GET_CURRENT_GAME_TIME() < (iParam0->f_356 + (Function_86(iParam0) / 1.5f)))
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

float Function_86(int iParam0) //Position: 0x348A / 13450
{
	bool bVar0;
	int iVar1;
	
	if (Function_75(iParam0, 1) == 0)
	{
		return 10.0f;
	}
	if (iParam0->f_628 && !Function_87(0))
	{
		return 20.0f;
	}
	bVar0 = Global_26401[StackVal];
	bVar0 = (bVar0 - 70);
	if (bVar0 <= 0)
	{
		bVar0 = false;
	}
	iVar1 = (22.0f + (TO_FLOAT(bVar0) / 13.043f));
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

bool Function_87(int iParam0) //Position: 0x3515 / 13589
{
	return (*&Global_12976 + 104)[iParam0];
}

void Function_88(bool bParam0) //Position: 0x3524 / 13604
{
	Function_89(bParam0);
	if (IS_ACTOR_VALID(bParam0) && IS_ACTOR_ALIVE(bParam0))
	{
		ADD_BLIP_FOR_ACTOR(bParam0, 345, 0, 2, 0);
		if (GET_THIS_SCRIPT_ID() == Global_26391.f_32)
		{
			SET_BLIP_COLOR(GET_BLIP_ON_ACTOR(bParam0), 1.0f, 1.0f, 1.0f, 0.25f);
		}
		HUD_SET_SHOOT_BLIP_ICON_FOR_ACTOR(bParam0, 415);
	}
	return;
}

void Function_89(bool bParam0) //Position: 0x356C / 13676
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

var Function_90(int iParam0, int iParam1) //Position: 0x3598 / 13720
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
				fVar5 = Function_94(iParam0, !GET_MOUNT(bVar7) != "");
				bVar6 = VDIST(vVar2, *(iParam0 + 416));
				if (!bVar9)
				{
					if (!Function_49(bVar7))
					{
						if (Function_93(bVar7, bVar6, fVar5, bVar8))
						{
							iParam0->f_600 = (iParam0->f_600 - 1);
							iVar0 = 1;
							bVar9 = true;
						}
					}
				}
				Function_91(iParam0, bVar7, bVar6, fVar5, iParam1->f_48);
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
				fVar5 = Function_94(iParam0, 0);
				bVar6 = VDIST(vVar2, *(iParam0 + 416));
				if (Function_93(bVar7, bVar6, fVar5, bVar8))
				{
					bVar9 = true;
				}
			}
			bVar1++;
		}
	}
	return iVar0;
}

void Function_91(int iParam0, bool bParam1, float fParam2, float fParam3, bool bParam4) //Position: 0x36C4 / 14020
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
	if (!Function_92(iParam0))
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
			Function_41(GET_MOUNT(bParam1), bParam1, -1.0f, -1.0f, 0, 0);
			TASK_OVERRIDE_SET_MOVETYPE(GET_MOUNT(bParam1), 4);
			TASK_DISMOUNT(bParam1, 1);
			MEMORY_PREFER_WALKING(bParam1, 1);
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
		if (VMAG(vVar1) < 0.25f || fParam2 < 10.0f)
		{
			if (GET_TASK_STATUS(bParam1, 12) == 1)
			{
				TASK_CLEAR(bParam1);
			}
			MEMORY_PREFER_RIDING(bParam1, true);
		}
	}
}

bool Function_92(int iParam0) //Position: 0x37C5 / 14277
{
	if (Global_29006 == Global_30693[1])
	{
		if (StackVal && (StackVal && (iParam0->f_416 < -1744.93f && iParam0->f_416 > -1673.62f) > 4261.5f) < 4181.3f)
		{
			return 1;
		}
	}
	return 0;
}

bool Function_93(bool bParam0, bool bParam1, float fParam2, bool bParam3) //Position: 0x3810 / 14352
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
			if (!Function_72(bParam0, 1.0f, (fParam2 + 10.0f), 1, 1, 0))
			{
				if (IS_ACTOR_VALID(GET_MOUNT(bParam0)))
				{
					Function_41(GET_MOUNT(bParam0), Global_34573, -1.0f, -1.0f, 0, 0);
					RELEASE_ACTOR(GET_MOUNT(bParam0));
				}
				if (IS_ACTOR_VALID(bParam0))
				{
					SQUAD_LEAVE(bParam0);
					TASK_CLEAR(bParam0);
					MEMORY_CONSIDER_AS(bParam0, Global_34573, 2);
					Function_41(bParam0, Global_34573, -1.0f, -1.0f, 0, 0);
					TASK_PRIORITY_SET(bParam0, 0);
					if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam0)))
					{
						REMOVE_BLIP(GET_BLIP_ON_ACTOR(bParam0));
					}
					if (IS_PERS_CHAR_VALID(GET_PERS_CHAR_FROM_ACTOR(bParam0)))
					{
						Function_47(GET_PERS_CHAR_FROM_ACTOR(bParam0));
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
	if (bParam1 < (fParam2 * 0.8f))
	{
		GET_ACTOR_VELOCITY(bParam0, &vVar0);
		if (!DECOR_CHECK_EXIST(bParam0, "nstuckTime"))
		{
			if (VMAG(vVar0) >= 0.25f)
			{
				if (!IS_ACTOR_HOGTIED(bParam0))
				{
					DECOR_SET_FLOAT(bParam0, "nstuckTime", GET_CURRENT_GAME_TIME());
					return 0;
				}
			}
		}
		if (VMAG(vVar0) < 0.25f)
		{
			DECOR_REMOVE(bParam0, "nstuckTime");
			return 0;
		}
		if (DECOR_GET_FLOAT(bParam0, "nstuckTime") + 10.0f) > GET_CURRENT_GAME_TIME()
		{
			if (!Function_72(bParam0, 0x3f800000, 0x42960000, 1, 1, 0))
			{
				if (IS_ACTOR_VALID(GET_MOUNT(bParam0)))
				{
					Function_41(GET_MOUNT(bParam0), Global_34573, -1.0f, -1.0f, 0, 0);
					RELEASE_ACTOR(GET_MOUNT(bParam0));
				}
				if (IS_ACTOR_VALID(bParam0))
				{
					SQUAD_LEAVE(bParam0);
					TASK_CLEAR(bParam0);
					MEMORY_CONSIDER_AS(bParam0, Global_34573, 2);
					Function_41(bParam0, Global_34573, -1.0f, -1.0f, 0, 0);
					TASK_PRIORITY_SET(bParam0, 0);
					if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam0)))
					{
						REMOVE_BLIP(GET_BLIP_ON_ACTOR(bParam0));
					}
					if (IS_PERS_CHAR_VALID(GET_PERS_CHAR_FROM_ACTOR(bParam0)))
					{
						Function_47(GET_PERS_CHAR_FROM_ACTOR(bParam0));
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

var Function_94(float fParam0, bool bParam1) //Position: 0x3A10 / 14864
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
				if (!Function_251())
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

int Function_95(int iParam0, bool bParam1) //Position: 0x3A7B / 14971
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

bool Function_96(int iParam0, int iParam1) //Position: 0x3A8D / 14989
{
	int iVar0;
	int iVar1;
	bool bVar2;
	struct<9> Var3;
	var uVar12;
	bool bVar13;
	bool bVar14;
	var uVar15;
	float fVar16;
	float fVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	float fVar25;
	vector3 vVar26;
	
	if ((GET_CURRENT_GAME_TIME() - iParam0->f_356) < 15.0f)
	{
		VSCALE(iParam0 + 512, 0.99f);
	}
	*(iParam0 + 524) = { StackVal, StackVal, *(iParam0 + 512) };
	VSCALE(iParam0 + 524, (GET_CURRENT_GAME_TIME() - iParam0->f_356));
	*(iParam0 + 524) = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(*(iParam0 + 500), *(iParam0 + 524), StackVal) };
	Function_155(iParam0 + 524, 10.0f, iParam0 + 524, 10);
	switch (iParam0->f_648)
	{
		case 0x00000000:
			Function_154("LAW_AI_STATE: INIT", 11);
			iVar0 = (Function_75(iParam0, 1) / 2);
			SQUAD_GOALS_CLEAR(iParam0->f_576);
			Function_153(iParam0->f_576);
			SQUAD_GOAL_ADD_GENERAL_TASK(iParam0->f_576, 1, 2, iVar0);
			TASK_GO_TO_COORD_NONSTOP(false, iParam0 + 524, 3, 10.0f);
			iParam0->f_652 = SQUAD_GOAL_ADD_GENERAL_TASK(iParam0->f_576, 1, 2, 4294967295);
			TASK_GO_NEAR_COORD(false, iParam0 + 488, 10.0f, 3);
			SQUAD_GOAL_ADD_SHARE_PERCEPTION(iParam0->f_576, 15);
			SQUAD_GOAL_ADD_GENERAL_TASK(iParam0->f_580, 0, 1, 4294967295);
			TASK_MELEE_ATTACK(false, iParam1->f_48, -1.0f);
			SQUAD_GOAL_ADD_SHARE_PERCEPTION(iParam0->f_580, 15);
			Function_152(iParam0->f_576, 1);
			iParam0->f_648 = 1;
		
		case 0x00000001:
			Function_151(iParam0, iParam1, 0);
			if (!Function_92(iParam0))
			{
				if (Function_150(iParam1->f_52, iParam1->f_48, 1))
				{
					iParam0->f_648 = 4;
					return 0;
				}
				if (Function_148(iParam0->f_576, iParam1->f_48, 20.0f, 1))
				{
					iParam0->f_648 = 4;
					return 0;
				}
				if (Function_148(iParam0->f_580, iParam1->f_48, 20.0f, 1))
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
			Function_153(iParam0->f_576);
			Function_154("LAW_AI_STATE: ARREST - SHOOT", 11);
			if (!Function_92(iParam0) && Global_13094 >= 0.2f)
			{
				SQUAD_GOAL_ADD_COMBAT(iParam0->f_576, 2, 4294967295, 0);
				SQUAD_GOAL_ADD_STAY_WITHIN_VOLUME(iParam0->f_576, 1, iParam0->f_412, 3, 0);
				Function_152(iParam0->f_576, 1);
				iParam0->f_408 = 0;
			}
			else
			{
				SQUAD_GOAL_ADD_GENERAL_TASK(iParam0->f_576, 0, 1, 4294967295);
				TASK_KILL_CHAR(false, iParam1->f_48);
				if (!Function_92(iParam0))
				{
					Function_152(iParam0->f_576, 0);
				}
				else
				{
					Function_152(iParam0->f_576, 1);
				}
				iParam0->f_408 = 1;
				iParam0->f_484 = GET_CURRENT_GAME_TIME();
			}
			SQUAD_GOAL_ADD_SHARE_PERCEPTION(iParam0->f_576, 15);
			SQUAD_GOALS_CLEAR(iParam0->f_580);
			Function_153(iParam0->f_580);
			SQUAD_GOAL_ADD_GENERAL_TASK(iParam0->f_580, 0, 1, 4294967295);
			TASK_MELEE_ATTACK(false, iParam1->f_48, -1.0f);
			SQUAD_GOAL_ADD_STAY_WITHIN_VOLUME(iParam0->f_580, 1, iParam0->f_412, 3, 0);
			SQUAD_GOAL_ADD_SHARE_PERCEPTION(iParam0->f_580, 15);
			if (iParam0->f_536 > 0.0f)
			{
				if (*iParam0 != 0 || *iParam0 != 1)
				{
					Function_151(iParam0, iParam1, 1);
				}
			}
			iParam0->f_648 = 5;
		
		case 0x00000005:
			if (Function_145(iParam0))
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
				if (!Function_150(iParam1->f_52, iParam1->f_48, 1))
				{
					if (!Function_144(iParam0, 5.0f))
					{
						if (!Function_142(StackVal, StackVal, iParam0->f_576, *(iParam0 + 416), 20.0f))
						{
							if (!iParam0->f_568 && !Function_92(iParam0))
							{
								iParam0->f_648 = 6;
								return 0;
							}
						}
						if (Global_13094 < 0.2f)
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
							if (StackVal && !Function_142(StackVal, (StackVal && Function_142(StackVal, Function_144(iParam0, 10.0f), iParam0->f_576, *(iParam0 + 416), 15.0f)), iParam0->f_576, *(iParam0 + 416), 5.0f))
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
				if (!Function_141(iParam0->f_576, iParam1->f_48, 0))
				{
					if (!iParam0->f_568 && !Function_92(iParam0))
					{
						iParam0->f_648 = 6;
						return 0;
					}
				}
			}
			if (iParam0->f_480 != 0.0f)
			{
				if (Function_148(iParam0->f_576, Function_74(), 25.0f, 0))
				{
					iParam0->f_480 = GET_CURRENT_GAME_TIME();
				}
			}
			break;
		
		case 0x00000006:
			SQUAD_GOALS_CLEAR(iParam0->f_576);
			Function_153(iParam0->f_576);
			Function_154("LAW_AI_STATE: GIVE CHASE", 11);
			SQUAD_GOAL_ADD_GENERAL_TASK(iParam0->f_576, 0, 1, 4294967295);
			TASK_GO_NEAR_ACTOR(false, iParam1->f_48, 15.0f, 3);
			SQUAD_GOAL_ADD_SHARE_PERCEPTION(iParam0->f_576, 15);
			SQUAD_GOALS_CLEAR(iParam0->f_580);
			Function_153(iParam0->f_580);
			SQUAD_GOAL_ADD_GENERAL_TASK(iParam0->f_580, 0, 1, 4294967295);
			TASK_MELEE_ATTACK(false, iParam1->f_48, -1.0f);
			SQUAD_GOAL_ADD_STAY_WITHIN_VOLUME(iParam0->f_580, 1, iParam0->f_412, 3, 0);
			SQUAD_GOAL_ADD_SHARE_PERCEPTION(iParam0->f_580, 15);
			Function_152(iParam0->f_576, 1);
			iParam0->f_648 = 7;
		
		case 0x00000007:
			if (Function_145(iParam0))
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
			if (!Function_92(iParam0))
			{
				if (Function_142(StackVal, StackVal, iParam0->f_576, *(iParam0 + 416), 20.0f))
				{
					if (!iParam0->f_568)
					{
						iParam0->f_648 = 4;
						return 0;
					}
				}
			}
			if (Function_142(StackVal, StackVal, iParam0->f_576, *(iParam0 + 416), 80.0f))
			{
				if (!iParam0->f_568)
				{
					iParam0->f_648 = 4;
					return 0;
				}
			}
			if (!bVar18)
			{
				if (Function_150(iParam1->f_52, iParam1->f_48, 1))
				{
					if (!iParam0->f_568)
					{
						iParam0->f_648 = 4;
						return 0;
					}
				}
				if (!Function_144(iParam0, 20.0f) && !Global_29006 != Global_30693[1])
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
				if (Function_141(iParam0->f_576, iParam1->f_48, 0))
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
				if (Function_148(iParam0->f_576, Function_74(), 25.0f, 0))
				{
					iParam0->f_480 = GET_CURRENT_GAME_TIME();
				}
			}
			break;
		
		case 0x0000000C:
			if (Function_140(iParam0))
			{
				iParam0->f_648 = 4;
				return 0;
			}
			break;
		
		case 0x00000008:
			Function_154("LAW_AI_STATE: PURSUE", 11);
			SQUAD_GOALS_CLEAR(iParam0->f_576);
			Function_153(iParam0->f_576);
			if (!IS_OBJECT_VALID(iParam0->f_664))
			{
				iParam0->f_664 = CREATE_POINT_IN_LAYOUT(iParam0->f_336, Function_55(), *(iParam0 + 524), 0.0f, 0.0f, 0.0f);
			}
			else
			{
				SET_OBJECT_POSITION(iParam0->f_664, *(iParam0 + 524));
			}
			SQUAD_GOAL_ADD_GENERAL_TASK(iParam0->f_576, 1, 0, 4294967295);
			TASK_SEARCH_FOR_OBJECT(0, iParam1->f_48, 0, -1.0f);
			SQUAD_GOAL_ADD_SHARE_PERCEPTION(iParam0->f_576, 15);
			SQUAD_GOALS_CLEAR(iParam0->f_580);
			Function_153(iParam0->f_580);
			SQUAD_GOAL_ADD_GENERAL_TASK(iParam0->f_580, 0, 1, 4294967295);
			TASK_MELEE_ATTACK(false, iParam1->f_48, -1.0f);
			SQUAD_GOAL_ADD_SHARE_PERCEPTION(iParam0->f_580, 15);
			Function_152(iParam0->f_576, 1);
			Function_139(iParam0, 0);
			iParam0->f_648 = 9;
		
		case 0x00000009:
			if (Function_145(iParam0))
			{
				return 0;
			}
			bVar21 = Function_136(iParam1->f_48, 3);
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
				if (Function_135(iParam0->f_580) >= 0)
				{
					SET_OBJECT_POSITION(iParam0->f_664, *(iParam0 + 416));
				}
				else
				{
					SET_OBJECT_POSITION(iParam0->f_664, *(iParam0 + 524));
				}
			}
			if (Function_144(iParam0, 0x3f800000))
			{
				if (!iParam0->f_568)
				{
					iParam0->f_648 = 4;
					return 0;
				}
			}
			if (!Function_144(iParam0, 20.0f) && !Global_3386)
			{
				if (!iParam0->f_568)
				{
					iParam0->f_648 = 10;
					return 0;
				}
			}
			break;
		
		case 0x0000000A:
			Function_154("LAW_AI_STATE: PURSUE", 11);
			SQUAD_GOALS_CLEAR(iParam0->f_576);
			Function_153(iParam0->f_576);
			if (!IS_OBJECT_VALID(iParam0->f_664))
			{
				iParam0->f_664 = CREATE_POINT_IN_LAYOUT(iParam0->f_336, Function_55(), *(iParam0 + 524), 0.0f, 0.0f, 0.0f);
			}
			else
			{
				SET_OBJECT_POSITION(iParam0->f_664, *(iParam0 + 524));
			}
			SQUAD_GOAL_ADD_GENERAL_TASK(iParam0->f_576, 1, 0, 4294967295);
			TASK_FOLLOW_OBJECT_AT_DISTANCE(false, iParam0->f_664, 30.0f, 3);
			SQUAD_GOAL_ADD_SHARE_PERCEPTION(iParam0->f_576, 15);
			SQUAD_GOALS_CLEAR(iParam0->f_580);
			Function_153(iParam0->f_580);
			TASK_FOLLOW_OBJECT_AT_DISTANCE(false, iParam0->f_664, 15.0f, 3);
			SQUAD_GOAL_ADD_SHARE_PERCEPTION(iParam0->f_580, 15);
			Function_152(iParam0->f_576, 1);
			iParam0->f_648 = 11;
		
		case 0x0000000B:
			if (Function_145(iParam0))
			{
				return 0;
			}
			if (IS_OBJECT_VALID(iParam0->f_664))
			{
				SET_OBJECT_POSITION(iParam0->f_664, *(iParam0 + 524));
			}
			if (Function_144(iParam0, 0x3f800000))
			{
				if (!iParam0->f_568)
				{
					iParam0->f_648 = 4;
					return 0;
				}
			}
			if (Function_144(iParam0, 15.0f))
			{
				if (!iParam0->f_568)
				{
					iParam0->f_648 = 8;
					return 0;
				}
			}
			break;
		
		case 0x0000000D:
			Function_154("LAW_AI_STATE: SURROUND", 11);
			if (!Function_78(iParam0->f_576, 95, iParam1->f_48))
			{
				Function_305(iParam0->f_576, "law_surround", 5.0f, iParam1->f_64, 30.0f, 0, 0);
			}
			Function_139(iParam0, 0);
			SQUAD_GOALS_CLEAR(iParam0->f_576);
			Function_153(iParam0->f_576);
			if (!IS_OBJECT_VALID(iParam0->f_668))
			{
				iParam0->f_668 = Function_82(iParam1->f_48, 256);
			}
			if (!Function_134(iParam0))
			{
				if (IS_OBJECT_VALID(iParam0->f_668) && GET_OBJECT_TYPE(iParam0->f_668) != 9)
				{
					GET_VOLUME_SCALE(GET_VOLUME_FROM_OBJECT(iParam0->f_668), &vVar3);
					GET_OBJECT_POSITION(iParam0->f_668, &vVar6);
					fVar16 = (5.0f + (Function_133(vVar3.x, vVar3.z) / 2.0f));
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
						fVar16 = (fVar16 + Function_133((5.0f + (Function_133(vVar3.x, vVar3.z) / 2.0f)), 20.0f));
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
				uVar12 = Function_130(iParam0->f_336, 2, fVar16);
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
					uVar15 = SQUAD_GOAL_ADD_STAY_WITHIN_VOLUME(iParam0->f_576, 1, GET_VOLUME_FROM_OBJECT(iParam0->f_668), 4, 0);
				}
				else
				{
					uVar15 = SQUAD_GOAL_ADD_STAY_WITHIN_VOLUME(iParam0->f_576, 1, bVar20, 4, 0);
				}
				SQUAD_GOAL_LINK_MODIFIER_TO_OTHER_GOAL(iParam0->f_576, uVar15, iParam0->f_656);
				bVar2 = false;
				while (bVar2 <= GET_NUM_FORMATION_LOCATIONS(uVar12))
				{
					GET_FORMATION_LOCATION(uVar12, bVar2, &vVar9);
					vVar9 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar6, vVar9, StackVal) };
					fVar17 = Function_128(StackVal, StackVal, StackVal, StackVal, vVar9, vVar6);
					Function_155(&vVar9, 15.0f, &vVar3, 2);
					SQUAD_GOAL_ADD_GENERAL_TASK(iParam0->f_576, (5 + bVar2), 1, 1);
					TASK_GO_TO_COORD_AND_STAY(false, &vVar3, 4, fVar17);
					bVar2++;
				}
				Function_50(iParam0->f_576, 1);
			}
			else
			{
				Function_154("LAW_AI_STATE: SURROUND (RIVERBOAT)", 11);
				SQUAD_GOAL_ADD_STAY_WITHIN_VOLUME(iParam0->f_576, 0, iParam0->f_412, 3, 0);
				SQUAD_GOAL_ADD_GENERAL_TASK(iParam0->f_576, 1, 0, 4294967295);
				TASK_KILL_CHAR(false, iParam1->f_48);
				SQUAD_GOAL_ADD_SHARE_PERCEPTION(iParam0->f_576, 15);
			}
			Function_126(iParam0 + 576);
			Function_125(iParam0->f_576, 1);
			SQUAD_GOAL_ADD_SHARE_PERCEPTION(iParam0->f_576, 15);
			SQUAD_GOALS_CLEAR(iParam0->f_580);
			Function_153(iParam0->f_580);
			SQUAD_GOAL_ADD_GENERAL_TASK(iParam0->f_580, 0, 1, 4294967295);
			TASK_MELEE_ATTACK(false, iParam1->f_48, -1.0f);
			SQUAD_GOAL_ADD_SHARE_PERCEPTION(iParam0->f_580, 15);
			Function_152(iParam0->f_576, 1);
			iParam0->f_648 = 14;
		
		case 0x0000000E:
			if (!iParam0->f_560)
			{
				if (!iParam0->f_568)
				{
					iParam0->f_648 = 4;
					Function_125(iParam0->f_576, 0);
					Function_50(iParam0->f_576, 0);
					return 0;
				}
			}
			if (!Function_134(iParam0))
			{
				bVar2 = false;
				while (bVar2 <= SQUAD_GET_SIZE(iParam0->f_576))
				{
					bVar23 = SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_576, bVar2);
					if (IS_ACTOR_VALID(bVar23))
					{
						if (SQUAD_IS_GOAL_CONTROLLING_ACTOR(iParam0->f_576, iParam0->f_656, bVar23))
						{
							SET_ACTOR_VISION_XRAY(bVar23, 0);
							COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bVar23, 16, 0);
						}
						else
						{
							SET_ACTOR_VISION_XRAY(bVar23, 1);
							COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bVar23, 16, 1);
						}
					}
					bVar2++;
				}
			}
			if (iParam0->f_480 != 0.0f)
			{
				if (Function_148(iParam0->f_576, Function_74(), 25.0f, 0))
				{
					iParam0->f_480 = GET_CURRENT_GAME_TIME();
				}
			}
			break;
		
		case 0x0000000F:
			Function_154("LAW_AI_STATE: SUBMIT CUTSCENE", 11);
			iParam0->f_648 = 16;
			Function_124(&Global_76847, 0x1000000);
			Function_120(0, 1, 1, 1, 1, 1, 1, 0, 1, 1, 0, 1);
			Function_119(iParam0->f_576, iParam1->f_48, 2);
		
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
				Function_39(2048);
			}
			iVar1 = 250;
			break;
		
		case 0x00000011:
			if (HUD_IS_FADED())
			{
				Function_114(1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
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
			Function_154("LAW_AI_STATE: BRIBE CUTSCENE", 11);
			Function_110("law_submit_cutscene", 5.0f, 0, 2, 1, 0);
			iParam0->f_648 = 22;
			bVar14 = Function_107(iParam1->f_48, iParam0->f_576);
			GET_POSITION(iParam1->f_48, iParam0 + 500);
			SQUAD_GOALS_CLEAR(iParam0->f_576);
			SQUAD_GOAL_ADD_MEET_AT_POSITION(iParam0->f_576, 1, iParam0 + 500, 4294967295, 5.0f, 1);
			ACTOR_HOLSTER_WEAPON(iParam1->f_48, 1);
			Function_120(0, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
			if (IS_ACTOR_HOGTIED(bVar14))
			{
				FREE_FROM_HOGTIE(bVar14);
			}
			if (Function_103(&fVar25, &vVar26))
			{
				SET_ACTOR_HEADING(iParam1->f_48, fVar25, 1);
			}
			else
			{
				fVar25 = Function_102(iParam1->f_48);
				Function_101(bVar14);
				vVar26 = { StackVal, StackVal, Function_101(bVar14) };
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
			TASK_PRIORITY_SET(iParam1->f_48, 1);
			TASK_PRIORITY_SET(bVar14, 1);
			AI_IGNORE_ACTOR(iParam1->f_48);
			AI_IGNORE_ACTOR(bVar14);
			SET_ACTOR_CAN_PLAY_GESTURES(bVar14, false);
			SET_ACTOR_CAN_PLAY_BORED_IDLES(bVar14, 0);
			SQUAD_GOAL_ADD_SHARE_PERCEPTION(iParam0->f_576, 15);
			MEMORY_CONSIDER_AS(bVar14, iParam1->f_48, 2);
			AUDIO_STOP_PAIN(Function_74());
			SAY_SINGLE_LINE_STRING_OVER_PAIN(Function_74(), "PLAYER_OFFER_LAW_BRIBE", 1, 1, 0, 0);
			iParam0->f_708 = Function_97(StackVal, StackVal, iParam1->f_48, fVar25, vVar26);
			iParam0->f_716 = GET_CURRENT_GAME_TIME();
		
		case 0x00000016:
			if (iParam0->f_716 + 4.0f) > GET_CURRENT_GAME_TIME()
			{
				iParam0->f_648 = 23;
			}
			iVar1 = 250;
			break;
		
		case 0x00000017:
			Function_114(1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
			if (iParam0->f_708 != "")
			{
				REMOVE_CAMERA_FROM_CHANNEL(iParam0->f_708, 0);
			}
			RESET_ANIM_SET_FOR_ACTOR(iParam1->f_48, 0);
			bVar14 = Function_107(iParam1->f_48, iParam0->f_576);
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
			Function_154("LAW_AI_STATE: CLEANUP", 11);
			SQUAD_GOALS_CLEAR(iParam0->f_576);
			Function_153(iParam0->f_576);
			Function_50(iParam0->f_576, 0);
			if (IS_ACTOR_VALID(iParam1->f_48))
			{
				AI_CLEAR_DONT_HARM_ACTOR(iParam1->f_48);
			}
			if (!iParam0->f_552)
			{
				if (IS_ACTOR_VALID(iParam1->f_48))
				{
					SQUAD_GOAL_ADD_GENERAL_TASK(iParam0->f_576, 1, 0, 4294967295);
					if (Function_251())
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
				SQUAD_GOAL_ADD_GENERAL_TASK(iParam0->f_576, 1, 0, 4294967295);
				TASK_WANDER(false, -1.0f);
			}
			SQUAD_GOAL_ADD_SHARE_PERCEPTION(iParam0->f_576, 15);
			iParam0->f_648 = 25;
		
		case 0x00000019:
			break;
	}
	return iVar1;
}

var Function_97(bool bParam0, var uParam1, vector3 vParam2) //Position: 0x4C47 / 19527
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	
	bVar0 = CREATE_CAMERA_IN_LAYOUT(Global_26314, Function_55(), 0);
	INIT_CAMERA_FROM_GAME_CAMERA(bVar0);
	GET_CAMERA_POSITION(bVar0, &vVar7);
	Function_101(bParam0);
	Function_99(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_101(bParam0), uParam1, vParam2, vVar7, &vVar1, &vVar4);
	SET_CAMERA_POSITION(bVar0, vVar1);
	SET_CAMERA_TARGET_POSITION(bVar0, vVar4, 0);
	if (!Function_98(StackVal, StackVal, vVar1))
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

bool Function_98(vector3 vParam0) //Position: 0x4CC2 / 19650
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

int Function_99(vector3 vParam0, var uParam3, vector3 vParam4, vector3 vParam7, var uParam10, var uParam11) //Position: 0x4CDA / 19674
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
	fVar13 = 1.625f;
	*uParam11 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(Var3, Var0, StackVal) };
	VSCALE(uParam11, 0.5f);
	vVar14 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar9, vVar6, StackVal) };
	VSCALE(&vVar14, 0.5f);
	*uParam11 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar14, *uParam11, StackVal) };
	VSCALE(uParam11, 0.5f);
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
		if (!Function_98(StackVal, StackVal, vVar19[iVar503]))
		{
			if (FIND_INTERSECTION(&(vVar19[iVar503]), &Var0, &uVar44, &uVar47, 1, 4294967295, 4194304))
			{
				vVar19[iVar503] = { 0.0f, 0.0f, 0.0f };
			}
		}
		iVar50++;
	}
	if (!Function_98(StackVal, StackVal, vVar19[03]))
	{
		vVar19[03].f_4 = StackVal;
	}
	if (!Function_98(StackVal, StackVal, vVar19[13]))
	{
		vVar19[13].f_4 = StackVal;
	}
	if (!Function_98(StackVal, StackVal, vVar19[23]))
	{
		vVar19[23].f_4 = StackVal;
	}
	if (!Function_98(StackVal, StackVal, vVar19[33]))
	{
		vVar19[33].f_4 = StackVal;
	}
	if (!Function_98(StackVal, StackVal, vVar19[43]))
	{
		vVar19[43].f_4 = StackVal;
	}
	if (!Function_98(StackVal, StackVal, vVar19[53]))
	{
		vVar19[53].f_4 = StackVal;
	}
	if (!Function_98(StackVal, StackVal, vVar19[63]))
	{
		vVar19[63].f_4 = StackVal;
	}
	if (!Function_98(StackVal, StackVal, vVar19[73]))
	{
		vVar19[73].f_4 = StackVal;
	}
	Function_100(StackVal, StackVal, vParam7, &vVar19);
	*uParam10 = { StackVal, StackVal, Function_100(StackVal, StackVal, vParam7, &vVar19) };
	return 1;
}

vector3 Function_100(vector3 vParam0, var uParam3) //Position: 0x4FDF / 20447
{
	vector3 vVar0;
	int iVar3;
	bool bVar4;
	
	bVar4 = 1E+08.0f;
	iVar3 = 0;
	while (iVar3 <= *uParam3)
	{
		if (!Function_98(StackVal, StackVal, *uParam3[iVar33]))
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

vector3 Function_101(bool bParam0) //Position: 0x5047 / 20551
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

float Function_102(bool bParam0) //Position: 0x5058 / 20568
{
	return GET_HEADING(bParam0);
}

bool Function_103(float fParam0, int iParam1) //Position: 0x5063 / 20579
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
	
	Function_101(GET_PLAYER_ACTOR(0));
	vVar3 = { StackVal, StackVal, Function_101(GET_PLAYER_ACTOR(0)) };
	uVar6 = Function_102(GET_PLAYER_ACTOR(0));
	vVar7 = { 0.0f, 0.0f, -1.7f };
	GET_ACTOR_OFFSET_WORLD_COORDS(GET_PLAYER_ACTOR(0), &vVar7, &vVar0);
	if (Function_106(StackVal, StackVal, StackVal, StackVal, vVar0, vVar3))
	{
		if (Function_105(StackVal, StackVal, StackVal, StackVal, vVar0, vVar3) > 0.1f)
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
		Function_104(StackVal, StackVal, StackVal, StackVal, vVar0, vVar3, 10.0f);
		vVar0 = { StackVal, StackVal, Function_104(StackVal, StackVal, StackVal, StackVal, vVar0, vVar3, 10.0f) };
		if (Function_106(StackVal, StackVal, StackVal, StackVal, vVar0, vVar3))
		{
			fVar14 = Function_105(StackVal, StackVal, StackVal, StackVal, vVar0, vVar3);
			if (fVar11 > 0.0f || fVar14 > fVar11)
			{
				fVar10 = Function_128(StackVal, StackVal, StackVal, StackVal, vVar3, vVar0);
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

vector3 Function_104(vector3 vParam0) //Position: 0x5140 / 20800
{
	vector3 vVar0;
	
	vParam0 = (vParam0.x - vParam3.x);
	vParam0.f_4 = (vParam0.y - vParam3.y);
	vParam0.f_8 = (vParam0.z - vParam3.z);
	vVar0.x = ((COS_DEGREE(fParam6) * vParam0.x) - (SIN_DEGREE(fParam6) * vParam0.z));
	vVar0.f_8 = ((COS_DEGREE(fParam6) * vParam0.z) + (SIN_DEGREE(fParam6) * vParam0.x));
	vVar0.x = (vVar0.x + vParam3.x);
	vVar0.f_4 = (vVar0.y + vParam3.y);
	vVar0.f_8 = (vVar0.z + vParam3.z);
	return StackVal, StackVal, vVar0;
}

float Function_105(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) //Position: 0x51BA / 20922
{
	struct<5> Var0;
	var uVar6;
	float fVar9;
	
	FIND_GROUND_INTERSECTION(&uParam0, 1.3f, &Var0, &uVar6);
	FIND_GROUND_INTERSECTION(&uParam3, 1.3f, &Var3, &uVar6);
	fVar9 = (StackVal - StackVal);
	if (fVar9 > 0.0f)
	{
		fVar9 = (fVar9 * -1.0f);
	}
	return fVar9;
}

bool Function_106(vector3 vParam0) //Position: 0x51FA / 20986
{
	var uVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	
	vVar3 = { vParam0.x, (vParam0.y + 0.3f), vParam0.z };
	vVar6 = { vParam0.x, (vParam0.y + 1.7f), vParam0.z };
	vVar9 = { vParam3.x, (vParam3.y + 1.0f), vParam3.z };
	if (FIND_INTERSECTION(&vVar9, &vVar3, &uVar0, &uVar0, 0, 4294967295, 4194304) || FIND_INTERSECTION(&vVar9, &vVar6, &uVar0, &uVar0, 0, 4294967295, 4194304))
	{
		return 0;
	}
	return 1;
}

bool Function_107(bool bParam0, bool bParam1) //Position: 0x5265 / 21093
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
		if (Function_108(SQUAD_GET_ACTOR_BY_INDEX(bParam1, bVar0), bParam0) > fVar2)
		{
			fVar2 = Function_108(SQUAD_GET_ACTOR_BY_INDEX(bParam1, bVar0), bParam0);
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

float Function_108(bool bParam0, bool bParam1) //Position: 0x5322 / 21282
{
	var uVar0;
	var uVar3;
	int iVar6;
	
	GET_POSITION(bParam0, &uVar0);
	GET_POSITION(bParam1, &uVar3);
	iVar6 = Function_109(&uVar0, &uVar3);
	return iVar6;
}

var Function_109(var uParam0, bool bParam1) //Position: 0x5341 / 21313
{
	vector3 vVar0;
	bool bVar3;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*bParam1, *uParam0, StackVal) };
	bVar3 = VMAG(vVar0);
	return bVar3;
}

void Function_110(char* cParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x535F / 21343
{
	struct<4> Var0;
	int iVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_111(Global_6269) };
		}
		PRINT_SMALL_B(cParam0, fParam1, iParam2, iParam3, iParam4, &Var0, iParam5);
	}
	else
	{
		iVar4 = "";
		PRINT_SMALL_B(cParam0, fParam1, iParam2, iParam3, iParam4, iVar4, iParam5);
	}
}

struct<16> Function_111(int iParam0) //Position: 0x53D6 / 21462
{
	char* cVar0[16];
	
	if (!Function_112())
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

bool Function_112() //Position: 0x5415 / 21525
{
	if (Function_113(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_113(var uParam0, bool bParam1) //Position: 0x5430 / 21552
{
	return (uParam0 && bParam1) == 0;
}

void Function_114(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9) //Position: 0x543D / 21565
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
		bVar0 = Function_74();
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
			if (Function_251())
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
			SET_ACTOR_INVULNERABILITY(bVar0, 0);
			if (Global_34108[0])
			{
				Global_34108[0] = 0;
				UI_CHEAT_SET_VALUE(0, 0);
			}
		}
		Function_118(21, 1, 0, 0);
	}
	if (bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	if (bParam7)
	{
		Function_117();
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
	Function_115(iParam9);
}

void Function_115(int iParam0) //Position: 0x552D / 21805
{
	iParam0 = iParam0;
	HUD_ENABLE(iParam0);
	HUD_CLEAR_SMALL_TEXT_QUEUE();
	PRINT_SMALL_B("Common_Null", 0.1f, 0, 2, 1, 0, 0);
	SET_TIME_ACCELERATION(Global_63398);
	STREAMING_UNLOAD_SCENE();
	AI_STOP_IGNORING_ACTORS();
	if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(Global_6289, "tempcutscenevol")))
	{
		DESTROY_VOLUME(FIND_VOLUME_IN_LAYOUT(Global_6289, "tempcutscenevol"));
	}
	if (!Global_3380)
	{
		Function_116();
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

void Function_116() //Position: 0x55DC / 21980
{
	bool bVar0;
	
	bVar0 = FIND_NAMED_LAYOUT("PlayerLayout");
	if (IS_ACTOR_VALID(Global_12976.f_36))
	{
		if (GET_LAYOUT_FROM_OBJECT(GET_OBJECT_OWNER(Global_12976.f_36)) != bVar0)
		{
			LOG_ERROR("PLAYERHORSE NOT IN PLAYER HORSE! WHY? FIXING");
			GIVE_OBJECT_TO_LAYOUT(Global_12976.f_36, bVar0);
		}
	}
	return;
}

void Function_117() //Position: 0x564E / 22094
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

int Function_118(int iParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x5663 / 22115
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
	Function_66(iParam0, TO_FLOAT(bParam1), 1);
	Function_65(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_54(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, bParam3);
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

void Function_119(bool bParam0, bool bParam1, bool bParam2) //Position: 0x5883 / 22659
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

void Function_120(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11) //Position: 0x58C8 / 22728
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
	HUD_ENABLE(0);
	Function_117();
	UI_CLEAR_MESSAGE_QUEUE(4);
	DECOR_SET_INT(Global_34573, "iDrunk", false);
	if (bParam9)
	{
		ABORT_SCRIPTED_CONVERSATION(0);
	}
	ADD_COMPANION_PERMANENT();
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		bVar1 = Function_74();
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
			if (Function_251())
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
						TASK_OVERRIDE_SET_POSTURE(bVar1, 0);
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
					TASK_OVERRIDE_SET_POSTURE(bVar1, 0);
				}
			}
			SET_ACTOR_HEALTH(bVar1, GET_ACTOR_MAX_HEALTH(bVar1));
			SET_ACTOR_INVULNERABILITY(bVar1, 1);
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
				Function_101(bVar1);
				bVar0 = CREATE_VOLUME_IN_LAYOUT(GET_AMBIENT_LAYOUT(), Function_55(), 2, Function_101(bVar1), 0.0f, 0.0f, 0.0f, 100.0f, 100.0f, 100.0f);
				DELETE_PROJECTILES_IN_VOLUME(bVar0);
			}
		}
		Function_118(19, 1, 0, 0);
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
	if (iParam10 && !Function_112())
	{
		CLEAR_CHARACTER_BLOOD();
	}
	CLEAR_TUMBLEWEEDS();
	if ((IS_OBJECT_VALID(Function_123()) || DECOR_CHECK_EXIST(Global_34573, "BinocularsStart")) || UNK_0x4417C9F2("$content/scripting/gringo/ItemScripts/Binoculars"))
	{
		DESTROY_CAMERA(GET_CAMERA_FROM_OBJECT(Function_123()));
		DECOR_SET_BOOL(Global_34573, "nquitBinos", true);
		UNK_0xE6C1DBD9(0);
		SET_DRAW_ACTOR(Global_34573, 1);
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
	if (Function_122(0x4000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_121(0x4000000);
	}
	if (Function_122(0x8000000))
	{
		AUDIO_MUSIC_SUSPEND(6000);
		AUDIO_MUSIC_RELEASE_CONTROL(0, 0);
		Function_121(0x8000000);
	}
}

void Function_121(int iParam0) //Position: 0x5B76 / 23414
{
	int iVar0;
	
	if (Function_113(iParam0, 1) && Function_113(Global_26119, 1))
	{
	}
	iVar0 = (Global_26119 && iParam0);
	Global_26119 = (Global_26119 - iVar0);
	Global_26119 |= 1073741824;
	return;
}

bool Function_122(int iParam0) //Position: 0x5BAA / 23466
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_123() //Position: 0x5BC6 / 23494
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

void Function_124(var uParam0, int iParam1) //Position: 0x5C45 / 23621
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_125(bool bParam0, int iParam1) //Position: 0x5C54 / 23636
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
				MEMORY_PREFER_WALKING(bVar1, iParam1);
			}
		}
		bVar0++;
	}
	return;
}

void Function_126(var uParam0) //Position: 0x5C9C / 23708
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	if (!SQUAD_IS_VALID(*uParam0))
	{
		return;
	}
	bVar0 = Function_127();
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

var Function_127() //Position: 0x5CFE / 23806
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

float Function_128(vector3 vParam0, vector3 vParam3) //Position: 0x5D6A / 23914
{
	var uVar0;
	
	Function_129(StackVal, StackVal, StackVal, StackVal, vParam0, vParam3, &uVar0);
	return UNK_0x9C40E671(&uVar0);
}

void Function_129(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x5D84 / 23940
{
	*uParam6 = { (GET_X(&uParam3) - GET_X(&uParam0)), 0.0f, (GET_Z(&uParam3) - GET_Z(&uParam0)) };
}

var Function_130(var uParam0, int iParam1, float fParam2) //Position: 0x5DA7 / 23975
{
	struct<8> Var0;
	int iVar8;
	bool bVar9;
	vector3 vVar10;
	
	if (!IS_OBJECT_VALID(Global_26121[iParam1]))
	{
		return "";
	}
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_131("llr") };
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

struct<32> Function_131(bool bParam0) //Position: 0x5E1E / 24094
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_132("0", &cVar8, ""), 4);
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

struct<32> Function_132(char* cParam0, bool bParam1, char* cParam2) //Position: 0x5E88 / 24200
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	stradd(&cVar0, cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

float Function_133(int iParam0, int iParam1) //Position: 0x5EA7 / 24231
{
	if (iParam0 < iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

bool Function_134(int iParam0) //Position: 0x5EBA / 24250
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

int Function_135(bool bParam0) //Position: 0x5EDD / 24285
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

var Function_136(bool bParam0, int iParam1) //Position: 0x5F2D / 24365
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
	if (!Function_138(iParam1))
	{
		return "";
	}
	fVar0 = -1.0f;
	bVar1 = CREATE_OBJECT_ITERATOR(Global_26314);
	bVar2 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(Global_26314, "CurrentCrimes"));
	Function_137(bVar1, bVar2);
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

void Function_137(bool bParam0, bool bParam1) //Position: 0x5FC9 / 24521
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

bool Function_138(int iParam0) //Position: 0x5FF8 / 24568
{
	if (iParam0 > 0 || iParam0 < 3)
	{
		return 0;
	}
	return 1;
}

void Function_139(int iParam0, bool bParam1) //Position: 0x600D / 24589
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

bool Function_140(int iParam0) //Position: 0x6039 / 24633
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

bool Function_141(bool bParam0, bool bParam1, bool bParam2) //Position: 0x607D / 24701
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

bool Function_142(bool bParam0, vector3 vParam1, float fParam4) //Position: 0x60E5 / 24805
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return 0;
	}
	if (Function_98(StackVal, StackVal, vParam1))
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
				Function_143(bVar1);
				if (VDIST(Function_143(bVar1), vParam1) >= fParam4)
				{
					iVar2 = 1;
				}
			}
		}
		bVar0++;
	}
	return iVar2;
}

vector3 Function_143(bool bParam0) //Position: 0x6153 / 24915
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

bool Function_144(int iParam0, float fParam1) //Position: 0x61BD / 25021
{
	if ((GET_CURRENT_GAME_TIME() - iParam0->f_356) > fParam1)
	{
		return 1;
	}
	return 0;
}

bool Function_145(int iParam0) //Position: 0x61D5 / 25045
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
			Function_146(iParam0);
			vVar1 = { StackVal, StackVal, Function_146(iParam0) };
			if (!Function_98(StackVal, StackVal, vVar1))
			{
				if (SQUAD_IS_VALID(iParam0->f_576))
				{
					SQUAD_GOALS_CLEAR(iParam0->f_576);
					Function_153(iParam0->f_576);
					Function_154("LAW_AI_STATE: STAY IN COUNTRY", 11);
					SQUAD_GOAL_ADD_GENERAL_TASK(iParam0->f_576, 0, 0, 4294967295);
					TASK_GO_NEAR_COORD(false, &vVar1, 15.0f, 4);
					SQUAD_GOAL_ADD_SHARE_PERCEPTION(iParam0->f_576, 15);
				}
				if (SQUAD_IS_VALID(iParam0->f_580))
				{
					SQUAD_GOALS_CLEAR(iParam0->f_580);
					Function_153(iParam0->f_580);
					SQUAD_GOAL_ADD_GENERAL_TASK(iParam0->f_580, 0, 0, 4294967295);
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

vector3 Function_146(int iParam0) //Position: 0x62D8 / 25304
{
	int iVar0;
	
	iVar0 = Function_147(iParam0);
	switch (iVar0)
	{
		case 0x00000000:
			if (iParam0->f_724 == 0)
			{
				return 3.07f, 94.87f, 2704.52f;
			}
			if (iParam0->f_724 == 1)
			{
				return 61.98f, 94.83f, 2782.57f;
			}
			break;
		
		case 0x00000001:
			if (iParam0->f_724 == 0)
			{
				return -2395.41f, 13.94f, 3882.45f;
			}
			if (iParam0->f_724 == 1)
			{
				return -2356.1f, 13.91f, 4019.29f;
			}
			break;
		
		case 0x00000002:
			if (iParam0->f_724 == 0)
			{
				return -3711.54f, 24.11f, 4022.47f;
			}
			if (iParam0->f_724 == 1)
			{
				return -3518.87f, 19.29f, 4208.25f;
			}
			break;
	}
	Function_252();
	return StackVal, StackVal, Function_252();
}

var Function_147(int iParam0) //Position: 0x63A9 / 25513
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	vector3 vVar3;
	
	bVar0 = 1.001638E+07.0f;
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

bool Function_148(bool bParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x6451 / 25681
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
				if (ACTORS_IN_RANGE(bVar1, bParam1, iParam2))
				{
					if (!Function_149(bVar1, 1) || iParam3)
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

bool Function_149(bool bParam0, int iParam1) //Position: 0x64EA / 25834
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

bool Function_150(int iParam0, bool bParam1, bool bParam2) //Position: 0x6534 / 25908
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
		Function_83(&Global_26118);
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
		Function_83(&Global_26118);
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

void Function_151(int iParam0, var uParam1, int iParam2) //Position: 0x66A7 / 26279
{
	if (iParam0->f_536 > 0.0f)
	{
		if ((Function_148(iParam0->f_576, uParam1->f_48, 20.0f, 1) || Function_144(iParam0, 0x3f800000)) || iParam2)
		{
			if (!Function_78(iParam0->f_576, 59, uParam1->f_48))
			{
				if (GET_WEAPON_IN_HAND(uParam1->f_48) == 4294967295)
				{
					Function_305(iParam0->f_576, "law_give_up_unarmed", 2.5f, uParam1->f_64, 20.0f, 1, 0);
				}
				else
				{
					Function_305(iParam0->f_576, "law_give_up", 2.5f, uParam1->f_64, 20.0f, 1, 0);
				}
			}
			Function_139(iParam0, 1);
		}
	}
	return;
}

void Function_152(bool bParam0, int iParam1) //Position: 0x6754 / 26452
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

void Function_153(bool bParam0) //Position: 0x6799 / 26521
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

void Function_154(bool bParam0, int iParam1) //Position: 0x67CB / 26571
{
	if (!Function_122(128))
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

int Function_155(var uParam0, float fParam1, int iParam2, int iParam3) //Position: 0x6806 / 26630
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
		if (!Function_98(StackVal, StackVal, *iParam2))
		{
			return 1;
		}
	}
	while (!IS_EXITFLAG_SET() && iVar3 > iParam3)
	{
		*uParam0 = (*uParam0 + 0.01f);
		uParam0->f_8 = (StackVal + 0.01f);
		if (FIND_GROUND_INTERSECTION(uParam0, fParam1, iParam2, &uVar0))
		{
			if (!Function_98(StackVal, StackVal, *iParam2))
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

bool Function_156(int iParam0, var uParam1, bool bParam2) //Position: 0x6938 / 26936
{
	int iVar0;
	float fVar1;
	
	fVar1 = Function_161(iParam0, uParam1->f_48);
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
			if (!Function_24(Global_76847, 8))
			{
				Function_20(Global_34573, 8, 2, 0);
			}
		}
	}
	if (bParam2)
	{
		if (Global_3386 && Global_3405)
		{
			if (Function_150(uParam1->f_56, GET_OBJECT_FROM_ACTOR(uParam1->f_48), 1))
			{
				Global_3405 = 0;
				*(iParam0 + 500) = { StackVal, StackVal, *(iParam0 + 416) };
				GET_ACTOR_VELOCITY(uParam1->f_48, iParam0 + 512);
				iParam0->f_448 = GET_CURRENT_GAME_TIME();
				Function_160(iParam0->f_576, uParam1->f_48, 0);
				if (!Function_24(Global_76847, 16))
				{
					Function_20(Global_34573, 16, 2, 0);
				}
			}
		}
	}
	iParam0->f_356 = Function_133(Function_133(iParam0->f_440, iParam0->f_444), iParam0->f_448);
	Global_27763 = Function_86(iParam0);
	Global_27764 = iParam0->f_356;
	if (GET_CURRENT_GAME_TIME() < (iParam0->f_356 + Global_27763))
	{
		if (Function_159(iParam0->f_576) >= 0)
		{
			if (!Function_78(iParam0->f_576, 22, uParam1->f_48))
			{
				Function_305(iParam0->f_576, "law_go_unwanted", 5.0f, uParam1->f_64, 20.0f, 0, 0);
			}
		}
		if (Function_251())
		{
			if (Function_157(Global_29006) < Global_78480.f_116)
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
				if (!Function_24(Global_76847, 4096))
				{
					Function_20(Global_34573, 4096, 2, 0);
				}
			}
		}
		if (GET_CURRENT_GAME_TIME() < (iParam0->f_352 + 20.0f))
		{
			if (Function_159(iParam0->f_576) >= 0)
			{
				if (!Function_78(iParam0->f_576, 22, uParam1->f_48))
				{
					Function_305(iParam0->f_576, "law_wanted_lost_track", 2.5f, uParam1->f_64, 20.0f, 0, 1);
				}
			}
			iParam0->f_352 = GET_CURRENT_GAME_TIME();
		}
	}
	return iVar0;
}

int Function_157(int iParam0) //Position: 0x6B5A / 27482
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	if (Function_158(iParam0))
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

bool Function_158(int iParam0) //Position: 0x6BA4 / 27556
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

int Function_159(bool bParam0) //Position: 0x6BBA / 27578
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

void Function_160(bool bParam0, bool bParam1, bool bParam2) //Position: 0x6C07 / 27655
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
					MEMORY_REPORT_POSITION_AUTO(bVar1, bParam1, 1);
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

var Function_161(var uParam0, int iParam1) //Position: 0x6C72 / 27762
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
	bVar0 = GET_LASSO_TARGET(Function_74());
	if (IS_ACTOR_VALID(bVar0))
	{
		if (Function_73(bVar0, uParam0->f_576, 0))
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
				iVar3 = Function_133(MEMORY_GET_POSITION_LAST_KNOWN_TIME(bVar2, iParam1), iVar3);
			}
		}
		bVar1++;
	}
	return iVar3;
}

void Function_162() //Position: 0x6D18 / 27928
{
	if (Global_3386)
	{
		if (Function_165(32768))
		{
			Function_163(32768);
		}
	}
	else if (!Function_165(32768))
	{
		Function_11(32768);
	}
	return;
}

void Function_163(int iParam0) //Position: 0x6D4A / 27978
{
	Function_164(&Global_28842, iParam0);
	return;
}

void Function_164(var uParam0, int iParam1) //Position: 0x6D58 / 27992
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	*uParam0 |= 1073741824;
	return;
}

bool Function_165(int iParam0) //Position: 0x6D7B / 28027
{
	return Function_166(&Global_28842, iParam0);
}

int Function_166(var uParam0, int iParam1) //Position: 0x6D89 / 28041
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_167(int iParam0) //Position: 0x6DA5 / 28069
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

void Function_168(var uParam0, int iParam1) //Position: 0x6DFB / 28155
{
	if ((((((uParam0->f_544 || uParam0->f_540) || uParam0->f_548) || uParam0->f_552) || uParam0->f_568) || uParam0->f_572) || uParam0->f_648 < 14)
	{
		return;
	}
	if ((((Global_26401[iParam1->f_64] <= 15 || (GET_CURRENT_GAME_TIME() <= (uParam0->f_480 + 20.0f) && uParam0->f_480 < 0.0f)) || *uParam0 != 2) || *uParam0 != 3) || Function_251())
	{
		Function_169(uParam0, iParam1);
	}
	return;
}

void Function_169(var uParam0, int iParam1) //Position: 0x6E6F / 28271
{
	bool bVar0;
	bool bVar1;
	
	if (!Function_24(Global_76847, 8192))
	{
		Function_20(Global_34573, 8192, 2, 0);
	}
	Function_78(uParam0->f_576, 58, iParam1->f_48);
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(uParam0->f_576))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(uParam0->f_576, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			MEMORY_ALLOW_SHOOTING(bVar1, 1);
			AI_CLEAR_FIRE_DELAY(bVar1);
			AI_CLEAR_FIRE_DELAY_RANDOMNESS(bVar1);
			AI_CLEAR_BURST_DURATION(bVar1);
			AI_CLEAR_BURST_DURATION_RANDOMNESS(bVar1);
			AI_CLEAR_SHOTS_PER_BURST(bVar1);
			COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bVar1, 0.5f, 0.5f);
		}
		bVar0++;
	}
	uParam0->f_544 = 1;
	return;
}

void Function_170(var uParam0, int iParam1) //Position: 0x6EFE / 28414
{
	int iVar0;
	bool bVar1;
	
	if (GET_CURRENT_GAME_TIME() <= uParam0->f_736)
	{
		iVar0 = uParam0->f_668;
		if (IS_LAYOUTREF_VALID(Global_30616))
		{
			uParam0->f_668 = Function_171(iParam1->f_48, 258);
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
							MEMORY_REPORT_POSITION_AUTO(SQUAD_GET_ACTOR_BY_INDEX(uParam0->f_576, bVar1), iParam1->f_48, 1);
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
				MEMORY_REPORT_POSITION_AUTO(SQUAD_GET_ACTOR_BY_INDEX(uParam0->f_576, bVar1), iParam1->f_48, 0);
				bVar1++;
			}
		}
	}
	return;
}

var Function_171(bool bParam0, int iParam1) //Position: 0x7015 / 28693
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
			if (Function_84(GET_VOLUME_FROM_OBJECT(bVar5), iParam1))
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
	Function_83(&bVar0);
	ITERATE_IN_LAYOUT(bVar0, Global_30616);
	ITERATE_ON_OBJECT_TYPE(bVar0, 10);
	bVar5 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar5))
	{
		if (DECOR_CHECK_EXIST(bVar5, "locflag"))
		{
			if (Function_84(GET_VOLUME_FROM_OBJECT(bVar5), iParam1))
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

void Function_172(int iParam0, int iParam1) //Position: 0x71AE / 29102
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
	
	if (Function_251())
	{
		return;
	}
	if (Global_26316.f_176)
	{
		if (!Function_24(Global_76848, 32768))
		{
			Function_20(Function_74(), 32768, 3, 0);
		}
	}
	if ((((((Function_176(iParam1->f_48, 0, 0) || Global_3405) || Function_75(iParam0, 1) != 0) || Global_63096) || iParam0->f_552) || IS_ACTOR_RAGDOLL(iParam1->f_48)) || !IS_ACTOR_ALIVE(iParam1->f_48))
	{
		if (iParam0->f_568 && !iParam0->f_540)
		{
			iParam0->f_568 = 0;
			iParam0->f_572 = 0;
			RESET_ANIM_SET_FOR_ACTOR(iParam1->f_48, 0);
			Function_175(iParam0, iParam1);
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
			Function_175(iParam0, iParam1);
		}
		RESET_TIME_SINCE_LAST_INPUT(GET_PLAYER_PADINDEX(iParam1->f_48));
		return;
	}
	fVar0 = Function_174(GET_TIME_SINCE_LAST_MOVESTICK_INPUT(GET_PLAYER_PADINDEX(iParam1->f_48)), GET_TIME_SINCE_LAST_BUTTON_INPUT(GET_PLAYER_PADINDEX(iParam1->f_48)));
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
								Function_101(bVar2);
								Var4 = { StackVal, StackVal, Function_101(bVar2) };
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
														if (FABS((StackVal - StackVal)) > 1.5f)
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
			if (bVar3 && iParam0->f_400 <= 0.45f)
			{
				SET_ANIM_SET_FOR_ACTOR(iParam1->f_48, "stand_surrender", 0);
				SET_ACTION_NODE_FOR_ACTOR(iParam1->f_48, "stand_surrender/submit");
				AUDIO_STOP_PAIN(Function_74());
				if (Function_173() > 3)
				{
					SAY_SINGLE_LINE_STRING(Function_74(), "PLAYER_ARRESTED_HONORABLE", true, true, 0, 0, true, false);
				}
				else
				{
					SAY_SINGLE_LINE_STRING(Function_74(), "PLAYER_ARRESTED_DISHONORABLE", true, true, 0, 0, true, false);
				}
				AI_DONT_HARM_ACTOR(iParam1->f_48);
				Function_153(iParam0->f_576);
				SQUAD_GOALS_CLEAR(iParam0->f_576);
				bVar9 = false;
				while (bVar9 <= SQUAD_GET_SIZE(iParam0->f_576))
				{
					bVar2 = SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_576, bVar9);
					if (IS_ACTOR_VALID(bVar2))
					{
						Function_101(bVar2);
						Function_101(iParam1->f_48);
						bVar10 = VDIST(Function_101(bVar2), Function_101(iParam1->f_48));
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
						TASK_PRIORITY_SET(bVar2, 1);
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
				if (GET_CURRENT_GAME_TIME() <= (iParam0->f_456 + 2.8f))
				{
					bVar12 = Function_107(iParam1->f_48, iParam0->f_576);
					if (IS_ACTOR_VALID(bVar12))
					{
						if (Function_173() >= 4)
						{
							SAY_SINGLE_LINE_CONTEXT(bVar12, true, iParam1->f_48, 1, 1, 2, 4294967295, 4294967295, 0, 1);
						}
						else if (Function_173() <= 2)
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
			if (GET_CURRENT_GAME_TIME() <= (iParam0->f_456 + 6.5f))
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
	else if (((((fVar0 < 0.5f && GET_WEAPON_IN_HAND(iParam1->f_48) != 4294967295) && Function_36(iParam1->f_64) >= 1500) && !iParam0->f_572) && !iParam0->f_540) && !iParam0->f_568)
	{
		AI_DONT_HARM_ACTOR(iParam1->f_48);
		iParam0->f_572 = 1;
	}
	else
	{
		if (iParam0->f_568 && !iParam0->f_540)
		{
			iParam0->f_568 = 0;
			Function_175(iParam0, iParam1);
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

int Function_173() //Position: 0x7674 / 30324
{
	return Global_12976.f_152;
}

var Function_174(int iParam0, int iParam1) //Position: 0x767F / 30335
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void Function_175(int iParam0, int iParam1) //Position: 0x7692 / 30354
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

bool Function_176(bool bParam0, bool bParam1, bool bParam2) //Position: 0x76C3 / 30403
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
	if (IS_ACTOR_BEING_DRAGGED(bParam0, 0.3f))
	{
		return 1;
	}
	if (Function_203(bParam0))
	{
		return 1;
	}
	if (Function_178(bParam0))
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
	if (Function_177())
	{
		return 1;
	}
	return 0;
}

bool Function_177() //Position: 0x7779 / 30585
{
	return ((Global_34578 != 0 || Global_34578 != 2) || Global_34578 != 3);
}

bool Function_178(bool bParam0) //Position: 0x7790 / 30608
{
	return IS_ACTOR_IN_HOGTIE(bParam0);
}

void Function_179(int iParam0, int iParam1) //Position: 0x779B / 30619
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = false;
	if (!Function_308(524288))
	{
		if (Function_148(iParam0->f_576, iParam1->f_48, 10.0f, 1))
		{
			if (CAN_ANYONE_OF_FACTION_SEE_OBJECT(iParam1->f_52, iParam1->f_48))
			{
				iParam0->f_380 = 1.0f;
			}
			if (!Function_24(Global_76847, 32))
			{
				Function_20(Global_34573, 32, 2, 0);
			}
		}
		return;
	}
	if (((((!iParam0->f_540 && !iParam0->f_568) && !iParam0->f_548) && !iParam0->f_552) && Function_308(0x2000000)) && Function_75(iParam0, 1) < 0)
	{
		if (Function_202(iParam0->f_576, iParam1->f_48, 10.0f, 0.5f))
		{
			bVar1 = false;
			if (Function_200(iParam0->f_576, iParam1->f_48, 25.0f, 0) == 1)
			{
				if (Function_197(iParam0, iParam1))
				{
					Global_3408 = 1;
					bVar1 = true;
					bVar2 = CEIL((IntToFloat(Function_36(iParam1->f_64)) / 2.0f));
					if (Function_19() > 2)
					{
						bVar2 = CEIL((IntToFloat(bVar2) * 0.75f));
					}
					if (Function_196() > bVar2)
					{
						bVar1 = false;
						if (!IS_SCRIPT_USE_CONTEXT_VALID(iParam0->f_712))
						{
							if (Global_26316.f_176)
							{
								if (!Function_24(Global_76848, 16384))
								{
									Function_20(Function_74(), 16384, 3, 0);
								}
							}
							iParam0->f_712 = ADD_SCRIPT_USE_CONTEXT("nlaw_bribe", 1, 5, 0, 0, 0, 0, 4294967295, 0);
							SET_USE_CONTEXT_TEXT(iParam0->f_712, "nlaw_bribe", I2STR(bVar2), 0, 0, 0);
						}
					}
					else if (IS_SCRIPT_USE_CONTEXT_VALID(iParam0->f_712))
					{
						RELEASE_SCRIPT_USE_CONTEXT(iParam0->f_712);
					}
					if (IS_SCRIPT_USE_CONTEXT_VALID(iParam0->f_712))
					{
						if (WAS_SCRIPT_USE_CONTEXT_EVER_PRESSED(iParam0->f_712))
						{
							if (Function_196() > bVar2)
							{
								Function_44();
								DECOR_SET_INT(StackVal, Function_195(iParam0->f_576), CEIL((IntToFloat(Function_36("iAdditionalMoney")) / 2.0f)));
								if (CEIL((IntToFloat(Function_36(StackVal)) / 2.0f)) >= Function_69(255))
								{
									Function_53(StackVal, CEIL((IntToFloat(Function_36(255)) / 2.0f)), 0);
								}
								Function_118(253, 1, 0, 0);
								Function_194(CEIL((IntToFloat(Function_36(StackVal)) / 2.0f)), 1);
								if (Function_36(StackVal) <= 100)
								{
									Function_180(4294966896, 1, 0);
								}
								else if (Function_36(StackVal) <= 1000)
								{
									Function_180(4294966296, 1, 0);
								}
								else
								{
									Function_180(4294965296, 1, 0);
								}
								Function_52();
								Function_250("bribe_taken", 0x41200000, 1, 0, 2, 1, 0);
								iParam0->f_640 = 0;
								iParam0->f_636 = 0.0f;
								iParam0->f_648 = 21;
								iParam0->f_552 = 1;
							}
							RELEASE_SCRIPT_USE_CONTEXT(iParam0->f_712);
						}
					}
				}
				else
				{
					bVar0 = true;
				}
			}
			else
			{
				if (Function_197(iParam0, iParam1))
				{
					bVar1 = true;
				}
				bVar0 = true;
			}
			if (bVar1)
			{
				if (IS_BUTTON_PRESSED(0, 5, 1, 0))
				{
					if (!iParam0->f_640)
					{
						iParam0->f_640 = 1;
						iParam0->f_636 = (iParam0->f_636 + 0.8f);
					}
					if (iParam0->f_636 <= 4.0f)
					{
						SAY_SINGLE_LINE_STRING_OVER_PAIN(Function_74(), "PLAYER_OFFER_LAW_BRIBE_URGENT", 1, 1, 2, 0);
						iParam0->f_640 = 0;
						iParam0->f_636 = 0.0f;
					}
				}
				else
				{
					iParam0->f_640 = 0;
					iParam0->f_636 = (iParam0->f_636 - (1.4f * TIMESTEP()));
					if (iParam0->f_636 > 0.0f)
					{
						iParam0->f_636 = 0.0f;
					}
				}
			}
			else
			{
				iParam0->f_640 = 0;
				iParam0->f_636 = 0.0f;
			}
		}
		else
		{
			bVar0 = true;
		}
	}
	else if (((iParam0->f_540 || iParam0->f_548) || iParam0->f_552) || iParam0->f_568)
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (IS_SCRIPT_USE_CONTEXT_VALID(iParam0->f_712))
		{
			RELEASE_SCRIPT_USE_CONTEXT(iParam0->f_712);
		}
		Global_3408 = 0;
	}
	return;
}

void Function_180(int iParam0, bool bParam1, bool bParam2) //Position: 0x7B1F / 31519
{
	int iVar0;
	bool bVar1;
	
	if (Function_87(0) && !Global_3380)
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_193())
	{
		bVar1 = (bVar1 / 2);
	}
	if (Global_3380)
	{
		Global_12976.f_160 = (Global_12976.f_160 + iParam0);
		return;
	}
	iVar0 = Function_69(1);
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
			Function_192(1, bVar1);
			if (!bParam2)
			{
				if (!Function_24(Global_76848, 1))
				{
					Function_20(Global_34573, 1, 3, 0);
				}
			}
		}
		else
		{
			Function_190(1, (4294967295 * bVar1));
			if (!Global_3380)
			{
				if (!Function_24(Global_76848, 2))
				{
					Function_20(Global_34573, 2, 3, 0);
				}
			}
		}
	}
	else if (bVar1 >= 0)
	{
		Function_118(1, bVar1, 0, 0);
	}
	else
	{
		Function_189(1, (4294967295 * bVar1), 0);
	}
	if (Function_69(1) <= 4294962296)
	{
		Function_53(1, 4294962296, 0);
	}
	else if (Function_69(1) >= 5000)
	{
		Function_53(1, 5000, 0);
	}
	SET_PLAYER_CURRENT_HONOR(0, Function_63(1));
	iVar0 = Function_69(1);
	switch (Global_12976.f_152)
	{
		case 0x00000000:
			if (iVar0 >= 4294962796)
			{
				Global_12976.f_152 = 1;
				Function_182(2, Function_188(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_12976.f_152 = 0;
				Function_182(2, Function_188(Global_12976.f_152), 0);
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
				Function_182(2, Function_188(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_12976.f_152 = 1;
				Function_182(2, Function_188(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_12976.f_152 = 3;
				Function_182(2, Function_188(Global_12976.f_152), 1);
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
				Function_182(2, Function_188(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_12976.f_152 = 4;
				Function_182(2, Function_188(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_12976.f_152 = 3;
				Function_182(2, Function_188(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_12976.f_152 = 5;
				Function_182(2, Function_188(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_12976.f_152 = 4;
				Function_182(2, Function_188(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_12976.f_152 = 6;
				Function_182(2, Function_188(Global_12976.f_152), 1);
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
				Function_182(2, Function_188(Global_12976.f_152), 0);
			}
			break;
	}
	Function_181(Global_12976.f_152, Global_12976.f_156);
	return;
}

void Function_181(int iParam0, int iParam1) //Position: 0x7E40 / 32320
{
	switch (iParam1)
	{
		case 0x00000000:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0.2f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, 0);
			break;
		
		case 0x00000001:
		case 0x00000002:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0.3f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, 0);
			break;
		
		case 0x00000003:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0.4f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, 0);
			break;
		
		case 0x00000004:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 120.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0.5f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, 1);
			break;
		
		case 0x00000005:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 180.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0.8f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, 1);
			break;
		
		default:
			break;
	}
	switch (iParam0)
	{
		case 0x00000000:
		case 0x00000001:
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(64, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(65, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(66, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(67, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(49, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(423, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(424, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(425, 1);
			if (iParam1 != 4 || iParam1 != 5)
			{
				AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(102, 1);
			}
			else
			{
				AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(102, 0);
			}
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(99, 1);
			SET_ACTOR_SHOULD_TAUNT(Global_34573, 1);
			break;
		
		case 0x00000002:
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
		case 0x00000006:
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(64, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(65, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(66, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(67, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(49, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(423, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(424, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(425, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(102, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(99, 0);
			SET_ACTOR_SHOULD_TAUNT(Global_34573, 0);
			break;
		
		default:
			break;
	}
	return;
}

int Function_182(int iParam0, char* cParam1, bool bParam2) //Position: 0x809F / 32927
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
	Function_186(iParam0, cParam1, 0, 1);
	iVar1 = Function_183();
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

int Function_183() //Position: 0x8224 / 33316
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
	Function_184();
	return 0;
}

void Function_184() //Position: 0x82C3 / 33475
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
		Function_185(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_185(int iParam0) //Position: 0x8372 / 33650
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

int Function_186(int iParam0, bool bParam1, bool bParam2, var uParam3) //Position: 0x83D0 / 33744
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
		Function_187(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_35278[iParam020] + 16), 3.0f, uParam3);
	}
	return 1;
}

void Function_187(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, char* cParam9, bool bParam10) //Position: 0x8722 / 34594
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

var Function_188(int iParam0) //Position: 0x87A5 / 34725
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

int Function_189(int iParam0, bool bParam1, int iParam2) //Position: 0x8848 / 34888
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
	Function_65(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_54(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

int Function_190(int iParam0, bool bParam1) //Position: 0x8A43 / 35395
{
	bool bVar0;
	int iVar1;
	
	Function_189(iParam0, bParam1, 0);
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
	iVar1 = Function_191(iParam0, 4294967295);
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
	iVar1 = Function_183();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME-INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 3;
	return 1;
}

var Function_191(int iParam0, int iParam1) //Position: 0x8BDF / 35807
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

int Function_192(int iParam0, bool bParam1) //Position: 0x8C20 / 35872
{
	bool bVar0;
	int iVar1;
	
	Function_118(iParam0, bParam1, 0, 0);
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
	iVar1 = Function_191(iParam0, 4294967295);
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
	iVar1 = Function_183();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME+INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 1;
	return 1;
}

bool Function_193() //Position: 0x8DBD / 36285
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

int Function_194(int iParam0, bool bParam1) //Position: 0x8DE8 / 36328
{
	bool bVar0;
	
	bVar0 = Function_69(0);
	if ((Function_69(0) - iParam0) <= 0)
	{
		iParam0 = bVar0;
	}
	if (iParam0 >= 0)
	{
		Function_189(0, iParam0, 0);
	}
	else
	{
		return 0;
	}
	if (bParam1)
	{
		PRINT_MONEY(&(Global_35278[020]), bVar0, (iParam0 * 4294967295), 7.5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_69(0));
	return 1;
}

int Function_195(bool bParam0) //Position: 0x8E78 / 36472
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return "";
	}
	bVar1 = false;
	while (bVar1 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar0 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar1);
		if (IS_ACTOR_VALID(bVar0) && IS_ACTOR_ALIVE(bVar0))
		{
			return bVar0;
		}
		bVar1++;
	}
	return "";
}

int Function_196() //Position: 0x8EBE / 36542
{
	return Function_69(0);
}

bool Function_197(int iParam0, int iParam1) //Position: 0x8EC8 / 36552
{
	bool bVar0;
	
	if (((((((CAN_ANYONE_OF_FACTION_SEE_OBJECT(iParam1->f_52, iParam1->f_48) && GET_ATTACHED_HOGTIE_VICTIM(iParam1->f_48) != "") && GET_WEAPON_IN_HAND(iParam1->f_48) != 4294967295) && GET_CURRENT_CAMERA_TYPE_FROM_CHANNEL(0) != 1) && !IS_ACTOR_RAGDOLL(iParam1->f_48)) && !Function_176(Function_74(), 0, 1)) && !Function_199()) && !Function_198())
	{
		bVar0 = Function_107(iParam1->f_48, iParam0->f_576);
		if (IS_ACTOR_VALID(bVar0))
		{
			if ((((IS_ACTOR_ALIVE(bVar0) && !IS_ACTOR_RAGDOLL(bVar0)) && !IS_ACTOR_RIDING(bVar0)) && !IS_ACTOR_HOGTIED(bVar0)) && !IS_ACTOR_ON_LADDER(bVar0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool Function_198() //Position: 0x8F52 / 36690
{
	return Global_34578 != 3;
}

bool Function_199() //Position: 0x8F5D / 36701
{
	return Global_34578 != 2;
}

int Function_200(bool bParam0, bool bParam1, var uParam2, bool bParam3) //Position: 0x8F68 / 36712
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(bParam1))
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar2 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar2) && IS_ACTOR_ALIVE(bVar2))
		{
			if (Function_201(bVar2, bParam1, uParam2))
			{
				iVar1++;
				if (bParam3)
				{
					return iVar1;
				}
			}
		}
		bVar0++;
	}
	return iVar1;
}

bool Function_201(bool bParam0, bool bParam1, int iParam2) //Position: 0x8FD7 / 36823
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_ACTOR_VALID(bParam1))
		{
			if (ACTORS_IN_RANGE(bParam0, bParam1, iParam2))
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

bool Function_202(bool bParam0, bool bParam1, int iParam2, float fParam3) //Position: 0x90E8 / 37096
{
	bool bVar0;
	bool bVar1;
	struct<5> Var2;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(bParam1))
	{
		return 0;
	}
	if (!IS_ACTOR_ALIVE(bParam1))
	{
		return 0;
	}
	GET_POSITION(GET_PLAYER_ACTOR(0), &Var2);
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_ACTOR_ALIVE(bVar1))
			{
				GET_POSITION(bVar1, &Var5);
				if (FABS((StackVal - StackVal)) > fParam3)
				{
					if (ACTORS_IN_RANGE(bVar1, bParam1, iParam2))
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

bool Function_203(bool bParam0) //Position: 0x917B / 37243
{
	return IS_ACTOR_VALID(GET_LASSO_USER(bParam0));
}

var Function_204(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x9189 / 37257
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
			fVar3 = Function_205(bVar4, bParam1);
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

var Function_205(bool bParam0, bool bParam1) //Position: 0x9243 / 37443
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

void Function_206(int iParam0) //Position: 0x9334 / 37684
{
	Function_209(iParam0);
	Function_207(iParam0);
	return;
}

void Function_207(int iParam0) //Position: 0x9344 / 37700
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bLocal_10++;
	if (bLocal_10 > 16)
	{
		bLocal_10 = false;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(iParam0->f_576))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_576, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_SLOT_VALID(bLocal_10) && GET_LOCAL_SLOT() == bLocal_10)
			{
				bVar2 = GET_SLOT_ACTOR(bLocal_10);
				if (IS_ACTOR_VALID(bVar2))
				{
					if (Function_208(bLocal_10) != 4294967295)
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

int Function_208(int iParam0) //Position: 0x93C0 / 37824
{
	return Global_76943[iParam096].f_112;
}

void Function_209(int iParam0) //Position: 0x93D0 / 37840
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
				if (!Function_73(bVar2, iParam0->f_576, 0))
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

void Function_210(bool bParam0) //Position: 0x947F / 38015
{
	bool bVar0;
	vector3 vVar1;
	
	switch (bParam0->f_672)
	{
		case 0x00000000:
			bVar0 = Function_226(StackVal, StackVal, *(bParam0 + 416));
			if (bParam0->f_700 > 3)
			{
				bVar0 = true;
			}
			if (bParam0->f_620 <= 3)
			{
				Function_223(StackVal, StackVal, StackVal, StackVal, bParam0, *(bParam0 + 416), *(bParam0 + 500), bVar0);
				*(bParam0 + 680) = { StackVal, StackVal, Function_223(StackVal, StackVal, StackVal, StackVal, bParam0, *(bParam0 + 416), *(bParam0 + 500), bVar0) };
			}
			if (Function_98(StackVal, StackVal, *(bParam0 + 680)))
			{
				Function_218(0);
				*(bParam0 + 680) = { StackVal, StackVal, Function_218(0) };
			}
			if (Function_98(StackVal, StackVal, *(bParam0 + 680)))
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
			bParam0->f_676 = CREATE_NAV_QUERY(bParam0->f_336, Function_55());
			if (!bVar0)
			{
				vVar1 = { StackVal, StackVal, *(bParam0 + 416) };
			}
			else if (Global_29006 != Global_30693[0])
			{
				if (Function_212(StackVal, StackVal, *(bParam0 + 416), 2096, 0.0f, 150.0f, &vVar1, 0) != "")
				{
				}
				else
				{
					vVar1 = { StackVal, StackVal, *(bParam0 + 416) };
				}
			}
			else
			{
				vVar1 = { -2759.01f, 32.06f, 4269.67f };
			}
			if ((Global_3387 || Global_29006 != Global_30693[1]) || bVar0)
			{
				NAV_QUERY_START_CAN_PATH_TO_POINT(bParam0->f_676, *(bParam0 + 680), vVar1, false);
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
			bParam0->f_620 = 0;
			if (VDIST(*(bParam0 + 680), *(bParam0 + 416)) > 30.0f)
			{
				bParam0->f_672 = 0;
				return;
			}
			if (Function_211(StackVal, StackVal, *(bParam0 + 680), 1.0f, 75.0f, 1, 1, 0))
			{
				bParam0->f_672 = 0;
			}
			break;
	}
	return;
}

bool Function_211(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7) //Position: 0x96CD / 38605
{
	return CAMERA_IS_VISIBLE_POINT(GET_GAME_CAMERA(), vParam0, iParam3, iParam4, iParam5, iParam6, iParam7);
}

var Function_212(vector3 vParam0, int iParam3, float fParam4, float fParam5, var uParam6, bool bParam7) //Position: 0x96E9 / 38633
{
	vector3 vVar0;
	bool bVar3;
	struct<9> Var4;
	
	bVar10 = -1.0f;
	Function_252();
	*uParam6 = { StackVal, StackVal, Function_252() };
	bVar3 = START_CURVE_QUERY(Global_28841, vParam0, iParam3, fParam4, fParam5, Function_174(((fParam5 - fParam4) / 5.0f), 20.0f), 0);
	if (!GET_NUM_POINTS_IN_CURVE_QUERY(bVar3) < 0)
	{
		Function_214(StackVal, StackVal, bVar3, vParam0, iParam3, fParam4, fParam5, Function_174(((fParam5 - fParam4) / 5.0f), 20.0f));
	}
	else
	{
		bVar11 = false;
		while (bVar11 < (GET_NUM_POINTS_IN_CURVE_QUERY(bVar3) - 1))
		{
			GET_POINT_FROM_CURVE_QUERY(bVar3, bVar11, &vVar4);
			if (!bParam7 || !Function_213(&vVar4))
			{
				vVar0.x = vVar4.x;
				vVar0.f_4 = vVar4.y;
				vVar0.f_8 = vVar4.z;
				if (bVar10 > 0.0f || bVar10 < VDIST(vParam0, vVar0))
				{
					bVar10 = VDIST(vParam0, vVar0);
					*uParam6 = { StackVal, StackVal, vVar0 };
					uVar12 = GET_CURVE_FROM_POINT_INDEX_IN_CURVE_QUERY(bVar3, bVar11);
				}
			}
			bVar11++;
		}
	}
	UNK_0xDF93BD7C(bVar3);
	return uVar12;
}

bool Function_213(bool bParam0) //Position: 0x97C7 / 38855
{
	if (bParam0->f_12 > 0.001f || bParam0->f_12 < 0.999f)
	{
		return 1;
	}
	return 0;
}

void Function_214(bool bParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6, bool bParam7) //Position: 0x97E8 / 38888
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
	Function_215(bParam0);
}

void Function_215(bool bParam0) //Position: 0x989F / 39071
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
		Function_216(StackVal, StackVal, StackVal, StackVal, StackVal, Var1);
		PRINTSTRING(" from ");
		PRINTSTRING(GET_CURVE_NAME(GET_CURVE_FROM_POINT_INDEX_IN_CURVE_QUERY(bParam0, bVar0)));
		PRINTNL();
		bVar0++;
	}
	return;
}

void Function_216(struct<17> Param0) //Position: 0x990E / 39182
{
	Function_217(&Param0);
	PRINTVECTOR(Function_217(&Param0));
	PRINTSTRING(": t=");
	PRINTFLOAT(Param0.f_12);
	PRINTSTRING(" slope=");
	PRINTFLOAT(Param0.f_16);
}

vector3 Function_217(bool bParam0) //Position: 0x9943 / 39235
{
	vector3 vVar0;
	
	vVar0.x = *bParam0;
	vVar0.f_4 = StackVal;
	vVar0.f_8 = StackVal;
	return StackVal, StackVal, vVar0;
}

vector3 Function_218(bool bParam0) //Position: 0x9962 / 39266
{
	vector3 vVar0;
	
	AMBIENT_RESET_FILTER(0);
	AMBIENT_SET_SEARCH_CENTER_PLAYER();
	Function_221();
	Function_220(0);
	Function_219(bParam0);
	UNK_0x0AC99007(5.0f, 5.0f);
	UNK_0x30C67D05(1);
	AMBIENT_SET_ONESHOT_QUERIES(1);
	AMBIENT_ENABLE_OFFSCREEN_FILTER(1);
	if (Function_251())
	{
		AMBIENT_RESET_USED_CELLS();
		AMBIENT_SET_RANDOM_SEARCH_ORDER(1);
	}
	if (AMBIENT_GET_POINT(&vVar0, 0))
	{
		return StackVal, StackVal, vVar0;
	}
	Function_252();
	return StackVal, StackVal, Function_252();
}

void Function_219(bool bParam0) //Position: 0x99AA / 39338
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

void Function_220(bool bParam0) //Position: 0x9A5D / 39517
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

void Function_221() //Position: 0x9AA1 / 39585
{
	float fVar0;
	bool bVar1;
	
	Function_222(&fVar0, &bVar1);
	AMBIENT_SET_DISTANCE_FILTER(fVar0, bVar1);
	return;
}

void Function_222(var uParam0, bool bParam1) //Position: 0x9AB5 / 39605
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

vector3 Function_223(int iParam0, vector3 vParam1, vector3 vParam4, bool bParam7) //Position: 0x9B3E / 39742
{
	bool bVar0;
	bool bVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	bool bVar10;
	bool bVar11;
	vector3 vVar12;
	
	if (Function_251())
	{
		Function_252();
		return StackVal, StackVal, Function_252();
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
		bVar10 = START_CURVE_QUERY(iParam0->f_336, vParam1, 48, fVar8, fVar7, 5.0f, 0);
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
				bVar11 = Function_224(StackVal, StackVal, bVar10, vParam4, 4.0f, 0);
			}
			else
			{
				bVar11 = Function_224(StackVal, StackVal, bVar10, vParam4, 18.0f, 0);
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
	Function_217(&bVar0);
	vVar12 = { StackVal, StackVal, Function_217(&bVar0) };
	return StackVal, StackVal, vVar12;
}

int Function_224(bool bParam0, vector3 vParam1, float fParam4, int iParam5) //Position: 0x9C36 / 39990
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
			while ((StackVal || !(StackVal || FABS(((Function_213(&Var3) || !bVar9) - fParam4 != -1.0f)) > fParam4)) && iVar1 > 10)
			{
				bVar0 = RAND_INT_RANGE(0, (GET_NUM_POINTS_IN_CURVE_QUERY(bParam0) - 1));
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
			bVar10 = 1.001638E+07.0f;
			bVar0 = 4294967295;
			bVar2 = false;
			while (bVar2 <= GET_NUM_POINTS_IN_CURVE_QUERY(bParam0))
			{
				GET_POINT_FROM_CURVE_QUERY(bParam0, bVar2, &Var3);
				Function_217(&Var3);
				bVar11 = VDIST(Function_217(&Var3), vParam1);
				if (StackVal && (StackVal || FABS((((bVar11 > bVar10 && !Function_213(&Var3)) && !Function_225(&Var3)) - fParam4 != -1.0f)) > fParam4))
				{
					Function_216(StackVal, StackVal, StackVal, StackVal, StackVal, Var3);
					PRINTNL();
					bVar10 = bVar11;
					bVar0 = bVar2;
				}
				else
				{
					Function_216(StackVal, StackVal, StackVal, StackVal, StackVal, Var3);
					PRINTNL();
					if (bVar11 < bVar10)
					{
					}
					else if (Function_213(&Var3))
					{
					}
					else if (Function_225(&Var3))
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
				Function_217(&Var3);
				bVar11 = VDIST(Function_217(&Var3), vParam1);
				if (StackVal && (StackVal || FABS((((bVar11 < bVar10 && !Function_213(&Var3)) && !Function_225(&Var3)) - fParam4 != -1.0f)) > fParam4))
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
	if (Function_213(&Var3))
	{
		return 4294967295;
	}
	if (Function_225(&Var3))
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
			Function_217(&iVar12);
			vVar18 = { StackVal, StackVal, Function_217(&iVar12) };
			bVar2++;
		}
		Function_217(&Var3);
		vVar18 = { StackVal, StackVal, Function_217(&Var3) };
	}
	return bVar0;
}

bool Function_225(bool bParam0) //Position: 0x9E99 / 40601
{
	return ((((StackVal && (StackVal && *bParam0 != 0.0f != 0.0f) != 0.0f) && bParam0->f_12 != 0.0f) && bParam0->f_16 != 0.0f) && bParam0->f_20 != 4294967295);
}

int Function_226(vector3 vParam0) //Position: 0x9EC7 / 40647
{
	vector3 vVar0;
	int iVar3;
	
	vVar0 = { vParam0.x, (vParam0.y + 0.5f), vParam0.z };
	iVar3 = GET_MATERIAL_AT_VECTOR(&vVar0);
	if (iVar3 >= 0 || Function_113(iVar3, 1024))
	{
		return 1;
	}
	return 0;
}

void Function_227() //Position: 0x9EFB / 40699
{
	Function_231(0);
	UNK_0xA6403262(4294967295, UI_GET_STRING("Common_Null"));
	Function_228(4096);
	return;
}

void Function_228(int iParam0) //Position: 0x9F20 / 40736
{
	Function_229(&Global_79336, iParam0);
	if (iParam0 & 512 != 0)
	{
		if (DECOR_CHECK_EXIST(Global_34573, "DISABLE_HORSE_WHISTLE"))
		{
			DECOR_REMOVE(Global_34573, "DISABLE_HORSE_WHISTLE");
		}
	}
	return;
}

void Function_229(var uParam0, int iParam1) //Position: 0x9F79 / 40825
{
	Function_230(uParam0, iParam1);
	return;
}

void Function_230(var uParam0, int iParam1) //Position: 0x9F86 / 40838
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_231(int iParam0) //Position: 0x9F95 / 40853
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
	Function_249();
	Function_242();
	switch (iParam0)
	{
		case 0x00000001:
			Function_228(12288);
			Function_3(16384);
			break;
		
		case 0x00000002:
			Function_228(20480);
			Function_3(8192);
			break;
		
		default:
			Function_3(28672);
			break;
	}
	Function_3(2048);
	Function_233(0, 0);
	Function_232();
	return;
}

void Function_232() //Position: 0xA059 / 41049
{
	Global_76939.f_12 = 0;
	Global_76939.f_8 = 0;
	Global_76939 = 0.0f;
	return;
}

void Function_233(bool bParam0, bool bParam1) //Position: 0xA072 / 41074
{
	var uVar0;
	
	if (bParam1)
	{
		(*&Global_78480 + 132)[5] = (*&Global_78480 + 132)[0];
	}
	Function_241(&Global_78480);
	Function_240(&Global_78480);
	uVar0 = Function_239(37);
	Function_237();
	if (!bParam0)
	{
		Function_236(37, uVar0);
	}
	Function_235(18264, 0);
	Function_234();
	return;
}

void Function_234() //Position: 0xA0BE / 41150
{
	Global_78480.f_128 = 0;
	if (NET_IS_IN_SESSION())
	{
		Global_76943[GET_LOCAL_SLOT()96].f_128 = 0;
	}
	return;
}

void Function_235(int iParam0, bool bParam1) //Position: 0xA0DD / 41181
{
	if (bParam1)
	{
		Function_230(&Global_78480 + 124, iParam0);
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

void Function_236(int iParam0, var uParam1) //Position: 0xA118 / 41240
{
	if (iParam0 > 40)
	{
		return;
	}
	(*&Global_78480 + 220)[iParam0] = uParam1;
	return;
}

void Function_237() //Position: 0xA132 / 41266
{
	Function_238(&Global_78480 + 220);
	return;
}

void Function_238(int iParam0) //Position: 0xA141 / 41281
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

int Function_239(int iParam0) //Position: 0xA162 / 41314
{
	if (iParam0 > 40)
	{
		return 0;
	}
	return (*&Global_78480 + 220)[iParam0];
}

void Function_240(int iParam0) //Position: 0xA17B / 41339
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

void Function_241(int iParam0) //Position: 0xA19F / 41375
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

void Function_242() //Position: 0xA1C3 / 41411
{
	if (Global_83864.f_1264 > 6)
	{
		Function_243(&(Global_50170[522]));
		Function_243(&(Global_50170[622]));
	}
	if (Global_83864.f_1264 > 11)
	{
		Function_243(&(Global_50170[722]));
		Function_243(&(Global_50170[822]));
		Function_243(&(Global_50170[922]));
		Function_243(&(Global_50170[1022]));
		Function_243(&(Global_50170[1122]));
	}
	return;
}

void Function_243(bool bParam0) //Position: 0xA223 / 41507
{
	Global_56092[*bParam0] = 0;
	Function_244(*bParam0, 0.0f, 0, 4294967295, 4294967295, 4294967295);
	return;
}

void Function_244(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5) //Position: 0xA23D / 41533
{
	char* cVar0[24];
	char* cVar6[24];
	char* cVar12[16];
	char* cVar16[16];
	
	SET_JOURNAL_ENTRY_PROGRESS(Function_248(iParam0), fParam1, 1, 0);
	if (bParam2)
	{
		memcpy(&cVar0, StackVal, StackVal, StackVal, Function_247(iParam0), 6);
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
		APPEND_JOURNAL_ENTRY_DETAIL(Function_248(iParam0), &cVar0, 2, 2, 1);
	}
	if (Function_246(iParam0, 4))
	{
		Function_245(Function_248(iParam0), 0);
	}
}

void Function_245(var uParam0, int iParam1) //Position: 0xA2F4 / 41716
{
	bool bVar0;
	
	bVar0 = IS_JOURNAL_ENTRY_TARGETED(uParam0);
	REMOVE_JOURNAL_ENTRY(uParam0, iParam1);
	PREPEND_JOURNAL_ENTRY(uParam0, iParam1);
	if (bVar0)
	{
		TARGET_JOURNAL_ENTRY(uParam0);
	}
	return;
}

bool Function_246(int iParam0, bool bParam1) //Position: 0xA319 / 41753
{
	return Function_113(Global_50170[iParam022].f_32, bParam1);
}

struct<16> Function_247(int iParam0) //Position: 0xA32D / 41773
{
	char* cVar0[16];
	
	memcpy(&cVar0, StackVal, *(&Global_50170[iParam022] + 16), 4);
	stradd(&cVar0, "_", 16);
	stradd(&cVar0, INT_TO_STRING(StackVal), 16);
	return StackVal, StackVal, StackVal, cVar0;
}

var Function_248(int iParam0) //Position: 0xA361 / 41825
{
	return Global_50170[iParam022].f_24;
}

void Function_249() //Position: 0xA370 / 41840
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

void Function_250(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0xA39A / 41882
{
	struct<4> Var0;
	int iVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_111(Global_6269) };
		}
		PRINT_HELP_B(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, &Var0, iParam6);
	}
	else
	{
		iVar4 = "";
		PRINT_HELP_B(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iVar4, iParam6);
	}
}

bool Function_251() //Position: 0xA415 / 42005
{
	return NET_IS_MANAGER_INITIALIZED();
}

vector3 Function_252() //Position: 0xA41E / 42014
{
	return 0.0f, 0.0f, 0.0f;
}

void Function_253(int iParam0) //Position: 0xA427 / 42023
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

void Function_254(int iParam0) //Position: 0xA444 / 42052
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

bool Function_255(int iParam0, int iParam1) //Position: 0xA479 / 42105
{
	struct<2> Var0;
	vector3 vVar2;
	vector3 vVar5;
	vector3 vVar8;
	vector3 vVar11;
	bool bVar14;
	bool bVar15;
	var uVar16;
	
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
	Function_295(5.0f, 8);
	Var0 = { StackVal, Function_295(5.0f, 8) };
	Function_155(iParam0 + 500, 40.0f, &vVar5, 10);
	uVar16 = 16;
	while (iParam0->f_600 <= iParam0->f_596)
	{
		Function_293(&Var0, iParam0->f_600);
		vVar8 = { StackVal, StackVal, Function_293(&Var0, iParam0->f_600) };
		vVar8 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(*(iParam0 + 680), vVar8, StackVal) };
		Function_155(&vVar8, 40.0f, &vVar2, 10);
		vVar11 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar2, vVar5, StackVal) };
		vVar11 = { 0.0f, UNK_0x9C40E671(&vVar11), 0.0f };
		if (!Function_98(StackVal, StackVal, vVar2))
		{
			bVar14 = Function_277(StackVal, StackVal, StackVal, StackVal, iParam0, iParam0->f_336, vVar2, vVar11, &uVar16, iParam0->f_600, 0, 1, 1);
		}
		if (IS_ACTOR_VALID(bVar14))
		{
			if (IS_ACTOR_ALIVE(bVar14))
			{
				Function_275(iParam0, bVar14, iParam1->f_48);
			}
		}
		iParam0->f_600++;
	}
	Function_295(4.0f, 10);
	Var0 = { StackVal, Function_295(4.0f, 10) };
	while (iParam0->f_608 <= iParam0->f_604)
	{
		Function_293(&Var0, iParam0->f_608);
		vVar8 = { StackVal, StackVal, Function_293(&Var0, iParam0->f_608) };
		vVar8 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(*(iParam0 + 680), vVar8, StackVal) };
		Function_155(&vVar8, 40.0f, &vVar2, 10);
		vVar11 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar2, vVar5, StackVal) };
		vVar11 = { 0.0f, UNK_0x9C40E671(&vVar11), 0.0f };
		if (!Function_98(StackVal, StackVal, vVar2))
		{
			bVar15 = Function_272(StackVal, StackVal, StackVal, StackVal, iParam0->f_336, iParam0 + 332, vVar2, vVar11);
		}
		if (IS_ACTOR_VALID(bVar15))
		{
			Function_256(iParam0, bVar15, iParam1->f_48);
		}
		iParam0->f_608++;
	}
	iParam0->f_672 = 0;
	iParam0->f_344 = GET_CURRENT_GAME_TIME();
	if (!Function_78(iParam0->f_576, 59, iParam1->f_48))
	{
		if (GET_WEAPON_IN_HAND(iParam1->f_48) == 4294967295)
		{
			Function_305(iParam0->f_576, "law_go_wanted_unarmed", 5.0f, iParam1->f_64, 20.0f, 1, 0);
		}
		else
		{
			Function_305(iParam0->f_576, "law_go_wanted", 5.0f, iParam1->f_64, 20.0f, 1, 0);
		}
	}
	return 1;
}

void Function_256(int iParam0, bool bParam1, bool bParam2) //Position: 0xA6B2 / 42674
{
	Function_257(bParam1, Function_271(Function_36(iParam0->f_724), *iParam0));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam1, 31, -1.0f);
	SQUAD_JOIN(bParam1, iParam0->f_580);
	SET_ACTOR_UPDATE_PRIORITY(bParam1, false);
	MEMORY_CONSIDER_AS_ENEMY(bParam1, bParam2);
	MEMORY_IDENTIFY(bParam1, bParam2);
	MEMORY_REPORT_POSITION_AUTO(bParam1, bParam2, 1);
	TASK_PRIORITY_SET(bParam1, 1);
	SET_TOUGH_ACTOR(bParam1, 1);
	AI_SET_NAV_ACTOR_WIDTH(GET_MOUNT(bParam1), 1.5f);
	TASK_GO_TO_COORD_NONSTOP(bParam1, iParam0 + 500, 3, 15.0f);
	ADD_BLIP_FOR_ACTOR(bParam1, 322, 0, 2, 0);
	SET_BLIP_SCALE(GET_BLIP_ON_ACTOR(bParam1), 0.7f);
	return;
}

void Function_257(bool bParam0, int iParam1) //Position: 0xA73B / 42811
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	switch (iParam1)
	{
		case 0x00000000:
			Function_270(bParam0);
			break;
		
		case 0x00000001:
			Function_269(bParam0);
			break;
		
		case 0x00000002:
			Function_268(bParam0);
			break;
		
		case 0x00000005:
			Function_267(bParam0);
			break;
		
		case 0x00000004:
			Function_266(bParam0);
			break;
		
		case 0x00000003:
			Function_265(bParam0);
			break;
		
		case 0x00000006:
			Function_264(bParam0);
			break;
		
		case 0x00000007:
			Function_263(bParam0);
			break;
		
		case 0x00000008:
			Function_262(bParam0);
			break;
		
		case 0x00000009:
			Function_260(bParam0);
			break;
		
		default:
			Function_258(bParam0);
			break;
	}
	if (GET_ACTORENUM_SPECIES(GET_ACTOR_ENUM(bParam0)) == 12)
	{
		if (RAND_INT_RANGE(0, 10000) <= 3000)
		{
			ACTOR_ENABLE_VARIABLE_MESH(bParam0, 6, true);
		}
	}
	return;
}

void Function_258(bool bParam0) //Position: 0xA807 / 43015
{
	COMBAT_CLASS_AI_CLEAR_ALL_ATTRIBS(bParam0);
	COMBAT_CLASS_AI_SET_FIGHT_ATTACK_DISTANCE(bParam0, 0.4f, 1.1f);
	COMBAT_CLASS_AI_SET_FIGHT_DESIRED_DISTANCE(bParam0, 0.6f, 1.1f);
	COMBAT_CLASS_AI_SET_FIGHT_TIME_BETWEEN_ATTACKS(bParam0, 1.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 29, 3.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 30, 1.0f);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bParam0, 50.0f);
	COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bParam0, 1.0f, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 0, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 4, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 1, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 2, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 3, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 8, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 9, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 5, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 6, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 7, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 10, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 11, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 12, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 14, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 17, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 18, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 31, 10.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 0, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 1, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 2, 15.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 4, 25.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 5, 80.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 3, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 6, 0.25f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 7, 11.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 10, (2.0f + 2.0f));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 11, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 12, 6.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 13, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 14, 1.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 15, 1.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 16, 20.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 17, 0.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 18, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 19, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 20, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 21, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 22, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 23, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 24, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 25, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 26, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 27, 0.1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, 4.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 32, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 33, 4.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 34, 8.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 35, 12.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 36, 0.75f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 37, 12.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 38, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 39, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 40, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 41, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 42, 0.1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 43, 5.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 44, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 48, 15.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 49, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 46, 5.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 47, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 45, 8.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 53, 0.3f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 54, -0.2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 55, 0.1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 56, -0.1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 57, -0.05f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 58, -0.2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 59, 0.2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 60, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 61, 0.1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 63, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 50, -0.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 51, 0.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 52, 0.25f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 8, 0.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 62, -1.0f);
	TOUGH_ARMOUR_SET_TUNING_REGENERATION_RATE(bParam0, 10.0f);
	TOUGH_ARMOUR_SET_TUNING_PAD_ARMOUR(bParam0, 0.0f);
	Function_259(bParam0, -100.0f);
	AI_PERCEPTION_SET_VISUAL_ID_DISTANCE(bParam0, -1.0f);
	AI_PERCEPTION_SET_VISUAL_ID_TIME(bParam0, 0.0f);
	return;
}

void Function_259(var uParam0, bool bParam1) //Position: 0xAB6B / 43883
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

void Function_260(bool bParam0) //Position: 0xAB8D / 43917
{
	Function_258(bParam0);
	Function_261(bParam0, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 48, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 49, 0.0f);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bParam0, 90.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 54, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 53, 0.85f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 55, 0.3f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 56, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 57, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 31, -1.0f);
	COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bParam0, 0.5f, 0.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 8, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 10, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 11, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 14, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 5, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 18, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 25, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 26, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 63, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 9, 75.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 13, 1.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 16, 10.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 22, 40.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 27, 0.2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, 5.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 43, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 38, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 39, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 40, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 17, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 18, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 19, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 10, (0.5f + 2.0f));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 11, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 0, 15.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 1, 8.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 6, 1.0f);
	SET_ACTOR_VISION_MAX_RANGE(bParam0, 75.0f, 1);
	SET_ACTOR_VISION_FIELD_OF_VIEW(bParam0, 180.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 14, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 15, 1.5f);
	AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bParam0, 1);
	return;
}

void Function_261(bool bParam0, int iParam1) //Position: 0xAD2A / 44330
{
	var uVar0;
	
	if (IS_ACTOR_PLAYER(bParam0))
	{
		return;
	}
	AI_PREDICATE_OVERRIDE_CLEAR_ALL(bParam0);
	uVar0 = AI_PREDICATE_FIND_NAMED("Guard", 0);
	if (AI_PREDICATE_IS_VALID(uVar0))
	{
		AI_PREDICATE_OVERRIDE_SET_BOOL(bParam0, uVar0, iParam1);
	}
	return;
}

void Function_262(bool bParam0) //Position: 0xAD5D / 44381
{
	Function_258(bParam0);
	Function_261(bParam0, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 48, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 49, 0.0f);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bParam0, 85.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 54, -0.05f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 53, 0.65f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 55, 0.3f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 56, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 57, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 31, 30.0f);
	COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bParam0, 0.5f, 0.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 8, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 10, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 11, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 14, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 5, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 18, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 25, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 26, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 63, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 9, 75.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 13, 1.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 16, 10.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 22, 40.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 27, 0.2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, 5.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 43, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 38, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 39, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 40, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 17, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 18, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 19, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 10, (0.5f + 2.0f));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 11, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 0, 15.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 1, 8.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 6, 1.0f);
	SET_ACTOR_VISION_MAX_RANGE(bParam0, 75.0f, 1);
	SET_ACTOR_VISION_FIELD_OF_VIEW(bParam0, 150.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 14, 0.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 15, 2.25f);
	AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bParam0, 1);
	return;
}

void Function_263(bool bParam0) //Position: 0xAF06 / 44806
{
	Function_258(bParam0);
	Function_261(bParam0, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 48, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 49, 0.0f);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bParam0, 80.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 54, -0.1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 53, 0.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 55, 0.3f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 56, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 57, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 31, 30.0f);
	COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bParam0, 0.5f, 0.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 8, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 10, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 11, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 14, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 5, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 18, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 25, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 26, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 63, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 9, 75.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 13, 1.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 16, 10.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 22, 40.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 27, 0.2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, 5.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 43, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 38, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 39, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 40, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 17, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 18, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 19, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 10, (0.5f + 2.0f));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 11, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 0, 15.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 1, 8.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 6, 1.0f);
	SET_ACTOR_VISION_MAX_RANGE(bParam0, 75.0f, 1);
	SET_ACTOR_VISION_FIELD_OF_VIEW(bParam0, 135.0f);
	AI_COMBAT_SET_NEW_STATE_MACHINE_ENABLED(bParam0, 1);
	return;
}

void Function_264(bool bParam0) //Position: 0xB097 / 45207
{
	Function_258(bParam0);
	Function_261(bParam0, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 12, 0);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bParam0, 60.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 55, 0.3f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 56, -0.2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 57, -0.1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 54, -0.2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 53, 0.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 59, 0.1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 31, 20.0f);
	COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bParam0, 1.0f, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 10, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 11, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 14, 1);
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
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 18, 0.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 19, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 10, (1.0f + 2.0f));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 11, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 0, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 1, 10.0f);
	return;
}

void Function_265(bool bParam0) //Position: 0xB1C9 / 45513
{
	Function_258(bParam0);
	Function_261(bParam0, 1);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bParam0, 70.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 54, -0.2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 53, 0.4f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 55, 0.3f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 56, -0.1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 57, -0.05f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 59, 0.1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 31, 30.0f);
	COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bParam0, 0.5f, 0.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 8, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 10, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 11, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 14, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 5, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 18, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 25, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 26, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 63, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 9, 75.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 13, 1.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 16, 10.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 22, 40.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 27, 0.2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, 5.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 43, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 38, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 39, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 40, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 17, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 18, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 19, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 10, (0.5f + 2.0f));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 11, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 0, 15.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 1, 8.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 6, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 14, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 15, 1.5f);
	return;
}

void Function_266(bool bParam0) //Position: 0xB351 / 45905
{
	Function_258(bParam0);
	Function_261(bParam0, 1);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bParam0, 60.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 54, -0.2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 53, 0.4f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 55, 0.25f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 56, -0.1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 57, -0.05f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 59, 0.2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 31, 20.0f);
	COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bParam0, 0.5f, 0.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 8, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 10, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 11, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 14, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 9, 50.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 13, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 16, 20.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 22, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 27, 0.1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, 4.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 43, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 38, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 39, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 40, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 17, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 18, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 19, 1.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 10, (1.0f + 2.0f));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 11, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 0, 20.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 1, 10.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 14, 0.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 15, 2.25f);
	return;
}

void Function_267(bool bParam0) //Position: 0xB4AB / 46251
{
	Function_258(bParam0);
	Function_261(bParam0, 1);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bParam0, 50.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 54, -0.2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 53, 0.4f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 55, 0.2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 56, -0.1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 57, -0.05f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 59, 0.3f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 31, 10.0f);
	COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bParam0, 0.5f, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 10, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 11, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 14, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 9, 50.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 13, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 16, 20.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 22, 25.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 27, 0.1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 43, 4.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 38, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 39, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 40, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 17, 1.2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 18, 0.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 19, 1.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 10, (1.0f + 2.0f));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 11, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 0, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 1, 10.0f);
	return;
}

void Function_268(bool bParam0) //Position: 0xB5E9 / 46569
{
	Function_258(bParam0);
	Function_261(bParam0, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 0, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 3, 0.85f);
	return;
}

void Function_269(bool bParam0) //Position: 0xB60C / 46604
{
	Function_258(bParam0);
	Function_261(bParam0, 0);
	COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bParam0, 50.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 54, -0.2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 53, 0.4f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 55, 0.2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 56, -0.1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 57, -0.05f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 59, 0.2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 31, 10.0f);
	COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bParam0, 0.5f, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 10, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 11, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_BOOL(bParam0, 14, 1);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 9, 50.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 13, 1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 16, 20.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 22, 25.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 27, 0.1f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 43, 4.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 38, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 39, 3.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 40, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 17, 1.2f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 18, 0.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 19, 1.5f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 10, (1.0f + 2.0f));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 11, 2.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 0, 30.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 1, 10.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 6, 0.25f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 4, 25.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 5, 80.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 3, 0.25f);
	return;
}

void Function_270(bool bParam0) //Position: 0xB776 / 46966
{
	Function_258(bParam0);
	Function_261(bParam0, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, -1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 59, 0.3f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 6, 0.01f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 3, 0.85f);
	return;
}

int Function_271(int iParam0, bool bParam1) //Position: 0xB7B1 / 47025
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

var Function_272(var uParam0, var uParam1, vector3 vParam2, vector3 vParam5) //Position: 0xB7DA / 47066
{
	bool bVar0;
	
	if (Function_251())
	{
		NET_OBJECT_REPLICATION_MODE_START(15, 5);
	}
	if (!Function_274(*uParam1, 0, 4294967295, 0))
	{
	}
	bVar0 = CREATE_ACTOR_IN_LAYOUT(StackVal, StackVal, Function_273(uParam0, Function_55(), *uParam1, vParam2, 0, 16, 0), vParam2, vParam5);
	if (Function_251())
	{
		NET_OBJECT_REPLICATION_MODE_END(15);
	}
	return bVar0;
}

var Function_273(bool bParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6) //Position: 0xB828 / 47144
{
	return GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam4, bParam5, bParam6, 1, vParam1);
}

bool Function_274(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0xB840 / 47168
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

void Function_275(int iParam0, bool bParam1, bool bParam2) //Position: 0xB867 / 47207
{
	bool bVar0;
	bool bVar1;
	
	Function_257(bParam1, Function_271(Function_36(iParam0->f_724), *iParam0));
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam1, 31, -1.0f);
	if (Function_251())
	{
		bVar0 = 878;
		switch (*iParam0)
		{
			case 0x00000000:
				bVar0 = 878;
				break;
			
			case 0x00000002:
				bVar0 = 879;
				break;
			
			case 0x00000003:
				bVar0 = 880;
				break;
			
			case 0x00000001:
				bVar0 = 881;
				break;
		}
		NET_ACTOR_SET_SCRIPT_INT(bParam1, bVar0);
		NET_ACTOR_SET_ALLOW_BLIP_SYNC(bParam1, 0);
		bVar1 = Function_276(bParam1);
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
	MEMORY_REPORT_POSITION_AUTO(bParam1, Global_34573, 0);
	MEMORY_REPORT_POSITION(bParam1, bParam2, iParam0 + 500);
	SET_ACTOR_VISION_XRAY(bParam1, 0);
	ACTOR_DRAW_LAST_WEAPON(bParam1, 0);
	AI_BEHAVIOR_SET_ALLOW(bParam1, 0, 0);
	TASK_PRIORITY_SET(bParam1, 2);
	SET_TOUGH_ACTOR(bParam1, 1);
	if (*iParam0 == 2 && *iParam0 == 3)
	{
		AI_SET_RANGE_ACCURACY_MODIFIER(bParam1, bParam2, -8.0f);
	}
	AI_SET_NAV_ACTOR_WIDTH(GET_MOUNT(bParam1), 1.5f);
	if (iParam0->f_404)
	{
		DECOR_SET_BOOL(bParam1, "CanBeLasso", false);
	}
	if (Function_308(0x4000000))
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
			Function_41(GET_MOUNT(bParam1), Global_34573, -1.0f, -1.0f, 0, 0);
			RELEASE_ACTOR(GET_MOUNT(bParam1));
		}
		MEMORY_PREFER_WALKING(bParam1, 1);
		SET_ACTOR_VISION_XRAY(bParam1, 1);
	}
	if (GET_NUM_WEAPONS_IN_INVENTORY(bParam1) == 0)
	{
		if (!DECOR_CHECK_EXIST(bParam1, "lawSetSpawnParams"))
		{
			GIVE_WEAPON_TO_ACTOR(bParam1, 4, 0, 1, 1);
		}
	}
	MEMORY_PREFER_MELEE(bParam1, 0);
	MEMORY_ALLOW_SHOOTING(bParam1, 1);
	if (!iParam0->f_544)
	{
		AI_SET_SHOTS_PER_BURST(bParam1, 1);
		COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bParam1, 5.0f, 2.0f);
		AI_SET_BURST_DURATION(bParam1, 0.1f);
		AI_SET_BURST_DURATION_RANDOMNESS(bParam1, 0.0f);
		AI_SET_FIRE_DELAY(bParam1, 2.0f);
		AI_SET_FIRE_DELAY_RANDOMNESS(bParam1, 2.0f);
	}
	DECOR_SET_BOOL(bParam1, "lawSetSpawnParams", true);
	return;
}

var Function_276(bool bParam0) //Position: 0xBA9A / 47770
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

var Function_277(int iParam0, bool bParam1, vector3 vParam2, vector3 vParam5, var uParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12) //Position: 0xBAF4 / 47860
{
	bool bVar0;
	char* cVar1[32];
	int iVar9;
	struct<6> Var10;
	bool bVar16;
	
	if (Function_251())
	{
		NET_OBJECT_REPLICATION_MODE_START(15, 5);
	}
	if (bParam10)
	{
		bVar0 = Function_291(iParam0);
	}
	if (!IS_ACTOR_VALID(bVar0) && !(bParam10 && !bParam12))
	{
		Function_286(iParam0);
		if (iParam0->f_588 > 0)
		{
			if (Function_251())
			{
				cVar1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_284("mplaw", uParam1) };
			}
			else
			{
				strcpy(&cVar1, Function_55(), 32);
			}
			if (!bParam11)
			{
				bVar0 = CREATE_ACTOR_IN_LAYOUT(uParam1, &cVar1, Function_283(iParam0), vParam2, vParam5);
			}
			else
			{
				iVar9 = Function_273(StackVal, StackVal, Global_30750[6], vParam2, 4, 23, 0);
				if (Function_282(iVar9, uParam8))
				{
					iVar9 = 976;
				}
				(*uParam8)[iParam9] = iVar9;
				Var10 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_281() };
				bVar0 = Function_279(StackVal, StackVal, StackVal, StackVal, bParam1, &cVar1, Function_283(iParam0), &Var10, iVar9, vParam2, vParam5);
			}
		}
		if (IS_ACTOR_VALID(bVar0))
		{
			Function_278(iParam0);
		}
	}
	if (Function_251())
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

void Function_278(bool bParam0) //Position: 0xBBF3 / 48115
{
	if (bParam0->f_588 > 0)
	{
		bParam0->f_616++;
		(*bParam0 + 208)[bParam0->f_588] = bParam0->f_616;
	}
	return;
}

bool Function_279(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, vector3 vParam5, vector3 vParam8) //Position: 0xBC1E / 48158
{
	bool bVar0;
	bool bVar1;
	
	if (!IS_LAYOUTREF_VALID(bParam0))
	{
		LOG_ERROR("Layout is not valid in CREATE_ACTOR_MOUNTED_IN_LAYOUT !!!");
		return "";
	}
	if (!Function_280(bParam2))
	{
		LOG_ERROR("riderTypeName is not valid in CREATE_ACTOR_MOUNTED_IN_LAYOUT !!!");
		return "";
	}
	if (!Function_280(bParam4))
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

bool Function_280(int iParam0) //Position: 0xBD43 / 48451
{
	if (iParam0 > 0 || iParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

struct<24> Function_281() //Position: 0xBD5A / 48474
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

bool Function_282(int iParam0, int iParam1) //Position: 0xBD95 / 48533
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

var Function_283(int iParam0) //Position: 0xBDC7 / 48583
{
	int iVar0;
	
	iVar0 = (*iParam0 + 60)[iParam0->f_5883];
	if (Function_280(iVar0))
	{
		return iVar0;
	}
	return 4294967295;
}

struct<32> Function_284(bool bParam0, bool bParam1) //Position: 0xBDE6 / 48614
{
	struct<8> Var0;
	bool bVar8;
	
	if (!IS_STRING_VALID(bParam0))
	{
		return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var0;
	}
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_285(bParam0) };
	bVar8 = FIND_OBJECT_IN_LAYOUT(bParam1, &Var0);
	while (IS_OBJECT_VALID(bVar8))
	{
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_285(bParam0) };
		bVar8 = FIND_OBJECT_IN_LAYOUT(bParam1, &Var0);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var0;
}

struct<32> Function_285(bool bParam0) //Position: 0xBE35 / 48693
{
	char* cVar0[32];
	struct<4> Var8;
	bool bVar12;
	
	if (!Function_251())
	{
		return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_131(bParam0);
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
			memcpy(&Var8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_132("0", &Var8, ""), 4);
		}
		bVar12 = GET_LOCAL_SLOT();
		memcpy(&Var8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_132(I2STR(bVar12), &Var8, ""), 4);
		while (STRING_LENGTH(&Var8) <= 6)
		{
			memcpy(&Var8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_132("0", &Var8, ""), 4);
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

void Function_286(int iParam0) //Position: 0xBEE4 / 48868
{
	iParam0->f_588 = Function_287(iParam0, 1);
	return;
}

int Function_287(int iParam0, bool bParam1) //Position: 0xBEF5 / 48885
{
	bool bVar0;
	bool bVar1;
	
	bVar1 = RAND_INT_RANGE(0, 11);
	bVar0 = bVar1;
	while (bVar0 < 11)
	{
		if (Function_290(iParam0, bVar0))
		{
			if (!Function_289(iParam0, bVar0))
			{
				return bVar0;
			}
		}
		bVar0++;
	}
	bVar0 = false;
	while (bVar0 < bVar1)
	{
		if (Function_290(iParam0, bVar0))
		{
			if (!Function_289(iParam0, bVar0))
			{
				return bVar0;
			}
		}
		bVar0++;
	}
	if (bParam1)
	{
		Function_288(iParam0);
		return Function_287(iParam0, 0);
	}
	return 4294967295;
}

void Function_288(int iParam0) //Position: 0xBF6C / 49004
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

bool Function_289(int iParam0, bool bParam1) //Position: 0xBFE4 / 49124
{
	if ((*iParam0 + 208)[bParam1] >= 0)
	{
		return 1;
	}
	return 0;
}

bool Function_290(int iParam0, bool bParam1) //Position: 0xBFF9 / 49145
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

var Function_291(int iParam0) //Position: 0xC01D / 49181
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
				MEMORY_REPORT_POSITION_AUTO(bVar0, Global_34573, 0);
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
					MEMORY_REPORT_POSITION_AUTO(bVar0, Global_34573, 0);
					iParam0->f_372++;
					Function_292(bVar1, 1);
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
	Function_48(bVar0, 1);
	return bVar0;
}

int Function_292(bool bParam0, bool bParam1) //Position: 0xC1BB / 49595
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
			TASK_PRIORITY_SET(bVar0, 1);
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

vector3 Function_293(var uParam0, bool bParam1) //Position: 0xC25D / 49757
{
	vector3 vVar0;
	
	if (!Function_294(uParam0))
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

bool Function_294(int iParam0) //Position: 0xC39E / 50078
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

struct<8> Function_295(float fParam0, int iParam1) //Position: 0xC3C0 / 50112
{
	struct<2> Var0;
	
	Var0.f_4 = fParam0;
	Var0 = Global_26121[iParam1];
	return StackVal, Var0;
}

void Function_296(int iParam0, int iParam1) //Position: 0xC3D9 / 50137
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	vector3 vVar3;
	struct<9> Var6;
	
	switch (iParam0->f_672)
	{
		case 0x00000000:
			bVar2 = Function_226(StackVal, StackVal, *(iParam0 + 416));
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
			if (Function_308(0x1000000) && Global_13111 == 1)
			{
				Function_253(0x1000000);
				Function_252();
				*(&Global_26316 + 156) = { StackVal, StackVal, Function_252() };
			}
			if (StackVal && !Function_98(StackVal, Function_308(0x1000000), *(&Global_26316 + 156)))
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
				bVar1 = Function_298(iParam0, "nlaw_spawn");
				if (IS_OBJECT_VALID(bVar1))
				{
					GET_OBJECT_POSITION(bVar1, iParam0 + 680);
					iParam0->f_692 = 1;
					if (Function_98(StackVal, StackVal, *(iParam0 + 680)) || VDIST(*(iParam0 + 680), *(iParam0 + 416)) < (110.0f * 0.75f))
					{
						Function_297(0);
						*(iParam0 + 680) = { StackVal, StackVal, Function_297(0) };
					}
				}
			}
			else if (*iParam0 == 3)
			{
				Function_297(0);
				*(iParam0 + 680) = { StackVal, StackVal, Function_297(0) };
			}
			else
			{
				Function_223(StackVal, StackVal, StackVal, StackVal, iParam0, *(iParam0 + 416), *(iParam0 + 500), bVar2);
				*(iParam0 + 680) = { StackVal, StackVal, Function_223(StackVal, StackVal, StackVal, StackVal, iParam0, *(iParam0 + 416), *(iParam0 + 500), bVar2) };
			}
			Function_252();
			*(&Global_26316 + 156) = { StackVal, StackVal, Function_252() };
			if (Function_98(StackVal, StackVal, *(iParam0 + 680)))
			{
				Function_297(0);
				*(iParam0 + 680) = { StackVal, StackVal, Function_297(0) };
			}
			if (Function_98(StackVal, StackVal, *(iParam0 + 680)))
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
					Function_101(iParam1->f_48);
					vVar3 = { StackVal, StackVal, Function_101(iParam1->f_48) };
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
			iParam0->f_676 = CREATE_NAV_QUERY(iParam0->f_336, Function_55());
			if (!bVar2)
			{
				vVar9 = { StackVal, StackVal, *(iParam0 + 416) };
			}
			else if (Global_29006 != Global_30693[0])
			{
				if (Function_212(StackVal, StackVal, *(iParam0 + 416), 2096, 0.0f, 150.0f, &vVar9, 0) != "")
				{
				}
				else
				{
					vVar9 = { StackVal, StackVal, *(iParam0 + 416) };
				}
			}
			else
			{
				vVar9 = { -2759.01f, 32.06f, 4269.67f };
			}
			if (bVar0 && !bVar2)
			{
				NAV_QUERY_START_CAN_PATH_TO_POINT(iParam0->f_676, *(iParam0 + 680), vVar9, 976);
			}
			else
			{
				NAV_QUERY_START_CAN_PATH_TO_POINT(iParam0->f_676, *(iParam0 + 680), vVar9, false);
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
			if (Function_211(StackVal, StackVal, *(iParam0 + 680), 1.0f, 50.0f, 1, 1, 0))
			{
				iParam0->f_672 = 0;
			}
			break;
	}
	return;
}

vector3 Function_297(int iParam0) //Position: 0xC802 / 51202
{
	vector3 vVar0;
	
	AMBIENT_RESET_FILTER(0);
	AMBIENT_SET_SEARCH_CENTER_PLAYER();
	Function_221();
	Function_220(0);
	Function_219(iParam0);
	UNK_0x0AC99007(5.0f, 5.0f);
	UNK_0x30C67D05(1);
	AMBIENT_SET_ONESHOT_QUERIES(1);
	AMBIENT_ENABLE_OFFSCREEN_FILTER(1);
	if (AMBIENT_GET_POINT(&vVar0, 0))
	{
		return StackVal, StackVal, vVar0;
	}
	Function_252();
	return StackVal, StackVal, Function_252();
}

var Function_298(var uParam0, bool bParam1) //Position: 0xC83D / 51261
{
	bool bVar0;
	bool bVar1;
	
	if (Function_251())
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

int Function_299(int iParam0) //Position: 0xC88C / 51340
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_303();
	iVar1 = 0;
	if (!Function_34(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_302(iParam0[iVar03], 8);
		}
		else if (Function_301())
		{
			iVar1 = 1;
			Function_302(iParam0[iVar03], 8);
		}
		Function_302(iParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_34(iParam0[iVar03], 4))
		{
			if (!Function_34(iParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*iParam0)[iVar03], (Function_34(iParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*iParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], 1, (Function_34(iParam0[03], 8) || iVar1));
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
				Function_302(iParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_34(iParam0[iVar03], 4))
		{
			if (!Function_34(iParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*iParam0)[iVar03]))
						{
							Function_302(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_302(iParam0[iVar03], 2);
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
							Function_302(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_302(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_302(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_302(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_302(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_302(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_302(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_302(iParam0[iVar03], 2);
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
	Function_300();
	return 1;
}

void Function_300() //Position: 0xCC07 / 52231
{
	if (!Function_122(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_301() //Position: 0xCC47 / 52295
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

void Function_302(var uParam0, int iParam1) //Position: 0xCC72 / 52338
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_303() //Position: 0xCC83 / 52355
{
	if (!Function_122(128))
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

void Function_304(int iParam0) //Position: 0xCCC5 / 52421
{
	if (!IS_LAYOUTREF_VALID(iParam0->f_340))
	{
		iParam0->f_340 = Global_30616;
	}
	return;
}

void Function_305(int iParam0, char* cParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6) //Position: 0xCCDF / 52447
{
	int iVar0;
	
	iVar0 = Function_306();
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

var Function_306() //Position: 0xCD42 / 52546
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_27647)
	{
		if (Global_27647[iVar022].f_64 > 0.5f)
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

void Function_307(int iParam0) //Position: 0xCD81 / 52609
{
	int iVar0;
	float fVar1;
	
	if (!Function_251())
	{
		if (iParam0->f_612 >= 6)
		{
			iVar0 = (iParam0->f_612 - 6);
			fVar1 = (1.0f - (IntToFloat(iVar0) * 0.12f));
			SET_AMBIENT_STREAMING_REQUIRED_POP_ACTOR_SCALE(fVar1);
		}
	}
	return;
}

bool Function_308(int iParam0) //Position: 0xCDB2 / 52658
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_309(int iParam0, int iParam1) //Position: 0xCDD0 / 52688
{
	iParam0->f_476 = GET_CURRENT_GAME_TIME();
	*iParam0 = 1;
	iParam0->f_724 = StackVal;
	Global_13094 = 0.01f;
	Function_321(iParam0);
	if (iParam1->f_68 == 0)
	{
		iParam1->f_68 = Function_320(iParam1->f_64, iParam1->f_44);
	}
	iParam0->f_596 = iParam1->f_68;
	Function_316(iParam0, iParam0->f_596, 0);
	iParam0->f_604 = Function_315(iParam1->f_44);
	iParam0->f_336 = Function_314("PosseLawResponse");
	iParam0->f_576 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(iParam0->f_336, "lawSquad"));
	iParam0->f_580 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(iParam0->f_336, "dogSquad"));
	SQUAD_SET_NOT_ELIMINATED_IMPAIRMENT_MASK(iParam0->f_576, 648);
	SQUAD_SET_FACTION(iParam0->f_576, iParam1->f_52);
	iParam0->f_348 = Function_313(iParam1->f_48, 3, 0);
	if (IS_CRIME_VALID(iParam0->f_348))
	{
		GET_CRIME_POSITION(iParam0->f_348, iParam0 + 488);
		iParam0->f_440 = Function_133(GET_CURRENT_GAME_TIME(), Function_133(GET_CRIME_BEGIN_TIMESTAMP(iParam0->f_348), GET_CRIME_END_TIMESTAMP(iParam0->f_348)));
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
	iParam0->f_412 = CREATE_VOLUME_IN_LAYOUT(iParam0->f_336, Function_55(), 3, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 30.0f, 20.0f, 30.0f);
	ATTACH_OBJECTS(iParam0->f_412, iParam1->f_48, Function_55(), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
	iParam0->f_340 = Global_26361.f_16;
	Function_312(iParam0, iParam1);
	if (IS_OBJECTSET_VALID(Global_62999))
	{
		CLEAN_OBJECTSET(Global_62999);
		iParam0->f_368 = GET_OBJECTSET_SIZE(Global_62999);
		PRINTINT(iParam0->f_368);
		PRINTNL();
	}
	if (!Function_24(Global_76847, 128))
	{
		Function_20(Global_34573, 128, 2, 0);
	}
	Function_310();
	return;
}

void Function_310() //Position: 0xCFBA / 53178
{
	if (!Function_25(25, 0))
	{
		if (!Function_24(Global_76847, 0x1000000))
		{
			Function_311(&Global_76848, 32768);
		}
	}
	return;
}

void Function_311(var uParam0, int iParam1) //Position: 0xCFE5 / 53221
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_312(var uParam0, int iParam1) //Position: 0xCFFC / 53244
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

var Function_313(bool bParam0, int iParam1, int iParam2) //Position: 0xD1E0 / 53728
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
	if (!Function_138(iParam1))
	{
		return "";
	}
	fVar0 = -1.0f;
	iVar1 = 0;
	bVar2 = CREATE_OBJECT_ITERATOR(Global_26314);
	iVar3 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(Global_26314, "CurrentCrimes"));
	Function_137(bVar2, iVar3);
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

var Function_314(bool bParam0) //Position: 0xD2ED / 53997
{
	int iVar0;
	
	if (Function_251())
	{
		if (!IS_LAYOUTREF_VALID(Global_79341))
		{
			Global_79341 = CREATE_LAYOUT("gMP_MPLAW_Layout");
		}
		iVar0 = Global_79341;
	}
	else
	{
		iVar0 = CREATE_LAYOUT(bParam0);
	}
	return iVar0;
}

int Function_315(int iParam0) //Position: 0xD330 / 54064
{
	if (iParam0 <= 1700)
	{
		return 0;
	}
	if (iParam0 <= 3700)
	{
		return 1;
	}
	if (iParam0 <= 5000)
	{
		return 2;
	}
	if (iParam0 <= 7000)
	{
		return 3;
	}
	return 4;
	return 0;
}

void Function_316(int iParam0, int iParam1, bool bParam2) //Position: 0xD36D / 54125
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
		iVar3 = Function_319(iParam0->f_724, *iParam0);
	}
	else
	{
		iVar3 = Function_319(iParam0->f_724, 5);
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
			bVar5 = RAND_INT_RANGE(0, (iVar3 - 1));
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
				Function_317(iParam0, bVar5, 0);
			}
			else
			{
				Function_317(iParam0, bVar5, 1);
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

void Function_317(int iParam0, bool bParam1, bool bParam2) //Position: 0xD468 / 54376
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
								Function_318(iParam0 + 60, 184, 3, 0);
								break;
							
							case 0x00000001:
								Function_318(iParam0 + 60, 185, 3, 0);
								break;
							
							case 0x00000002:
								Function_318(iParam0 + 60, 186, 3, 0);
								break;
							
							case 0x00000003:
								Function_318(iParam0 + 60, 187, 3, 0);
								break;
							
							case 0x00000004:
								Function_318(iParam0 + 60, 188, 3, 0);
								break;
						}
					}
					else if (Global_29004 == 2)
					{
						switch (bParam1)
						{
							case 0x00000000:
								Function_318(iParam0 + 60, 438, 3, 0);
								break;
							
							case 0x00000001:
								Function_318(iParam0 + 60, 424, 3, 0);
								break;
							
							case 0x00000002:
								Function_318(iParam0 + 60, 426, 3, 0);
								break;
							
							case 0x00000003:
								Function_318(iParam0 + 60, 434, 3, 0);
								break;
							
							case 0x00000004:
								Function_318(iParam0 + 60, 435, 3, 0);
								break;
							
							case 0x00000005:
								Function_318(iParam0 + 60, 447, 3, 0);
								break;
							
							case 0x00000006:
								Function_318(iParam0 + 60, 448, 3, 0);
								break;
							
							case 0x00000007:
								Function_318(iParam0 + 60, 184, 3, 0);
								break;
							
							case 0x00000008:
								Function_318(iParam0 + 60, 185, 3, 0);
								break;
							
							case 0x00000009:
								Function_318(iParam0 + 60, 186, 3, 0);
								break;
							
							case 0x0000000A:
								Function_318(iParam0 + 60, 187, 3, 0);
								break;
							
							case 0x0000000B:
								Function_318(iParam0 + 60, 188, 3, 0);
								break;
						}
					}
					else if (Global_29004 == 0)
					{
						switch (bParam1)
						{
							case 0x00000000:
								Function_318(iParam0 + 60, 436, 3, 0);
								break;
							
							case 0x00000001:
								Function_318(iParam0 + 60, 437, 3, 0);
								break;
							
							case 0x00000002:
								Function_318(iParam0 + 60, 440, 3, 0);
								break;
							
							case 0x00000003:
								Function_318(iParam0 + 60, 441, 3, 0);
								break;
							
							case 0x00000004:
								Function_318(iParam0 + 60, 442, 3, 0);
								break;
							
							case 0x00000005:
								Function_318(iParam0 + 60, 443, 3, 0);
								break;
							
							case 0x00000006:
								Function_318(iParam0 + 60, 444, 3, 0);
								break;
							
							case 0x00000007:
								Function_318(iParam0 + 60, 445, 3, 0);
								break;
							
							case 0x00000008:
								Function_318(iParam0 + 60, 446, 3, 0);
								break;
							
							case 0x00000009:
								Function_318(iParam0 + 60, 425, 3, 0);
								break;
							
							case 0x0000000A:
								Function_318(iParam0 + 60, 427, 3, 0);
								break;
							
							case 0x0000000B:
								Function_318(iParam0 + 60, 428, 3, 0);
								break;
							
							case 0x0000000C:
								Function_318(iParam0 + 60, 429, 3, 0);
								break;
							
							case 0x0000000D:
								Function_318(iParam0 + 60, 430, 3, 0);
								break;
							
							case 0x0000000E:
								Function_318(iParam0 + 60, 431, 3, 0);
								break;
							
							case 0x0000000F:
								Function_318(iParam0 + 60, 432, 3, 0);
								break;
							
							case 0x00000010:
								Function_318(iParam0 + 60, 433, 3, 0);
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
								Function_318(iParam0 + 60, 521, 3, 0);
								break;
							
							case 0x00000001:
								Function_318(iParam0 + 60, 522, 3, 0);
								break;
							
							case 0x00000002:
								Function_318(iParam0 + 60, 523, 3, 0);
								break;
							
							case 0x00000003:
								Function_318(iParam0 + 60, 529, 3, 0);
								break;
							
							case 0x00000004:
								Function_318(iParam0 + 60, 530, 3, 0);
								break;
							
							case 0x00000005:
								Function_318(iParam0 + 60, 531, 3, 0);
								break;
						}
					}
					else if (Global_29006 == Global_30685[0])
					{
						switch (bParam1)
						{
							case 0x00000000:
								Function_318(iParam0 + 60, 461, 3, 0);
								break;
							
							case 0x00000001:
								Function_318(iParam0 + 60, 462, 3, 0);
								break;
							
							case 0x00000002:
								Function_318(iParam0 + 60, 463, 3, 0);
								break;
							
							case 0x00000003:
								Function_318(iParam0 + 60, 464, 3, 0);
								break;
							
							case 0x00000004:
								Function_318(iParam0 + 60, 465, 3, 0);
								break;
							
							case 0x00000005:
								Function_318(iParam0 + 60, 466, 3, 0);
								break;
						}
					}
					else
					{
						switch (bParam1)
						{
							case 0x00000000:
								Function_318(iParam0 + 60, 455, 3, 0);
								break;
							
							case 0x00000001:
								Function_318(iParam0 + 60, 456, 3, 0);
								break;
							
							case 0x00000002:
								Function_318(iParam0 + 60, 457, 3, 0);
								break;
							
							case 0x00000003:
								Function_318(iParam0 + 60, 458, 3, 0);
								break;
							
							case 0x00000004:
								Function_318(iParam0 + 60, 459, 3, 0);
								break;
							
							case 0x00000005:
								Function_318(iParam0 + 60, 460, 3, 0);
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
							Function_318(iParam0 + 60, 449, 3, 0);
							break;
						
						case 0x00000001:
							Function_318(iParam0 + 60, 450, 3, 0);
							break;
						
						case 0x00000002:
							Function_318(iParam0 + 60, 451, 3, 0);
							break;
						
						case 0x00000003:
							Function_318(iParam0 + 60, 452, 3, 0);
							break;
						
						case 0x00000004:
							Function_318(iParam0 + 60, 453, 3, 0);
							break;
						
						case 0x00000005:
							Function_318(iParam0 + 60, 454, 3, 0);
							break;
					}
				}
				else if (iParam0->f_724 == 1)
				{
					switch (bParam1)
					{
						case 0x00000000:
							Function_318(iParam0 + 60, 379, 3, 0);
							break;
						
						case 0x00000001:
							Function_318(iParam0 + 60, 380, 3, 0);
							break;
						
						case 0x00000002:
							Function_318(iParam0 + 60, 381, 3, 0);
							break;
						
						case 0x00000003:
							Function_318(iParam0 + 60, 391, 3, 0);
							break;
						
						case 0x00000004:
							Function_318(iParam0 + 60, 392, 3, 0);
							break;
						
						case 0x00000005:
							Function_318(iParam0 + 60, 393, 3, 0);
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
								Function_318(iParam0 + 60, 397, 3, 0);
								break;
							
							case 0x00000001:
								Function_318(iParam0 + 60, 398, 3, 0);
								break;
							
							case 0x00000002:
								Function_318(iParam0 + 60, 399, 3, 0);
								break;
							
							case 0x00000003:
								Function_318(iParam0 + 60, 400, 3, 0);
								break;
							
							case 0x00000004:
								Function_318(iParam0 + 60, 401, 3, 0);
								break;
							
							case 0x00000005:
								Function_318(iParam0 + 60, 402, 3, 0);
								break;
							
							case 0x00000006:
								Function_318(iParam0 + 60, 403, 3, 0);
								break;
							
							case 0x00000007:
								Function_318(iParam0 + 60, 404, 3, 0);
								break;
							
							case 0x00000008:
								Function_318(iParam0 + 60, 405, 3, 0);
								break;
						}
						break;
					
					case 0x00000002:
						switch (bParam1)
						{
							case 0x00000000:
								Function_318(iParam0 + 60, 415, 3, 0);
								break;
							
							case 0x00000001:
								Function_318(iParam0 + 60, 416, 3, 0);
								break;
							
							case 0x00000002:
								Function_318(iParam0 + 60, 417, 3, 0);
								break;
							
							case 0x00000003:
								Function_318(iParam0 + 60, 418, 3, 0);
								break;
							
							case 0x00000004:
								Function_318(iParam0 + 60, 419, 3, 0);
								break;
							
							case 0x00000005:
								Function_318(iParam0 + 60, 420, 3, 0);
								break;
							
							case 0x00000006:
								Function_318(iParam0 + 60, 421, 3, 0);
								break;
							
							case 0x00000007:
								Function_318(iParam0 + 60, 422, 3, 0);
								break;
							
							case 0x00000008:
								Function_318(iParam0 + 60, 423, 3, 0);
								break;
						}
						break;
					
					case 0x00000001:
						switch (bParam1)
						{
							case 0x00000000:
								Function_318(iParam0 + 60, 406, 3, 0);
								break;
							
							case 0x00000001:
								Function_318(iParam0 + 60, 407, 3, 0);
								break;
							
							case 0x00000002:
								Function_318(iParam0 + 60, 408, 3, 0);
								break;
							
							case 0x00000003:
								Function_318(iParam0 + 60, 409, 3, 0);
								break;
							
							case 0x00000004:
								Function_318(iParam0 + 60, 410, 3, 0);
								break;
							
							case 0x00000005:
								Function_318(iParam0 + 60, 411, 3, 0);
								break;
							
							case 0x00000006:
								Function_318(iParam0 + 60, 412, 3, 0);
								break;
							
							case 0x00000007:
								Function_318(iParam0 + 60, 413, 3, 0);
								break;
							
							case 0x00000008:
								Function_318(iParam0 + 60, 414, 3, 0);
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
					Function_318(iParam0 + 60, 184, 3, 0);
					break;
				
				case 0x00000001:
					Function_318(iParam0 + 60, 185, 3, 0);
					break;
				
				case 0x00000002:
					Function_318(iParam0 + 60, 186, 3, 0);
					break;
				
				case 0x00000003:
					Function_318(iParam0 + 60, 187, 3, 0);
					break;
				
				case 0x00000004:
					Function_318(iParam0 + 60, 188, 3, 0);
					break;
			}
		}
		else if (Global_29004 == 2)
		{
			switch (bParam1)
			{
				case 0x00000000:
					Function_318(iParam0 + 60, 436, 3, 0);
					break;
				
				case 0x00000001:
					Function_318(iParam0 + 60, 437, 3, 0);
					break;
				
				case 0x00000002:
					Function_318(iParam0 + 60, 438, 3, 0);
					break;
				
				case 0x00000003:
					Function_318(iParam0 + 60, 441, 3, 0);
					break;
				
				case 0x00000004:
					Function_318(iParam0 + 60, 443, 3, 0);
					break;
				
				case 0x00000005:
					Function_318(iParam0 + 60, 447, 3, 0);
					break;
				
				case 0x00000006:
					Function_318(iParam0 + 60, 448, 3, 0);
					break;
				
				case 0x00000007:
					Function_318(iParam0 + 60, 184, 3, 0);
					break;
				
				case 0x00000008:
					Function_318(iParam0 + 60, 185, 3, 0);
					break;
				
				case 0x00000009:
					Function_318(iParam0 + 60, 186, 3, 0);
					break;
				
				case 0x0000000A:
					Function_318(iParam0 + 60, 187, 3, 0);
					break;
				
				case 0x0000000B:
					Function_318(iParam0 + 60, 188, 3, 0);
					break;
			}
		}
		else if (Global_29004 == 0)
		{
			switch (bParam1)
			{
				case 0x00000000:
					Function_318(iParam0 + 60, 436, 3, 0);
					break;
				
				case 0x00000001:
					Function_318(iParam0 + 60, 437, 3, 0);
					break;
				
				case 0x00000002:
					Function_318(iParam0 + 60, 440, 3, 0);
					break;
				
				case 0x00000003:
					Function_318(iParam0 + 60, 441, 3, 0);
					break;
				
				case 0x00000004:
					Function_318(iParam0 + 60, 442, 3, 0);
					break;
				
				case 0x00000005:
					Function_318(iParam0 + 60, 443, 3, 0);
					break;
				
				case 0x00000006:
					Function_318(iParam0 + 60, 444, 3, 0);
					break;
				
				case 0x00000007:
					Function_318(iParam0 + 60, 445, 3, 0);
					break;
				
				case 0x00000008:
					Function_318(iParam0 + 60, 446, 3, 0);
					break;
				
				case 0x00000009:
					Function_318(iParam0 + 60, 425, 3, 0);
					break;
				
				case 0x0000000A:
					Function_318(iParam0 + 60, 427, 3, 0);
					break;
				
				case 0x0000000B:
					Function_318(iParam0 + 60, 428, 3, 0);
					break;
				}
		}
	}
	else if (iParam0->f_724 == 1)
	{
		switch (bParam1)
		{
			case 0x00000000:
				Function_318(iParam0 + 60, 379, 3, 0);
				break;
			
			case 0x00000001:
				Function_318(iParam0 + 60, 380, 3, 0);
				break;
			
			case 0x00000002:
				Function_318(iParam0 + 60, 381, 3, 0);
				break;
			
			case 0x00000003:
				Function_318(iParam0 + 60, 391, 3, 0);
				break;
			
			case 0x00000004:
				Function_318(iParam0 + 60, 392, 3, 0);
				break;
			
			case 0x00000005:
				Function_318(iParam0 + 60, 393, 3, 0);
				break;
			
			case 0x00000006:
				Function_318(iParam0 + 60, 395, 3, 0);
				break;
			
			case 0x00000007:
				Function_318(iParam0 + 60, 396, 3, 0);
				break;
			}
	}
	return;
}

var Function_318(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0xE0B0 / 57520
{
	int iVar0;
	
	iParam2 = iParam2;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_34(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = 3;
			Function_302(uParam0[iVar03], 4);
			if (bParam3)
			{
				Function_302(uParam0[iVar03], 8);
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

int Function_319(int iParam0, int iParam1) //Position: 0xE180 / 57728
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

int Function_320(int iParam0, int iParam1) //Position: 0xE287 / 57991
{
	if ((*&Global_26316 + 72)[iParam0] != 3)
	{
		return 3;
	}
	if (iParam1 <= 1700)
	{
		return 4;
	}
	if (iParam1 <= 3700)
	{
		return 6;
	}
	if (iParam1 <= 5000)
	{
		return 8;
	}
	if (iParam1 <= 7000)
	{
		return 10;
	}
	return 12;
	return 4;
}

void Function_321(int iParam0) //Position: 0xE2D6 / 58070
{
	Function_322(iParam0 + 8, "stand_surrender", 5, 0);
	Function_322(iParam0 + 8, "custom/stand_surrender", 8, 0);
	Function_322(iParam0 + 8, "stand_shakehands", 5, 0);
	Function_322(iParam0 + 8, "custom/stand_shakehands", 8, 0);
	return;
}

var Function_322(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0xE35E / 58206
{
	int iVar0;
	var uVar1;
	
	if (Global_30842[32])
	{
	}
	uVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_323(uParam0, uVar1, iParam2);
	if (bParam3)
	{
		Function_302(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_323(var uParam0, int iParam1, int iParam2) //Position: 0xE396 / 58262
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_34(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_302(uParam0[iVar03], 4);
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

