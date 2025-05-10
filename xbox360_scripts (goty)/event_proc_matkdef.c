//Decompiled with MagicRDR v1.0
//Function Count : 530
//Statics Count : 475
//Natives Count : 532
//Parameters Count : 51

#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 2;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	int iLocal_14 = 0;
	int iLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	struct<1533> Local_23 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	vector3 vVar1;
	vector3 vVar7;
	var uVar18;
	int iVar19;
	bool bVar20;
	int iVar21;
	bool bVar22;
	int iVar23;
	var uVar24;
	bool bVar25;
	int iVar26;
	bool bVar27;
	bool bVar28;
	int iVar29;
	float fVar30;
	bool bVar31;
	
	iLocal_14 = 0;
	iLocal_15 = 0;
	iLocal_415 = 0;
	iLocal_416 = 0;
	iLocal_420 = 0;
	iLocal_421 = 0;
	iLocal_422 = 0;
	iLocal_423 = 0;
	bVar27 = false;
	iVar29 = 0;
	iLocal_21 = 0;
	bVar22 = (Function_529(1, 0) || ScriptParam_0.f_36 != 1);
	if (bVar22)
	{
		Function_528(0);
		Function_527(0);
		Function_526(12);
		iLocal_21 = 0;
	}
	else
	{
		Function_522(&Local_23, 0, 0);
		iLocal_21 = 5;
	}
	Local_23.f_628 = 0;
	while (!IS_EXITFLAG_SET())
	{
		if (IS_ACTOR_VALID(Local_23.f_972))
		{
			GET_POSITION(Local_23.f_972, &vVar1);
		}
		else
		{
			vVar1 = { 0.0f, 0.0f, 0.0f };
		}
		vVar7 = { 0.0f, 0.0f, 0.0f };
		if ((iLocal_21 < 0 && iLocal_21 > 3) && IS_EARLIER_THAN(iLocal_414, GET_TIME_OF_DAY()))
		{
			if (Function_521(StackVal, StackVal, vVar1))
			{
				vVar7 = { StackVal, StackVal, *(&ScriptParam_0 + 8) };
			}
			else
			{
				vVar7 = { StackVal, StackVal, vVar1 };
			}
			if (VDIST(Global_34574, vVar7) < 75.0f && !WOULD_ACTOR_BE_VISIBLE(false, &vVar7, 3212836864))
			{
				Function_522(&Local_23, 0, 0);
				iLocal_21 = 5;
			}
		}
		else if (Global_3380 != 1 && ScriptParam_0.f_36 != 0)
		{
			Function_522(&Local_23, 0, 0);
			iLocal_21 = 5;
		}
		if (iLocal_21 > 3)
		{
			Function_520(&Local_23);
		}
		switch (iLocal_21)
		{
			case 0x00000000:
				if (iLocal_415 == 0)
				{
					Function_518(&Local_23 + 636, "procmissions", 10, 0);
					Function_518(&Local_23 + 636, "stats", 10, 0);
					Function_518(&Local_23 + 636, "$/content/scripting/gringo/simplegringo/shakehands_link", 1, 0);
					Function_518(&Local_23 + 636, "nthank_you", 5, 0);
					Function_518(&Local_23 + 636, "custom/thank_you", 8, 0);
					switch (Global_29004)
					{
						case 0x00000000:
						case 0x00000002:
							Function_517(&Local_23, 142, 0);
							Function_517(&Local_23, 155, 1);
							Function_517(&Local_23, 229, 2);
							Function_517(&Local_23, 114, 3);
							Function_517(&Local_23, 112, 4);
							break;
						
						case 0x00000001:
							Function_517(&Local_23, 284, 0);
							Function_517(&Local_23, 285, 1);
							Function_517(&Local_23, 267, 2);
							Function_517(&Local_23, 277, 3);
							Function_517(&Local_23, 304, 4);
							Function_517(&Local_23, 34, 5);
							break;
					}
					switch (Global_29004)
					{
						case 0x00000000:
							if (Function_516())
							{
								if (Global_29005 == Global_30628[2])
								{
									Function_515(&Local_23, 479, 0);
									Function_515(&Local_23, 480, 1);
									Function_515(&Local_23, 481, 2);
									Function_515(&Local_23, 483, 3);
								}
								else if (Global_29005 != Global_30628[0] || Global_29005 != Global_30628[3])
								{
									Function_515(&Local_23, 486, 0);
									Function_515(&Local_23, 490, 1);
									Function_515(&Local_23, 491, 2);
									Function_515(&Local_23, 492, 3);
								}
								else if (Global_29005 == Global_30628[1])
								{
									Function_515(&Local_23, 505, 0);
									Function_515(&Local_23, 509, 1);
									Function_515(&Local_23, 510, 2);
									Function_515(&Local_23, 513, 3);
								}
							}
							else
							{
								Function_515(&Local_23, 398, 0);
								Function_515(&Local_23, 397, 1);
								Function_515(&Local_23, 401, 2);
								Function_515(&Local_23, 403, 3);
							}
							break;
						
						case 0x00000001:
							if (Function_516())
							{
								Function_515(&Local_23, 496, 0);
								Function_515(&Local_23, 500, 1);
								Function_515(&Local_23, 499, 2);
								Function_515(&Local_23, 502, 3);
							}
							else
							{
								Function_515(&Local_23, 406, 0);
								Function_515(&Local_23, 407, 1);
								Function_515(&Local_23, 410, 2);
								Function_515(&Local_23, 411, 3);
							}
							break;
						
						case 0x00000002:
							if (Function_516())
							{
								Function_515(&Local_23, 467, 0);
								Function_515(&Local_23, 468, 1);
								Function_515(&Local_23, 471, 2);
								Function_515(&Local_23, 474, 3);
							}
							else
							{
								Function_515(&Local_23, 416, 0);
								Function_515(&Local_23, 419, 1);
								Function_515(&Local_23, 420, 2);
								Function_515(&Local_23, 423, 3);
							}
							break;
					}
					Function_513(&Local_23, 1177);
					Function_512(&Local_23, 4);
					Function_511(&Local_23, 6);
					iLocal_415 = 1;
				}
				if (iLocal_415 == 1)
				{
					if (Function_505(&Local_23 + 636))
					{
						iLocal_414 = GET_TIME_OF_DAY();
						ADD_TIME(&iLocal_414, 0, 0, 8, 0);
						Function_504(&Local_23, 0);
						iLocal_21 = 1;
					}
				}
				break;
			
			case 0x00000001:
				if (ScriptParam_0.f_64 == 0)
				{
					ScriptParam_0.f_64 = 3;
				}
				if (!Function_521(StackVal, StackVal, *(&ScriptParam_0 + 8)))
				{
					iVar23 = 1;
				}
				else if (Function_474(&ScriptParam_0, &iVar19, &uVar18, &iVar21, 1))
				{
					iVar23 = 1;
				}
				else if (iVar21 == 1)
				{
					iLocal_21 = 5;
				}
				Function_504(&Local_23, iVar19);
				if (iVar23 != 1 && iLocal_21 > 5)
				{
					Function_473(StackVal, StackVal, &Local_23, *(&ScriptParam_0 + 8));
					if (Function_471(&Local_23))
					{
						if (Function_376(&Local_23))
						{
							Function_370(&Local_23, 1);
							Function_370(&Local_23, 3);
							Function_504(&Local_23, 200);
							iLocal_21 = 2;
						}
						else
						{
							iLocal_21 = 5;
						}
					}
					if (Local_23.f_900 == 1)
					{
						if (!Function_521(StackVal, StackVal, *(&ScriptParam_0 + 8)) && iLocal_21 > 5)
						{
							if (VDIST(Global_34574, *(&ScriptParam_0 + 8)) < Function_368(1))
							{
								iLocal_21 = 5;
							}
							else
							{
								iLocal_21 = 2;
							}
						}
					}
				}
				break;
			
			case 0x00000002:
				Function_363(&Local_23);
				Function_504(&Local_23, 0);
				iLocal_21 = 3;
				break;
			
			case 0x00000003:
				Function_362();
				Function_350(StackVal, StackVal, Function_362(), &uVar24, ScriptParam_0.f_56, Local_23.f_972, 100, 0x42a00000, 1);
				iLocal_22 = Function_242(&Local_23);
				Function_504(&Local_23, 0);
				switch (iLocal_22)
				{
					case 0x00000000:
						break;
					
					case 0x00000001:
						Function_370(&Local_23, 2);
						Function_370(&Local_23, 4);
						break;
					
					case 0x00000002:
						Function_370(&Local_23, 2);
						Function_370(&Local_23, 4);
						break;
					
					case 0x00000003:
						Function_370(&Local_23, 9);
						break;
					
					case 0x0000000A:
						if (iLocal_416 == 0)
						{
							if (Function_241(&Local_23) == 1)
							{
								Function_240(&Local_23, 1);
								if (Function_239(&Local_23) == 1)
								{
									Function_238(&Local_23, "pm_mad_vfar1", 1);
								}
								else
								{
									Function_238(&Local_23, "pm_mad_vfar2", 1);
								}
							}
							iLocal_416 = 1;
						}
						break;
					
					case 0x0000000B:
						if (Function_234(&Local_23 + 856, 30.0f))
						{
							if (Function_241(&Local_23) == 1)
							{
								Function_370(&Local_23, 7);
							}
							else
							{
								Function_370(&Local_23, 10);
							}
						}
						break;
					
					case 0x0000000C:
						Function_240(&Local_23, 1);
						if (Function_241(&Local_23) == 1)
						{
							if (Function_239(&Local_23) == 2)
							{
								Function_238(&Local_23, "pm_mad_failb", 1);
								Function_230(5, 5000);
								Function_228(StackVal, 50);
								Function_370(&Local_23, 9);
							}
							else if (Function_239(&Local_23) == 1)
							{
								Function_227(&Local_23);
								Function_370(&Local_23, 8);
							}
						}
						else
						{
							Function_238(&Local_23, "pm_mad_failn", 1);
							Function_370(&Local_23, 10);
						}
						break;
					
					case 0x0000000D:
						Function_227(&Local_23);
						Function_370(&Local_23, 8);
						break;
					
					case 0x00000010:
						Function_225(&Local_23);
						if (Function_239(&Local_23) == 1)
						{
							Function_370(&Local_23, 9);
						}
						else if (Function_239(&Local_23) == 2)
						{
						}
						else
						{
							Function_370(&Local_23, 10);
						}
						break;
					
					case 0x0000000F:
						Function_225(&Local_23);
						if (Function_239(&Local_23) == 2)
						{
							Function_370(&Local_23, 9);
						}
						else if (Function_239(&Local_23) == 1)
						{
							Function_227(&Local_23);
							Function_370(&Local_23, 8);
						}
						else
						{
							Function_370(&Local_23, 10);
						}
						break;
					
					case 0x0000000E:
						Function_370(&Local_23, 6);
						if (Function_241(&Local_23) == 1)
						{
							Function_370(&Local_23, 9);
						}
						else
						{
							Function_370(&Local_23, 10);
						}
						break;
					
					case 0x00000004:
						Function_370(&Local_23, 10);
						break;
					
					case 0x00000009:
						Function_370(&Local_23, 9);
						break;
					
					case 0x00000005:
					case 0x00000008:
					case 0x00000007:
					case 0x00000006:
						Function_370(&Local_23, 9);
						break;
					
					default:
						LOG_ERROR("UNHANDLED MATKDEF STATUS");
						break;
				}
				break;
			
			case 0x00000005:
				if (iLocal_420 == 0)
				{
					Function_216(&Local_23, 0, 0);
					Function_522(&Local_23, 0, 0);
					if (Function_239(&Local_23) != 2 && iLocal_413 != 2)
					{
						iLocal_421 = 1;
					}
					else
					{
						iLocal_421 = 0;
					}
					if (iLocal_421 == 0)
					{
						Function_211(1);
						iLocal_423 = 1;
						Function_210(&iLocal_417);
					}
					iLocal_420 = 1;
				}
				else if (iLocal_423 == 0)
				{
					if (iLocal_422 == 0)
					{
						if (iLocal_421 == 1)
						{
							Function_206(&Local_23);
							Function_205(Local_23.f_1504);
							if (VDIST(Global_34574, Function_205(Local_23.f_1504)) > 60.0f)
							{
								bVar25 = true;
								Function_195(&Local_23 + 1504, &Global_34573, &fVar30, &iVar29, &bVar31, Local_23.f_832, 10.0f, &bVar27, bVar28, &Local_23 + 928, "nthank_you", "nthank_you", "", "", 30.0f, 2, -7.5f, 0, 4.0f, 1, 0, 0, 1, 0, 0x40800000);
							}
							else
							{
								Function_141(&Local_23, 0);
							}
							iLocal_422 = 1;
						}
						else
						{
							LOG_ERROR("mAtkDef: Unexpected state in EVENT_ENDING");
							Function_211(1);
							iLocal_423 = 1;
							Function_210(&iLocal_417);
						}
					}
					if (iLocal_422 == 1)
					{
						if (Function_138(&Local_23))
						{
							Function_370(&Local_23, 9);
							Function_134(&Local_23);
							Function_133((&Local_23 + 1256)->f_60, 1);
							Function_132((&Local_23 + 1256)->f_60, Global_34573, 4);
							Function_131((&Local_23 + 1256)->f_60, Global_34573);
							bVar20 = false;
							while (bVar20 <= SQUAD_GET_SIZE((&Local_23 + 1256)->f_60))
							{
								Function_130(SQUAD_GET_ACTOR_BY_INDEX((&Local_23 + 1256)->f_60, bVar20), &Global_34573);
								bVar20++;
							}
							Function_211(1);
							iLocal_423 = 1;
							iVar26 = 1;
							Function_210(&iLocal_417);
						}
						else if (bVar27 || !bVar25)
						{
							if (GET_TASK_STATUS(Local_23.f_1500, 0) == 0)
							{
								Function_210(&iLocal_417);
								Function_211(bVar25);
								iLocal_423 = 1;
							}
						}
						else if (Function_195(&Local_23 + 1504, &Global_34573, &fVar30, &iVar29, &bVar31, Local_23.f_832, 10.0f, &bVar27, bVar28, &Local_23 + 928, "nthank_you", "nthank_you", "", "", 30.0f, 2, -5.0f, 0, 4.0f, 1, 0, 0, 1, 0, 0x40800000))
						{
							if (bVar27)
							{
								if (GET_TASK_STATUS(Local_23.f_1500, 0) == 0)
								{
									Function_210(&iLocal_417);
									Function_211(1);
									iLocal_423 = 1;
								}
								else
								{
									TASK_WANDER(Local_23.f_1504, -1.0f);
								}
							}
						}
					}
				}
				else if (Function_234(&iLocal_417, 3.0f))
				{
					Function_240(&Local_23, 1);
					Function_129(&Local_23, 1, 1);
					Function_216(&Local_23, 0, 0);
					Function_504(&Local_23, 0);
					Function_528(0);
					iLocal_21 = 6;
				}
				break;
			
			case 0x00000006:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				break;
		}
		WAIT(Function_127(&Local_23));
	}
	if (iLocal_413 != 2 || iVar26)
	{
		Function_1(&Local_23, 0, 1);
	}
	else
	{
		Function_1(&Local_23, 0, 0);
	}
	REM_PLAYER_CONTROL_HORSE_FOLLOW(0, Local_23.f_972);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(bool bParam0, bool bParam1, int iParam2) //Position: 0xAB0 / 2736
{
	if (Function_126())
	{
		Function_119();
	}
	Function_522(bParam0, 0, 0);
	Function_105(bParam0, bParam1, iParam2);
	Function_101(bParam0, bParam1);
	if (IS_VOLUME_VALID(bParam0->f_968))
	{
		RELEASE_VOLUME(bParam0->f_968);
	}
	if (IS_ACTORSET_VALID(bParam0->f_1508))
	{
		DESTROY_ACTORSET(bParam0->f_1508);
	}
	SET_NPC_TO_NPC_DAMAGE_SCALE_FACTOR(1.0f);
	Function_97(bParam0 + 636);
	Function_95(1);
	Function_95(4);
	Function_87(bParam0);
	Function_2(bParam0);
	RELEASE_LAYOUT_OBJECTS(bParam0->f_832);
	if (bParam0->f_896 == 1)
	{
		DESTROY_LAYOUT(bParam0->f_832);
	}
	else
	{
		RELEASE_LAYOUT_REF(bParam0->f_832);
	}
	return;
}

void Function_2(bool bParam0) //Position: 0xB3F / 2879
{
	if (IS_BLIP_VALID(bParam0->f_36))
	{
		REMOVE_BLIP(bParam0->f_36);
	}
	if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(Global_34573), "procstop"))
	{
		DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(Global_34573), "procstop");
	}
	if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(Global_34573), "procRideObj"))
	{
		DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(Global_34573), "procRideObj");
	}
	if (bParam0->f_532 == 5)
	{
		if (Function_86(bParam0->f_584, 32768))
		{
			Function_85(256);
		}
	}
	Function_84();
	Function_82(1);
	if (Function_86(bParam0->f_584, 32))
	{
		if (Function_80(bParam0->f_624))
		{
			switch (bParam0->f_620)
			{
				case 0x00000002:
					Function_21(bParam0->f_624, 1, 0, 0);
					break;
				
				case 0x00000003:
					Function_18(bParam0->f_624);
					break;
				
				default:
					Function_9(bParam0->f_624);
					break;
				}
			}
	}
	if (SQUAD_IS_VALID(bParam0->f_568))
	{
		Function_3(bParam0, 0);
	}
	if (IS_VOLUME_VALID(bParam0->f_504))
	{
		DESTROY_VOLUME(bParam0->f_504);
	}
	if (IS_OBJECTSET_VALID(bParam0->f_540))
	{
		DESTROY_OBJECTSET(bParam0->f_540);
	}
	if (IS_LAYOUTREF_VALID(bParam0->f_28))
	{
		RELEASE_LAYOUT_OBJECTS(bParam0->f_28);
		DESTROY_LAYOUT(bParam0->f_28);
	}
	if (Function_86(bParam0->f_584, 64))
	{
		Global_13111 = 0;
	}
	if (Function_86(bParam0->f_584, 16))
	{
		Global_3382 = 0;
	}
	return;
}

void Function_3(int iParam0, bool bParam1) //Position: 0xC9C / 3228
{
	if (SQUAD_IS_VALID(iParam0->f_568))
	{
		Function_8(iParam0->f_568);
		Function_6(iParam0 + 568, 1, 0);
		if (bParam1 == 1)
		{
			Function_5(iParam0->f_568);
			Function_8(iParam0->f_568);
			Function_4(iParam0->f_568, Global_34573, -1.0f, -1.0f, 0, 1);
		}
		Function_6(iParam0 + 568, 0, 0);
		SQUAD_MAKE_EMPTY(iParam0->f_568);
		DESTROY_OBJECT(iParam0->f_568);
	}
	return;
}

void Function_4(bool bParam0, bool bParam1, float fParam2, float fParam3, int iParam4, int iParam5) //Position: 0xD01 / 3329
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	if (!IS_ACTOR_VALID(bParam1))
	{
		return;
	}
	if (SQUAD_GET_SIZE(bParam0) < 0)
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			TASK_CLEAR(bVar1);
			TASK_FLEE_ACTOR(bVar1, bParam1, fParam2, fParam3, iParam4, 0, 0);
			TASK_PRIORITY_SET(bVar1, iParam5);
		}
		bVar0++;
	}
}

void Function_5(bool bParam0) //Position: 0xD6F / 3439
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

void Function_6(var uParam0, bool bParam1, bool bParam2) //Position: 0xDA4 / 3492
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
				if (!Function_7(bVar1, 0x3f800000, 0x42960000, 1, 1, 0))
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

bool Function_7(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0xE20 / 3616
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), bParam0, iParam1, iParam2, iParam3, iParam4, iParam5);
}

void Function_8(bool bParam0) //Position: 0xE3A / 3642
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

void Function_9(int iParam0) //Position: 0xE6C / 3692
{
	int iVar0;
	
	if (!Function_80(iParam0))
	{
		Function_16();
		return;
	}
	iVar0 = Function_15(iParam0);
	Global_26281 = (GET_CURRENT_GAME_TIME() - 5.0f);
	if (StackVal == 2)
	{
		Function_10("DEED_CANCEL", iParam0);
	}
	Global_13172[iParam011].f_4 = 0;
	Global_3376 = 1;
	return;
}

void Function_10(char* cParam0, int iParam1) //Position: 0xEBF / 3775
{
	struct<4> Var0;
	
	if (!Function_80(iParam1))
	{
		return;
	}
	switch (Function_15(iParam1))
	{
		case 0x00000001:
			Var0 = { StackVal, StackVal, StackVal, Function_11(Function_13(iParam1)) };
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, &Var0, Function_15(iParam1), Function_13(iParam1));
			break;
		
		case 0x00000002:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "PROCEDURAL", Function_15(iParam1), iParam1);
			break;
		
		case 0x00000003:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "LOCATION", Function_15(iParam1), iParam1);
			break;
		
		case 0x00000004:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "MINIGAME", Function_15(iParam1), iParam1);
			break;
		
		case 0x00000005:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "ACTIONAREA_EVENT", Function_15(iParam1), iParam1);
			break;
		
		case 0x00000006:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "JOB", Function_15(iParam1), iParam1);
			break;
		
		case 0x00000000:
			break;
	}
	return;
}

struct<16> Function_11(int iParam0) //Position: 0xFE3 / 4067
{
	char* cVar0[16];
	
	if (!Function_12())
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

bool Function_12() //Position: 0x101D / 4125
{
	if (Function_86(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

int Function_13(int iParam0) //Position: 0x1038 / 4152
{
	if (!Function_14(iParam0))
	{
		return 4294967295;
	}
	return (SHIFT_RIGHT(Global_13172[iParam011], 12) && 255);
}

bool Function_14(int iParam0) //Position: 0x1058 / 4184
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_15(int iParam0) //Position: 0x106F / 4207
{
	if (!Function_14(iParam0))
	{
		return 0;
	}
	return Global_13172[iParam011] & 15;
}

void Function_16() //Position: 0x108A / 4234
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

void Function_17(bool bParam0, var uParam1, var uParam2, var uParam3) //Position: 0x12D1 / 4817
{
	*uParam3 = (bParam0 && 15);
	*uParam1 = (SHIFT_RIGHT(bParam0, 4) && 255);
	*uParam2 = (SHIFT_RIGHT(bParam0, 12) && 255);
}

void Function_18(int iParam0) //Position: 0x12FA / 4858
{
	int iVar0;
	struct<6> Var1;
	struct<4> Var7;
	var uVar11;
	
	if (!Function_80(iParam0))
	{
		return;
	}
	iVar0 = Function_15(iParam0);
	if (StackVal == 2)
	{
		Function_10("nDEED_FAIL", iParam0);
	}
	Global_26281 = (GET_CURRENT_GAME_TIME() - 5.0f);
	Global_13172[iParam011].f_4 = 0;
	if (iVar0 == 1)
	{
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_20(Global_6269) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_19(Global_6269) };
		}
		uVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		CLEAR_JOURNAL_ENTRY(uVar11);
	}
	Global_3376 = 1;
	return;
}

struct<16> Function_19(int iParam0) //Position: 0x13A0 / 5024
{
	char* cVar0[16];
	
	if (!Function_12())
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

struct<24> Function_20(char* cParam0) //Position: 0x13DF / 5087
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

void Function_21(int iParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x1635 / 5685
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	var uVar11;
	int iVar12;
	int iVar13;
	struct<25> Var14;
	
	if (!Function_80(iParam0))
	{
		Function_16();
		return;
	}
	bVar0 = Function_15(iParam0);
	if (!bVar0 != 1)
	{
		Global_13172[iParam011].f_12++;
		if (Function_79())
		{
			PLAYSTAT_INT("HC_NONSTORY_DEED", bVar0);
		}
	}
	else
	{
		Global_6269 = Function_13(iParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_20(Global_6269) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_19(Global_6269) };
		}
		if (Function_79())
		{
			PLAYSTAT_STRING("HC_STORY_DEED", &Var7);
		}
		uVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		Function_73();
		CLEAR_JOURNAL_ENTRY(uVar11);
		SET_JOURNAL_ENTRY_PROGRESS(uVar11, -2.0f, 0, 0);
		if (!IS_JOURNAL_ENTRY_IN_LIST(uVar11, 1))
		{
			PREPEND_JOURNAL_ENTRY(uVar11, 1);
		}
	}
	if (Function_79())
	{
		Function_72();
	}
	Global_13172[iParam011].f_36 = GET_TIME_OF_DAY();
	if (StackVal == 2)
	{
		Function_10("DEED_COMPLETE", iParam0);
	}
	if (bParam1)
	{
		Global_26281 = GET_CURRENT_GAME_TIME();
	}
	if (StackVal && StackVal != 3 != 4)
	{
		if (bParam3)
		{
			Global_13172[iParam011].f_4 = 4;
		}
		else
		{
			Global_13172[iParam011].f_4 = 3;
		}
		iVar12 = 1;
	}
	if (Global_3421)
	{
		Global_13172[iParam011].f_4 = 0;
	}
	if (iVar12 && !Global_3381)
	{
		if (!bParam3)
		{
			Function_66(iParam0);
		}
		if (bParam1)
		{
			if (bParam2)
			{
				switch (bVar0)
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
						switch (Function_13(iParam0))
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
			Function_25(1);
			Function_23(bParam2, iVar13);
		}
	}
	if (Global_3381 && bParam1)
	{
		*(&Var14 + 80) = 3;
		Var14.f_16 = 0;
		if (!bParam3)
		{
			Function_22(iParam0, &Var14);
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

void Function_22(int iParam0, int iParam1) //Position: 0x1889 / 6281
{
	iParam1->f_28 = Global_13172[iParam011].f_20;
	iParam1->f_32 = Global_13172[iParam011].f_24;
	iParam1->f_36 = Global_13172[iParam011].f_28;
	iParam1->f_40 = Global_13172[iParam011].f_32;
	return;
}

void Function_23(bool bParam0, int iParam1) //Position: 0x18C3 / 6339
{
	if (Global_3381)
	{
		return;
	}
	Global_3412 = bParam0;
	Global_3416 = iParam1;
	if (!Global_3365 && !Function_24())
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", true);
	return;
}

bool Function_24() //Position: 0x1905 / 6405
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_25(bool bParam0) //Position: 0x190E / 6414
{
	if ((Global_3395 || Global_3381) || Global_3396)
	{
		return;
	}
	Global_34165.f_24 = 4294967295;
	Function_57();
	Global_34165.f_28 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_27();
	SAVE_SOFT_SAVE(0);
	if (bParam0)
	{
		Function_26(&Global_63095, 1);
		Function_26(&Global_63095, 2);
	}
	Global_88793 = 1;
	return;
}

void Function_26(int iParam0, int iParam1) //Position: 0x195F / 6495
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
	return;
}

void Function_27() //Position: 0x1972 / 6514
{
	Function_55();
	Function_54();
	Function_54();
	Function_53();
	Function_53();
	Function_52();
	Function_52();
	Function_35(0);
	Function_35(0);
	if (!Function_24())
	{
		Function_32();
		Function_31();
		Function_30();
		Function_29();
		if (Global_74542[19910].f_16 != 1 || UI_HAS_CHEATED())
		{
			Global_74542[19910].f_16 = 1;
		}
	}
	Function_28();
	return;
}

void Function_28() //Position: 0x19C4 / 6596
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

void Function_29() //Position: 0x1ACA / 6858
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

void Function_30() //Position: 0x1AFD / 6909
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = GET_NUM_JOURNAL_ENTRIES_IN_LIST(1);
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < (iVar0 - 1))
	{
		iVar3 = GET_JOURNAL_ENTRY_IN_LIST(1, iVar1);
		if (iVar3 == 4294967295 && iVar3 == 0)
		{
			if (GET_JOURNAL_ENTRY_TYPE(iVar3) == 2)
			{
				if (iVar2 >= 49)
				{
					LOG_ERROR("For whatever reason, the system thinks we have more than 50 completed quests. This is bad, since the array we save them in only has 20 elements. Capping it and saving. Your save may not include all of the things you like in it.");
					iVar1 = iVar0;
				}
				else
				{
					Global_76695[iVar23] = iVar3;
					Global_76695[iVar23].f_4 = GET_JOURNAL_ENTRY_MISC_FLAG(iVar3);
					Global_76695[iVar23].f_8 = IS_JOURNAL_ENTRY_UPDATED(iVar3);
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

void Function_31() //Position: 0x1C8B / 7307
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = GET_NUM_JOURNAL_ENTRIES_IN_LIST(0);
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < (iVar0 - 1))
	{
		iVar3 = GET_JOURNAL_ENTRY_IN_LIST(0, iVar1);
		if (iVar3 == 4294967295 && iVar3 == 0)
		{
			if (GET_JOURNAL_ENTRY_TYPE(iVar3) == 2)
			{
				if (iVar2 >= 49)
				{
					LOG_ERROR("For whatever reason, the system thinks we have more than 20 active quests. This is bad, since the array we save them in only has 20 elements. Capping it and saving. Your save may not include all of the things you like in it.");
					iVar1 = iVar0;
				}
				else
				{
					Global_76543[iVar23] = iVar3;
					Global_76543[iVar23].f_4 = GET_JOURNAL_ENTRY_MISC_FLAG(iVar3);
					Global_76543[iVar23].f_8 = IS_JOURNAL_ENTRY_UPDATED(iVar3);
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

void Function_32() //Position: 0x1E3F / 7743
{
	Function_33(&Global_28260, 1, 0);
	return;
}

void Function_33(int iParam0, bool bParam1, var uParam2) //Position: 0x1E4D / 7757
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	int iVar7;
	int iVar8;
	int iVar9;
	bool bVar10;
	var uVar11;
	bool bVar12;
	bool bVar13;
	
	bVar0 = Function_34();
	if (IS_ACTOR_VALID(bVar0))
	{
		iParam0->f_1012 = GET_NUM_WEAPONS_IN_INVENTORY(bVar0);
		iVar7 = 4294967294;
		iVar8 = GET_WEAPON_IN_HAND(bVar0);
		if (iVar8 != 4294967295)
		{
			if (GET_WEAPON_IS_EXTERNALLY_CREATED(bVar0, iVar8) || uParam2)
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
				if (GET_ITEM_EQUIPSLOT(iVar8) == bVar10)
				{
					(*iParam0 + 1088)[iVar4] = iVar8;
					iParam0->f_1120 = iVar8;
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

var Function_34() //Position: 0x203E / 8254
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

struct<8> Function_35(int iParam0) //Position: 0x2053 / 8275
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
				if (iVar4 == 31 || iParam0)
				{
					iVar2 = ((Function_51((50 + iVar4)) + Function_51((183 + iVar4))) + Function_51((90 + iVar4)));
				}
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
	Function_36(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_36(int iParam0, bool bParam1, bool bParam2) //Position: 0x20F9 / 8441
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
		Function_50(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_49(iParam0);
	if (bParam2)
	{
		Function_37(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_37(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x2394 / 9108
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_48(390))), 32);
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
					bVar19 = (Function_47(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_47(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_45(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, false, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_42(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_40(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_39(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_38(), &Var9);
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

var Function_38() //Position: 0x29C1 / 10689
{
	int iVar0;
	
	return iVar0;
}

var Function_39(int iParam0) //Position: 0x29C9 / 10697
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_40(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x29DA / 10714
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_41("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_41("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_41("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_41(char* cParam0, bool bParam1) //Position: 0x2ACF / 10959
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_42(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x2AE8 / 10984
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_44(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_43(Function_44(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_43(int iParam0, int iParam1) //Position: 0x2B4D / 11085
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_44(int iParam0, bool bParam1) //Position: 0x2B5F / 11103
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_45(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x2B71 / 11121
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
	if (((Function_46(iParam0) != 19 || Function_46(iParam0) != 17) || Function_46(iParam0) != 10) || Function_46(iParam0) != 9)
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

int Function_46(int iParam0) //Position: 0x2CA1 / 11425
{
	return Global_35278[iParam020].f_48;
}

float Function_47(int iParam0) //Position: 0x2CB0 / 11440
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

float Function_48(int iParam0) //Position: 0x2CE9 / 11497
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_49(int iParam0) //Position: 0x2D26 / 11558
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

int Function_50(int iParam0, bool bParam1, bool bParam2) //Position: 0x2EC0 / 11968
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

int Function_51(bool bParam0) //Position: 0x3104 / 12548
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

struct<8> Function_52() //Position: 0x3145 / 12613
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
		iVar2 = ((Function_51((50 + iVar3) + 15) + Function_51((183 + iVar3) + 15)) + Function_51((90 + iVar3) + 15));
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
	Function_36(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_53() //Position: 0x31CE / 12750
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
			iVar2 = ((Function_51((50 + iVar3) + 8) + Function_51((183 + iVar3) + 8)) + Function_51((90 + iVar3) + 8));
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
	Function_36(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_54() //Position: 0x3265 / 12901
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
		iVar2 = ((Function_51((50 + iVar3)) + Function_51((183 + iVar3))) + Function_51((90 + iVar3)));
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
	Function_36(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_55() //Position: 0x32E4 / 13028
{
	if (Global_49308 > 0.1f)
	{
		Global_49308 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_56(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_36(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_56(int iParam0, bool bParam1, int iParam2) //Position: 0x331D / 13085
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
	Function_50(iParam0, bParam1, 1);
	Function_49(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_37(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

void Function_57() //Position: 0x3527 / 13607
{
	vector3 vVar0;
	var uVar3;
	
	Global_34165.f_24 = 4294967295;
	if (Function_12())
	{
		Function_63(&Global_34165 + 12, &Global_34165 + 16);
		vVar0 = { StackVal, StackVal, Function_63(&Global_34165 + 12, &Global_34165 + 16) };
	}
	else
	{
		Function_58(&Global_34165 + 12, &Global_34165 + 16, 0, 0);
		vVar0 = { StackVal, StackVal, Function_58(&Global_34165 + 12, &Global_34165 + 16, 0, 0) };
	}
	if (Function_521(StackVal, StackVal, vVar0))
	{
		vVar0 = { StackVal, StackVal, Global_34574 };
		vVar0.f_4 = (vVar0.y + 0.5f);
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

vector3 Function_58(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x35E2 / 13794
{
	int iVar0;
	
	iVar0 = Function_61(uParam2, uParam3);
	if (Function_60(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_34165.f_24 = Global_29005;
			Function_59(&Global_63095, 1);
			Function_26(&Global_63095, 2);
			Global_63084 = { StackVal, StackVal, Global_16537[iVar021] };
			*uParam1 = 0;
		}
		else
		{
			Function_59(&Global_63095, 2);
			Function_26(&Global_63095, 1);
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
			*uParam0 = 89.88f;
			return -2158.348f, 19.944f, 2597.452f;
		}
		*uParam0 = Global_16537[iVar021].f_12;
		return StackVal, StackVal, Global_16537[iVar021];
	}
	if (Global_16875)
	{
		Function_59(&Global_63095, 2);
		Function_26(&Global_63095, 1);
		*uParam1 = 1;
		*uParam0 = 290.0f;
		return -2833.843f, 50.332f, 2418.003f;
	}
	Function_362();
	return StackVal, StackVal, Function_362();
}

void Function_59(var uParam0, int iParam1) //Position: 0x36C9 / 14025
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_60(int iParam0) //Position: 0x36D8 / 14040
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_61(bool bParam0, bool bParam1) //Position: 0x36EE / 14062
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
				fVar2 = Function_62(StackVal, StackVal, StackVal, StackVal, Global_34574, Global_16537[iVar321]);
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
		fVar2 = Function_62(StackVal, StackVal, Global_34574, -2833.843f, 50.332f, 2418.003f);
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_60(bVar0) && !bParam1)
	{
		bVar0 = Function_61(bParam0, 1);
	}
	return bVar0;
}

float Function_62(vector3 vParam0, vector3 vParam3) //Position: 0x37B5 / 14261
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

vector3 Function_63(var uParam0, int iParam1) //Position: 0x37D2 / 14290
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	bool bVar10;
	
	*uParam0 = *uParam0;
	bVar0 = 99999.99f;
	vVar1 = { 0.0f, 0.0f, 0.0f };
	Function_65(Global_34573, &vVar4);
	if (!Function_64(Global_30640[0]))
	{
		vVar7 = { -2158.996f, 19.93287f, 2597.94f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 90.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_64(Global_30640[2]))
	{
		vVar7 = { -2424.093f, 26.36347f, 2122.362f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -130.87f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_64(Global_30640[1]))
	{
		vVar7 = { -3242.193f, 19.4623f, 2725.147f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 90.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_64(Global_30658[1]))
	{
		vVar7 = { -3658.131f, 42.81397f, 2092.973f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -135.09f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_64(Global_30658[3]))
	{
		vVar7 = { -4454.145f, 9.204829f, 3220.642f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 206.26f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_64(Global_30658[2]))
	{
		GET_VOLUME_CENTER(StackVal, &vVar7);
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 0.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_64(Global_30658[4]))
	{
		vVar7 = { -3669.226f, 8.477426f, 3491.648f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 106.17f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_64(Global_30668[0]))
	{
		vVar7 = { -821.1879f, 93.8091f, 2435.436f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 343.64f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_64(Global_30668[1]))
	{
		vVar7 = { 124.6513f, 76.73672f, 2235.506f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 165.38f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_64(Global_30668[2]))
	{
		GET_VOLUME_CENTER(StackVal, &vVar7);
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 0.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_64(Global_30679[0]))
	{
		vVar7 = { -3195.612f, 41.29269f, 3752.929f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -97.3f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_64(Global_30685[0]))
	{
		vVar7 = { -4287.014f, 18.13315f, 4453.605f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -6.71f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_64(Global_30685[1]))
	{
		vVar7 = { -4708.083f, 3.172676f, 3968.105f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -90.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_64(Global_30685[2]))
	{
		vVar7 = { -3245.478f, 39.28797f, 4563.465f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -90.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_64(Global_30693[0]))
	{
		vVar7 = { -2687.509f, 31.4827f, 4295.249f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -90.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_64(Global_30693[1]))
	{
		vVar7 = { -1719.171f, 11.29226f, 4214.298f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -180.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_64(Global_30693[2]))
	{
		vVar7 = { -1462.607f, 16.54457f, 3952.801f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 22.55f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_64(Global_30707[2]))
	{
		vVar7 = { -819.4399f, 13.11084f, 3712.137f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -135.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_64(Global_30707[3]))
	{
		vVar7 = { 343.2535f, 79.47575f, 3448.062f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -104.45f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_64(Global_30707[0]))
	{
		vVar7 = { -465.2258f, 20.61027f, 3913.855f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -90.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_64(Global_30717[0]))
	{
		vVar7 = { 757.22f, 86.90343f, 1271.724f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 270.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_64(Global_30723[2]))
	{
		vVar7 = { -298.7082f, 84.35147f, 2134.708f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 59.3f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_64(Global_30723[1]))
	{
		vVar7 = { -448.9981f, 153.3878f, 1631.183f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 20.74f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_64(Global_30723[0]))
	{
		vVar7 = { -884.3423f, 202.5276f, 1006.602f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = 94.65f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_64(Global_30679[1]))
	{
		vVar7 = { -2679.319f, 71.65485f, 3424.564f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -135.0f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	if (!Function_64(Global_30707[1]))
	{
		vVar7 = { -720.3301f, 67.5125f, 3293.269f };
		bVar10 = VDIST(vVar4, vVar7);
		if (bVar10 > bVar0)
		{
			*uParam0 = -39.9f;
			bVar0 = bVar10;
			vVar1 = { StackVal, StackVal, vVar7 };
		}
	}
	vVar7 = { -63.861f, 116.861f, 1414.684f };
	bVar10 = VDIST(vVar4, vVar7);
	if (bVar10 > bVar0)
	{
		bVar0 = bVar10;
		vVar1 = { StackVal, StackVal, vVar7 };
	}
	Function_59(&Global_63095, 2);
	Function_26(&Global_63095, 1);
	*iParam1 = 0;
	if (Function_521(StackVal, StackVal, vVar1))
	{
		vVar1 = { -63.861f, 116.861f, 1414.684f };
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(vVar1);
	PRINTNL();
	return StackVal, StackVal, vVar1;
}

bool Function_64(int iParam0) //Position: 0x3FF7 / 16375
{
	int iVar0;
	
	iVar0 = Global_29008[iParam0];
	return (((Function_86(iVar0, 0x1000000) || Function_86(iVar0, 0x2000000)) || Function_86(iVar0, 0x4000000)) || !Function_86(iVar0, 0x10000000));
}

void Function_65(bool bParam0, int iParam1) //Position: 0x4034 / 16436
{
	GET_POSITION(bParam0, iParam1);
	return;
}

void Function_66(int iParam0) //Position: 0x4041 / 16449
{
	int iVar0;
	int iVar1;
	
	if (!Function_14(iParam0))
	{
		return;
	}
	switch (Function_15(iParam0))
	{
		case 0x00000001:
			iVar1 = Function_13(iParam0);
			if (iVar1 <= 1 && iVar1 >= 24)
			{
				Function_71(12, 1, 0, 0);
				Function_70(0, (iVar1 - 1));
			}
			else if (iVar1 <= 25 && iVar1 >= 41)
			{
				Function_71(13, 1, 0, 0);
				Function_70(1, (iVar1 - 25));
			}
			else if (iVar1 <= 42 && iVar1 >= 48)
			{
				Function_71(14, 1, 0, 0);
				Function_70(1, (iVar1 - 25));
			}
			else if (iVar1 <= 49 && iVar1 >= 57)
			{
				Function_71(15, 1, 0, 0);
				Function_70(1, (iVar1 - 49));
			}
			if (iVar1 <= 1 && iVar1 >= 57)
			{
				Function_71(9, 1, 0, 0);
			}
			break;
		
		case 0x00000002:
			switch (Function_13(iParam0))
			{
				case 0x00000000:
					if (Function_69(iParam0) == 1)
					{
						iVar0 = Function_68(iParam0);
						if (Function_67(iVar0))
						{
							if (iVar0 == Global_30723[5])
							{
								Function_70(4, 18);
							}
							else if (iVar0 == Global_30693[3])
							{
								Function_70(4, 10);
							}
							else if (iVar0 == Global_30723[6])
							{
								Function_70(4, 16);
							}
							else if (iVar0 == Global_30668[3])
							{
								Function_70(4, 6);
							}
							else if (iVar0 == Global_30640[13])
							{
								Function_70(4, 3);
							}
							else if (iVar0 == Global_30693[7])
							{
								Function_70(4, 11);
							}
							else if (iVar0 == Global_30640[6])
							{
								Function_70(4, 0);
							}
							else if (iVar0 == Global_30693[10])
							{
								Function_70(4, 15);
							}
							else if (iVar0 == Global_30693[8])
							{
								Function_70(4, 14);
							}
							else if (iVar0 == Global_30640[11])
							{
								Function_70(4, 2);
							}
							else if (iVar0 == Global_30668[6])
							{
								Function_70(4, 7);
							}
							else if (iVar0 == Global_30723[3])
							{
								Function_70(4, 17);
							}
							else if (iVar0 == Global_30685[5])
							{
								Function_70(4, 8);
							}
							else if (iVar0 == Global_30693[9])
							{
								Function_70(4, 13);
							}
							else if (iVar0 == Global_30693[11])
							{
								Function_70(4, 12);
							}
							else if (iVar0 == Global_30640[7])
							{
								Function_70(4, 1);
							}
							else if (iVar0 == Global_30679[3])
							{
								Function_70(4, 5);
							}
							else if (iVar0 == Global_30693[4])
							{
								Function_70(4, 9);
							}
							else if (iVar0 == Global_30658[7])
							{
								Function_70(4, 4);
							}
							else if (iVar0 == Global_30723[4])
							{
								Function_70(4, 19);
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
								Function_71(363, 1, 0, 0);
							}
							else if (iVar0 == Global_30621[1])
							{
								Function_71(364, 1, 0, 0);
							}
							else if (iVar0 == Global_30621[2])
							{
								Function_71(365, 1, 0, 0);
							}
						}
					}
					break;
			}
			break;
		
		case 0x00000003:
			if (Function_68(iParam0) == 0)
			{
				if (Function_69(iParam0) == 1)
				{
					Function_71(458, 1, 0, 0);
					iVar0 = Function_13(iParam0);
					if (Function_67(iVar0))
					{
						if (iVar0 == Global_30668[2])
						{
							Function_70(2, 10);
						}
						else if (iVar0 == Global_30658[2])
						{
							Function_70(2, 11);
						}
						else if (iVar0 == Global_30640[2])
						{
							Function_70(2, 12);
						}
						else if (iVar0 == Global_30658[0])
						{
							Function_70(2, 13);
						}
						else if (iVar0 == Global_30658[3])
						{
							Function_70(2, 14);
						}
						else if (iVar0 == Global_30685[2])
						{
							Function_70(2, 15);
						}
						else if (iVar0 == Global_30685[1])
						{
							Function_70(2, 16);
						}
						else if (iVar0 == Global_30679[1])
						{
							Function_70(2, 17);
						}
					}
				}
			}
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000006:
			if (Function_69(iParam0) == 1)
			{
				Function_71(400, 1, 0, 0);
			}
			switch (Function_13(iParam0))
			{
				case 0x00000001:
					Function_71(402, 1, 0, 0);
					if (Global_29006 == Global_30668[0])
					{
						Function_70(6, 5);
					}
					else if (Global_29006 == Global_30693[0])
					{
						Function_70(6, 6);
					}
					else if (Global_29006 == Global_30717[0])
					{
						Function_70(6, 7);
					}
					break;
				
				case 0x00000002:
					Function_71(403, 1, 0, 0);
					if (Global_29006 == Global_30640[1])
					{
						Function_70(6, 8);
					}
					else if (Global_29006 == Global_30693[0])
					{
						Function_70(6, 9);
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

bool Function_67(int iParam0) //Position: 0x451D / 17693
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

int Function_68(int iParam0) //Position: 0x4533 / 17715
{
	if (!Function_14(iParam0))
	{
		return 4294967295;
	}
	return (SHIFT_RIGHT(Global_13172[iParam011], 4) && 255);
}

int Function_69(int iParam0) //Position: 0x4552 / 17746
{
	if (!Function_14(iParam0))
	{
		return 4294967295;
	}
	return Global_13172[iParam011].f_12;
}

void Function_70(int iParam0, bool bParam1) //Position: 0x456C / 17772
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

int Function_71(int iParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x45D3 / 17875
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
	Function_50(iParam0, TO_FLOAT(bParam1), 1);
	Function_49(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_37(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, bParam3);
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

void Function_72() //Position: 0x47F3 / 18419
{
	PLAYSTAT_INT("HC_FIREBOTTLE", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 4, 1)));
	PLAYSTAT_INT("HC_DYNAMITE", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 5, 1)));
	PLAYSTAT_INT("nHC_PISTOL", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 6, 1)));
	PLAYSTAT_INT("HC_REVOLVER", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 7, 1)));
	PLAYSTAT_INT("HC_REPEATER", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 8, 1)));
	PLAYSTAT_INT("HC_RIFLE", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 9, 1)));
	PLAYSTAT_INT("HC_SHOTGUN", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 10, 1)));
	PLAYSTAT_INT("HC_SNIPERRIFLE", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 11, 1)));
	PLAYSTAT_INT("HC_TOMAHAWK", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 12, 1)));
	PLAYSTAT_INT("HC_ANTITANK", FLOOR(_GET_AMMO_AMOUNT(Global_34573, 13, 1)));
	PLAYSTAT_INT("HC_MONEY", Function_51(0));
	PLAYSTAT_INT("HC_FAME", Function_51(3));
	PLAYSTAT_INT("HC_HONOR", Function_51(1));
	return;
}

void Function_73() //Position: 0x494B / 18763
{
	int iVar0;
	int iVar1;
	
	if (!Function_78(Global_6269))
	{
		return;
	}
	iVar0 = Function_51(24);
	iVar1 = Function_77(Global_6269);
	if (!Function_78(iVar0) && Function_76(iVar1) < 0)
	{
		Function_36(24, Global_6269, 0);
		Function_74(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	else if (StackVal <= Function_76(Function_77(iVar0)))
	{
		Function_36(24, Global_6269, 0);
		Function_74(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	return;
}

int Function_74(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x49CB / 18891
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
		Function_75(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_35278[iParam020] + 16), 3.0f, iParam3);
	}
	return 1;
}

void Function_75(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, char* cParam9, bool bParam10) //Position: 0x4D1D / 19741
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

int Function_76(int iParam0) //Position: 0x4DA0 / 19872
{
	if (!Function_80(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

int Function_77(int iParam0) //Position: 0x4DBA / 19898
{
	if (!Function_78(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_78(int iParam0) //Position: 0x4DD4 / 19924
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

bool Function_79() //Position: 0x4DEA / 19946
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

bool Function_80(int iParam0) //Position: 0x4E15 / 19989
{
	if (!Function_14(iParam0))
	{
		return 0;
	}
	if (!Function_81(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_81(int iParam0) //Position: 0x4E39 / 20025
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

void Function_82(int iParam0) //Position: 0x4E4E / 20046
{
	if (iParam0 != 1 && !GET_THIS_SCRIPT_ID() != Global_8721)
	{
		return;
	}
	if (Global_8717[iParam0])
	{
		Global_8717[iParam0] = 0;
	}
	if (!Function_83())
	{
		if (IS_HUD_MAP_VISIBLE())
		{
			SET_HUD_MAP_DRAW_ENABLED_TIMED(1, 0.0f, 1);
		}
	}
	return;
}

bool Function_83() //Position: 0x4E8A / 20106
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

void Function_84() //Position: 0x4EAF / 20143
{
	if (Global_30921 == GET_THIS_SCRIPT_ID())
	{
		Global_30921 = "";
	}
	return;
}

void Function_85(int iParam0) //Position: 0x4EC3 / 20163
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

bool Function_86(bool bParam0, int iParam1) //Position: 0x4EE0 / 20192
{
	return (bParam0 && iParam1) == 0;
}

void Function_87(int iParam0) //Position: 0x4EED / 20205
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (IS_OBJECTSET_VALID(iParam0->f_540))
	{
		bVar1 = false;
		while (bVar1 < (GET_OBJECTSET_SIZE(iParam0->f_540) - 1))
		{
			bVar2 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar1, iParam0->f_540);
			if (GET_OBJECT_TYPE(bVar2) == 15)
			{
				if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(bVar2)))
				{
					if (IS_ACTOR_ALIVE(GET_ACTOR_FROM_OBJECT(bVar2)) && GET_ACTOR_FROM_OBJECT(bVar2) == Global_34573)
					{
						ACTOR_END_FORCE_HOLSTER(GET_ACTOR_FROM_OBJECT(bVar2));
					}
				}
			}
			bVar1++;
		}
	}
	if (!Function_86(iParam0->f_584, 512) && Function_86(iParam0->f_584, 256))
	{
		if (IS_OBJECT_VALID(iParam0->f_500))
		{
			DESTROY_OBJECT(iParam0->f_500);
		}
		if (IS_OBJECT_VALID(GET_OBJECT_FROM_GRINGO(iParam0->f_496)))
		{
			DESTROY_OBJECT(GET_OBJECT_FROM_GRINGO(iParam0->f_496));
		}
		if (IS_OBJECT_VALID(iParam0->f_504))
		{
			DESTROY_VOLUME(iParam0->f_504);
		}
		while (GET_OBJECTSET_SIZE(iParam0->f_540) >= 0)
		{
			bVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, iParam0->f_540);
			if (IS_OBJECT_VALID(bVar0))
			{
				REMOVE_OBJECT_FROM_OBJECTSET(bVar0, iParam0->f_540);
				if (GET_OBJECT_TYPE(bVar0) == 15)
				{
					if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(bVar0)))
					{
						Function_94(GET_ACTOR_FROM_OBJECT(bVar0), 0, 0);
						SET_ACTOR_CAN_PLAY_GESTURES(GET_ACTOR_FROM_OBJECT(bVar0), true);
						SET_ACTOR_CAN_PLAY_BORED_IDLES(GET_ACTOR_FROM_OBJECT(bVar0), 1);
					}
				}
			}
			CLEAN_OBJECTSET(iParam0->f_540);
		}
		if (((iParam0->f_536 != 4 || iParam0->f_536 != 5) || iParam0->f_536 != 6) || iParam0->f_536 != 7)
		{
			Function_94(Global_34573, 0, 0);
			SET_ACTOR_CAN_PLAY_GESTURES(Global_34573, true);
			SET_ACTOR_CAN_PLAY_BORED_IDLES(Global_34573, 1);
		}
		*(iParam0 + 544) = { 0.0f, 0.0f, 0.0f };
		iParam0->f_556 = 0;
		Function_90(1, 0, 1, 1, 1, 1, 1, 1, 1, 1);
		Function_89(1.0f);
		Function_88(iParam0, 5);
		if (Function_86(iParam0->f_584, 32768))
		{
			Function_85(256);
		}
		Function_59(iParam0 + 584, 512);
		Function_26(iParam0 + 584, 256);
	}
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	return;
}

void Function_88(var uParam0, int iParam1) //Position: 0x50A8 / 20648
{
	uParam0->f_532 = iParam1;
	return;
}

void Function_89(bool bParam0) //Position: 0x50B5 / 20661
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

void Function_90(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, var uParam9) //Position: 0x50D2 / 20690
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
		bVar0 = Function_34();
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
			if (Function_24())
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
		Function_71(21, 1, 0, 0);
	}
	if (bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	if (bParam7)
	{
		Function_93();
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
	Function_91(uParam9);
}

void Function_91(int iParam0) //Position: 0x51C2 / 20930
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
		Function_92();
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

void Function_92() //Position: 0x5271 / 21105
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

void Function_93() //Position: 0x52E3 / 21219
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_94(bool bParam0, bool bParam1, bool bParam2) //Position: 0x52F8 / 21240
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	if (bParam1)
	{
		AI_IGNORE_ACTOR(bParam0);
		if (FIRE_IS_ACTOR_ON_FIRE(bParam0))
		{
			FIRE_STOP_ON_ACTOR(bParam0);
		}
		SET_ACTOR_INVULNERABILITY(bParam0, 1);
		CLEAR_ACTOR_MIN_SPEED(bParam0);
		CLEAR_ACTOR_MAX_SPEED(bParam0);
		TASK_OVERRIDE_CLEAR_MOVETYPE(bParam0);
		RESET_ACTOR_GAITS(bParam0, 0);
		if (IS_ACTOR_VALID(GET_MOUNT(bParam0)))
		{
			RESET_ACTOR_GAITS(GET_MOUNT(bParam0), 0);
		}
		if (bParam2)
		{
			SET_ACTOR_CUTSCENE_MODE(bParam0, 1);
		}
		SET_ACTOR_ALLOW_BUMP_REACTIONS(bParam0, 0);
		AI_SET_NAV_PATHFINDING_ENABLED(bParam0, 0);
		AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bParam0, 1);
	}
	else
	{
		AI_GOAL_LOOK_CLEAR(bParam0);
		SET_ACTOR_INVULNERABILITY(bParam0, 0);
		SET_ACTOR_ALLOW_BUMP_REACTIONS(bParam0, 1);
		AI_SET_NAV_PATHFINDING_ENABLED(bParam0, 1);
		AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bParam0, 2);
		SET_ACTOR_CUTSCENE_MODE(bParam0, 0);
	}
	return;
}

void Function_95(int iParam0) //Position: 0x5392 / 21394
{
	Function_96(&Global_28842, iParam0);
	return;
}

void Function_96(var uParam0, int iParam1) //Position: 0x53A0 / 21408
{
	*uParam0 = (*uParam0 || iParam1);
	*uParam0 |= 1073741824;
	return;
}

void Function_97(int iParam0) //Position: 0x53BB / 21435
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		Function_98(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_98(var uParam0, int iParam1) //Position: 0x53E1 / 21473
{
	if (Function_100(uParam0[iParam13], 4))
	{
		if (Function_100(uParam0[iParam13], 1))
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
			Function_99(uParam0[iParam13], 1);
			Function_99(uParam0[iParam13], 2);
			Function_99(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_99(var uParam0, int iParam1) //Position: 0x550F / 21775
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_100(var uParam0, int iParam1) //Position: 0x5529 / 21801
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_101(bool bParam0, bool bParam1) //Position: 0x5546 / 21830
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (IS_ACTOR_VALID(bParam0->f_972))
	{
		if (bParam1 == 1)
		{
			if (SQUAD_IS_VALID(bParam0->f_1212))
			{
				Function_104(bParam0 + 1212);
			}
		}
		else if (SQUAD_IS_VALID(bParam0->f_1212))
		{
			bVar2 = false;
			while (bVar2 < (SQUAD_GET_SIZE(bParam0->f_1212) - 1))
			{
				bVar0 = SQUAD_GET_ACTOR_BY_INDEX(bParam0->f_1212, bVar2);
				if (IS_ACTOR_VALID(bVar0))
				{
					MEMORY_CLEAR_ALL(bVar0);
					if (((Function_239(bParam0) != 1 && Function_103(bParam0) != 2) || (Function_239(bParam0) != 2 && Function_103(bParam0) != 3)) || !Function_241(bParam0))
					{
						if (IS_ACTOR_DRIVING_VEHICLE(bVar0))
						{
							Function_362();
							Function_102(StackVal, StackVal, bVar0, Function_362(), 0, 2, 2, 1);
						}
					}
					else
					{
						bVar1 = TASK_SEQUENCE_OPEN();
						if (IS_ACTOR_RIDING_VEHICLE(bVar0))
						{
							TASK_VEHICLE_LEAVE(false);
						}
						TASK_FLEE_ACTOR(false, Global_34573, -1.0f, -1.0f, 0, 0, 0);
						TASK_SEQUENCE_CLOSE();
						TASK_PRIORITY_SET(bVar0, 1);
						TASK_SEQUENCE_PERFORM(bVar0, bVar1);
						RELEASE_ACTOR(bVar0);
					}
				}
				bVar2++;
			}
		}
		RELEASE_ACTOR(bParam0->f_972);
	}
	return;
}

void Function_102(bool bParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6, bool bParam7) //Position: 0x562C / 22060
{
	if (!IS_OBJECTSET_VALID(Global_28842.f_60))
	{
		Global_28842.f_60 = CREATE_OBJECTSET_IN_LAYOUT("trafficReleased", Global_28841, 15, 1);
	}
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	if (bParam4 != 0)
	{
		DECOR_SET_INT(bParam0, "overrideCurve", bParam4);
	}
	if (!Function_521(StackVal, StackVal, vParam1))
	{
		DECOR_SET_VECTOR(bParam0, "overrideDest", vParam1);
	}
	if (bParam5 != 0)
	{
		DECOR_SET_INT(bParam0, "overrideSpeed", bParam5);
	}
	if (bParam6 != 2)
	{
		DECOR_SET_INT(bParam0, "overridePriority", bParam6);
	}
	else
	{
		TASK_PRIORITY_SET(bParam0, 2);
	}
	if (bParam7)
	{
		DECOR_SET_INT(bParam0, "quickRelease", bParam6);
	}
	if (!IS_OBJECT_IN_OBJECTSET(bParam0, Global_28842.f_60))
	{
		ADD_OBJECT_TO_OBJECTSET(bParam0, Global_28842.f_60);
	}
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(bParam0, 1);
}

int Function_103(int iParam0) //Position: 0x5734 / 22324
{
	return iParam0->f_620;
}

void Function_104(int iParam0) //Position: 0x573F / 22335
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

void Function_105(int iParam0, int iParam1, int iParam2) //Position: 0x5786 / 22406
{
	if (SQUAD_IS_VALID((iParam0 + 1256)->f_60))
	{
		if (iParam1 == 1)
		{
			Function_118(iParam0 + 1256 + 60);
		}
		else if (iParam2 == 1)
		{
			Function_116(iParam0 + 1256);
		}
		else
		{
			Function_106(iParam0 + 1256, Global_34573);
		}
	}
	return;
}

void Function_106(var uParam0, bool bParam1) //Position: 0x57C8 / 22472
{
	if (SQUAD_IS_VALID(uParam0->f_60))
	{
		Function_107(uParam0->f_60, 2, GET_OBJECT_FROM_ACTOR(bParam1), 4, 1);
	}
	return;
}

int Function_107(bool bParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x57EB / 22507
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	if (SQUAD_IS_VALID(bParam0))
	{
		iVar2 = SQUAD_GET_SIZE(bParam0);
		bVar1 = false;
		while (bVar1 < (iVar2 - 1))
		{
			bVar0 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar1);
			if (IS_ACTOR_ALIVE(bVar0))
			{
				Function_108(bVar0, uParam1, uParam2, uParam3, uParam4);
			}
			bVar1++;
		}
		SQUAD_MAKE_EMPTY(bParam0);
		return 1;
	}
	return 0;
}

int Function_108(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x5843 / 22595
{
	char* cVar0[32];
	
	Function_115();
	if (!IS_ACTOR_VALID(bParam0))
	{
		return 0;
	}
	if (IS_ACTOR_DEAD(bParam0))
	{
		return 1;
	}
	if (IS_OBJECT_IN_OBJECTSET(GET_OBJECT_FROM_ACTOR(bParam0), Global_16516))
	{
		strcpy(&cVar0, GET_ACTOR_NAME(bParam0), 32);
		stradd(&cVar0, " already roaming. Cannot add again.", 32);
		LOG_ERROR(&cVar0);
		return 1;
	}
	if (Function_114(bParam0) == 1)
	{
		LOG_ERROR("ACTORROAM - Actor cannot be added to ActorRoam multiple times");
		return 0;
	}
	if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam0)))
	{
		REMOVE_BLIP(GET_BLIP_ON_ACTOR(bParam0));
	}
	strcpy(&cVar0, GET_OBJECT_NAME(GET_OBJECT_FROM_ACTOR(bParam0)), 32);
	if (GIVE_OBJECT_TO_LAYOUT(GET_OBJECT_FROM_ACTOR(bParam0), Global_6290))
	{
		PRINTSTRING("Added ");
		PRINTSTRING(&cVar0);
		PRINTSTRING(" to the roaming actor layout.");
		PRINTNL();
	}
	else
	{
		strcpy(&cVar0, GET_OBJECT_NAME(bParam0), 32);
		if (!IS_STRING_VALID(&cVar0))
		{
			strcpy(&cVar0, "(NAMELESS)", 32);
		}
		PRINTSTRING("Could not add ");
		PRINTSTRING(&cVar0);
		PRINTSTRING(" to the roaming actor layout.");
		PRINTNL();
		LOG_ERROR("Could not add actor to actorroam. Report the offending script");
	}
	if (!IS_OBJECT_IN_OBJECTSET(GET_OBJECT_FROM_ACTOR(bParam0), Global_16516))
	{
		ADD_OBJECT_TO_OBJECTSET(GET_OBJECT_FROM_ACTOR(bParam0), Global_16516);
	}
	if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam0)))
	{
		REMOVE_BLIP(GET_BLIP_ON_ACTOR(bParam0));
	}
	if (iParam4 == 1)
	{
		AI_SET_NAV_MATERIAL_USAGE(bParam0, 64, 0);
		AI_SET_NAV_MATERIAL_USAGE(bParam0, 32, 0);
	}
	Function_113(bParam0, 0);
	Function_112(bParam0, iParam1);
	Function_111(bParam0, iParam2);
	Function_110(bParam0, iParam3);
	if (Function_109(bParam0) != 5)
	{
		SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(bParam0, 0);
		SET_ACTOR_OBEY_AMBIENT_MOVE_RESTRICTIONS(bParam0, 1);
	}
	else
	{
		AI_SET_ENABLE_DEAD_BODY_REACTIONS(bParam0, 0);
	}
	return 1;
}

int Function_109(bool bParam0) //Position: 0x5A91 / 23185
{
	return DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_behavior");
}

void Function_110(bool bParam0, bool bParam1) //Position: 0x5AB4 / 23220
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_speed", bParam1);
	return;
}

void Function_111(bool bParam0, bool bParam1) //Position: 0x5AD7 / 23255
{
	DECOR_SET_OBJECT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_target", bParam1);
	return;
}

void Function_112(bool bParam0, bool bParam1) //Position: 0x5AFB / 23291
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_behavior", bParam1);
	return;
}

void Function_113(bool bParam0, bool bParam1) //Position: 0x5B21 / 23329
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_state", bParam1);
	return;
}

int Function_114(bool bParam0) //Position: 0x5B44 / 23364
{
	return DECOR_GET_BOOL(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_ref");
}

void Function_115() //Position: 0x5B62 / 23394
{
	if (!IS_LAYOUTREF_VALID(Global_6290))
	{
		Global_6290 = CREATE_LAYOUT("RoamingLayout");
	}
	if (!IS_OBJECTSET_VALID(Global_16516))
	{
		Global_16516 = CREATE_OBJECTSET_IN_LAYOUT("gRoamObjects", Global_6290, 4294967295, 1);
	}
	return;
}

void Function_116(int iParam0) //Position: 0x5BAC / 23468
{
	if (SQUAD_IS_VALID(iParam0->f_60))
	{
		Function_117(iParam0->f_60);
	}
	return;
}

void Function_117(bool bParam0) //Position: 0x5BC6 / 23494
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
			RELEASE_ACTOR(bVar1);
		}
		else
		{
			bVar0++;
		}
	}
	return;
}

void Function_118(var uParam0) //Position: 0x5C0A / 23562
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
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
			if (IS_ACTOR_RIDING_VEHICLE(bVar1))
			{
				bVar2 = GET_VEHICLE(bVar1);
				DESTROY_ACTOR(bVar1);
				DESTROY_ACTOR(bVar2);
			}
			else if (IS_ACTOR_RIDING(bVar1))
			{
				bVar2 = GET_MOUNT(bVar1);
				DESTROY_ACTOR(bVar1);
				DESTROY_ACTOR(bVar2);
			}
			else
			{
				DESTROY_ACTOR(bVar1);
			}
		}
		else
		{
			bVar0++;
		}
	}
	return;
}

void Function_119() //Position: 0x5C89 / 23689
{
	Function_121();
	Function_120(10, 3);
	return;
}

void Function_120(int iParam0, int iParam1) //Position: 0x5C98 / 23704
{
	char* cVar0;
	bool bVar1;
	int iVar2;
	char* cVar3[16];
	
	iVar2 = (iParam0 * iParam1);
	if (iParam0 != 4294967295 && iParam1 != 4294967295)
	{
		bVar1 = false;
		strcpy(&cVar3, "DB_MENU_", 16);
		stradd(&cVar3, I2STR(bVar1), 16);
		cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
		while (GUI_WINDOW_VALID(cVar0))
		{
			GUI_CLOSE_WINDOW(cVar0);
			bVar1++;
			strcpy(&cVar3, "DB_MENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
		}
	}
	else
	{
		bVar1 = false;
		while (bVar1 < iVar2)
		{
			strcpy(&cVar3, "DB_MENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
			if (GUI_WINDOW_VALID(cVar0))
			{
				GUI_CLOSE_WINDOW(cVar0);
			}
			bVar1++;
		}
	}
	cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "DB_MENU_TITLE");
	if (GUI_WINDOW_VALID(cVar0))
	{
		GUI_CLOSE_WINDOW(cVar0);
	}
	cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "DB_MENU_FOOTER_HIGH");
	if (GUI_WINDOW_VALID(cVar0))
	{
		GUI_CLOSE_WINDOW(cVar0);
	}
	cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "DB_MENU_OVERLAY");
	if (GUI_WINDOW_VALID(cVar0))
	{
		GUI_CLOSE_WINDOW(cVar0);
	}
	return;
}

void Function_121() //Position: 0x5DCF / 24015
{
	GRINGO_DEBUG_CHECK_SOUND(1);
	SET_DEBUG_FADE_STATE(0);
	SET_HUD_MAP_DRAW_ENABLED(1);
	if (Function_125())
	{
		Function_124(10, 3);
	}
	else
	{
		Function_122();
	}
	Global_30920 = 0;
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	SET_ACTOR_INVULNERABILITY(Function_34(), 0);
	AI_CLEAR_DONT_HARM_ACTOR(Function_34());
	UI_POP("nDebugMenu");
	return;
}

void Function_122() //Position: 0x5E1A / 24090
{
	Function_123(25, 2);
	return;
}

void Function_123(int iParam0, int iParam1) //Position: 0x5E26 / 24102
{
	char* cVar0;
	bool bVar1;
	int iVar2;
	char* cVar3[16];
	
	iVar2 = (iParam0 * iParam1);
	if (iParam0 != 4294967295 && iParam1 != 4294967295)
	{
		bVar1 = false;
		strcpy(&cVar3, "DBGMENU_", 16);
		stradd(&cVar3, I2STR(bVar1), 16);
		cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
		while (GUI_WINDOW_VALID(cVar0))
		{
			GUI_CLOSE_WINDOW(cVar0);
			bVar1++;
			strcpy(&cVar3, "DBGMENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
		}
	}
	else
	{
		bVar1 = false;
		while (bVar1 <= iVar2)
		{
			strcpy(&cVar3, "DBGMENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
			if (GUI_WINDOW_VALID(cVar0))
			{
				GUI_CLOSE_WINDOW(cVar0);
			}
			bVar1++;
		}
	}
	cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "DBGMENU_OVERLAY");
	if (GUI_WINDOW_VALID(cVar0))
	{
		GUI_CLOSE_WINDOW(cVar0);
	}
	cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "MAINMENUBACK");
	if (GUI_WINDOW_VALID(cVar0))
	{
		GUI_CLOSE_WINDOW(cVar0);
	}
	cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "ITEMMENUBACK");
	if (GUI_WINDOW_VALID(cVar0))
	{
		GUI_CLOSE_WINDOW(cVar0);
	}
	cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "BACKMENUBACK");
	if (GUI_WINDOW_VALID(cVar0))
	{
		GUI_CLOSE_WINDOW(cVar0);
	}
	cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "HEADERBACK");
	if (GUI_WINDOW_VALID(cVar0))
	{
		GUI_CLOSE_WINDOW(cVar0);
	}
	cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "FOOTERBACK");
	if (GUI_WINDOW_VALID(cVar0))
	{
		GUI_CLOSE_WINDOW(cVar0);
	}
	cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "nHEADERWIN");
	if (GUI_WINDOW_VALID(cVar0))
	{
		GUI_CLOSE_WINDOW(cVar0);
	}
	cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "nFOOTERWIN");
	if (GUI_WINDOW_VALID(cVar0))
	{
		GUI_CLOSE_WINDOW(cVar0);
	}
	cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "POINTER");
	if (GUI_WINDOW_VALID(cVar0))
	{
		GUI_CLOSE_WINDOW(cVar0);
	}
	return;
}

void Function_124(int iParam0, int iParam1) //Position: 0x6024 / 24612
{
	char* cVar0;
	bool bVar1;
	int iVar2;
	char* cVar3[16];
	
	iVar2 = (iParam0 * iParam1);
	if (iParam0 != 4294967295 && iParam1 != 4294967295)
	{
		bVar1 = false;
		strcpy(&cVar3, "DB_MENU_", 16);
		stradd(&cVar3, I2STR(bVar1), 16);
		cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
		while (GUI_WINDOW_VALID(cVar0))
		{
			GUI_CLOSE_WINDOW(cVar0);
			bVar1++;
			strcpy(&cVar3, "DB_MENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
		}
	}
	else
	{
		bVar1 = false;
		while (bVar1 < iVar2)
		{
			strcpy(&cVar3, "DB_MENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
			if (GUI_WINDOW_VALID(cVar0))
			{
				GUI_CLOSE_WINDOW(cVar0);
			}
			bVar1++;
		}
	}
	cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "DB_MENU_TITLE");
	if (GUI_WINDOW_VALID(cVar0))
	{
		GUI_CLOSE_WINDOW(cVar0);
	}
	cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "DB_MENU_FOOTER_HIGH");
	if (GUI_WINDOW_VALID(cVar0))
	{
		GUI_CLOSE_WINDOW(cVar0);
	}
	cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, "DB_MENU_OVERLAY");
	if (GUI_WINDOW_VALID(cVar0))
	{
		GUI_CLOSE_WINDOW(cVar0);
	}
	return;
}

bool Function_125() //Position: 0x615B / 24923
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
				if (!Function_86(Global_78480.f_124, 1))
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

bool Function_126() //Position: 0x61C2 / 25026
{
	return Global_34580;
}

int Function_127(int iParam0) //Position: 0x61CB / 25035
{
	if (Function_128(iParam0) == 0)
	{
		return iParam0->f_928;
	}
	return 0;
}

int Function_128(int iParam0) //Position: 0x61E4 / 25060
{
	return iParam0->f_616;
}

void Function_129(bool bParam0, int iParam1, int iParam2) //Position: 0x61EF / 25071
{
	int iVar0;
	
	if (iParam1 == 1)
	{
		iVar0 = 0;
		while (iVar0 < (bParam0->f_220 - 1))
		{
			strcpy(bParam0 + 220[iVar04], "", 16);
			iVar0++;
		}
		bParam0->f_272 = 0;
	}
	if (iParam2 == 1)
	{
		iVar0 = 0;
		while (iVar0 < (bParam0->f_276 - 1))
		{
			strcpy(bParam0 + 276[iVar04], "", 16);
			iVar0++;
		}
		bParam0->f_328 = 0;
	}
	return;
}

int Function_130(bool bParam0, int iParam1) //Position: 0x6257 / 25175
{
	if (IS_ACTOR_HUMAN(bParam0))
	{
		if (GET_NUM_WEAPONS_IN_INVENTORY(bParam0) == 0)
		{
			TASK_FLEE_ACTOR(bParam0, Global_34573, -1.0f, -1.0f, 0, 0, 0);
			TASK_PRIORITY_SET(bParam0, 0);
			return 1;
		}
	}
	if (!IS_ACTOR_VALID(bParam0))
	{
		LOG_ERROR("Killer is invalid in TASK_KILL_ACTOR_RUTHLESS");
		return 0;
	}
	if (!IS_ACTOR_VALID(*iParam1))
	{
		LOG_ERROR("VICTIM is invalid in TASK_KILL_ACTOR_RUTHLESS");
		return 0;
	}
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 28, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 31, -1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 37, 2.0f);
	MEMORY_ALLOW_TAKE_COVER(bParam0, 0);
	COMBAT_CLASS_AI_SET_FRIENDLY_FIRE_CONSIDERATION(bParam0, 0);
	MEMORY_REPORT_POSITION_AUTO(bParam0, *iParam1, 1);
	TASK_KILL_CHAR(bParam0, *iParam1);
	TASK_PRIORITY_SET(bParam0, 1);
	return 1;
}

void Function_131(bool bParam0, bool bParam1) //Position: 0x633C / 25404
{
	bool bVar0;
	bool bVar1;
	
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
				MEMORY_IDENTIFY(bVar1, bParam1);
			}
		}
		bVar0++;
	}
	return;
}

void Function_132(bool bParam0, bool bParam1, bool bParam2) //Position: 0x638E / 25486
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

void Function_133(bool bParam0, int iParam1) //Position: 0x63D3 / 25555
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0)))
		{
			MEMORY_ATTACK_ON_SIGHT(SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0), iParam1);
		}
		bVar0++;
	}
	return;
}

void Function_134(bool bParam0) //Position: 0x6414 / 25620
{
	Function_137(bParam0, 3);
	Function_136(bParam0, 4294967295);
	Function_135(bParam0->f_1212, Global_34573, 4);
	Function_135((bParam0 + 1256)->f_60, Global_34573, 4);
	Function_4(bParam0->f_1212, Global_34573, 100.0f, -1.0f, 1, 0);
	Function_4((bParam0 + 1256)->f_60, Global_34573, 100.0f, -1.0f, 1, 0);
	Function_240(bParam0, 1);
	Function_238(bParam0, "pm_mad_rog", 0);
	return;
}

void Function_135(bool bParam0, bool bParam1, bool bParam2) //Position: 0x6482 / 25730
{
	bool bVar0;
	bool bVar1;
	
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
			MEMORY_CONSIDER_AS(bVar1, bParam1, bParam2);
			MEMORY_IDENTIFY(bVar1, bParam1);
			if (!bParam1 != GET_PLAYER_ACTOR(0))
			{
				MEMORY_IDENTIFY(bParam1, bVar1);
				MEMORY_CONSIDER_AS(bParam1, bVar1, bParam2);
			}
		}
		bVar0++;
	}
	return;
}

void Function_136(int iParam0, int iParam1) //Position: 0x64F0 / 25840
{
	iParam0->f_492 = iParam1;
	return;
}

void Function_137(int iParam0, int iParam1) //Position: 0x64FD / 25853
{
	iParam0->f_484 = iParam1;
	return;
}

bool Function_138(bool bParam0) //Position: 0x650A / 25866
{
	if (Function_239(bParam0) == 1)
	{
		if (Function_140(bParam0->f_1212, Global_34573) || Function_139(bParam0, Global_34573))
		{
			return 1;
		}
	}
	if (Function_239(bParam0) == 2)
	{
		if (Function_140((bParam0 + 1256)->f_60, Global_34573))
		{
			return 1;
		}
	}
	return 0;
}

int Function_139(int iParam0, int iParam1) //Position: 0x6551 / 25937
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(iParam0->f_972))
	{
		bVar0 = false;
		while (bVar0 < (GET_NUM_DRAFT_POSITIONS(iParam0->f_972) - 1))
		{
			if (GET_LAST_ATTACKER(GET_DRAFT_ACTOR(bVar0, iParam0->f_972)) == iParam1)
			{
				return 1;
			}
			bVar0++;
		}
	}
	return 0;
}

bool Function_140(bool bParam0, bool bParam1) //Position: 0x6592 / 26002
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(bParam1))
	{
		return 0;
	}
	iVar0 = 0;
	iVar2 = SQUAD_GET_SIZE(bParam0);
	bVar1 = false;
	while (bVar1 < (iVar2 - 1))
	{
		bVar3 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar1);
		if (IS_ACTOR_VALID(bVar3))
		{
			if ((GET_CURRENT_GAME_TIME() - GET_LAST_HIT_TIME(bVar3)) > 1.0f)
			{
				if (GET_LAST_ATTACKER(bVar3) == bParam1)
				{
					iVar0 = 1;
				}
			}
		}
		bVar1++;
	}
	return iVar0;
}

void Function_141(bool bParam0, bool bParam1) //Position: 0x65FB / 26107
{
	if (Function_239(bParam0) == 1)
	{
		Function_194(368, 1);
		Function_71(371, 1, 0, 0);
		Function_193(370, (Function_48(370) + 1.0f));
		Function_189(200, 1, 0);
	}
	else if (Function_239(bParam0) == 2)
	{
		Function_194(367, 1);
		Function_71(371, 1, 0, 0);
		Function_193(370, (Function_48(370) + 1.0f));
		Function_71(370, 1, 0, 0);
		if (bParam1)
		{
			Function_186(Function_187(1, 1, 1, 0, 0), 1);
		}
		Function_176(50, 1, 0);
	}
	Function_142(bParam0, 2);
	bParam0->f_620 = 2;
	return;
}

void Function_142(int iParam0, int iParam1) //Position: 0x668E / 26254
{
	int iVar0;
	
	if (iParam0->f_620 != 0 && iParam1 != 1)
	{
		iParam0->f_620 = iParam1;
	}
	else if (iParam0->f_620 == 1)
	{
		iParam0->f_620 = iParam1;
		if (iParam0->f_488 != 4294967295)
		{
			if (iParam0->f_620 == 2)
			{
				iVar0 = Function_175(iParam0);
				if ((iVar0 == 4294967295 && iVar0 == 0) && Function_174(iParam0) != 1)
				{
					Function_145(iParam0->f_488, iVar0, 1);
				}
				if (iParam0->f_484 != 1 || iParam0->f_484 != 0)
				{
					Function_189(200, 1, 0);
				}
				else
				{
					Function_176(50, 1, 0);
				}
				if (iParam0->f_332 > 0)
				{
					Function_186(iParam0->f_332, 1);
				}
				else
				{
					Function_143(iParam0->f_332, 1);
				}
			}
			else if (iParam0->f_620 == 3)
			{
			}
		}
		else
		{
			LOG_ERROR("NO ENEMY FACTION");
		}
	}
	return;
}

int Function_143(bool bParam0, bool bParam1) //Position: 0x6763 / 26467
{
	bool bVar0;
	
	bVar0 = Function_51(0);
	if ((Function_51(0) - bParam0) <= 0)
	{
		bParam0 = bVar0;
	}
	if (bParam0 >= 0)
	{
		Function_144(0, bParam0, 0);
	}
	else
	{
		return 0;
	}
	if (bParam1)
	{
		PRINT_MONEY(&(Global_35278[020]), bVar0, (bParam0 * 4294967295), 7.5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_51(0));
	return 1;
}

int Function_144(int iParam0, bool bParam1, int iParam2) //Position: 0x67F3 / 26611
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
	Function_49(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_37(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

void Function_145(int iParam0, char* cParam1, bool bParam2) //Position: 0x69EE / 27118
{
	char* cVar0[32];
	
	if (!Function_173(3))
	{
		return;
	}
	if (Function_24())
	{
		return;
	}
	if (Function_12())
	{
		return;
	}
	switch (iParam0)
	{
		case 0x00000001:
		case 0x00000002:
		case 0x00000003:
			if (bParam2)
			{
				switch (cParam1)
				{
					case 0x00000019:
						if (IS_PS3() || Function_172())
						{
							Function_146(4, 16, 0, 0, 0);
						}
						break;
					
					case 0x0000000E:
						Function_146(5, 16, 0, 0, 0);
						break;
					
					case 0x0000000C:
						Function_146(7, 16, 0, 0, 0);
						break;
					}
			}
			strcpy(&cVar0, "PROCTHEME_ATTACK", 32);
			break;
		
		case 0x00000000:
			switch (cParam1)
			{
				case 0x00000019:
					if (IS_PS3() || Function_172())
					{
						Function_146(4, 8, 0, 0, 0);
					}
					break;
				
				case 0x0000000E:
					Function_146(5, 8, 0, 0, 0);
					break;
				
				case 0x00000018:
					Function_146(6, 8, 0, 0, 0);
					break;
				
				case 0x0000000C:
					Function_146(7, 8, 0, 0, 0);
					break;
			}
			strcpy(&cVar0, "PROCTHEME_BOUNTY_HUNTER", 32);
			break;
	}
	return;
}

void Function_146(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x6B0A / 27402
{
	char* cVar0[32];
	struct<8> Var8;
	
	strcpy(&cVar0, "OUT_", 32);
	stradd(&cVar0, &Global_27774[bParam013] + 32, 32);
	if (!Function_171(bParam0))
	{
		LOG_ERROR("Attempting to add scrap to invalid outfit");
		return;
	}
	if (!Function_173(3) || iParam3)
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_170(bParam0, 2))
	{
		Function_71(456, 1, 0, 0);
		Function_169(bParam0, 2);
		if (!bParam2)
		{
			Var8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
			stradd(&Var8, "_tip", 32);
			Function_168(&Var8, 10.0f, 1, 0, 0, 1, 0);
		}
	}
	bParam2 = bParam2;
	if (!Function_167(bParam0, bParam1))
	{
		Global_27774[bParam013].f_4 = (StackVal || bParam1);
		Function_169(bParam0, 1048576);
		if (bParam4)
		{
			if (!Function_166(0, 0, 1, 1))
			{
				Function_25(1);
				Function_23(1, 0);
			}
			else
			{
				Function_165();
			}
		}
		Function_160(bParam0);
		if (StackVal && !Function_86(((((!Function_159() && !Global_3380) && !Global_3392) && !Global_3384) && !bParam2), 1))
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Edit", &cVar0, false, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (StackVal || Function_86((((Function_159() || Global_3380) || Global_3392) || Global_3384), 1))
		{
			if (!DECOR_CHECK_EXIST(Global_34573, "outfitScrap"))
			{
				DECOR_SET_INT(Global_34573, "outfitScrap", bParam0);
			}
		}
		if (!Function_12())
		{
			if (!Function_158(Global_76846, 2))
			{
				Function_153(Global_34573, 2, 1, 0);
			}
		}
		if (Global_28180 == bParam0)
		{
			Global_28180.f_12 = 1;
			Function_148();
		}
		Global_28180.f_12 = 1;
		switch (bParam0)
		{
			case 0x00000004:
				Function_147(3, bParam1);
				break;
			
			case 0x00000005:
				Function_147(3, SHIFT_LEFT(bParam1, 6));
				break;
			
			case 0x00000006:
				Function_147(3, SHIFT_LEFT(bParam1, 12));
				break;
			
			case 0x00000007:
				Function_147(3, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x00000008:
				Function_147(3, SHIFT_LEFT(bParam1, 24));
				break;
			
			case 0x00000009:
				Function_147(2, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x0000000A:
				Function_70(2, 24);
				break;
			
			case 0x00000003:
				Function_70(2, 25);
				break;
			
			case 0x0000000F:
				Function_70(2, 26);
				break;
			
			case 0x0000000D:
				Function_70(2, 27);
				break;
			
			case 0x0000000E:
				Function_70(2, 28);
				break;
			}
	}
}

void Function_147(int iParam0, bool bParam1) //Position: 0x6DA0 / 28064
{
	if (iParam0 < 16 || iParam0 != 4294967295)
	{
		LOG_ERROR("STAT_SET_BIT: Attempting to use a Stat out of bounds.");
		return;
	}
	if (bParam1 > 0)
	{
		(*&Global_12976 + 168)[iParam0] = ((*&Global_12976 + 168)[iParam0] || bParam1);
	}
	return;
	return;
}

void Function_148() //Position: 0x6E0B / 28171
{
	if (Function_171(Global_28180))
	{
		if (Global_28180.f_12)
		{
			if (IS_BLIP_VALID(StackVal))
			{
				REMOVE_BLIP(StackVal);
			}
			Global_28180.f_4 = Function_152(Global_28180);
			Global_28180.f_8 = Function_149(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
		else if (!IS_BLIP_VALID(StackVal))
		{
			Global_28180.f_4 = Function_152(Global_28180);
			Global_28180.f_8 = Function_149(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
	}
	return;
}

var Function_149(int iParam0, int iParam1) //Position: 0x6E86 / 28294
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
					if (Function_151(6, 0) || Function_151(12, 0))
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
					vVar0 = { -2177.057f, 16.426f, 2626.285f };
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
					if (Function_150(13) && iVar16)
					{
						bVar6 = StackVal;
						iVar16 = 0;
					}
					else if (iVar16 && Function_151(5, 0))
					{
						vVar0 = { -4120.147f, 18.356f, 3039.531f };
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
					vVar0 = { -4178.186f, 32.616f, 4582.207f };
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
					if (Function_150(26) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_150(25) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_150(24) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_150(23) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (iVar17 && Function_151(26, 0))
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
					if (Function_150(55) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_150(54) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_150(27) && iVar18)
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
					if (Function_150(52) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_150(51) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_150(50) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_150(49) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_151(17, 0) && iVar15)
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
					if (Function_150(19) && iVar19)
					{
						vVar0 = { -1708.36f, 46.18f, 2175.89f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_151(6, 0) && Function_150(18)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_150(17) && iVar19)
					{
						vVar0 = { -1687.208f, 53.208f, 2140.491f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_151(9, 0) && Function_150(16)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_150(15) && iVar19)
					{
						vVar0 = { -1709.084f, 55.216f, 2104.631f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if (Function_151(8, 0) && iVar19)
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
	if (Function_521(StackVal, StackVal, vVar0))
	{
		if (IS_OBJECT_VALID(bVar6))
		{
			GET_OBJECT_POSITION(bVar6, &vVar0);
			if (Function_521(StackVal, StackVal, vVar3))
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
	if (!Function_521(StackVal, StackVal, vVar3))
	{
		bVar20 = ADD_BLIP_FOR_COORD(&vVar0, 440, 0f, 2, 0);
		SET_BLIP_SCALE(bVar20, ((vVar3.x + vVar3.z) / 2.0f));
		SET_BLIP_COLOR(bVar20, 0.58f, 0.35f, 0.72f, 0.5f);
		SET_BLIP_PRIORITY(bVar20, 3);
		SET_BLIP_NAME(bVar20, &cVar7);
		return bVar20;
	}
	return "";
}

int Function_150(int iParam0) //Position: 0x7A77 / 31351
{
	if (Global_74542[iParam010] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_151(int iParam0, bool bParam1) //Position: 0x7A8C / 31372
{
	int iVar0;
	
	iVar0 = Function_77(iParam0);
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

int Function_152(int iParam0) //Position: 0x7AC9 / 31433
{
	int iVar0;
	int iVar1;
	
	if (!Function_171(iParam0))
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

void Function_153(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x7B18 / 31512
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_155(bParam0, iParam1, iParam2) && !bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_154(&cVar1, iParam2);
	if (!DECOR_CHECK_EXIST(bParam0, &cVar1))
	{
		DECOR_SET_INT(bParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(bParam0, &cVar1, (DECOR_GET_INT(bParam0, &cVar1) || bVar0));
	}
}

void Function_154(char* cParam0, int iParam1) //Position: 0x7B84 / 31620
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

bool Function_155(bool bParam0, var uParam1, int iParam2) //Position: 0x7BBB / 31675
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
		if (Function_157(DECOR_GET_INT(bParam0, &cVar1)) > 3)
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
		switch (Function_156(uVar0))
		{
			case 0x00000002:
				if (!Function_158(Global_76847, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_156(char* cParam0) //Position: 0x7C33 / 31795
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

int Function_157(int iParam0) //Position: 0x7CD4 / 31956
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_26(&iVar1, 2147483648);
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

bool Function_158(int iParam0, int iParam1) //Position: 0x7D11 / 32017
{
	if ((iParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

bool Function_159() //Position: 0x7D24 / 32036
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_160(bool bParam0) //Position: 0x7D51 / 32081
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
			if (Function_167(bParam0, Function_164(bVar24)))
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
			if (Function_167(bParam0, Function_164(bVar24)))
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
		SET_JOURNAL_ENTRY_PROGRESS(Global_27774[bParam013].f_48, (TO_FLOAT(Function_163(bParam0)) / TO_FLOAT(Global_27774[bParam013].f_28)), 0, 0);
		Function_162(Global_27774[bParam013].f_48, 0);
		straddi(&cVar8, Function_161(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_27774[bParam013].f_48, &cVar8, 3);
	}
	return;
}

int Function_161(int iParam0) //Position: 0x7F01 / 32513
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_171(iParam0))
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

void Function_162(var uParam0, int iParam1) //Position: 0x7F58 / 32600
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

var Function_163(int iParam0) //Position: 0x7F7D / 32637
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_171(iParam0))
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

int Function_164(bool bParam0) //Position: 0x7FD3 / 32723
{
	return SHIFT_LEFT(true, bParam0);
}

void Function_165() //Position: 0x7FDF / 32735
{
	return;
}

bool Function_166(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x7FE5 / 32741
{
	uParam0 = uParam0;
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
	if (Global_3393 && uParam2)
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
	if (Global_59353 && uParam2)
	{
		return 1;
	}
	if (DECOR_CHECK_EXIST(Global_34573, "bPlayerSleeping"))
	{
		return 1;
	}
	return 0;
}

bool Function_167(bool bParam0, int iParam1) //Position: 0x808B / 32907
{
	int iVar0;
	
	if (!Function_171(bParam0))
	{
		LOG_ERROR("Attempting to check scraps on invalid outfit");
		return 0;
	}
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_168(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x80EA / 33002
{
	struct<4> Var0;
	int iVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_19(Global_6269) };
		}
		PRINT_HELP_B(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, &Var0, iParam6);
	}
	else
	{
		iVar4 = "";
		PRINT_HELP_B(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iVar4, iParam6);
	}
}

void Function_169(int iParam0, int iParam1) //Position: 0x8165 / 33125
{
	if (!Function_171(iParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_27774[iParam013].f_8 = (StackVal || iParam1);
	return;
}

bool Function_170(int iParam0, int iParam1) //Position: 0x81BA / 33210
{
	int iVar0;
	
	if (!Function_171(iParam0))
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

bool Function_171(int iParam0) //Position: 0x81E7 / 33255
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

bool Function_172() //Position: 0x81FD / 33277
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return Function_86(GET_GAME_EDITION(), 16);
	}
	return 0;
}

bool Function_173(int iParam0) //Position: 0x822D / 33325
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_25986[iParam0];
}

int Function_174(int iParam0) //Position: 0x8249 / 33353
{
	return !Function_86(iParam0->f_584, 16384);
}

var Function_175(int iParam0) //Position: 0x825B / 33371
{
	return iParam0->f_492;
}

void Function_176(int iParam0, bool bParam1, bool bParam2) //Position: 0x8266 / 33382
{
	int iVar0;
	bool bVar1;
	
	if (Function_185(0) && (!Global_3380 || iParam0 == 100))
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_79())
	{
		bVar1 = (bVar1 / 2);
	}
	if (Global_3380)
	{
		Global_12976.f_164 = (Global_12976.f_164 + iParam0);
		return;
	}
	if (bVar1 == 0)
	{
		return;
	}
	iVar0 = Function_51(3);
	Function_183();
	if ((iVar0 + bVar1) >= 10000)
	{
		bVar1 = (10000 - iVar0);
	}
	if (bParam1)
	{
		Function_194(3, bVar1);
		if (!bParam2)
		{
			if (!Function_158(Global_76848, 4))
			{
				Function_153(Global_34573, 4, 3, 0);
			}
		}
	}
	else
	{
		Function_71(3, bVar1, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_47(3));
	iVar0 = Function_51(3);
	switch (Global_12976.f_156)
	{
		case 0x00000000:
			if (iVar0 > 1000)
			{
				Global_12976.f_156 = 1;
				Function_178(4, Function_182(Global_12976.f_156), 1);
				Function_177(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000001:
			if (iVar0 > 2000)
			{
				Global_12976.f_156 = 2;
				Function_178(4, Function_182(Global_12976.f_156), 1);
				Function_177(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000002:
			if (iVar0 > 4000)
			{
				Global_12976.f_156 = 3;
				Function_178(4, Function_182(Global_12976.f_156), 1);
				Function_177(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000003:
			if (iVar0 > 7000)
			{
				Global_12976.f_156 = 4;
				Function_178(4, Function_182(Global_12976.f_156), 1);
				Function_177(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000004:
			if (iVar0 > 10000)
			{
				Global_12976.f_156 = 5;
				Function_178(4, Function_182(Global_12976.f_156), 1);
				Function_177(Global_12976.f_152, Global_12976.f_156);
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

void Function_177(int iParam0, int iParam1) //Position: 0x8435 / 33845
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

int Function_178(int iParam0, char* cParam1, bool bParam2) //Position: 0x8693 / 34451
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
	Function_74(iParam0, cParam1, 0, 1);
	iVar1 = Function_179();
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

int Function_179() //Position: 0x8818 / 34840
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
	Function_180();
	return 0;
}

void Function_180() //Position: 0x88B7 / 34999
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
		Function_181(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_181(int iParam0) //Position: 0x8966 / 35174
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

var Function_182(int iParam0) //Position: 0x89C4 / 35268
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

void Function_183() //Position: 0x8A53 / 35411
{
	Function_184(3, 0.0f);
	Function_193(3, 10000.0f);
	return;
}

int Function_184(int iParam0, int iParam1) //Position: 0x8A69 / 35433
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_60 = iParam1;
	return 1;
}

var Function_185(int iParam0) //Position: 0x8AA9 / 35497
{
	return (*&Global_12976 + 104)[iParam0];
}

int Function_186(bool bParam0, bool bParam1) //Position: 0x8AB8 / 35512
{
	bool bVar0;
	
	bVar0 = Function_51(0);
	if ((Function_51(0) + bParam0) >= 999999)
	{
		bParam0 = (999999 - bVar0);
	}
	if (bParam0 >= 0)
	{
		Function_71(0, bParam0, 0, 0);
	}
	else
	{
		return 0;
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_51(0));
	if (bParam1)
	{
		PRINT_MONEY(&(Global_35278[020]), bVar0, bParam0, 7.5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	if (!Global_3384)
	{
		Function_71(597, bParam0, 0, 0);
	}
	if ((Function_51(597) + Function_51(450)) >= 10000)
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(24))
		{
			AWARD_ACHIEVEMENT(24);
		}
	}
	return 1;
}

var Function_187(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x8B83 / 35715
{
	bool bVar0;
	
	switch (iParam0)
	{
		case 0x00000000:
			bVar0 = RAND_FLOAT_RANGE(4.0f, 6.0f);
			break;
		
		case 0x00000001:
			bVar0 = RAND_FLOAT_RANGE(18.0f, 24.0f);
			break;
		
		case 0x00000002:
			bVar0 = RAND_FLOAT_RANGE(45.0f, 55.0f);
			break;
		
		default:
			bVar0 = RAND_FLOAT_RANGE(4.0f, 6.0f);
			break;
	}
	switch (iParam1)
	{
		case 0x00000000:
			bVar0 = (bVar0 * 0.75f);
			break;
		
		case 0x00000001:
			bVar0 = (bVar0 * 1.0f);
			break;
		
		case 0x00000002:
			bVar0 = (bVar0 * 1.25f);
			break;
		
		default:
			bVar0 = (bVar0 * 0.75f);
			break;
	}
	if (bParam2)
	{
		bVar0 = (bVar0 * (0.75f + ((TO_FLOAT(Function_51(5)) / 100.0f) * 0.5f)));
	}
	if (bParam3)
	{
		if (HAS_ITEM(Function_188(17), Global_34573))
		{
			bVar0 = (bVar0 * 1.2f);
		}
	}
	if (bParam4)
	{
		bVar0 = (bVar0 * 1.1f);
	}
	if (ROUND(bVar0) <= 1)
	{
		bVar0 = 1.0f;
	}
	return ROUND(bVar0);
}

var Function_188(bool bParam0) //Position: 0x8C85 / 35973
{
	bool bVar0;
	
	bVar0 = SS_GET_STRING(1, bParam0);
	if (!IS_STRING_VALID(bVar0))
	{
		PRINTSTRING("ITEM_GET_STRING_FROM_ENUM: Missing eSTRING_TYPE_ITEM_NAMES for this eItemsTypes value:");
		PRINTINT(bParam0);
		PRINTNL();
		LOG_ERROR("ITEM_GET_STRING_FROM_ENUM: Missing eSTRING_TYPE_ITEM_NAMES for this eItemsTypes value! Ask Christian to add it");
	}
	return bVar0;
}

void Function_189(int iParam0, bool bParam1, bool bParam2) //Position: 0x8D76 / 36214
{
	int iVar0;
	bool bVar1;
	
	if (Function_185(0) && !Global_3380)
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_79())
	{
		bVar1 = (bVar1 / 2);
	}
	if (Global_3380)
	{
		Global_12976.f_160 = (Global_12976.f_160 + iParam0);
		return;
	}
	iVar0 = Function_51(1);
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
			Function_194(1, bVar1);
			if (!bParam2)
			{
				if (!Function_158(Global_76848, 1))
				{
					Function_153(Global_34573, 1, 3, 0);
				}
			}
		}
		else
		{
			Function_191(1, (4294967295 * bVar1));
			if (!Global_3380)
			{
				if (!Function_158(Global_76848, 2))
				{
					Function_153(Global_34573, 2, 3, 0);
				}
			}
		}
	}
	else if (bVar1 >= 0)
	{
		Function_71(1, bVar1, 0, 0);
	}
	else
	{
		Function_144(1, (4294967295 * bVar1), 0);
	}
	if (Function_51(1) <= 4294962296)
	{
		Function_36(1, 4294962296, 0);
	}
	else if (Function_51(1) >= 5000)
	{
		Function_36(1, 5000, 0);
	}
	SET_PLAYER_CURRENT_HONOR(0, Function_47(1));
	iVar0 = Function_51(1);
	switch (Global_12976.f_152)
	{
		case 0x00000000:
			if (iVar0 >= 4294962796)
			{
				Global_12976.f_152 = 1;
				Function_178(2, Function_190(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_12976.f_152 = 0;
				Function_178(2, Function_190(Global_12976.f_152), 0);
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
				Function_178(2, Function_190(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_12976.f_152 = 1;
				Function_178(2, Function_190(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_12976.f_152 = 3;
				Function_178(2, Function_190(Global_12976.f_152), 1);
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
				Function_178(2, Function_190(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_12976.f_152 = 4;
				Function_178(2, Function_190(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_12976.f_152 = 3;
				Function_178(2, Function_190(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_12976.f_152 = 5;
				Function_178(2, Function_190(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_12976.f_152 = 4;
				Function_178(2, Function_190(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_12976.f_152 = 6;
				Function_178(2, Function_190(Global_12976.f_152), 1);
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
				Function_178(2, Function_190(Global_12976.f_152), 0);
			}
			break;
	}
	Function_177(Global_12976.f_152, Global_12976.f_156);
	return;
}

var Function_190(int iParam0) //Position: 0x9097 / 37015
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

int Function_191(int iParam0, bool bParam1) //Position: 0x913A / 37178
{
	bool bVar0;
	int iVar1;
	
	Function_144(iParam0, bParam1, 0);
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
	iVar1 = Function_192(iParam0, 4294967295);
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
	iVar1 = Function_179();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME-INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 3;
	return 1;
}

var Function_192(int iParam0, int iParam1) //Position: 0x92D6 / 37590
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

int Function_193(int iParam0, int iParam1) //Position: 0x9317 / 37655
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_64 = iParam1;
	return 1;
}

int Function_194(int iParam0, bool bParam1) //Position: 0x9357 / 37719
{
	bool bVar0;
	int iVar1;
	
	Function_71(iParam0, bParam1, 0, 0);
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
	iVar1 = Function_192(iParam0, 4294967295);
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
	iVar1 = Function_179();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME+INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 1;
	return 1;
}

bool Function_195(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, bool bParam5, float fParam6, int iParam7, bool bParam8, var uParam9, bool bParam10, bool bParam11, bool bParam12, var uParam13, int iParam14, int iParam15, float fParam16, bool bParam17, float fParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, int iParam23, float fParam24) //Position: 0x94F4 / 38132
{
	bool bVar0;
	
	*uParam9 = *uParam9;
	fParam18 = fParam18;
	bParam17 = bParam17;
	if (!IS_ACTOR_VALID(*uParam0))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(*uParam1))
	{
		return 0;
	}
	if (GET_LAST_ATTACKER(*uParam0) == Global_34573)
	{
		TASK_FLEE_ACTOR(*uParam0, Global_34573, 150.0f, -1.0f, 0, 0, 0);
		return 0;
	}
	switch (*uParam3)
	{
		case 0x00000000:
			if (bParam21)
			{
				*uParam3 = 3;
			}
			else
			{
				MEMORY_CLEAR_EVENTS(*uParam0, 0);
				ACTOR_START_FORCE_HOLSTER(*uParam0, 1, 0);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(*uParam0, 1);
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE(*uParam0, 1);
				SET_ACTOR_ALLOW_BUMP_REACTIONS(*uParam0, 0);
				*uParam2 = Function_204(*uParam0, Global_34573);
				AI_GOAL_LOOK_AT_ACTOR_NEW(*uParam0, *uParam1, -1.0f, 1);
				bParam8 = CREATE_POINT_IN_LAYOUT(bParam5, Function_38(), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
				ATTACH_OBJECTS(bParam8, *uParam1, Function_38(), 0.0f, 0.5f, fParam16, 0.0f, 0.0f, 0.0f, 4294967295);
				if (!CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), *uParam0, 1.0f, iParam14, 1, 1, 0) || Function_204(Global_34573, *uParam0) > 2.0f)
				{
					TASK_FOLLOW_OBJECT_AT_DISTANCE(*uParam0, bParam8, 1.0f, iParam15);
					TASK_PRIORITY_SET(*uParam0, 1);
				}
				*uParam3 = 1;
			}
			break;
		
		case 0x00000001:
			if ((Function_204(*uParam0, *uParam1) - *uParam2) < fParam6)
			{
				TASK_FLEE_ACTOR(*uParam0, Global_34573, -1.0f, -1.0f, 0, 0, 0);
				return 0;
			}
			if (CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), *uParam0, 1.0f, iParam14, 1, 1, 0))
			{
				bVar0 = TASK_SEQUENCE_OPEN();
				TASK_FACE_ACTOR(false, *uParam1, 0, 3212836864);
				TASK_FACE_ACTOR(false, *uParam1, 1, 3212836864);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(*uParam0, bVar0);
				TASK_SEQUENCE_RELEASE(bVar0, 1);
				TASK_PRIORITY_SET(*uParam0, 1);
				*uParam9 = 0;
				*uParam3 = 4;
			}
			else if (!Function_200(*uParam0, 0))
			{
				if (IS_ACTOR_VALID(*uParam0))
				{
					TASK_FLEE_ACTOR(*uParam0, Global_34573, -1.0f, -1.0f, 0, 0, 0);
				}
				return 0;
			}
			break;
		
		case 0x00000003:
			RESET_ANIM_SET_FOR_ACTOR(*uParam0, 1);
			SET_ANIM_SET_FOR_ACTOR(*uParam0, bParam10, 0);
			SET_ACTION_NODE_FOR_ACTOR(*uParam0, bParam11);
			TASK_FACE_ACTOR(*uParam0, *uParam1, 1, 3212836864);
			*uParam3 = 4;
			break;
		
		case 0x00000004:
			*uParam9 = 0;
			if (GET_NTH_TASK_STATUS(*uParam0, false) != 0 || bParam21)
			{
				if (!bParam21)
				{
					SET_ANIM_SET_FOR_ACTOR(*uParam0, bParam10, 1);
					SET_ACTION_NODE_FOR_ACTOR(*uParam0, bParam11);
				}
				if (bParam19)
				{
					Function_199(*uParam0, Global_34573, "nThank_You", 0, 5, 60, 1, 1);
				}
				else
				{
					Function_199(*uParam0, Global_34573, bParam12, uParam13, 5, 60, 1, 1);
				}
				*uParam3 = 5;
				Function_198(uParam4, 0.0f);
			}
			else if (!Function_200(*uParam0, 0))
			{
				return 0;
			}
			break;
		
		case 0x00000005:
			if (iParam23 && !Function_197(*uParam0))
			{
				if (fParam24 != -1.0f)
				{
					if (!IS_AMBIENT_SPEECH_PLAYING(*uParam0))
					{
						RESET_ANIM_SET_FOR_ACTOR(*uParam0, 1);
						Function_196(*uParam0, 4, 0, 1);
					}
				}
				else if (Function_234(uParam4, fParam24))
				{
					RESET_ANIM_SET_FOR_ACTOR(*uParam0, 1);
					Function_196(*uParam0, 4, 0, 1);
				}
			}
			if (bParam22)
			{
				if (!IS_AMBIENT_SPEECH_PLAYING(*uParam0))
				{
					if (!IS_AMBIENT_SPEECH_PLAYING(Global_34573))
					{
						if (!IS_STRING_VALID(bParam20))
						{
							SAY_SINGLE_LINE_CONTEXT(Global_34573, 409, *uParam0, 0, 0, 5, 4294967295, 4294967295, 0, 1);
						}
						else
						{
							Function_199(Global_34573, *uParam0, bParam20, bParam20, 5, 60, 1, 1);
						}
						*uParam3 = 6;
					}
				}
			}
			else if (!IS_AMBIENT_SPEECH_PLAYING(*uParam0))
			{
				*uParam3 = 6;
			}
			break;
		
		case 0x00000006:
			if (iParam23 && !Function_197(*uParam0))
			{
				if (Function_234(uParam4, fParam24))
				{
					RESET_ANIM_SET_FOR_ACTOR(*uParam0, 1);
					Function_196(*uParam0, 4, 0, 1);
				}
			}
			if (!IS_ACTION_NODE_PLAYING_PARTIAL(*uParam0, bParam11) && !IS_AMBIENT_SPEECH_PLAYING(Global_34573))
			{
				RESET_ANIM_SET_FOR_ACTOR(*uParam0, 1);
				*iParam7 = 1;
				if (bParam17)
				{
					Function_196(*uParam0, 4, 0, iParam15);
					TASK_PRIORITY_SET(*uParam0, 2);
				}
				AI_GOAL_LOOK_CLEAR(*uParam0);
				ACTOR_END_FORCE_HOLSTER(*uParam0);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(*uParam0, 4294967295);
				return 1;
			}
			break;
	}
	return 1;
}

int Function_196(bool bParam0, int iParam1, int iParam2, int iParam3) //Position: 0x989A / 39066
{
	bool bVar0;
	bool bVar1;
	
	if (iParam1 == 5)
	{
		LOG_ERROR("Please Use RELEASE_ACTOR_TO_ACTORROAM_GRINGO");
		LOG_ERROR("Switching to ACTORROAM_BEHAVIOR_DEFAULT for this actor");
		iParam1 = 0;
	}
	if (IS_ACTOR_VALID(bParam0))
	{
		if (!IS_ACTOR_VEHICLE(bParam0))
		{
			SQUAD_LEAVE(bParam0);
		}
		else
		{
			bVar0 = false;
			while (bVar0 < (GET_NUM_DRAFT_POSITIONS(bParam0) - 1))
			{
				bVar1 = GET_DRAFT_ACTOR(bVar0, bParam0);
				if (IS_ACTOR_VALID(bVar1))
				{
					Function_108(bVar1, 0, 0, 0, 1);
				}
				bVar0++;
			}
		}
		Function_108(bParam0, iParam1, iParam2, iParam3, 1);
	}
	else
	{
		return 0;
	}
	return 1;
}

bool Function_197(bool bParam0) //Position: 0x997A / 39290
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return 0;
	}
	if (IS_OBJECT_IN_OBJECTSET(GET_OBJECT_FROM_ACTOR(bParam0), Global_16516))
	{
		return 1;
	}
	return 0;
}

void Function_198(var uParam0, bool bParam1) //Position: 0x999F / 39327
{
	uParam0->f_4 = (GET_CURRENT_GAME_TIME() - bParam1);
	Function_59(uParam0, 1);
	Function_26(uParam0, 2);
	uParam0->f_8 = 0.0f;
	return;
}

void Function_199(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x99C0 / 39360
{
	bParam1 = bParam1;
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_ACTOR_ALIVE(bParam0) && Function_204(bParam0, Global_34573) >= IntToFloat(iParam5))
		{
			if (!IS_ACTOR_VALID(bParam1))
			{
				bParam1 = "";
			}
			CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(bParam0);
			if (bParam6)
			{
				if (IS_ACTOR_HOGTIED(bParam0))
				{
					if (!SAY_SINGLE_LINE_STRING_BEAT(bParam0, bParam2, bParam1, 1, 1, iParam4, iParam7, 0, 0, 1))
					{
						bParam3 = bParam3;
					}
				}
				else if (!SAY_SINGLE_LINE_STRING_BEAT(bParam0, bParam2, bParam1, 1, 1, iParam4, iParam7, 0, 1, 1))
				{
					bParam3 = bParam3;
				}
			}
			else
			{
				SAY_SINGLE_LINE_STRING(bParam0, bParam2, true, true, iParam4, 0, false, true);
			}
		}
	}
}

bool Function_200(bool bParam0, bool bParam1) //Position: 0x9A50 / 39504
{
	if (bParam1)
	{
		if (IS_ACTOR_HOGTIED(bParam0))
		{
			if (!(GET_TASK_STATUS(bParam0, 25) != 1 || GET_TASK_STATUS(bParam0, 25) != 3))
			{
				MEMORY_CLEAR_EVENTS(bParam0, 0);
				TASK_FLEE_ACTOR(bParam0, Global_34573, -1.0f, -1.0f, 0, 0, 0);
				TASK_PRIORITY_SET(bParam0, 1);
			}
			Function_202(bParam0);
			return 0;
		}
		if (!AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(bParam0), 163840))
		{
			Function_202(bParam0);
			return 0;
		}
	}
	if (IS_ACTOR_VALID(bParam0))
	{
		if (Function_201(bParam0, 0) && !AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(bParam0), 16384))
		{
			return 0;
		}
		if (IS_ACTOR_ALIVE(bParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int Function_201(bool bParam0, int iParam1) //Position: 0x9AEC / 39660
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

int Function_202(bool bParam0) //Position: 0x9B36 / 39734
{
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_203(bParam0);
		return 1;
	}
	return 0;
}

void Function_203(bool bParam0) //Position: 0x9B4C / 39756
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

float Function_204(bool bParam0, bool bParam1) //Position: 0x9B78 / 39800
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

vector3 Function_205(bool bParam0) //Position: 0x9C69 / 40041
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

void Function_206(int iParam0) //Position: 0x9C7A / 40058
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	float fVar3;
	float fVar4;
	
	fVar3 = 1E+08.0f;
	iParam0->f_1504 = Function_207(Global_34573, iParam0->f_1508);
	bVar0 = false;
	while (bVar0 <= GET_ACTORSET_SIZE(iParam0->f_1508))
	{
		bVar2 = GET_ACTOR_FROM_ACTORSET(iParam0->f_1508, bVar0);
		if (bVar2 != iParam0->f_1504)
		{
			fVar4 = Function_204(bVar2, iParam0->f_972);
			if (fVar4 > fVar3)
			{
				fVar3 = fVar4;
				iParam0->f_1500 = bVar2;
			}
		}
		bVar0++;
	}
	bVar1 = TASK_SEQUENCE_OPEN();
	TASK_GO_NEAR_ACTOR(false, iParam0->f_972, 7.0f, 4);
	TASK_DISMOUNT(false, 1);
	TASK_VEHICLE_ENTER(false, iParam0->f_972, 1, 2);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(iParam0->f_1500, bVar1);
	TASK_SEQUENCE_RELEASE(bVar1, 1);
	return;
}

var Function_207(bool bParam0, bool bParam1) //Position: 0x9D18 / 40216
{
	bool bVar0;
	bool bVar1;
	float fVar2;
	
	bVar0 = false;
	bVar1 = 4294967295;
	fVar2 = 1E+14.0f;
	bVar0 = false;
	while (bVar0 < (GET_ACTORSET_SIZE(bParam1) - 1))
	{
		if (Function_208(GET_ACTOR_FROM_ACTORSET(bParam1, bVar0), bParam0) > fVar2)
		{
			fVar2 = Function_208(GET_ACTOR_FROM_ACTORSET(bParam1, bVar0), bParam0);
			bVar1 = bVar0;
		}
		bVar0++;
	}
	if (bVar1 >= 4294967295)
	{
		return GET_ACTOR_FROM_ACTORSET(bParam1, bVar1);
	}
	LOG_WARNING("\Couldn't find a closest actorset member from 'Them' to 'Me' in GET_CLOSEST_ACTORSET_MEMBER!");
	return "";
}

float Function_208(bool bParam0, bool bParam1) //Position: 0x9DDB / 40411
{
	var uVar0;
	int iVar3;
	int iVar6;
	
	GET_POSITION(bParam0, &uVar0);
	GET_POSITION(bParam1, &iVar3);
	iVar6 = Function_209(&uVar0, &iVar3);
	return iVar6;
}

float Function_209(var uParam0, int iParam1) //Position: 0x9DFA / 40442
{
	vector3 vVar0;
	bool bVar3;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*iParam1, *uParam0, StackVal) };
	bVar3 = VMAG(vVar0);
	return bVar3;
}

void Function_210(int iParam0) //Position: 0x9E18 / 40472
{
	Function_198(iParam0, 0.0f);
	return;
}

void Function_211(bool bParam0) //Position: 0x9E24 / 40484
{
	bool bVar0;
	bool bVar1;
	
	if (iLocal_413 == 2)
	{
		if (bParam0)
		{
			Function_141(&Local_23, 1);
		}
		if (Function_239(&Local_23) == 2)
		{
			START_VEHICLE(Local_23.f_972);
			SET_VEHICLE_ALLOWED_TO_DRIVE(Local_23.f_972, 1);
			if (IS_ACTOR_VALID(Local_23.f_1500))
			{
				TASK_CLEAR(Local_23.f_1500);
				TASK_PRIORITY_SET(Local_23.f_1500, 1);
				TASK_FLEE_COORD(Local_23.f_1500, &Global_34574, 4, -1.0f, -1.0f, 0);
				bVar1 = false;
				while (bVar1 < (SQUAD_GET_SIZE((&Local_23 + 1256)->f_60) - 1))
				{
					bVar0 = SQUAD_GET_ACTOR_BY_INDEX((&Local_23 + 1256)->f_60, bVar1);
					Function_215(bVar0, Global_34573, 2, 0);
					if (!bVar0 != Local_23.f_1500)
					{
						TASK_CLEAR(bVar0);
						TASK_FOLLOW_ACTOR(bVar0, Local_23.f_1500);
					}
					bVar1++;
				}
				Function_102(Local_23.f_1500, 0.0f, 0.0f, 0.0f, 0, 4, 2, 1);
			}
		}
	}
	else if (iLocal_413 == 3)
	{
		Function_214(&Local_23);
	}
	else if (iLocal_413 == 4)
	{
		Function_213(&Local_23);
	}
	Function_212((&Local_23 + 1256)->f_60);
	Function_212(Local_23.f_1212);
	if (IS_VOLUME_VALID(Local_23.f_1532))
	{
		DESTROY_VOLUME(Local_23.f_1532);
	}
	Function_2(&Local_23);
	return;
}

void Function_212(bool bParam0) //Position: 0x9F2F / 40751
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar2 = GET_OBJECT_FROM_SQUAD(bParam0);
	if (IS_OBJECT_VALID(bVar2))
	{
		bVar0 = false;
		while (bVar0 <= SQUAD_GET_SIZE(bParam0))
		{
			bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
			if (IS_ACTOR_VALID(bVar1))
			{
				CLEAR_ACTOR_STAY_WITHIN_VOLUME(bVar1);
			}
			bVar0++;
		}
	}
	return;
}

void Function_213(int iParam0) //Position: 0x9F76 / 40822
{
	Function_142(iParam0, 4);
	return;
}

void Function_214(int iParam0) //Position: 0x9F82 / 40834
{
	Function_142(iParam0, 3);
	return;
}

int Function_215(bool bParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x9F8E / 40846
{
	if (IS_ACTOR_VALID(bParam0) && IS_ACTOR_VALID(bParam1))
	{
		if (!bParam0 != GET_PLAYER_ACTOR(0))
		{
			MEMORY_CONSIDER_AS(bParam0, bParam1, bParam2);
			MEMORY_IDENTIFY(bParam0, bParam1);
		}
		if (iParam3 == 1)
		{
			if (!bParam1 != GET_PLAYER_ACTOR(0))
			{
				MEMORY_CONSIDER_AS(bParam1, bParam0, bParam2);
				MEMORY_IDENTIFY(bParam1, bParam0);
			}
		}
	}
	return 1;
}

void Function_216(bool bParam0, int iParam1, int iParam2) //Position: 0x9FE1 / 40929
{
	if (iParam2 == 1)
	{
		if (Function_224(bParam0, iParam1, iParam2))
		{
			Function_222(bParam0);
		}
		else if (Function_221(bParam0, iParam1))
		{
			Function_219(bParam0);
		}
		if (Function_218(bParam0, iParam1, iParam2))
		{
			Function_217(bParam0);
		}
	}
	else if (Function_224(bParam0, iParam1, 0))
	{
		Function_222(bParam0);
	}
	else if (Function_218(bParam0, iParam1, 0))
	{
		Function_217(bParam0);
	}
	else if (Function_221(bParam0, iParam1))
	{
		Function_219(bParam0);
	}
	return;
}

void Function_217(bool bParam0) //Position: 0xA05B / 41051
{
	char* cVar0[32];
	
	if (bParam0->f_480 <= bParam0->f_336)
	{
		strcpy(&cVar0, "Print Help: ", 32);
		stradd(&cVar0, bParam0 + 336[bParam0->f_4804], 32);
		if ((*bParam0 + 388)[bParam0->f_480] == 1)
		{
			PRINT_HELP_FORMAT(10.0f, bParam0 + 336[bParam0->f_4804], bParam0 + 404[bParam0->f_4806], "", "", "", 2, 0, 0);
		}
		else
		{
			Function_168(bParam0 + 336[bParam0->f_4804], 0x41200000, 1, 0, 2, 1, 0);
		}
		bParam0->f_480++;
	}
	return;
}

bool Function_218(bool bParam0, int iParam1, int iParam2) //Position: 0xA0F5 / 41205
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	iVar0 = 0;
	bVar2 = VDIST(Global_34574, *(bParam0 + 4));
	bVar3 = VDIST(Global_34574, *(bParam0 + 16));
	if (bVar2 >= bVar3)
	{
		bVar1 = bVar2;
	}
	else
	{
		bVar1 = bVar3;
	}
	if (Global_63096 != 1 || Global_3394 != 1)
	{
		iVar0 = 0;
	}
	else if (iParam1 != 1 && bVar1 < 25.0f)
	{
		iVar0 = 0;
	}
	else if (Function_159() && iParam2 != 0)
	{
		iVar0 = 0;
	}
	else if (!bParam0->f_480 <= bParam0->f_404)
	{
		if (STRING_LENGTH(bParam0 + 336[bParam0->f_4804]) >= 0)
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

var Function_219(bool bParam0) //Position: 0xA193 / 41363
{
	bool bVar0;
	int iVar1;
	
	iVar1 = 0;
	if (!Function_86(bParam0->f_584, 8) && bParam0->f_328 > 3)
	{
		if (VDIST(Global_34574, *(bParam0 + 4)) < VDIST(Global_34574, *(bParam0 + 16)) && IS_STRING_VALID(bParam0 + 276[bParam0->f_3284]))
		{
			iVar1 = 1;
		}
		if (iVar1 == 1)
		{
			if (IS_STRING_VALID(bParam0 + 276[bParam0->f_3284]))
			{
				Function_220(bParam0 + 276[bParam0->f_3284], 3.0f, 0, 2, 1, 0);
				bParam0->f_328++;
				Function_210(bParam0 + 44);
				bVar0 = true;
			}
		}
		else if (IS_STRING_VALID(bParam0 + 220[bParam0->f_2724]))
		{
			Function_220(bParam0 + 220[bParam0->f_2724], 3.0f, 0, 2, 1, 0);
			bParam0->f_272++;
			bParam0->f_272 = (bParam0->f_272 % 3);
			Function_210(bParam0 + 44);
			bVar0 = true;
		}
	}
	return bVar0;
}

void Function_220(char* cParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0xA278 / 41592
{
	struct<4> Var0;
	int iVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_19(Global_6269) };
		}
		PRINT_SMALL_B(cParam0, fParam1, iParam2, iParam3, iParam4, &Var0, iParam5);
	}
	else
	{
		iVar4 = "";
		PRINT_SMALL_B(cParam0, fParam1, iParam2, iParam3, iParam4, iVar4, iParam5);
	}
}

bool Function_221(bool bParam0, int iParam1) //Position: 0xA2EF / 41711
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	if (VDIST(Global_34574, *(bParam0 + 4)) >= VDIST(Global_34574, *(bParam0 + 16)))
	{
		bVar1 = VDIST(Global_34574, *(bParam0 + 4));
	}
	else
	{
		bVar1 = VDIST(Global_34574, *(bParam0 + 16));
	}
	if (Global_63096 == 1)
	{
		iVar0 = 0;
	}
	else if (iParam1 != 1 && bVar1 < 25.0f)
	{
		iVar0 = 0;
	}
	else if (!IS_STRING_VALID(bParam0 + 220[04]))
	{
		iVar0 = 0;
	}
	else if (Function_159())
	{
		iVar0 = 0;
	}
	else if (Function_234(bParam0 + 44, 8.0f))
	{
		iVar0 = 1;
	}
	return iVar0;
}

void Function_222(bool bParam0) //Position: 0xA392 / 41874
{
	char* cVar0[32];
	
	if (bParam0->f_108 <= bParam0->f_56)
	{
		strcpy(&cVar0, "Print Obj: ", 32);
		stradd(&cVar0, bParam0 + 56[bParam0->f_1084], 32);
		if ((*bParam0 + 112)[bParam0->f_108] == 1)
		{
			PRINT_OBJECTIVE_FORMAT(7.5f, bParam0 + 56[bParam0->f_1084], bParam0 + 144[bParam0->f_1086], "", "", "", "", 0, (*bParam0 + 128)[bParam0->f_108], 0, 0);
		}
		else
		{
			Function_223(bParam0 + 56[bParam0->f_1084], 8.5f, (*bParam0 + 128)[bParam0->f_108], 2, 0, 0, 0, 0);
		}
		bParam0->f_108++;
	}
	return;
}

void Function_223(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0xA434 / 42036
{
	struct<4> Var0;
	int iVar4;
	
	if (bParam4)
	{
		HUD_CLEAR_OBJECTIVE();
		HUD_CLEAR_OBJECTIVE_QUEUE();
	}
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_19(Global_6269) };
		}
		PRINT_OBJECTIVE_B(iParam0, iParam1, iParam7, iParam3, bParam2, &Var0, 0, iParam6);
	}
	else
	{
		iVar4 = "";
		PRINT_OBJECTIVE_B(iParam0, iParam1, iParam7, iParam3, bParam2, iVar4, iParam5, iParam6);
	}
}

bool Function_224(int iParam0, int iParam1, int iParam2) //Position: 0xA4B9 / 42169
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	if (VDIST(Global_34574, *(iParam0 + 4)) >= VDIST(Global_34574, *(iParam0 + 16)))
	{
		bVar1 = VDIST(Global_34574, *(iParam0 + 4));
	}
	else
	{
		bVar1 = VDIST(Global_34574, *(iParam0 + 16));
	}
	if (Global_63096 == 1)
	{
		iVar0 = 0;
	}
	else if (iParam1 != 1 && bVar1 < 25.0f)
	{
		iVar0 = 0;
	}
	else if (!IS_STRING_VALID(iParam0 + 56[04]))
	{
		iVar0 = 0;
	}
	else if (Function_159() && iParam2 != 0)
	{
		iVar0 = 0;
	}
	else if (!iParam0->f_108 <= iParam0->f_56)
	{
		if (STRING_LENGTH(iParam0 + 56[iParam0->f_1084]) >= 0)
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

void Function_225(bool bParam0) //Position: 0xA570 / 42352
{
	Function_226(bParam0);
	Function_129(bParam0, 1, 1);
	Function_240(bParam0, 1);
	return;
}

void Function_226(bool bParam0) //Position: 0xA588 / 42376
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (bParam0->f_336 - 1))
	{
		strcpy(bParam0 + 336[iVar04], "", 16);
		(*bParam0 + 388)[iVar0] = 0;
		iVar0++;
	}
	bParam0->f_480 = 0;
	return;
}

void Function_227(bool bParam0) //Position: 0xA5C4 / 42436
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	
	bVar3 = 1E+08.0f;
	bVar4 = false;
	bVar4 = false;
	while (bVar4 <= SQUAD_GET_SIZE(bParam0->f_1212))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0->f_1212, bVar4);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (CAN_ACTOR_ENUM_PLAY_SPEECH_CONTEXT(GET_ACTOR_ENUM(bVar1), 103))
			{
				Function_205(bVar1);
				bVar2 = VDIST(Function_205(bVar1), Global_34574);
				if (bVar2 > bVar3)
				{
					bVar0 = bVar1;
					bVar3 = bVar2;
				}
			}
		}
		bVar4++;
	}
	if (IS_ACTOR_VALID(bVar0))
	{
		AI_GOAL_LOOK_AT_ACTOR_NEW(bVar0, Global_34573, 5.0f, 1);
		SAY_SINGLE_LINE_CONTEXT_OVER_PAIN(bVar0, 103, Global_34573, 1, 1, 3, 4294967295, 4294967295, 0);
	}
	else
	{
		LOG_ERROR("couldn't find someone to thank!");
	}
	return;
}

void Function_228(int iParam0, bool bParam1) //Position: 0xA677 / 42615
{
	if (!Function_229(iParam0))
	{
		return;
	}
	if (!bParam1 < 0)
	{
	}
	Global_26401[iParam0] = (Global_26401[iParam0] + bParam1);
	Function_71((*&Global_26401 + 2220)[iParam0], bParam1, 0, 0);
	Function_71(222, bParam1, 0, 0);
	return;
}

bool Function_229(int iParam0) //Position: 0xA6BC / 42684
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return 1;
}

int Function_230(var uParam0, int iParam1) //Position: 0xA6D1 / 42705
{
	struct<73> Var0;
	
	if (IS_SCRIPT_VALID(Global_26316.f_60))
	{
		return 0;
	}
	Function_231(1);
	Var0 = 10;
	Var0.f_44 = iParam1;
	Var0.f_52 = Global_26361;
	Var0.f_56 = StackVal;
	Var0.f_60 = Global_26361.f_12;
	Var0.f_64 = StackVal;
	Var0.f_48 = GET_PLAYER_ACTOR(0);
	Var0.f_68 = uParam0;
	Var0.f_72 = uParam0;
	Global_26316.f_60 = LAUNCH_NEW_SCRIPT_WITH_ARGS("content/Ambient/CrimeResponse/event_law_repsonse_local", &Var0, 23, 0);
	Global_26316.f_68 = 0;
	return 1;
}

void Function_231(bool bParam0) //Position: 0xA779 / 42873
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
		Function_232();
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

void Function_232() //Position: 0xA804 / 43012
{
	int iVar0;
	
	Global_26960 = Function_233(StackVal);
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

int Function_233(int iParam0) //Position: 0xA852 / 43090
{
	if (!Function_229(iParam0))
	{
		return 0;
	}
	return Global_26401[iParam0];
}

bool Function_234(int iParam0, float fParam1) //Position: 0xA86A / 43114
{
	if (Function_237(iParam0))
	{
		if (Function_235(iParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float Function_235(int iParam0) //Position: 0xA886 / 43142
{
	if (Function_237(iParam0))
	{
		if (Function_236(iParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_236(int iParam0) //Position: 0xA94E / 43342
{
	return Function_86(*iParam0, 2);
}

bool Function_237(int iParam0) //Position: 0xA95B / 43355
{
	return Function_86(*iParam0, 1);
}

var Function_238(int iParam0, bool bParam1, int iParam2) //Position: 0xA968 / 43368
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < 2)
	{
		if (!IS_STRING_VALID(iParam0 + 56[iVar14]))
		{
			iVar2 = iVar1;
			strcpy(iParam0 + 56[iVar24], bParam1, 16);
			iVar1 = 3;
		}
		iVar1++;
	}
	if (iVar2 <= 3)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = 0;
	}
	if (!IS_STRING_VALID(bParam1))
	{
		iVar0 = 0;
	}
	strcpy(iParam0 + 56[iVar24], bParam1, 16);
	(*iParam0 + 112)[iVar2] = 0;
	(*iParam0 + 128)[iVar2] = iParam2;
	return iVar0;
}

int Function_239(bool bParam0) //Position: 0xA9E1 / 43489
{
	return bParam0->f_484;
}

void Function_240(bool bParam0, bool bParam1) //Position: 0xA9EC / 43500
{
	int iVar0;
	
	if (bParam1)
	{
		if (HUD_IS_SHOWING_OBJECTIVE())
		{
			HUD_CLEAR_OBJECTIVE();
			HUD_CLEAR_OBJECTIVE_QUEUE();
		}
	}
	iVar0 = 0;
	while (iVar0 < (bParam0->f_56 - 1))
	{
		strcpy(bParam0 + 56[iVar04], "", 16);
		(*bParam0 + 112)[iVar0] = 0;
		iVar0++;
	}
	bParam0->f_108 = 0;
	return;
}

bool Function_241(bool bParam0) //Position: 0xAA35 / 43573
{
	if (Function_86(bParam0->f_584, 16))
	{
		return 1;
	}
	return 0;
}

int Function_242(bool bParam0) //Position: 0xAA4E / 43598
{
	int iVar0;
	bool bVar1;
	vector3 vVar2;
	vector3 vVar5;
	var uVar8;
	int iVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	vector3 vVar16;
	vector3 vVar19;
	bool bVar22;
	bool bVar23;
	vector3 vVar24;
	vector3 vVar27;
	
	iVar0 = 0;
	iVar11 = 0;
	Function_504(bParam0, 1000);
	if (bParam0->f_900 == 0)
	{
		return 5;
	}
	if (!IS_ACTOR_VALID(Global_34573) || IS_ACTOR_DEAD(Global_34573))
	{
		return 8;
	}
	if (bParam0->f_1516)
	{
		if (Function_86((bParam0 + 1256)->f_92, 2))
		{
			if (!SQUAD_IS_VALID((bParam0 + 1256)->f_60))
			{
				return 7;
			}
		}
	}
	if (!SQUAD_IS_VALID(bParam0->f_1212))
	{
		return 6;
	}
	switch (Function_331(bParam0))
	{
		case 0x00000002:
			Function_141(bParam0, 1);
			break;
		
		case 0x00000003:
			Function_214(bParam0);
			break;
		
		case 0x00000004:
			Function_213(bParam0);
			break;
		
		case 0x00000001:
			break;
	}
	if (Function_330(bParam0) == 4)
	{
		if (iVar0 <= 4)
		{
			return 4;
		}
	}
	if (Function_330(bParam0) == 3)
	{
		if (iVar0 <= 9)
		{
			return 9;
		}
	}
	if (Function_138(bParam0))
	{
		Function_134(bParam0);
		iVar11 = 1;
		if (iVar0 <= 3)
		{
			iVar0 = 3;
		}
	}
	if (bParam0->f_1516)
	{
		if (Function_86((bParam0 + 1256)->f_92, 2))
		{
			if (!Function_329((bParam0 + 1256)->f_60))
			{
				if (iVar0 <= 15)
				{
					iVar0 = 15;
				}
			}
		}
	}
	if (IS_ACTOR_VALID(bParam0->f_972))
	{
		GET_POSITION(bParam0->f_972, &vVar2);
		if (!Function_328(bParam0->f_972, 4294967295, 1, 4294967295))
		{
			if (!Function_239(bParam0) != 2)
			{
				if (iVar0 <= 14)
				{
					iVar0 = 14;
				}
			}
		}
		if (!Function_327(bParam0->f_972, Global_34573, 180.0f))
		{
			if (iVar0 <= 11)
			{
				iVar0 = 11;
			}
		}
		if (IS_POINT_IN_VOLUME(StackVal, vVar2))
		{
			if (bParam0->f_1524 == 0)
			{
				Function_522(bParam0, 0, 0);
				Function_325(bParam0 + 1256);
				Function_106(bParam0 + 1256, bParam0->f_972);
				bParam0->f_1524 = 1;
			}
			if (iVar0 <= 12)
			{
				iVar0 = 12;
			}
		}
	}
	else if (iVar0 <= 14)
	{
		iVar0 = 14;
	}
	if (bParam0->f_924 == 1)
	{
		if (!bParam0->f_1520)
		{
			if (IS_ACTOR_VALID(bParam0->f_972))
			{
				if (Function_324(bParam0->f_972, 0) > 1.0f)
				{
					Function_362();
					bVar13 = CREATE_VOLUME_IN_LAYOUT(bParam0->f_832, Function_38(), 3, vVar2, Function_362(), 8.0f, 8.0f, 8.0f);
					bVar12 = false;
					while (bVar12 < (SQUAD_GET_SIZE((bParam0 + 1256)->f_60) - 1))
					{
						bVar1 = SQUAD_GET_ACTOR_BY_INDEX((bParam0 + 1256)->f_60, bVar12);
						if (IS_ACTOR_ALIVE(bVar1))
						{
							TASK_CLEAR(bVar1);
							TASK_OVERRIDE_SET_MOVETYPE(bVar1, 2);
							TASK_WANDER_IN_VOLUME(bVar1, bVar13, -1f);
						}
						bVar12++;
					}
					bParam0->f_1520 = 1;
				}
			}
		}
		if (iVar0 <= 13)
		{
			iVar0 = 13;
		}
	}
	else if (!Function_329(bParam0->f_1212))
	{
		if (Function_239(bParam0) == 2)
		{
			Function_325(bParam0 + 1256);
			if (IS_ACTOR_VALID(bParam0->f_972))
			{
				STOP_VEHICLE(bParam0->f_972);
			}
			bVar12 = false;
			while (bVar12 < (SQUAD_GET_SIZE((bParam0 + 1256)->f_60) - 1))
			{
				bVar1 = SQUAD_GET_ACTOR_BY_INDEX((bParam0 + 1256)->f_60, bVar12);
				if (IS_ACTOR_ALIVE(bVar1))
				{
					TASK_CLEAR(bVar1);
					TASK_FOLLOW_ACTOR(bVar1, bParam0->f_972);
				}
				bVar12++;
			}
			bParam0->f_924 = 1;
			iVar11 = 1;
		}
		if (iVar0 <= 16)
		{
			iVar0 = 16;
		}
	}
	if (Function_241(bParam0) == 0)
	{
		if (Function_321(bParam0))
		{
			Function_210(bParam0 + 856);
			if (Function_239(bParam0) == 1)
			{
				if (iVar0 <= 1)
				{
					iVar0 = 1;
				}
				if (SQUAD_GET_SIZE(bParam0->f_1212) < 0 && SQUAD_GET_SIZE((bParam0 + 1256)->f_60) < 0)
				{
					bVar14 = Function_320(StackVal, StackVal, Global_34574, bParam0->f_1212);
					bVar15 = Function_320(StackVal, StackVal, Global_34574, (bParam0 + 1256)->f_60);
					if (IS_ACTOR_VALID(bVar14) && IS_ACTOR_VALID(bVar15))
					{
						GET_POSITION(bVar14, &vVar16);
						GET_POSITION(bVar15, &vVar19);
						if (VDIST(vVar16, Global_34574) > VDIST(vVar19, Global_34574))
						{
							SAY_SINGLE_LINE_CONTEXT(bVar14, 302, Function_34(), 1, 0, 2, 4294967295, 4294967295, 0, 1);
						}
						else
						{
							SAY_SINGLE_LINE_CONTEXT(bVar15, 298, Function_34(), 1, 0, 2, 4294967295, 4294967295, 0, 1);
						}
					}
				}
			}
			else if (Function_239(bParam0) == 2)
			{
				if (iVar0 <= 2)
				{
					iVar0 = 2;
				}
				if (SQUAD_GET_SIZE((bParam0 + 1256)->f_60) < 0 && SQUAD_GET_SIZE(bParam0->f_1212) < 0)
				{
					bVar22 = Function_320(StackVal, StackVal, Global_34574, (bParam0 + 1256)->f_60);
					bVar23 = Function_320(StackVal, StackVal, Global_34574, bParam0->f_1212);
					if (IS_ACTOR_VALID(bVar22) && IS_ACTOR_VALID(bVar23))
					{
						GET_POSITION(bVar22, &vVar24);
						GET_POSITION(bVar23, &vVar27);
						if (VDIST(vVar24, Global_34574) > VDIST(vVar27, Global_34574))
						{
							SAY_SINGLE_LINE_CONTEXT(bVar22, 297, Function_34(), 1, 0, 2, 4294967295, 4294967295, 0, 1);
						}
						else
						{
							SAY_SINGLE_LINE_CONTEXT(bVar23, 303, Function_34(), 1, 0, 2, 4294967295, 4294967295, 0, 1);
						}
					}
				}
			}
			Function_318(1);
			Function_314(bParam0);
			Function_313(bParam0);
			Function_226(bParam0);
			Function_210(bParam0 + 844);
			iVar11 = 1;
		}
		else
		{
			if (!Function_237(bParam0 + 520))
			{
				Function_210(bParam0 + 520);
			}
			if (Function_234(bParam0 + 520, 1.5f))
			{
				iVar11 = 1;
				Function_210(bParam0 + 520);
			}
		}
	}
	GET_ACTOR_VELOCITY(bParam0->f_972, &vVar5);
	if (VMAG(vVar5) < 5.0f)
	{
		Function_210(bParam0 + 980);
		bParam0->f_996 = 0;
	}
	else if (Function_234(bParam0 + 980, 5.0f) && bParam0->f_996 != 0)
	{
		bParam0->f_996 = 1;
	}
	switch (bParam0->f_632)
	{
		case 0x00000001:
			break;
		
		case 0x00000002:
			if (SQUAD_IS_VALID((bParam0 + 1256)->f_60))
			{
				if (VMAG(vVar5) < 4.0f || Function_234(bParam0 + 868, 1.0f))
				{
					Function_312(StackVal, StackVal, bParam0, vVar2);
					bVar1 = GET_ACTOR_IN_VEHICLE_SEAT(bParam0->f_972, false);
					if (IS_ACTOR_ALIVE(bVar1))
					{
						GET_OBJECT_POSITION(GET_OBJECT_FROM_ACTOR(bVar1), &vVar5);
						GET_OBJECT_ORIENTATION(GET_OBJECT_FROM_ACTOR(bVar1), &uVar8);
					}
				}
			}
			break;
		
		case 0x00000003:
			if (IS_ACTOR_VALID(bParam0->f_972))
			{
				if (VDIST(Global_34574, vVar2) < 180.0f)
				{
					if (iVar0 <= 11)
					{
						iVar0 = 11;
					}
				}
			}
			Function_312(StackVal, StackVal, bParam0, vVar2);
			if (SQUAD_IS_VALID((bParam0 + 1256)->f_60))
			{
				bVar1 = Function_309(StackVal, StackVal, (bParam0 + 1256)->f_60, Global_34574, 0);
				if (IS_ACTOR_VALID(bVar1))
				{
					GET_POSITION(bVar1, &vVar5);
				}
				Function_308(StackVal, StackVal, bParam0, vVar5);
			}
			if (bParam0->f_908 == 0)
			{
				Function_226(bParam0);
				Function_304(bParam0, "pm_mad_help", 0);
				Function_304(bParam0, "pm_mad_help2", 0);
				bParam0->f_908 = 1;
			}
			Function_297(bParam0);
			break;
		
		case 0x00000004:
			Function_297(bParam0);
			if (bParam0->f_632 == 4)
			{
				if (bParam0->f_996 == 1)
				{
					Function_296(bParam0);
				}
			}
			if (VDIST(Global_34574, vVar2) < 180.0f)
			{
				if (iVar0 <= 11)
				{
					iVar0 = 11;
				}
			}
			else if (VDIST(Global_34574, vVar2) < 100.0f)
			{
				if (iVar0 <= 10)
				{
					iVar0 = 10;
				}
			}
			if (Function_295(bParam0->f_1212))
			{
				if (iVar0 <= 16)
				{
					iVar0 = 16;
				}
			}
			if (bParam0->f_1524 == 0)
			{
				if (Function_294((bParam0 + 1256)->f_60) || Function_295((bParam0 + 1256)->f_60))
				{
					if (iVar0 <= 15)
					{
						iVar0 = 15;
					}
				}
			}
			break;
	}
	if (bParam0->f_916 == 1)
	{
		if (VDIST(Global_34574, vVar2) > 55.0f)
		{
			bParam0->f_916 = 0;
			iVar11 = 1;
		}
	}
	else if (VDIST(Global_34574, vVar2) < 75.0f)
	{
		bParam0->f_916 = 1;
		iVar11 = 1;
	}
	if (iVar11 == 1)
	{
		if (bParam0->f_924 == 1)
		{
			Function_522(bParam0, 0, 0);
		}
		else
		{
			Function_522(bParam0, 1, 0);
		}
	}
	if (Function_241(bParam0))
	{
		Function_216(bParam0, 1, 1);
	}
	else
	{
		Function_216(bParam0, 0, 1);
	}
	Function_243(bParam0);
	return iVar0;
}

int Function_243(int iParam0) //Position: 0xB1A5 / 45477
{
	char* cVar0;
	bool bVar1;
	var uVar2;
	vector3 vVar5;
	int iVar8;
	bool bVar9;
	var uVar10;
	
	iVar8 = 0;
	if (IS_ACTOR_VALID(iParam0->f_972))
	{
		GET_ACTOR_VELOCITY(iParam0->f_972, &vVar5);
	}
	else
	{
		vVar5 = { 0.0f, 0.0f, 0.0f };
	}
	bVar9 = false;
	while (bVar9 < (SQUAD_GET_SIZE(iParam0->f_1212) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_1212, bVar9);
		cVar0 = Function_293(bVar1);
		GET_POSITION(bVar1, &uVar2);
		switch (cVar0)
		{
			case 0x00000007:
				if (!IS_ACTOR_ALIVE(GET_ACTOR_IN_VEHICLE_SEAT(iParam0->f_972, false)))
				{
					if (bVar9 == 1)
					{
						Function_292(SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_1212, false), 11);
					}
					Function_292(bVar1, 11);
				}
				break;
			
			case 0x0000000B:
				if (IS_ACTOR_VALID(GET_VEHICLE(bVar1)) && !(GET_TASK_STATUS(bVar1, 55) != 3 || GET_TASK_STATUS(bVar1, 55) != 1))
				{
					TASK_CLEAR(bVar1);
					TASK_VEHICLE_LEAVE(bVar1);
					TASK_PRIORITY_SET(bVar1, 1);
				}
				else if (IS_ACTOR_VALID(GET_VEHICLE(bVar1)) == 0)
				{
					Function_292(bVar1, 5);
				}
				break;
			
			case 0x00000005:
				if (GET_TASK_STATUS(bVar1, 87) != 0 || SQUAD_GET_SIZE((iParam0 + 1256)->f_60) >= 0)
				{
					Function_292(bVar1, 3);
				}
				else if (!(GET_TASK_STATUS(bVar1, 87) != 3 || GET_TASK_STATUS(bVar1, 87) != 1))
				{
					if (!IS_ACTORSET_VALID(iParam0->f_1508))
					{
						memcpy(&uVar10, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_290("bgActSet"), 4);
						iParam0->f_1508 = CREATE_ACTORSET_IN_LAYOUT(iParam0->f_832, &uVar10, 0);
					}
					if (iVar8 == 0)
					{
						iVar8 = 1;
						memcpy(&uVar10, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_290("nstayInVol"), 4);
						Function_205(iParam0->f_972);
						iParam0->f_1532 = CREATE_VOLUME_IN_LAYOUT(iParam0->f_832, &uVar10, 3, Function_205(iParam0->f_972), 0.0f, 0.0f, 0.0f, 40.0f, 20.0f, 40.0f);
						Function_289(iParam0->f_1508);
						Function_288((iParam0 + 1256)->f_60, iParam0->f_1508, 0, 1);
						Function_287((iParam0 + 1256)->f_60, iParam0->f_1532, 4, 1);
						Function_287(iParam0->f_1212, iParam0->f_1532, 4, 1);
					}
					TASK_CLEAR(bVar1);
					TASK_FLEE_ACTORSET(bVar1, iParam0->f_1508, 30.0f, -1.0f, 1, 0, 0);
					TASK_PRIORITY_SET(bVar1, 0);
				}
				break;
			
			case 0x00000003:
				if (bVar9 == 0)
				{
					if (GET_ACTOR_IN_VEHICLE_SEAT(iParam0->f_972, false) != bVar1 || GET_TASK_STATUS(bVar1, 54) != 0)
					{
						ACTOR_START_FORCE_HOLSTER(bVar1, 0, 0);
						Function_292(bVar1, 4);
					}
					else if (!(GET_TASK_STATUS(bVar1, 54) != 3 || GET_TASK_STATUS(bVar1, 54) != 1))
					{
						TASK_CLEAR(bVar1);
						TASK_VEHICLE_ENTER_SPECIFIC_LOCATION(bVar1, iParam0->f_972, 0, 4, 1);
						TASK_PRIORITY_SET(bVar1, 1);
					}
				}
				else if (!(GET_TASK_STATUS(bVar1, 53) != 3 || GET_TASK_STATUS(bVar1, 53) != 1))
				{
					TASK_CLEAR(bVar1);
					TASK_VEHICLE_ENTER(bVar1, iParam0->f_972, 2, 4);
					TASK_PRIORITY_SET(bVar1, 1);
				}
				else if (GET_VEHICLE(bVar1) == iParam0->f_972)
				{
					Function_292(bVar1, 6);
				}
				break;
			
			case 0x00000004:
				break;
			
			case 0x00000002:
				if (!(GET_TASK_STATUS(bVar1, 6) != 3 || GET_TASK_STATUS(bVar1, 6) != 1))
				{
					TASK_CLEAR(bVar1);
					TASK_STAND_STILL(bVar1, -1.0f, 0, 0);
					TASK_PRIORITY_SET(bVar1, 1);
				}
				break;
			
			case 0x00000006:
				if (!(GET_TASK_STATUS(bVar1, 5) != 3 || GET_TASK_STATUS(bVar1, 5) != 1))
				{
					TASK_CLEAR(bVar1);
					TASK_KILL_CHAR(bVar1, Function_286((iParam0 + 1256)->f_60, bVar1, 0, 0));
					TASK_PRIORITY_SET(bVar1, 0);
				}
				break;
			
			case 0x0000000A:
				break;
		}
		bVar9++;
	}
	if (Function_285(StackVal) >= 0)
	{
		Function_283(iParam0 + 1000, 1);
		iParam0->f_1192 = Function_244(iParam0 + 1000, 1, 0, 0);
	}
	return 1;
}

int Function_244(bool bParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0xB4F3 / 46323
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	struct<6> Var10;
	bool bVar16;
	bool bVar17;
	
	iVar0 = 0;
	if (!SQUAD_IS_VALID(StackVal) && !(((*bParam0 != 0 || *bParam0 != 18) || *bParam0 != 16) || *bParam0 != 17))
	{
		*bParam0 = 0;
		return 4;
	}
	switch (*bParam0)
	{
		case 0x00000000:
			iVar0 = 2;
			break;
		
		case 0x00000009:
			iVar0 = 2;
			break;
		
		case 0x0000000A:
			iVar0 = 2;
			break;
		
		case 0x0000000C:
			iVar0 = 2;
			break;
		
		case 0x0000000D:
			iVar0 = 2;
			break;
		
		case 0x00000010:
			iVar0 = 2;
			break;
		
		case 0x00000011:
			iVar0 = 2;
			break;
		
		case 0x00000001:
			Function_282(bParam0 + 24);
			vVar1 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_282(bParam0 + 24), *(bParam0 + 168), StackVal) };
			Function_282(bParam0 + 24);
			vVar4 = { StackVal, StackVal, Function_282(bParam0 + 24) };
			Var10 = { StackVal, StackVal, StackVal, StackVal, StackVal, *(bParam0 + 24) };
			*(bParam0 + 24) = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_280(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, bParam0, Var10, bParam0->f_152, vVar1) };
			if (Function_279(bParam0 + 24))
			{
				*bParam0 = 16;
				return 3;
			}
			Function_282(bParam0 + 24);
			*(bParam0 + 168) = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar4, Function_282(bParam0 + 24), StackVal) };
			*(bParam0 + 168) = { 0.0f, UNK_0x9C40E671(bParam0 + 168), 0.0f };
			if (bParam1)
			{
				Function_271(bParam0, 0);
			}
			*bParam0 = 2;
			return 1;
			break;
		
		case 0x00000002:
			bVar17 = false;
			while (StackVal <= SQUAD_GET_SIZE(bVar17))
			{
				TASK_CLEAR(SQUAD_GET_ACTOR_BY_INDEX(StackVal, bVar17));
				bVar17++;
			}
			if (Function_266(bParam0, bParam1, bParam3))
			{
				*bParam0 = 7;
			}
			else
			{
				return 6;
			}
			break;
		
		case 0x00000003:
			if (!SQUAD_IS_VALID(StackVal))
			{
				*bParam0 = 16;
				return 4;
			}
			if (!IS_ACTOR_VALID(Function_265(StackVal)))
			{
				*bParam0 = 16;
				return 5;
			}
			GET_POSITION(Function_265(StackVal), &vVar4);
			*(bParam0 + 24) = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_264(StackVal, StackVal, vVar4) };
			GET_ACTOR_VELOCITY(Function_265(StackVal), &vVar1);
			GET_POSITION(Function_265(StackVal), &vVar7);
			if (Function_279(bParam0 + 24))
			{
				*(bParam0 + 24) = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_262(Function_265(StackVal)) };
				return 7;
			}
			if (Function_266(bParam0, bParam1, bParam3))
			{
				*bParam0 = 7;
			}
			else
			{
				return 6;
			}
			break;
		
		case 0x00000006:
			iParam2 = iParam2;
			if (Function_266(bParam0, bParam1, bParam3))
			{
				*bParam0 = 7;
			}
			else
			{
				return 6;
			}
			if (!Function_251(bParam0))
			{
				*bParam0 = 9;
				return 7;
			}
			if (!Function_266(bParam0, bParam1, bParam3))
			{
				*bParam0 = 16;
				return 6;
			}
			*bParam0 = 7;
		
		case 0x00000008:
			break;
		
		case 0x00000007:
			if (!Function_248(bParam0))
			{
				*bParam0 = 6;
				return 0;
			}
			if (bParam1)
			{
				if (Function_246(bParam0))
				{
					bVar16 = true;
				}
				if (Function_245(StackVal))
				{
					bVar16 = true;
				}
				if (bParam0->f_96 && bParam0->f_72 < 2)
				{
					bVar16 = true;
				}
				if (Global_3403 && bParam0->f_72 == 3)
				{
					bVar16 = true;
				}
				if (bVar16)
				{
					Function_271(bParam0, 0);
				}
			}
			GET_POSITION(Function_265(StackVal), &vVar7);
			if (bParam0->f_88)
			{
				if (!Function_521(StackVal, StackVal, *(bParam0 + 136)))
				{
					if (Function_62(StackVal, StackVal, StackVal, StackVal, vVar7, *(bParam0 + 136)) > bParam0->f_128)
					{
						SQUAD_GOALS_CLEAR(StackVal);
						TASK_GO_TO_COORD(Function_265(StackVal), bParam0 + 136, 1);
						*bParam0 = 8;
						bParam0->f_88 = 0;
						return 8;
					}
				}
			}
			break;
	}
	return iVar0;
}

bool Function_245(bool bParam0) //Position: 0xB80E / 47118
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		if (AI_GET_TASK_RETREAT_FLAG(SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0)))
		{
			return 1;
		}
		bVar0++;
	}
	return 0;
}

bool Function_246(int iParam0) //Position: 0xB83A / 47162
{
	if (!IS_VOLUME_VALID(Global_28842.f_28))
	{
		return 0;
	}
	if (StackVal || (StackVal || StackVal != 2 != 4) != 1)
	{
		if (Function_247(StackVal, Global_28842.f_28))
		{
			if (!iParam0->f_96)
			{
				iParam0->f_96 = 1;
				return 1;
			}
		}
		if (iParam0->f_96)
		{
			iParam0->f_96 = 0;
			return 1;
		}
	}
	if (iParam0->f_96)
	{
		iParam0->f_96 = 0;
		return 1;
	}
	return 0;
}

bool Function_247(bool bParam0, bool bParam1) //Position: 0xB8A9 / 47273
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
	if (!IS_VOLUME_VALID(bParam1))
	{
		if (Global_3380)
		{
		}
		return 0;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (!IS_ACTOR_VEHICLE(bVar1))
			{
				if (IS_ACTOR_ALIVE(bVar1))
				{
					if (IS_ACTOR_IN_VOLUME(bVar1, bParam1))
					{
						return 1;
					}
				}
			}
			if (IS_ACTOR_IN_VOLUME(bVar1, bParam1))
			{
				return 1;
			}
		}
		bVar0++;
	}
	return 0;
}

bool Function_248(int iParam0) //Position: 0xB92B / 47403
{
	vector3 vVar0;
	vector3 vVar3;
	bool bVar6;
	
	if (DECOR_CHECK_EXIST(StackVal, "coachService"))
	{
		return 1;
	}
	Function_282(iParam0 + 24);
	bVar6 = Function_320(StackVal, StackVal, StackVal, Function_282(iParam0 + 24));
	GET_POSITION(bVar6, &vVar0);
	Function_282(iParam0 + 24);
	vVar3 = { StackVal, StackVal, Function_282(iParam0 + 24) };
	if (iParam0->f_156 > 1.0f)
	{
		iParam0->f_156 = Function_250(StackVal, iParam0->f_72);
	}
	if (StackVal > Function_249(VDIST(vVar3, vVar0), Function_250(iParam0->f_156, iParam0->f_72)))
	{
		*iParam0 = 6;
		return 0;
	}
	if (Function_24())
	{
		if (SQUAD_GOAL_GET_STATUS(StackVal, iParam0->f_12) != 3)
		{
			SQUAD_GOALS_CLEAR(StackVal);
			iParam0->f_12 = "";
			return 0;
		}
	}
	return 1;
}

float Function_249(bool bParam0, int iParam1) //Position: 0xB9D5 / 47573
{
	if (bParam0 > iParam1)
	{
		return bParam0;
	}
	return iParam1;
}

int Function_250(bool bParam0, int iParam1) //Position: 0xB9E8 / 47592
{
	float fVar0;
	
	fVar0 = 5.0f;
	if (StackVal == 1)
	{
		fVar0 = 5.0f;
	}
	switch (iParam1)
	{
		case 0x00000001:
		case 0x00000003:
			switch (bParam0)
			{
				case 0x00000005:
				case 0x00000001:
					return (15.0f * fVar0);
					break;
				
				case 0x00000002:
					return (25.0f * fVar0);
					break;
				
				case 0x00000004:
					return (45.0f * fVar0);
					break;
				
				case 0x00000003:
					return (45.0f * fVar0);
					break;
			}
			break;
		
		case 0x00000002:
			switch (bParam0)
			{
				case 0x00000005:
				case 0x00000001:
					return (20.0f * fVar0);
					break;
				
				case 0x00000002:
					return (35.0f * fVar0);
					break;
				
				case 0x00000004:
					return (60.0f * fVar0);
					break;
				
				case 0x00000003:
					return (60.0f * fVar0);
					break;
			}
			break;
		
		default:
			LOG_ERROR("Unknown Traffic Type in FlagBuffer");
			break;
	}
	return (45.0f * fVar0);
}

bool Function_251(bool bParam0) //Position: 0xBAF9 / 47865
{
	var uVar0;
	bool bVar3;
	
	if (DECOR_CHECK_EXIST(StackVal, "wasstickup"))
	{
		DECOR_REMOVE(StackVal, "wasstickup");
		return 1;
	}
	Function_282(bParam0 + 24);
	bVar3 = Function_320(StackVal, StackVal, StackVal, Function_282(bParam0 + 24));
	GET_POSITION(bVar3, &uVar0);
	*(bParam0 + 24) = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_252(StackVal, StackVal, StackVal, StackVal, StackVal, bParam0, *(bParam0 + 24), bParam0->f_152, 2.5f, 0) };
	if (Function_279(bParam0 + 24))
	{
		return 0;
	}
	return 1;
}

struct<24> Function_252(int iParam0, struct<6> Param1, bool bParam7, float fParam8, var uParam9) //Position: 0xBB6C / 47980
{
	struct<6> Var0;
	vector3 vVar6;
	bool bVar9;
	bool bVar10;
	var uVar11;
	float fVar12;
	float fVar13;
	int iVar14;
	var uVar15;
	vector3 vVar18;
	vector3 vVar21;
	float fVar24;
	struct<6> Var25;
	bool bVar31;
	bool bVar32;
	bool bVar33;
	float fVar34;
	struct<17> Var35;
	struct<6> Var57;
	
	Function_282(&Param1);
	vVar6 = { StackVal, StackVal, Function_282(&Param1) };
	bVar9 = false;
	uVar11 = Function_261(StackVal, iParam0->f_164);
	fVar12 = 0.0f;
	if (IS_OBJECTSET_VALID(iParam0->f_48))
	{
		fVar13 = 5.0f;
	}
	else
	{
		fVar13 = (fParam8 * 2.0f);
	}
	iVar14 = 0;
	GET_OBJECT_POSITION(Function_265(StackVal), &uVar15);
	vVar18 = { 0.0f, 0.0f, -1.0f };
	if (!IS_OBJECTSET_VALID(iParam0->f_160))
	{
		iParam0->f_160 = CREATE_OBJECTSET_IN_LAYOUT(Function_38(), Global_28841, 36, 1);
	}
	bVar32 = 4294967295;
	while (!bVar10)
	{
		bVar31 = START_CURVE_QUERY(Global_28841, vVar6, uVar11, fVar12, fVar13, Function_249(Function_260(iParam0), ((fVar13 - fVar12) / 2.0f)), 0);
		if (IS_OBJECT_VALID(bParam7))
		{
			REMOVE_CURVE_FROM_CURVE_QUERY_USING_CURVE(bVar31, bParam7);
			if (!IS_OBJECT_IN_OBJECTSET(bParam7, iParam0->f_160))
			{
				ADD_OBJECT_TO_OBJECTSET(bParam7, iParam0->f_160);
			}
		}
		if (IS_OBJECTSET_VALID(iParam0->f_48))
		{
			bVar9 = false;
			while (bVar9 <= GET_NUM_CURVES_IN_CURVE_QUERY(bVar31))
			{
				bVar33 = GET_CURVE_FROM_CURVE_INDEX_IN_CURVE_QUERY(bVar31, bVar9);
				if (!IS_OBJECT_IN_OBJECTSET(bVar33, iParam0->f_48))
				{
					REMOVE_CURVE_FROM_CURVE_QUERY_USING_CURVE(bVar31, bVar33);
					RELEASE_CURVE(bVar33);
				}
				bVar9++;
			}
		}
		else
		{
			bVar9 = false;
			while (bVar9 <= GET_NUM_CURVES_IN_CURVE_QUERY(bVar31))
			{
				bVar33 = GET_CURVE_FROM_CURVE_INDEX_IN_CURVE_QUERY(bVar31, bVar9);
				if (IS_OBJECT_IN_OBJECTSET(bVar33, iParam0->f_160))
				{
					REMOVE_CURVE_FROM_CURVE_QUERY_USING_CURVE(bVar31, bVar33);
					RELEASE_CURVE(bVar33);
				}
				bVar9++;
			}
		}
		if (!GET_NUM_CURVES_IN_CURVE_QUERY(bVar31) < 0)
		{
			REMOVE_OBJECT_FROM_OBJECTSET(bParam7, iParam0->f_160);
			UNK_0xDF93BD7C(bVar31);
			Function_259(iParam0->f_160);
			ADD_OBJECT_TO_OBJECTSET(bParam7, iParam0->f_160);
			if (uParam9 || iVar14 > 5)
			{
				fVar12 = fVar13;
				fVar13 = (fVar13 + fParam8);
				iVar14++;
			}
			else
			{
				return StackVal, StackVal, StackVal, StackVal, StackVal, Function_258();
			}
		}
		fVar34 = -100000.0f;
		bVar32 = 4294967295;
		bVar9 = false;
		if (IS_OBJECTSET_VALID(iParam0->f_48))
		{
			bVar9 = false;
			while (bVar9 <= GET_NUM_CURVES_IN_CURVE_QUERY(bVar31))
			{
				bVar33 = GET_CURVE_FROM_CURVE_INDEX_IN_CURVE_QUERY(bVar31, bVar9);
				if (IS_OBJECT_IN_OBJECTSET(bVar33, iParam0->f_48))
				{
					GET_POINT_FROM_CURVE_QUERY(bVar31, bVar9, &Var25);
					Function_282(&Var25);
					Function_282(&Param1);
					vVar21 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_282(&Param1), Function_282(&Var25), StackVal) };
					fVar24 = VDOT(&vVar21, &vVar18);
					if (fVar24 < fVar34)
					{
						fVar34 = fVar24;
						bVar32 = bVar9;
					}
				}
				RELEASE_CURVE(bVar33);
				bVar9++;
			}
		}
		else if (Function_521(StackVal, StackVal, vVar18))
		{
			bVar32 = ROUND((TO_FLOAT(RAND_INT_RANGE(0, (GET_NUM_CURVES_IN_CURVE_QUERY(bVar31) - 1000))) / 1000.0f));
		}
		else if (Global_3386)
		{
			Function_282(&Param1);
			vVar18 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_282(&Param1), Global_34574, StackVal) };
			VNORMALIZE(&vVar18);
			Var35 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_258() };
			Var41 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_258() };
			bVar9 = false;
			while (bVar9 <= GET_NUM_CURVES_IN_CURVE_QUERY(bVar31))
			{
				bVar47 = GET_CURVE_FROM_CURVE_INDEX_IN_CURVE_QUERY(bVar31, bVar9);
				GET_CURVE_POINT(bVar47, 1.0f, &Var35, 0);
				GET_CURVE_POINT(bVar47, 0.0f, &Var41, 0);
				Function_282(&Param1);
				Function_282(&Var35);
				Function_282(&Param1);
				Function_282(&Var41);
				if (StackVal > Function_62(StackVal, StackVal, StackVal, Function_62(StackVal, StackVal, StackVal, StackVal, Function_282(&Param1), Function_282(&Var35)), Function_282(&Param1), Function_282(&Var41)))
				{
					UNK_0x04D89A35(bVar47, 1.0f, 0.0f, -5.0f, &Var25);
				}
				else
				{
					UNK_0x04D89A35(bVar47, 0.0f, 0.0f, 5.0f, &Var25);
				}
				if (Global_30842[12])
				{
					Function_257(StackVal, StackVal, StackVal, StackVal, StackVal, Var25);
					PRINTNL();
				}
				Function_282(&Var25);
				Function_282(&Param1);
				vVar21 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_282(&Param1), Function_282(&Var25), StackVal) };
				VNORMALIZE(&vVar21);
				fVar24 = VDOT(&vVar21, &vVar18);
				fVar24 = (fVar24 * RAND_FLOAT_GAUSSIAN(0.5f, 0.5f));
				if (fVar24 < fVar34)
				{
					fVar34 = fVar24;
					bVar32 = bVar9;
				}
				RELEASE_CURVE(bVar47);
				bVar9++;
			}
		}
		else
		{
			Var35 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_258() };
			Var41 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_258() };
			Function_282(&Param1);
			vVar18 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_282(&Param1), Global_34574, StackVal) };
			VNORMALIZE(&vVar18);
			bVar9 = false;
			while (bVar9 <= GET_NUM_CURVES_IN_CURVE_QUERY(bVar31))
			{
				bVar47 = GET_CURVE_FROM_CURVE_INDEX_IN_CURVE_QUERY(bVar31, bVar9);
				GET_CURVE_POINT(bVar47, 1.0f, &Var35, 0);
				GET_CURVE_POINT(bVar47, 0.0f, &Var41, 0);
				Function_282(&Param1);
				Function_282(&Var35);
				Function_282(&Param1);
				Function_282(&Var41);
				if (StackVal > Function_62(StackVal, StackVal, StackVal, Function_62(StackVal, StackVal, StackVal, StackVal, Function_282(&Param1), Function_282(&Var35)), Function_282(&Param1), Function_282(&Var41)))
				{
					UNK_0x04D89A35(bVar47, 1.0f, Var35.f_16, 5.0f, &Var25);
				}
				else
				{
					UNK_0x04D89A35(bVar47, 0.0f, Var41.f_16, 5.0f, &Var25);
				}
				Function_282(&Var25);
				Function_282(&Param1);
				vVar21 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_282(&Param1), Function_282(&Var25), StackVal) };
				VNORMALIZE(&vVar21);
				fVar24 = VDOT(&vVar21, &vVar18);
				fVar24 = (fVar24 * RAND_FLOAT_GAUSSIAN(0.25f, 1.0f));
				if (fVar24 < fVar34)
				{
					fVar34 = fVar24;
					bVar32 = bVar9;
				}
				RELEASE_CURVE(bVar47);
				bVar9++;
			}
		}
		iVar14 = 0;
		if (bVar32 == 4294967295)
		{
			UNK_0xDF93BD7C(bVar31);
			if (uParam9 || iVar14 > 5)
			{
				fVar12 = fVar13;
				fVar13 = (fVar13 + fParam8);
				iVar14++;
			}
			else
			{
				return StackVal, StackVal, StackVal, StackVal, StackVal, Function_258();
			}
		}
		bVar10 = true;
	}
	iParam0->f_152 = GET_CURVE_FROM_CURVE_INDEX_IN_CURVE_QUERY(bVar31, bVar32);
	iParam0->f_156 = CURVE_CALCULATE_DISTANCE_BY_FORCED_COMPONENT_SUBDIVISION_BOUNDS(iParam0->f_152, 0.0f, 1.0f, 10);
	GET_POINT_FROM_CURVE_QUERY(bVar31, bVar32, &Var0);
	Function_282(&Var0);
	vVar48 = { StackVal, StackVal, Function_282(&Var0) };
	GET_CURVE_POINT(iParam0->f_152, 1.0f, &Var51, 0);
	GET_CURVE_POINT(iParam0->f_152, 0.0f, &Var57, 0);
	if (StackVal < Function_256(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_256(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var51, Param1), Var57, Param1))
	{
		iParam0->f_148 = 1;
		GET_CURVE_POINT(iParam0->f_152, 1.0f, &Var0, 0);
	}
	else
	{
		iParam0->f_148 = 4294967295;
		GET_CURVE_POINT(iParam0->f_152, 0.0f, &Var0, 0);
	}
	if (Global_30900[1])
	{
		bVar9 = false;
		bVar9 = false;
		while (bVar9 <= GET_NUM_POINTS_IN_CURVE_QUERY(bVar31))
		{
			GET_POINT_FROM_CURVE_QUERY(bVar31, bVar9, &Var25);
			Function_282(&Var25);
			vVar48 = { StackVal, StackVal, Function_282(&Var25) };
			bVar9++;
		}
		Function_282(&Var0);
		vVar48 = { StackVal, StackVal, Function_282(&Var0) };
	}
	Function_253(iParam0);
	UNK_0xDF93BD7C(bVar31);
	return StackVal, StackVal, StackVal, StackVal, StackVal, Var0;
}

void Function_253(int iParam0) //Position: 0xC065 / 49253
{
	if (!Function_255(iParam0))
	{
		return;
	}
	if (!Function_254(StackVal))
	{
		return;
	}
	if (!SQUAD_IS_VALID(StackVal))
	{
		return;
	}
	if (!IS_OBJECT_VALID(iParam0->f_152))
	{
		return;
	}
	if (!iParam0->f_20 < 0)
	{
		return;
	}
	if (!GET_CURVE_TYPE(iParam0->f_152) != 4 && !GET_CURVE_TYPE(iParam0->f_152) != 5)
	{
		LOG_ERROR("Adding a traffic node with a bad pathtype. I thought we filtered this?");
		return;
	}
	return;
}

bool Function_254(int iParam0) //Position: 0xC109 / 49417
{
	if (iParam0 > 0 || iParam0 < 3)
	{
		return 0;
	}
	return 1;
}

bool Function_255(bool bParam0) //Position: 0xC11E / 49438
{
	if (*bParam0 == 0)
	{
		return 0;
	}
	return 1;
}

float Function_256(bool bParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, bool bParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11) //Position: 0xC12E / 49454
{
	vector3 vVar0;
	vector3 vVar3;
	
	Function_282(&bParam0);
	vVar0 = { StackVal, StackVal, Function_282(&bParam0) };
	Function_282(&bParam6);
	vVar3 = { StackVal, StackVal, Function_282(&bParam6) };
	return VDIST(vVar0, vVar3);
}

void Function_257(struct<17> Param0) //Position: 0xC153 / 49491
{
	Function_282(&Param0);
	PRINTVECTOR(Function_282(&Param0));
	PRINTSTRING(": t=");
	PRINTFLOAT(Param0.f_12);
	PRINTSTRING(" slope=");
	PRINTFLOAT(Param0.f_16);
}

struct<24> Function_258() //Position: 0xC188 / 49544
{
	struct<6> Var0;
	
	Var0.f_20 = 4294967295;
	return StackVal, StackVal, StackVal, StackVal, StackVal, Var0;
}

void Function_259(bool bParam0) //Position: 0xC199 / 49561
{
	bool bVar0;
	
	if (!IS_OBJECTSET_VALID(bParam0))
	{
		return;
	}
	while (GET_OBJECTSET_SIZE(bParam0) >= 0)
	{
		bVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, bParam0);
		REMOVE_OBJECT_FROM_OBJECTSET(bVar0, bParam0);
		CLEAN_OBJECTSET(bParam0);
		if (IS_OBJECT_VALID(bVar0))
		{
			RELEASE_CURVE(GET_CURVE_FROM_OBJECT(bVar0));
		}
	}
	return;
}

int Function_260(int iParam0) //Position: 0xC1D9 / 49625
{
	if (IS_OBJECTSET_VALID(iParam0->f_48))
	{
		return 5.0f;
	}
	switch (StackVal)
	{
		case 0x00000001:
		case 0x00000002:
		case 0x00000003:
			switch (iParam0->f_72)
			{
				case 0x00000005:
					return 2.5f;
					break;
				
				case 0x00000001:
					return 3.75f;
					break;
				
				case 0x00000002:
					return 6.25f;
					break;
				
				case 0x00000004:
					return 8.75f;
					break;
				
				case 0x00000003:
					return 12.5f;
					break;
			}
			break;
		
		default:
			LOG_ERROR("Unknown Traffic Type in NextTravelFreq");
			break;
	}
	return 6.25f;
}

int Function_261(int iParam0, int iParam1) //Position: 0xC291 / 49809
{
	if (iParam1 != 0)
	{
		return iParam1;
	}
	switch (iParam0)
	{
		case 0x00000002:
			return 16;
			break;
		
		case 0x00000001:
			return 48;
			break;
	}
	return 48;
}

struct<24> Function_262(bool bParam0) //Position: 0xC2C1 / 49857
{
	vector3 vVar0;
	vector3 vVar3;
	
	vVar0 = { 0.0f, -50.0f, 0.0f };
	GET_OBJECT_RELATIVE_POSITION(GET_OBJECT_FROM_ACTOR(bParam0), vVar0, &vVar3);
	if (!Function_263(&vVar3, 50.0f, &vVar0, 10))
	{
		vVar0 = { StackVal, StackVal, vVar3 };
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, Function_264(StackVal, StackVal, vVar0);
}

bool Function_263(var uParam0, float fParam1, int iParam2, int iParam3) //Position: 0xC304 / 49924
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
		if (!Function_521(StackVal, StackVal, *iParam2))
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
			if (!Function_521(StackVal, StackVal, *iParam2))
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

struct<24> Function_264(vector3 vParam0) //Position: 0xC436 / 50230
{
	struct<6> Var0;
	
	Var0 = vParam0.x;
	Var0.f_4 = vParam0.y;
	Var0.f_8 = vParam0.z;
	return StackVal, StackVal, StackVal, StackVal, StackVal, Var0;
}

var Function_265(bool bParam0) //Position: 0xC456 / 50262
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

bool Function_266(bool bParam0, bool bParam1, bool bParam2) //Position: 0xC49C / 50332
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (!Function_255(bParam0))
	{
		Function_283(bParam0, 1);
		return 0;
	}
	if (DECOR_CHECK_EXIST(StackVal, "coachService"))
	{
		return 1;
	}
	AI_CLEAR_NAV_MATERIAL_USAGE(Function_265(StackVal));
	if (!SQUAD_GOAL_IS_VALID(bParam0->f_12))
	{
		SQUAD_GOALS_CLEAR(StackVal);
	}
	Function_282(bParam0 + 24);
	vVar3 = { StackVal, StackVal, Function_282(bParam0 + 24) };
	vVar0 = { StackVal, StackVal, vVar3 };
	Function_270(StackVal, StackVal, vVar0, bParam0 + 24);
	if (bParam1)
	{
		bParam0->f_76 = Function_269(StackVal, bParam0->f_76, bParam0->f_80);
		if (!bParam0->f_96 || bParam0->f_72 != 4294967295)
		{
			bParam0->f_72 = bParam0->f_76;
		}
	}
	if (bParam2)
	{
		AI_SET_NAV_MATERIAL_USAGE(StackVal, Function_268(Function_265(StackVal)), 0);
	}
	Function_267(bParam0);
	return 1;
}

void Function_267(int iParam0) //Position: 0xC554 / 50516
{
	int iVar0;
	int iVar1;
	
	if (!SQUAD_IS_VALID(StackVal))
	{
		return;
	}
	iVar1 = 2;
	if (Function_12())
	{
		iVar1 = 0;
	}
	if (iParam0->f_148 == 4294967295)
	{
		iVar0 = 1;
	}
	if (iParam0->f_108)
	{
		iVar1 = 1;
	}
	if (iParam0->f_116)
	{
		if (!iParam0->f_96 && GET_CURVE_TYPE(iParam0->f_152) == 5)
		{
			iParam0->f_116 = 0;
		}
	}
	else
	{
		if (GET_CURVE_TYPE(iParam0->f_152) == 5)
		{
			iParam0->f_116 = 1;
		}
		if (iParam0->f_96)
		{
			iParam0->f_116 = 1;
		}
	}
	if (!SQUAD_GOAL_IS_VALID(iParam0->f_12))
	{
		iParam0->f_12 = SQUAD_GOAL_ADD_FOLLOW_TRAFFIC_CURVE(StackVal, 0, 4294967295, iParam0->f_152, iParam0->f_72, iVar0, iVar1);
		if (iParam0->f_116)
		{
			SQUAD_FOLLOW_TRAFFIC_CURVE_SET_BEHAVIOR_FLAG(StackVal, iParam0->f_12, 2, 0);
			SQUAD_FOLLOW_TRAFFIC_CURVE_SET_BEHAVIOR_FLAG(StackVal, iParam0->f_12, 1, 1);
		}
		else
		{
			SQUAD_FOLLOW_TRAFFIC_CURVE_SET_BEHAVIOR_FLAG(StackVal, iParam0->f_12, 2, 1);
			SQUAD_FOLLOW_TRAFFIC_CURVE_SET_BEHAVIOR_FLAG(StackVal, iParam0->f_12, 1, 0);
		}
		if (iParam0->f_84 != 2)
		{
			if (!iParam0->f_104)
			{
				iParam0->f_84 = 2;
			}
			else
			{
				SQUAD_FOLLOW_TRAFFIC_CURVE_SET_TASK_PRIORITY(StackVal, iParam0->f_12, iParam0->f_84);
			}
		}
		if (StackVal && !iParam0->f_112 != 2)
		{
			SQUAD_FOLLOW_TRAFFIC_CURVE_SET_BEHAVIOR_FLAG(StackVal, iParam0->f_12, 4, 1);
		}
		else
		{
			SQUAD_FOLLOW_TRAFFIC_CURVE_SET_BEHAVIOR_FLAG(StackVal, iParam0->f_12, 4, 0);
		}
		SQUAD_GOAL_ADD_FACTION_STATUS_WITHIN_GOAL(StackVal, 1, 0);
		SQUAD_GOAL_ADD_SHARE_PERCEPTION(StackVal, 1);
	}
	else
	{
		if (!SQUAD_FOLLOW_TRAFFIC_CURVE_IS_CURVE_ALREADY_IN_LIST(StackVal, iParam0->f_12, iParam0->f_152, iVar0, 0))
		{
			SQUAD_FOLLOW_TRAFFIC_CURVE_ENQUEUE_CURVE(StackVal, iParam0->f_12, iParam0->f_152, iVar0);
		}
		if (iParam0->f_116)
		{
			SQUAD_FOLLOW_TRAFFIC_CURVE_SET_BEHAVIOR_FLAG(StackVal, iParam0->f_12, 2, 0);
			SQUAD_FOLLOW_TRAFFIC_CURVE_SET_BEHAVIOR_FLAG(StackVal, iParam0->f_12, 1, 1);
		}
		else
		{
			SQUAD_FOLLOW_TRAFFIC_CURVE_SET_BEHAVIOR_FLAG(StackVal, iParam0->f_12, 2, 1);
			SQUAD_FOLLOW_TRAFFIC_CURVE_SET_BEHAVIOR_FLAG(StackVal, iParam0->f_12, 1, 0);
		}
	}
	return;
}

int Function_268(int iParam0) //Position: 0xC6F4 / 50932
{
	switch (iParam0)
	{
		case 0x00000002:
			return 64;
			break;
		
		case 0x00000001:
			return 96;
			break;
	}
	return 96;
}

int Function_269(int iParam0, int iParam1, int iParam2) //Position: 0xC71B / 50971
{
	bool bVar0;
	bool bVar1;
	
	if (!Function_12())
	{
		if (iParam2 != 0)
		{
			return iParam2;
		}
		bVar0 = RAND_INT_RANGE(1, 10000);
		iParam1 = iParam1;
		switch (iParam0)
		{
			case 0x00000001:
				if (bVar0 <= 5000)
				{
					return 2;
				}
				if (bVar0 <= 4000)
				{
					return 4;
				}
				return 3;
				break;
			
			case 0x00000003:
				if (bVar0 <= 5000)
				{
					return 1;
				}
				return 2;
				break;
			
			case 0x00000002:
				if (bVar0 <= 7500)
				{
					return 2;
				}
				return 4;
				break;
			
			default:
				LOG_ERROR("Unknown Traffic Type in WildSpeed");
				break;
		}
		return 2;
	}
	if (iParam2 != 0)
	{
		return iParam2;
	}
	bVar1 = RAND_INT_RANGE(1, 10000);
	iParam1 = iParam1;
	switch (iParam0)
	{
		case 0x00000001:
			if (bVar1 <= 9000)
			{
				return 4;
			}
			return 3;
			break;
		
		case 0x00000003:
			if (bVar1 <= 7500)
			{
				return 2;
			}
			return 4;
			break;
		
		case 0x00000002:
			if (bVar1 <= 7500)
			{
				return 2;
			}
			return 4;
			break;
		
		default:
			LOG_ERROR("Unknown Traffic Type in WildSpeed");
			break;
	}
	return 2;
}

void Function_270(vector3 vParam0) //Position: 0xC859 / 51289
{
	*uParam3 = vParam0.x;
	uParam3->f_4 = vParam0.y;
	uParam3->f_8 = vParam0.z;
}

void Function_271(bool bParam0, int iParam1) //Position: 0xC876 / 51318
{
	if (!Function_12())
	{
		Function_278(StackVal);
		if (Global_28842.f_80 != 0)
		{
			bParam0->f_72 = Global_28842.f_80;
			Function_277(StackVal, bParam0->f_72);
		}
		else if (Global_3403 || iParam1)
		{
			if (StackVal == 2)
			{
				bParam0->f_72 = 4;
			}
			else
			{
				bParam0->f_72 = 3;
			}
			Function_277(StackVal, bParam0->f_72);
			if (StackVal == 2)
			{
				Function_276(StackVal, 1);
			}
		}
		else if (StackVal || Function_245((Global_3404 || Function_274(131072))))
		{
			bParam0->f_72 = 4;
			Function_277(StackVal, bParam0->f_72);
			if (StackVal == 2)
			{
				Function_276(StackVal, 1);
			}
		}
		else if (bParam0->f_92)
		{
			bParam0->f_72 = Function_273(StackVal, bParam0->f_80);
			Function_277(StackVal, bParam0->f_72);
		}
		else if (bParam0->f_96)
		{
			bParam0->f_72 = Function_272(StackVal, bParam0->f_80);
			Function_277(StackVal, bParam0->f_72);
			if (StackVal == 2)
			{
				Function_276(StackVal, 0);
			}
		}
		else
		{
			bParam0->f_72 = bParam0->f_76;
			if (StackVal == 2)
			{
				Function_276(StackVal, 1);
			}
		}
	}
	else
	{
		Function_278(StackVal);
		if (Global_28842.f_80 != 0)
		{
			bParam0->f_72 = Global_28842.f_80;
			Function_277(StackVal, bParam0->f_72);
		}
		else if (StackVal || Function_245(Function_274(131072)))
		{
			bParam0->f_72 = 3;
			Function_277(StackVal, bParam0->f_72);
			if (StackVal == 2)
			{
				Function_276(StackVal, 1);
			}
		}
		else if (bParam0->f_92)
		{
			bParam0->f_72 = Function_273(StackVal, bParam0->f_80);
			Function_277(StackVal, bParam0->f_72);
		}
		else if (bParam0->f_96)
		{
			bParam0->f_72 = Function_272(StackVal, bParam0->f_80);
			Function_277(StackVal, bParam0->f_72);
			if (StackVal == 2)
			{
				Function_276(StackVal, 0);
			}
		}
		else
		{
			bParam0->f_72 = bParam0->f_76;
			if (StackVal == 2)
			{
				Function_276(StackVal, 1);
			}
		}
	}
	return;
}

int Function_272(bool bParam0, int iParam1) //Position: 0xCA5E / 51806
{
	bool bVar0;
	bool bVar1;
	
	if (!Function_12())
	{
		if (iParam1 != 0)
		{
			return iParam1;
		}
		bVar0 = RAND_INT_RANGE(1, 10000);
		switch (bParam0)
		{
			case 0x00000001:
				if (bVar0 <= 9000)
				{
					return 1;
				}
				return 2;
				break;
			
			case 0x00000002:
				return 1;
				break;
			
			default:
				LOG_ERROR("Unknown Traffic Type in TownSpeed");
				break;
		}
		return 1;
	}
	if (iParam1 != 0)
	{
		return iParam1;
	}
	bVar1 = RAND_INT_RANGE(1, 10000);
	switch (bParam0)
	{
		case 0x00000001:
			if (bVar1 <= 9000)
			{
				return 4;
			}
			return 3;
			break;
		
		case 0x00000002:
			if (bVar1 <= 9000)
			{
				return 2;
			}
			return 4;
			break;
		
		default:
			LOG_ERROR("Unknown Traffic Type in TownSpeed");
			break;
	}
	return 2;
}

int Function_273(int iParam0, bool bParam1) //Position: 0xCB4A / 52042
{
	if (!Function_12())
	{
		if (bParam1 != 0)
		{
			return bParam1;
		}
		switch (iParam0)
		{
			case 0x00000001:
			case 0x00000003:
				return 1;
				break;
			
			case 0x00000002:
				return 5;
				break;
			
			default:
				LOG_ERROR("Unknown Traffic Type in PlayerNearSpeed");
				break;
		}
		return 5;
	}
	if (bParam1 != 0)
	{
		return bParam1;
	}
	switch (iParam0)
	{
		case 0x00000001:
		case 0x00000003:
			return 4;
			break;
		
		case 0x00000002:
			return 2;
			break;
		
		default:
			LOG_ERROR("Unknown Traffic Type in PlayerNearSpeed");
			break;
	}
	return 2;
}

bool Function_274(int iParam0) //Position: 0xCC15 / 52245
{
	return Function_275(&Global_28842, iParam0);
}

int Function_275(var uParam0, int iParam1) //Position: 0xCC23 / 52259
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_276(bool bParam0, int iParam1) //Position: 0xCC3F / 52287
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		AI_SET_NAV_ACTOR_AVOIDANCE_ALLOW_TURNS(SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0), iParam1);
		bVar0++;
	}
	return;
}

void Function_277(bool bParam0, int iParam1) //Position: 0xCC67 / 52327
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		TASK_OVERRIDE_SET_MOVETYPE(SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0), iParam1);
		bVar0++;
	}
	return;
}

void Function_278(bool bParam0) //Position: 0xCC8F / 52367
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		TASK_OVERRIDE_CLEAR_MOVETYPE(SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0));
		bVar0++;
	}
	return;
}

bool Function_279(bool bParam0) //Position: 0xCCB5 / 52405
{
	return ((((StackVal && (StackVal && *bParam0 != 0.0f != 0.0f) != 0.0f) && bParam0->f_12 != 0.0f) && bParam0->f_16 != 0.0f) && bParam0->f_20 != 4294967295);
}

struct<24> Function_280(int iParam0, struct<6> Param1, bool bParam7, vector3 vParam8) //Position: 0xCCE3 / 52451
{
	bool bVar0;
	bool bVar6;
	struct<6> Var12;
	
	if (!IS_OBJECT_VALID(bParam7))
	{
		return StackVal, StackVal, StackVal, StackVal, StackVal, Var12;
	}
	iParam0->f_148 = Function_281(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, bParam7, Param1, vParam8);
	if (iParam0->f_148 >= 0)
	{
		GET_CURVE_POINT(bParam7, 1.0f, &Var12, 0);
		UNK_0x19D652F9(bParam7, 1.0f, &Param1, &bVar0);
		Function_282(&bVar0);
		Function_282(&Param1);
		*(iParam0 + 168) = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_282(&Param1), Function_282(&bVar0), StackVal) };
		*(iParam0 + 168) = { 0.0f, UNK_0x9C40E671(iParam0 + 168), 0.0f };
	}
	else
	{
		GET_CURVE_POINT(bParam7, 0.0f, &Var12, 0);
		UNK_0x19D652F9(bParam7, -1.0f, &Param1, &bVar6);
		Function_282(&bVar6);
		Function_282(&Param1);
		*(iParam0 + 168) = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_282(&Param1), Function_282(&bVar6), StackVal) };
		*(iParam0 + 168) = { 0.0f, UNK_0x9C40E671(iParam0 + 168), 0.0f };
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, Var12;
}

int Function_281(bool bParam0, bool bParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9) //Position: 0xCD81 / 52609
{
	bool bVar0;
	bool bVar6;
	vector3 vVar12;
	vector3 vVar15;
	float fVar18;
	float fVar19;
	
	UNK_0x19D652F9(bParam0, 1.0f, &bParam1, &bVar0);
	UNK_0x19D652F9(bParam0, -1.0f, &bParam1, &bVar6);
	Function_282(&bVar0);
	Function_282(&bParam1);
	vVar12 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_282(&bParam1), Function_282(&bVar0), StackVal) };
	fVar18 = VDOT(&uParam7, &vVar12);
	Function_282(&bVar6);
	Function_282(&bParam1);
	vVar15 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_282(&bParam1), Function_282(&bVar6), StackVal) };
	fVar19 = VDOT(&uParam7, &vVar15);
	if (fVar19 > fVar18)
	{
		return 1;
	}
	return 4294967295;
}

vector3 Function_282(bool bParam0) //Position: 0xCDDA / 52698
{
	vector3 vVar0;
	
	vVar0.x = *bParam0;
	vVar0.f_4 = StackVal;
	vVar0.f_8 = StackVal;
	return StackVal, StackVal, vVar0;
}

void Function_283(bool bParam0, int iParam1) //Position: 0xCDF9 / 52729
{
	struct<5> Var0;
	char* cVar6[16];
	struct<13> Var10;
	
	if (!Global_30900[1] && iParam1)
	{
		return;
	}
	if (!Function_255(bParam0))
	{
		return;
	}
	strcpy(&cVar6, "TRAFFIC NODE", 16);
	switch (bParam0->f_72)
	{
		case 0x00000005:
			Var10 = 1.0f;
			Var10.f_4 = 0.0f;
			Var10.f_8 = 0.0f;
			Var10.f_12 = 1.0f;
			break;
		
		case 0x00000001:
			Var10 = 0.9f;
			Var10.f_4 = 0.55f;
			Var10.f_8 = 0.1f;
			Var10.f_12 = 1.0f;
			break;
		
		case 0x00000002:
			Var10 = 0.9f;
			Var10.f_4 = 0.9f;
			Var10.f_8 = 0.1f;
			Var10.f_12 = 1.0f;
			break;
		
		case 0x00000004:
			Var10 = 0.2f;
			Var10.f_4 = 0.8f;
			Var10.f_8 = 0.1f;
			Var10.f_12 = 1.0f;
			break;
		
		case 0x00000003:
			Var10 = 0.1f;
			Var10.f_4 = 0.1f;
			Var10.f_8 = 1.0f;
			Var10.f_12 = 1.0f;
			break;
	}
	GET_POSITION(Function_265(StackVal), &Var0);
	vVar14 = { 0.0f, 1.0f, 0.0f };
	if (Function_24())
	{
		fVar17 = 0.0f;
		if (!Function_284(bParam0, &fVar17, 0))
		{
			if (fVar17 < 0.0f)
			{
				vVar14 = { 1.0f, 1.0f, 0.0f };
			}
			else
			{
				vVar14 = { 0.0f, 0.0f, 1.0f };
			}
		}
	}
	Var0.f_4 = (StackVal + 2.5f);
	Var0.f_4 = (StackVal + 1.0f);
	Var0.f_4 = (StackVal + 0.5f);
	switch (StackVal)
	{
		case 0x00000001:
			break;
		
		case 0x00000002:
			break;
	}
	Function_282(bParam0 + 24);
	vVar3 = { StackVal, StackVal, Function_282(bParam0 + 24) };
	return;
}

bool Function_284(bool bParam0, var uParam1, bool bParam2) //Position: 0xCF72 / 53106
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (StackVal || !SQUAD_IS_VALID(!Function_255(bParam0)))
	{
		*uParam1 = 0.0f;
		return 0;
	}
	bVar2 = true;
	iVar3 = SQUAD_GET_SIZE(StackVal);
	iVar4 = 0;
	bVar1 = false;
	while (bVar1 <= iVar3)
	{
		bVar0 = SQUAD_GET_ACTOR_BY_INDEX(StackVal, bVar1);
		if (IS_ACTOR_VALID(bVar0))
		{
			if (!NET_IS_OBJECT_LOCAL(bVar0))
			{
				iVar4++;
				bVar2 = false;
			}
		}
		bVar1++;
	}
	iVar5 = 0;
	if (!bParam2)
	{
		bVar1 = false;
		if (IS_OBJECTSET_VALID(bParam0->f_180))
		{
			iVar5 = GET_OBJECTSET_SIZE(bParam0->f_180);
			bVar1 = false;
			while (bVar1 <= iVar5)
			{
				bVar0 = GET_ACTOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar1, bParam0->f_180));
				if (IS_ACTOR_VALID(bVar0))
				{
					if (!NET_IS_OBJECT_LOCAL(bVar0))
					{
						iVar4++;
						bVar2 = false;
					}
				}
				bVar1++;
			}
		}
	}
	if (bVar2)
	{
		*uParam1 = 1.0f;
	}
	else if (iVar4 <= (iVar3 + iVar5))
	{
		*uParam1 = 0.5f;
	}
	else
	{
		*uParam1 = 0.0f;
	}
	return bVar2;
}

int Function_285(bool bParam0) //Position: 0xD058 / 53336
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

var Function_286(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0xD0A8 / 53416
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
			fVar3 = Function_204(bVar4, bParam1);
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

void Function_287(bool bParam0, bool bParam1, int iParam2, int iParam3) //Position: 0xD162 / 53602
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar2 = GET_OBJECT_FROM_SQUAD(bParam0);
	if (IS_OBJECT_VALID(bVar2))
	{
		bVar0 = false;
		while (bVar0 <= SQUAD_GET_SIZE(bParam0))
		{
			bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
			if (IS_ACTOR_VALID(bVar1))
			{
				SET_ACTOR_STAY_WITHIN_VOLUME(bVar1, bParam1, iParam2, iParam3);
			}
			bVar0++;
		}
	}
}

void Function_288(bool bParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0xD1B1 / 53681
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	if (!IS_ACTORSET_VALID(bParam1))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (iParam3 != 0 || (iParam3 != 1 && IS_ACTOR_HUMAN(bVar1)))
			{
				if (!IS_ACTOR_IN_ACTORSET(bParam1, bVar1))
				{
					ADD_ACTORSET_MEMBER(bParam1, bVar1);
				}
				if (bParam2)
				{
					SQUAD_LEAVE(bVar1);
				}
				else
				{
					bVar0++;
				}
			}
		}
		else
		{
			bVar0++;
		}
	}
}

void Function_289(bool bParam0) //Position: 0xD233 / 53811
{
	bool bVar0;
	
	if (IS_ACTORSET_VALID(bParam0))
	{
		bVar0 = false;
		bVar0 = false;
		while (bVar0 < (GET_ACTORSET_SIZE(bParam0) - 1))
		{
			if (IS_ACTOR_VALID(GET_ACTOR_FROM_ACTORSET(bParam0, bVar0)))
			{
				REMOVE_ACTORSET_MEMBER(bParam0, GET_ACTOR_FROM_ACTORSET(bParam0, bVar0));
			}
			bVar0++;
		}
	}
	return;
}

struct<32> Function_290(bool bParam0) //Position: 0xD279 / 53881
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_291("0", &cVar8, ""), 4);
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

struct<32> Function_291(char* cParam0, char* cParam1, char* cParam2) //Position: 0xD2E3 / 53987
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	stradd(&cVar0, cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_292(bool bParam0, bool bParam1) //Position: 0xD302 / 54018
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "matkdef_state", bParam1);
	return;
}

var Function_293(bool bParam0) //Position: 0xD323 / 54051
{
	return DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "matkdef_state");
}

int Function_294(bool bParam0) //Position: 0xD341 / 54081
{
	bool bVar0;
	bool bVar1;
	
	if (SQUAD_IS_VALID(bParam0))
	{
		bVar1 = false;
		while (bVar1 < (SQUAD_GET_SIZE(bParam0) - 1))
		{
			bVar0 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar1);
			if (IS_ACTOR_ALIVE(bVar0) && IS_ACTOR_VALID(GET_MOUNT(bVar0)))
			{
				return 0;
			}
			bVar1++;
		}
	}
	return 1;
}

bool Function_295(bool bParam0) //Position: 0xD384 / 54148
{
	if (SQUAD_IS_VALID(bParam0))
	{
		if (SQUAD_GET_SIZE(bParam0) >= 0)
		{
			return 0;
		}
	}
	return 0;
	return 1;
}

void Function_296(int iParam0) //Position: 0xD3A3 / 54179
{
	vector3 vVar0;
	vector3 vVar3;
	bool bVar6;
	bool bVar7;
	
	bVar7 = false;
	while (bVar7 < (SQUAD_GET_SIZE((iParam0 + 1256)->f_60) - 1))
	{
		bVar6 = SQUAD_GET_ACTOR_BY_INDEX((iParam0 + 1256)->f_60, bVar7);
		GET_OBJECT_POSITION(bVar6, &vVar3);
		GET_OBJECT_POSITION(iParam0->f_972, &vVar0);
		if (VDIST(vVar0, vVar3) > 8.0f)
		{
			TASK_CLEAR(bVar6);
		}
		bVar7++;
	}
	return;
}

void Function_297(bool bParam0) //Position: 0xD400 / 54272
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	float fVar5;
	int iVar6;
	bool bVar7;
	
	bVar0 = Function_302(bParam0 + 1256);
	fVar5 = 7.0f;
	iVar6 = 0;
	Function_205(bParam0->f_972);
	vVar2 = { StackVal, StackVal, Function_205(bParam0->f_972) };
	if (VDIST(Global_34574, vVar2) > 15.0f)
	{
		bParam0->f_1552 = 1;
	}
	else
	{
		bParam0->f_1552 = 0;
	}
	if (Function_301(bParam0))
	{
		bParam0->f_1556 = 1;
	}
	else
	{
		bParam0->f_1556 = 0;
	}
	if (Function_241(bParam0) == 0)
	{
		if (Function_234(bParam0 + 1540, fVar5))
		{
			if (bParam0->f_1552 == 1)
			{
				bVar7 = false;
				while (bVar7 < (SQUAD_GET_SIZE(bParam0->f_1212) - 1))
				{
					if (iVar6 == 0)
					{
						bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0->f_1212, bVar7);
						if (Function_298(bParam0, bVar1))
						{
							SAY_SINGLE_LINE_CONTEXT(bVar1, 301, Function_34(), 1, 0, 2, 4294967295, 4294967295, 0, 1);
							Function_210(bParam0 + 1540);
							iVar6 = 1;
						}
					}
					bVar7++;
				}
			}
			else if (bParam0->f_1556 == 1)
			{
				bVar7 = false;
				while (bVar7 < (SQUAD_GET_SIZE(bVar0) - 1))
				{
					if (iVar6 == 0)
					{
						bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bVar0, bVar7);
						if (Function_298(bParam0, bVar1))
						{
							SAY_SINGLE_LINE_CONTEXT(bVar1, 296, Function_34(), 1, 0, 2, 4294967295, 4294967295, 0, 1);
							Function_210(bParam0 + 1540);
							iVar6 = 1;
						}
					}
					bVar7++;
				}
			}
			else
			{
				Function_210(bParam0 + 1540);
			}
		}
	}
	return;
}

bool Function_298(bool bParam0, bool bParam1) //Position: 0xD535 / 54581
{
	bool bVar0;
	int iVar1;
	
	bVar0 = Function_302(bParam0 + 1256);
	iVar1 = Function_300(GET_OBJECT_FROM_ACTOR(bParam1));
	if (Function_299(bParam1, bParam0->f_1212, 1))
	{
		switch (iVar1)
		{
			case 0x0000008E:
			case 0x0000009B:
			case 0x000000E5:
			case 0x00000072:
			case 0x00000070:
			case 0x00000033:
			case 0x0000011C:
			case 0x0000011D:
			case 0x0000010B:
			case 0x00000115:
			case 0x00000130:
			case 0x00000022:
				return 1;
				break;
		}
	}
	else if (Function_299(bParam1, bVar0, 1))
	{
		switch (iVar1)
		{
			case 0x000001E1:
			case 0x000001E3:
			case 0x000001A0:
			case 0x00000191:
			case 0x00000193:
			case 0x0000019A:
			case 0x0000019B:
			case 0x000001D3:
			case 0x000001D4:
			case 0x000001D7:
			case 0x000001DA:
				return 1;
				break;
			}
	}
	return 0;
}

bool Function_299(bool bParam0, bool bParam1, bool bParam2) //Position: 0xD60E / 54798
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

var Function_300(bool bParam0) //Position: 0xD64E / 54862
{
	if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(bParam0)))
	{
		return GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bParam0));
	}
	return 4294967295;
}

bool Function_301(int iParam0) //Position: 0xD669 / 54889
{
	bool bVar0;
	vector3 vVar1;
	bool bVar4;
	int iVar5;
	
	iVar5 = 0;
	if (SQUAD_IS_VALID((iParam0 + 1256)->f_60))
	{
		iVar5 = SQUAD_GET_SIZE((iParam0 + 1256)->f_60);
		bVar4 = false;
		while (bVar4 <= iVar5)
		{
			bVar0 = SQUAD_GET_ACTOR_BY_INDEX((iParam0 + 1256)->f_60, bVar4);
			GET_POSITION(bVar0, &vVar1);
			if (VDIST(Global_34574, vVar1) > 15.0f)
			{
				return 1;
			}
			bVar4++;
		}
	}
	return 0;
}

var Function_302(int iParam0) //Position: 0xD6CB / 54987
{
	bool bVar0;
	
	if (!IS_LAYOUTREF_VALID(*iParam0))
	{
		return "";
	}
	bVar0 = CREATE_OBJECT_ITERATOR(*iParam0);
	if (!IS_ITERATOR_VALID(bVar0))
	{
		return "";
	}
	Function_303(&bVar0);
	ITERATE_ON_OBJECT_TYPE(bVar0, 25);
	ITERATE_ON_PARTIAL_NAME(bVar0, "atkSquad");
	iParam0->f_60 = GET_SQUAD_FROM_OBJECT(START_OBJECT_ITERATOR(bVar0));
	if (!SQUAD_IS_VALID(iParam0->f_60))
	{
	}
	if (IS_ITERATOR_VALID(bVar0))
	{
		DESTROY_ITERATOR(bVar0);
	}
	return iParam0->f_60;
}

int Function_303(bool bParam0) //Position: 0xD737 / 55095
{
	if (IS_ITERATOR_VALID(*bParam0))
	{
		ITERATE_EVERYWHERE(*bParam0);
		ITERATE_ON_PARTIAL_NAME(*bParam0, Function_38());
		ITERATE_ON_PARTIAL_MODEL_NAME(*bParam0, Function_38());
		ITERATE_ON_OBJECT_TYPE(*bParam0, 4294967295);
		return 1;
	}
	return 0;
}

int Function_304(int iParam0, bool bParam1, int iParam2) //Position: 0xD768 / 55144
{
	int iVar16;
	int iVar17;
	int iVar18;
	bool bVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	
	iVar17 = 0;
	iVar18 = 0;
	if (!IS_STRING_VALID(bParam1))
	{
		return 0;
	}
	if (STRING_LENGTH(bParam1) >= 14)
	{
		LOG_ERROR("PROCMISSION_ADD_HELP_TEXT: Invalid help text via length. Clearing.");
		return 0;
	}
	if (Function_86(iParam0->f_584, 32))
	{
		if (!Function_80(iParam0->f_624))
		{
			return 0;
		}
	}
	iVar20 = MAKE_TIME_OF_DAY_EX(0, 1, 0, 0);
	iVar21 = Function_307(Function_15(iParam0->f_624), Function_68(iParam0->f_624));
	iVar22 = Function_305(Function_15(iParam0->f_624), Function_68(iParam0->f_624));
	if (iVar22 == 0)
	{
		bVar19 = true;
	}
	else if (IS_LATER_THAN(iVar21, iVar20))
	{
		ADD_TIME(&iVar21, 5, 0, false, 0);
		if (IS_EARLIER_THAN(iVar21, GET_TIME_OF_DAY()))
		{
			bVar19 = true;
		}
	}
	else
	{
		bVar19 = true;
	}
	if (bVar19)
	{
		iVar16 = 0;
		while (iVar16 < 2)
		{
			if (!IS_STRING_VALID(iParam0 + 336[iVar164]))
			{
				iVar17 = iVar16;
				strcpy(iParam0 + 336[iVar174], bParam1, 16);
				iVar16 = 3;
			}
			iVar16++;
		}
		if (iVar17 <= 3)
		{
			strcpy(iParam0 + 336[iVar174], bParam1, 16);
			if (iParam2 == 1)
			{
				(*iParam0 + 388)[iVar17] = iParam2;
			}
			iVar18 = 1;
		}
		else
		{
			iVar18 = 0;
		}
	}
	else
	{
		iVar18 = 0;
	}
	return iVar18;
}

int Function_305(int iParam0, int iParam1) //Position: 0xD8C7 / 55495
{
	int iVar0;
	int iVar1;
	
	if (!Function_306(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 <= Global_13172)
	{
		if (Function_15(iVar1) != iParam0 && Function_68(iVar1) != iParam1)
		{
			iVar0 = (iVar0 + Global_13172[iVar111].f_12);
		}
		iVar1++;
	}
	return iVar0;
}

bool Function_306(int iParam0) //Position: 0xD913 / 55571
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_307(int iParam0, int iParam1) //Position: 0xD928 / 55592
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 <= Global_13172)
	{
		if (Function_15(iVar1) != iParam0 && Function_68(iVar1) != iParam1)
		{
			if (IS_LATER_THAN(Global_13172[iVar111].f_36, iVar0))
			{
				iVar0 = Global_13172[iVar111].f_36;
			}
		}
		iVar1++;
	}
	return iVar0;
}

void Function_308(int iParam0, vector3 vParam1) //Position: 0xD974 / 55668
{
	*(iParam0 + 16) = { StackVal, StackVal, vParam1 };
}

bool Function_309(bool bParam0, vector3 vParam1, bool bParam4) //Position: 0xD986 / 55686
{
	bool bVar0;
	bool bVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	var uVar5;
	
	bVar1 = 4294967295;
	fVar2 = -1.0f;
	if (!SQUAD_IS_VALID(bParam0))
	{
		return "";
	}
	uVar5 = SQUAD_GET_NOT_ELIMINATED_IMPAIRMENT_MASK(bParam0);
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar4 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (bParam4)
		{
			if (AI_IMPAIRMENT_MASK_MATCHES(uVar5, AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(bVar4)))
			{
				bVar4 = "";
			}
		}
		if (IS_ACTOR_VALID(bVar4) && IS_ACTOR_ALIVE(bVar4))
		{
			fVar3 = Function_310(StackVal, StackVal, bVar4, vParam1);
			if (fVar3 > fVar2 || bVar1 != 4294967295)
			{
				fVar2 = fVar3;
				bVar1 = bVar0;
			}
		}
		bVar0++;
	}
	if (bVar1 >= 4294967295)
	{
		return bVar4;
	}
	return "";
}

float Function_310(bool bParam0, vector3 vParam1) //Position: 0xDA1E / 55838
{
	vector3 vVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_311(bParam0);
		vVar0 = { StackVal, StackVal, Function_311(bParam0) };
		return VDIST(vVar0, vParam1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

vector3 Function_311(bool bParam0) //Position: 0xDA98 / 55960
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

void Function_312(bool bParam0, vector3 vParam1) //Position: 0xDB02 / 56066
{
	*(bParam0 + 4) = { StackVal, StackVal, vParam1 };
}

void Function_313(int iParam0) //Position: 0xDB14 / 56084
{
	if (IS_BLIP_VALID(iParam0->f_36))
	{
		REMOVE_BLIP(iParam0->f_36);
	}
	iParam0->f_40 = 4294967295;
	return;
}

void Function_314(int iParam0) //Position: 0xDB30 / 56112
{
	if (Function_86(iParam0->f_584, 4))
	{
		Function_317();
	}
	if (IS_BLIP_VALID(iParam0->f_36))
	{
		REMOVE_BLIP(iParam0->f_36);
	}
	Function_316(1);
	if (Function_86(iParam0->f_584, 32))
	{
		if (Function_14(iParam0->f_624))
		{
			Function_315(iParam0->f_624, 1);
		}
	}
	if (SQUAD_IS_VALID(iParam0->f_568))
	{
		Function_3(iParam0, 0);
	}
	Function_59(iParam0 + 584, 16);
	Global_3382 = 1;
	if (Function_86(iParam0->f_584, 64))
	{
		Global_13111 = 4294967295;
	}
	Function_142(iParam0, 1);
	return;
}

void Function_315(int iParam0, int iParam1) //Position: 0xDBB1 / 56241
{
	int iVar0;
	
	if (!Function_80(iParam0))
	{
		Function_16();
		return;
	}
	if (StackVal == 2)
	{
		return;
	}
	if (!StackVal != 1)
	{
		return;
	}
	iVar0 = Function_15(iParam0);
	Global_13172[iParam011].f_4 = 2;
	if (!Global_34165.f_36 && iParam1)
	{
		Function_25(1);
	}
	if (iVar0 == 1)
	{
		Global_6269 = Function_13(iParam0);
	}
	Global_3376 = 1;
	return;
}

void Function_316(int iParam0) //Position: 0xDC18 / 56344
{
	if (!Global_8717[iParam0])
	{
		Global_8717[iParam0] = 1;
		if (iParam0 == 1)
		{
			Global_8721 = GET_THIS_SCRIPT_ID();
		}
	}
	if (Function_83())
	{
		SET_HUD_MAP_DRAW_ENABLED_TIMED(0, 10.0f, 1);
	}
	return;
}

void Function_317() //Position: 0xDC4D / 56397
{
	if (Global_30921 == "")
	{
		Global_30921 = GET_THIS_SCRIPT_ID();
	}
	return;
}

void Function_318(int iParam0) //Position: 0xDC61 / 56417
{
	Function_319(&Global_28842, iParam0);
	return;
}

void Function_319(var uParam0, int iParam1) //Position: 0xDC6F / 56431
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	*uParam0 |= 1073741824;
	return;
}

var Function_320(vector3 vParam0, bool bParam3) //Position: 0xDC92 / 56466
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;
	
	bVar0 = false;
	bVar1 = 4294967295;
	bVar2 = -1.0f;
	if (Function_521(StackVal, StackVal, vParam0))
	{
		LOG_WARNING("Invalid test vector passed to GET_CLOSEST_SQUAD_MEMBER_TO_VECTOR");
		return "";
	}
	if (!SQUAD_IS_VALID(bParam3))
	{
		LOG_WARNING("Invalid squad passed to GET_CLOSEST_SQUAD_MEMBER_TO_VECTOR");
		return "";
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam3) - 1))
	{
		bVar3 = GET_OBJECT_FROM_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(bParam3, bVar0));
		GET_OBJECT_POSITION(bVar3, &vVar4);
		if (VDIST(vParam0, vVar4) > bVar2 || bVar2 > 0.0f)
		{
			bVar2 = VDIST(vParam0, vVar4);
			bVar1 = bVar0;
		}
		bVar0++;
	}
	if (bVar1 >= 4294967295)
	{
		return SQUAD_GET_ACTOR_BY_INDEX(bParam3, bVar1);
	}
	LOG_WARNING("Couldn't find a closest sqaud member from 'Them' to 'Me' in GET_CLOSEST_SQUAD_MEMBER_TO_VECTOR!");
	return "";
}

bool Function_321(int iParam0) //Position: 0xDE13 / 56851
{
	if (iParam0->f_920 == 0)
	{
		if (Function_323((iParam0 + 1256)->f_60, Global_34573, 1) && SQUAD_IS_VALID((iParam0 + 1256)->f_60))
		{
			Function_137(iParam0, 1);
			Function_136(iParam0, GET_ACTOR_ENUM_FACTION((*iParam0 + 1480)[0]));
			iParam0->f_920 = 1;
		}
		else if ((Function_323(iParam0->f_1212, Global_34573, 0) || Function_139(iParam0, Global_34573)) || iParam0->f_972 != GET_VEHICLE(Global_34573))
		{
			Function_137(iParam0, 2);
			Function_136(iParam0, GET_ACTOR_FACTION(Function_322(iParam0->f_1212)));
			iParam0->f_920 = 1;
		}
		if (iParam0->f_920)
		{
			SET_NPC_TO_NPC_DAMAGE_SCALE_FACTOR(0.05f);
		}
	}
	return iParam0->f_920;
}

var Function_322(bool bParam0) //Position: 0xDEB3 / 57011
{
	if (SQUAD_GET_SIZE(bParam0) >= 0)
	{
		return SQUAD_GET_ACTOR_BY_INDEX(bParam0, RAND_INT_RANGE(0, (SQUAD_GET_SIZE(bParam0) - 1)));
	}
	return "";
}

int Function_323(bool bParam0, bool bParam1, int iParam2) //Position: 0xDED5 / 57045
{
	bool bVar0;
	bool bVar1;
	
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
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (GET_LAST_ATTACKER(bVar1) == bParam1)
			{
				return 1;
			}
			if (iParam2 == 1)
			{
				if (IS_ACTOR_VALID(GET_MOUNT(bVar1)))
				{
					if (GET_LAST_ATTACKER(GET_MOUNT(bVar1)) == bParam1)
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

float Function_324(bool bParam0, bool bParam1) //Position: 0xDF47 / 57159
{
	vector3 vVar0;
	
	GET_ACTOR_VELOCITY(bParam0, &vVar0);
	if (bParam1)
	{
		vVar0.f_4 = 0.0f;
	}
	return VMAG(vVar0);
}

void Function_325(int iParam0) //Position: 0xDF66 / 57190
{
	Function_326(iParam0);
	return;
}

void Function_326(int iParam0) //Position: 0xDF71 / 57201
{
	if (IS_ACTORSET_VALID(iParam0->f_52))
	{
		DISBAND_ACTORSET(iParam0->f_52);
	}
	return;
}

bool Function_327(bool bParam0, bool bParam1, int iParam2) //Position: 0xDF89 / 57225
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

bool Function_328(bool bParam0, int iParam1, bool bParam2, int iParam3) //Position: 0xE09A / 57498
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

bool Function_329(bool bParam0) //Position: 0xE153 / 57683
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return 0;
	}
	if (SQUAD_GET_SIZE(bParam0) < 0)
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (!IS_ACTOR_DEAD(bVar1))
			{
				return 1;
			}
		}
		bVar0++;
	}
	return 0;
}

int Function_330(bool bParam0) //Position: 0xE1AA / 57770
{
	return Function_103(bParam0);
}

int Function_331(int iParam0) //Position: 0xE1B5 / 57781
{
	iParam0->f_616 = Function_333(iParam0);
	Function_332(iParam0);
	return iParam0->f_616;
}

void Function_332(int iParam0) //Position: 0xE1CF / 57807
{
	if (GET_DEBUG_DRAW_STATE())
	{
	}
	return;
}

var Function_333(int iParam0) //Position: 0xE1DB / 57819
{
	int iVar0;
	var uVar1[3];
	char* cVar5[64];
	int iVar21;
	
	iVar0 = 0;
	if (Function_348(0))
	{
		uVar1[0] = "Pass";
		uVar1[1] = "Fail";
		uVar1[2] = "Cancel";
		strcpy(&cVar5, "RDR PROCMISSION MENU - ", 64);
		stradd(&cVar5, GET_SHORT_SCRIPT_NAME(), 64);
		iVar21 = Function_334(iParam0 + 588, &uVar1, &cVar5, GET_DEBUG_PADINDEX(), 0);
		if (iVar21 == 0)
		{
			Function_119();
			iVar0 = 2;
		}
		else if (iVar21 == 1)
		{
			Function_119();
			iVar0 = 3;
		}
		else if (iVar21 == 2)
		{
			Function_119();
			iVar0 = 4;
		}
		else
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

var Function_334(var uParam0, var uParam1, char* cParam2, var uParam3, int iParam4) //Position: 0xE27F / 57983
{
	struct<33> Var0;
	
	if ((Global_62478 || Global_62479) || Global_62480)
	{
		return 4294967295;
	}
	SET_SCRIPT_AVOIDS_STRINGTABLE(1);
	uParam0->f_12 = uParam3;
	uParam0->f_16 = iParam4;
	Function_347(&Var15, &Var0);
	uVar20 = Function_346(*uParam1, &Var15);
	Function_345(cParam2, 1.0f, 1.0f, 1.0f, 1.0f);
	Function_344(uParam0, uVar20);
	Function_342(StackVal, uParam0, Var15.f_12);
	Function_340(StackVal, uParam0, Var15.f_12);
	iVar21 = Function_339(*uParam1, uParam0, &Var15);
	while (!Var15.f_16 && iVar21 > *uParam1)
	{
		strcpy(&Var0, (*uParam1)[iVar21], 32);
		if (Function_336(&Var15, &Var0, uParam0, 9, 6, 28, 4294967295))
		{
			SET_SCRIPT_AVOIDS_STRINGTABLE(0);
			GRINGO_DEBUG_CHECK_SOUND(1);
			return iVar21;
		}
		iVar21++;
	}
	Function_335(StackVal, Var0.f_32, Var15.f_12);
	SET_SCRIPT_AVOIDS_STRINGTABLE(0);
	return 4294967295;
}

void Function_335(int iParam0, int iParam1, int iParam2) //Position: 0xE346 / 58182
{
	char* cVar0;
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
			cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar3);
			if (GUI_WINDOW_VALID(cVar0))
			{
				GUI_SET_TEXT(cVar0, " ");
			}
			bVar1++;
		}
	}
	return;
}

bool Function_336(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, int iParam5, int iParam6) //Position: 0xE3A2 / 58274
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
				Function_338(bParam1->f_32, bParam1->f_36, bParam1->f_40, &cVar0, bParam1->f_44, bParam1->f_48, bParam1->f_52, 1.0f, bParam1->f_56, 1);
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
			Function_338(bParam1->f_32, bParam1->f_36, bParam1->f_40, bParam1, bParam1->f_44, bParam1->f_48, bParam1->f_52, 1.0f, bParam1->f_56, 1);
			bParam1->f_32++;
			*uParam0++;
			bParam1->f_40 = (StackVal + ((bParam1->f_40 / IntToFloat(375.0f)) * (bParam1->f_56 / 1.5f)));
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
				Function_335(StackVal, bParam1->f_32, uParam0->f_12);
				return 0;
			}
		}
		Function_337(bParam1->f_32);
	}
	else
	{
		Function_337(bParam1->f_32);
	}
	return 0;
}

void Function_337(bool bParam0) //Position: 0xE528 / 58664
{
	char* cVar0;
	char* cVar1[16];
	
	strcpy(&cVar1, "DB_MENU_", 16);
	stradd(&cVar1, I2STR(bParam0), 16);
	cVar0 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar1);
	if (GUI_WINDOW_VALID(cVar0))
	{
		GUI_SET_TEXT(cVar0, " ");
	}
	return;
}

void Function_338(bool bParam0, var uParam1, var uParam2, char* cParam3, var uParam4, var uParam5, var uParam6, float fParam7, float fParam8, bool bParam9) //Position: 0xE562 / 58722
{
	struct<13> Var0;
	char* cVar13[64];
	
	strcpy(&cVar9, "DB_MENU_", 16);
	stradd(&cVar9, I2STR(bParam0), 16);
	cVar4 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar9);
	if (!GUI_WINDOW_VALID(cVar4))
	{
		Var0 = uParam1;
		Var0.f_4 = uParam2;
		Var0.f_8 = (Var0 + (500.0f * fParam8));
		Var0.f_12 = (StackVal + (55.0f * fParam8));
		cVar4 = GUI_MAKE_TEXT(Global_13043, &Var0, &cVar9, "nberrylium", fParam8);
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
	GUI_SET_TEXT(cVar4, &cVar13);
	GUI_SET_TEXT_COLOR(cVar4, &Var5);
}

var Function_339(int iParam0, var uParam1, int iParam2) //Position: 0xE610 / 58896
{
	int iVar0;
	
	iVar0 = (StackVal * (uParam1->f_20 * iParam2->f_12) + 1);
	if (iVar0 >= iParam0)
	{
		iVar0 = 0;
	}
	return iVar0;
}

void Function_340(var uParam0, int iParam1, int iParam2) //Position: 0xE634 / 58932
{
	switch (Function_341())
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

int Function_341() //Position: 0xE6D0 / 59088
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

void Function_342(var uParam0, int iParam1, int iParam2) //Position: 0xE70C / 59148
{
	switch (Function_343(uParam0))
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

int Function_343(int iParam0) //Position: 0xE7A4 / 59300
{
	float fVar0;
	float fVar1;
	
	fVar0 = (GET_STICK_Y(GET_PLAYER_PADINDEX(Function_34()), 0, 1) + GET_STICK_Y(GET_DEBUG_PADINDEX(), 0, 1));
	if ((fVar0 >= -0.75f || IS_BUTTON_PRESSED(iParam0->f_12, 12, 1, 0)) || IS_BUTTON_PRESSED(iParam0->f_16, 12, 1, 0))
	{
		if (!Function_86(*iParam0, 0x40000000))
		{
			Function_59(iParam0, 0x40000000);
			return 1;
		}
	}
	if ((fVar0 <= 0.75f || IS_BUTTON_PRESSED(iParam0->f_12, 14, 1, 0)) || IS_BUTTON_PRESSED(iParam0->f_16, 14, 1, 0))
	{
		if (!Function_86(*iParam0, 0x40000000))
		{
			Function_59(iParam0, 0x40000000);
			return 2;
		}
	}
	Function_26(iParam0, 0x40000000);
	fVar1 = (GET_STICK_X(GET_PLAYER_PADINDEX(Function_34()), 0, 1) + GET_STICK_X(GET_DEBUG_PADINDEX(), 0, 1));
	if ((fVar1 >= -0.75f || IS_BUTTON_PRESSED(iParam0->f_12, 15, 1, 0)) || IS_BUTTON_PRESSED(iParam0->f_16, 15, 1, 0))
	{
		if (!Function_86(*iParam0, 0x20000000))
		{
			Function_59(iParam0, 0x20000000);
			return 3;
		}
	}
	if ((fVar1 <= 0.75f || IS_BUTTON_PRESSED(iParam0->f_12, 13, 1, 0)) || IS_BUTTON_PRESSED(iParam0->f_16, 13, 1, 0))
	{
		if (!Function_86(*iParam0, 0x20000000))
		{
			Function_59(iParam0, 0x20000000);
			return 4;
		}
	}
	Function_26(iParam0, 0x20000000);
	return 0;
}

var Function_344(var uParam0, int iParam1) //Position: 0xE8EF / 59631
{
	int iVar0;
	
	iVar0 = uParam0->f_20;
	if (iVar0 != 0 && iParam1 != 0)
	{
		return iVar0;
	}
	if (iVar0 < 0 && iVar0 > iParam1)
	{
		DRAW_STRING_CURRENT_FONT(0.1f, 0.9f, "Previous Page<-Dpad->Next Page", 1.0f, 1.0f, 1.0f, 1.0f);
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
		DRAW_STRING_CURRENT_FONT(0.1f, 0.9f, "Previous Page<-Dpad", 1.0f, 1.0f, 1.0f, 1.0f);
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
		DRAW_STRING_CURRENT_FONT(0.1f, 0.9f, "Dpad->Next Page", 1.0f, 1.0f, 1.0f, 1.0f);
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

void Function_345(char* cParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xEA3E / 59966
{
	struct<13> Var0;
	
	strcpy(&cVar9, "DB_MENU_TITLE", 16);
	cVar4 = GUI_WINDOWS_WITH_VALUES(Global_13043, &cVar9);
	if (!GUI_WINDOW_VALID(cVar4))
	{
		Var0 = 0.0f;
		Var0.f_4 = 50.0f;
		Var0.f_8 = 1280.0f;
		Var0.f_12 = 150.0f;
		cVar4 = GUI_MAKE_TEXT(Global_13043, &Var0, &cVar9, "nberrylium", 2.0f);
	}
	Var5 = uParam1;
	Var5.f_4 = uParam2;
	Var5.f_8 = uParam3;
	Var5.f_12 = uParam4;
	GUI_SET_TEXT(cVar4, cParam0);
	GUI_SET_TEXT_COLOR(cVar4, &Var5);
	GUI_SET_TEXT_JUSTIFY(cVar4, 1);
}

var Function_346(int iParam0, int iParam1) //Position: 0xEAD1 / 60113
{
	int iVar0;
	int iVar1;
	
	iVar0 = (StackVal / iParam0);
	iVar1 = (iVar0 / iParam1->f_12);
	return iVar1;
}

void Function_347(var uParam0, int iParam1) //Position: 0xEAEB / 60139
{
	iParam1->f_36 = 100.0f;
	iParam1->f_40 = 110.0f;
	iParam1->f_44 = 1.0f;
	iParam1->f_48 = 1.0f;
	iParam1->f_52 = 1.0f;
	iParam1->f_56 = 1.6f;
	iParam1->f_32 = 0;
	uParam0->f_16 = 0;
	uParam0->f_4 = 10;
	uParam0->f_12 = 3;
	*uParam0 = 0;
	uParam0->f_8 = 0;
	return;
}

bool Function_348(int iParam0) //Position: 0xEB39 / 60217
{
	if (!Function_349(iParam0))
	{
		return 0;
	}
	return Global_30920;
}

bool Function_349(bool bParam0) //Position: 0xEB4D / 60237
{
	if (bParam0 && !IS_SCRIPT_VALID(Global_30921))
	{
		return 1;
	}
	if (GET_THIS_SCRIPT_ID() == Global_30921)
	{
		return 1;
	}
	return 0;
}

void Function_350(vector3 vParam0, var uParam3, int iParam4, bool bParam5, int iParam6, int iParam7, bool bParam8) //Position: 0xEB71 / 60273
{
	int iVar0;
	
	iVar0 = 0;
	if (!*uParam3)
	{
		iVar0 = 1;
	}
	if (IS_ACTOR_VALID(bParam5))
	{
		if (CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), bParam5, 1.0f, iParam7, 1, 1, 0))
		{
			if (iParam6 != 0)
			{
				Global_25265 = (GET_CURRENT_GAME_TIME() + IntToFloat(iParam6));
			}
			*uParam3 = 1;
		}
	}
	else if (!Function_521(StackVal, StackVal, vParam0))
	{
		if (CAMERA_IS_VISIBLE_POINT(GET_GAME_CAMERA(), vParam0, 1.0f, iParam7, 1, 1, 0))
		{
			if (iParam6 != 0)
			{
				Global_25265 = (GET_CURRENT_GAME_TIME() + IntToFloat(iParam6));
			}
			*uParam3 = 1;
		}
	}
	if (*uParam3 && iVar0)
	{
		if (StackVal & 64 == 64)
		{
			Function_361(0);
		}
		if (StackVal & 2048 == 2048)
		{
			Function_360(0);
		}
		if (bParam8)
		{
			Function_358(0, GET_THIS_SCRIPT_ID());
			Global_3373 = GET_THIS_SCRIPT_ID();
			Function_356(iParam4);
			Global_3401 = 1;
		}
		Function_354(iParam4);
		if (Function_353(StackVal, 32768))
		{
			Function_351(1);
		}
		Global_16876[iParam46].f_12++;
		Function_71(408, 1, 0, 0);
	}
}

void Function_351(bool bParam0) //Position: 0xEC78 / 60536
{
	if (bParam0)
	{
		Function_352(0x10000000);
	}
	else
	{
		Function_85(0x10000000);
	}
	Global_26316.f_172 = 0;
	return;
}

void Function_352(int iParam0) //Position: 0xEC9C / 60572
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

bool Function_353(var uParam0, int iParam1) //Position: 0xECAF / 60591
{
	return (uParam0 && iParam1) == 0;
}

void Function_354(int iParam0) //Position: 0xECBC / 60604
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	if (!Function_86(StackVal, 524288))
	{
		if (Global_16876[iParam06].f_16 < 0 && Global_16876[iParam06].f_16 > 2)
		{
			iVar0 = 10;
		}
		else if (Global_16876[iParam06].f_16 <= 2 && Global_16876[iParam06].f_16 > 4)
		{
			iVar0 = 16;
		}
		else if (Global_16876[iParam06].f_16 > 4)
		{
			iVar0 = 24;
		}
		if (iVar0 >= 0)
		{
			bVar1 = Function_355(iVar0 * 60);
			ADD_TIME(&Global_17483[iParam075] + 264, 0, 0, bVar1, 0);
			Global_16876[iParam06] = Global_17483[iParam075].f_264;
		}
	}
	return;
}

int Function_355(int iParam0) //Position: 0xED60 / 60768
{
	return CEIL(((IntToFloat(iParam0) * Global_63398) / 60.0f));
}

void Function_356(int iParam0) //Position: 0xED76 / 60790
{
	struct<77> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	if (Global_30842[16])
	{
		PRINTNL();
		PRINTSTRING("SAVE_BEAT_STATE: ");
		PRINTSTRING(GET_ASSET_NAME(Global_17483[iParam075].f_96, 4));
		PRINTNL();
		PRINTSTRING("curIDX: ");
		PRINTINT(Var0.f_76);
		PRINTNL();
	}
	Function_357(&Var0 + 80[Var0.f_763], &(Global_16876[iParam06]), iParam0);
	if (Var0.f_76 == 2)
	{
		Var0.f_76 = 0;
	}
	else
	{
		Var0.f_76++;
	}
	STORE_GAME_STATE(&Var0, 44, 1);
	return;
}

void Function_357(var uParam0, var uParam1, int iParam2) //Position: 0xEE14 / 60948
{
	uParam0->f_4 = iParam2;
	*uParam0 = uParam1->f_12;
	uParam0->f_8 = 1;
	return;
}

void Function_358(int iParam0, int iParam1) //Position: 0xEE2C / 60972
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
			Function_359(&(Global_25267[iVar058]));
		}
		iVar0++;
	}
	return;
}

void Function_359(int iParam0) //Position: 0xEEAE / 61102
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

void Function_360(int iParam0) //Position: 0xEEFC / 61180
{
	Global_12976.f_76 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 76, 0, 0, (iParam0 + Function_355(900)), 0);
	return;
}

void Function_361(int iParam0) //Position: 0xEF1E / 61214
{
	Global_12976.f_20 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 20, 0, 0, (iParam0 + Function_355(200)), 0);
	return;
}

vector3 Function_362() //Position: 0xEF3F / 61247
{
	return 0.0f, 0.0f, 0.0f;
}

int Function_363(int iParam0) //Position: 0xEF48 / 61256
{
	if (iParam0->f_900 == 0)
	{
		LOG_ERROR("Cannot launch matkdef without MATKDEF_INIT_MATKDEF being called");
	}
	if (!SQUAD_IS_VALID((iParam0 + 1256)->f_60))
	{
		(iParam0 + 1256)->f_60 = Function_367(iParam0->f_832, "DECOR_ATTACKSQUAD");
		Function_366((iParam0 + 1256)->f_60, 39, 0.0f);
	}
	Function_365(iParam0, 1);
	Function_364(iParam0, 1);
	Function_318(4);
	Function_210(iParam0 + 1540);
	iParam0->f_904 = 1;
	return 1;
}

void Function_364(int iParam0, int iParam1) //Position: 0xEFF9 / 61433
{
	if (iParam1 == 1)
	{
		Function_59(iParam0 + 584, 64);
	}
	else
	{
		Function_26(iParam0 + 584, 64);
	}
	return;
}

void Function_365(int iParam0, int iParam1) //Position: 0xF01C / 61468
{
	if (iParam1 == 1)
	{
		Function_59(iParam0 + 584, 4096);
	}
	else
	{
		Function_26(iParam0 + 584, 4096);
	}
	return;
}

void Function_366(bool bParam0, bool bParam1, int iParam2) //Position: 0xF041 / 61505
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
					GIVE_WEAPON_TO_ACTOR(bVar1, bParam1, iParam2, 1, 1);
				}
			}
		}
		bVar0++;
	}
	return;
}

var Function_367(bool bParam0, bool bParam1) //Position: 0xF08D / 61581
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar1 = "";
	if (!IS_LAYOUTREF_VALID(bParam0))
	{
		return "";
	}
	bVar0 = CREATE_OBJECT_ITERATOR(bParam0);
	if (!IS_ITERATOR_VALID(bVar0))
	{
		return "";
	}
	Function_303(&bVar0);
	ITERATE_ON_OBJECT_TYPE(bVar0, 25);
	bVar2 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar2))
	{
		if (DECOR_GET_BOOL(bVar2, bParam1))
		{
			bVar1 = GET_SQUAD_FROM_OBJECT(bVar2);
			if (SQUAD_IS_VALID(bVar1))
			{
			}
		}
		bVar2 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	if (IS_ITERATOR_VALID(bVar0))
	{
		DESTROY_ITERATOR(bVar0);
	}
	return bVar1;
}

float Function_368(bool bParam0) //Position: 0xF104 / 61700
{
	var uVar0;
	float fVar1;
	
	if (!bParam0)
	{
		Function_369(&uVar0, &fVar1);
		if (fVar1 < 60.0f)
		{
			return (fVar1 + 20.0f);
		}
		return (fVar1 + 10.0f);
	}
	return (190.0f + 20.0f);
}

void Function_369(float fParam0, int iParam1) //Position: 0xF13F / 61759
{
	vector3 vVar0;
	
	if (Global_3386 && !Global_3403)
	{
		*fParam0 = 65.0f;
		*iParam1 = 95.0f;
	}
	else if ((!IS_ACTOR_RIDING(GET_PLAYER_ACTOR(0)) && !IS_ACTOR_RIDING_VEHICLE(GET_PLAYER_ACTOR(0))) && !Global_3403)
	{
		*fParam0 = 115.0f;
		*iParam1 = 170.0f;
	}
	else
	{
		GET_ACTOR_VELOCITY(GET_PLAYER_ACTOR(0), &vVar0);
		if (VMAG(vVar0) > 5.0f)
		{
			*fParam0 = 130.0f;
			*iParam1 = 190.0f;
		}
		else
		{
			*fParam0 = 130.0f;
			*iParam1 = 190.0f;
		}
	}
	return;
}

int Function_370(bool bParam0, int iParam1) //Position: 0xF1C8 / 61896
{
	struct<2> Var0;
	vector3 vVar2;
	bool bVar5;
	bool bVar6;
	
	if (!bParam0->f_632 != iParam1)
	{
		switch (iParam1)
		{
			case 0x00000001:
				Function_210(bParam0 + 856);
				Function_210(bParam0 + 868);
				Function_210(bParam0 + 1540);
				break;
			
			case 0x00000002:
				Function_210(bParam0 + 868);
				if (Function_239(bParam0) == 1)
				{
					Function_240(bParam0, 1);
					Function_238(bParam0, "pm_mad_killb", 1);
				}
				else
				{
					Function_240(bParam0, 1);
					Function_238(bParam0, "pm_mad_killt", 1);
				}
				Function_374(bParam0);
				break;
			
			case 0x00000003:
				Function_373(7.0f, 10);
				Var0 = { StackVal, Function_373(7.0f, 10) };
				bVar6 = false;
				while (bVar6 < (SQUAD_GET_SIZE((bParam0 + 1256)->f_60) - 1))
				{
					bVar5 = SQUAD_GET_ACTOR_BY_INDEX((bParam0 + 1256)->f_60, bVar6);
					if (IS_ACTOR_ALIVE(bVar5))
					{
						Function_371(&Var0, bVar6 + 2);
						vVar2 = { StackVal, StackVal, Function_371(&Var0, bVar6 + 2) };
						TASK_FOLLOW_AND_ATTACK_OBJECT(bVar5, GET_OBJECT_FROM_ACTOR(bParam0->f_972), &vVar2, 0, 0, 0, 0, 0, 1);
					}
					bVar6++;
				}
				Function_374(bParam0);
				break;
			
			case 0x00000004:
				Function_210(bParam0 + 980);
				break;
			
			case 0x00000005:
				Function_240(bParam0, 1);
				Function_238(&Local_23, "pm_mad_end", 1);
				Function_216(&Local_23, 0, 0);
				break;
			
			case 0x00000007:
				Function_240(bParam0, 1);
				if (Function_239(bParam0) == 1)
				{
					Function_238(bParam0, "pm_mad_esc1", 1);
				}
				else
				{
					Function_238(bParam0, "pm_mad_esc2", 1);
				}
				iLocal_413 = 3;
				break;
			
			case 0x00000006:
				Function_101(bParam0, 0);
				if (bParam0->f_632 >= 3)
				{
					Function_240(bParam0, 1);
					Function_238(bParam0, "pm_mad_vd2", 1);
					Function_216(&Local_23, 0, 0);
				}
				iLocal_413 = 3;
				break;
			
			case 0x0000000B:
			case 0x00000008:
				iLocal_413 = 2;
				iLocal_21 = 5;
				break;
			
			case 0x0000000C:
			case 0x00000009:
				iLocal_413 = 3;
				iLocal_21 = 5;
				break;
			
			case 0x0000000A:
				iLocal_413 = 4;
				iLocal_21 = 5;
				break;
		}
		bParam0->f_632 = iParam1;
	}
	Function_504(bParam0, 0);
	return 1;
}

vector3 Function_371(var uParam0, bool bParam1) //Position: 0xF3D7 / 62423
{
	vector3 vVar0;
	
	if (!Function_372(uParam0))
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

bool Function_372(int iParam0) //Position: 0xF518 / 62744
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

struct<8> Function_373(var uParam0, int iParam1) //Position: 0xF53A / 62778
{
	struct<2> Var0;
	
	Var0.f_4 = uParam0;
	Var0 = Global_26121[iParam1];
	return StackVal, Var0;
}

void Function_374(int iParam0) //Position: 0xF553 / 62803
{
	Function_375(iParam0->f_1212, iParam0->f_1212, 0);
	Function_375((iParam0 + 1256)->f_60, (iParam0 + 1256)->f_60, 0);
	Function_375(iParam0->f_1212, (iParam0 + 1256)->f_60, 4);
	if (Function_239(iParam0) == 0)
	{
		Function_135(iParam0->f_1212, Global_34573, 2);
		Function_135((iParam0 + 1256)->f_60, Global_34573, 2);
	}
	else if (Function_239(iParam0) == 1)
	{
		Function_135(iParam0->f_1212, Global_34573, 5);
		Function_135((iParam0 + 1256)->f_60, Global_34573, 4);
	}
	else if (Function_239(iParam0) == 2)
	{
		Function_135(iParam0->f_1212, Global_34573, 4);
		Function_135((iParam0 + 1256)->f_60, Global_34573, 5);
	}
	return;
}

void Function_375(bool bParam0, bool bParam1, int iParam2) //Position: 0xF5F8 / 62968
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return;
	}
	if (!SQUAD_IS_VALID(bParam1))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			Function_135(bParam1, bVar1, iParam2);
		}
		bVar0++;
	}
	return;
}

bool Function_376(bool bParam0) //Position: 0xF644 / 63044
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	var uVar5;
	
	Function_137(bParam0, 0);
	bParam0->f_632 = 0;
	bParam0->f_900 = 1;
	bParam0->f_904 = 0;
	bParam0->f_896 = 0;
	bParam0->f_916 = 1;
	bParam0->f_920 = 0;
	if (bParam0->f_976 == 0)
	{
		bParam0->f_976 = 1177;
	}
	bParam0->f_992 = 0;
	bParam0->f_996 = 0;
	bParam0->f_1212 = "";
	bParam0->f_1244 = 0;
	(bParam0 + 1256)->f_60 = "";
	bParam0->f_1512 = 0;
	bParam0->f_1516 = 0;
	bParam0->f_1524 = 0;
	if (bParam0->f_1528 < 0)
	{
		bParam0->f_1528 = 4;
	}
	bParam0->f_1536 = 0;
	bParam0->f_1552 = 0;
	bParam0->f_1556 = 0;
	Function_463(bParam0);
	Function_462(bParam0);
	Function_461(bParam0 + 1256, bParam0->f_832);
	SET_NPC_TO_NPC_DAMAGE_SCALE_FACTOR(0.0f);
	if (!Function_389(bParam0))
	{
		return 0;
	}
	(bParam0 + 1000)->f_4 = 2;
	(bParam0 + 1000)->f_8 = bParam0->f_1212;
	(bParam0 + 1000)->f_72 = 4;
	(bParam0 + 1000)->f_108 = 1;
	bParam0->f_1196 = Function_384(0x442f0000);
	bVar1 = Function_383(bParam0->f_1196);
	GET_OBJECT_POSITION(bVar1, bParam0 + 1200);
	GET_OBJECT_POSITION(bParam0->f_972, &vVar2);
	bVar0 = CREATE_OBJECTSET_IN_LAYOUT("scoachoset", bParam0->f_832, 36, 1);
	if (FIND_TRAFFIC_PATH(bParam0->f_832, bVar0, &vVar2, bParam0 + 1200, 16, &uVar5))
	{
		(bParam0 + 1000)->f_48 = bVar0;
	}
	Function_382(StackVal, StackVal, bParam0 + 1000, *(bParam0 + 1200));
	Function_277(bParam0->f_1212, 4);
	Function_377(StackVal, StackVal, bParam0 + 1000, vVar2, 16, 0.0f, 30.0f, 1, 1);
	Function_244(bParam0 + 1000, 0, 0, 0);
	return 1;
}

void Function_377(int iParam0, vector3 vParam1, int iParam4, float fParam5, float fParam6, var uParam7, bool bParam8) //Position: 0xF7CC / 63436
{
	bool bVar0;
	float fVar1;
	float fVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	
	fVar1 = fParam6;
	fVar2 = fParam5;
	while (!bVar0)
	{
		bVar3 = START_CURVE_QUERY(Global_28841, vParam1, uParam4, fVar2, fVar1, Function_249(5.0f, ((fParam5 + fParam6) / 2.0f)), 0);
		bVar5 = false;
		if (IS_OBJECTSET_VALID(iParam0->f_48))
		{
			bVar5 = false;
			while (bVar5 <= GET_NUM_CURVES_IN_CURVE_QUERY(bVar3))
			{
				bVar6 = GET_CURVE_FROM_CURVE_INDEX_IN_CURVE_QUERY(bVar3, bVar5);
				if (!IS_OBJECT_IN_OBJECTSET(bVar6, iParam0->f_48))
				{
					REMOVE_CURVE_FROM_CURVE_QUERY_USING_CURVE(bVar3, bVar6);
				}
				bVar5++;
			}
		}
		if (!GET_NUM_POINTS_IN_CURVE_QUERY(bVar3) < 0)
		{
			UNK_0xDF93BD7C(bVar3);
			if (bParam8)
			{
				fVar2 = fVar1;
				fVar1 = (fVar1 + 50.0f);
			}
			else
			{
				return;
			}
		}
		bVar4 = Function_380(StackVal, StackVal, bVar3, vParam1, -1.0f, uParam7);
		if (bVar4 == 4294967295)
		{
			UNK_0xDF93BD7C(bVar3);
			if (bParam8)
			{
				fVar2 = fVar1;
				fVar1 = (fVar1 + fVar1);
			}
			else
			{
				return;
			}
		}
		bVar0 = true;
	}
	GET_POINT_FROM_CURVE_QUERY(bVar3, bVar4, iParam0 + 24);
	iParam0->f_152 = GET_CURVE_FROM_POINT_INDEX_IN_CURVE_QUERY(bVar3, bVar4);
	Function_378(iParam0);
	Function_253(iParam0);
	UNK_0xDF93BD7C(bVar3);
}

void Function_378(var uParam0) //Position: 0xF8CA / 63690
{
	struct<2> Var0;
	
	if (!SQUAD_IS_VALID(StackVal))
	{
		Function_379();
		Var0 = { StackVal, Function_379() };
		uParam0->f_8 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Global_28841, &Var0));
	}
	*uParam0 = 1;
	return;
}

struct<8> Function_379() //Position: 0xF8F5 / 63733
{
	char* cVar0[8];
	
	strcpy(&cVar0, "", 8);
	straddi(&cVar0, RAND_INT_RANGE(0, 9), 8);
	straddi(&cVar0, RAND_INT_RANGE(0, 9), 8);
	straddi(&cVar0, RAND_INT_RANGE(0, 9), 8);
	straddi(&cVar0, RAND_INT_RANGE(0, 9), 8);
	straddi(&cVar0, RAND_INT_RANGE(0, 9), 8);
	straddi(&cVar0, RAND_INT_RANGE(0, 9), 8);
	straddi(&cVar0, RAND_INT_RANGE(0, 9), 8);
	return StackVal, cVar0;
}

var Function_380(bool bParam0, vector3 vParam1, float fParam4, int iParam5) //Position: 0xF94C / 63820
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
			while ((StackVal || !(StackVal || FABS(((Function_381(&Var3) || !bVar9) - fParam4 != -1.0f)) > fParam4)) && iVar1 > 10)
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
				Function_282(&Var3);
				bVar11 = VDIST(Function_282(&Var3), vParam1);
				if (StackVal && (StackVal || FABS((((bVar11 > bVar10 && !Function_381(&Var3)) && !Function_279(&Var3)) - fParam4 != -1.0f)) > fParam4))
				{
					Function_257(StackVal, StackVal, StackVal, StackVal, StackVal, Var3);
					PRINTNL();
					bVar10 = bVar11;
					bVar0 = bVar2;
				}
				else
				{
					Function_257(StackVal, StackVal, StackVal, StackVal, StackVal, Var3);
					PRINTNL();
					if (bVar11 < bVar10)
					{
					}
					else if (Function_381(&Var3))
					{
					}
					else if (Function_279(&Var3))
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
				Function_282(&Var3);
				bVar11 = VDIST(Function_282(&Var3), vParam1);
				if (StackVal && (StackVal || FABS((((bVar11 < bVar10 && !Function_381(&Var3)) && !Function_279(&Var3)) - fParam4 != -1.0f)) > fParam4))
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
	if (Function_381(&Var3))
	{
		return 4294967295;
	}
	if (Function_279(&Var3))
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
			Function_282(&iVar12);
			vVar18 = { StackVal, StackVal, Function_282(&iVar12) };
			bVar2++;
		}
		Function_282(&Var3);
		vVar18 = { StackVal, StackVal, Function_282(&Var3) };
	}
	return bVar0;
}

bool Function_381(int iParam0) //Position: 0xFBAF / 64431
{
	if (iParam0->f_12 > 0.001f || iParam0->f_12 < 0.999f)
	{
		return 1;
	}
	return 0;
}

void Function_382(int iParam0, vector3 vParam1) //Position: 0xFBD0 / 64464
{
	*(iParam0 + 168) = { StackVal, StackVal, vParam1 };
}

var Function_383(int iParam0) //Position: 0xFBE2 / 64482
{
	bool bVar0;
	bool bVar1;
	char* cVar2[24];
	
	if (!IS_LAYOUTREF_VALID(Global_28841))
	{
		return "";
	}
	if (!Function_67(iParam0))
	{
		return "";
	}
	bVar1 = CREATE_OBJECT_ITERATOR(Global_28841);
	ITERATE_ON_OBJECT_TYPE(bVar1, 9);
	memcpy(&cVar2, Global_29155[iParam010].f_20, 6);
	ITERATE_ON_PARTIAL_NAME(bVar1, &cVar2);
	stradd(&cVar2, "v_coach_park", 24);
	bVar0 = START_OBJECT_ITERATOR(bVar1);
	while (IS_OBJECT_VALID(bVar0))
	{
		if (STRINGS_ARE_EQUAL(&cVar2, GET_OBJECT_NAME(bVar0)))
		{
			DESTROY_ITERATOR(bVar1);
			return bVar0;
		}
		bVar0 = OBJECT_ITERATOR_NEXT(bVar1);
	}
	bVar0 = "";
	DESTROY_ITERATOR(bVar1);
	return bVar0;
}

var Function_384(float fParam0) //Position: 0xFC71 / 64625
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	var uVar5;
	bool bVar8;
	struct<8> Var9;
	int iVar17;
	
	iVar0 = 4294967295;
	iVar1 = 4294967295;
	bVar8 = 99999.0f;
	iVar17 = 0;
	while (iVar17 < 145)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
			if (StackVal && (StackVal || Function_387(Global_29005) != Function_387(Global_29155[iVar1710]) != 3 != 4))
			{
				Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_386(iVar17) };
				if (Function_385(iVar17))
				{
					GET_VOLUME_CENTER(StackVal, &vVar2);
					if (VDIST(Global_34574, vVar2) < fParam0 && VDIST(Global_34574, vVar2) > bVar8)
					{
						iVar0 = iVar17;
						bVar8 = VDIST(Global_34574, vVar2);
					}
					else
					{
						iVar1 = iVar17;
					}
				}
			}
		}
		iVar17++;
	}
	if (iVar0 == 4294967295)
	{
		if (!iVar1 != 4294967295)
		{
			iVar0 = iVar1;
		}
	}
	if (!iVar0 != 4294967295)
	{
		GET_VOLUME_CENTER(StackVal, &uVar5);
	}
	return iVar0;
}

bool Function_385(int iParam0) //Position: 0xFD5A / 64858
{
	if (!Function_67(iParam0))
	{
		return 0;
	}
	if ((iParam0 != Global_30640[4] || iParam0 != Global_30717[1]) || iParam0 != Global_30693[2])
	{
		return 0;
	}
	return 1;
}

struct<32> Function_386(int iParam0) //Position: 0xFD8E / 64910
{
	char* cVar0[32];
	
	strcpy(&cVar0, "INVALID REGION", 32);
	if (!Function_67(iParam0))
	{
		return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
	}
	if (IS_VOLUME_VALID(StackVal))
	{
		strcpy(&cVar0, GET_OBJECT_NAME(StackVal), 32);
		return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
	}
	switch (StackVal)
	{
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
			memcpy(&cVar0, Global_29155[iParam010].f_20, 8);
			stradd(&cVar0, "v_region", 32);
			break;
		
		default:
			if (IS_VOLUME_VALID(StackVal))
			{
				strcpy(&cVar0, GET_OBJECT_NAME(StackVal), 32);
			}
			break;
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

int Function_387(int iParam0) //Position: 0xFE4B / 65099
{
	return Function_388(iParam0);
}

int Function_388(int iParam0) //Position: 0xFE56 / 65110
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_67(iParam0))
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

bool Function_389(bool bParam0) //Position: 0xFEAE / 65198
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	vector3 vVar12;
	vector3 vVar15;
	float fVar18;
	struct<8> Var19;
	
	Function_460(bParam0);
	if (StackVal || Function_521(StackVal, !IS_LAYOUTREF_VALID(bParam0->f_832), Function_460(bParam0)))
	{
		return 0;
	}
	Function_460(bParam0);
	fVar18 = (VDIST(Function_460(bParam0), Global_34574) + 50.0f);
	Function_460(bParam0);
	if (!Function_459(StackVal, StackVal, Function_460(bParam0), 0.1f, fVar18, &vVar3, &vVar6, &vVar9, 0x41c80000, 0))
	{
		return 0;
	}
	if (!Function_521(StackVal, StackVal, vVar3))
	{
		if (VDIST(Global_34574, vVar6) > VDIST(Global_34574, vVar9))
		{
			vVar0 = { StackVal, StackVal, vVar6 };
		}
		else
		{
			vVar0 = { StackVal, StackVal, vVar9 };
		}
	}
	else
	{
		return 0;
	}
	Function_460(bParam0);
	vVar12 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar0, Function_460(bParam0), StackVal) };
	vVar15 = { 0.0f, 0.0f, 0.0f };
	vVar15.f_4 = (UNK_0x9C40E671(&vVar12) - 180.0f);
	Function_460(bParam0);
	Function_454(StackVal, StackVal, StackVal, StackVal, bParam0, Function_460(bParam0), vVar15, bParam0 + 832);
	SET_ACTOR_UPDATE_PRIORITY(bParam0->f_972, false);
	ADD_PLAYER_CONTROL_HORSE_FOLLOW(0, bParam0->f_972, -1.0f, -1.0f, 1, 1, 0);
	if (!IS_ACTOR_VALID(bParam0->f_972))
	{
		return 0;
	}
	if (!Function_451(bParam0, bParam0 + 832))
	{
		return 0;
	}
	if (!SQUAD_IS_VALID((bParam0 + 1256)->f_60))
	{
		strcpy(&Var19, "movAtkSquad", 32);
		Var19 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_290(&Var19) };
		(bParam0 + 1256)->f_60 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bParam0->f_832, &Var19));
	}
	Function_450(bParam0 + 1256, (bParam0 + 1256)->f_60);
	if (!SQUAD_IS_VALID((bParam0 + 1256)->f_60))
	{
		return 0;
	}
	if (!Function_408(bParam0))
	{
		return 0;
	}
	Function_407(bParam0, 1);
	Function_390(bParam0, Function_265(bParam0->f_1212), 388, 0.0f, 0.0f, 0.0f, 1, 1, 0);
	return 1;
}

void Function_390(int iParam0, bool bParam1, var uParam2, vector3 vParam3, int iParam6, bool bParam7, int iParam8) //Position: 0x10034 / 65588
{
	struct<8> Var0;
	bool bVar8;
	int iVar9;
	
	iVar9 = 0;
	Function_406(iParam0);
	if (IS_OBJECT_VALID(bParam1))
	{
		*iParam0 = bParam1;
		bVar8 = bParam1;
	}
	iParam0->f_40 = uParam2;
	if (!Function_521(StackVal, StackVal, vParam3))
	{
		*(iParam0 + 4) = { StackVal, StackVal, vParam3 };
	}
	if (iParam6 == 1)
	{
		Function_59(iParam0 + 584, 4);
	}
	else
	{
		Function_26(iParam0 + 584, 4);
	}
	if (bParam7)
	{
		if (Function_14(iParam0->f_624))
		{
			Function_405(iParam0->f_624, 1);
			Function_59(iParam0 + 584, 32);
		}
		else
		{
			LOG_ERROR("PROCMISSION_SETUP found an invalid deed");
		}
	}
	Function_59(iParam0 + 584, 1024);
	iParam0->f_564 = iParam8;
	if (iParam8 >= 0)
	{
		if (!IS_OBJECT_VALID(bVar8))
		{
			bVar8 = CREATE_POINT_IN_LAYOUT(iParam0->f_28, &Var0, vParam3, 0.0f, 0.0f, 0.0f);
			iVar9 = 1;
		}
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_290("nbirdSquad") };
		iParam0->f_568 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(iParam0->f_28, &Var0));
		if (SQUAD_IS_VALID(iParam0->f_568))
		{
			Function_392(iParam0->f_28, iParam0->f_568, iParam8, bVar8, 1129, 0x41200000);
			Function_391(iParam0->f_568, 0);
		}
		if (iVar9 == 1)
		{
			DESTROY_OBJECT(bVar8);
		}
		Function_210(iParam0 + 572);
	}
	Function_210(iParam0 + 44);
	Function_527(0);
}

void Function_391(bool bParam0, bool bParam1) //Position: 0x10183 / 65923
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

void Function_392(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, float fParam5) //Position: 0x101C4 / 65988
{
	vector3 vVar0;
	vector3 vVar3;
	struct<8> Var6;
	struct<2> Var14;
	bool bVar16;
	bool bVar17;
	
	Function_404(10.0f);
	Var14 = { StackVal, Function_404(10.0f) };
	if (SQUAD_IS_VALID(bParam1))
	{
		if (!Function_403(bParam4) || bParam4 != 0)
		{
			bVar16 = Function_393(128, 0, 0, 4294967295, 0);
		}
		else
		{
			bVar16 = bParam4;
		}
		bVar17 = false;
		while (bVar17 < (iParam2 - 1))
		{
			Function_371(&Var14, bVar17);
			GET_OBJECT_RELATIVE_POSITION(bParam3, Function_371(&Var14, bVar17), &vVar0);
			vVar0.f_4 = (vVar0.y + (fParam5 + RAND_FLOAT_RANGE(0.0f, 20.0f)));
			vVar3.f_4 = RAND_FLOAT_RANGE(0.0f, 360.0f);
			Var6 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_290("genbird_") };
			SQUAD_JOIN(CREATE_ACTOR_IN_LAYOUT(bParam0, &Var6, bVar16, vVar0, vVar3), bParam1);
			bVar17++;
		}
	}
	else
	{
		LOG_ERROR("CREATE_BIRD_SQUAD_IN_LAYOUT - birdSquad passed in is not squad");
	}
}

var Function_393(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x102B6 / 66230
{
	return Function_394(iParam0, iParam1, iParam2, iParam3, iParam4, 0, 0.0f, 0.0f, 0.0f);
}

var Function_394(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, vector3 vParam6) //Position: 0x102CF / 66255
{
	switch (iParam0)
	{
		case 0x00000001:
			return Function_397(StackVal, StackVal, Global_30750[0], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000002:
			return Function_397(StackVal, StackVal, Global_30750[1], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000004:
			return Function_397(StackVal, StackVal, Global_30750[2], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000008:
			return Function_397(StackVal, StackVal, Global_30750[3], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000010:
			return Function_397(StackVal, StackVal, Global_30750[4], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000020:
			return Function_397(StackVal, StackVal, Global_30750[5], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000040:
			return Function_397(StackVal, StackVal, Global_30750[6], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000080:
			return Function_397(StackVal, StackVal, Global_30750[7], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000100:
			return Function_397(StackVal, StackVal, Global_30750[8], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000200:
			return Function_397(StackVal, StackVal, Global_30750[9], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000400:
			return Function_397(StackVal, StackVal, Global_30750[10], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000800:
			return Function_397(StackVal, StackVal, Global_30750[11], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00001000:
			return Function_397(StackVal, StackVal, Global_30750[12], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00002000:
			return Function_397(StackVal, StackVal, Global_30750[13], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x40000000:
			LOG_ERROR("Trying to get a random member of invalid popset_type");
			return 4294967295;
			break;
	}
	return Function_395(StackVal, StackVal, iParam0, bParam1, bParam2, iParam5, vParam6);
}

var Function_395(var uParam0, bool bParam1, bool bParam2, int iParam3, vector3 vParam4) //Position: 0x10524 / 66852
{
	bool bVar0;
	
	bVar0 = CREATE_POPULATION_SET(0);
	if (uParam0 & 1 == 1)
	{
		Function_396(Global_30750[0], bVar0);
	}
	if (uParam0 & 2 == 2)
	{
		Function_396(Global_30750[1], bVar0);
	}
	if (uParam0 & 4 == 4)
	{
		Function_396(Global_30750[2], bVar0);
	}
	if (uParam0 & 8 == 8)
	{
		Function_396(Global_30750[3], bVar0);
	}
	if (uParam0 & 16 == 16)
	{
		Function_396(Global_30750[4], bVar0);
	}
	if (uParam0 & 32 == 32)
	{
		Function_396(Global_30750[5], bVar0);
	}
	if (uParam0 & 64 == 64)
	{
		Function_396(Global_30750[6], bVar0);
	}
	if (uParam0 & 128 == 128)
	{
		Function_396(Global_30750[7], bVar0);
	}
	if (uParam0 & 256 == 256)
	{
		Function_396(Global_30750[8], bVar0);
	}
	if (uParam0 & 512 == 512)
	{
		Function_396(Global_30750[9], bVar0);
	}
	if (uParam0 & 1024 == 1024)
	{
		Function_396(Global_30750[10], bVar0);
	}
	if (uParam0 & 2048 == 2048)
	{
		Function_396(Global_30750[11], bVar0);
	}
	if (uParam0 & 4096 == 4096)
	{
		Function_396(Global_30750[12], bVar0);
	}
	if (uParam0 & 8192 == 8192)
	{
		Function_396(Global_30750[13], bVar0);
	}
	return Function_397(StackVal, StackVal, bVar0, bParam1, bParam2, 4294967295, 0, iParam3, vParam4);
}

void Function_396(bool bParam0, bool bParam1) //Position: 0x10675 / 67189
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

var Function_397(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, vector3 vParam6) //Position: 0x10733 / 67379
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
		Function_402();
	}
	bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, bParam4, iParam5, vParam6);
	if (!Function_403(bVar1))
	{
		if (!Global_30837 && !Global_30838)
		{
			Function_401(bParam0, bParam1, bParam2, bParam3, bParam4);
			LOG_ERROR("Did a random on popset, and got back a -1");
		}
		Function_401(bParam0, bParam1, bParam2, bParam3, bParam4);
		LOG_ERROR("Did a random on popset, and got back a -1");
		return 4294967295;
	}
	bVar0 = bVar1;
	if (bParam1 || (!bParam3 != 4294967295 && !bParam3 != GET_ACTORENUM_SPECIES(bVar1)))
	{
		if (bParam1 && bParam3 != 4294967295)
		{
			while (Function_400(bVar0) && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, false, iParam5, vParam6);
				if (Function_403(bVar1))
				{
					bVar0 = bVar1;
				}
				iVar2++;
			}
			if (bParam1)
			{
				if (Function_400(bVar0))
				{
					Function_399();
				}
				Function_398(bVar0);
			}
		}
		else if (!bParam3 != 4294967295)
		{
			while (!GET_ACTORENUM_SPECIES(bVar1) != bParam3 && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, false, iParam5, vParam6);
				if (Function_403(bVar1))
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

void Function_398(int iParam0) //Position: 0x10A26 / 68134
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

void Function_399() //Position: 0x10ADA / 68314
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

bool Function_400(bool bParam0) //Position: 0x10B14 / 68372
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

void Function_401(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x10B41 / 68417
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

void Function_402() //Position: 0x10C92 / 68754
{
	int iVar0;
	
	if (Global_3402)
	{
		if (StackVal || !Global_30742 != GET_THIS_SCRIPT_ID() < GET_CURRENT_GAME_TIME())
		{
			Function_399();
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
	Function_399();
	return;
}

bool Function_403(bool bParam0) //Position: 0x10CDD / 68829
{
	if (bParam0 > 0 || bParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

struct<8> Function_404(int iParam0) //Position: 0x10CF4 / 68852
{
	Function_373(iParam0, 10);
	return StackVal, Function_373(iParam0, 10);
}

void Function_405(int iParam0, int iParam1) //Position: 0x10D01 / 68865
{
	int iVar0;
	struct<6> Var1;
	struct<4> Var7;
	var uVar11;
	
	if (!Function_80(iParam0))
	{
		Function_16();
		return;
	}
	iVar0 = Function_15(iParam0);
	Global_13172[iParam011].f_4 = 1;
	if (!Global_34165.f_36 && iParam1)
	{
		Function_25(1);
	}
	if (iVar0 == 1)
	{
		Global_6269 = Function_13(iParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_20(Global_6269) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_19(Global_6269) };
		}
		uVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		SET_JOURNAL_ENTRY_PROGRESS(uVar11, -2.0f, 0, 0);
		CLEAR_JOURNAL_ENTRY(uVar11);
		APPEND_JOURNAL_ENTRY(uVar11, 0);
	}
	return;
}

void Function_406(int iParam0) //Position: 0x10DA7 / 69031
{
	struct<8> Var0;
	
	if (!IS_LAYOUTREF_VALID(iParam0->f_28))
	{
		strcpy(&Var0, "procMisslayout", 32);
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_290(&Var0) };
		iParam0->f_28 = CREATE_LAYOUT(&Var0);
		if (!IS_LAYOUTREF_VALID(iParam0->f_28))
		{
			LOG_ERROR("couldn't create internal procmission layout");
		}
	}
	return;
}

void Function_407(var uParam0, int iParam1) //Position: 0x10E1C / 69148
{
	uParam0->f_488 = iParam1;
	return;
}

bool Function_408(int iParam0) //Position: 0x10E29 / 69161
{
	struct<15> Var0;
	struct<11> Var15;
	vector3 vVar26;
	vector3 vVar29;
	var uVar32;
	int iVar35;
	
	if (SQUAD_IS_VALID(Function_302(iParam0 + 1256)))
	{
		if (Function_449(Function_302(iParam0 + 1256)) >= 0)
		{
			LOG_ERROR("Attacker's Attack wave already exists, but trying to create another.");
			return 0;
		}
	}
	if (IS_ACTOR_VALID(iParam0->f_972))
	{
		GET_OBJECT_POSITION(iParam0->f_972, &uVar32);
		GET_OBJECT_RELATIVE_POSITION(iParam0->f_972, 0.0f, 0.0f, 0.0f, &vVar29);
		Function_448(&Var0, 3, 0.0f, 0, 4294967295);
		Function_447(StackVal, StackVal, &Var15, 0, vVar29, 0.0f, 25.0f, 75.0f, 0, 0x40a00000, 0);
		iVar35 = 0;
		while (iVar35 < 200)
		{
			WAIT(500);
			Function_441(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var15, Var0, 1);
			vVar26 = { StackVal, StackVal, Function_441(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var15, Var0, 1) };
			if (!Function_521(StackVal, StackVal, vVar26))
			{
				iVar35 = 201;
			}
			iVar35++;
		}
	}
	else
	{
		LOG_ERROR("Invalid stagecoach.");
		return 0;
	}
	if (Function_521(StackVal, StackVal, vVar26))
	{
		return 0;
	}
	if (!Function_521(StackVal, StackVal, vVar26))
	{
		Function_440(iParam0 + 1256, iParam0->f_1212);
		Function_439(iParam0 + 1256, 1);
		Function_438(iParam0 + 1256, 3);
		Function_437(iParam0 + 1256, 0);
		Function_436(iParam0 + 1256, 0);
		Function_435(iParam0 + 1256, "matk");
		Function_434(iParam0 + 1256, iParam0->f_1528);
		Function_433(StackVal, StackVal, iParam0 + 1256, vVar26);
		Function_432(iParam0 + 1256, 5.0f, 50.0f, 0x41700000);
		Function_431(iParam0 + 1256, 1);
		Function_430(iParam0 + 1256, iParam0->f_972);
		Function_429(iParam0 + 1256, 1);
		Function_428(iParam0 + 1256, 1);
		Function_427(iParam0 + 1256, 0, 4294967295);
		Function_426(iParam0 + 1256, 1);
		Function_425(iParam0 + 1256, 1, 976, 1);
		Function_424(iParam0 + 1256, 1);
		if (Function_239(iParam0) == 1)
		{
			Function_419(iParam0 + 1256, Global_34573);
		}
		while (!iParam0->f_1516)
		{
			if (Function_417(iParam0 + 1256))
			{
				iVar35 = 0;
				while (iVar35 < 3)
				{
					Function_416(iParam0 + 1256, (*iParam0 + 1480)[iVar35]);
					iVar35++;
				}
				iParam0->f_1252 = Function_414(iParam0 + 1256);
				Function_409(iParam0 + 1256);
				iParam0->f_1516 = 1;
			}
			WAIT(false);
		}
	}
	return 1;
}

void Function_409(int iParam0) //Position: 0x11085 / 69765
{
	if (IS_OBJECT_VALID(Function_413(iParam0)))
	{
		Function_411(iParam0, 0);
		Function_410(iParam0, 0);
	}
	return;
}

int Function_410(int iParam0, bool bParam1) //Position: 0x110A4 / 69796
{
	bool bVar0;
	char* cVar1[16];
	char* cVar5[16];
	
	if (IS_LAYOUTREF_VALID(*iParam0))
	{
		if (bParam1 == "")
		{
			bParam1 = Function_413(iParam0);
		}
		if (IS_OBJECT_VALID(bParam1))
		{
			DECOR_SET_BOOL(bParam1, "catk_bdi", iParam0->f_172);
			DECOR_SET_FLOAT(bParam1, "catk_spx", iParam0->f_184);
			DECOR_SET_FLOAT(StackVal, bParam1, "catk_spy");
			DECOR_SET_FLOAT(StackVal, bParam1, "catk_spz");
			DECOR_SET_FLOAT(bParam1, "catk_scx", iParam0->f_196);
			DECOR_SET_FLOAT(StackVal, bParam1, "catk_scy");
			DECOR_SET_FLOAT(StackVal, bParam1, "catk_scz");
			DECOR_SET_BOOL(bParam1, "catk_krd", iParam0->f_176);
			DECOR_SET_BOOL(bParam1, "catk_krt", iParam0->f_180);
			DECOR_SET_OBJECT(bParam1, "catk_atv", iParam0->f_208);
			DECOR_SET_INT(bParam1, "catk_ats", iParam0->f_212);
			DECOR_SET_BOOL(bParam1, "catk_bus", iParam0->f_216);
			DECOR_SET_OBJECT(bParam1, "catk_asq", GET_OBJECT_FROM_SQUAD(iParam0->f_60));
			DECOR_SET_INT(bParam1, "catk_wtm", iParam0->f_220);
			DECOR_SET_BOOL(bParam1, "catk_ovr", iParam0->f_160);
			bVar0 = false;
			while (bVar0 <= iParam0->f_100)
			{
				if (Function_403((*iParam0 + 100)[bVar0]) && !(*iParam0 + 100)[bVar0] != 0)
				{
					strcpy(&cVar1, INT_TO_STRING(bVar0), 16);
					strcpy(&cVar5, "catk_ae", 16);
					stradd(&cVar5, &cVar1, 16);
					DECOR_SET_INT(bParam1, &cVar5, (*iParam0 + 100)[bVar0]);
				}
				bVar0++;
			}
		}
		else
		{
			LOG_ERROR("CREATEATTACK_SyncWrite - invalid data object found");
		}
	}
	else
	{
		LOG_ERROR("CREATEATTACK_SyncWrite - invalid write attempted");
	}
	return 1;
}

int Function_411(int iParam0, bool bParam1) //Position: 0x112E0 / 70368
{
	bool bVar0;
	char* cVar1[16];
	char* cVar5[16];
	
	Function_412(iParam0);
	if (IS_LAYOUTREF_VALID(*iParam0))
	{
		if (bParam1 == "")
		{
			bParam1 = Function_413(iParam0);
		}
		if (IS_OBJECT_VALID(bParam1))
		{
			iParam0->f_172 = DECOR_GET_BOOL(bParam1, "catk_bdi");
			iParam0->f_184 = DECOR_GET_FLOAT(bParam1, "catk_spx");
			(iParam0 + 184)->f_4 = DECOR_GET_FLOAT(bParam1, "catk_spy");
			(iParam0 + 184)->f_8 = DECOR_GET_FLOAT(bParam1, "catk_spz");
			iParam0->f_196 = DECOR_GET_FLOAT(bParam1, "catk_scx");
			(iParam0 + 196)->f_4 = DECOR_GET_FLOAT(bParam1, "catk_scy");
			(iParam0 + 196)->f_8 = DECOR_GET_FLOAT(bParam1, "catk_scz");
			iParam0->f_176 = DECOR_GET_BOOL(bParam1, "catk_krd");
			iParam0->f_180 = DECOR_GET_BOOL(bParam1, "catk_krt");
			iParam0->f_208 = GET_VOLUME_FROM_OBJECT(DECOR_GET_OBJECT(bParam1, "catk_atv"));
			iParam0->f_212 = DECOR_GET_INT(bParam1, "catk_ats");
			iParam0->f_216 = DECOR_GET_BOOL(bParam1, "catk_bus");
			iParam0->f_60 = GET_SQUAD_FROM_OBJECT(DECOR_GET_OBJECT(bParam1, "catk_asq"));
			iParam0->f_220 = DECOR_GET_INT(bParam1, "catk_wtm");
			iParam0->f_160 = DECOR_GET_BOOL(bParam1, "catk_ovr");
			bVar0 = false;
			while (bVar0 <= iParam0->f_100)
			{
				if (Function_403((*iParam0 + 100)[bVar0]) && !(*iParam0 + 100)[bVar0] != 0)
				{
					strcpy(&cVar1, INT_TO_STRING(bVar0), 16);
					strcpy(&cVar5, "catk_ae", 16);
					stradd(&cVar5, &cVar1, 16);
					(*iParam0 + 100)[bVar0] = DECOR_GET_INT(bParam1, &cVar5);
				}
				bVar0++;
			}
		}
		else
		{
			LOG_ERROR("CREATEATTACK_SyncRead - invalid data object found");
		}
	}
	else
	{
		LOG_ERROR("CREATEATTACK_SyncRead - invalid read attempted");
	}
	return 1;
}

void Function_412(int iParam0) //Position: 0x11511 / 70929
{
	struct<4> Var0;
	
	if (!IS_LAYOUTREF_VALID(*iParam0))
	{
		strcpy(&Var0, "catkslay", 16);
		memcpy(&Var0, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_290(&Var0), 4);
		*iParam0 = CREATE_LAYOUT(&Var0);
		if (!IS_LAYOUTREF_VALID(*iParam0))
		{
			LOG_ERROR("couldn't create library createattack layout");
		}
	}
	return;
}

var Function_413(int iParam0) //Position: 0x1157E / 71038
{
	bool bVar0;
	
	if (!IS_ITERATOR_VALID(StackVal))
	{
		return "";
	}
	bVar0 = START_OBJECT_ITERATOR(StackVal);
	return bVar0;
}

var Function_414(int iParam0) //Position: 0x1159D / 71069
{
	int iVar0;
	
	if (!iParam0->f_172 != 1)
	{
		LOG_ERROR("Call CREATEATTACK_INIT before launching");
		return "";
	}
	Function_415(iParam0);
	iVar0 = LAUNCH_NEW_SCRIPT_WITH_ARGS("$/content/scripting/DesignerDefined/createAttack", iParam0, 56, 0);
	return iVar0;
}

void Function_415(int iParam0) //Position: 0x11621 / 71201
{
	int iVar0;
	int iVar1;
	
	if (Function_86(iParam0->f_92, 64))
	{
		iVar1 = 0;
		while (iVar1 <= iParam0->f_100)
		{
			if (!(*iParam0 + 100)[iVar1] != 0 && Function_403((*iParam0 + 100)[iVar1]))
			{
				iVar0++;
			}
			iVar1++;
		}
		iParam0->f_128 = iVar0;
	}
	else
	{
		iParam0->f_128 = iParam0->f_100;
	}
	return;
}

int Function_416(int iParam0, bool bParam1) //Position: 0x11679 / 71289
{
	int iVar0;
	
	if (iParam0->f_172 == 0)
	{
		LOG_ERROR("CREATEATTACK_ADD_ACTORENUM - Call *after* CREATEATTACK_INIT and before CREATEATTACK_LAUNCH");
		return 0;
	}
	if (!Function_403(bParam1) || bParam1 != 0)
	{
		return 0;
	}
	Function_411(iParam0, 0);
	iVar0 = 0;
	while (iVar0 <= iParam0->f_100)
	{
		if ((*iParam0 + 100)[iVar0] != 0 || !Function_403((*iParam0 + 100)[iVar0]))
		{
			(*iParam0 + 100)[iVar0] = bParam1;
			iVar0 = iParam0->f_100;
		}
		iVar0++;
	}
	Function_410(iParam0, 0);
	return 1;
}

bool Function_417(int iParam0) //Position: 0x11747 / 71495
{
	int iVar0;
	vector3 vVar1;
	struct<15> Var4;
	struct<11> Var19;
	
	Function_412(iParam0);
	if (iParam0->f_212 == 0)
	{
		iParam0->f_212 = 3;
		DECOR_SET_BOOL(*iParam0, "catk_bus", iParam0->f_216);
	}
	if (Function_521(StackVal, StackVal, *(iParam0 + 184)))
	{
		if (Function_521(StackVal, StackVal, *(iParam0 + 196)))
		{
			if (IS_ACTOR_VALID(GET_PLAYER_ACTOR(0)))
			{
				Function_433(StackVal, StackVal, iParam0, Global_34574);
			}
			else
			{
				return 0;
			}
		}
		Function_433(StackVal, StackVal, iParam0, *(iParam0 + 196));
		if (iParam0->f_24 > 0.5f)
		{
			iParam0->f_24 = 0.5f;
		}
		if ((iParam0->f_28 - iParam0->f_24) > 6.0f)
		{
			iParam0->f_28 = (iParam0->f_24 + 6.0f);
		}
		if (iParam0->f_32 >= 0.0f)
		{
			iParam0->f_32 = 15.0f;
		}
		Function_448(&Var4, 4294967295, 5.0f, 1, 4294967295);
		Function_447(StackVal, StackVal, &Var19, 0, *(iParam0 + 196), 0.0f, iParam0->f_24, iParam0->f_28, iParam0->f_32, 0x40a00000, 0);
		iVar0 = 0;
		while (iVar0 < 9)
		{
			Function_441(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var19, Var4, 1);
			vVar1 = { StackVal, StackVal, Function_441(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var19, Var4, 1) };
			if (!Function_521(StackVal, StackVal, vVar1))
			{
				iVar0 = 10;
			}
			iVar0++;
		}
		if (Function_521(StackVal, StackVal, vVar1))
		{
			*(iParam0 + 184) = { StackVal, StackVal, *(iParam0 + 196) };
			return 0;
		}
		*(iParam0 + 184) = { StackVal, StackVal, vVar1 };
	}
	Function_415(iParam0);
	iParam0->f_172 = 1;
	if (!Function_418(iParam0))
	{
		LOG_ERROR("CREATEATTACK_INIT could not create data object");
	}
	Function_410(iParam0, 0);
	return 1;
}

bool Function_418(int iParam0) //Position: 0x118C6 / 71878
{
	var uVar0;
	
	if (!IS_OBJECT_VALID(*iParam0))
	{
		LOG_ERROR("CREATEATTACK_CreateDataObject - Invalid layout");
		return 0;
	}
	if (!IS_OBJECT_VALID(StackVal))
	{
		memcpy(&uVar0, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_290("ncatk_dobj"), 4);
		iParam0->f_4 = CREATE_POINT_IN_LAYOUT(*iParam0, &uVar0, *(iParam0 + 184), 0.0f, 0.0f, 0.0f);
		if (!IS_OBJECT_VALID(StackVal))
		{
			LOG_ERROR("CREATEATTACK_CreateDataObject - Could not create data object");
			return 0;
		}
	}
	if (!IS_ITERATOR_VALID(StackVal))
	{
		iParam0->f_8 = CREATE_OBJECT_ITERATOR(*iParam0);
	}
	if (!IS_ITERATOR_VALID(StackVal))
	{
		LOG_ERROR("CREATEATTACK_CreateDataObject - Could not create data iterator");
		return 0;
	}
	ITERATE_ON_OBJECT_TYPE(StackVal, 8);
	ITERATE_ON_PARTIAL_NAME(StackVal, "ncatk_dobj");
	PRINTSTRING("data obj =  ");
	PRINTSTRING(GET_OBJECT_NAME(START_OBJECT_ITERATOR(StackVal)));
	PRINTNL();
	return 1;
}

int Function_419(int iParam0, bool bParam1) //Position: 0x11A35 / 72245
{
	return Function_420(iParam0, bParam1);
}

int Function_420(int iParam0, bool bParam1) //Position: 0x11A42 / 72258
{
	if (!IS_ACTOR_VALID(bParam1))
	{
		return 0;
	}
	Function_423(iParam0);
	if (!IS_ACTOR_IN_ACTORSET(iParam0->f_52, bParam1))
	{
		DECOR_SET_BOOL(bParam1, "catk_external", true);
		ADD_ACTORSET_MEMBER(iParam0->f_52, bParam1);
		PRINTSTRING("Adding as target: ");
		PRINTSTRING(GET_OBJECT_NAME(bParam1));
		PRINTNL();
		if (!Function_86(iParam0->f_92, 1024))
		{
			Function_421(iParam0, bParam1);
		}
	}
	return 1;
}

void Function_421(var uParam0, bool bParam1) //Position: 0x11AC0 / 72384
{
	var uVar0;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	
	Function_422(uParam0);
	memcpy(&uVar0, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_290("catkavol"), 4);
	bVar4 = CREATE_VOLUME_IN_LAYOUT(*uParam0, &uVar0, 3, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 5.0f, 5.0f, 5.0f);
	if (IS_VOLUME_VALID(bVar4))
	{
		if (SQUAD_IS_VALID(uParam0->f_60))
		{
			ATTACH_OBJECTS(GET_OBJECT_FROM_VOLUME(bVar4), GET_OBJECT_FROM_ACTOR(bParam1), Function_38(), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
			bVar5 = false;
			while (bVar5 < (SQUAD_GET_SIZE(uParam0->f_60) - 1))
			{
				bVar6 = SQUAD_GET_ACTOR_BY_INDEX(uParam0->f_60, bVar5);
				ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(bVar6, bVar4);
				bVar5++;
			}
		}
	}
	else
	{
		LOG_ERROR("CREATEATTACK_AddAvoidanceVolume got an invalid volume somehow?");
	}
	return;
}

int Function_422(int iParam0) //Position: 0x11B91 / 72593
{
	var uVar0;
	
	Function_412(iParam0);
	if (!IS_OBJECTSET_VALID(iParam0->f_96))
	{
		memcpy(&uVar0, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_290("navoidVols"), 4);
		iParam0->f_96 = CREATE_OBJECTSET_IN_LAYOUT(&uVar0, *iParam0, 9, 1);
		if (!IS_OBJECTSET_VALID(iParam0->f_96))
		{
			return 0;
		}
	}
	return 1;
}

int Function_423(int iParam0) //Position: 0x11BD9 / 72665
{
	var uVar0;
	
	if (!IS_ACTORSET_VALID(iParam0->f_52))
	{
		Function_412(iParam0);
		memcpy(&uVar0, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_290("ntargetSet"), 4);
		iParam0->f_52 = CREATE_ACTORSET_IN_LAYOUT(*iParam0, &uVar0, 0);
		if (!IS_ACTORSET_VALID(iParam0->f_52))
		{
			return 0;
		}
	}
	return 1;
}

void Function_424(int iParam0, bool bParam1) //Position: 0x11C1F / 72735
{
	if (bParam1)
	{
		Function_59(iParam0 + 92, 64);
	}
	else
	{
		Function_26(iParam0 + 92, 64);
	}
	return;
}

int Function_425(int iParam0, int iParam1, int iParam2, var uParam3) //Position: 0x11C3F / 72767
{
	if (iParam1 == 1)
	{
		Function_59(iParam0 + 92, 1);
	}
	else
	{
		Function_26(iParam0 + 92, 1);
	}
	if (iParam2 > 976 || iParam2 <= 1050)
	{
		iParam0->f_80 = 4294967295;
	}
	else
	{
		iParam0->f_80 = iParam2;
	}
	iParam0->f_84 = uParam3;
	return 1;
}

void Function_426(int iParam0, int iParam1) //Position: 0x11C85 / 72837
{
	if (iParam1 == 1)
	{
		Function_59(iParam0 + 92, 8);
	}
	else
	{
		Function_26(iParam0 + 92, 8);
	}
	return;
}

void Function_427(int iParam0, int iParam1, int iParam2) //Position: 0x11CA6 / 72870
{
	if (iParam1 == 1)
	{
		Function_59(iParam0 + 92, 4);
	}
	else
	{
		Function_26(iParam0 + 92, 4);
	}
	iParam0->f_88 = iParam2;
	Function_59(iParam0 + 92, 128);
	return;
}

void Function_428(int iParam0, int iParam1) //Position: 0x11CD4 / 72916
{
	if (iParam1 == 0)
	{
		Function_59(iParam0 + 92, 4096);
	}
	else
	{
		Function_26(iParam0 + 92, 4096);
	}
	return;
}

void Function_429(int iParam0, int iParam1) //Position: 0x11CF7 / 72951
{
	if (iParam1 == 0)
	{
		Function_59(iParam0 + 92, 2048);
	}
	else
	{
		Function_26(iParam0 + 92, 2048);
	}
	return;
}

void Function_430(var uParam0, bool bParam1) //Position: 0x11D1A / 72986
{
	if (IS_ACTOR_VALID(bParam1))
	{
		uParam0->f_56 = bParam1;
	}
	return;
}

int Function_431(int iParam0, int iParam1) //Position: 0x11D2E / 73006
{
	if (iParam1 == 1)
	{
		Function_59(iParam0 + 92, 512);
	}
	else
	{
		Function_26(iParam0 + 92, 512);
	}
	return 1;
}

void Function_432(var uParam0, float fParam1, float fParam2, var uParam3) //Position: 0x11D52 / 73042
{
	if (fParam1 < fParam2)
	{
		LOG_ERROR("CREATEATTACK_SET_SPAWN_RANGE got a minRange > maxRange. Check");
		fParam1 = fParam2;
	}
	uParam0->f_24 = fParam1;
	uParam0->f_28 = fParam2;
	uParam0->f_32 = uParam3;
}

int Function_433(int iParam0, vector3 vParam1) //Position: 0x11DBB / 73147
{
	bool bVar0;
	
	bVar0 = Function_413(iParam0);
	if (Function_521(StackVal, StackVal, vParam1))
	{
		return 0;
	}
	if (iParam0->f_172 != 1 && IS_OBJECT_VALID(bVar0))
	{
		Function_411(iParam0, bVar0);
	}
	*(iParam0 + 196) = { StackVal, StackVal, vParam1 };
	*(iParam0 + 184) = { 0.0f, 0.0f, 0.0f };
	if (iParam0->f_172 != 1 && IS_OBJECT_VALID(bVar0))
	{
		Function_410(iParam0, bVar0);
	}
	return 1;
}

int Function_434(var uParam0, int iParam1) //Position: 0x11E1A / 73242
{
	if (iParam1 > 0 || iParam1 < 6)
	{
		return 0;
	}
	uParam0->f_40 = iParam1;
	return 1;
}

int Function_435(int iParam0, char* cParam1) //Position: 0x11E35 / 73269
{
	char* cVar0[8];
	
	strcpy(&cVar0, cParam1, 8);
	*(iParam0 + 72) = { StackVal, cVar0 };
	return 1;
}

void Function_436(int iParam0, int iParam1) //Position: 0x11E4C / 73292
{
	if (iParam0->f_172 != 1 && IS_OBJECT_VALID(Function_413(iParam0)))
	{
		Function_411(iParam0, 0);
	}
	iParam0->f_176 = iParam1;
	if (iParam0->f_172 != 1 && IS_OBJECT_VALID(Function_413(iParam0)))
	{
		Function_410(iParam0, 0);
	}
	return;
}

void Function_437(int iParam0, int iParam1) //Position: 0x11E8A / 73354
{
	if (iParam0->f_172 != 1 && IS_OBJECT_VALID(Function_413(iParam0)))
	{
		Function_411(iParam0, 0);
	}
	iParam0->f_180 = iParam1;
	if (iParam0->f_172 != 1 && IS_OBJECT_VALID(Function_413(iParam0)))
	{
		Function_410(iParam0, 0);
	}
	return;
}

int Function_438(var uParam0, int iParam1) //Position: 0x11EC8 / 73416
{
	if (iParam1 >= 0 || iParam1 <= 7)
	{
		return 0;
	}
	uParam0->f_212 = iParam1;
	uParam0->f_216 = 1;
	return 1;
}

int Function_439(var uParam0, int iParam1) //Position: 0x11EE8 / 73448
{
	uParam0->f_68 = iParam1;
	return 1;
}

int Function_440(var uParam0, bool bParam1) //Position: 0x11EF5 / 73461
{
	bool bVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(bParam1))
	{
		return 0;
	}
	if (SQUAD_GET_SIZE(bParam1) == 0)
	{
		return 0;
	}
	Function_423(uParam0);
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam1) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam1, bVar0);
		Function_420(uParam0, bVar1);
		bVar0++;
	}
	return 1;
}

vector3 Function_441(struct<41> Param0) //Position: 0x11F44 / 73540
{
	vector3 vVar0;
	
	if (bParam26)
	{
		AMBIENT_RESET_FILTER(0);
	}
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
	else if (!Function_521(StackVal, StackVal, *(&Param0 + 4)))
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
	Function_446(Param0.f_36);
	if (Param0.f_24 > 1.0f && Param0.f_28 > 1.0f)
	{
		Function_445();
	}
	else
	{
		AMBIENT_SET_DISTANCE_FILTER(Param0.f_24, Param0.f_28);
	}
	Function_444(Param0.f_20);
	Function_443(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param11);
	Function_442(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param11);
	if (Param11.f_28 == 0.0f)
	{
		Param0.f_40 = Param11.f_28;
	}
	if (Param0.f_40 == 0.0f)
	{
		UNK_0x0AC99007(Param0.f_40, (-1.0f * Param0.f_40));
		UNK_0x30C67D05(1);
	}
	AMBIENT_SET_RANDOM_SEARCH_ORDER(1);
	if (AMBIENT_GET_POINT(&vVar0, 0))
	{
		return StackVal, StackVal, vVar0;
	}
	Function_362();
	return StackVal, StackVal, Function_362();
}

void Function_442(struct<33> Param0) //Position: 0x12073 / 73843
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

void Function_443(struct<5> Param0, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14) //Position: 0x1219F / 74143
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

void Function_444(bool bParam0) //Position: 0x121F0 / 74224
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

void Function_445() //Position: 0x122A3 / 74403
{
	float fVar0;
	bool bVar1;
	
	Function_369(&fVar0, &bVar1);
	AMBIENT_SET_DISTANCE_FILTER(fVar0, bVar1);
	return;
}

void Function_446(bool bParam0) //Position: 0x122B7 / 74423
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

void Function_447(int iParam0, int iParam1, vector3 vParam2, float fParam5, var uParam6, var uParam7, var uParam8, int iParam9, int iParam10) //Position: 0x122FB / 74491
{
	iParam0->f_20 = iParam1;
	*(iParam0 + 4) = { StackVal, StackVal, vParam2 };
	iParam0->f_16 = fParam5;
	iParam0->f_24 = uParam6;
	iParam0->f_28 = uParam7;
	iParam0->f_32 = iParam10;
	iParam0->f_36 = uParam8;
	iParam0->f_40 = iParam9;
}

void Function_448(var uParam0, int iParam1, float fParam2, int iParam3, int iParam4) //Position: 0x12337 / 74551
{
	*uParam0 = iParam1;
	uParam0->f_4 = fParam2;
	uParam0->f_8 = iParam3;
	uParam0->f_16 = iParam4;
	uParam0->f_20 = 0.0f;
	uParam0->f_12 = 4294967295;
}

int Function_449(bool bParam0) //Position: 0x12360 / 74592
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

int Function_450(var uParam0, int iParam1) //Position: 0x123AD / 74669
{
	bool bVar0;
	
	if (!IS_LAYOUTREF_VALID(*uParam0))
	{
		return 0;
	}
	bVar0 = CREATE_OBJECT_ITERATOR(*uParam0);
	if (!IS_ITERATOR_VALID(bVar0))
	{
		return 0;
	}
	Function_303(&bVar0);
	ITERATE_ON_OBJECT_TYPE(bVar0, 25);
	uParam0->f_60 = iParam1;
	if (!SQUAD_IS_VALID(uParam0->f_60))
	{
		return 0;
	}
	DECOR_SET_BOOL(GET_OBJECT_FROM_SQUAD(uParam0->f_60), "DECOR_ATTACKSQUAD", true);
	DESTROY_ITERATOR(bVar0);
	return 1;
}

bool Function_451(int iParam0, int iParam1) //Position: 0x12418 / 74776
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar6;
	bool bVar9;
	struct<8> Var10;
	
	if (!IS_ACTOR_VALID(iParam0->f_972))
	{
		return 0;
	}
	if (iParam0->f_1244 == 0)
	{
		strcpy(&Var10, "matkdef_travelerSquad", 32);
		Var10 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_290(&Var10) };
		iParam0->f_1212 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(*iParam1, &Var10));
		if (iParam0->f_1248 < 0)
		{
			iParam0->f_1248 = (GET_NUM_AVAILABLE_SEATS(iParam0->f_972) + GET_NUM_OCCUPIED_SEATS(iParam0->f_972));
		}
	}
	else if (SQUAD_GET_SIZE(iParam0->f_1212) >= 0)
	{
		iParam0->f_1248 = SQUAD_GET_SIZE(iParam0->f_1212);
	}
	else
	{
		LOG_ERROR("MATKDEF_CREATE_TRAVELERS: Using Custom Squad that is empty.(1)");
	}
	iVar2 = Function_453(iParam0);
	bVar1 = false;
	while (bVar1 < (iParam0->f_1248 - 1))
	{
		strcpy(&Var10, "matkdef_traveler", 32);
		Var10 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_290(&Var10) };
		GET_OBJECT_RELATIVE_POSITION(GET_OBJECT_FROM_ACTOR(iParam0->f_972), 0.0f, 0.0f, (10.0f + IntToFloat(bVar1)), &vVar3);
		Function_362();
		vVar6 = { StackVal, StackVal, Function_362() };
		if (iVar2 >= 0)
		{
			bVar0 = (*iParam0 + 1216)[(bVar1 % iVar2)];
		}
		else
		{
			bVar0 = Function_393(2, 1, 2, 4294967295, 0);
		}
		if (iParam0->f_1244 == 0)
		{
			bVar9 = CREATE_ACTOR_IN_LAYOUT(*iParam1, &Var10, bVar0, vVar3, vVar6);
		}
		else if (SQUAD_GET_SIZE(iParam0->f_1212) >= 0)
		{
			bVar9 = SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_1212, bVar1);
		}
		else
		{
			LOG_ERROR("MATKDEF_CREATE_TRAVELERS: Using Custom Squad that is empty.(2)");
		}
		Function_452(GET_OBJECT_FROM_ACTOR(bVar9));
		if (bVar1 == 0)
		{
			Function_292(bVar9, 4);
		}
		else
		{
			Function_292(bVar9, 7);
		}
		if (bVar1 <= (GET_NUM_AVAILABLE_SEATS(iParam0->f_972) + GET_NUM_OCCUPIED_SEATS(iParam0->f_972)))
		{
			SET_ACTOR_IN_VEHICLE(bVar9, iParam0->f_972, bVar1);
		}
		else
		{
			LOG_ERROR("No more seats for matkdef actor");
		}
		AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bVar9, 1);
		SET_ACTOR_UPDATE_PRIORITY(bVar9, false);
		if (!IS_ACTOR_MALE(bVar9))
		{
			DELETE_ALL_INVENTORY_FROM_ACTOR(bVar9);
		}
		SQUAD_JOIN(bVar9, iParam0->f_1212);
		bVar1++;
	}
	return 1;
}

void Function_452(bool bParam0) //Position: 0x1267A / 75386
{
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	if (!DECOR_CHECK_EXIST(bParam0, "nocrime"))
	{
		DECOR_SET_BOOL(bParam0, "nocrime", true);
	}
	return;
}

var Function_453(bool bParam0) //Position: 0x126AE / 75438
{
	int iVar0;
	int iVar1;
	
	while (iVar1 <= bParam0->f_1216)
	{
		if (Function_403((*bParam0 + 1216)[iVar1]) && (*bParam0 + 1216)[iVar1] == 0)
		{
			iVar1++;
			iVar0++;
		}
		else
		{
			iVar1 = bParam0->f_1216;
		}
	}
	return iVar0;
}

int Function_454(var uParam0, vector3 vParam1, vector3 vParam4, var uParam7) //Position: 0x126F4 / 75508
{
	struct<8> Var0;
	
	strcpy(&Var0, "ATTACKDEF_STAGECOACH", 32);
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_290(&Var0) };
	uParam0->f_972 = Function_455(StackVal, StackVal, StackVal, StackVal, *uParam7, &Var0, uParam0->f_976, Function_393(64, 1, 0, 4294967295, 0), vParam1, vParam4, 1, 976, 976, 976, 4);
	if (!IS_ACTOR_VALID(uParam0->f_972))
	{
		return 0;
	}
	Function_452(GET_OBJECT_FROM_ACTOR(uParam0->f_972));
	return 1;
}

var Function_455(bool bParam0, bool bParam1, bool bParam2, int iParam3, vector3 vParam4, vector3 vParam7, var uParam10, int iParam11, int iParam12, int iParam13, int iParam14) //Position: 0x1276B / 75627
{
	bool bVar0;
	int iVar1[6];
	bool bVar8;
	int iVar9;
	int iVar10;
	char* cVar11[16];
	bool bVar15;
	bool bVar16;
	bool bVar17;
	int iVar18;
	
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
		iVar9 = 0;
		while (iVar9 < (iVar10 - 1))
		{
			strcpy(&cVar11, "Draft", 16);
			straddi(&cVar11, iVar9, 16);
			bVar15 = "";
			if (Function_458(Global_30750[6], 4, 23, 0) && uParam10)
			{
				bVar16 = Function_457(StackVal, StackVal, Global_30750[6], vParam4, 4, 23, 0);
				if (Function_456(bVar16, &iVar1))
				{
					bVar16 = 976;
				}
				iVar1[iVar9] = bVar16;
				bVar15 = CREATE_ACTOR_IN_LAYOUT(bVar0, &cVar11, bVar16, vParam4, vParam7);
			}
			bVar17 = 4294967295;
			if (!IS_ACTOR_VALID(bVar15))
			{
				switch (iVar9)
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
				ATTACH_DRAFT_TO_VEHICLE(bVar15, bVar0, iVar9, 1);
			}
			else
			{
				LOG_ERROR("Tried to create coach, but one of the horses couldn't be created");
				return bVar0;
			}
			iVar9++;
		}
		if (!bVar8)
		{
			ACCESSORIZE_VEHICLE_HORSES(bVar0, 5);
		}
	}
	if (bParam2 == 1197)
	{
		iVar18 = 2;
		while (iVar18 < (GET_NUM_AVAILABLE_SEATS(bVar0) - 1))
		{
			ENABLE_VEHICLE_SEAT(bVar0, iVar18, 0);
			iVar18++;
		}
	}
	return bVar0;
}

bool Function_456(int iParam0, int iParam1) //Position: 0x1299F / 76191
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

var Function_457(bool bParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6) //Position: 0x129D1 / 76241
{
	return GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam4, bParam5, bParam6, 1, vParam1);
}

int Function_458(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x129E9 / 76265
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

bool Function_459(vector3 vParam0, float fParam3, float fParam4, var uParam5, var uParam6, var uParam7, float fParam8, bool bParam9) //Position: 0x12A10 / 76304
{
	vector3 vVar0;
	vector3 vVar3;
	bool bVar6;
	bool bVar7;
	struct<6> Var8;
	struct<6> Var14;
	int iVar20;
	bool bVar26;
	bool bVar27;
	bool bVar28;
	int iVar29;
	
	Function_362();
	vVar0 = { StackVal, StackVal, Function_362() };
	bVar26 = -1.0f;
	if (bParam9)
	{
		bVar7 = START_CURVE_QUERY(Global_28841, vParam0, 2096, fParam3, fParam4, 20.0f, 0);
	}
	else
	{
		bVar7 = START_CURVE_QUERY(Global_28841, vParam0, 16, fParam3, fParam4, 2.0f, 0);
	}
	if (!IS_CURVE_QUERY_VALID(bVar7))
	{
		UNK_0xDF93BD7C(bVar7);
	}
	else if (!GET_NUM_POINTS_IN_CURVE_QUERY(bVar7) < 0)
	{
		UNK_0xDF93BD7C(bVar7);
	}
	else
	{
		iVar29 = GET_NUM_POINTS_IN_CURVE_QUERY(bVar7);
		bVar27 = false;
		while (bVar27 < (iVar29 - 1))
		{
			GET_POINT_FROM_CURVE_QUERY(bVar7, bVar27, &Var8);
			Function_282(&Var8);
			vVar3 = { StackVal, StackVal, Function_282(&Var8) };
			if (bVar26 > 0.0f || bVar26 < VDIST(vParam0, vVar3))
			{
				Var14 = { StackVal, StackVal, StackVal, StackVal, StackVal, Var8 };
				bVar26 = VDIST(vParam0, vVar3);
				bVar28 = bVar27;
				vVar0 = { StackVal, StackVal, vVar3 };
			}
			bVar27++;
		}
		bVar6 = GET_CURVE_FROM_POINT_INDEX_IN_CURVE_QUERY(bVar7, bVar28);
		*uParam5 = { StackVal, StackVal, vVar0 };
		if (fParam8 >= 0.0f)
		{
			fParam8 = 25.0f;
		}
		if (IS_OBJECT_VALID(bVar6))
		{
			UNK_0x19D652F9(bVar6, fParam8, &Var14, &iVar20);
			Function_282(&iVar20);
			*uParam6 = { StackVal, StackVal, Function_282(&iVar20) };
			UNK_0x19D652F9(bVar6, -fParam8, &Var14, &iVar20);
			Function_282(&iVar20);
			*uParam7 = { StackVal, StackVal, Function_282(&iVar20) };
		}
		else
		{
			Function_362();
			*uParam7 = { StackVal, StackVal, Function_362() };
			Function_362();
			*uParam6 = { StackVal, StackVal, Function_362() };
		}
		UNK_0xDF93BD7C(bVar7);
		return 1;
	}
	return 0;
}

vector3 Function_460(int iParam0) //Position: 0x12B4C / 76620
{
	return StackVal, StackVal, *(iParam0 + 4);
}

int Function_461(int iParam0, bool bParam1) //Position: 0x12B58 / 76632
{
	if (IS_LAYOUTREF_VALID(*iParam0))
	{
		LOG_ERROR("CREATEATTACK_SET_LAYOUT found a previously set layout");
		return 0;
	}
	if (bParam1 == "")
	{
		Function_412(iParam0);
	}
	else if (IS_LAYOUTREF_VALID(bParam1))
	{
		Function_59(iParam0 + 92, 16);
	}
	else
	{
		LOG_ERROR("CREATEATTACK_SET_LAYOUT was passed an invalid layout");
		return 0;
	}
	*iParam0 = bParam1;
	return 1;
}

void Function_462(int iParam0) //Position: 0x12C09 / 76809
{
	struct<8> Var0;
	
	if (!IS_LAYOUTREF_VALID(iParam0->f_832))
	{
		strcpy(&Var0, "matkdef_layout", 32);
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_290(&Var0) };
		iParam0->f_832 = CREATE_LAYOUT(&Var0);
		if (!IS_LAYOUTREF_VALID(iParam0->f_832))
		{
			LOG_ERROR("couldn't create internal matkdef layout");
		}
		iParam0->f_896 = 1;
	}
	return;
}

int Function_463(int iParam0) //Position: 0x12C86 / 76934
{
	if (!Function_470(iParam0))
	{
		if (Function_14(Function_469(iParam0)))
		{
			return 0;
		}
		Function_464(iParam0, Function_465(0, 1, 2));
		if (!Function_14(Function_469(iParam0)))
		{
			return 0;
		}
	}
	LOG_ERROR("Deeds are ignored, but Matkdef_CreatePendingDeed is being called");
	return 1;
}

void Function_464(int iParam0, int iParam1) //Position: 0x12D05 / 77061
{
	if (Function_14(iParam1))
	{
		iParam0->f_624 = iParam1;
		Function_59(iParam0 + 584, 32);
	}
	else
	{
		LOG_ERROR("PROCMISSION_SET_DEED received an invalid deed");
	}
	return;
}

int Function_465(bool bParam0, bool bParam1, bool bParam2) //Position: 0x12D5A / 77146
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_468(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_13172[iVar011] == iVar1)
		{
			return iVar0;
		}
		if (Global_13172[iVar011] != 0 && iVar0 < 0)
		{
			return Function_466(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_466(bParam0, bParam1, bParam2, 4294967295);
}

int Function_466(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x12DB8 / 77240
{
	var uVar0;
	
	if (!Function_306(bParam2))
	{
		return 4294967295;
	}
	if (bParam0 > 0 || bParam0 < 255)
	{
		return 4294967295;
	}
	if (bParam1 > 0 || bParam1 < 255)
	{
		return 4294967295;
	}
	uVar0 = Function_468(bParam0, bParam1, bParam2);
	if (bParam3 != 4294967295 || bParam3 <= 275)
	{
		bParam3 = Function_467(uVar0);
	}
	if (bParam3 == 4294967295)
	{
		return 4294967295;
	}
	if (bParam3 > 275)
	{
		return 4294967295;
	}
	if (Global_13172[bParam311] == 0)
	{
		PRINTSTRING(GET_SHORT_SCRIPT_NAME());
		PRINTSTRING(": Returning new deed ");
		PRINTINT(bParam3);
		PRINTSTRING(" ");
		PRINTINT(bParam0);
		PRINTSTRING(" ");
		PRINTINT(bParam1);
		PRINTSTRING(" ");
		PRINTINT(bParam2);
		PRINTNL();
		Global_16198[bParam3] = 0;
		Global_13172[bParam311].f_4 = 0;
		Global_13172[bParam311].f_8 = 0;
		Global_13172[bParam311].f_12 = 0;
		Global_13172[bParam311].f_16 = 0;
		Global_13172[bParam311] = uVar0;
	}
	else
	{
		PRINTSTRING(GET_SHORT_SCRIPT_NAME());
		PRINTSTRING(": Returning existing deed ");
		PRINTINT(bParam3);
		PRINTSTRING(" ");
		PRINTINT(bParam0);
		PRINTSTRING(" ");
		PRINTINT(bParam1);
		PRINTSTRING(" ");
		PRINTINT(bParam2);
		PRINTNL();
	}
	return bParam3;
}

int Function_467(int iParam0) //Position: 0x12F0D / 77581
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_13172[iVar011] == iParam0)
		{
			return iVar0;
		}
		if (Global_13172[iVar011] != 0 && iVar0 < 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

var Function_468(int iParam0, int iParam1, int iParam2) //Position: 0x12F4B / 77643
{
	return ((iParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

int Function_469(int iParam0) //Position: 0x12F6B / 77675
{
	return iParam0->f_624;
}

bool Function_470(int iParam0) //Position: 0x12F76 / 77686
{
	if (Function_86(iParam0->f_584, 32))
	{
		return 1;
	}
	return 0;
}

bool Function_471(int iParam0) //Position: 0x12F8F / 77711
{
	if (!Function_472(64, 0, 23, 0))
	{
		return 0;
	}
	iParam0->f_900 = iParam0->f_900;
	return 1;
}

bool Function_472(int iParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x12FAF / 77743
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0x00000001:
			iVar0 = Function_458(Global_30750[0], bParam1, bParam2, bParam3);
			break;
		
		case 0x00000002:
			iVar0 = Function_458(Global_30750[1], bParam1, bParam2, bParam3);
			break;
		
		case 0x00000004:
			iVar0 = Function_458(Global_30750[2], bParam1, bParam2, bParam3);
			break;
		
		case 0x00000008:
			iVar0 = Function_458(Global_30750[3], bParam1, bParam2, bParam3);
			break;
		
		case 0x00000010:
			iVar0 = Function_458(Global_30750[4], bParam1, bParam2, bParam3);
			break;
		
		case 0x00000020:
			iVar0 = Function_458(Global_30750[5], bParam1, bParam2, bParam3);
			break;
		
		case 0x00000040:
			iVar0 = Function_458(Global_30750[6], bParam1, bParam2, bParam3);
			break;
		
		case 0x00000080:
			iVar0 = Function_458(Global_30750[7], bParam1, bParam2, bParam3);
			break;
		
		case 0x00000100:
			iVar0 = Function_458(Global_30750[8], bParam1, bParam2, bParam3);
			break;
		
		case 0x00000200:
			iVar0 = Function_458(Global_30750[9], bParam1, bParam2, bParam3);
			break;
		
		case 0x00000400:
			iVar0 = Function_458(Global_30750[10], bParam1, bParam2, bParam3);
			break;
		
		case 0x00000800:
			iVar0 = Function_458(Global_30750[11], bParam1, bParam2, bParam3);
			break;
		
		case 0x00001000:
			iVar0 = Function_458(Global_30750[12], bParam1, bParam2, bParam3);
			break;
		
		case 0x00002000:
			iVar0 = Function_458(Global_30750[13], bParam1, bParam2, bParam3);
			break;
		
		case 0x40000000:
			iVar0 = 0;
			break;
		
		default:
			LOG_ERROR("Unhandled case in IS_POPSET_TYPES_FLAG_VALID.");
			iVar0 = 0;
			break;
	}
	return iVar0;
}

int Function_473(var uParam0, vector3 vParam1) //Position: 0x13177 / 78199
{
	if (Function_521(StackVal, StackVal, vParam1))
	{
		LOG_ERROR("Invalid StartPos");
		return 0;
	}
	Function_312(StackVal, StackVal, uParam0, vParam1);
	return 1;
}

bool Function_474(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4) //Position: 0x131AD / 78253
{
	struct<8> Var0;
	bool bVar8;
	bool bVar9;
	
	if (Global_3371 && iParam0->f_32)
	{
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_290(GET_SCRIPT_NAME()) };
		bVar8 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, StackVal, Global_26150, &Var0, 4.203895E-45f, Function_502(*(iParam0 + 8), 0.0f, Global_34573, *(iParam0 + 8)), 0.0f, iParam0->f_52, 20.0f, iParam0->f_52);
		DECOR_SET_INT(bVar8, "script", GET_THIS_SCRIPT_ID());
		if (iParam0->f_56 != 4294967295)
		{
			DECOR_SET_INT(StackVal, bVar8, "category");
			Function_500(&bVar8, iParam0->f_32);
		}
		else
		{
			LOG_ERROR("Trying to set volume restriction on a script that has an invalid ID");
		}
		*(iParam0 + 8) = { StackVal, StackVal, Global_34574 };
		return 1;
	}
	*uParam3 = 0;
	if (!Function_477(iParam0))
	{
		if (iParam0->f_32 == 1)
		{
			if (*uParam2 == 0)
			{
				Function_220("Still scanning for the proper terrain to run this event.  Move the player around to find a good spawn location.", -1.0f, 1, 2, 1, 0);
			}
		}
		else if (*uParam2 >= 20)
		{
			*uParam3 = 1;
			Global_26153++;
		}
		*uParam2++;
		*uParam1 = 1000;
		*(iParam0 + 8) = { 0.0f, 0.0f, 0.0f };
		return 0;
	}
	if (iParam0->f_32)
	{
		HUD_CLEAR_SMALL_TEXT_QUEUE();
		Global_3399 = 0;
		Function_220("THE EVENT HAS SPAWNED!!!  The event is marked with a CHECKER blip on your map", 5.0f, 1, 2, 1, 0);
	}
	if (bParam4)
	{
		if (!Function_475(iParam0->f_56, 0, 1, 0, 0))
		{
			*uParam3 = 1;
			LOG_ERROR("SET_BEAT_NEXT_SPAWN_TIME Failed, shutting down event");
			return 0;
		}
		if (iParam0->f_52 >= 0.0f)
		{
			LOG_ERROR("SET_BEAT_NEXT_SPAWN_TIME Failed: Volume restriction size not set");
			return 0;
		}
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_290("restrictVol") };
		bVar9 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, StackVal, Global_26150, &Var0, 4.203895E-45f, Function_502(*(iParam0 + 8), 0.0f, Global_34573, *(iParam0 + 8)), 0.0f, iParam0->f_52, 20.0f, iParam0->f_52);
		DECOR_SET_INT(bVar9, "script", GET_THIS_SCRIPT_ID());
		if (iParam0->f_56 != 4294967295)
		{
			DECOR_SET_INT(StackVal, bVar9, "category");
			Function_500(&bVar9, iParam0->f_32);
		}
		else
		{
			LOG_ERROR("Trying to set volume restriction on a script that has an invalid ID");
		}
	}
	return 1;
}

bool Function_475(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x1353F / 79167
{
	bool bVar0;
	bool bVar1;
	
	if (Global_30842[16])
	{
		PRINTSTRING(GET_ASSET_NAME(Global_17483[iParam075].f_96, 4));
	}
	uParam1 = uParam1;
	if (bParam4)
	{
		HUD_CLEAR_OBJECTIVE_QUEUE();
		Global_3399 = 0;
		Function_220("THE EVENT HAS SPAWNED!!!  The event is marked with a CHECKER blip on your map", 10.0f, 1, 2, 1, 0);
		if (StackVal & 128 == 128)
		{
			Global_17483[iParam075].f_116 = 0;
		}
		if (StackVal & 64 == 64)
		{
			if (Global_3367)
			{
				if (IS_SCRIPT_VALID(Global_6281) && Global_6281 == GET_THIS_SCRIPT_ID())
				{
					return 0;
				}
			}
			Global_3367 = 1;
			Global_6281 = GET_THIS_SCRIPT_ID();
		}
		return 1;
	}
	if (iParam0 != 4294967295)
	{
		bVar0 = GET_TIME_OF_DAY();
		bVar1 = GET_TOTAL_MINUTES(Global_17483[iParam075].f_260);
		if (Global_30842[16])
		{
			PRINTSTRING("Current Time of day:");
			Function_476(bVar0);
			PRINTNL();
			PRINTSTRING("timebtwnEvents (in minutes):");
			PRINTINT(bVar1);
			PRINTNL();
			PRINTSTRING("Formed time of day:");
			Function_476(bVar0);
		}
		if (!bParam3)
		{
			ADD_TIME(&bVar0, 0, 0, bVar1, 0);
		}
		else
		{
			ADD_TIME(&bVar0, 0, 0, 10, 0);
		}
		if (Global_30842[16])
		{
			PRINTSTRING("Formed time of day:");
			Function_476(bVar0);
		}
		Global_17483[iParam075].f_264 = bVar0;
		Global_16876[iParam06] = bVar0;
		if (bParam2)
		{
			Global_16876[iParam06].f_4 = StackVal + 1;
			if (StackVal & 128 == 128)
			{
				Global_17483[iParam075].f_116 = 0;
			}
			if (StackVal & 64 == 64)
			{
				if (Global_3367)
				{
					if (IS_SCRIPT_VALID(Global_6281) && Global_6281 == GET_THIS_SCRIPT_ID())
					{
						return 0;
					}
				}
				Global_3367 = 1;
				Global_6281 = GET_THIS_SCRIPT_ID();
			}
		}
		return 1;
	}
	LOG_ERROR("Invalid beat index");
	return 0;
}

void Function_476(bool bParam0) //Position: 0x1379C / 79772
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

bool Function_477(int iParam0) //Position: 0x137E2 / 79842
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	float fVar12;
	float fVar13;
	bool bVar14;
	struct<17> Var15;
	
	GET_POSITION(GET_PLAYER_ACTOR(0), &vVar9);
	switch (iParam0->f_64)
	{
		case 0x00000005:
			if (!IS_ITERATOR_VALID(StackVal))
			{
				if (IS_LAYOUTREF_VALID(Global_30616))
				{
					iParam0->f_4 = CREATE_OBJECT_ITERATOR(Global_30616);
				}
				else
				{
					return 0;
				}
			}
			Function_303(iParam0 + 4);
			switch ((iParam0 + 64 + 24)->f_20)
			{
				case 0x00000000:
					ITERATE_IN_LAYOUT(StackVal, Global_30616);
					break;
				
				case 0x00000001:
					ITERATE_IN_LAYOUT(StackVal, FIND_NAMED_LAYOUT("regions_layout"));
					break;
			}
			if (StackVal < 0.0f)
			{
				vVar3 = { 0.0f, 0.0f, Function_368(1) };
				ROTATE_VECTOR_XZ(&vVar3, GET_HEADING(GET_PLAYER_ACTOR(0)), 0);
				vVar3 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar9, vVar3, StackVal) };
				ITERATE_IN_SPHERE(StackVal, vVar3, Function_368(1));
			}
			if (!STRINGS_ARE_EQUAL(iParam0 + 64 + 24, ""))
			{
				ITERATE_ON_PARTIAL_NAME(StackVal, iParam0 + 64 + 24);
			}
			if (!4294967295 != (iParam0 + 64 + 24)->f_12)
			{
				ITERATE_ON_OBJECT_TYPE(StackVal, (iParam0 + 64 + 24)->f_12);
			}
			if (GET_NUM_ITERATOR_MATCHES(StackVal) >= 0)
			{
				if (StackVal & 512 == 0 || iParam0->f_36 != 1)
				{
					if ((iParam0 + 64 + 24)->f_16 == 0)
					{
						bVar0 = Function_499(StackVal, StackVal, StackVal, vVar9, 0.01f);
					}
					else
					{
						bVar0 = Function_498(StackVal, StackVal, StackVal, vVar9, 0.1f, "locflag", (iParam0 + 64 + 24)->f_16);
					}
				}
				else if ((iParam0 + 64 + 24)->f_16 == 0)
				{
					bVar0 = Function_496(StackVal, StackVal, StackVal, vVar9, Function_497());
				}
				else
				{
					bVar0 = Function_495(StackVal, StackVal, StackVal, vVar9, Function_497(), "locflag", (iParam0 + 64 + 24)->f_16);
				}
				if (IS_OBJECT_VALID(bVar0))
				{
					GET_OBJECT_POSITION(bVar0, iParam0 + 8);
					GET_OBJECT_ORIENTATION(bVar0, iParam0 + 20);
					iParam0->f_48 = bVar0;
					DESTROY_ITERATOR(StackVal);
				}
				else
				{
					DESTROY_ITERATOR(StackVal);
					return 0;
				}
			}
			DESTROY_ITERATOR(StackVal);
			return 0;
			break;
		
		case 0x00000006:
			if (!IS_ITERATOR_VALID(StackVal))
			{
				iParam0->f_4 = CREATE_OBJECT_ITERATOR(FIND_NAMED_LAYOUT("regions_layout"));
			}
			Function_303(iParam0 + 4);
			ITERATE_IN_LAYOUT(StackVal, FIND_NAMED_LAYOUT("regions_layout"));
			fVar13 = 130.0f;
			fVar12 = 190.0f;
			GET_POSITION(GET_PLAYER_ACTOR(0), &vVar3);
			ITERATE_IN_SPHERE(StackVal, StackVal, vVar3);
			bVar1 = START_OBJECT_ITERATOR(StackVal);
			while (IS_OBJECT_VALID(bVar1) && !IS_OBJECT_VALID(bVar0))
			{
				if (DECOR_CHECK_EXIST(bVar1, "regid"))
				{
					bVar14 = DECOR_GET_INT(bVar1, "regid");
					if (Function_67(bVar14))
					{
						if (StackVal == (iParam0 + 64)->f_48)
						{
							if ((StackVal && Global_29008[bVar14]) >= 0)
							{
								GET_OBJECT_POSITION(bVar1, &vVar3);
								if (VDIST(vVar9, vVar3) < fVar13 && VDIST(vVar9, vVar3) > Function_368(1))
								{
									bVar0 = bVar1;
								}
							}
						}
					}
				}
				bVar1 = OBJECT_ITERATOR_NEXT(StackVal);
			}
			if (IS_OBJECT_VALID(bVar0))
			{
				GET_OBJECT_POSITION(bVar0, iParam0 + 8);
				Function_263(iParam0 + 8, 99.0f, iParam0 + 8, 10);
				GET_OBJECT_ORIENTATION(bVar0, iParam0 + 20);
				iParam0->f_48 = DECOR_GET_INT(bVar0, "regid");
			}
			else
			{
				DESTROY_ITERATOR(StackVal);
				return 0;
			}
			break;
		
		case 0x00000002:
		case 0x00000001:
			if (StackVal && (((!Global_3386 && Global_3388) && ARE_CURVES_IN_RANGE(48, vVar9, 100.0f)) && 8) != 8)
			{
				vVar6 = { 0.0f, 0.0f, -10.0f };
				ROTATE_VECTOR_XZ(&vVar6, GET_HEADING(GET_PLAYER_ACTOR(0)), 0);
				Function_494(&vVar9, &vVar6);
				vVar3 = { StackVal, StackVal, Function_494(&vVar9, &vVar6) };
				if (!Function_521(StackVal, StackVal, vVar3))
				{
					PRINTSTRING("Player Pos: ");
					PRINTVECTOR(vVar9);
					PRINTNL();
					Function_369(&fVar13, &fVar12);
					if (VDIST(vVar3, vVar9) < ((fVar13 + ((fVar12 - fVar13) / 2.0f)) * 0.8f))
					{
						iVar2 = Function_492(StackVal, StackVal, iParam0, vVar3);
					}
				}
			}
			else
			{
				iVar2 = Function_491(iParam0);
			}
			if (iVar2 == 1)
			{
				if ((iParam0 + 64)->f_128 == 4)
				{
					if (IS_OBJECT_VALID(StackVal))
					{
						if (GET_OBJECT_TYPE(StackVal) == 9)
						{
							if (!IS_POINT_IN_VOLUME(StackVal, *(iParam0 + 8)))
							{
								return 0;
							}
						}
					}
				}
				if ((iParam0 + 64)->f_128 == 5)
				{
				}
				if (iParam0->f_60 == 2)
				{
					if (!Function_490(StackVal, StackVal, *(iParam0 + 8)))
					{
						return 0;
					}
				}
				if (iParam0->f_60 == 1)
				{
					if (!Function_489(StackVal, StackVal, *(iParam0 + 8)))
					{
						return 0;
					}
				}
				if (Function_86(StackVal, 131072))
				{
					if (StackVal || Function_488(StackVal, Function_488(StackVal, StackVal, *(iParam0 + 8)), Global_34574))
					{
						return 0;
					}
				}
				if (StackVal & 1024 == 1024)
				{
					if (Function_487(StackVal, StackVal, *(iParam0 + 8)))
					{
						return 0;
					}
				}
				if (!Function_484(iParam0 + 8, iParam0 + 52, 0, iParam0->f_32))
				{
					return 0;
				}
			}
			return 0;
			break;
		
		case 0x00000003:
			if (StackVal)
			{
				fVar13 = 120.0f;
				fVar12 = 150.0f;
				vVar3 = { 0.0f, 0.0f, ((fVar13 + fVar12) * -0.5f) };
				ROTATE_VECTOR_XZ(&vVar3, GET_HEADING(GET_PLAYER_ACTOR(0)), 0);
				vVar3 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar9, vVar3, StackVal) };
				bVar23 = START_CURVE_QUERY(Global_28841, vVar3, Function_261((iParam0 + 64)->f_120, 0), 0.0f, 20.0f, 5.0f, 0);
			}
			else
			{
				bVar23 = START_CURVE_QUERY(Global_28841, vVar9, Function_261((iParam0 + 64)->f_120, 0), 120.0f, 150.0f, 5.0f, 0);
			}
			if (GET_NUM_POINTS_IN_CURVE_QUERY(bVar23) >= 0)
			{
				bVar21 = RAND_INT_RANGE(0, (GET_NUM_POINTS_IN_CURVE_QUERY(bVar23) - 1));
				GET_POINT_FROM_CURVE_QUERY(bVar23, bVar21, &Var15);
				Function_282(&Var15);
				*(iParam0 + 8) = { StackVal, StackVal, Function_282(&Var15) };
				iParam0->f_20 = Var15.f_12;
				(iParam0 + 20)->f_4 = Var15.f_16;
				iParam0->f_48 = GET_CURVE_FROM_POINT_INDEX_IN_CURVE_QUERY(bVar23, bVar21);
				UNK_0xDF93BD7C(bVar23);
			}
			else
			{
				UNK_0xDF93BD7C(bVar23);
				return 0;
			}
			if (iParam0->f_60 == 2)
			{
				if (!Function_490(StackVal, StackVal, *(iParam0 + 8)))
				{
					return 0;
				}
			}
			if (iParam0->f_60 == 1)
			{
				if (!Function_489(StackVal, StackVal, *(iParam0 + 8)))
				{
					return 0;
				}
			}
			if (iParam0->f_60 == 0)
			{
				if (!(StackVal || Function_490(StackVal, Function_489(StackVal, StackVal, *(iParam0 + 8)), *(iParam0 + 8))))
				{
					return 0;
				}
			}
			if (Function_86(StackVal, 131072))
			{
				if (StackVal || Function_488(StackVal, Function_488(StackVal, StackVal, *(iParam0 + 8)), Global_34574))
				{
					return 0;
				}
			}
			if (StackVal && !Function_484(iParam0 + 8, iParam0 + 52, 0, iParam0->f_32) == 262144)
			{
				return 0;
			}
			break;
		
		case 0x00000004:
			if (!Function_482((iParam0 + 64)->f_120) < 0)
			{
				return 0;
			}
			break;
		
		case 0x00000007:
			switch ((iParam0 + 64)->f_128)
			{
				case 0x00000001:
					bVar24 = Function_479(StackVal, Global_29004, Global_29005, Global_29006, 1);
					if (IS_PERS_CHAR_VALID(bVar24))
					{
						if (IS_PERS_CHAR_ALIVE(bVar24))
						{
							return 0;
						}
					}
					break;
				
				case 0x00000002:
					iVar22 = 0;
					while (StackVal <= (StackVal - iVar22) + 1)
					{
						bVar24 = Function_479(StackVal, Global_29004, Global_29005, (Global_29006 + iVar22), 1);
						if (IS_PERS_CHAR_VALID(bVar24))
						{
							if (IS_PERS_CHAR_ALIVE(bVar24))
							{
								iVar25++;
							}
						}
						iVar22++;
					}
					if (iVar25 >= 0)
					{
						return 0;
					}
					break;
				
				case 0x00000003:
					if (!IS_ACTOR_IN_VOLUME(StackVal, GET_PLAYER_ACTOR(0)))
					{
						return 0;
					}
					break;
				
				case 0x00000004:
					iParam0->f_48 = StackVal;
					break;
				
				default:
					LOG_ERROR("TRIGGER_NONE event type??");
					return 0;
					break;
			}
			break;
		
		default:
			LOG_ERROR("AMB_EVENT type not defined for BEAT_SET_LAUNCH_PARAMS_FOR_BEAT");
			return 0;
			break;
	}
	if (Function_478(StackVal, StackVal, *(iParam0 + 8)))
	{
		return 0;
	}
	if (!STREAMING_ARE_BOUNDS_LOADED(*(iParam0 + 8), 10.0f))
	{
		return 0;
	}
	return 1;
}

bool Function_478(vector3 vParam0) //Position: 0x14010 / 81936
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 <= GET_OBJECTSET_SIZE(Global_25964))
	{
		if (IS_POINT_IN_VOLUME(vParam0, GET_VOLUME_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, Global_25964))))
		{
			return 1;
		}
		bVar0++;
	}
	return 0;
}

bool Function_479(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x14045 / 81989
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = bParam1;
	bVar1 = bParam2;
	PRINTSTRING("RC_REFERENCE_GLOBAL ");
	PRINTINT(bParam0);
	PRINTSTRING("-");
	PRINTINT(bVar0);
	PRINTSTRING("-");
	PRINTINT(bVar1);
	PRINTSTRING(" ");
	PRINTINT(bParam3);
	PRINTNL();
	if (!bParam4)
	{
		switch (bParam0)
		{
			case 0x00000000:
				switch (bVar0)
				{
					case 0x00000000:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_480(&Global_6298, &Global_7189, bParam3);
								break;
							
							case 0x00000001:
								return Function_480(&Global_6364, &Global_7287, bParam3);
								break;
							
							case 0x00000002:
								return Function_480(&Global_6351, &Global_7268, bParam3);
								break;
							
							default:
								return Function_480(&Global_6391, &Global_7327, bParam3);
								break;
						}
						break;
					
					case 0x00000001:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_480(&Global_6501, &Global_7490, bParam3);
								break;
							
							case 0x00000001:
								return Function_480(&Global_6402, &Global_7343, bParam3);
								break;
							
							case 0x00000003:
								return Function_480(&Global_6433, &Global_7389, bParam3);
								break;
							
							case 0x00000002:
								return Function_480(&Global_6490, &Global_7474, bParam3);
								break;
							
							case 0x00000004:
								return Function_480(&Global_6537, &Global_7543, bParam3);
								break;
							
							default:
								return Function_480(&Global_6532, &Global_7536, bParam3);
								break;
						}
						break;
					
					case 0x00000002:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_480(&Global_6563, &Global_7581, bParam3);
								break;
							
							case 0x00000001:
								return Function_480(&Global_6614, &Global_7657, bParam3);
								break;
							
							case 0x00000002:
								return Function_480(&Global_6643, &Global_7700, bParam3);
								break;
							
							default:
								return Function_480(&Global_6550, &Global_7562, bParam3);
								break;
						}
						break;
					
					case 0x00000003:
						switch (bVar1)
						{
							case 0x00000001:
								return Function_480(&Global_6667, &Global_7735, bParam3);
								break;
							
							default:
								return Function_480(&Global_6704, &Global_7790, bParam3);
								break;
						}
						break;
					
					default:
						break;
				}
				break;
			
			case 0x00000001:
				switch (bVar0)
				{
					case 0x00000000:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_480(&Global_6709, &Global_7797, bParam3);
								break;
							
							case 0x00000001:
								return Function_480(&Global_6764, &Global_7879, bParam3);
								break;
							
							case 0x00000002:
								return Function_480(&Global_6785, &Global_7910, bParam3);
								break;
							
							default:
								return Function_480(&Global_6810, &Global_7947, bParam3);
								break;
						}
						break;
					
					case 0x00000002:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_480(&Global_6815, &Global_7954, bParam3);
								break;
							
							default:
								return Function_480(&Global_6928, &Global_8122, bParam3);
								break;
						}
						break;
					
					case 0x00000001:
						switch (bVar1)
						{
							case 0x00000002:
								return Function_480(&Global_6933, &Global_8129, bParam3);
								break;
							
							case 0x00000001:
								return Function_480(&Global_6962, &Global_8172, bParam3);
								break;
							
							case 0x00000003:
								return Function_480(&Global_6987, &Global_8209, bParam3);
								break;
							
							default:
								return Function_480(&Global_7027, &Global_8268, bParam3);
								break;
						}
						break;
					
					default:
						break;
				}
				break;
			
			case 0x00000002:
				return "";
				break;
			
			default:
				return "";
				break;
		}
	}
	else if (bVar1 == Global_30640[0])
	{
		return Function_480(&Global_6298, &Global_7189, bParam3);
	}
	if (bVar1 == Global_30640[1])
	{
		return Function_480(&Global_6364, &Global_7287, bParam3);
	}
	if (bVar1 == Global_30640[2])
	{
		return Function_480(&Global_6351, &Global_7268, bParam3);
	}
	if (bVar1 == Global_30658[0])
	{
		return Function_480(&Global_6501, &Global_7490, bParam3);
	}
	if (bVar1 == Global_30658[1])
	{
		return Function_480(&Global_6402, &Global_7343, bParam3);
	}
	if (bVar1 == Global_30658[3])
	{
		return Function_480(&Global_6433, &Global_7389, bParam3);
	}
	if (bVar1 == Global_30658[2])
	{
		return Function_480(&Global_6490, &Global_7474, bParam3);
	}
	if (bVar1 == Global_30658[4])
	{
		return Function_480(&Global_6537, &Global_7543, bParam3);
	}
	if (bVar1 == Global_30668[0])
	{
		return Function_480(&Global_6563, &Global_7581, bParam3);
	}
	if (bVar1 == Global_30668[1])
	{
		return Function_480(&Global_6614, &Global_7657, bParam3);
	}
	if (bVar1 == Global_30668[2])
	{
		return Function_480(&Global_6643, &Global_7700, bParam3);
	}
	if (bVar1 == Global_30679[1])
	{
		return Function_480(&Global_6667, &Global_7735, bParam3);
	}
	if (bVar1 == Global_30685[0])
	{
		return Function_480(&Global_6709, &Global_7797, bParam3);
	}
	if (bVar1 == Global_30685[1])
	{
		return Function_480(&Global_6764, &Global_7879, bParam3);
	}
	if (bVar1 == Global_30685[2])
	{
		return Function_480(&Global_6785, &Global_7910, bParam3);
	}
	if (bVar1 == Global_30693[0])
	{
		return Function_480(&Global_6815, &Global_7954, bParam3);
	}
	if (bVar1 == Global_30707[2])
	{
		return Function_480(&Global_6933, &Global_8129, bParam3);
	}
	if (bVar1 == Global_30707[1])
	{
		return Function_480(&Global_6962, &Global_8172, bParam3);
	}
	if (bVar1 == Global_30707[3])
	{
		return Function_480(&Global_6987, &Global_8209, bParam3);
	}
	if (bVar1 == Global_30628[0])
	{
		return Function_480(&Global_6391, &Global_7327, bParam3);
	}
	if (bVar1 == Global_30628[1])
	{
		return Function_480(&Global_6532, &Global_7536, bParam3);
	}
	if (bVar1 == Global_30628[2])
	{
		return Function_480(&Global_6550, &Global_7562, bParam3);
	}
	if (bVar1 == Global_30628[3])
	{
		return Function_480(&Global_6704, &Global_7790, bParam3);
	}
	if (bVar1 == Global_30633[0])
	{
		return Function_480(&Global_6810, &Global_7947, bParam3);
	}
	if (bVar1 == Global_30633[2])
	{
		return Function_480(&Global_6928, &Global_8122, bParam3);
	}
	if (bVar1 == Global_30633[1])
	{
		return Function_480(&Global_7027, &Global_8268, bParam3);
	}
	return "";
}

var Function_480(var uParam0, var uParam1, bool bParam2) //Position: 0x1465A / 83546
{
	int iVar0;
	
	iVar0 = bParam2;
	if (iVar0 <= *uParam0 || iVar0 > 0)
	{
		return "";
	}
	if (!Function_481(uParam0[iVar02], 2))
	{
		return "";
	}
	if (!IS_PERS_CHAR_VALID(StackVal))
	{
		return "";
	}
	ACTIVATE_ACTOR_FOR_PERS_CHAR(StackVal);
	return StackVal;
}

bool Function_481(var uParam0, int iParam1) //Position: 0x146AC / 83628
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_482(int iParam0) //Position: 0x146C8 / 83656
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	iVar0 = 0;
	bVar1 = CREATE_OBJECT_ITERATOR(Global_28841);
	ITERATE_ON_OBJECT_TYPE(bVar1, 25);
	bVar2 = START_OBJECT_ITERATOR(bVar1);
	if (iParam0 == 0)
	{
		iVar0 = GET_NUM_ITERATOR_MATCHES(bVar1);
	}
	else
	{
		while (IS_OBJECT_VALID(bVar2))
		{
			if (Function_483(GET_SQUAD_FROM_OBJECT(bVar2)) == iParam0)
			{
				iVar0++;
			}
			bVar2 = OBJECT_ITERATOR_NEXT(bVar1);
		}
	}
	DESTROY_ITERATOR(bVar1);
	return iVar0;
}

int Function_483(bool bParam0) //Position: 0x14723 / 83747
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return 4294967295;
	}
	bVar0 = Function_265(bParam0);
	if (!IS_ACTOR_VALID(bVar0))
	{
		return 4294967295;
	}
	if (IS_ACTOR_RIDING_VEHICLE(bVar0))
	{
		return 2;
	}
	if (IS_ACTOR_RIDING(bVar0))
	{
		return 1;
	}
	return 4294967295;
}

bool Function_484(var uParam0, float fParam1, int iParam2, bool bParam3) //Position: 0x1475B / 83803
{
	var uVar0;
	int iVar3;
	bool bVar4;
	float fVar5;
	bool bVar6;
	
	if (bParam3)
	{
		return 1;
	}
	bVar4 = false;
	Function_485(4294967295);
	iVar3 = 0;
	while (iVar3 <= 25)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
			bVar6 = DECOR_GET_INT(StackVal, "category");
			if (iParam2 != 0)
			{
				if (bVar6 != iParam2 && iParam2 != 256)
				{
					bVar4 = true;
				}
			}
			GET_VOLUME_CENTER(StackVal, &uVar0);
			if (iParam2 != 262144)
			{
				if (IS_POINT_IN_VOLUME(StackVal, *uParam0))
				{
					return 0;
				}
			}
			fVar5 = *fParam1;
			if (bVar4)
			{
				fVar5 = (fVar5 + 170.0f);
			}
			if (Global_3386 && bVar6 != 512)
			{
			}
			else if (Function_209(uParam0, &uVar0) > fVar5)
			{
				return 0;
			}
		}
		iVar3++;
	}
	return 1;
}

int Function_485(bool bParam0) //Position: 0x1482B / 84011
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
			if (DECOR_CHECK_EXIST(StackVal, "script"))
			{
				if (!IS_SCRIPT_VALID(DECOR_GET_INT(StackVal, "script")))
				{
					GET_VOLUME_CENTER(StackVal, &vVar1);
					if (IS_BLIP_VALID(StackVal))
					{
						REMOVE_BLIP(StackVal);
					}
					if (!IS_ACTOR_VALID(Global_34573))
					{
						Function_486(iVar0);
					}
					else if (Global_3386)
					{
						if (Function_310(StackVal, StackVal, Global_34573, vVar1) < 25.0f)
						{
							Function_486(iVar0);
						}
					}
					else if (Function_310(StackVal, StackVal, Global_34573, vVar1) < 55.0f)
					{
						Function_486(iVar0);
					}
				}
				else if (DECOR_GET_INT(StackVal, "script") == bParam0)
				{
					LOG_ERROR("duplicate script id..This should never happen...Tell Steve");
					PRINTSTRING("Duplicate Script Id:");
					PRINTINT(bParam0);
					RELEASE_VOLUME(StackVal);
				}
			}
		}
		else
		{
			Function_486(iVar0);
		}
		iVar0++;
	}
	return 0;
}

void Function_486(int iParam0) //Position: 0x1498C / 84364
{
	if (IS_VOLUME_VALID(Global_26155[iParam05].f_12))
	{
		REMOVE_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(Global_26155[iParam05].f_12, 0);
		REMOVE_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(Global_26155[iParam05].f_12);
	}
	if (IS_BLIP_VALID(StackVal))
	{
		REMOVE_BLIP(StackVal);
	}
	RELEASE_VOLUME(StackVal);
	RELEASE_VOLUME(Global_26155[iParam05].f_12);
	return;
}

bool Function_487(vector3 vParam0) //Position: 0x149ED / 84461
{
	struct<9> Var0;
	
	iVar7 = 0;
	while (iVar7 <= Global_29008)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
			if (StackVal || (StackVal || StackVal != 3 != 4) != 5)
			{
				if (GET_OBJECT_TYPE(StackVal) == 9)
				{
					GET_VOLUME_SCALE(StackVal, &vVar0);
					GET_VOLUME_CENTER(StackVal, &vVar3);
					bVar6 = VDIST(vParam0, vVar3);
					if ((bVar6 - ((vVar0.x + vVar0.z) / 2.0f)) > 60.0f)
					{
						return 1;
					}
				}
			}
		}
		iVar7++;
	}
	return 0;
}

int Function_488(vector3 vParam0) //Position: 0x14A8E / 84622
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_29008)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
			if (IS_POINT_IN_VOLUME(StackVal, vParam0))
			{
				if (StackVal == 4)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool Function_489(vector3 vParam0) //Position: 0x14ADA / 84698
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_29008)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
			if (IS_POINT_IN_VOLUME(StackVal, vParam0))
			{
				if (StackVal || StackVal != 3 != 4)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool Function_490(vector3 vParam0) //Position: 0x14B33 / 84787
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

int Function_491(int iParam0) //Position: 0x14BB0 / 84912
{
	float fVar0;
	bool bVar1;
	
	Function_369(&fVar0, &bVar1);
	AMBIENT_RESET_FILTER(0);
	AMBIENT_SET_SEARCH_CENTER_PLAYER();
	AMBIENT_SET_DISTANCE_FILTER(fVar0, bVar1);
	Function_446(0);
	AMBIENT_ENABLE_QUADRANT_FILTER(1);
	AMBIENT_SET_QUADRANT_FILTER(1, 0, 0, 0);
	if ((iParam0 + 64 + 60)->f_44 == 0.0f)
	{
		if ((iParam0 + 64 + 60)->f_48 == 0.0f)
		{
			AMBIENT_SET_SLOPE_FILTER_PRECISE(0.0f, (iParam0 + 64 + 60)->f_44, (iParam0 + 64 + 60)->f_48);
		}
		else
		{
			AMBIENT_SET_SLOPE_FILTER_PRECISE(StackVal, 0.0f, (iParam0 + 64 + 60)->f_44);
		}
	}
	else
	{
		Function_443(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 64 + 60));
	}
	if ((iParam0 + 64 + 60)->f_52 == 0.0f)
	{
		if ((iParam0 + 64 + 60)->f_56 == 0.0f)
		{
			AMBIENT_SET_BUMP_FILTER(0.0f, (iParam0 + 64 + 60)->f_52, (iParam0 + 64 + 60)->f_56);
		}
		else
		{
			AMBIENT_SET_BUMP_FILTER(StackVal, 0.0f, (iParam0 + 64 + 60)->f_52);
		}
	}
	Function_442(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 64 + 60));
	AMBIENT_SET_ONESHOT_QUERIES(0);
	AMBIENT_SET_RANDOM_SEARCH_ORDER(1);
	if (Global_30842[34])
	{
		PRINTSTRING("HeightDeviation is set to:");
		PRINTFLOAT((iParam0 + 64 + 60)->f_28);
		PRINTNL();
		PRINTSTRING("Elevation Derivative is set to:");
		PRINTFLOAT((iParam0 + 64 + 60)->f_36);
		PRINTNL();
	}
	if ((iParam0 + 64 + 60)->f_28 == 0.0f)
	{
		UNK_0x0AC99007(StackVal, (iParam0 + 64 + 60)->f_28);
		UNK_0x30C67D05(1);
	}
	if ((iParam0 + 64 + 60)->f_36 == 0.0f)
	{
		AMBIENT_SET_ELEVATION_DERIVATIVE_IN_AREA_FILTER((iParam0 + 64 + 60)->f_36, (iParam0 + 64 + 60)->f_40);
		AMBIENT_ENABLE_ELEVATION_DERIVATIVE_IN_AREA_FILTER(1);
	}
	if (AMBIENT_GET_POINT(iParam0 + 8, 0))
	{
		return 1;
	}
	return 0;
}

int Function_492(int iParam0, vector3 vParam1) //Position: 0x14D4B / 85323
{
	AMBIENT_RESET_FILTER(0);
	AMBIENT_SET_SEARCH_CENTER(vParam1);
	if (Global_30842[34])
	{
		PRINTVECTOR(vParam1);
		PRINTNL();
	}
	Function_493();
	Function_446(0);
	Function_444(0);
	if ((iParam0 + 64 + 60)->f_44 == 0.0f)
	{
		if ((iParam0 + 64 + 60)->f_48 == 0.0f)
		{
			AMBIENT_SET_SLOPE_FILTER_PRECISE(0.0f, (iParam0 + 64 + 60)->f_44, (iParam0 + 64 + 60)->f_48);
		}
		else
		{
			AMBIENT_SET_SLOPE_FILTER_PRECISE(StackVal, 0.0f, (iParam0 + 64 + 60)->f_44);
		}
	}
	else
	{
		Function_443(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 64 + 60));
	}
	if ((iParam0 + 64 + 60)->f_52 == 0.0f)
	{
		if ((iParam0 + 64 + 60)->f_56 == 0.0f)
		{
			AMBIENT_SET_BUMP_FILTER(0.0f, (iParam0 + 64 + 60)->f_52, (iParam0 + 64 + 60)->f_56);
		}
		else
		{
			AMBIENT_SET_BUMP_FILTER(StackVal, 0.0f, (iParam0 + 64 + 60)->f_52);
		}
	}
	Function_442(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 64 + 60));
	AMBIENT_SET_ONESHOT_QUERIES(0);
	AMBIENT_SET_RANDOM_SEARCH_ORDER(1);
	if (Global_30842[34])
	{
		PRINTSTRING("HeightDeviation is set to:");
		PRINTFLOAT((iParam0 + 64 + 60)->f_28);
		PRINTNL();
		PRINTSTRING("Elevation Derivative is set to:");
		PRINTFLOAT((iParam0 + 64 + 60)->f_36);
		PRINTNL();
	}
	if ((iParam0 + 64 + 60)->f_28 == 0.0f)
	{
		UNK_0x0AC99007(StackVal, (iParam0 + 64 + 60)->f_28);
		UNK_0x30C67D05(1);
	}
	if ((iParam0 + 64 + 60)->f_36 == 0.0f)
	{
		AMBIENT_SET_ELEVATION_DERIVATIVE_IN_AREA_FILTER((iParam0 + 64 + 60)->f_36, (iParam0 + 64 + 60)->f_40);
		AMBIENT_ENABLE_ELEVATION_DERIVATIVE_IN_AREA_FILTER(1);
	}
	if (AMBIENT_GET_POINT(iParam0 + 8, 0))
	{
		return 1;
	}
	return 0;
}

void Function_493() //Position: 0x14EED / 85741
{
	AMBIENT_SET_DISTANCE_FILTER(0.0f, 24.0f);
	return;
}

vector3 Function_494(var uParam0, int iParam1) //Position: 0x14EFC / 85756
{
	var uVar0;
	bool bVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	bool bVar10;
	vector3 vVar11;
	float fVar14;
	float fVar15;
	vector3 vVar16;
	vector3 vVar19;
	vector3 vVar22;
	int iVar25;
	int iVar31;
	
	bVar10 = START_CURVE_QUERY(Global_28841, *uParam0, 48, 0.0f, 7.0f, 5.0f, 0);
	if (!GET_NUM_CURVES_IN_CURVE_QUERY(bVar10) < 0)
	{
		UNK_0xDF93BD7C(bVar10);
		vVar11 = { 0.0f, 0.0f, 0.0f };
		return StackVal, StackVal, vVar11;
	}
	GET_POINT_FROM_CURVE_QUERY(bVar10, false, &uVar0);
	bVar6 = GET_CURVE_FROM_POINT_INDEX_IN_CURVE_QUERY(bVar10, false);
	if (IS_OBJECT_VALID(bVar6))
	{
		vVar16 = { StackVal, StackVal, *iParam1 };
		UNK_0x19D652F9(bVar6, 50.0f, &uVar0, &iVar25);
		UNK_0x19D652F9(bVar6, -50.0f, &uVar0, &iVar31);
		Function_282(&iVar25);
		vVar19 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*uParam0, Function_282(&iVar25), StackVal) };
		Function_282(&iVar31);
		vVar22 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*uParam0, Function_282(&iVar31), StackVal) };
		fVar15 = VDOT(&vVar16, &vVar19);
		fVar14 = VDOT(&vVar16, &vVar22);
		Function_369(&fVar7, &fVar8);
		fVar9 = ((fVar7 + fVar8) / 2.0f);
		if (fVar15 > 0.0f && fVar14 > 0.0f)
		{
			UNK_0xDF93BD7C(bVar10);
			vVar11 = { 0.0f, 0.0f, 0.0f };
			return StackVal, StackVal, vVar11;
		}
		if (fVar15 > fVar14)
		{
			UNK_0x19D652F9(bVar6, (fVar9 * -1.0f), &uVar0, &iVar31);
			Function_282(&iVar31);
			vVar11 = { StackVal, StackVal, Function_282(&iVar31) };
		}
		else
		{
			UNK_0x19D652F9(bVar6, fVar9, &uVar0, &iVar25);
			Function_282(&iVar25);
			vVar11 = { StackVal, StackVal, Function_282(&iVar25) };
		}
	}
	UNK_0xDF93BD7C(bVar10);
	return StackVal, StackVal, vVar11;
}

var Function_495(bool bParam0, vector3 vParam1, float fParam4, bool bParam5, var uParam6) //Position: 0x15009 / 86025
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;
	vector3 vVar5;
	
	fVar4 = 50.0f;
	bVar3 = -1.0f;
	bVar0 = START_OBJECT_ITERATOR(bParam0);
	while (IS_OBJECT_VALID(bVar0))
	{
		GET_OBJECT_POSITION(bVar0, &vVar5);
		bVar2 = VDIST(vVar5, vParam1);
		if (DECOR_CHECK_EXIST(bVar0, bParam5))
		{
			if ((DECOR_GET_INT(bVar0, bParam5) && uParam6) >= 0)
			{
				if (bVar2 < fParam4)
				{
					if (bVar3 > 0.0f || bVar2 > bVar3)
					{
						if (Function_484(&vVar5, &fVar4, 0, 0))
						{
							bVar3 = bVar2;
							bVar1 = bVar0;
							PRINTSTRING("Assigning new closestObject ");
							PRINTNL();
						}
					}
				}
			}
		}
		bVar0 = OBJECT_ITERATOR_NEXT(bParam0);
	}
	return bVar1;
}

var Function_496(bool bParam0, vector3 vParam1, float fParam4) //Position: 0x150B1 / 86193
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	var uVar4;
	vector3 vVar5;
	
	bVar3 = -1.0f;
	bVar0 = START_OBJECT_ITERATOR(bParam0);
	while (IS_OBJECT_VALID(bVar0))
	{
		GET_OBJECT_POSITION(bVar0, &vVar5);
		bVar2 = VDIST(vVar5, vParam1);
		if (bVar2 < fParam4)
		{
			if (bVar3 > 0.0f || bVar2 > bVar3)
			{
				if (Function_484(&vVar5, &uVar4, 0, 0))
				{
					bVar3 = bVar2;
					bVar1 = bVar0;
					PRINTSTRING("Assigning new closestObject ");
					PRINTNL();
				}
			}
		}
		bVar0 = OBJECT_ITERATOR_NEXT(bParam0);
	}
	return bVar1;
}

var Function_497() //Position: 0x1513A / 86330
{
	float fVar0;
	int iVar1;
	
	if (Global_3371)
	{
		return 0.0f;
	}
	Function_369(&fVar0, &iVar1);
	if (fVar0 >= 50.0f)
	{
		return (fVar0 - 10.0f);
	}
	return (fVar0 - 20.0f);
}

var Function_498(bool bParam0, vector3 vParam1, float fParam4, bool bParam5, var uParam6) //Position: 0x1516B / 86379
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;
	
	bVar3 = -1.0f;
	bVar0 = START_OBJECT_ITERATOR(bParam0);
	while (IS_OBJECT_VALID(bVar0))
	{
		GET_OBJECT_POSITION(bVar0, &vVar4);
		bVar2 = VDIST(vVar4, vParam1);
		if (DECOR_CHECK_EXIST(bVar0, bParam5))
		{
			if ((DECOR_GET_INT(bVar0, bParam5) && uParam6) >= 0)
			{
				if (bVar2 < fParam4)
				{
					if (bVar3 > 0.0f || bVar2 > bVar3)
					{
						bVar3 = bVar2;
						bVar1 = bVar0;
						PRINTSTRING("Assigning new closestObject ");
						PRINTNL();
					}
				}
			}
		}
		bVar0 = OBJECT_ITERATOR_NEXT(bParam0);
	}
	return bVar1;
}

var Function_499(bool bParam0, vector3 vParam1, float fParam4) //Position: 0x15200 / 86528
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;
	
	bVar3 = -1.0f;
	bVar0 = START_OBJECT_ITERATOR(bParam0);
	while (IS_OBJECT_VALID(bVar0))
	{
		GET_OBJECT_POSITION(bVar0, &vVar4);
		bVar2 = VDIST(vVar4, vParam1);
		if (bVar2 < fParam4)
		{
			if (bVar3 > 0.0f || bVar2 > bVar3)
			{
				bVar3 = bVar2;
				bVar1 = bVar0;
				PRINTSTRING("Assigning new closestObject ");
				PRINTNL();
			}
		}
		bVar0 = OBJECT_ITERATOR_NEXT(bParam0);
	}
	return bVar1;
}

int Function_500(bool bParam0, int iParam1) //Position: 0x1527D / 86653
{
	int iVar0;
	var uVar1;
	
	if (!IS_VOLUME_VALID(*bParam0))
	{
		LOG_ERROR("Passed an invalid volume into ADD_AMBIENT_VOLUME_RESTRICTION");
	}
	if (DECOR_CHECK_EXIST(*bParam0, "script"))
	{
		if (!IS_SCRIPT_VALID(DECOR_GET_INT(*bParam0, "script")))
		{
			LOG_ERROR("Passed an invalid script ID into ADD_AMBIENT_VOLUME_RESTRICTION");
		}
	}
	GET_VOLUME_CENTER(*bParam0, &uVar1);
	Function_485(DECOR_GET_INT(*bParam0, "script"));
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
		}
		else
		{
			Function_501(iVar0, bParam0, &uVar1, iParam1);
			return 1;
		}
		iVar0++;
	}
	LOG_ERROR("No room to add another volume... this really shouldn't happen tell steve");
	RELEASE_VOLUME(*bParam0);
	return 0;
}

void Function_501(int iParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x153DE / 87006
{
	struct<8> Var0;
	
	Global_26155[iParam05].f_8 = *uParam1;
	Global_26155[iParam05].f_16 = GET_CURRENT_GAME_TIME();
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_290("stayout") };
	Global_26155[iParam05].f_12 = CREATE_VOLUME_IN_LAYOUT(Global_26150, &Var0, 3, *iParam2, 0.0f, 0.0f, 0.0f, 12.0f, 5.0f, 12.0f);
	ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(Global_26155[iParam05].f_12, 0);
	ADD_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(Global_26155[iParam05].f_12);
	if (bParam3)
	{
		Global_26155[iParam05].f_4 = ADD_BLIP_FOR_COORD(iParam2, 403, 0f, 2, 0);
		SET_BLIP_BLINK(StackVal, 1, 1, 20.0f);
	}
}

var Function_502(bool bParam0, vector3 vParam1) //Position: 0x15479 / 87161
{
	vector3 vVar0;
	var uVar3;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		GET_POSITION(bParam0, &vVar0);
		Function_503(StackVal, StackVal, StackVal, StackVal, vVar0, vParam1, &uVar3);
		return UNK_0x9C40E671(&uVar3);
	}
	return 0.0f;
}

void Function_503(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x154A9 / 87209
{
	*uParam6 = { (GET_X(&uParam3) - GET_X(&uParam0)), 0.0f, (GET_Z(&uParam3) - GET_Z(&uParam0)) };
}

void Function_504(bool bParam0, int iParam1) //Position: 0x154CC / 87244
{
	if (iParam1 <= 0)
	{
		bParam0->f_928 = 0;
	}
	else if (iParam1 <= bParam0->f_928)
	{
		bParam0->f_928 = iParam1;
	}
	return;
}

bool Function_505(int iParam0) //Position: 0x154F2 / 87282
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_510();
	iVar1 = 0;
	if (!Function_100(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_509(iParam0[iVar03], 8);
		}
		else if (Function_508())
		{
			iVar1 = 1;
			Function_509(iParam0[iVar03], 8);
		}
		Function_509(iParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_100(iParam0[iVar03], 4))
		{
			if (!Function_100(iParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*iParam0)[iVar03], (Function_100(iParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*iParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], 1, (Function_100(iParam0[03], 8) || iVar1));
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
				Function_509(iParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_100(iParam0[iVar03], 4))
		{
			if (!Function_100(iParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*iParam0)[iVar03]))
						{
							Function_509(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_509(iParam0[iVar03], 2);
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
							Function_509(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_509(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_509(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_509(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_509(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_509(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_509(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_509(iParam0[iVar03], 2);
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
	Function_506();
	return 1;
}

void Function_506() //Position: 0x1586D / 88173
{
	if (!Function_507(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_507(int iParam0) //Position: 0x158AD / 88237
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_508() //Position: 0x158C9 / 88265
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

void Function_509(var uParam0, int iParam1) //Position: 0x158F4 / 88308
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_510() //Position: 0x15905 / 88325
{
	if (!Function_507(128))
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

void Function_511(var uParam0, int iParam1) //Position: 0x15947 / 88391
{
	if (iParam1 >= 0 || iParam1 < 6)
	{
		LOG_ERROR("Cannot initialize numberOfTravelers <=0 or > CONST_MAtkDefMaxNumTravelers");
	}
	uParam0->f_1248 = iParam1;
	return;
}

void Function_512(var uParam0, int iParam1) //Position: 0x159AF / 88495
{
	if (iParam1 >= 0 || iParam1 < 4)
	{
		LOG_ERROR("Cannot initialize iNumberOfAttackers <=0 or > CONST_MAtkDefMaxNumAttackers");
	}
	uParam0->f_1528 = iParam1;
	return;
}

int Function_513(int iParam0, int iParam1) //Position: 0x15A18 / 88600
{
	if (!Function_403(iParam1))
	{
		LOG_ERROR("MATKDEF_SET_VEHICLE_TEMPLATE - Invalid vehicleTemplate");
		return 0;
	}
	iParam0->f_976 = iParam1;
	Function_514(iParam0 + 636, iParam0->f_976, 3, 0);
	return 1;
}

var Function_514(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x15A7D / 88701
{
	int iVar0;
	
	iParam2 = iParam2;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_100(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = 3;
			Function_509(uParam0[iVar03], 4);
			if (bParam3)
			{
				Function_509(uParam0[iVar03], 8);
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

void Function_515(bool bParam0, int iParam1, int iParam2) //Position: 0x15B4D / 88909
{
	if (!Function_403(iParam1))
	{
		LOG_ERROR("MATKDEF_ADD_ATTACKER_TEMPLATE - Invalid attackerTemplate");
	}
	if (iParam2 > 0 || iParam2 <= 4)
	{
	}
	if ((*bParam0 + 1480)[iParam2] != 0 || !Function_403((*bParam0 + 1480)[iParam2]))
	{
		(*bParam0 + 1480)[iParam2] = iParam1;
		Function_514(bParam0 + 636, iParam1, 3, 0);
	}
	return;
}

bool Function_516() //Position: 0x15BDD / 89053
{
	return (RAND_INT_RANGE(0, 1999) / 1000) != 0;
}

void Function_517(bool bParam0, int iParam1, int iParam2) //Position: 0x15BF0 / 89072
{
	if (!Function_403(iParam1))
	{
		LOG_ERROR("MATKDEF_ADD_TRAVELER_TEMPLATE - Invalid travelerTemplate");
	}
	if (iParam2 > 0 || iParam2 <= 6)
	{
	}
	else if ((*bParam0 + 1216)[iParam2] != 0 || !Function_403((*bParam0 + 1216)[iParam2]))
	{
		(*bParam0 + 1216)[iParam2] = iParam1;
		Function_514(bParam0 + 636, iParam1, 3, 0);
	}
	return;
}

var Function_518(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x15C83 / 89219
{
	int iVar0;
	var uVar1;
	
	if (Global_30842[32])
	{
	}
	uVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_519(uParam0, uVar1, iParam2);
	if (bParam3)
	{
		Function_509(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_519(var uParam0, int iParam1, int iParam2) //Position: 0x15CBB / 89275
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_100(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_509(uParam0[iVar03], 4);
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

int Function_520(char* cParam0) //Position: 0x15D7F / 89471
{
	int iVar0[3];
	int iVar4;
	
	if (Function_348(0))
	{
		iVar0[0] = "Pass";
		iVar0[1] = "Fail";
		iVar0[2] = "Cancel";
		iVar4 = Function_334(cParam0 + 588, &iVar0, "RDR MISSION MENU - Moving Attack-Defend", GET_DEBUG_PADINDEX(), 0);
		if (iVar4 == 0)
		{
			Function_119();
			Function_370(cParam0, 11);
		}
		else if (iVar4 == 1)
		{
			Function_119();
			Function_370(cParam0, 12);
		}
		else if (iVar4 == 2)
		{
			Function_370(cParam0, 10);
			Function_119();
		}
		return 1;
	}
	return 0;
}

bool Function_521(vector3 vParam0) //Position: 0x15E2D / 89645
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

void Function_522(bool bParam0, int iParam1, bool bParam2) //Position: 0x15E45 / 89669
{
	if (IS_ACTOR_VALID(bParam0->f_972))
	{
		if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(bParam0->f_972)))
		{
			REMOVE_BLIP(GET_BLIP_ON_ACTOR(bParam0->f_972));
		}
	}
	if (SQUAD_IS_VALID(bParam0->f_1212))
	{
		Function_525(bParam0->f_1212);
	}
	if (SQUAD_IS_VALID((bParam0 + 1256)->f_60))
	{
		Function_525((bParam0 + 1256)->f_60);
	}
	if (IS_VOLUME_VALID(bParam0->f_968))
	{
		Function_524(bParam0->f_968);
	}
	if (IS_BLIP_VALID(bParam0->f_36))
	{
		REMOVE_BLIP(bParam0->f_36);
		bParam0->f_36 = "";
	}
	if (iParam1 == 1)
	{
		if (bParam2 == 1)
		{
			if (IS_ACTOR_VALID(bParam0->f_972))
			{
				ADD_BLIP_FOR_ACTOR(bParam0->f_972, 325, 0, 2, 0);
			}
		}
		else
		{
			switch (Function_239(bParam0))
			{
				case 0x00000001:
					if (SQUAD_IS_VALID(bParam0->f_1212))
					{
						Function_523(bParam0->f_1212, 325, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
					}
					if (SQUAD_IS_VALID((bParam0 + 1256)->f_60))
					{
						Function_523((bParam0 + 1256)->f_60, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
					}
					break;
				
				case 0x00000002:
					if (SQUAD_IS_VALID(bParam0->f_1212))
					{
						Function_523(bParam0->f_1212, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
					}
					if (SQUAD_IS_VALID((bParam0 + 1256)->f_60))
					{
						Function_523((bParam0 + 1256)->f_60, 325, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
					}
					break;
				
				case 0x00000000:
					if (bParam0->f_916 == 1)
					{
						if (IS_ACTOR_VALID(bParam0->f_972))
						{
							ADD_BLIP_FOR_ACTOR(bParam0->f_972, 387, 0, 2, 0);
							Function_240(bParam0, 1);
						}
					}
					else
					{
						if (SQUAD_IS_VALID(bParam0->f_1212))
						{
							Function_523(bParam0->f_1212, 325, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
						}
						if (SQUAD_IS_VALID((bParam0 + 1256)->f_60))
						{
							Function_523((bParam0 + 1256)->f_60, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
						}
						if (bParam0->f_912 == 0)
						{
							Function_240(bParam0, 1);
							Function_238(bParam0, "pm_mad_side", 1);
							bParam0->f_912 = 1;
						}
					}
					break;
				
				case 0x00000003:
					if (SQUAD_IS_VALID(bParam0->f_1212))
					{
						Function_523(bParam0->f_1212, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
					}
					if (SQUAD_IS_VALID((bParam0 + 1256)->f_60))
					{
						Function_523((bParam0 + 1256)->f_60, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
					}
					break;
				}
			}
	}
	return;
}

void Function_523(bool bParam0, int iParam1, int iParam2, float fParam3, float fParam4, float fParam5, int iParam6, bool bParam7) //Position: 0x160B1 / 90289
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
				if (GET_BLIP_ICON(bVar1) != iParam1)
				{
					CHANGE_BLIP_ICON(bVar1, iParam1);
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
				bVar1 = ADD_BLIP_FOR_ACTOR(bVar2, iParam1, fParam3, 2, 0);
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

int Function_524(bool bParam0) //Position: 0x1619B / 90523
{
	bool bVar0;
	
	if (IS_VOLUME_VALID(bParam0))
	{
		bVar0 = GET_OBJECT_FROM_VOLUME(bParam0);
		if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bVar0)))
		{
			REMOVE_BLIP(GET_BLIP_ON_OBJECT(bVar0));
			return 1;
		}
	}
	return 0;
}

void Function_525(bool bParam0) //Position: 0x161C6 / 90566
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

void Function_526(bool bParam0) //Position: 0x16213 / 90643
{
	Global_12976.f_20 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 20, 0, 0, bParam0, 0);
	return;
}

void Function_527(int iParam0) //Position: 0x1622E / 90670
{
	Global_12976.f_4 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 4, 0, 0, (iParam0 + Function_355(105)), 0);
	return;
}

void Function_528(int iParam0) //Position: 0x1624F / 90703
{
	Global_12976.f_12 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 12, 0, 0, (iParam0 + Function_355(90)), 0);
	return;
}

int Function_529(int iParam0, int iParam1) //Position: 0x16270 / 90736
{
	if (Global_3403)
	{
		return 0;
	}
	if (Global_3391)
	{
		return 0;
	}
	if (Global_3382)
	{
		return 0;
	}
	if (Global_3392)
	{
		return 0;
	}
	if (Global_3384)
	{
		return 0;
	}
	if (Global_3380)
	{
		return 0;
	}
	if (Global_3393)
	{
		return 0;
	}
	if (Global_3395 || Global_3396)
	{
		return 0;
	}
	iParam0 = iParam0;
	if (!IS_EARLIER_THAN(StackVal, 0) && iParam1 != 0)
	{
		return 0;
	}
	return 1;
}

