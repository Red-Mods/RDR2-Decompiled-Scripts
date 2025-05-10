//Decompiled with MagicRDR v1.0
//Function Count : 522
//Statics Count : 475
//Natives Count : 524
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
	bVar22 = (Function_521(1, 0) || ScriptParam_0.f_36 != 1);
	if (bVar22)
	{
		Function_520(0);
		Function_519(0);
		Function_518(12);
		iLocal_21 = 0;
	}
	else
	{
		Function_514(&Local_23, 0, 0);
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
		if ((iLocal_21 < 0 && iLocal_21 > 3) && IS_EARLIER_THAN(bLocal_414, GET_TIME_OF_DAY()))
		{
			if (Function_513(StackVal, StackVal, vVar1))
			{
				vVar7 = { StackVal, StackVal, *(&ScriptParam_0 + 8) };
			}
			else
			{
				vVar7 = { StackVal, StackVal, vVar1 };
			}
			if (VDIST(Global_34574, vVar7) < 75.0f && !WOULD_ACTOR_BE_VISIBLE(false, &vVar7, 3212836864))
			{
				Function_514(&Local_23, 0, 0);
				iLocal_21 = 5;
			}
		}
		else if (Global_3380 != 1 && ScriptParam_0.f_36 != 0)
		{
			Function_514(&Local_23, 0, 0);
			iLocal_21 = 5;
		}
		if (iLocal_21 > 3)
		{
			Function_512(&Local_23);
		}
		switch (iLocal_21)
		{
			case 0x00000000:
				if (iLocal_415 == 0)
				{
					Function_510(&Local_23 + 636, "procmissions", 10, 0);
					Function_510(&Local_23 + 636, "stats", 10, 0);
					Function_510(&Local_23 + 636, "$/content/scripting/gringo/simplegringo/shakehands_link", 1, 0);
					Function_510(&Local_23 + 636, "nthank_you", 5, 0);
					Function_510(&Local_23 + 636, "custom/thank_you", 8, 0);
					switch (Global_29004)
					{
						case 0x00000000:
						case 0x00000002:
							Function_509(&Local_23, 142, 0);
							Function_509(&Local_23, 155, 1);
							Function_509(&Local_23, 229, 2);
							Function_509(&Local_23, 114, 3);
							Function_509(&Local_23, 112, 4);
							break;
						
						case 0x00000001:
							Function_509(&Local_23, 284, 0);
							Function_509(&Local_23, 285, 1);
							Function_509(&Local_23, 267, 2);
							Function_509(&Local_23, 277, 3);
							Function_509(&Local_23, 304, 4);
							Function_509(&Local_23, 34, 5);
							break;
					}
					switch (Global_29004)
					{
						case 0x00000000:
							if (Function_508())
							{
								if (Global_29005 == Global_30628[2])
								{
									Function_507(&Local_23, 479, 0);
									Function_507(&Local_23, 480, 1);
									Function_507(&Local_23, 481, 2);
									Function_507(&Local_23, 483, 3);
								}
								else if (Global_29005 != Global_30628[0] || Global_29005 != Global_30628[3])
								{
									Function_507(&Local_23, 486, 0);
									Function_507(&Local_23, 490, 1);
									Function_507(&Local_23, 491, 2);
									Function_507(&Local_23, 492, 3);
								}
								else if (Global_29005 == Global_30628[1])
								{
									Function_507(&Local_23, 505, 0);
									Function_507(&Local_23, 509, 1);
									Function_507(&Local_23, 510, 2);
									Function_507(&Local_23, 513, 3);
								}
							}
							else
							{
								Function_507(&Local_23, 398, 0);
								Function_507(&Local_23, 397, 1);
								Function_507(&Local_23, 401, 2);
								Function_507(&Local_23, 403, 3);
							}
							break;
						
						case 0x00000001:
							if (Function_508())
							{
								Function_507(&Local_23, 496, 0);
								Function_507(&Local_23, 500, 1);
								Function_507(&Local_23, 499, 2);
								Function_507(&Local_23, 502, 3);
							}
							else
							{
								Function_507(&Local_23, 406, 0);
								Function_507(&Local_23, 407, 1);
								Function_507(&Local_23, 410, 2);
								Function_507(&Local_23, 411, 3);
							}
							break;
						
						case 0x00000002:
							if (Function_508())
							{
								Function_507(&Local_23, 467, 0);
								Function_507(&Local_23, 468, 1);
								Function_507(&Local_23, 471, 2);
								Function_507(&Local_23, 474, 3);
							}
							else
							{
								Function_507(&Local_23, 416, 0);
								Function_507(&Local_23, 419, 1);
								Function_507(&Local_23, 420, 2);
								Function_507(&Local_23, 423, 3);
							}
							break;
					}
					Function_505(&Local_23, 1177);
					Function_504(&Local_23, 4);
					Function_503(&Local_23, 6);
					iLocal_415 = 1;
				}
				if (iLocal_415 == 1)
				{
					if (Function_497(&Local_23 + 636))
					{
						bLocal_414 = GET_TIME_OF_DAY();
						ADD_TIME(&bLocal_414, 0, 0, 8, 0);
						Function_496(&Local_23, 0);
						iLocal_21 = 1;
					}
				}
				break;
			
			case 0x00000001:
				if (ScriptParam_0.f_64 == 0)
				{
					ScriptParam_0.f_64 = 3;
				}
				if (!Function_513(StackVal, StackVal, *(&ScriptParam_0 + 8)))
				{
					iVar23 = 1;
				}
				else if (Function_466(&ScriptParam_0, &iVar19, &uVar18, &iVar21, 1))
				{
					iVar23 = 1;
				}
				else if (iVar21 == 1)
				{
					iLocal_21 = 5;
				}
				Function_496(&Local_23, iVar19);
				if (iVar23 != 1 && iLocal_21 > 5)
				{
					Function_465(StackVal, StackVal, &Local_23, *(&ScriptParam_0 + 8));
					if (Function_463(&Local_23))
					{
						if (Function_368(&Local_23))
						{
							Function_362(&Local_23, 1);
							Function_362(&Local_23, 3);
							Function_496(&Local_23, 200);
							iLocal_21 = 2;
						}
						else
						{
							iLocal_21 = 5;
						}
					}
					if (Local_23.f_900 == 1)
					{
						if (!Function_513(StackVal, StackVal, *(&ScriptParam_0 + 8)) && iLocal_21 > 5)
						{
							if (VDIST(Global_34574, *(&ScriptParam_0 + 8)) < Function_360(1))
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
				Function_355(&Local_23);
				Function_496(&Local_23, 0);
				iLocal_21 = 3;
				break;
			
			case 0x00000003:
				Function_354();
				Function_342(StackVal, StackVal, Function_354(), &uVar24, ScriptParam_0.f_56, Local_23.f_972, 100, 0x42a00000, 1);
				iLocal_22 = Function_234(&Local_23);
				Function_496(&Local_23, 0);
				switch (iLocal_22)
				{
					case 0x00000000:
						break;
					
					case 0x00000001:
						Function_362(&Local_23, 2);
						Function_362(&Local_23, 4);
						break;
					
					case 0x00000002:
						Function_362(&Local_23, 2);
						Function_362(&Local_23, 4);
						break;
					
					case 0x00000003:
						Function_362(&Local_23, 9);
						break;
					
					case 0x0000000A:
						if (iLocal_416 == 0)
						{
							if (Function_233(&Local_23) == 1)
							{
								Function_232(&Local_23, 1);
								if (Function_231(&Local_23) == 1)
								{
									Function_230(&Local_23, "pm_mad_vfar1", 1);
								}
								else
								{
									Function_230(&Local_23, "pm_mad_vfar2", 1);
								}
							}
							iLocal_416 = 1;
						}
						break;
					
					case 0x0000000B:
						if (Function_226(&Local_23 + 856, 30.0f))
						{
							if (Function_233(&Local_23) == 1)
							{
								Function_362(&Local_23, 7);
							}
							else
							{
								Function_362(&Local_23, 10);
							}
						}
						break;
					
					case 0x0000000C:
						Function_232(&Local_23, 1);
						if (Function_233(&Local_23) == 1)
						{
							if (Function_231(&Local_23) == 2)
							{
								Function_230(&Local_23, "pm_mad_failb", 1);
								Function_222(5, 5000);
								Function_220(StackVal, 50);
								Function_362(&Local_23, 9);
							}
							else if (Function_231(&Local_23) == 1)
							{
								Function_219(&Local_23);
								Function_362(&Local_23, 8);
							}
						}
						else
						{
							Function_230(&Local_23, "pm_mad_failn", 1);
							Function_362(&Local_23, 10);
						}
						break;
					
					case 0x0000000D:
						Function_219(&Local_23);
						Function_362(&Local_23, 8);
						break;
					
					case 0x00000010:
						Function_217(&Local_23);
						if (Function_231(&Local_23) == 1)
						{
							Function_362(&Local_23, 9);
						}
						else if (Function_231(&Local_23) == 2)
						{
						}
						else
						{
							Function_362(&Local_23, 10);
						}
						break;
					
					case 0x0000000F:
						Function_217(&Local_23);
						if (Function_231(&Local_23) == 2)
						{
							Function_362(&Local_23, 9);
						}
						else if (Function_231(&Local_23) == 1)
						{
							Function_219(&Local_23);
							Function_362(&Local_23, 8);
						}
						else
						{
							Function_362(&Local_23, 10);
						}
						break;
					
					case 0x0000000E:
						Function_362(&Local_23, 6);
						if (Function_233(&Local_23) == 1)
						{
							Function_362(&Local_23, 9);
						}
						else
						{
							Function_362(&Local_23, 10);
						}
						break;
					
					case 0x00000004:
						Function_362(&Local_23, 10);
						break;
					
					case 0x00000009:
						Function_362(&Local_23, 9);
						break;
					
					case 0x00000005:
					case 0x00000008:
					case 0x00000007:
					case 0x00000006:
						Function_362(&Local_23, 9);
						break;
					
					default:
						LOG_ERROR("UNHANDLED MATKDEF STATUS");
						break;
				}
				break;
			
			case 0x00000005:
				if (iLocal_420 == 0)
				{
					Function_208(&Local_23, 0, 0);
					Function_514(&Local_23, 0, 0);
					if (Function_231(&Local_23) != 2 && iLocal_413 != 2)
					{
						iLocal_421 = 1;
					}
					else
					{
						iLocal_421 = 0;
					}
					if (iLocal_421 == 0)
					{
						Function_203(1);
						iLocal_423 = 1;
						Function_202(&iLocal_417);
					}
					iLocal_420 = 1;
				}
				else if (iLocal_423 == 0)
				{
					if (iLocal_422 == 0)
					{
						if (iLocal_421 == 1)
						{
							Function_198(&Local_23);
							Function_197(Local_23.f_1504);
							if (VDIST(Global_34574, Function_197(Local_23.f_1504)) > 60.0f)
							{
								bVar25 = true;
								Function_187(&Local_23 + 1504, &Global_34573, &fVar30, &iVar29, &bVar31, Local_23.f_832, 10.0f, &bVar27, bVar28, &Local_23 + 928, "nthank_you", "nthank_you", "", "", 30.0f, 2, -7,5f, 0, 4.0f, 1, 0, 0, 1, 0, 0x40800000);
							}
							else
							{
								Function_134(&Local_23, 0);
							}
							iLocal_422 = 1;
						}
						else
						{
							LOG_ERROR("mAtkDef: Unexpected state in EVENT_ENDING");
							Function_203(1);
							iLocal_423 = 1;
							Function_202(&iLocal_417);
						}
					}
					if (iLocal_422 == 1)
					{
						if (Function_131(&Local_23))
						{
							Function_362(&Local_23, 9);
							Function_127(&Local_23);
							Function_126((&Local_23 + 1256)->f_60, 1);
							Function_125((&Local_23 + 1256)->f_60, Global_34573, 4);
							Function_124((&Local_23 + 1256)->f_60, Global_34573);
							bVar20 = false;
							while (bVar20 <= SQUAD_GET_SIZE((&Local_23 + 1256)->f_60))
							{
								Function_123(SQUAD_GET_ACTOR_BY_INDEX((&Local_23 + 1256)->f_60, bVar20), &Global_34573);
								bVar20++;
							}
							Function_203(1);
							iLocal_423 = 1;
							iVar26 = 1;
							Function_202(&iLocal_417);
						}
						else if (bVar27 || !bVar25)
						{
							if (GET_TASK_STATUS(Local_23.f_1500, 0) == 0)
							{
								Function_202(&iLocal_417);
								Function_203(bVar25);
								iLocal_423 = 1;
							}
						}
						else if (Function_187(&Local_23 + 1504, &Global_34573, &fVar30, &iVar29, &bVar31, Local_23.f_832, 10.0f, &bVar27, bVar28, &Local_23 + 928, "nthank_you", "nthank_you", "", "", 30.0f, 2, -5.0f, 0, 4.0f, 1, 0, 0, 1, 0, 0x40800000))
						{
							if (bVar27)
							{
								if (GET_TASK_STATUS(Local_23.f_1500, 0) == 0)
								{
									Function_202(&iLocal_417);
									Function_203(1);
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
				else if (Function_226(&iLocal_417, 3.0f))
				{
					Function_232(&Local_23, 1);
					Function_122(&Local_23, 1, 1);
					Function_208(&Local_23, 0, 0);
					Function_496(&Local_23, 0);
					Function_520(0);
					iLocal_21 = 6;
				}
				break;
			
			case 0x00000006:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				break;
		}
		WAIT(Function_120(&Local_23));
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
	if (Function_119())
	{
		Function_112();
	}
	Function_514(bParam0, 0, 0);
	Function_98(bParam0, bParam1, iParam2);
	Function_94(bParam0, bParam1);
	if (IS_VOLUME_VALID(bParam0->f_968))
	{
		RELEASE_VOLUME(bParam0->f_968);
	}
	if (IS_ACTORSET_VALID(bParam0->f_1508))
	{
		DESTROY_ACTORSET(bParam0->f_1508);
	}
	SET_NPC_TO_NPC_DAMAGE_SCALE_FACTOR(1.0f);
	Function_90(bParam0 + 636);
	Function_88(1);
	Function_88(4);
	Function_81(bParam0);
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
		if (Function_80(bParam0->f_584, 32768))
		{
			Function_79(256);
		}
	}
	Function_78();
	Function_76(1);
	if (Function_80(bParam0->f_584, 32))
	{
		if (Function_74(bParam0->f_624))
		{
			switch (bParam0->f_620)
			{
				case 0x00000002:
					Function_20(bParam0->f_624, 1, 0, 0);
					break;
				
				case 0x00000003:
					Function_17(bParam0->f_624);
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
	if (Function_80(bParam0->f_584, 64))
	{
		Global_13111 = 0;
	}
	if (Function_80(bParam0->f_584, 16))
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

void Function_4(bool bParam0, bool bParam1, float fParam2, float fParam3, int iParam4, bool bParam5) //Position: 0xD01 / 3329
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
			TASK_PRIORITY_SET(bVar1, bParam5);
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

void Function_9(bool bParam0) //Position: 0xE6C / 3692
{
	int iVar0;
	
	if (!Function_74(bParam0))
	{
		Function_15();
		return;
	}
	iVar0 = Function_14(bParam0);
	Global_26281 = (GET_CURRENT_GAME_TIME() - 5.0f);
	if (StackVal == 2)
	{
		Function_10("DEED_CANCEL", bParam0);
	}
	Global_13172[bParam011].f_4 = 0;
	Global_3376 = 1;
	return;
}

void Function_10(char* cParam0, bool bParam1) //Position: 0xEBF / 3775
{
	struct<4> Var0;
	
	if (!Function_74(bParam1))
	{
		return;
	}
	switch (Function_14(bParam1))
	{
		case 0x00000001:
			Var0 = { StackVal, StackVal, StackVal, Function_11(Function_12(bParam1)) };
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, &Var0, Function_14(bParam1), Function_12(bParam1));
			break;
		
		case 0x00000002:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "PROCEDURAL", Function_14(bParam1), bParam1);
			break;
		
		case 0x00000003:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "LOCATION", Function_14(bParam1), bParam1);
			break;
		
		case 0x00000004:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "MINIGAME", Function_14(bParam1), bParam1);
			break;
		
		case 0x00000005:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "ACTIONAREA_EVENT", Function_14(bParam1), bParam1);
			break;
		
		case 0x00000006:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "JOB", Function_14(bParam1), bParam1);
			break;
		
		case 0x00000000:
			break;
	}
	return;
}

struct<16> Function_11(int iParam0) //Position: 0xFE3 / 4067
{
	char* cVar0[16];
	
	strcpy(&cVar0, "miss", 16);
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "d", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

int Function_12(bool bParam0) //Position: 0x1008 / 4104
{
	if (!Function_13(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[bParam011], 12) & 255;
}

bool Function_13(int iParam0) //Position: 0x1028 / 4136
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_14(bool bParam0) //Position: 0x103F / 4159
{
	if (!Function_13(bParam0))
	{
		return 0;
	}
	return Global_13172[bParam011] & 15;
}

void Function_15() //Position: 0x105A / 4186
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
			Function_16(Global_13172[iVar011], &iVar18, &iVar19, &iVar20);
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

void Function_16(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x12A1 / 4769
{
	*uParam3 = iParam0 & 15;
	*uParam1 = SHIFT_RIGHT(iParam0, 4) & 255;
	*uParam2 = SHIFT_RIGHT(iParam0, 12) & 255;
}

void Function_17(bool bParam0) //Position: 0x12CA / 4810
{
	int iVar0;
	struct<6> Var1;
	struct<4> Var7;
	bool bVar11;
	
	if (!Function_74(bParam0))
	{
		return;
	}
	iVar0 = Function_14(bParam0);
	if (StackVal == 2)
	{
		Function_10("nDEED_FAIL", bParam0);
	}
	Global_26281 = (GET_CURRENT_GAME_TIME() - 5.0f);
	Global_13172[bParam011].f_4 = 0;
	if (iVar0 == 1)
	{
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_19(Global_6269) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_18(Global_6269) };
		}
		bVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		CLEAR_JOURNAL_ENTRY(bVar11);
	}
	Global_3376 = 1;
	return;
}

struct<16> Function_18(int iParam0) //Position: 0x1370 / 4976
{
	char* cVar0[16];
	
	strcpy(&cVar0, "miss", 16);
	straddi(&cVar0, iParam0, 16);
	stradd(&cVar0, "_short", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_19(char* cParam0) //Position: 0x139A / 5018
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

void Function_20(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x15F0 / 5616
{
	int iVar0;
	struct<6> Var1;
	struct<4> Var7;
	bool bVar11;
	int iVar12;
	int iVar13;
	struct<25> Var14;
	
	if (!Function_74(bParam0))
	{
		Function_15();
		return;
	}
	iVar0 = Function_14(bParam0);
	if (!iVar0 != 1)
	{
		Global_13172[bParam011].f_12++;
	}
	else
	{
		Global_6269 = Function_12(bParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_19(Global_6269) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_18(Global_6269) };
		}
		bVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		Function_68();
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
		Function_10("DEED_COMPLETE", bParam0);
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
			Function_62(bParam0);
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
						switch (Function_12(bParam0))
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
			Function_24(1);
			Function_22(bParam2, iVar13);
		}
	}
	if (Global_3381 && bParam1)
	{
		*(&Var14 + 80) = 3;
		Var14.f_16 = 0;
		if (!bParam3)
		{
			Function_21(bParam0, &Var14);
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

void Function_21(int iParam0, int iParam1) //Position: 0x1802 / 6146
{
	iParam1->f_28 = Global_13172[iParam011].f_20;
	iParam1->f_32 = Global_13172[iParam011].f_24;
	iParam1->f_36 = Global_13172[iParam011].f_28;
	iParam1->f_40 = Global_13172[iParam011].f_32;
	return;
}

void Function_22(bool bParam0, int iParam1) //Position: 0x183C / 6204
{
	if (Global_3381)
	{
		return;
	}
	Global_3412 = bParam0;
	Global_3416 = iParam1;
	if (!Global_3365 && !Function_23())
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", true);
	return;
}

bool Function_23() //Position: 0x187E / 6270
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_24(bool bParam0) //Position: 0x1887 / 6279
{
	if ((Global_3395 || Global_3381) || Global_3396)
	{
		return;
	}
	Global_34165.f_24 = 4294967295;
	Function_56();
	Global_34165.f_28 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_26();
	SAVE_SOFT_SAVE(0);
	if (bParam0)
	{
		Function_25(&Global_63095, 1);
		Function_25(&Global_63095, 2);
	}
	Global_88793 = 1;
	return;
}

void Function_25(int iParam0, int iParam1) //Position: 0x18D8 / 6360
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
	return;
}

void Function_26() //Position: 0x18EB / 6379
{
	Function_54();
	Function_53();
	Function_53();
	Function_52();
	Function_52();
	Function_51();
	Function_51();
	Function_34();
	Function_34();
	if (!Function_23())
	{
		Function_31();
		Function_30();
		Function_29();
		Function_28();
	}
	Function_27();
	return;
}

void Function_27() //Position: 0x191E / 6430
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

void Function_28() //Position: 0x1A24 / 6692
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

void Function_29() //Position: 0x1A57 / 6743
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

void Function_30() //Position: 0x1BE5 / 7141
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

void Function_31() //Position: 0x1D99 / 7577
{
	Function_32(&Global_28260, 1, 0);
	return;
}

void Function_32(int iParam0, bool bParam1, var uParam2) //Position: 0x1DA7 / 7591
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
	
	bVar0 = Function_33();
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

var Function_33() //Position: 0x1F98 / 8088
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

struct<8> Function_34() //Position: 0x1FAD / 8109
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
				iVar2 = ((Function_50((50 + iVar4)) + Function_50((183 + iVar4))) + Function_50((90 + iVar4)));
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
	Function_35(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_35(int iParam0, bool bParam1, bool bParam2) //Position: 0x2048 / 8264
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
		Function_49(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_48(iParam0);
	if (bParam2)
	{
		Function_36(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_36(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x22E3 / 8931
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_47(390))), 32);
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
					bVar19 = (Function_46(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_46(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_44(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, false, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_41(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_39(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_38(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_37(), &Var9);
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

var Function_37() //Position: 0x2910 / 10512
{
	int iVar0;
	
	return iVar0;
}

var Function_38(int iParam0) //Position: 0x2918 / 10520
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_39(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x2929 / 10537
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_40("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_40("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_40("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_40(char* cParam0, char* cParam1) //Position: 0x2A1E / 10782
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_41(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x2A37 / 10807
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_43(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_42(Function_43(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_42(int iParam0, int iParam1) //Position: 0x2A9C / 10908
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_43(int iParam0, bool bParam1) //Position: 0x2AAE / 10926
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_44(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x2AC0 / 10944
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
	if (((Function_45(iParam0) != 19 || Function_45(iParam0) != 17) || Function_45(iParam0) != 10) || Function_45(iParam0) != 9)
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

int Function_45(int iParam0) //Position: 0x2BF0 / 11248
{
	return Global_35278[iParam020].f_48;
}

float Function_46(int iParam0) //Position: 0x2BFF / 11263
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

float Function_47(int iParam0) //Position: 0x2C38 / 11320
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_48(int iParam0) //Position: 0x2C75 / 11381
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

int Function_49(int iParam0, bool bParam1, bool bParam2) //Position: 0x2E0F / 11791
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

int Function_50(bool bParam0) //Position: 0x3029 / 12329
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

struct<8> Function_51() //Position: 0x306A / 12394
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
		iVar2 = ((Function_50((50 + iVar3) + 15) + Function_50((183 + iVar3) + 15)) + Function_50((90 + iVar3) + 15));
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
	Function_35(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_52() //Position: 0x30F3 / 12531
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
			iVar2 = ((Function_50((50 + iVar3) + 8) + Function_50((183 + iVar3) + 8)) + Function_50((90 + iVar3) + 8));
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
	Function_35(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_53() //Position: 0x318A / 12682
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
		iVar2 = ((Function_50((50 + iVar3)) + Function_50((183 + iVar3))) + Function_50((90 + iVar3)));
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
	Function_35(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_54() //Position: 0x3209 / 12809
{
	Function_55(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_35(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_55(int iParam0, bool bParam1, int iParam2) //Position: 0x322F / 12847
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
	Function_49(iParam0, bParam1, 1);
	Function_48(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_36(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

void Function_56() //Position: 0x3439 / 13369
{
	vector3 vVar0;
	var uVar3;
	
	Global_34165.f_24 = 4294967295;
	Function_57(&Global_34165 + 12, &Global_34165 + 16, 0, 0);
	vVar0 = { StackVal, StackVal, Function_57(&Global_34165 + 12, &Global_34165 + 16, 0, 0) };
	if (Function_513(StackVal, StackVal, vVar0))
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

vector3 Function_57(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x34DA / 13530
{
	int iVar0;
	
	iVar0 = Function_60(uParam2, uParam3);
	if (Function_59(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_34165.f_24 = Global_29005;
			Function_58(&Global_63095, 1);
			Function_25(&Global_63095, 2);
			Global_63084 = { StackVal, StackVal, Global_16537[iVar021] };
			*uParam1 = 0;
		}
		else
		{
			Function_58(&Global_63095, 2);
			Function_25(&Global_63095, 1);
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
		Function_58(&Global_63095, 2);
		Function_25(&Global_63095, 1);
		*uParam1 = 1;
		*uParam0 = 290.0f;
		return -2833,843f, 50,332f, 2418,003f;
	}
	Function_354();
	return StackVal, StackVal, Function_354();
}

void Function_58(var uParam0, int iParam1) //Position: 0x35C1 / 13761
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_59(int iParam0) //Position: 0x35D0 / 13776
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_60(bool bParam0, bool bParam1) //Position: 0x35E6 / 13798
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
				fVar2 = Function_61(StackVal, StackVal, StackVal, StackVal, Global_34574, Global_16537[iVar321]);
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
		fVar2 = Function_61(StackVal, StackVal, Global_34574, -2833,843f, 50,332f, 2418,003f);
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_59(bVar0) && !bParam1)
	{
		bVar0 = Function_60(bParam0, 1);
	}
	return bVar0;
}

float Function_61(vector3 vParam0, vector3 vParam3) //Position: 0x36AD / 13997
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

void Function_62(bool bParam0) //Position: 0x36CA / 14026
{
	int iVar0;
	int iVar1;
	
	if (!Function_13(bParam0))
	{
		return;
	}
	switch (Function_14(bParam0))
	{
		case 0x00000001:
			iVar1 = Function_12(bParam0);
			if (iVar1 <= 1 && iVar1 >= 24)
			{
				Function_67(12, 1, 0, 0);
				Function_66(0, (iVar1 - 1));
			}
			else if (iVar1 <= 25 && iVar1 >= 41)
			{
				Function_67(13, 1, 0, 0);
				Function_66(1, (iVar1 - 25));
			}
			else if (iVar1 <= 42 && iVar1 >= 48)
			{
				Function_67(14, 1, 0, 0);
				Function_66(1, (iVar1 - 25));
			}
			else if (iVar1 <= 49 && iVar1 >= 57)
			{
				Function_67(15, 1, 0, 0);
				Function_66(1, (iVar1 - 49));
			}
			if (iVar1 <= 1 && iVar1 >= 57)
			{
				Function_67(9, 1, 0, 0);
			}
			break;
		
		case 0x00000002:
			switch (Function_12(bParam0))
			{
				case 0x00000000:
					if (Function_65(bParam0) == 1)
					{
						iVar0 = Function_64(bParam0);
						if (Function_63(iVar0))
						{
							if (iVar0 == Global_30723[5])
							{
								Function_66(4, 18);
							}
							else if (iVar0 == Global_30693[3])
							{
								Function_66(4, 10);
							}
							else if (iVar0 == Global_30723[6])
							{
								Function_66(4, 16);
							}
							else if (iVar0 == Global_30668[3])
							{
								Function_66(4, 6);
							}
							else if (iVar0 == Global_30640[13])
							{
								Function_66(4, 3);
							}
							else if (iVar0 == Global_30693[7])
							{
								Function_66(4, 11);
							}
							else if (iVar0 == Global_30640[6])
							{
								Function_66(4, 0);
							}
							else if (iVar0 == Global_30693[10])
							{
								Function_66(4, 15);
							}
							else if (iVar0 == Global_30693[8])
							{
								Function_66(4, 14);
							}
							else if (iVar0 == Global_30640[11])
							{
								Function_66(4, 2);
							}
							else if (iVar0 == Global_30668[6])
							{
								Function_66(4, 7);
							}
							else if (iVar0 == Global_30723[3])
							{
								Function_66(4, 17);
							}
							else if (iVar0 == Global_30685[5])
							{
								Function_66(4, 8);
							}
							else if (iVar0 == Global_30693[9])
							{
								Function_66(4, 13);
							}
							else if (iVar0 == Global_30693[11])
							{
								Function_66(4, 12);
							}
							else if (iVar0 == Global_30640[7])
							{
								Function_66(4, 1);
							}
							else if (iVar0 == Global_30679[3])
							{
								Function_66(4, 5);
							}
							else if (iVar0 == Global_30693[4])
							{
								Function_66(4, 9);
							}
							else if (iVar0 == Global_30658[7])
							{
								Function_66(4, 4);
							}
							else if (iVar0 == Global_30723[4])
							{
								Function_66(4, 19);
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
								Function_67(363, 1, 0, 0);
							}
							else if (iVar0 == Global_30621[1])
							{
								Function_67(364, 1, 0, 0);
							}
							else if (iVar0 == Global_30621[2])
							{
								Function_67(365, 1, 0, 0);
							}
						}
					}
					break;
			}
			break;
		
		case 0x00000003:
			if (Function_64(bParam0) == 0)
			{
				if (Function_65(bParam0) == 1)
				{
					Function_67(458, 1, 0, 0);
					iVar0 = Function_12(bParam0);
					if (Function_63(iVar0))
					{
						if (iVar0 == Global_30668[2])
						{
							Function_66(2, 10);
						}
						else if (iVar0 == Global_30658[2])
						{
							Function_66(2, 11);
						}
						else if (iVar0 == Global_30640[2])
						{
							Function_66(2, 12);
						}
						else if (iVar0 == Global_30658[0])
						{
							Function_66(2, 13);
						}
						else if (iVar0 == Global_30658[3])
						{
							Function_66(2, 14);
						}
						else if (iVar0 == Global_30685[2])
						{
							Function_66(2, 15);
						}
						else if (iVar0 == Global_30685[1])
						{
							Function_66(2, 16);
						}
						else if (iVar0 == Global_30679[1])
						{
							Function_66(2, 17);
						}
					}
				}
			}
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000006:
			if (Function_65(bParam0) == 1)
			{
				Function_67(400, 1, 0, 0);
			}
			switch (Function_12(bParam0))
			{
				case 0x00000001:
					Function_67(402, 1, 0, 0);
					if (Global_29006 == Global_30668[0])
					{
						Function_66(6, 5);
					}
					else if (Global_29006 == Global_30693[0])
					{
						Function_66(6, 6);
					}
					else if (Global_29006 == Global_30717[0])
					{
						Function_66(6, 7);
					}
					break;
				
				case 0x00000002:
					Function_67(403, 1, 0, 0);
					if (Global_29006 == Global_30640[1])
					{
						Function_66(6, 8);
					}
					else if (Global_29006 == Global_30693[0])
					{
						Function_66(6, 9);
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

bool Function_63(int iParam0) //Position: 0x3BA6 / 15270
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

int Function_64(bool bParam0) //Position: 0x3BBC / 15292
{
	if (!Function_13(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[bParam011], 4) & 255;
}

int Function_65(bool bParam0) //Position: 0x3BDB / 15323
{
	if (!Function_13(bParam0))
	{
		return 4294967295;
	}
	return Global_13172[bParam011].f_12;
}

void Function_66(int iParam0, bool bParam1) //Position: 0x3BF5 / 15349
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

int Function_67(int iParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x3C5C / 15452
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
	Function_49(iParam0, TO_FLOAT(bParam1), 1);
	Function_48(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_36(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, bParam3);
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

void Function_68() //Position: 0x3E7C / 15996
{
	int iVar0;
	int iVar1;
	
	if (!Function_73(Global_6269))
	{
		return;
	}
	iVar0 = Function_50(24);
	iVar1 = Function_72(Global_6269);
	if (!Function_73(iVar0) && Function_71(iVar1) < 0)
	{
		Function_35(24, Global_6269, 0);
		Function_69(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	else if (StackVal <= Function_71(Function_72(iVar0)))
	{
		Function_35(24, Global_6269, 0);
		Function_69(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	return;
}

int Function_69(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x3EFC / 16124
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
		Function_70(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_35278[iParam020] + 16), 3.0f, iParam3);
	}
	return 1;
}

void Function_70(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, char* cParam9, bool bParam10) //Position: 0x4251 / 16977
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

int Function_71(int iParam0) //Position: 0x42D4 / 17108
{
	if (!Function_74(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

int Function_72(int iParam0) //Position: 0x42EE / 17134
{
	if (!Function_73(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_73(int iParam0) //Position: 0x4308 / 17160
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

bool Function_74(int iParam0) //Position: 0x431E / 17182
{
	if (!Function_13(iParam0))
	{
		return 0;
	}
	if (!Function_75(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_75(int iParam0) //Position: 0x4342 / 17218
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

void Function_76(int iParam0) //Position: 0x4357 / 17239
{
	if (iParam0 != 1 && !GET_THIS_SCRIPT_ID() != Global_8721)
	{
		return;
	}
	if (Global_8717[iParam0])
	{
		Global_8717[iParam0] = 0;
	}
	if (!Function_77())
	{
		if (IS_HUD_MAP_VISIBLE())
		{
			SET_HUD_MAP_DRAW_ENABLED_TIMED(1, 0.0f, 1);
		}
	}
	return;
}

bool Function_77() //Position: 0x4393 / 17299
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

void Function_78() //Position: 0x43B8 / 17336
{
	if (Global_30921 == GET_THIS_SCRIPT_ID())
	{
		Global_30921 = "";
	}
	return;
}

void Function_79(int iParam0) //Position: 0x43CC / 17356
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

bool Function_80(bool bParam0, int iParam1) //Position: 0x43E9 / 17385
{
	return (bParam0 && iParam1) == 0;
}

void Function_81(int iParam0) //Position: 0x43F6 / 17398
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
	if (!Function_80(iParam0->f_584, 512) && Function_80(iParam0->f_584, 256))
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
						Function_87(GET_ACTOR_FROM_OBJECT(bVar0), 0, 0);
						SET_ACTOR_CAN_PLAY_GESTURES(GET_ACTOR_FROM_OBJECT(bVar0), true);
						SET_ACTOR_CAN_PLAY_BORED_IDLES(GET_ACTOR_FROM_OBJECT(bVar0), 1);
					}
				}
			}
			CLEAN_OBJECTSET(iParam0->f_540);
		}
		if (((iParam0->f_536 != 4 || iParam0->f_536 != 5) || iParam0->f_536 != 6) || iParam0->f_536 != 7)
		{
			Function_87(Global_34573, 0, 0);
			SET_ACTOR_CAN_PLAY_GESTURES(Global_34573, true);
			SET_ACTOR_CAN_PLAY_BORED_IDLES(Global_34573, 1);
		}
		*(iParam0 + 544) = { 0.0f, 0.0f, 0.0f };
		iParam0->f_556 = 0;
		Function_84(1, 0, 1, 1, 1, 1, 1, 1, 1, 1);
		Function_83(1.0f);
		Function_82(iParam0, 5);
		if (Function_80(iParam0->f_584, 32768))
		{
			Function_79(256);
		}
		Function_58(iParam0 + 584, 512);
		Function_25(iParam0 + 584, 256);
	}
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	return;
}

void Function_82(var uParam0, int iParam1) //Position: 0x45B1 / 17841
{
	uParam0->f_532 = iParam1;
	return;
}

void Function_83(bool bParam0) //Position: 0x45BE / 17854
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

void Function_84(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, var uParam9) //Position: 0x45DB / 17883
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
		bVar0 = Function_33();
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
			if (Function_23())
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
		Function_67(21, 1, 0, 0);
	}
	if (bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	if (bParam7)
	{
		Function_86();
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
	Function_85(uParam9);
}

void Function_85(bool bParam0) //Position: 0x46CB / 18123
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

void Function_86() //Position: 0x4770 / 18288
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_87(bool bParam0, bool bParam1, bool bParam2) //Position: 0x4785 / 18309
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
		SET_ACTOR_INVULNERABILITY(bParam0, true);
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
		AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bParam0, true);
	}
	else
	{
		AI_GOAL_LOOK_CLEAR(bParam0);
		SET_ACTOR_INVULNERABILITY(bParam0, false);
		SET_ACTOR_ALLOW_BUMP_REACTIONS(bParam0, 1);
		AI_SET_NAV_PATHFINDING_ENABLED(bParam0, 1);
		AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bParam0, 2);
		SET_ACTOR_CUTSCENE_MODE(bParam0, 0);
	}
	return;
}

void Function_88(int iParam0) //Position: 0x481F / 18463
{
	Function_89(&Global_28842, iParam0);
	return;
}

void Function_89(var uParam0, int iParam1) //Position: 0x482D / 18477
{
	*uParam0 = (*uParam0 || iParam1);
	*uParam0 |= 1073741824;
	return;
}

void Function_90(int iParam0) //Position: 0x4848 / 18504
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		Function_91(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_91(var uParam0, int iParam1) //Position: 0x486E / 18542
{
	if (Function_93(uParam0[iParam13], 4))
	{
		if (Function_93(uParam0[iParam13], 1))
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
			Function_92(uParam0[iParam13], 1);
			Function_92(uParam0[iParam13], 2);
			Function_92(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_92(var uParam0, int iParam1) //Position: 0x499C / 18844
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_93(var uParam0, int iParam1) //Position: 0x49B6 / 18870
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_94(bool bParam0, bool bParam1) //Position: 0x49D3 / 18899
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
				Function_97(bParam0 + 1212);
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
					if (((Function_231(bParam0) != 1 && Function_96(bParam0) != 2) || (Function_231(bParam0) != 2 && Function_96(bParam0) != 3)) || !Function_233(bParam0))
					{
						if (IS_ACTOR_DRIVING_VEHICLE(bVar0))
						{
							Function_354();
							Function_95(StackVal, StackVal, bVar0, Function_354(), 0, 2, 2, 1);
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
						TASK_PRIORITY_SET(bVar0, true);
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

void Function_95(bool bParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6, bool bParam7) //Position: 0x4AB9 / 19129
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
	if (!Function_513(StackVal, StackVal, vParam1))
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
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(bParam0, true);
}

int Function_96(int iParam0) //Position: 0x4BC1 / 19393
{
	return iParam0->f_620;
}

void Function_97(int iParam0) //Position: 0x4BCC / 19404
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

void Function_98(int iParam0, int iParam1, int iParam2) //Position: 0x4C13 / 19475
{
	if (SQUAD_IS_VALID((iParam0 + 1256)->f_60))
	{
		if (iParam1 == 1)
		{
			Function_111(iParam0 + 1256 + 60);
		}
		else if (iParam2 == 1)
		{
			Function_109(iParam0 + 1256);
		}
		else
		{
			Function_99(iParam0 + 1256, Global_34573);
		}
	}
	return;
}

void Function_99(var uParam0, bool bParam1) //Position: 0x4C55 / 19541
{
	if (SQUAD_IS_VALID(uParam0->f_60))
	{
		Function_100(uParam0->f_60, 2, GET_OBJECT_FROM_ACTOR(bParam1), 4, 1);
	}
	return;
}

int Function_100(bool bParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x4C78 / 19576
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
				Function_101(bVar0, uParam1, uParam2, uParam3, uParam4);
			}
			bVar1++;
		}
		SQUAD_MAKE_EMPTY(bParam0);
		return 1;
	}
	return 0;
}

int Function_101(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x4CD0 / 19664
{
	char* cVar0[32];
	
	Function_108();
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
	if (Function_107(bParam0) == 1)
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
	Function_106(bParam0, 0);
	Function_105(bParam0, iParam1);
	Function_104(bParam0, iParam2);
	Function_103(bParam0, iParam3);
	if (Function_102(bParam0) != 5)
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

int Function_102(bool bParam0) //Position: 0x4F1E / 20254
{
	return DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_behavior");
}

void Function_103(bool bParam0, bool bParam1) //Position: 0x4F41 / 20289
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_speed", bParam1);
	return;
}

void Function_104(bool bParam0, bool bParam1) //Position: 0x4F64 / 20324
{
	DECOR_SET_OBJECT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_target", bParam1);
	return;
}

void Function_105(bool bParam0, bool bParam1) //Position: 0x4F88 / 20360
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_behavior", bParam1);
	return;
}

void Function_106(bool bParam0, bool bParam1) //Position: 0x4FAE / 20398
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_state", bParam1);
	return;
}

int Function_107(bool bParam0) //Position: 0x4FD1 / 20433
{
	return DECOR_GET_BOOL(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_ref");
}

void Function_108() //Position: 0x4FEF / 20463
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

void Function_109(int iParam0) //Position: 0x5039 / 20537
{
	if (SQUAD_IS_VALID(iParam0->f_60))
	{
		Function_110(iParam0->f_60);
	}
	return;
}

void Function_110(bool bParam0) //Position: 0x5053 / 20563
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

void Function_111(var uParam0) //Position: 0x5097 / 20631
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

void Function_112() //Position: 0x5116 / 20758
{
	Function_114();
	Function_113(10, 3);
	return;
}

void Function_113(int iParam0, int iParam1) //Position: 0x5125 / 20773
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

void Function_114() //Position: 0x525C / 21084
{
	GRINGO_DEBUG_CHECK_SOUND(1);
	SET_DEBUG_FADE_STATE(0);
	SET_HUD_MAP_DRAW_ENABLED(1);
	if (Function_118())
	{
		Function_117(10, 3);
	}
	else
	{
		Function_115();
	}
	Global_30920 = 0;
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	SET_ACTOR_INVULNERABILITY(Function_33(), false);
	AI_CLEAR_DONT_HARM_ACTOR(Function_33());
	UI_POP("nDebugMenu");
	return;
}

void Function_115() //Position: 0x52A7 / 21159
{
	Function_116(25, 2);
	return;
}

void Function_116(int iParam0, int iParam1) //Position: 0x52B3 / 21171
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

void Function_117(int iParam0, int iParam1) //Position: 0x54B1 / 21681
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

bool Function_118() //Position: 0x55E8 / 21992
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
				if (!Function_80(Global_78480.f_124, 1))
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

bool Function_119() //Position: 0x564F / 22095
{
	return Global_34580;
}

int Function_120(int iParam0) //Position: 0x5658 / 22104
{
	if (Function_121(iParam0) == 0)
	{
		return iParam0->f_928;
	}
	return 0;
}

int Function_121(int iParam0) //Position: 0x5671 / 22129
{
	return iParam0->f_616;
}

void Function_122(bool bParam0, int iParam1, int iParam2) //Position: 0x567C / 22140
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

int Function_123(bool bParam0, int iParam1) //Position: 0x56E4 / 22244
{
	if (IS_ACTOR_HUMAN(bParam0))
	{
		if (GET_NUM_WEAPONS_IN_INVENTORY(bParam0) == 0)
		{
			TASK_FLEE_ACTOR(bParam0, Global_34573, -1.0f, -1.0f, 0, 0, 0);
			TASK_PRIORITY_SET(bParam0, false);
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
	MEMORY_REPORT_POSITION_AUTO(bParam0, *iParam1, true);
	TASK_KILL_CHAR(bParam0, *iParam1);
	TASK_PRIORITY_SET(bParam0, true);
	return 1;
}

void Function_124(bool bParam0, bool bParam1) //Position: 0x57C9 / 22473
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

void Function_125(bool bParam0, bool bParam1, bool bParam2) //Position: 0x581B / 22555
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

void Function_126(bool bParam0, int iParam1) //Position: 0x5860 / 22624
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

void Function_127(bool bParam0) //Position: 0x58A1 / 22689
{
	Function_130(bParam0, 3);
	Function_129(bParam0, 4294967295);
	Function_128(bParam0->f_1212, Global_34573, 4);
	Function_128((bParam0 + 1256)->f_60, Global_34573, 4);
	Function_4(bParam0->f_1212, Global_34573, 100.0f, -1.0f, 1, 0);
	Function_4((bParam0 + 1256)->f_60, Global_34573, 100.0f, -1.0f, 1, 0);
	Function_232(bParam0, 1);
	Function_230(bParam0, "pm_mad_rog", 0);
	return;
}

void Function_128(bool bParam0, bool bParam1, bool bParam2) //Position: 0x590F / 22799
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

void Function_129(int iParam0, int iParam1) //Position: 0x597D / 22909
{
	iParam0->f_492 = iParam1;
	return;
}

void Function_130(int iParam0, int iParam1) //Position: 0x598A / 22922
{
	iParam0->f_484 = iParam1;
	return;
}

bool Function_131(bool bParam0) //Position: 0x5997 / 22935
{
	if (Function_231(bParam0) == 1)
	{
		if (Function_133(bParam0->f_1212, Global_34573) || Function_132(bParam0, Global_34573))
		{
			return 1;
		}
	}
	if (Function_231(bParam0) == 2)
	{
		if (Function_133((bParam0 + 1256)->f_60, Global_34573))
		{
			return 1;
		}
	}
	return 0;
}

int Function_132(int iParam0, int iParam1) //Position: 0x59DE / 23006
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

bool Function_133(bool bParam0, bool bParam1) //Position: 0x5A1F / 23071
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

void Function_134(bool bParam0, bool bParam1) //Position: 0x5A88 / 23176
{
	if (Function_231(bParam0) == 1)
	{
		Function_186(368, 1);
		Function_67(371, 1, 0, 0);
		Function_185(370, (Function_47(370) + 1.0f));
		Function_181(200, 1, 0);
	}
	else if (Function_231(bParam0) == 2)
	{
		Function_186(367, 1);
		Function_67(371, 1, 0, 0);
		Function_185(370, (Function_47(370) + 1.0f));
		Function_67(370, 1, 0, 0);
		if (bParam1)
		{
			Function_178(Function_179(1, 1, 1, 0, 0), 1);
		}
		Function_168(50, 1, 0);
	}
	Function_135(bParam0, 2);
	bParam0->f_620 = 2;
	return;
}

void Function_135(int iParam0, int iParam1) //Position: 0x5B1B / 23323
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
				iVar0 = Function_167(iParam0);
				if ((iVar0 == 4294967295 && iVar0 == 0) && Function_166(iParam0) != 1)
				{
					Function_138(iParam0->f_488, iVar0, 1);
				}
				if (iParam0->f_484 != 1 || iParam0->f_484 != 0)
				{
					Function_181(200, 1, 0);
				}
				else
				{
					Function_168(50, 1, 0);
				}
				if (iParam0->f_332 > 0)
				{
					Function_178(iParam0->f_332, 1);
				}
				else
				{
					Function_136(iParam0->f_332, 1);
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

int Function_136(bool bParam0, bool bParam1) //Position: 0x5BF0 / 23536
{
	bool bVar0;
	
	bVar0 = Function_50(0);
	if ((Function_50(0) - bParam0) <= 0)
	{
		bParam0 = bVar0;
	}
	if (bParam0 >= 0)
	{
		Function_137(0, bParam0, 0);
	}
	else
	{
		return 0;
	}
	if (bParam1)
	{
		PRINT_MONEY(&(Global_35278[020]), bVar0, (bParam0 * 4294967295), 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_50(0));
	return 1;
}

int Function_137(int iParam0, bool bParam1, int iParam2) //Position: 0x5C80 / 23680
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
	Function_48(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_36(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

void Function_138(int iParam0, char* cParam1, bool bParam2) //Position: 0x5E7B / 24187
{
	char* cVar0[32];
	
	if (!Function_165(3))
	{
		return;
	}
	if (Function_23())
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
						if (IS_PS3())
						{
							Function_139(4, 16, 0, 0, 0);
						}
						break;
					
					case 0x0000000E:
						Function_139(5, 16, 0, 0, 0);
						break;
					
					case 0x0000000C:
						Function_139(7, 16, 0, 0, 0);
						break;
					}
			}
			strcpy(&cVar0, "PROCTHEME_ATTACK", 32);
			break;
		
		case 0x00000000:
			switch (cParam1)
			{
				case 0x00000019:
					if (IS_PS3())
					{
						Function_139(4, 8, 0, 0, 0);
					}
					break;
				
				case 0x0000000E:
					Function_139(5, 8, 0, 0, 0);
					break;
				
				case 0x00000018:
					Function_139(6, 8, 0, 0, 0);
					break;
				
				case 0x0000000C:
					Function_139(7, 8, 0, 0, 0);
					break;
			}
			strcpy(&cVar0, "PROCTHEME_BOUNTY_HUNTER", 32);
			break;
	}
	return;
}

void Function_139(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x5F88 / 24456
{
	char* cVar0[32];
	struct<8> Var8;
	
	strcpy(&cVar0, "OUT_", 32);
	stradd(&cVar0, &Global_27774[bParam013] + 32, 32);
	if (!Function_164(bParam0))
	{
		LOG_ERROR("Attempting to add scrap to invalid outfit");
		return;
	}
	if (!Function_165(3) || iParam3)
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_163(bParam0, 2))
	{
		Function_67(456, 1, 0, 0);
		Function_162(bParam0, 2);
		if (!bParam2)
		{
			Var8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
			stradd(&Var8, "_tip", 32);
			Function_161(&Var8, 10.0f, 1, 0, 0, 1, 0);
		}
	}
	bParam2 = bParam2;
	if (!Function_160(bParam0, bParam1))
	{
		Global_27774[bParam013].f_4 = (StackVal || bParam1);
		Function_162(bParam0, 1048576);
		if (bParam4)
		{
			if (!Function_159(0, 0, 1, 1))
			{
				Function_24(1);
				Function_22(1, 0);
			}
			else
			{
				Function_158();
			}
		}
		Function_153(bParam0);
		if (StackVal && !Function_80(((((!Function_152() && !Global_3380) && !Global_3392) && !Global_3384) && !bParam2), 1))
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Edit", &cVar0, false, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (StackVal || Function_80((((Function_152() || Global_3380) || Global_3392) || Global_3384), 1))
		{
			if (!DECOR_CHECK_EXIST(Global_34573, "outfitScrap"))
			{
				DECOR_SET_INT(Global_34573, "outfitScrap", bParam0);
			}
		}
		if (!Function_151(Global_76846, 2))
		{
			Function_146(Global_34573, 2, 1, 0);
		}
		if (Global_28180 == bParam0)
		{
			Global_28180.f_12 = 1;
			Function_141();
		}
		Global_28180.f_12 = 1;
		switch (bParam0)
		{
			case 0x00000004:
				Function_140(3, bParam1);
				break;
			
			case 0x00000005:
				Function_140(3, SHIFT_LEFT(bParam1, 6));
				break;
			
			case 0x00000006:
				Function_140(3, SHIFT_LEFT(bParam1, 12));
				break;
			
			case 0x00000007:
				Function_140(3, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x00000008:
				Function_140(3, SHIFT_LEFT(bParam1, 24));
				break;
			
			case 0x00000009:
				Function_140(2, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x0000000A:
				Function_66(2, 24);
				break;
			
			case 0x00000003:
				Function_66(2, 25);
				break;
			
			case 0x0000000F:
				Function_66(2, 26);
				break;
			
			case 0x0000000D:
				Function_66(2, 27);
				break;
			
			case 0x0000000E:
				Function_66(2, 28);
				break;
			}
	}
}

void Function_140(int iParam0, bool bParam1) //Position: 0x6217 / 25111
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

void Function_141() //Position: 0x6276 / 25206
{
	if (Function_164(Global_28180))
	{
		if (Global_28180.f_12)
		{
			if (IS_BLIP_VALID(StackVal))
			{
				REMOVE_BLIP(StackVal);
			}
			Global_28180.f_4 = Function_145(Global_28180);
			Global_28180.f_8 = Function_142(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
		else if (!IS_BLIP_VALID(StackVal))
		{
			Global_28180.f_4 = Function_145(Global_28180);
			Global_28180.f_8 = Function_142(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
	}
	return;
}

var Function_142(int iParam0, int iParam1) //Position: 0x62F1 / 25329
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
					if (Function_144(6, 0) || Function_144(12, 0))
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
					if (Function_143(13) && iVar16)
					{
						bVar6 = StackVal;
						iVar16 = 0;
					}
					else if (iVar16 && Function_144(5, 0))
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
					if (Function_143(26) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_143(25) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_143(24) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_143(23) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (iVar17 && Function_144(26, 0))
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
					if (Function_143(55) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_143(54) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_143(27) && iVar18)
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
					if (Function_143(52) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_143(51) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_143(50) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_143(49) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_144(17, 0) && iVar15)
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
					if (Function_143(19) && iVar19)
					{
						vVar0 = { -1708,36f, 46,18f, 2175,89f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_144(6, 0) && Function_143(18)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_143(17) && iVar19)
					{
						vVar0 = { -1687,208f, 53,208f, 2140,491f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_144(9, 0) && Function_143(16)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_143(15) && iVar19)
					{
						vVar0 = { -1709,084f, 55,216f, 2104,631f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if (Function_144(8, 0) && iVar19)
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
	if (Function_513(StackVal, StackVal, vVar0))
	{
		if (IS_OBJECT_VALID(bVar6))
		{
			GET_OBJECT_POSITION(bVar6, &vVar0);
			if (Function_513(StackVal, StackVal, vVar3))
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
	if (!Function_513(StackVal, StackVal, vVar3))
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

int Function_143(int iParam0) //Position: 0x6EE2 / 28386
{
	if (Global_74542[iParam010] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_144(int iParam0, bool bParam1) //Position: 0x6EF7 / 28407
{
	int iVar0;
	
	iVar0 = Function_72(iParam0);
	if (!Function_13(iVar0))
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

int Function_145(int iParam0) //Position: 0x6F34 / 28468
{
	int iVar0;
	int iVar1;
	
	if (!Function_164(iParam0))
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

void Function_146(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x6F83 / 28547
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_148(bParam0, iParam1, iParam2) && !bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_147(&cVar1, iParam2);
	if (!DECOR_CHECK_EXIST(bParam0, &cVar1))
	{
		DECOR_SET_INT(bParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(bParam0, &cVar1, (DECOR_GET_INT(bParam0, &cVar1) || bVar0));
	}
}

void Function_147(char* cParam0, int iParam1) //Position: 0x6FEF / 28655
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

bool Function_148(bool bParam0, var uParam1, int iParam2) //Position: 0x7026 / 28710
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
		if (Function_150(DECOR_GET_INT(bParam0, &cVar1)) > 3)
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
		switch (Function_149(uVar0))
		{
			case 0x00000002:
				if (!Function_151(Global_76847, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_149(char* cParam0) //Position: 0x709E / 28830
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

int Function_150(int iParam0) //Position: 0x713F / 28991
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_25(&iVar1, 2147483648);
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

bool Function_151(int iParam0, int iParam1) //Position: 0x717C / 29052
{
	if ((iParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

bool Function_152() //Position: 0x718F / 29071
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_153(bool bParam0) //Position: 0x71BC / 29116
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
			if (Function_160(bParam0, Function_157(bVar24)))
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
			if (Function_160(bParam0, Function_157(bVar24)))
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
		SET_JOURNAL_ENTRY_PROGRESS(Global_27774[bParam013].f_48, (TO_FLOAT(Function_156(bParam0)) / TO_FLOAT(Global_27774[bParam013].f_28)), false, 0);
		Function_155(Global_27774[bParam013].f_48, 0);
		straddi(&cVar8, Function_154(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_27774[bParam013].f_48, &cVar8, 3);
	}
	return;
}

int Function_154(int iParam0) //Position: 0x736C / 29548
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_164(iParam0))
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

void Function_155(bool bParam0, bool bParam1) //Position: 0x73C3 / 29635
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

var Function_156(int iParam0) //Position: 0x73E8 / 29672
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_164(iParam0))
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

int Function_157(bool bParam0) //Position: 0x743E / 29758
{
	return SHIFT_LEFT(true, bParam0);
}

void Function_158() //Position: 0x744A / 29770
{
	return;
}

bool Function_159(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x7450 / 29776
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

bool Function_160(bool bParam0, int iParam1) //Position: 0x74F4 / 29940
{
	int iVar0;
	
	if (!Function_164(bParam0))
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

void Function_161(int iParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x7553 / 30035
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

void Function_162(int iParam0, int iParam1) //Position: 0x759E / 30110
{
	if (!Function_164(iParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_27774[iParam013].f_8 = (StackVal || iParam1);
	return;
}

bool Function_163(int iParam0, int iParam1) //Position: 0x75F3 / 30195
{
	int iVar0;
	
	if (!Function_164(iParam0))
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

bool Function_164(int iParam0) //Position: 0x7620 / 30240
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

bool Function_165(int iParam0) //Position: 0x7636 / 30262
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_25986[iParam0];
}

int Function_166(int iParam0) //Position: 0x7652 / 30290
{
	return !Function_80(iParam0->f_584, 16384);
}

var Function_167(int iParam0) //Position: 0x7664 / 30308
{
	return iParam0->f_492;
}

void Function_168(int iParam0, bool bParam1, bool bParam2) //Position: 0x766F / 30319
{
	int iVar0;
	bool bVar1;
	
	if (Function_177(0) && (!Global_3380 || iParam0 == 100))
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
	iVar0 = Function_50(3);
	Function_175();
	if ((iVar0 + bVar1) >= 10000)
	{
		bVar1 = (10000 - iVar0);
	}
	if (bParam1)
	{
		Function_186(3, bVar1);
		if (!bParam2)
		{
			if (!Function_151(Global_76848, 4))
			{
				Function_146(Global_34573, 4, 3, 0);
			}
		}
	}
	else
	{
		Function_67(3, bVar1, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_46(3));
	iVar0 = Function_50(3);
	switch (Global_12976.f_156)
	{
		case 0x00000000:
			if (iVar0 > 1000)
			{
				Global_12976.f_156 = 1;
				Function_170(4, Function_174(Global_12976.f_156), 1);
				Function_169(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000001:
			if (iVar0 > 2000)
			{
				Global_12976.f_156 = 2;
				Function_170(4, Function_174(Global_12976.f_156), 1);
				Function_169(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000002:
			if (iVar0 > 4000)
			{
				Global_12976.f_156 = 3;
				Function_170(4, Function_174(Global_12976.f_156), 1);
				Function_169(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000003:
			if (iVar0 > 7000)
			{
				Global_12976.f_156 = 4;
				Function_170(4, Function_174(Global_12976.f_156), 1);
				Function_169(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000004:
			if (iVar0 > 10000)
			{
				Global_12976.f_156 = 5;
				Function_170(4, Function_174(Global_12976.f_156), 1);
				Function_169(Global_12976.f_152, Global_12976.f_156);
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

void Function_169(int iParam0, int iParam1) //Position: 0x7832 / 30770
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

int Function_170(int iParam0, char* cParam1, bool bParam2) //Position: 0x7A90 / 31376
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
	Function_69(iParam0, cParam1, 0, 1);
	iVar1 = Function_171();
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

int Function_171() //Position: 0x7C15 / 31765
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
	Function_172();
	return 0;
}

void Function_172() //Position: 0x7CB4 / 31924
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
		Function_173(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_173(int iParam0) //Position: 0x7D63 / 32099
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

var Function_174(int iParam0) //Position: 0x7DC1 / 32193
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

void Function_175() //Position: 0x7E50 / 32336
{
	Function_176(3, 0.0f);
	Function_185(3, 10000.0f);
	return;
}

int Function_176(int iParam0, int iParam1) //Position: 0x7E66 / 32358
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_60 = iParam1;
	return 1;
}

var Function_177(int iParam0) //Position: 0x7EA6 / 32422
{
	return (*&Global_12976 + 104)[iParam0];
}

int Function_178(bool bParam0, bool bParam1) //Position: 0x7EB5 / 32437
{
	bool bVar0;
	
	bVar0 = Function_50(0);
	if ((Function_50(0) + bParam0) >= 999999)
	{
		bParam0 = (999999 - bVar0);
	}
	if (bParam0 >= 0)
	{
		Function_67(0, bParam0, 0, 0);
	}
	else
	{
		return 0;
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_50(0));
	if (bParam1)
	{
		PRINT_MONEY(&(Global_35278[020]), bVar0, bParam0, 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	if (!Global_3384)
	{
		Function_67(597, bParam0, 0, 0);
	}
	if ((Function_50(597) + Function_50(450)) >= 10000)
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(24))
		{
			AWARD_ACHIEVEMENT(24);
		}
	}
	return 1;
}

var Function_179(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x7F80 / 32640
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
			bVar0 = (bVar0 * 0,75f);
			break;
		
		case 0x00000001:
			bVar0 = (bVar0 * 1.0f);
			break;
		
		case 0x00000002:
			bVar0 = (bVar0 * 1,25f);
			break;
		
		default:
			bVar0 = (bVar0 * 0,75f);
			break;
	}
	if (bParam2)
	{
		bVar0 = (bVar0 * (0,75f + ((TO_FLOAT(Function_50(5)) / 100.0f) * 0,5f)));
	}
	if (bParam3)
	{
		if (HAS_ITEM(Function_180(17), Global_34573))
		{
			bVar0 = (bVar0 * 1,2f);
		}
	}
	if (bParam4)
	{
		bVar0 = (bVar0 * 1,1f);
	}
	if (ROUND(bVar0) <= 1)
	{
		bVar0 = 1.0f;
	}
	return ROUND(bVar0);
}

var Function_180(bool bParam0) //Position: 0x8083 / 32899
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

void Function_181(int iParam0, bool bParam1, bool bParam2) //Position: 0x8174 / 33140
{
	int iVar0;
	bool bVar1;
	
	if (Function_177(0) && !Global_3380)
	{
		return;
	}
	bVar1 = iParam0;
	if (Global_3380)
	{
		Global_12976.f_160 = (Global_12976.f_160 + iParam0);
		return;
	}
	iVar0 = Function_50(1);
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
			Function_186(1, bVar1);
			if (!bParam2)
			{
				if (!Function_151(Global_76848, 1))
				{
					Function_146(Global_34573, 1, 3, 0);
				}
			}
		}
		else
		{
			Function_183(1, (4294967295 * bVar1));
			if (!Global_3380)
			{
				if (!Function_151(Global_76848, 2))
				{
					Function_146(Global_34573, 2, 3, 0);
				}
			}
		}
	}
	else if (bVar1 >= 0)
	{
		Function_67(1, bVar1, 0, 0);
	}
	else
	{
		Function_137(1, (4294967295 * bVar1), 0);
	}
	if (Function_50(1) <= 4294962296)
	{
		Function_35(1, 4294962296, 0);
	}
	else if (Function_50(1) >= 5000)
	{
		Function_35(1, 5000, 0);
	}
	SET_PLAYER_CURRENT_HONOR(0, Function_46(1));
	iVar0 = Function_50(1);
	switch (Global_12976.f_152)
	{
		case 0x00000000:
			if (iVar0 >= 4294962796)
			{
				Global_12976.f_152 = 1;
				Function_170(2, Function_182(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_12976.f_152 = 0;
				Function_170(2, Function_182(Global_12976.f_152), 0);
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
				Function_170(2, Function_182(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_12976.f_152 = 1;
				Function_170(2, Function_182(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_12976.f_152 = 3;
				Function_170(2, Function_182(Global_12976.f_152), 1);
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
				Function_170(2, Function_182(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_12976.f_152 = 4;
				Function_170(2, Function_182(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_12976.f_152 = 3;
				Function_170(2, Function_182(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_12976.f_152 = 5;
				Function_170(2, Function_182(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_12976.f_152 = 4;
				Function_170(2, Function_182(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_12976.f_152 = 6;
				Function_170(2, Function_182(Global_12976.f_152), 1);
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
				Function_170(2, Function_182(Global_12976.f_152), 0);
			}
			break;
	}
	Function_169(Global_12976.f_152, Global_12976.f_156);
	return;
}

var Function_182(int iParam0) //Position: 0x8489 / 33929
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

int Function_183(int iParam0, bool bParam1) //Position: 0x852C / 34092
{
	bool bVar0;
	int iVar1;
	
	Function_137(iParam0, bParam1, 0);
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
	iVar1 = Function_184(iParam0, 4294967295);
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
	iVar1 = Function_171();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME-INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 3;
	return 1;
}

var Function_184(int iParam0, int iParam1) //Position: 0x86C8 / 34504
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

int Function_185(int iParam0, int iParam1) //Position: 0x8709 / 34569
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_64 = iParam1;
	return 1;
}

int Function_186(int iParam0, bool bParam1) //Position: 0x8749 / 34633
{
	bool bVar0;
	int iVar1;
	
	Function_67(iParam0, bParam1, 0, 0);
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
	iVar1 = Function_184(iParam0, 4294967295);
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
	iVar1 = Function_171();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME+INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 1;
	return 1;
}

bool Function_187(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, bool bParam5, float fParam6, int iParam7, bool bParam8, var uParam9, bool bParam10, bool bParam11, bool bParam12, var uParam13, int iParam14, int iParam15, float fParam16, bool bParam17, float fParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, int iParam23, float fParam24) //Position: 0x88E6 / 35046
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
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE(*uParam0, true);
				SET_ACTOR_ALLOW_BUMP_REACTIONS(*uParam0, 0);
				*uParam2 = Function_196(*uParam0, Global_34573);
				AI_GOAL_LOOK_AT_ACTOR_NEW(*uParam0, *uParam1, -1.0f, 1);
				bParam8 = CREATE_POINT_IN_LAYOUT(bParam5, Function_37(), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
				ATTACH_OBJECTS(bParam8, *uParam1, Function_37(), 0.0f, 0,5f, fParam16, 0.0f, 0.0f, 0.0f, 4294967295);
				if (!CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), *uParam0, 1.0f, iParam14, 1, 1, 0) || Function_196(Global_34573, *uParam0) > 2.0f)
				{
					TASK_FOLLOW_OBJECT_AT_DISTANCE(*uParam0, bParam8, 1.0f, iParam15);
					TASK_PRIORITY_SET(*uParam0, true);
				}
				*uParam3 = 1;
			}
			break;
		
		case 0x00000001:
			if ((Function_196(*uParam0, *uParam1) - *uParam2) < fParam6)
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
				TASK_PRIORITY_SET(*uParam0, true);
				*uParam9 = 0;
				*uParam3 = 4;
			}
			else if (!Function_192(*uParam0, 0))
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
					Function_191(*uParam0, Global_34573, "nThank_You", 0, 5, 60, 1, 1);
				}
				else
				{
					Function_191(*uParam0, Global_34573, bParam12, uParam13, 5, 60, 1, 1);
				}
				*uParam3 = 5;
				Function_190(uParam4, 0.0f);
			}
			else if (!Function_192(*uParam0, 0))
			{
				return 0;
			}
			break;
		
		case 0x00000005:
			if (iParam23 && !Function_189(*uParam0))
			{
				if (fParam24 != -1.0f)
				{
					if (!IS_AMBIENT_SPEECH_PLAYING(*uParam0))
					{
						RESET_ANIM_SET_FOR_ACTOR(*uParam0, 1);
						Function_188(*uParam0, 4, 0, 1);
					}
				}
				else if (Function_226(uParam4, fParam24))
				{
					RESET_ANIM_SET_FOR_ACTOR(*uParam0, 1);
					Function_188(*uParam0, 4, 0, 1);
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
							Function_191(Global_34573, *uParam0, bParam20, bParam20, 5, 60, 1, 1);
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
			if (iParam23 && !Function_189(*uParam0))
			{
				if (Function_226(uParam4, fParam24))
				{
					RESET_ANIM_SET_FOR_ACTOR(*uParam0, 1);
					Function_188(*uParam0, 4, 0, 1);
				}
			}
			if (!IS_ACTION_NODE_PLAYING_PARTIAL(*uParam0, bParam11) && !IS_AMBIENT_SPEECH_PLAYING(Global_34573))
			{
				RESET_ANIM_SET_FOR_ACTOR(*uParam0, 1);
				*iParam7 = 1;
				if (bParam17)
				{
					Function_188(*uParam0, 4, 0, iParam15);
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

int Function_188(bool bParam0, int iParam1, int iParam2, int iParam3) //Position: 0x8C8C / 35980
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
					Function_101(bVar1, 0, 0, 0, 1);
				}
				bVar0++;
			}
		}
		Function_101(bParam0, iParam1, iParam2, iParam3, 1);
	}
	else
	{
		return 0;
	}
	return 1;
}

bool Function_189(bool bParam0) //Position: 0x8D6C / 36204
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

void Function_190(var uParam0, bool bParam1) //Position: 0x8D91 / 36241
{
	uParam0->f_4 = (GET_CURRENT_GAME_TIME() - bParam1);
	Function_58(uParam0, 1);
	Function_25(uParam0, 2);
	uParam0->f_8 = 0.0f;
	return;
}

void Function_191(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x8DB2 / 36274
{
	bParam1 = bParam1;
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_ACTOR_ALIVE(bParam0) && Function_196(bParam0, Global_34573) >= IntToFloat(iParam5))
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

bool Function_192(bool bParam0, bool bParam1) //Position: 0x8E42 / 36418
{
	if (bParam1)
	{
		if (IS_ACTOR_HOGTIED(bParam0))
		{
			if (!(GET_TASK_STATUS(bParam0, 25) != 1 || GET_TASK_STATUS(bParam0, 25) != 3))
			{
				MEMORY_CLEAR_EVENTS(bParam0, 0);
				TASK_FLEE_ACTOR(bParam0, Global_34573, -1.0f, -1.0f, 0, 0, 0);
				TASK_PRIORITY_SET(bParam0, true);
			}
			Function_194(bParam0);
			return 0;
		}
		if (!AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(bParam0), 163840))
		{
			Function_194(bParam0);
			return 0;
		}
	}
	if (IS_ACTOR_VALID(bParam0))
	{
		if (Function_193(bParam0, 0) && !AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(bParam0), 16384))
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

int Function_193(bool bParam0, int iParam1) //Position: 0x8EDE / 36574
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

int Function_194(bool bParam0) //Position: 0x8F28 / 36648
{
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_195(bParam0);
		return 1;
	}
	return 0;
}

void Function_195(bool bParam0) //Position: 0x8F3E / 36670
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

float Function_196(bool bParam0, bool bParam1) //Position: 0x8F6A / 36714
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

vector3 Function_197(bool bParam0) //Position: 0x905B / 36955
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

void Function_198(int iParam0) //Position: 0x906C / 36972
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	float fVar3;
	float fVar4;
	
	fVar3 = 1E+08.0f;
	iParam0->f_1504 = Function_199(Global_34573, iParam0->f_1508);
	bVar0 = false;
	while (bVar0 <= GET_ACTORSET_SIZE(iParam0->f_1508))
	{
		bVar2 = GET_ACTOR_FROM_ACTORSET(iParam0->f_1508, bVar0);
		if (bVar2 != iParam0->f_1504)
		{
			fVar4 = Function_196(bVar2, iParam0->f_972);
			if (fVar4 > fVar3)
			{
				fVar3 = fVar4;
				iParam0->f_1500 = bVar2;
			}
		}
		bVar0++;
	}
	bVar1 = TASK_SEQUENCE_OPEN();
	TASK_GO_NEAR_ACTOR(0, iParam0->f_972, 7.0f, 4);
	TASK_DISMOUNT(false, 1);
	TASK_VEHICLE_ENTER(false, iParam0->f_972, 1, 2);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(iParam0->f_1500, bVar1);
	TASK_SEQUENCE_RELEASE(bVar1, 1);
	return;
}

var Function_199(bool bParam0, bool bParam1) //Position: 0x910A / 37130
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
		if (Function_200(GET_ACTOR_FROM_ACTORSET(bParam1, bVar0), bParam0) > fVar2)
		{
			fVar2 = Function_200(GET_ACTOR_FROM_ACTORSET(bParam1, bVar0), bParam0);
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

float Function_200(bool bParam0, bool bParam1) //Position: 0x91CD / 37325
{
	var uVar0;
	int iVar3;
	int iVar6;
	
	GET_POSITION(bParam0, &uVar0);
	GET_POSITION(bParam1, &iVar3);
	iVar6 = Function_201(&uVar0, &iVar3);
	return iVar6;
}

float Function_201(var uParam0, int iParam1) //Position: 0x91EC / 37356
{
	vector3 vVar0;
	bool bVar3;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*iParam1, *uParam0, StackVal) };
	bVar3 = VMAG(vVar0);
	return bVar3;
}

void Function_202(int iParam0) //Position: 0x920A / 37386
{
	Function_190(iParam0, 0.0f);
	return;
}

void Function_203(bool bParam0) //Position: 0x9216 / 37398
{
	bool bVar0;
	bool bVar1;
	
	if (iLocal_413 == 2)
	{
		if (bParam0)
		{
			Function_134(&Local_23, 1);
		}
		if (Function_231(&Local_23) == 2)
		{
			START_VEHICLE(Local_23.f_972);
			SET_VEHICLE_ALLOWED_TO_DRIVE(Local_23.f_972, 1);
			if (IS_ACTOR_VALID(Local_23.f_1500))
			{
				TASK_CLEAR(Local_23.f_1500);
				TASK_PRIORITY_SET(Local_23.f_1500, true);
				TASK_FLEE_COORD(Local_23.f_1500, &Global_34574, 4, -1.0f, -1.0f, 0);
				bVar1 = false;
				while (bVar1 < (SQUAD_GET_SIZE((&Local_23 + 1256)->f_60) - 1))
				{
					bVar0 = SQUAD_GET_ACTOR_BY_INDEX((&Local_23 + 1256)->f_60, bVar1);
					Function_207(bVar0, Global_34573, 2, 0);
					if (!bVar0 != Local_23.f_1500)
					{
						TASK_CLEAR(bVar0);
						TASK_FOLLOW_ACTOR(bVar0, Local_23.f_1500);
					}
					bVar1++;
				}
				Function_95(Local_23.f_1500, 0.0f, 0.0f, 0.0f, 0, 4, 2, 1);
			}
		}
	}
	else if (iLocal_413 == 3)
	{
		Function_206(&Local_23);
	}
	else if (iLocal_413 == 4)
	{
		Function_205(&Local_23);
	}
	Function_204((&Local_23 + 1256)->f_60);
	Function_204(Local_23.f_1212);
	if (IS_VOLUME_VALID(Local_23.f_1532))
	{
		DESTROY_VOLUME(Local_23.f_1532);
	}
	Function_2(&Local_23);
	return;
}

void Function_204(bool bParam0) //Position: 0x9321 / 37665
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

void Function_205(int iParam0) //Position: 0x9368 / 37736
{
	Function_135(iParam0, 4);
	return;
}

void Function_206(int iParam0) //Position: 0x9374 / 37748
{
	Function_135(iParam0, 3);
	return;
}

int Function_207(bool bParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x9380 / 37760
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

void Function_208(bool bParam0, int iParam1, int iParam2) //Position: 0x93D3 / 37843
{
	if (iParam2 == 1)
	{
		if (Function_216(bParam0, iParam1, iParam2))
		{
			Function_214(bParam0);
		}
		else if (Function_213(bParam0, iParam1))
		{
			Function_211(bParam0);
		}
		if (Function_210(bParam0, iParam1, iParam2))
		{
			Function_209(bParam0);
		}
	}
	else if (Function_216(bParam0, iParam1, 0))
	{
		Function_214(bParam0);
	}
	else if (Function_210(bParam0, iParam1, 0))
	{
		Function_209(bParam0);
	}
	else if (Function_213(bParam0, iParam1))
	{
		Function_211(bParam0);
	}
	return;
}

void Function_209(int iParam0) //Position: 0x944D / 37965
{
	char* cVar0[32];
	
	if (iParam0->f_480 <= iParam0->f_336)
	{
		strcpy(&cVar0, "Print Help: ", 32);
		stradd(&cVar0, iParam0 + 336[iParam0->f_4804], 32);
		if ((*iParam0 + 388)[iParam0->f_480] == 1)
		{
			PRINT_HELP_FORMAT(10.0f, iParam0 + 336[iParam0->f_4804], iParam0 + 404[iParam0->f_4806], "", "", "", 2, 0, 0);
		}
		else
		{
			Function_161(iParam0 + 336[iParam0->f_4804], 0x41200000, 1, 0, 2, 1, 0);
		}
		iParam0->f_480++;
	}
	return;
}

bool Function_210(int iParam0, int iParam1, int iParam2) //Position: 0x94E7 / 38119
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	iVar0 = 0;
	bVar2 = VDIST(Global_34574, *(iParam0 + 4));
	bVar3 = VDIST(Global_34574, *(iParam0 + 16));
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
	else if (Function_152() && iParam2 != 0)
	{
		iVar0 = 0;
	}
	else if (!iParam0->f_480 <= iParam0->f_404)
	{
		if (STRING_LENGTH(iParam0 + 336[iParam0->f_4804]) >= 0)
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

var Function_211(bool bParam0) //Position: 0x9585 / 38277
{
	bool bVar0;
	int iVar1;
	
	iVar1 = 0;
	if (!Function_80(bParam0->f_584, 8) && bParam0->f_328 > 3)
	{
		if (VDIST(Global_34574, *(bParam0 + 4)) < VDIST(Global_34574, *(bParam0 + 16)) && IS_STRING_VALID(bParam0 + 276[bParam0->f_3284]))
		{
			iVar1 = 1;
		}
		if (iVar1 == 1)
		{
			if (IS_STRING_VALID(bParam0 + 276[bParam0->f_3284]))
			{
				Function_212(bParam0 + 276[bParam0->f_3284], 3.0f, 0, 2, 1, 0);
				bParam0->f_328++;
				Function_202(bParam0 + 44);
				bVar0 = true;
			}
		}
		else if (IS_STRING_VALID(bParam0 + 220[bParam0->f_2724]))
		{
			Function_212(bParam0 + 220[bParam0->f_2724], 3.0f, 0, 2, 1, 0);
			bParam0->f_272++;
			bParam0->f_272 = (bParam0->f_272 % 3);
			Function_202(bParam0 + 44);
			bVar0 = true;
		}
	}
	return bVar0;
}

void Function_212(char* cParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x966A / 38506
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

bool Function_213(int iParam0, int iParam1) //Position: 0x96B1 / 38577
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
	else if (!IS_STRING_VALID(iParam0 + 220[04]))
	{
		iVar0 = 0;
	}
	else if (Function_152())
	{
		iVar0 = 0;
	}
	else if (Function_226(iParam0 + 44, 8.0f))
	{
		iVar0 = 1;
	}
	return iVar0;
}

void Function_214(int iParam0) //Position: 0x9754 / 38740
{
	char* cVar0[32];
	
	if (iParam0->f_108 <= iParam0->f_56)
	{
		strcpy(&cVar0, "Print Obj: ", 32);
		stradd(&cVar0, iParam0 + 56[iParam0->f_1084], 32);
		if ((*iParam0 + 112)[iParam0->f_108] == 1)
		{
			PRINT_OBJECTIVE_FORMAT(7,5f, iParam0 + 56[iParam0->f_1084], iParam0 + 144[iParam0->f_1086], "", "", "", "", 0, (*iParam0 + 128)[iParam0->f_108], 0, 0);
		}
		else
		{
			Function_215(iParam0 + 56[iParam0->f_1084], 8,5f, (*iParam0 + 128)[iParam0->f_108], 2, 0, 0, 0);
		}
		iParam0->f_108++;
	}
	return;
}

void Function_215(bool bParam0, float fParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6) //Position: 0x97F5 / 38901
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

bool Function_216(int iParam0, int iParam1, int iParam2) //Position: 0x9848 / 38984
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
	else if (Function_152() && iParam2 != 0)
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

void Function_217(bool bParam0) //Position: 0x98FF / 39167
{
	Function_218(bParam0);
	Function_122(bParam0, 1, 1);
	Function_232(bParam0, 1);
	return;
}

void Function_218(bool bParam0) //Position: 0x9917 / 39191
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

void Function_219(bool bParam0) //Position: 0x9953 / 39251
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
				Function_197(bVar1);
				bVar2 = VDIST(Function_197(bVar1), Global_34574);
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

void Function_220(int iParam0, bool bParam1) //Position: 0x9A06 / 39430
{
	if (!Function_221(iParam0))
	{
		return;
	}
	if (!bParam1 < 0)
	{
	}
	Global_26401[iParam0] = (Global_26401[iParam0] + bParam1);
	Function_67((*&Global_26401 + 2220)[iParam0], bParam1, 0, 0);
	Function_67(222, bParam1, 0, 0);
	return;
}

bool Function_221(int iParam0) //Position: 0x9A4B / 39499
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return 1;
}

int Function_222(var uParam0, int iParam1) //Position: 0x9A60 / 39520
{
	struct<73> Var0;
	
	if (IS_SCRIPT_VALID(Global_26316.f_60))
	{
		return 0;
	}
	Function_223(1);
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

void Function_223(bool bParam0) //Position: 0x9B08 / 39688
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
		Function_224();
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

void Function_224() //Position: 0x9B93 / 39827
{
	int iVar0;
	
	Global_26960 = Function_225(StackVal);
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

int Function_225(int iParam0) //Position: 0x9BE1 / 39905
{
	if (!Function_221(iParam0))
	{
		return 0;
	}
	return Global_26401[iParam0];
}

bool Function_226(int iParam0, float fParam1) //Position: 0x9BF9 / 39929
{
	if (Function_229(iParam0))
	{
		if (Function_227(iParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float Function_227(int iParam0) //Position: 0x9C15 / 39957
{
	if (Function_229(iParam0))
	{
		if (Function_228(iParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_228(int iParam0) //Position: 0x9CDD / 40157
{
	return Function_80(*iParam0, 2);
}

bool Function_229(int iParam0) //Position: 0x9CEA / 40170
{
	return Function_80(*iParam0, 1);
}

var Function_230(int iParam0, bool bParam1, int iParam2) //Position: 0x9CF7 / 40183
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

int Function_231(bool bParam0) //Position: 0x9D70 / 40304
{
	return bParam0->f_484;
}

void Function_232(bool bParam0, bool bParam1) //Position: 0x9D7B / 40315
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

bool Function_233(bool bParam0) //Position: 0x9DC4 / 40388
{
	if (Function_80(bParam0->f_584, 16))
	{
		return 1;
	}
	return 0;
}

int Function_234(bool bParam0) //Position: 0x9DDD / 40413
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
	Function_496(bParam0, 1000);
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
		if (Function_80((bParam0 + 1256)->f_92, 2))
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
	switch (Function_323(bParam0))
	{
		case 0x00000002:
			Function_134(bParam0, 1);
			break;
		
		case 0x00000003:
			Function_206(bParam0);
			break;
		
		case 0x00000004:
			Function_205(bParam0);
			break;
		
		case 0x00000001:
			break;
	}
	if (Function_322(bParam0) == 4)
	{
		if (iVar0 <= 4)
		{
			return 4;
		}
	}
	if (Function_322(bParam0) == 3)
	{
		if (iVar0 <= 9)
		{
			return 9;
		}
	}
	if (Function_131(bParam0))
	{
		Function_127(bParam0);
		iVar11 = 1;
		if (iVar0 <= 3)
		{
			iVar0 = 3;
		}
	}
	if (bParam0->f_1516)
	{
		if (Function_80((bParam0 + 1256)->f_92, 2))
		{
			if (!Function_321((bParam0 + 1256)->f_60))
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
		if (!Function_320(bParam0->f_972, 4294967295, 1, 4294967295))
		{
			if (!Function_231(bParam0) != 2)
			{
				if (iVar0 <= 14)
				{
					iVar0 = 14;
				}
			}
		}
		if (!Function_319(bParam0->f_972, Global_34573, 180.0f))
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
				Function_514(bParam0, 0, 0);
				Function_317(bParam0 + 1256);
				Function_99(bParam0 + 1256, bParam0->f_972);
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
				if (Function_316(bParam0->f_972, 0) > 1.0f)
				{
					Function_354();
					bVar13 = CREATE_VOLUME_IN_LAYOUT(bParam0->f_832, Function_37(), 3, vVar2, Function_354(), 8.0f, 8.0f, 8.0f);
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
	else if (!Function_321(bParam0->f_1212))
	{
		if (Function_231(bParam0) == 2)
		{
			Function_317(bParam0 + 1256);
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
	if (Function_233(bParam0) == 0)
	{
		if (Function_313(bParam0))
		{
			Function_202(bParam0 + 856);
			if (Function_231(bParam0) == 1)
			{
				if (iVar0 <= 1)
				{
					iVar0 = 1;
				}
				if (SQUAD_GET_SIZE(bParam0->f_1212) < 0 && SQUAD_GET_SIZE((bParam0 + 1256)->f_60) < 0)
				{
					bVar14 = Function_312(StackVal, StackVal, Global_34574, bParam0->f_1212);
					bVar15 = Function_312(StackVal, StackVal, Global_34574, (bParam0 + 1256)->f_60);
					if (IS_ACTOR_VALID(bVar14) && IS_ACTOR_VALID(bVar15))
					{
						GET_POSITION(bVar14, &vVar16);
						GET_POSITION(bVar15, &vVar19);
						if (VDIST(vVar16, Global_34574) > VDIST(vVar19, Global_34574))
						{
							SAY_SINGLE_LINE_CONTEXT(bVar14, 302, Function_33(), 1, 0, 2, 4294967295, 4294967295, 0, 1);
						}
						else
						{
							SAY_SINGLE_LINE_CONTEXT(bVar15, 298, Function_33(), 1, 0, 2, 4294967295, 4294967295, 0, 1);
						}
					}
				}
			}
			else if (Function_231(bParam0) == 2)
			{
				if (iVar0 <= 2)
				{
					iVar0 = 2;
				}
				if (SQUAD_GET_SIZE((bParam0 + 1256)->f_60) < 0 && SQUAD_GET_SIZE(bParam0->f_1212) < 0)
				{
					bVar22 = Function_312(StackVal, StackVal, Global_34574, (bParam0 + 1256)->f_60);
					bVar23 = Function_312(StackVal, StackVal, Global_34574, bParam0->f_1212);
					if (IS_ACTOR_VALID(bVar22) && IS_ACTOR_VALID(bVar23))
					{
						GET_POSITION(bVar22, &vVar24);
						GET_POSITION(bVar23, &vVar27);
						if (VDIST(vVar24, Global_34574) > VDIST(vVar27, Global_34574))
						{
							SAY_SINGLE_LINE_CONTEXT(bVar22, 297, Function_33(), 1, 0, 2, 4294967295, 4294967295, 0, 1);
						}
						else
						{
							SAY_SINGLE_LINE_CONTEXT(bVar23, 303, Function_33(), 1, 0, 2, 4294967295, 4294967295, 0, 1);
						}
					}
				}
			}
			Function_310(1);
			Function_306(bParam0);
			Function_305(bParam0);
			Function_218(bParam0);
			Function_202(bParam0 + 844);
			iVar11 = 1;
		}
		else
		{
			if (!Function_229(bParam0 + 520))
			{
				Function_202(bParam0 + 520);
			}
			if (Function_226(bParam0 + 520, 1,5f))
			{
				iVar11 = 1;
				Function_202(bParam0 + 520);
			}
		}
	}
	GET_ACTOR_VELOCITY(bParam0->f_972, &vVar5);
	if (VMAG(vVar5) < 5.0f)
	{
		Function_202(bParam0 + 980);
		bParam0->f_996 = 0;
	}
	else if (Function_226(bParam0 + 980, 5.0f) && bParam0->f_996 != 0)
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
				if (VMAG(vVar5) < 4.0f || Function_226(bParam0 + 868, 1.0f))
				{
					Function_304(StackVal, StackVal, bParam0, vVar2);
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
			Function_304(StackVal, StackVal, bParam0, vVar2);
			if (SQUAD_IS_VALID((bParam0 + 1256)->f_60))
			{
				bVar1 = Function_301(StackVal, StackVal, (bParam0 + 1256)->f_60, Global_34574, 0);
				if (IS_ACTOR_VALID(bVar1))
				{
					GET_POSITION(bVar1, &vVar5);
				}
				Function_300(StackVal, StackVal, bParam0, vVar5);
			}
			if (bParam0->f_908 == 0)
			{
				Function_218(bParam0);
				Function_296(bParam0, "pm_mad_help", 0);
				Function_296(bParam0, "pm_mad_help2", 0);
				bParam0->f_908 = 1;
			}
			Function_289(bParam0);
			break;
		
		case 0x00000004:
			Function_289(bParam0);
			if (bParam0->f_632 == 4)
			{
				if (bParam0->f_996 == 1)
				{
					Function_288(bParam0);
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
			if (Function_287(bParam0->f_1212))
			{
				if (iVar0 <= 16)
				{
					iVar0 = 16;
				}
			}
			if (bParam0->f_1524 == 0)
			{
				if (Function_286((bParam0 + 1256)->f_60) || Function_287((bParam0 + 1256)->f_60))
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
			Function_514(bParam0, 0, 0);
		}
		else
		{
			Function_514(bParam0, 1, 0);
		}
	}
	if (Function_233(bParam0))
	{
		Function_208(bParam0, 1, 1);
	}
	else
	{
		Function_208(bParam0, 0, 1);
	}
	Function_235(bParam0);
	return iVar0;
}

int Function_235(int iParam0) //Position: 0xA534 / 42292
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
		cVar0 = Function_285(bVar1);
		GET_POSITION(bVar1, &uVar2);
		switch (cVar0)
		{
			case 0x00000007:
				if (!IS_ACTOR_ALIVE(GET_ACTOR_IN_VEHICLE_SEAT(iParam0->f_972, false)))
				{
					if (bVar9 == 1)
					{
						Function_284(SQUAD_GET_ACTOR_BY_INDEX(iParam0->f_1212, false), 11);
					}
					Function_284(bVar1, 11);
				}
				break;
			
			case 0x0000000B:
				if (IS_ACTOR_VALID(GET_VEHICLE(bVar1)) && !(GET_TASK_STATUS(bVar1, 55) != 3 || GET_TASK_STATUS(bVar1, 55) != 1))
				{
					TASK_CLEAR(bVar1);
					TASK_VEHICLE_LEAVE(bVar1);
					TASK_PRIORITY_SET(bVar1, true);
				}
				else if (IS_ACTOR_VALID(GET_VEHICLE(bVar1)) == 0)
				{
					Function_284(bVar1, 5);
				}
				break;
			
			case 0x00000005:
				if (GET_TASK_STATUS(bVar1, 87) != 0 || SQUAD_GET_SIZE((iParam0 + 1256)->f_60) >= 0)
				{
					Function_284(bVar1, 3);
				}
				else if (!(GET_TASK_STATUS(bVar1, 87) != 3 || GET_TASK_STATUS(bVar1, 87) != 1))
				{
					if (!IS_ACTORSET_VALID(iParam0->f_1508))
					{
						memcpy(&uVar10, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_282("bgActSet"), 4);
						iParam0->f_1508 = CREATE_ACTORSET_IN_LAYOUT(iParam0->f_832, &uVar10, 0);
					}
					if (iVar8 == 0)
					{
						iVar8 = 1;
						memcpy(&uVar10, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_282("nstayInVol"), 4);
						Function_197(iParam0->f_972);
						iParam0->f_1532 = CREATE_VOLUME_IN_LAYOUT(iParam0->f_832, &uVar10, 3, Function_197(iParam0->f_972), 0.0f, 0.0f, 0.0f, 40.0f, 20.0f, 40.0f);
						Function_281(iParam0->f_1508);
						Function_280((iParam0 + 1256)->f_60, iParam0->f_1508, 0, 1);
						Function_279((iParam0 + 1256)->f_60, iParam0->f_1532, 4, 1);
						Function_279(iParam0->f_1212, iParam0->f_1532, 4, 1);
					}
					TASK_CLEAR(bVar1);
					TASK_FLEE_ACTORSET(bVar1, iParam0->f_1508, 30.0f, -1.0f, 1, 0, 0);
					TASK_PRIORITY_SET(bVar1, false);
				}
				break;
			
			case 0x00000003:
				if (bVar9 == 0)
				{
					if (GET_ACTOR_IN_VEHICLE_SEAT(iParam0->f_972, false) != bVar1 || GET_TASK_STATUS(bVar1, 54) != 0)
					{
						ACTOR_START_FORCE_HOLSTER(bVar1, 0, 0);
						Function_284(bVar1, 4);
					}
					else if (!(GET_TASK_STATUS(bVar1, 54) != 3 || GET_TASK_STATUS(bVar1, 54) != 1))
					{
						TASK_CLEAR(bVar1);
						TASK_VEHICLE_ENTER_SPECIFIC_LOCATION(bVar1, iParam0->f_972, 0, 4, 1);
						TASK_PRIORITY_SET(bVar1, true);
					}
				}
				else if (!(GET_TASK_STATUS(bVar1, 53) != 3 || GET_TASK_STATUS(bVar1, 53) != 1))
				{
					TASK_CLEAR(bVar1);
					TASK_VEHICLE_ENTER(bVar1, iParam0->f_972, 2, 4);
					TASK_PRIORITY_SET(bVar1, true);
				}
				else if (GET_VEHICLE(bVar1) == iParam0->f_972)
				{
					Function_284(bVar1, 6);
				}
				break;
			
			case 0x00000004:
				break;
			
			case 0x00000002:
				if (!(GET_TASK_STATUS(bVar1, 6) != 3 || GET_TASK_STATUS(bVar1, 6) != 1))
				{
					TASK_CLEAR(bVar1);
					TASK_STAND_STILL(bVar1, -1.0f, 0, 0);
					TASK_PRIORITY_SET(bVar1, true);
				}
				break;
			
			case 0x00000006:
				if (!(GET_TASK_STATUS(bVar1, 5) != 3 || GET_TASK_STATUS(bVar1, 5) != 1))
				{
					TASK_CLEAR(bVar1);
					TASK_KILL_CHAR(bVar1, Function_278((iParam0 + 1256)->f_60, bVar1, 0, 0));
					TASK_PRIORITY_SET(bVar1, false);
				}
				break;
			
			case 0x0000000A:
				break;
		}
		bVar9++;
	}
	if (Function_277(StackVal) >= 0)
	{
		Function_275(iParam0 + 1000, 1);
		iParam0->f_1192 = Function_236(iParam0 + 1000, 1, 0, 0);
	}
	return 1;
}

int Function_236(bool bParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0xA882 / 43138
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
			Function_274(bParam0 + 24);
			vVar1 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_274(bParam0 + 24), *(bParam0 + 168), StackVal) };
			Function_274(bParam0 + 24);
			vVar4 = { StackVal, StackVal, Function_274(bParam0 + 24) };
			Var10 = { StackVal, StackVal, StackVal, StackVal, StackVal, *(bParam0 + 24) };
			*(bParam0 + 24) = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_272(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, bParam0, Var10, bParam0->f_152, vVar1) };
			if (Function_271(bParam0 + 24))
			{
				*bParam0 = 16;
				return 3;
			}
			Function_274(bParam0 + 24);
			*(bParam0 + 168) = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar4, Function_274(bParam0 + 24), StackVal) };
			*(bParam0 + 168) = { 0.0f, UNK_0x9C40E671(bParam0 + 168), 0.0f };
			if (bParam1)
			{
				Function_263(bParam0, 0);
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
			if (Function_258(bParam0, bParam1, bParam3))
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
			if (!IS_ACTOR_VALID(Function_257(StackVal)))
			{
				*bParam0 = 16;
				return 5;
			}
			GET_POSITION(Function_257(StackVal), &vVar4);
			*(bParam0 + 24) = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_256(StackVal, StackVal, vVar4) };
			GET_ACTOR_VELOCITY(Function_257(StackVal), &vVar1);
			GET_POSITION(Function_257(StackVal), &vVar7);
			if (Function_271(bParam0 + 24))
			{
				*(bParam0 + 24) = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_254(Function_257(StackVal)) };
				return 7;
			}
			if (Function_258(bParam0, bParam1, bParam3))
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
			if (Function_258(bParam0, bParam1, bParam3))
			{
				*bParam0 = 7;
			}
			else
			{
				return 6;
			}
			if (!Function_243(bParam0))
			{
				*bParam0 = 9;
				return 7;
			}
			if (!Function_258(bParam0, bParam1, bParam3))
			{
				*bParam0 = 16;
				return 6;
			}
			*bParam0 = 7;
		
		case 0x00000008:
			break;
		
		case 0x00000007:
			if (!Function_240(bParam0))
			{
				*bParam0 = 6;
				return 0;
			}
			if (bParam1)
			{
				if (Function_238(bParam0))
				{
					bVar16 = true;
				}
				if (Function_237(StackVal))
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
					Function_263(bParam0, 0);
				}
			}
			GET_POSITION(Function_257(StackVal), &vVar7);
			if (bParam0->f_88)
			{
				if (!Function_513(StackVal, StackVal, *(bParam0 + 136)))
				{
					if (Function_61(StackVal, StackVal, StackVal, StackVal, vVar7, *(bParam0 + 136)) > bParam0->f_128)
					{
						SQUAD_GOALS_CLEAR(StackVal);
						TASK_GO_TO_COORD(Function_257(StackVal), bParam0 + 136, 1);
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

bool Function_237(bool bParam0) //Position: 0xAB9D / 43933
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

bool Function_238(int iParam0) //Position: 0xABC9 / 43977
{
	if (!IS_VOLUME_VALID(Global_28842.f_28))
	{
		return 0;
	}
	if (StackVal || (StackVal || StackVal != 2 != 4) != 1)
	{
		if (Function_239(StackVal, Global_28842.f_28))
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

bool Function_239(bool bParam0, bool bParam1) //Position: 0xAC38 / 44088
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

bool Function_240(int iParam0) //Position: 0xACBA / 44218
{
	vector3 vVar0;
	vector3 vVar3;
	bool bVar6;
	
	if (DECOR_CHECK_EXIST(StackVal, "coachService"))
	{
		return 1;
	}
	Function_274(iParam0 + 24);
	bVar6 = Function_312(StackVal, StackVal, StackVal, Function_274(iParam0 + 24));
	GET_POSITION(bVar6, &vVar0);
	Function_274(iParam0 + 24);
	vVar3 = { StackVal, StackVal, Function_274(iParam0 + 24) };
	if (iParam0->f_156 > 1.0f)
	{
		iParam0->f_156 = Function_242(StackVal, iParam0->f_72);
	}
	if (StackVal > Function_241(VDIST(vVar3, vVar0), Function_242(iParam0->f_156, iParam0->f_72)))
	{
		*iParam0 = 6;
		return 0;
	}
	if (Function_23())
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

float Function_241(bool bParam0, int iParam1) //Position: 0xAD64 / 44388
{
	if (bParam0 > iParam1)
	{
		return bParam0;
	}
	return iParam1;
}

int Function_242(int iParam0, int iParam1) //Position: 0xAD77 / 44407
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
			switch (iParam0)
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
			switch (iParam0)
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

bool Function_243(bool bParam0) //Position: 0xAE88 / 44680
{
	var uVar0;
	bool bVar3;
	
	if (DECOR_CHECK_EXIST(StackVal, "wasstickup"))
	{
		DECOR_REMOVE(StackVal, "wasstickup");
		return 1;
	}
	Function_274(bParam0 + 24);
	bVar3 = Function_312(StackVal, StackVal, StackVal, Function_274(bParam0 + 24));
	GET_POSITION(bVar3, &uVar0);
	*(bParam0 + 24) = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_244(StackVal, StackVal, StackVal, StackVal, StackVal, bParam0, *(bParam0 + 24), bParam0->f_152, 2,5f, 0) };
	if (Function_271(bParam0 + 24))
	{
		return 0;
	}
	return 1;
}

struct<24> Function_244(int iParam0, struct<6> Param1, bool bParam7, float fParam8, var uParam9) //Position: 0xAEFB / 44795
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
	
	Function_274(&Param1);
	vVar6 = { StackVal, StackVal, Function_274(&Param1) };
	bVar9 = false;
	uVar11 = Function_253(StackVal, iParam0->f_164);
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
	GET_OBJECT_POSITION(Function_257(StackVal), &uVar15);
	vVar18 = { 0.0f, 0.0f, -1.0f };
	if (!IS_OBJECTSET_VALID(iParam0->f_160))
	{
		iParam0->f_160 = CREATE_OBJECTSET_IN_LAYOUT(Function_37(), Global_28841, 36, 1);
	}
	bVar32 = 4294967295;
	while (!bVar10)
	{
		bVar31 = START_CURVE_QUERY(Global_28841, vVar6, uVar11, fVar12, fVar13, Function_241(Function_252(iParam0), ((fVar13 - fVar12) / 2.0f)), 0);
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
			Function_251(iParam0->f_160);
			ADD_OBJECT_TO_OBJECTSET(bParam7, iParam0->f_160);
			if (uParam9 || iVar14 > 5)
			{
				fVar12 = fVar13;
				fVar13 = (fVar13 + fParam8);
				iVar14++;
			}
			else
			{
				return StackVal, StackVal, StackVal, StackVal, StackVal, Function_250();
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
					Function_274(&Var25);
					Function_274(&Param1);
					vVar21 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_274(&Param1), Function_274(&Var25), StackVal) };
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
		else if (Function_513(StackVal, StackVal, vVar18))
		{
			bVar32 = ROUND((TO_FLOAT(RAND_INT_RANGE(false, (GET_NUM_CURVES_IN_CURVE_QUERY(bVar31) - 1000))) / 1000.0f));
		}
		else if (Global_3386)
		{
			Function_274(&Param1);
			vVar18 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_274(&Param1), Global_34574, StackVal) };
			VNORMALIZE(&vVar18);
			Var35 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_250() };
			Var41 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_250() };
			bVar9 = false;
			while (bVar9 <= GET_NUM_CURVES_IN_CURVE_QUERY(bVar31))
			{
				bVar47 = GET_CURVE_FROM_CURVE_INDEX_IN_CURVE_QUERY(bVar31, bVar9);
				GET_CURVE_POINT(bVar47, 1.0f, &Var35, 0);
				GET_CURVE_POINT(bVar47, 0.0f, &Var41, 0);
				Function_274(&Param1);
				Function_274(&Var35);
				Function_274(&Param1);
				Function_274(&Var41);
				if (StackVal > Function_61(StackVal, StackVal, StackVal, Function_61(StackVal, StackVal, StackVal, StackVal, Function_274(&Param1), Function_274(&Var35)), Function_274(&Param1), Function_274(&Var41)))
				{
					UNK_0x04D89A35(bVar47, 1.0f, 0.0f, -5.0f, &Var25);
				}
				else
				{
					UNK_0x04D89A35(bVar47, 0.0f, 0.0f, 5.0f, &Var25);
				}
				if (Global_30842[12])
				{
					Function_249(StackVal, StackVal, StackVal, StackVal, StackVal, Var25);
					PRINTNL();
				}
				Function_274(&Var25);
				Function_274(&Param1);
				vVar21 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_274(&Param1), Function_274(&Var25), StackVal) };
				VNORMALIZE(&vVar21);
				fVar24 = VDOT(&vVar21, &vVar18);
				fVar24 = (fVar24 * RAND_FLOAT_GAUSSIAN(0,5f, 0,5f));
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
			Var35 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_250() };
			Var41 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_250() };
			Function_274(&Param1);
			vVar18 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_274(&Param1), Global_34574, StackVal) };
			VNORMALIZE(&vVar18);
			bVar9 = false;
			while (bVar9 <= GET_NUM_CURVES_IN_CURVE_QUERY(bVar31))
			{
				bVar47 = GET_CURVE_FROM_CURVE_INDEX_IN_CURVE_QUERY(bVar31, bVar9);
				GET_CURVE_POINT(bVar47, 1.0f, &Var35, 0);
				GET_CURVE_POINT(bVar47, 0.0f, &Var41, 0);
				Function_274(&Param1);
				Function_274(&Var35);
				Function_274(&Param1);
				Function_274(&Var41);
				if (StackVal > Function_61(StackVal, StackVal, StackVal, Function_61(StackVal, StackVal, StackVal, StackVal, Function_274(&Param1), Function_274(&Var35)), Function_274(&Param1), Function_274(&Var41)))
				{
					UNK_0x04D89A35(bVar47, 1.0f, Var35.f_16, 5.0f, &Var25);
				}
				else
				{
					UNK_0x04D89A35(bVar47, 0.0f, Var41.f_16, 5.0f, &Var25);
				}
				Function_274(&Var25);
				Function_274(&Param1);
				vVar21 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_274(&Param1), Function_274(&Var25), StackVal) };
				VNORMALIZE(&vVar21);
				fVar24 = VDOT(&vVar21, &vVar18);
				fVar24 = (fVar24 * RAND_FLOAT_GAUSSIAN(0,25f, 1.0f));
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
				return StackVal, StackVal, StackVal, StackVal, StackVal, Function_250();
			}
		}
		bVar10 = true;
	}
	iParam0->f_152 = GET_CURVE_FROM_CURVE_INDEX_IN_CURVE_QUERY(bVar31, bVar32);
	iParam0->f_156 = CURVE_CALCULATE_DISTANCE_BY_FORCED_COMPONENT_SUBDIVISION_BOUNDS(iParam0->f_152, 0.0f, 1.0f, 10);
	GET_POINT_FROM_CURVE_QUERY(bVar31, bVar32, &Var0);
	Function_274(&Var0);
	vVar48 = { StackVal, StackVal, Function_274(&Var0) };
	GET_CURVE_POINT(iParam0->f_152, 1.0f, &Var51, 0);
	GET_CURVE_POINT(iParam0->f_152, 0.0f, &Var57, 0);
	if (StackVal < Function_248(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_248(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var51, Param1), Var57, Param1))
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
			Function_274(&Var25);
			vVar48 = { StackVal, StackVal, Function_274(&Var25) };
			bVar9++;
		}
		Function_274(&Var0);
		vVar48 = { StackVal, StackVal, Function_274(&Var0) };
	}
	Function_245(iParam0);
	UNK_0xDF93BD7C(bVar31);
	return StackVal, StackVal, StackVal, StackVal, StackVal, Var0;
}

void Function_245(int iParam0) //Position: 0xB3F1 / 46065
{
	if (!Function_247(iParam0))
	{
		return;
	}
	if (!Function_246(StackVal))
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

bool Function_246(int iParam0) //Position: 0xB495 / 46229
{
	if (iParam0 > 0 || iParam0 < 3)
	{
		return 0;
	}
	return 1;
}

bool Function_247(bool bParam0) //Position: 0xB4AA / 46250
{
	if (*bParam0 == 0)
	{
		return 0;
	}
	return 1;
}

float Function_248(bool bParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, bool bParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11) //Position: 0xB4BA / 46266
{
	vector3 vVar0;
	vector3 vVar3;
	
	Function_274(&bParam0);
	vVar0 = { StackVal, StackVal, Function_274(&bParam0) };
	Function_274(&bParam6);
	vVar3 = { StackVal, StackVal, Function_274(&bParam6) };
	return VDIST(vVar0, vVar3);
}

void Function_249(struct<17> Param0) //Position: 0xB4DF / 46303
{
	Function_274(&Param0);
	PRINTVECTOR(Function_274(&Param0));
	PRINTSTRING(": t=");
	PRINTFLOAT(Param0.f_12);
	PRINTSTRING(" slope=");
	PRINTFLOAT(Param0.f_16);
}

struct<24> Function_250() //Position: 0xB514 / 46356
{
	struct<6> Var0;
	
	Var0.f_20 = 4294967295;
	return StackVal, StackVal, StackVal, StackVal, StackVal, Var0;
}

void Function_251(bool bParam0) //Position: 0xB525 / 46373
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

int Function_252(int iParam0) //Position: 0xB565 / 46437
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
					return 2,5f;
					break;
				
				case 0x00000001:
					return 3,75f;
					break;
				
				case 0x00000002:
					return 6,25f;
					break;
				
				case 0x00000004:
					return 8,75f;
					break;
				
				case 0x00000003:
					return 12,5f;
					break;
			}
			break;
		
		default:
			LOG_ERROR("Unknown Traffic Type in NextTravelFreq");
			break;
	}
	return 6,25f;
}

int Function_253(int iParam0, int iParam1) //Position: 0xB61D / 46621
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

struct<24> Function_254(bool bParam0) //Position: 0xB64D / 46669
{
	vector3 vVar0;
	vector3 vVar3;
	
	vVar0 = { 0.0f, -50.0f, 0.0f };
	GET_OBJECT_RELATIVE_POSITION(GET_OBJECT_FROM_ACTOR(bParam0), vVar0, &vVar3);
	if (!Function_255(&vVar3, 50.0f, &vVar0, 10))
	{
		vVar0 = { StackVal, StackVal, vVar3 };
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, Function_256(StackVal, StackVal, vVar0);
}

bool Function_255(var uParam0, float fParam1, int iParam2, int iParam3) //Position: 0xB690 / 46736
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
		if (!Function_513(StackVal, StackVal, *iParam2))
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
			if (!Function_513(StackVal, StackVal, *iParam2))
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

struct<24> Function_256(vector3 vParam0) //Position: 0xB7C2 / 47042
{
	struct<6> Var0;
	
	Var0 = vParam0.x;
	Var0.f_4 = vParam0.y;
	Var0.f_8 = vParam0.z;
	return StackVal, StackVal, StackVal, StackVal, StackVal, Var0;
}

var Function_257(bool bParam0) //Position: 0xB7E2 / 47074
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

bool Function_258(bool bParam0, bool bParam1, bool bParam2) //Position: 0xB828 / 47144
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (!Function_247(bParam0))
	{
		Function_275(bParam0, 1);
		return 0;
	}
	if (DECOR_CHECK_EXIST(StackVal, "coachService"))
	{
		return 1;
	}
	AI_CLEAR_NAV_MATERIAL_USAGE(Function_257(StackVal));
	if (!SQUAD_GOAL_IS_VALID(bParam0->f_12))
	{
		SQUAD_GOALS_CLEAR(StackVal);
	}
	Function_274(bParam0 + 24);
	vVar3 = { StackVal, StackVal, Function_274(bParam0 + 24) };
	vVar0 = { StackVal, StackVal, vVar3 };
	Function_262(StackVal, StackVal, vVar0, bParam0 + 24);
	if (bParam1)
	{
		bParam0->f_76 = Function_261(StackVal, bParam0->f_76, bParam0->f_80);
		if (!bParam0->f_96 || bParam0->f_72 != 4294967295)
		{
			bParam0->f_72 = bParam0->f_76;
		}
	}
	if (bParam2)
	{
		AI_SET_NAV_MATERIAL_USAGE(StackVal, Function_260(Function_257(StackVal)), 0);
	}
	Function_259(bParam0);
	return 1;
}

void Function_259(int iParam0) //Position: 0xB8E0 / 47328
{
	int iVar0;
	int iVar1;
	
	if (!SQUAD_IS_VALID(StackVal))
	{
		return;
	}
	iVar1 = 2;
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

int Function_260(int iParam0) //Position: 0xBA77 / 47735
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

int Function_261(int iParam0, int iParam1, int iParam2) //Position: 0xBA9E / 47774
{
	bool bVar0;
	
	if (iParam2 != 0)
	{
		return iParam2;
	}
	bVar0 = RAND_INT_RANGE(true, 10000);
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

void Function_262(vector3 vParam0) //Position: 0xBB41 / 47937
{
	*uParam3 = vParam0.x;
	uParam3->f_4 = vParam0.y;
	uParam3->f_8 = vParam0.z;
}

void Function_263(bool bParam0, int iParam1) //Position: 0xBB5E / 47966
{
	Function_270(StackVal);
	if (Global_28842.f_80 != 0)
	{
		bParam0->f_72 = Global_28842.f_80;
		Function_269(StackVal, bParam0->f_72);
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
		Function_269(StackVal, bParam0->f_72);
		if (StackVal == 2)
		{
			Function_268(StackVal, 1);
		}
	}
	else if (StackVal || Function_237((Global_3404 || Function_266(131072))))
	{
		bParam0->f_72 = 4;
		Function_269(StackVal, bParam0->f_72);
		if (StackVal == 2)
		{
			Function_268(StackVal, 1);
		}
	}
	else if (bParam0->f_92)
	{
		bParam0->f_72 = Function_265(StackVal, bParam0->f_80);
		Function_269(StackVal, bParam0->f_72);
	}
	else if (bParam0->f_96)
	{
		bParam0->f_72 = Function_264(StackVal, bParam0->f_80);
		Function_269(StackVal, bParam0->f_72);
		if (StackVal == 2)
		{
			Function_268(StackVal, 0);
		}
	}
	else
	{
		bParam0->f_72 = bParam0->f_76;
		if (StackVal == 2)
		{
			Function_268(StackVal, 1);
		}
	}
	return;
}

int Function_264(bool bParam0, int iParam1) //Position: 0xBC70 / 48240
{
	bool bVar0;
	
	if (iParam1 != 0)
	{
		return iParam1;
	}
	bVar0 = RAND_INT_RANGE(true, 10000);
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

int Function_265(int iParam0, bool bParam1) //Position: 0xBCDD / 48349
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

int Function_266(int iParam0) //Position: 0xBD40 / 48448
{
	return Function_267(&Global_28842, iParam0);
}

int Function_267(var uParam0, int iParam1) //Position: 0xBD4E / 48462
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_268(bool bParam0, int iParam1) //Position: 0xBD6A / 48490
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

void Function_269(bool bParam0, bool bParam1) //Position: 0xBD92 / 48530
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		TASK_OVERRIDE_SET_MOVETYPE(SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0), bParam1);
		bVar0++;
	}
	return;
}

void Function_270(bool bParam0) //Position: 0xBDBA / 48570
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

bool Function_271(bool bParam0) //Position: 0xBDE0 / 48608
{
	return ((((StackVal && (StackVal && *bParam0 != 0.0f != 0.0f) != 0.0f) && bParam0->f_12 != 0.0f) && bParam0->f_16 != 0.0f) && bParam0->f_20 != 4294967295);
}

struct<24> Function_272(int iParam0, struct<6> Param1, bool bParam7, vector3 vParam8) //Position: 0xBE0E / 48654
{
	bool bVar0;
	bool bVar6;
	struct<6> Var12;
	
	if (!IS_OBJECT_VALID(bParam7))
	{
		return StackVal, StackVal, StackVal, StackVal, StackVal, Var12;
	}
	iParam0->f_148 = Function_273(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, bParam7, Param1, vParam8);
	if (iParam0->f_148 >= 0)
	{
		GET_CURVE_POINT(bParam7, 1.0f, &Var12, 0);
		UNK_0x19D652F9(bParam7, 1.0f, &Param1, &bVar0);
		Function_274(&bVar0);
		Function_274(&Param1);
		*(iParam0 + 168) = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_274(&Param1), Function_274(&bVar0), StackVal) };
		*(iParam0 + 168) = { 0.0f, UNK_0x9C40E671(iParam0 + 168), 0.0f };
	}
	else
	{
		GET_CURVE_POINT(bParam7, 0.0f, &Var12, 0);
		UNK_0x19D652F9(bParam7, -1.0f, &Param1, &bVar6);
		Function_274(&bVar6);
		Function_274(&Param1);
		*(iParam0 + 168) = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_274(&Param1), Function_274(&bVar6), StackVal) };
		*(iParam0 + 168) = { 0.0f, UNK_0x9C40E671(iParam0 + 168), 0.0f };
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, Var12;
}

int Function_273(bool bParam0, bool bParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9) //Position: 0xBEAC / 48812
{
	bool bVar0;
	bool bVar6;
	vector3 vVar12;
	vector3 vVar15;
	float fVar18;
	float fVar19;
	
	UNK_0x19D652F9(bParam0, 1.0f, &bParam1, &bVar0);
	UNK_0x19D652F9(bParam0, -1.0f, &bParam1, &bVar6);
	Function_274(&bVar0);
	Function_274(&bParam1);
	vVar12 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_274(&bParam1), Function_274(&bVar0), StackVal) };
	fVar18 = VDOT(&uParam7, &vVar12);
	Function_274(&bVar6);
	Function_274(&bParam1);
	vVar15 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_274(&bParam1), Function_274(&bVar6), StackVal) };
	fVar19 = VDOT(&uParam7, &vVar15);
	if (fVar19 > fVar18)
	{
		return 1;
	}
	return 4294967295;
}

vector3 Function_274(bool bParam0) //Position: 0xBF05 / 48901
{
	vector3 vVar0;
	
	vVar0.x = *bParam0;
	vVar0.f_4 = StackVal;
	vVar0.f_8 = StackVal;
	return StackVal, StackVal, vVar0;
}

void Function_275(bool bParam0, int iParam1) //Position: 0xBF24 / 48932
{
	struct<5> Var0;
	char* cVar6[16];
	struct<13> Var10;
	
	if (!Global_30900[1] && iParam1)
	{
		return;
	}
	if (!Function_247(bParam0))
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
			Var10 = 0,9f;
			Var10.f_4 = 0,55f;
			Var10.f_8 = 0,1f;
			Var10.f_12 = 1.0f;
			break;
		
		case 0x00000002:
			Var10 = 0,9f;
			Var10.f_4 = 0,9f;
			Var10.f_8 = 0,1f;
			Var10.f_12 = 1.0f;
			break;
		
		case 0x00000004:
			Var10 = 0,2f;
			Var10.f_4 = 0,8f;
			Var10.f_8 = 0,1f;
			Var10.f_12 = 1.0f;
			break;
		
		case 0x00000003:
			Var10 = 0,1f;
			Var10.f_4 = 0,1f;
			Var10.f_8 = 1.0f;
			Var10.f_12 = 1.0f;
			break;
	}
	GET_POSITION(Function_257(StackVal), &Var0);
	vVar14 = { 0.0f, 1.0f, 0.0f };
	if (Function_23())
	{
		fVar17 = 0.0f;
		if (!Function_276(bParam0, &fVar17, 0))
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
	Var0.f_4 = (StackVal + 2,5f);
	Var0.f_4 = (StackVal + 1.0f);
	Var0.f_4 = (StackVal + 0,5f);
	switch (StackVal)
	{
		case 0x00000001:
			break;
		
		case 0x00000002:
			break;
	}
	Function_274(bParam0 + 24);
	vVar3 = { StackVal, StackVal, Function_274(bParam0 + 24) };
	return;
}

bool Function_276(bool bParam0, var uParam1, bool bParam2) //Position: 0xC09E / 49310
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (StackVal || !SQUAD_IS_VALID(!Function_247(bParam0)))
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
		*uParam1 = 0,5f;
	}
	else
	{
		*uParam1 = 0.0f;
	}
	return bVar2;
}

int Function_277(bool bParam0) //Position: 0xC184 / 49540
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

var Function_278(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0xC1D4 / 49620
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
			fVar3 = Function_196(bVar4, bParam1);
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

void Function_279(bool bParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0xC28E / 49806
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
				SET_ACTOR_STAY_WITHIN_VOLUME(bVar1, bParam1, iParam2, bParam3);
			}
			bVar0++;
		}
	}
}

void Function_280(bool bParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0xC2DD / 49885
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

void Function_281(bool bParam0) //Position: 0xC35F / 50015
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

struct<32> Function_282(bool bParam0) //Position: 0xC3A5 / 50085
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_283("0", &cVar8, ""), 4);
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

struct<32> Function_283(char* cParam0, char* cParam1, char* cParam2) //Position: 0xC40F / 50191
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	stradd(&cVar0, cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_284(bool bParam0, bool bParam1) //Position: 0xC42E / 50222
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "matkdef_state", bParam1);
	return;
}

var Function_285(bool bParam0) //Position: 0xC44F / 50255
{
	return DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "matkdef_state");
}

int Function_286(bool bParam0) //Position: 0xC46D / 50285
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

bool Function_287(bool bParam0) //Position: 0xC4B0 / 50352
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

void Function_288(int iParam0) //Position: 0xC4CF / 50383
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

void Function_289(bool bParam0) //Position: 0xC52C / 50476
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	float fVar5;
	int iVar6;
	bool bVar7;
	
	bVar0 = Function_294(bParam0 + 1256);
	fVar5 = 7.0f;
	iVar6 = 0;
	Function_197(bParam0->f_972);
	vVar2 = { StackVal, StackVal, Function_197(bParam0->f_972) };
	if (VDIST(Global_34574, vVar2) > 15.0f)
	{
		bParam0->f_1552 = 1;
	}
	else
	{
		bParam0->f_1552 = 0;
	}
	if (Function_293(bParam0))
	{
		bParam0->f_1556 = 1;
	}
	else
	{
		bParam0->f_1556 = 0;
	}
	if (Function_233(bParam0) == 0)
	{
		if (Function_226(bParam0 + 1540, fVar5))
		{
			if (bParam0->f_1552 == 1)
			{
				bVar7 = false;
				while (bVar7 < (SQUAD_GET_SIZE(bParam0->f_1212) - 1))
				{
					if (iVar6 == 0)
					{
						bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam0->f_1212, bVar7);
						if (Function_290(bParam0, bVar1))
						{
							SAY_SINGLE_LINE_CONTEXT(bVar1, 301, Function_33(), 1, 0, 2, 4294967295, 4294967295, 0, 1);
							Function_202(bParam0 + 1540);
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
						if (Function_290(bParam0, bVar1))
						{
							SAY_SINGLE_LINE_CONTEXT(bVar1, 296, Function_33(), 1, 0, 2, 4294967295, 4294967295, 0, 1);
							Function_202(bParam0 + 1540);
							iVar6 = 1;
						}
					}
					bVar7++;
				}
			}
			else
			{
				Function_202(bParam0 + 1540);
			}
		}
	}
	return;
}

bool Function_290(bool bParam0, bool bParam1) //Position: 0xC661 / 50785
{
	bool bVar0;
	int iVar1;
	
	bVar0 = Function_294(bParam0 + 1256);
	iVar1 = Function_292(GET_OBJECT_FROM_ACTOR(bParam1));
	if (Function_291(bParam1, bParam0->f_1212, 1))
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
	else if (Function_291(bParam1, bVar0, 1))
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

bool Function_291(bool bParam0, bool bParam1, bool bParam2) //Position: 0xC73A / 51002
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

var Function_292(bool bParam0) //Position: 0xC77A / 51066
{
	if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(bParam0)))
	{
		return GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bParam0));
	}
	return 4294967295;
}

bool Function_293(int iParam0) //Position: 0xC795 / 51093
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

var Function_294(int iParam0) //Position: 0xC7F7 / 51191
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
	Function_295(&bVar0);
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

int Function_295(bool bParam0) //Position: 0xC863 / 51299
{
	if (IS_ITERATOR_VALID(*bParam0))
	{
		ITERATE_EVERYWHERE(*bParam0);
		ITERATE_ON_PARTIAL_NAME(*bParam0, Function_37());
		ITERATE_ON_PARTIAL_MODEL_NAME(*bParam0, Function_37());
		ITERATE_ON_OBJECT_TYPE(*bParam0, 4294967295);
		return 1;
	}
	return 0;
}

int Function_296(int iParam0, bool bParam1, int iParam2) //Position: 0xC894 / 51348
{
	int iVar16;
	int iVar17;
	int iVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
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
	if (Function_80(iParam0->f_584, 32))
	{
		if (!Function_74(iParam0->f_624))
		{
			return 0;
		}
	}
	bVar20 = MAKE_TIME_OF_DAY_EX(false, true, 0, 0);
	bVar21 = Function_299(Function_14(iParam0->f_624), Function_64(iParam0->f_624));
	iVar22 = Function_297(Function_14(iParam0->f_624), Function_64(iParam0->f_624));
	if (iVar22 == 0)
	{
		bVar19 = true;
	}
	else if (IS_LATER_THAN(bVar21, bVar20))
	{
		ADD_TIME(&bVar21, 5, 0, false, 0);
		if (IS_EARLIER_THAN(bVar21, GET_TIME_OF_DAY()))
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

int Function_297(int iParam0, int iParam1) //Position: 0xC9F3 / 51699
{
	int iVar0;
	int iVar1;
	
	if (!Function_298(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 <= Global_13172)
	{
		if (Function_14(iVar1) != iParam0 && Function_64(iVar1) != iParam1)
		{
			iVar0 = (iVar0 + Global_13172[iVar111].f_12);
		}
		iVar1++;
	}
	return iVar0;
}

bool Function_298(int iParam0) //Position: 0xCA3F / 51775
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_299(int iParam0, int iParam1) //Position: 0xCA54 / 51796
{
	bool bVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 <= Global_13172)
	{
		if (Function_14(iVar1) != iParam0 && Function_64(iVar1) != iParam1)
		{
			if (IS_LATER_THAN(Global_13172[iVar111].f_36, bVar0))
			{
				bVar0 = Global_13172[iVar111].f_36;
			}
		}
		iVar1++;
	}
	return bVar0;
}

void Function_300(int iParam0, vector3 vParam1) //Position: 0xCAA0 / 51872
{
	*(iParam0 + 16) = { StackVal, StackVal, vParam1 };
}

bool Function_301(bool bParam0, vector3 vParam1, bool bParam4) //Position: 0xCAB2 / 51890
{
	bool bVar0;
	bool bVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	int iVar5;
	
	bVar1 = 4294967295;
	fVar2 = -1.0f;
	if (!SQUAD_IS_VALID(bParam0))
	{
		return "";
	}
	iVar5 = SQUAD_GET_NOT_ELIMINATED_IMPAIRMENT_MASK(bParam0);
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar4 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (bParam4)
		{
			if (AI_IMPAIRMENT_MASK_MATCHES(iVar5, AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(bVar4)))
			{
				bVar4 = "";
			}
		}
		if (IS_ACTOR_VALID(bVar4) && IS_ACTOR_ALIVE(bVar4))
		{
			fVar3 = Function_302(StackVal, StackVal, bVar4, vParam1);
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

float Function_302(bool bParam0, vector3 vParam1) //Position: 0xCB4A / 52042
{
	vector3 vVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_303(bParam0);
		vVar0 = { StackVal, StackVal, Function_303(bParam0) };
		return VDIST(vVar0, vParam1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

vector3 Function_303(bool bParam0) //Position: 0xCBC4 / 52164
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

void Function_304(bool bParam0, vector3 vParam1) //Position: 0xCC2E / 52270
{
	*(bParam0 + 4) = { StackVal, StackVal, vParam1 };
}

void Function_305(int iParam0) //Position: 0xCC40 / 52288
{
	if (IS_BLIP_VALID(iParam0->f_36))
	{
		REMOVE_BLIP(iParam0->f_36);
	}
	iParam0->f_40 = 4294967295;
	return;
}

void Function_306(int iParam0) //Position: 0xCC5C / 52316
{
	if (Function_80(iParam0->f_584, 4))
	{
		Function_309();
	}
	if (IS_BLIP_VALID(iParam0->f_36))
	{
		REMOVE_BLIP(iParam0->f_36);
	}
	Function_308(1);
	if (Function_80(iParam0->f_584, 32))
	{
		if (Function_13(iParam0->f_624))
		{
			Function_307(iParam0->f_624, 1);
		}
	}
	if (SQUAD_IS_VALID(iParam0->f_568))
	{
		Function_3(iParam0, 0);
	}
	Function_58(iParam0 + 584, 16);
	Global_3382 = 1;
	if (Function_80(iParam0->f_584, 64))
	{
		Global_13111 = 4294967295;
	}
	Function_135(iParam0, 1);
	return;
}

void Function_307(int iParam0, int iParam1) //Position: 0xCCDD / 52445
{
	int iVar0;
	
	if (!Function_74(iParam0))
	{
		Function_15();
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
	iVar0 = Function_14(iParam0);
	Global_13172[iParam011].f_4 = 2;
	if (!Global_34165.f_36 && iParam1)
	{
		Function_24(1);
	}
	if (iVar0 == 1)
	{
		Global_6269 = Function_12(iParam0);
	}
	Global_3376 = 1;
	return;
}

void Function_308(int iParam0) //Position: 0xCD44 / 52548
{
	if (!Global_8717[iParam0])
	{
		Global_8717[iParam0] = 1;
		if (iParam0 == 1)
		{
			Global_8721 = GET_THIS_SCRIPT_ID();
		}
	}
	if (Function_77())
	{
		SET_HUD_MAP_DRAW_ENABLED_TIMED(0, 10.0f, 1);
	}
	return;
}

void Function_309() //Position: 0xCD79 / 52601
{
	if (Global_30921 == "")
	{
		Global_30921 = GET_THIS_SCRIPT_ID();
	}
	return;
}

void Function_310(int iParam0) //Position: 0xCD8D / 52621
{
	Function_311(&Global_28842, iParam0);
	return;
}

void Function_311(var uParam0, int iParam1) //Position: 0xCD9B / 52635
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	*uParam0 |= 1073741824;
	return;
}

var Function_312(vector3 vParam0, bool bParam3) //Position: 0xCDBE / 52670
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;
	
	bVar0 = false;
	bVar1 = 4294967295;
	bVar2 = -1.0f;
	if (Function_513(StackVal, StackVal, vParam0))
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

bool Function_313(int iParam0) //Position: 0xCF3F / 53055
{
	if (iParam0->f_920 == 0)
	{
		if (Function_315((iParam0 + 1256)->f_60, Global_34573, 1) && SQUAD_IS_VALID((iParam0 + 1256)->f_60))
		{
			Function_130(iParam0, 1);
			Function_129(iParam0, GET_ACTOR_ENUM_FACTION((*iParam0 + 1480)[0]));
			iParam0->f_920 = 1;
		}
		else if ((Function_315(iParam0->f_1212, Global_34573, 0) || Function_132(iParam0, Global_34573)) || iParam0->f_972 != GET_VEHICLE(Global_34573))
		{
			Function_130(iParam0, 2);
			Function_129(iParam0, GET_ACTOR_FACTION(Function_314(iParam0->f_1212)));
			iParam0->f_920 = 1;
		}
		if (iParam0->f_920)
		{
			SET_NPC_TO_NPC_DAMAGE_SCALE_FACTOR(0,05f);
		}
	}
	return iParam0->f_920;
}

var Function_314(bool bParam0) //Position: 0xCFDF / 53215
{
	if (SQUAD_GET_SIZE(bParam0) >= 0)
	{
		return SQUAD_GET_ACTOR_BY_INDEX(bParam0, RAND_INT_RANGE(false, (SQUAD_GET_SIZE(bParam0) - 1)));
	}
	return "";
}

int Function_315(bool bParam0, bool bParam1, int iParam2) //Position: 0xD001 / 53249
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

float Function_316(bool bParam0, bool bParam1) //Position: 0xD073 / 53363
{
	vector3 vVar0;
	
	GET_ACTOR_VELOCITY(bParam0, &vVar0);
	if (bParam1)
	{
		vVar0.f_4 = 0.0f;
	}
	return VMAG(vVar0);
}

void Function_317(int iParam0) //Position: 0xD092 / 53394
{
	Function_318(iParam0);
	return;
}

void Function_318(int iParam0) //Position: 0xD09D / 53405
{
	if (IS_ACTORSET_VALID(iParam0->f_52))
	{
		DISBAND_ACTORSET(iParam0->f_52);
	}
	return;
}

bool Function_319(bool bParam0, bool bParam1, bool bParam2) //Position: 0xD0B5 / 53429
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

bool Function_320(bool bParam0, int iParam1, bool bParam2, int iParam3) //Position: 0xD1C6 / 53702
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

bool Function_321(bool bParam0) //Position: 0xD27F / 53887
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

int Function_322(bool bParam0) //Position: 0xD2D6 / 53974
{
	return Function_96(bParam0);
}

int Function_323(int iParam0) //Position: 0xD2E1 / 53985
{
	iParam0->f_616 = Function_325(iParam0);
	Function_324(iParam0);
	return iParam0->f_616;
}

void Function_324(int iParam0) //Position: 0xD2FB / 54011
{
	if (GET_DEBUG_DRAW_STATE())
	{
	}
	return;
}

var Function_325(int iParam0) //Position: 0xD307 / 54023
{
	int iVar0;
	var uVar1[3];
	char* cVar5[64];
	int iVar21;
	
	iVar0 = 0;
	if (Function_340(0))
	{
		uVar1[0] = "Pass";
		uVar1[1] = "Fail";
		uVar1[2] = "Cancel";
		strcpy(&cVar5, "RDR PROCMISSION MENU - ", 64);
		stradd(&cVar5, GET_SHORT_SCRIPT_NAME(), 64);
		iVar21 = Function_326(iParam0 + 588, &uVar1, &cVar5, GET_DEBUG_PADINDEX(), 0);
		if (iVar21 == 0)
		{
			Function_112();
			iVar0 = 2;
		}
		else if (iVar21 == 1)
		{
			Function_112();
			iVar0 = 3;
		}
		else if (iVar21 == 2)
		{
			Function_112();
			iVar0 = 4;
		}
		else
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

var Function_326(var uParam0, var uParam1, char* cParam2, var uParam3, int iParam4) //Position: 0xD3AB / 54187
{
	struct<33> Var0;
	
	if ((Global_62478 || Global_62479) || Global_62480)
	{
		return 4294967295;
	}
	SET_SCRIPT_AVOIDS_STRINGTABLE(1);
	uParam0->f_12 = uParam3;
	uParam0->f_16 = iParam4;
	Function_339(&Var15, &Var0);
	uVar20 = Function_338(*uParam1, &Var15);
	Function_337(cParam2, 1.0f, 1.0f, 1.0f, 1.0f);
	Function_336(uParam0, uVar20);
	Function_334(StackVal, uParam0, Var15.f_12);
	Function_332(StackVal, uParam0, Var15.f_12);
	iVar21 = Function_331(*uParam1, uParam0, &Var15);
	while (!Var15.f_16 && iVar21 > *uParam1)
	{
		strcpy(&Var0, (*uParam1)[iVar21], 32);
		if (Function_328(&Var15, &Var0, uParam0, 9, 6, 28, 4294967295))
		{
			SET_SCRIPT_AVOIDS_STRINGTABLE(0);
			GRINGO_DEBUG_CHECK_SOUND(1);
			return iVar21;
		}
		iVar21++;
	}
	Function_327(StackVal, Var0.f_32, Var15.f_12);
	SET_SCRIPT_AVOIDS_STRINGTABLE(0);
	return 4294967295;
}

void Function_327(int iParam0, int iParam1, int iParam2) //Position: 0xD472 / 54386
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

bool Function_328(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, int iParam5, int iParam6) //Position: 0xD4CE / 54478
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
				Function_330(bParam1->f_32, bParam1->f_36, bParam1->f_40, &cVar0, bParam1->f_44, bParam1->f_48, bParam1->f_52, 1.0f, bParam1->f_56, 1);
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
			Function_330(bParam1->f_32, bParam1->f_36, bParam1->f_40, bParam1, bParam1->f_44, bParam1->f_48, bParam1->f_52, 1.0f, bParam1->f_56, 1);
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
				Function_327(StackVal, bParam1->f_32, uParam0->f_12);
				return 0;
			}
		}
		Function_329(bParam1->f_32);
	}
	else
	{
		Function_329(bParam1->f_32);
	}
	return 0;
}

void Function_329(bool bParam0) //Position: 0xD654 / 54868
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

void Function_330(bool bParam0, var uParam1, var uParam2, char* cParam3, var uParam4, var uParam5, var uParam6, float fParam7, float fParam8, bool bParam9) //Position: 0xD68E / 54926
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

var Function_331(int iParam0, var uParam1, int iParam2) //Position: 0xD73C / 55100
{
	int iVar0;
	
	iVar0 = (StackVal * (uParam1->f_20 * iParam2->f_12) + 1);
	if (iVar0 >= iParam0)
	{
		iVar0 = 0;
	}
	return iVar0;
}

void Function_332(var uParam0, int iParam1, int iParam2) //Position: 0xD760 / 55136
{
	switch (Function_333())
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

int Function_333() //Position: 0xD7FC / 55292
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

void Function_334(var uParam0, int iParam1, int iParam2) //Position: 0xD838 / 55352
{
	switch (Function_335(uParam0))
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

int Function_335(int iParam0) //Position: 0xD8D0 / 55504
{
	float fVar0;
	float fVar1;
	
	fVar0 = (GET_STICK_Y(GET_PLAYER_PADINDEX(Function_33()), 0, 1) + GET_STICK_Y(GET_DEBUG_PADINDEX(), 0, 1));
	if ((fVar0 >= -0,75f || IS_BUTTON_PRESSED(iParam0->f_12, 12, 1, 0)) || IS_BUTTON_PRESSED(iParam0->f_16, 12, 1, 0))
	{
		if (!Function_80(*iParam0, 0x40000000))
		{
			Function_58(iParam0, 0x40000000);
			return 1;
		}
	}
	if ((fVar0 <= 0,75f || IS_BUTTON_PRESSED(iParam0->f_12, 14, 1, 0)) || IS_BUTTON_PRESSED(iParam0->f_16, 14, 1, 0))
	{
		if (!Function_80(*iParam0, 0x40000000))
		{
			Function_58(iParam0, 0x40000000);
			return 2;
		}
	}
	Function_25(iParam0, 0x40000000);
	fVar1 = (GET_STICK_X(GET_PLAYER_PADINDEX(Function_33()), 0, 1) + GET_STICK_X(GET_DEBUG_PADINDEX(), 0, 1));
	if ((fVar1 >= -0,75f || IS_BUTTON_PRESSED(iParam0->f_12, 15, 1, 0)) || IS_BUTTON_PRESSED(iParam0->f_16, 15, 1, 0))
	{
		if (!Function_80(*iParam0, 0x20000000))
		{
			Function_58(iParam0, 0x20000000);
			return 3;
		}
	}
	if ((fVar1 <= 0,75f || IS_BUTTON_PRESSED(iParam0->f_12, 13, 1, 0)) || IS_BUTTON_PRESSED(iParam0->f_16, 13, 1, 0))
	{
		if (!Function_80(*iParam0, 0x20000000))
		{
			Function_58(iParam0, 0x20000000);
			return 4;
		}
	}
	Function_25(iParam0, 0x20000000);
	return 0;
}

var Function_336(var uParam0, int iParam1) //Position: 0xDA1B / 55835
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

void Function_337(bool bParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xDB6A / 56170
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

var Function_338(int iParam0, int iParam1) //Position: 0xDBFD / 56317
{
	int iVar0;
	int iVar1;
	
	iVar0 = (StackVal / iParam0);
	iVar1 = (iVar0 / iParam1->f_12);
	return iVar1;
}

void Function_339(var uParam0, int iParam1) //Position: 0xDC17 / 56343
{
	iParam1->f_36 = 100.0f;
	iParam1->f_40 = 110.0f;
	iParam1->f_44 = 1.0f;
	iParam1->f_48 = 1.0f;
	iParam1->f_52 = 1.0f;
	iParam1->f_56 = 1,6f;
	iParam1->f_32 = 0;
	uParam0->f_16 = 0;
	uParam0->f_4 = 10;
	uParam0->f_12 = 3;
	*uParam0 = 0;
	uParam0->f_8 = 0;
	return;
}

bool Function_340(int iParam0) //Position: 0xDC65 / 56421
{
	if (!Function_341(iParam0))
	{
		return 0;
	}
	return Global_30920;
}

bool Function_341(bool bParam0) //Position: 0xDC79 / 56441
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

void Function_342(vector3 vParam0, var uParam3, int iParam4, bool bParam5, int iParam6, int iParam7, bool bParam8) //Position: 0xDC9D / 56477
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
	else if (!Function_513(StackVal, StackVal, vParam0))
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
			Function_353(0);
		}
		if (StackVal & 2048 == 2048)
		{
			Function_352(0);
		}
		if (bParam8)
		{
			Function_350(0, GET_THIS_SCRIPT_ID());
			Global_3373 = GET_THIS_SCRIPT_ID();
			Function_348(iParam4);
			Global_3401 = 1;
		}
		Function_346(iParam4);
		if (Function_345(StackVal, 32768))
		{
			Function_343(1);
		}
		Global_16876[iParam46].f_12++;
		Function_67(408, 1, 0, 0);
	}
}

void Function_343(bool bParam0) //Position: 0xDDA4 / 56740
{
	if (bParam0)
	{
		Function_344(0x10000000);
	}
	else
	{
		Function_79(0x10000000);
	}
	Global_26316.f_172 = 0;
	return;
}

void Function_344(int iParam0) //Position: 0xDDC8 / 56776
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

bool Function_345(var uParam0, int iParam1) //Position: 0xDDDB / 56795
{
	return (uParam0 && iParam1) == 0;
}

void Function_346(int iParam0) //Position: 0xDDE8 / 56808
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	if (!Function_80(StackVal, 524288))
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
			bVar1 = Function_347(iVar0 * 60);
			ADD_TIME(&Global_17483[iParam075] + 264, 0, 0, bVar1, 0);
			Global_16876[iParam06] = Global_17483[iParam075].f_264;
		}
	}
	return;
}

int Function_347(int iParam0) //Position: 0xDE8C / 56972
{
	return CEIL(((IntToFloat(iParam0) * Global_63398) / 60.0f));
}

void Function_348(int iParam0) //Position: 0xDEA2 / 56994
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
	Function_349(&Var0 + 80[Var0.f_763], &(Global_16876[iParam06]), iParam0);
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

void Function_349(var uParam0, var uParam1, int iParam2) //Position: 0xDF40 / 57152
{
	uParam0->f_4 = iParam2;
	*uParam0 = uParam1->f_12;
	uParam0->f_8 = 1;
	return;
}

void Function_350(int iParam0, int iParam1) //Position: 0xDF58 / 57176
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
			Function_351(&(Global_25267[iVar058]));
		}
		iVar0++;
	}
	return;
}

void Function_351(int iParam0) //Position: 0xDFDA / 57306
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

void Function_352(int iParam0) //Position: 0xE028 / 57384
{
	Global_12976.f_76 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 76, 0, 0, (iParam0 + Function_347(900)), 0);
	return;
}

void Function_353(int iParam0) //Position: 0xE04A / 57418
{
	Global_12976.f_20 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 20, 0, 0, (iParam0 + Function_347(200)), 0);
	return;
}

vector3 Function_354() //Position: 0xE06B / 57451
{
	return 0.0f, 0.0f, 0.0f;
}

int Function_355(int iParam0) //Position: 0xE074 / 57460
{
	if (iParam0->f_900 == 0)
	{
		LOG_ERROR("Cannot launch matkdef without MATKDEF_INIT_MATKDEF being called");
	}
	if (!SQUAD_IS_VALID((iParam0 + 1256)->f_60))
	{
		(iParam0 + 1256)->f_60 = Function_359(iParam0->f_832, "DECOR_ATTACKSQUAD");
		Function_358((iParam0 + 1256)->f_60, 39, 0.0f);
	}
	Function_357(iParam0, 1);
	Function_356(iParam0, 1);
	Function_310(4);
	Function_202(iParam0 + 1540);
	iParam0->f_904 = 1;
	return 1;
}

void Function_356(int iParam0, int iParam1) //Position: 0xE125 / 57637
{
	if (iParam1 == 1)
	{
		Function_58(iParam0 + 584, 64);
	}
	else
	{
		Function_25(iParam0 + 584, 64);
	}
	return;
}

void Function_357(int iParam0, int iParam1) //Position: 0xE148 / 57672
{
	if (iParam1 == 1)
	{
		Function_58(iParam0 + 584, 4096);
	}
	else
	{
		Function_25(iParam0 + 584, 4096);
	}
	return;
}

void Function_358(bool bParam0, bool bParam1, bool bParam2) //Position: 0xE16D / 57709
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

var Function_359(bool bParam0, bool bParam1) //Position: 0xE1B9 / 57785
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
	Function_295(&bVar0);
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

float Function_360(bool bParam0) //Position: 0xE230 / 57904
{
	var uVar0;
	float fVar1;
	
	if (!bParam0)
	{
		Function_361(&uVar0, &fVar1);
		if (fVar1 < 60.0f)
		{
			return (fVar1 + 20.0f);
		}
		return (fVar1 + 10.0f);
	}
	return (190.0f + 20.0f);
}

void Function_361(float fParam0, int iParam1) //Position: 0xE26B / 57963
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

int Function_362(bool bParam0, int iParam1) //Position: 0xE2F4 / 58100
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
				Function_202(bParam0 + 856);
				Function_202(bParam0 + 868);
				Function_202(bParam0 + 1540);
				break;
			
			case 0x00000002:
				Function_202(bParam0 + 868);
				if (Function_231(bParam0) == 1)
				{
					Function_232(bParam0, 1);
					Function_230(bParam0, "pm_mad_killb", 1);
				}
				else
				{
					Function_232(bParam0, 1);
					Function_230(bParam0, "pm_mad_killt", 1);
				}
				Function_366(bParam0);
				break;
			
			case 0x00000003:
				Function_365(7.0f, 10);
				Var0 = { StackVal, Function_365(7.0f, 10) };
				bVar6 = false;
				while (bVar6 < (SQUAD_GET_SIZE((bParam0 + 1256)->f_60) - 1))
				{
					bVar5 = SQUAD_GET_ACTOR_BY_INDEX((bParam0 + 1256)->f_60, bVar6);
					if (IS_ACTOR_ALIVE(bVar5))
					{
						Function_363(&Var0, bVar6 + 2);
						vVar2 = { StackVal, StackVal, Function_363(&Var0, bVar6 + 2) };
						TASK_FOLLOW_AND_ATTACK_OBJECT(bVar5, GET_OBJECT_FROM_ACTOR(bParam0->f_972), &vVar2, 0, 0, 0, 0, 0, 1);
					}
					bVar6++;
				}
				Function_366(bParam0);
				break;
			
			case 0x00000004:
				Function_202(bParam0 + 980);
				break;
			
			case 0x00000005:
				Function_232(bParam0, 1);
				Function_230(&Local_23, "pm_mad_end", 1);
				Function_208(&Local_23, 0, 0);
				break;
			
			case 0x00000007:
				Function_232(bParam0, 1);
				if (Function_231(bParam0) == 1)
				{
					Function_230(bParam0, "pm_mad_esc1", 1);
				}
				else
				{
					Function_230(bParam0, "pm_mad_esc2", 1);
				}
				iLocal_413 = 3;
				break;
			
			case 0x00000006:
				Function_94(bParam0, 0);
				if (bParam0->f_632 >= 3)
				{
					Function_232(bParam0, 1);
					Function_230(bParam0, "pm_mad_vd2", 1);
					Function_208(&Local_23, 0, 0);
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
	Function_496(bParam0, 0);
	return 1;
}

vector3 Function_363(var uParam0, bool bParam1) //Position: 0xE503 / 58627
{
	vector3 vVar0;
	
	if (!Function_364(uParam0))
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

bool Function_364(int iParam0) //Position: 0xE644 / 58948
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

struct<8> Function_365(var uParam0, int iParam1) //Position: 0xE666 / 58982
{
	struct<2> Var0;
	
	Var0.f_4 = uParam0;
	Var0 = Global_26121[iParam1];
	return StackVal, Var0;
}

void Function_366(int iParam0) //Position: 0xE67F / 59007
{
	Function_367(iParam0->f_1212, iParam0->f_1212, 0);
	Function_367((iParam0 + 1256)->f_60, (iParam0 + 1256)->f_60, 0);
	Function_367(iParam0->f_1212, (iParam0 + 1256)->f_60, 4);
	if (Function_231(iParam0) == 0)
	{
		Function_128(iParam0->f_1212, Global_34573, 2);
		Function_128((iParam0 + 1256)->f_60, Global_34573, 2);
	}
	else if (Function_231(iParam0) == 1)
	{
		Function_128(iParam0->f_1212, Global_34573, 5);
		Function_128((iParam0 + 1256)->f_60, Global_34573, 4);
	}
	else if (Function_231(iParam0) == 2)
	{
		Function_128(iParam0->f_1212, Global_34573, 4);
		Function_128((iParam0 + 1256)->f_60, Global_34573, 5);
	}
	return;
}

void Function_367(bool bParam0, bool bParam1, int iParam2) //Position: 0xE724 / 59172
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
			Function_128(bParam1, bVar1, iParam2);
		}
		bVar0++;
	}
	return;
}

bool Function_368(bool bParam0) //Position: 0xE770 / 59248
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	var uVar5;
	
	Function_130(bParam0, 0);
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
	Function_455(bParam0);
	Function_454(bParam0);
	Function_453(bParam0 + 1256, bParam0->f_832);
	SET_NPC_TO_NPC_DAMAGE_SCALE_FACTOR(0.0f);
	if (!Function_381(bParam0))
	{
		return 0;
	}
	(bParam0 + 1000)->f_4 = 2;
	(bParam0 + 1000)->f_8 = bParam0->f_1212;
	(bParam0 + 1000)->f_72 = 4;
	(bParam0 + 1000)->f_108 = 1;
	bParam0->f_1196 = Function_376(0x442f0000);
	bVar1 = Function_375(bParam0->f_1196);
	GET_OBJECT_POSITION(bVar1, bParam0 + 1200);
	GET_OBJECT_POSITION(bParam0->f_972, &vVar2);
	bVar0 = CREATE_OBJECTSET_IN_LAYOUT("scoachoset", bParam0->f_832, 36, 1);
	if (FIND_TRAFFIC_PATH(bParam0->f_832, bVar0, &vVar2, bParam0 + 1200, 16, &uVar5))
	{
		(bParam0 + 1000)->f_48 = bVar0;
	}
	Function_374(StackVal, StackVal, bParam0 + 1000, *(bParam0 + 1200));
	Function_269(bParam0->f_1212, 4);
	Function_369(StackVal, StackVal, bParam0 + 1000, vVar2, 16, 0.0f, 30.0f, 1, 1);
	Function_236(bParam0 + 1000, 0, 0, 0);
	return 1;
}

void Function_369(int iParam0, vector3 vParam1, float fParam4, float fParam5, float fParam6, var uParam7, bool bParam8) //Position: 0xE8F8 / 59640
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
		bVar3 = START_CURVE_QUERY(Global_28841, vParam1, uParam4, fVar2, fVar1, Function_241(5.0f, ((fParam5 + fParam6) / 2.0f)), 0);
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
		bVar4 = Function_372(StackVal, StackVal, bVar3, vParam1, -1.0f, uParam7);
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
	Function_370(iParam0);
	Function_245(iParam0);
	UNK_0xDF93BD7C(bVar3);
}

void Function_370(var uParam0) //Position: 0xE9F6 / 59894
{
	struct<2> Var0;
	
	if (!SQUAD_IS_VALID(StackVal))
	{
		Function_371();
		Var0 = { StackVal, Function_371() };
		uParam0->f_8 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Global_28841, &Var0));
	}
	*uParam0 = 1;
	return;
}

struct<8> Function_371() //Position: 0xEA21 / 59937
{
	char* cVar0[8];
	
	strcpy(&cVar0, "", 8);
	straddi(&cVar0, RAND_INT_RANGE(false, 9), 8);
	straddi(&cVar0, RAND_INT_RANGE(false, 9), 8);
	straddi(&cVar0, RAND_INT_RANGE(false, 9), 8);
	straddi(&cVar0, RAND_INT_RANGE(false, 9), 8);
	straddi(&cVar0, RAND_INT_RANGE(false, 9), 8);
	straddi(&cVar0, RAND_INT_RANGE(false, 9), 8);
	straddi(&cVar0, RAND_INT_RANGE(false, 9), 8);
	return StackVal, cVar0;
}

var Function_372(bool bParam0, vector3 vParam1, float fParam4, int iParam5) //Position: 0xEA78 / 60024
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
			while ((StackVal || !(StackVal || FABS(((Function_373(&Var3) || !bVar9) - fParam4 != -1.0f)) > fParam4)) && iVar1 > 10)
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
				Function_274(&Var3);
				bVar11 = VDIST(Function_274(&Var3), vParam1);
				if (StackVal && (StackVal || FABS((((bVar11 > bVar10 && !Function_373(&Var3)) && !Function_271(&Var3)) - fParam4 != -1.0f)) > fParam4))
				{
					Function_249(StackVal, StackVal, StackVal, StackVal, StackVal, Var3);
					PRINTNL();
					bVar10 = bVar11;
					bVar0 = bVar2;
				}
				else
				{
					Function_249(StackVal, StackVal, StackVal, StackVal, StackVal, Var3);
					PRINTNL();
					if (bVar11 < bVar10)
					{
					}
					else if (Function_373(&Var3))
					{
					}
					else if (Function_271(&Var3))
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
				Function_274(&Var3);
				bVar11 = VDIST(Function_274(&Var3), vParam1);
				if (StackVal && (StackVal || FABS((((bVar11 < bVar10 && !Function_373(&Var3)) && !Function_271(&Var3)) - fParam4 != -1.0f)) > fParam4))
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
	if (Function_373(&Var3))
	{
		return 4294967295;
	}
	if (Function_271(&Var3))
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
			Function_274(&iVar12);
			vVar18 = { StackVal, StackVal, Function_274(&iVar12) };
			bVar2++;
		}
		Function_274(&Var3);
		vVar18 = { StackVal, StackVal, Function_274(&Var3) };
	}
	return bVar0;
}

bool Function_373(int iParam0) //Position: 0xECDB / 60635
{
	if (iParam0->f_12 > 0,001f || iParam0->f_12 < 0,999f)
	{
		return 1;
	}
	return 0;
}

void Function_374(int iParam0, vector3 vParam1) //Position: 0xECFC / 60668
{
	*(iParam0 + 168) = { StackVal, StackVal, vParam1 };
}

var Function_375(int iParam0) //Position: 0xED0E / 60686
{
	bool bVar0;
	bool bVar1;
	char* cVar2[24];
	
	if (!IS_LAYOUTREF_VALID(Global_28841))
	{
		return "";
	}
	if (!Function_63(iParam0))
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

var Function_376(float fParam0) //Position: 0xED9D / 60829
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
			if (StackVal && (StackVal || Function_379(Global_29005) != Function_379(Global_29155[iVar1710]) != 3 != 4))
			{
				Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_378(iVar17) };
				if (Function_377(iVar17))
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

bool Function_377(int iParam0) //Position: 0xEE86 / 61062
{
	if (!Function_63(iParam0))
	{
		return 0;
	}
	if ((iParam0 != Global_30640[4] || iParam0 != Global_30717[1]) || iParam0 != Global_30693[2])
	{
		return 0;
	}
	return 1;
}

struct<32> Function_378(int iParam0) //Position: 0xEEBA / 61114
{
	char* cVar0[32];
	
	strcpy(&cVar0, "INVALID REGION", 32);
	if (!Function_63(iParam0))
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

int Function_379(int iParam0) //Position: 0xEF77 / 61303
{
	return Function_380(iParam0);
}

int Function_380(int iParam0) //Position: 0xEF82 / 61314
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_63(iParam0))
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

bool Function_381(bool bParam0) //Position: 0xEFDA / 61402
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	vector3 vVar12;
	vector3 vVar15;
	float fVar18;
	struct<8> Var19;
	
	Function_452(bParam0);
	if (StackVal || Function_513(StackVal, !IS_LAYOUTREF_VALID(bParam0->f_832), Function_452(bParam0)))
	{
		return 0;
	}
	Function_452(bParam0);
	fVar18 = (VDIST(Function_452(bParam0), Global_34574) + 50.0f);
	Function_452(bParam0);
	if (!Function_451(StackVal, StackVal, Function_452(bParam0), 0,1f, fVar18, &vVar3, &vVar6, &vVar9, 0x41c80000, 0))
	{
		return 0;
	}
	if (!Function_513(StackVal, StackVal, vVar3))
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
	Function_452(bParam0);
	vVar12 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar0, Function_452(bParam0), StackVal) };
	vVar15 = { 0.0f, 0.0f, 0.0f };
	vVar15.f_4 = (UNK_0x9C40E671(&vVar12) - 180.0f);
	Function_452(bParam0);
	Function_446(StackVal, StackVal, StackVal, StackVal, bParam0, Function_452(bParam0), vVar15, bParam0 + 832);
	SET_ACTOR_UPDATE_PRIORITY(bParam0->f_972, false);
	ADD_PLAYER_CONTROL_HORSE_FOLLOW(0, bParam0->f_972, -1.0f, -1.0f, 1, 1, 0);
	if (!IS_ACTOR_VALID(bParam0->f_972))
	{
		return 0;
	}
	if (!Function_443(bParam0, bParam0 + 832))
	{
		return 0;
	}
	if (!SQUAD_IS_VALID((bParam0 + 1256)->f_60))
	{
		strcpy(&Var19, "movAtkSquad", 32);
		Var19 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_282(&Var19) };
		(bParam0 + 1256)->f_60 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(bParam0->f_832, &Var19));
	}
	Function_442(bParam0 + 1256, (bParam0 + 1256)->f_60);
	if (!SQUAD_IS_VALID((bParam0 + 1256)->f_60))
	{
		return 0;
	}
	if (!Function_400(bParam0))
	{
		return 0;
	}
	Function_399(bParam0, 1);
	Function_382(bParam0, Function_257(bParam0->f_1212), 388, 0.0f, 0.0f, 0.0f, 1, 1, 0);
	return 1;
}

void Function_382(int iParam0, bool bParam1, var uParam2, vector3 vParam3, int iParam6, bool bParam7, int iParam8) //Position: 0xF15F / 61791
{
	struct<8> Var0;
	bool bVar8;
	int iVar9;
	
	iVar9 = 0;
	Function_398(iParam0);
	if (IS_OBJECT_VALID(bParam1))
	{
		*iParam0 = bParam1;
		bVar8 = bParam1;
	}
	iParam0->f_40 = uParam2;
	if (!Function_513(StackVal, StackVal, vParam3))
	{
		*(iParam0 + 4) = { StackVal, StackVal, vParam3 };
	}
	if (iParam6 == 1)
	{
		Function_58(iParam0 + 584, 4);
	}
	else
	{
		Function_25(iParam0 + 584, 4);
	}
	if (bParam7)
	{
		if (Function_13(iParam0->f_624))
		{
			Function_397(iParam0->f_624, 1);
			Function_58(iParam0 + 584, 32);
		}
		else
		{
			LOG_ERROR("PROCMISSION_SETUP found an invalid deed");
		}
	}
	Function_58(iParam0 + 584, 1024);
	iParam0->f_564 = iParam8;
	if (iParam8 >= 0)
	{
		if (!IS_OBJECT_VALID(bVar8))
		{
			bVar8 = CREATE_POINT_IN_LAYOUT(iParam0->f_28, &Var0, vParam3, 0.0f, 0.0f, 0.0f);
			iVar9 = 1;
		}
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_282("nbirdSquad") };
		iParam0->f_568 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(iParam0->f_28, &Var0));
		if (SQUAD_IS_VALID(iParam0->f_568))
		{
			Function_384(iParam0->f_28, iParam0->f_568, iParam8, bVar8, 1129, 0x41200000);
			Function_383(iParam0->f_568, 0);
		}
		if (iVar9 == 1)
		{
			DESTROY_OBJECT(bVar8);
		}
		Function_202(iParam0 + 572);
	}
	Function_202(iParam0 + 44);
	Function_519(0);
}

void Function_383(bool bParam0, bool bParam1) //Position: 0xF2AE / 62126
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

void Function_384(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, float fParam5) //Position: 0xF2EF / 62191
{
	vector3 vVar0;
	vector3 vVar3;
	struct<8> Var6;
	struct<2> Var14;
	bool bVar16;
	bool bVar17;
	
	Function_396(10.0f);
	Var14 = { StackVal, Function_396(10.0f) };
	if (SQUAD_IS_VALID(bParam1))
	{
		if (!Function_395(bParam4) || bParam4 != 0)
		{
			bVar16 = Function_385(128, 0, 0, 4294967295, 0);
		}
		else
		{
			bVar16 = bParam4;
		}
		bVar17 = false;
		while (bVar17 < (iParam2 - 1))
		{
			Function_363(&Var14, bVar17);
			GET_OBJECT_RELATIVE_POSITION(bParam3, Function_363(&Var14, bVar17), &vVar0);
			vVar0.f_4 = (vVar0.y + (fParam5 + RAND_FLOAT_RANGE(0.0f, 20.0f)));
			vVar3.f_4 = RAND_FLOAT_RANGE(0.0f, 360.0f);
			Var6 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_282("genbird_") };
			SQUAD_JOIN(CREATE_ACTOR_IN_LAYOUT(bParam0, &Var6, bVar16, vVar0, vVar3), bParam1);
			bVar17++;
		}
	}
	else
	{
		LOG_ERROR("CREATE_BIRD_SQUAD_IN_LAYOUT - birdSquad passed in is not squad");
	}
}

var Function_385(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0xF3E1 / 62433
{
	return Function_386(iParam0, iParam1, iParam2, iParam3, iParam4, 0, 0.0f, 0.0f, 0.0f);
}

var Function_386(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, vector3 vParam6) //Position: 0xF3FA / 62458
{
	switch (iParam0)
	{
		case 0x00000001:
			return Function_389(StackVal, StackVal, Global_30750[0], bParam1, bParam2, bParam3, bParam4, fParam5, vParam6);
			break;
		
		case 0x00000002:
			return Function_389(StackVal, StackVal, Global_30750[1], bParam1, bParam2, bParam3, bParam4, fParam5, vParam6);
			break;
		
		case 0x00000004:
			return Function_389(StackVal, StackVal, Global_30750[2], bParam1, bParam2, bParam3, bParam4, fParam5, vParam6);
			break;
		
		case 0x00000008:
			return Function_389(StackVal, StackVal, Global_30750[3], bParam1, bParam2, bParam3, bParam4, fParam5, vParam6);
			break;
		
		case 0x00000010:
			return Function_389(StackVal, StackVal, Global_30750[4], bParam1, bParam2, bParam3, bParam4, fParam5, vParam6);
			break;
		
		case 0x00000020:
			return Function_389(StackVal, StackVal, Global_30750[5], bParam1, bParam2, bParam3, bParam4, fParam5, vParam6);
			break;
		
		case 0x00000040:
			return Function_389(StackVal, StackVal, Global_30750[6], bParam1, bParam2, bParam3, bParam4, fParam5, vParam6);
			break;
		
		case 0x00000080:
			return Function_389(StackVal, StackVal, Global_30750[7], bParam1, bParam2, bParam3, bParam4, fParam5, vParam6);
			break;
		
		case 0x00000100:
			return Function_389(StackVal, StackVal, Global_30750[8], bParam1, bParam2, bParam3, bParam4, fParam5, vParam6);
			break;
		
		case 0x00000200:
			return Function_389(StackVal, StackVal, Global_30750[9], bParam1, bParam2, bParam3, bParam4, fParam5, vParam6);
			break;
		
		case 0x00000400:
			return Function_389(StackVal, StackVal, Global_30750[10], bParam1, bParam2, bParam3, bParam4, fParam5, vParam6);
			break;
		
		case 0x00000800:
			return Function_389(StackVal, StackVal, Global_30750[11], bParam1, bParam2, bParam3, bParam4, fParam5, vParam6);
			break;
		
		case 0x00001000:
			return Function_389(StackVal, StackVal, Global_30750[12], bParam1, bParam2, bParam3, bParam4, fParam5, vParam6);
			break;
		
		case 0x00002000:
			return Function_389(StackVal, StackVal, Global_30750[13], bParam1, bParam2, bParam3, bParam4, fParam5, vParam6);
			break;
		
		case 0x40000000:
			LOG_ERROR("Trying to get a random member of invalid popset_type");
			return 4294967295;
			break;
	}
	return Function_387(StackVal, StackVal, iParam0, bParam1, bParam2, fParam5, vParam6);
}

var Function_387(var uParam0, bool bParam1, bool bParam2, float fParam3, vector3 vParam4) //Position: 0xF64F / 63055
{
	bool bVar0;
	
	bVar0 = CREATE_POPULATION_SET(0);
	if (uParam0 & 1 == 1)
	{
		Function_388(Global_30750[0], bVar0);
	}
	if (uParam0 & 2 == 2)
	{
		Function_388(Global_30750[1], bVar0);
	}
	if (uParam0 & 4 == 4)
	{
		Function_388(Global_30750[2], bVar0);
	}
	if (uParam0 & 8 == 8)
	{
		Function_388(Global_30750[3], bVar0);
	}
	if (uParam0 & 16 == 16)
	{
		Function_388(Global_30750[4], bVar0);
	}
	if (uParam0 & 32 == 32)
	{
		Function_388(Global_30750[5], bVar0);
	}
	if (uParam0 & 64 == 64)
	{
		Function_388(Global_30750[6], bVar0);
	}
	if (uParam0 & 128 == 128)
	{
		Function_388(Global_30750[7], bVar0);
	}
	if (uParam0 & 256 == 256)
	{
		Function_388(Global_30750[8], bVar0);
	}
	if (uParam0 & 512 == 512)
	{
		Function_388(Global_30750[9], bVar0);
	}
	if (uParam0 & 1024 == 1024)
	{
		Function_388(Global_30750[10], bVar0);
	}
	if (uParam0 & 2048 == 2048)
	{
		Function_388(Global_30750[11], bVar0);
	}
	if (uParam0 & 4096 == 4096)
	{
		Function_388(Global_30750[12], bVar0);
	}
	if (uParam0 & 8192 == 8192)
	{
		Function_388(Global_30750[13], bVar0);
	}
	return Function_389(StackVal, StackVal, bVar0, bParam1, bParam2, 4294967295, 0, fParam3, vParam4);
}

void Function_388(bool bParam0, bool bParam1) //Position: 0xF7A0 / 63392
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

var Function_389(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, vector3 vParam6) //Position: 0xF85E / 63582
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
		Function_394();
	}
	bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, bParam4, fParam5, vParam6);
	if (!Function_395(bVar1))
	{
		if (!Global_30837 && !Global_30838)
		{
			Function_393(bParam0, bParam1, bParam2, bParam3, bParam4);
			LOG_ERROR("Did a random on popset, and got back a -1");
		}
		Function_393(bParam0, bParam1, bParam2, bParam3, bParam4);
		LOG_ERROR("Did a random on popset, and got back a -1");
		return 4294967295;
	}
	bVar0 = bVar1;
	if (bParam1 || (!bParam3 != 4294967295 && !bParam3 != GET_ACTORENUM_SPECIES(bVar1)))
	{
		if (bParam1 && bParam3 != 4294967295)
		{
			while (Function_392(bVar0) && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, false, fParam5, vParam6);
				if (Function_395(bVar1))
				{
					bVar0 = bVar1;
				}
				iVar2++;
			}
			if (bParam1)
			{
				if (Function_392(bVar0))
				{
					Function_391();
				}
				Function_390(bVar0);
			}
		}
		else if (!bParam3 != 4294967295)
		{
			while (!GET_ACTORENUM_SPECIES(bVar1) != bParam3 && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, false, fParam5, vParam6);
				if (Function_395(bVar1))
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

void Function_390(int iParam0) //Position: 0xFB51 / 64337
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

void Function_391() //Position: 0xFC05 / 64517
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

bool Function_392(bool bParam0) //Position: 0xFC3F / 64575
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

void Function_393(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0xFC6C / 64620
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

void Function_394() //Position: 0xFDBD / 64957
{
	int iVar0;
	
	if (Global_3402)
	{
		if (StackVal || !Global_30742 != GET_THIS_SCRIPT_ID() < GET_CURRENT_GAME_TIME())
		{
			Function_391();
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
	Function_391();
	return;
}

bool Function_395(bool bParam0) //Position: 0xFE08 / 65032
{
	if (bParam0 > 0 || bParam0 <= 1204)
	{
		return 0;
	}
	return 1;
}

struct<8> Function_396(int iParam0) //Position: 0xFE1F / 65055
{
	Function_365(iParam0, 10);
	return StackVal, Function_365(iParam0, 10);
}

void Function_397(int iParam0, int iParam1) //Position: 0xFE2C / 65068
{
	int iVar0;
	struct<6> Var1;
	struct<4> Var7;
	bool bVar11;
	
	if (!Function_74(iParam0))
	{
		Function_15();
		return;
	}
	iVar0 = Function_14(iParam0);
	Global_13172[iParam011].f_4 = 1;
	if (!Global_34165.f_36 && iParam1)
	{
		Function_24(1);
	}
	if (iVar0 == 1)
	{
		Global_6269 = Function_12(iParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_19(Global_6269) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_18(Global_6269) };
		}
		bVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		SET_JOURNAL_ENTRY_PROGRESS(bVar11, -2.0f, false, 0);
		CLEAR_JOURNAL_ENTRY(bVar11);
		APPEND_JOURNAL_ENTRY(bVar11, 0);
	}
	return;
}

void Function_398(int iParam0) //Position: 0xFED2 / 65234
{
	struct<8> Var0;
	
	if (!IS_LAYOUTREF_VALID(iParam0->f_28))
	{
		strcpy(&Var0, "procMisslayout", 32);
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_282(&Var0) };
		iParam0->f_28 = CREATE_LAYOUT(&Var0);
		if (!IS_LAYOUTREF_VALID(iParam0->f_28))
		{
			LOG_ERROR("couldn't create internal procmission layout");
		}
	}
	return;
}

void Function_399(var uParam0, int iParam1) //Position: 0xFF47 / 65351
{
	uParam0->f_488 = iParam1;
	return;
}

bool Function_400(int iParam0) //Position: 0xFF54 / 65364
{
	struct<15> Var0;
	struct<11> Var15;
	vector3 vVar26;
	vector3 vVar29;
	var uVar32;
	int iVar35;
	
	if (SQUAD_IS_VALID(Function_294(iParam0 + 1256)))
	{
		if (Function_441(Function_294(iParam0 + 1256)) >= 0)
		{
			LOG_ERROR("Attacker's Attack wave already exists, but trying to create another.");
			return 0;
		}
	}
	if (IS_ACTOR_VALID(iParam0->f_972))
	{
		GET_OBJECT_POSITION(iParam0->f_972, &uVar32);
		GET_OBJECT_RELATIVE_POSITION(iParam0->f_972, 0.0f, 0.0f, 0.0f, &vVar29);
		Function_440(&Var0, 3, 0.0f, 0, 4294967295);
		Function_439(StackVal, StackVal, &Var15, 0, vVar29, 0.0f, 25.0f, 75.0f, 0, 0x40a00000, 0);
		iVar35 = 0;
		while (iVar35 < 200)
		{
			WAIT(500);
			Function_433(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var15, Var0, 1);
			vVar26 = { StackVal, StackVal, Function_433(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var15, Var0, 1) };
			if (!Function_513(StackVal, StackVal, vVar26))
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
	if (Function_513(StackVal, StackVal, vVar26))
	{
		return 0;
	}
	if (!Function_513(StackVal, StackVal, vVar26))
	{
		Function_432(iParam0 + 1256, iParam0->f_1212);
		Function_431(iParam0 + 1256, 1);
		Function_430(iParam0 + 1256, 3);
		Function_429(iParam0 + 1256, 0);
		Function_428(iParam0 + 1256, 0);
		Function_427(iParam0 + 1256, "matk");
		Function_426(iParam0 + 1256, iParam0->f_1528);
		Function_425(StackVal, StackVal, iParam0 + 1256, vVar26);
		Function_424(iParam0 + 1256, 5.0f, 50.0f, 0x41700000);
		Function_423(iParam0 + 1256, 1);
		Function_422(iParam0 + 1256, iParam0->f_972);
		Function_421(iParam0 + 1256, 1);
		Function_420(iParam0 + 1256, 1);
		Function_419(iParam0 + 1256, 0, 4294967295);
		Function_418(iParam0 + 1256, 1);
		Function_417(iParam0 + 1256, 1, 976, 1);
		Function_416(iParam0 + 1256, 1);
		if (Function_231(iParam0) == 1)
		{
			Function_411(iParam0 + 1256, Global_34573);
		}
		while (!iParam0->f_1516)
		{
			if (Function_409(iParam0 + 1256))
			{
				iVar35 = 0;
				while (iVar35 < 3)
				{
					Function_408(iParam0 + 1256, (*iParam0 + 1480)[iVar35]);
					iVar35++;
				}
				iParam0->f_1252 = Function_406(iParam0 + 1256);
				Function_401(iParam0 + 1256);
				iParam0->f_1516 = 1;
			}
			WAIT(false);
		}
	}
	return 1;
}

void Function_401(int iParam0) //Position: 0x101B4 / 65972
{
	if (IS_OBJECT_VALID(Function_405(iParam0)))
	{
		Function_403(iParam0, 0);
		Function_402(iParam0, 0);
	}
	return;
}

int Function_402(int iParam0, bool bParam1) //Position: 0x101D3 / 66003
{
	bool bVar0;
	char* cVar1[16];
	char* cVar5[16];
	
	if (IS_LAYOUTREF_VALID(*iParam0))
	{
		if (bParam1 == "")
		{
			bParam1 = Function_405(iParam0);
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
				if (Function_395((*iParam0 + 100)[bVar0]) && !(*iParam0 + 100)[bVar0] != 0)
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

int Function_403(int iParam0, bool bParam1) //Position: 0x1040F / 66575
{
	bool bVar0;
	char* cVar1[16];
	char* cVar5[16];
	
	Function_404(iParam0);
	if (IS_LAYOUTREF_VALID(*iParam0))
	{
		if (bParam1 == "")
		{
			bParam1 = Function_405(iParam0);
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
				if (Function_395((*iParam0 + 100)[bVar0]) && !(*iParam0 + 100)[bVar0] != 0)
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

void Function_404(int iParam0) //Position: 0x10640 / 67136
{
	struct<4> Var0;
	
	if (!IS_LAYOUTREF_VALID(*iParam0))
	{
		strcpy(&Var0, "catkslay", 16);
		memcpy(&Var0, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_282(&Var0), 4);
		*iParam0 = CREATE_LAYOUT(&Var0);
		if (!IS_LAYOUTREF_VALID(*iParam0))
		{
			LOG_ERROR("couldn't create library createattack layout");
		}
	}
	return;
}

var Function_405(int iParam0) //Position: 0x106AD / 67245
{
	int iVar0;
	
	if (!IS_ITERATOR_VALID(StackVal))
	{
		return "";
	}
	iVar0 = START_OBJECT_ITERATOR(StackVal);
	return iVar0;
}

var Function_406(int iParam0) //Position: 0x106CC / 67276
{
	int iVar0;
	
	if (!iParam0->f_172 != 1)
	{
		LOG_ERROR("Call CREATEATTACK_INIT before launching");
		return "";
	}
	Function_407(iParam0);
	iVar0 = LAUNCH_NEW_SCRIPT_WITH_ARGS("$/content/scripting/DesignerDefined/createAttack", iParam0, 56, 0);
	return iVar0;
}

void Function_407(int iParam0) //Position: 0x10750 / 67408
{
	int iVar0;
	int iVar1;
	
	if (Function_80(iParam0->f_92, 64))
	{
		iVar1 = 0;
		while (iVar1 <= iParam0->f_100)
		{
			if (!(*iParam0 + 100)[iVar1] != 0 && Function_395((*iParam0 + 100)[iVar1]))
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

int Function_408(int iParam0, bool bParam1) //Position: 0x107A8 / 67496
{
	int iVar0;
	
	if (iParam0->f_172 == 0)
	{
		LOG_ERROR("CREATEATTACK_ADD_ACTORENUM - Call *after* CREATEATTACK_INIT and before CREATEATTACK_LAUNCH");
		return 0;
	}
	if (!Function_395(bParam1) || bParam1 != 0)
	{
		return 0;
	}
	Function_403(iParam0, 0);
	iVar0 = 0;
	while (iVar0 <= iParam0->f_100)
	{
		if ((*iParam0 + 100)[iVar0] != 0 || !Function_395((*iParam0 + 100)[iVar0]))
		{
			(*iParam0 + 100)[iVar0] = bParam1;
			iVar0 = iParam0->f_100;
		}
		iVar0++;
	}
	Function_402(iParam0, 0);
	return 1;
}

bool Function_409(int iParam0) //Position: 0x10876 / 67702
{
	int iVar0;
	vector3 vVar1;
	struct<15> Var4;
	struct<11> Var19;
	
	Function_404(iParam0);
	if (iParam0->f_212 == 0)
	{
		iParam0->f_212 = 3;
		DECOR_SET_BOOL(*iParam0, "catk_bus", iParam0->f_216);
	}
	if (Function_513(StackVal, StackVal, *(iParam0 + 184)))
	{
		if (Function_513(StackVal, StackVal, *(iParam0 + 196)))
		{
			if (IS_ACTOR_VALID(GET_PLAYER_ACTOR(0)))
			{
				Function_425(StackVal, StackVal, iParam0, Global_34574);
			}
			else
			{
				return 0;
			}
		}
		Function_425(StackVal, StackVal, iParam0, *(iParam0 + 196));
		if (iParam0->f_24 > 0,5f)
		{
			iParam0->f_24 = 0,5f;
		}
		if ((iParam0->f_28 - iParam0->f_24) > 6.0f)
		{
			iParam0->f_28 = (iParam0->f_24 + 6.0f);
		}
		if (iParam0->f_32 >= 0.0f)
		{
			iParam0->f_32 = 15.0f;
		}
		Function_440(&Var4, 4294967295, 5.0f, 1, 4294967295);
		Function_439(StackVal, StackVal, &Var19, 0, *(iParam0 + 196), 0.0f, iParam0->f_24, iParam0->f_28, iParam0->f_32, 0x40a00000, 0);
		iVar0 = 0;
		while (iVar0 < 9)
		{
			Function_433(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var19, Var4, 1);
			vVar1 = { StackVal, StackVal, Function_433(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var19, Var4, 1) };
			if (!Function_513(StackVal, StackVal, vVar1))
			{
				iVar0 = 10;
			}
			iVar0++;
		}
		if (Function_513(StackVal, StackVal, vVar1))
		{
			*(iParam0 + 184) = { StackVal, StackVal, *(iParam0 + 196) };
			return 0;
		}
		*(iParam0 + 184) = { StackVal, StackVal, vVar1 };
	}
	Function_407(iParam0);
	iParam0->f_172 = 1;
	if (!Function_410(iParam0))
	{
		LOG_ERROR("CREATEATTACK_INIT could not create data object");
	}
	Function_402(iParam0, 0);
	return 1;
}

bool Function_410(int iParam0) //Position: 0x109F5 / 68085
{
	var uVar0;
	
	if (!IS_OBJECT_VALID(*iParam0))
	{
		LOG_ERROR("CREATEATTACK_CreateDataObject - Invalid layout");
		return 0;
	}
	if (!IS_OBJECT_VALID(StackVal))
	{
		memcpy(&uVar0, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_282("ncatk_dobj"), 4);
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

int Function_411(int iParam0, bool bParam1) //Position: 0x10B64 / 68452
{
	return Function_412(iParam0, bParam1);
}

int Function_412(int iParam0, bool bParam1) //Position: 0x10B71 / 68465
{
	if (!IS_ACTOR_VALID(bParam1))
	{
		return 0;
	}
	Function_415(iParam0);
	if (!IS_ACTOR_IN_ACTORSET(iParam0->f_52, bParam1))
	{
		DECOR_SET_BOOL(bParam1, "catk_external", true);
		ADD_ACTORSET_MEMBER(iParam0->f_52, bParam1);
		PRINTSTRING("Adding as target: ");
		PRINTSTRING(GET_OBJECT_NAME(bParam1));
		PRINTNL();
		if (!Function_80(iParam0->f_92, 1024))
		{
			Function_413(iParam0, bParam1);
		}
	}
	return 1;
}

void Function_413(var uParam0, bool bParam1) //Position: 0x10BEF / 68591
{
	var uVar0;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	
	Function_414(uParam0);
	memcpy(&uVar0, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_282("catkavol"), 4);
	bVar4 = CREATE_VOLUME_IN_LAYOUT(*uParam0, &uVar0, 3, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 5.0f, 5.0f, 5.0f);
	if (IS_VOLUME_VALID(bVar4))
	{
		if (SQUAD_IS_VALID(uParam0->f_60))
		{
			ATTACH_OBJECTS(GET_OBJECT_FROM_VOLUME(bVar4), GET_OBJECT_FROM_ACTOR(bParam1), Function_37(), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
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

int Function_414(int iParam0) //Position: 0x10CC0 / 68800
{
	var uVar0;
	
	Function_404(iParam0);
	if (!IS_OBJECTSET_VALID(iParam0->f_96))
	{
		memcpy(&uVar0, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_282("navoidVols"), 4);
		iParam0->f_96 = CREATE_OBJECTSET_IN_LAYOUT(&uVar0, *iParam0, 9, 1);
		if (!IS_OBJECTSET_VALID(iParam0->f_96))
		{
			return 0;
		}
	}
	return 1;
}

int Function_415(int iParam0) //Position: 0x10D08 / 68872
{
	var uVar0;
	
	if (!IS_ACTORSET_VALID(iParam0->f_52))
	{
		Function_404(iParam0);
		memcpy(&uVar0, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_282("ntargetSet"), 4);
		iParam0->f_52 = CREATE_ACTORSET_IN_LAYOUT(*iParam0, &uVar0, 0);
		if (!IS_ACTORSET_VALID(iParam0->f_52))
		{
			return 0;
		}
	}
	return 1;
}

void Function_416(int iParam0, bool bParam1) //Position: 0x10D4E / 68942
{
	if (bParam1)
	{
		Function_58(iParam0 + 92, 64);
	}
	else
	{
		Function_25(iParam0 + 92, 64);
	}
	return;
}

int Function_417(int iParam0, int iParam1, int iParam2, var uParam3) //Position: 0x10D6E / 68974
{
	if (iParam1 == 1)
	{
		Function_58(iParam0 + 92, 1);
	}
	else
	{
		Function_25(iParam0 + 92, 1);
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

void Function_418(int iParam0, int iParam1) //Position: 0x10DB4 / 69044
{
	if (iParam1 == 1)
	{
		Function_58(iParam0 + 92, 8);
	}
	else
	{
		Function_25(iParam0 + 92, 8);
	}
	return;
}

void Function_419(int iParam0, int iParam1, int iParam2) //Position: 0x10DD5 / 69077
{
	if (iParam1 == 1)
	{
		Function_58(iParam0 + 92, 4);
	}
	else
	{
		Function_25(iParam0 + 92, 4);
	}
	iParam0->f_88 = iParam2;
	Function_58(iParam0 + 92, 128);
	return;
}

void Function_420(int iParam0, int iParam1) //Position: 0x10E03 / 69123
{
	if (iParam1 == 0)
	{
		Function_58(iParam0 + 92, 4096);
	}
	else
	{
		Function_25(iParam0 + 92, 4096);
	}
	return;
}

void Function_421(int iParam0, int iParam1) //Position: 0x10E26 / 69158
{
	if (iParam1 == 0)
	{
		Function_58(iParam0 + 92, 2048);
	}
	else
	{
		Function_25(iParam0 + 92, 2048);
	}
	return;
}

void Function_422(var uParam0, bool bParam1) //Position: 0x10E49 / 69193
{
	if (IS_ACTOR_VALID(bParam1))
	{
		uParam0->f_56 = bParam1;
	}
	return;
}

int Function_423(int iParam0, int iParam1) //Position: 0x10E5D / 69213
{
	if (iParam1 == 1)
	{
		Function_58(iParam0 + 92, 512);
	}
	else
	{
		Function_25(iParam0 + 92, 512);
	}
	return 1;
}

void Function_424(var uParam0, float fParam1, float fParam2, var uParam3) //Position: 0x10E81 / 69249
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

int Function_425(int iParam0, vector3 vParam1) //Position: 0x10EEA / 69354
{
	bool bVar0;
	
	bVar0 = Function_405(iParam0);
	if (Function_513(StackVal, StackVal, vParam1))
	{
		return 0;
	}
	if (iParam0->f_172 != 1 && IS_OBJECT_VALID(bVar0))
	{
		Function_403(iParam0, bVar0);
	}
	*(iParam0 + 196) = { StackVal, StackVal, vParam1 };
	*(iParam0 + 184) = { 0.0f, 0.0f, 0.0f };
	if (iParam0->f_172 != 1 && IS_OBJECT_VALID(bVar0))
	{
		Function_402(iParam0, bVar0);
	}
	return 1;
}

int Function_426(var uParam0, int iParam1) //Position: 0x10F49 / 69449
{
	if (iParam1 > 0 || iParam1 < 6)
	{
		return 0;
	}
	uParam0->f_40 = iParam1;
	return 1;
}

int Function_427(int iParam0, char* cParam1) //Position: 0x10F64 / 69476
{
	char* cVar0[8];
	
	strcpy(&cVar0, cParam1, 8);
	*(iParam0 + 72) = { StackVal, cVar0 };
	return 1;
}

void Function_428(int iParam0, int iParam1) //Position: 0x10F7B / 69499
{
	if (iParam0->f_172 != 1 && IS_OBJECT_VALID(Function_405(iParam0)))
	{
		Function_403(iParam0, 0);
	}
	iParam0->f_176 = iParam1;
	if (iParam0->f_172 != 1 && IS_OBJECT_VALID(Function_405(iParam0)))
	{
		Function_402(iParam0, 0);
	}
	return;
}

void Function_429(int iParam0, int iParam1) //Position: 0x10FB9 / 69561
{
	if (iParam0->f_172 != 1 && IS_OBJECT_VALID(Function_405(iParam0)))
	{
		Function_403(iParam0, 0);
	}
	iParam0->f_180 = iParam1;
	if (iParam0->f_172 != 1 && IS_OBJECT_VALID(Function_405(iParam0)))
	{
		Function_402(iParam0, 0);
	}
	return;
}

int Function_430(var uParam0, int iParam1) //Position: 0x10FF7 / 69623
{
	if (iParam1 >= 0 || iParam1 <= 7)
	{
		return 0;
	}
	uParam0->f_212 = iParam1;
	uParam0->f_216 = 1;
	return 1;
}

int Function_431(var uParam0, int iParam1) //Position: 0x11017 / 69655
{
	uParam0->f_68 = iParam1;
	return 1;
}

int Function_432(var uParam0, bool bParam1) //Position: 0x11024 / 69668
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
	Function_415(uParam0);
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam1) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(bParam1, bVar0);
		Function_412(uParam0, bVar1);
		bVar0++;
	}
	return 1;
}

vector3 Function_433(struct<41> Param0) //Position: 0x11073 / 69747
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
	else if (!Function_513(StackVal, StackVal, *(&Param0 + 4)))
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
	Function_438(Param0.f_36);
	if (Param0.f_24 > 1.0f && Param0.f_28 > 1.0f)
	{
		Function_437();
	}
	else
	{
		AMBIENT_SET_DISTANCE_FILTER(Param0.f_24, Param0.f_28);
	}
	Function_436(Param0.f_20);
	Function_435(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param11);
	Function_434(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param11);
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
	Function_354();
	return StackVal, StackVal, Function_354();
}

void Function_434(struct<33> Param0) //Position: 0x111A2 / 70050
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

void Function_435(struct<5> Param0, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14) //Position: 0x112CE / 70350
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

void Function_436(bool bParam0) //Position: 0x1131F / 70431
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

void Function_437() //Position: 0x113D2 / 70610
{
	float fVar0;
	bool bVar1;
	
	Function_361(&fVar0, &bVar1);
	AMBIENT_SET_DISTANCE_FILTER(fVar0, bVar1);
	return;
}

void Function_438(bool bParam0) //Position: 0x113E6 / 70630
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

void Function_439(int iParam0, int iParam1, vector3 vParam2, float fParam5, var uParam6, var uParam7, var uParam8, int iParam9, int iParam10) //Position: 0x1142A / 70698
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

void Function_440(var uParam0, int iParam1, float fParam2, int iParam3, int iParam4) //Position: 0x11466 / 70758
{
	*uParam0 = iParam1;
	uParam0->f_4 = fParam2;
	uParam0->f_8 = iParam3;
	uParam0->f_16 = iParam4;
	uParam0->f_20 = 0.0f;
	uParam0->f_12 = 4294967295;
}

int Function_441(bool bParam0) //Position: 0x1148F / 70799
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

int Function_442(var uParam0, int iParam1) //Position: 0x114DC / 70876
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
	Function_295(&bVar0);
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

bool Function_443(int iParam0, int iParam1) //Position: 0x11547 / 70983
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
		Var10 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_282(&Var10) };
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
	iVar2 = Function_445(iParam0);
	bVar1 = false;
	while (bVar1 < (iParam0->f_1248 - 1))
	{
		strcpy(&Var10, "matkdef_traveler", 32);
		Var10 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_282(&Var10) };
		GET_OBJECT_RELATIVE_POSITION(GET_OBJECT_FROM_ACTOR(iParam0->f_972), 0.0f, 0.0f, (10.0f + IntToFloat(bVar1)), &vVar3);
		Function_354();
		vVar6 = { StackVal, StackVal, Function_354() };
		if (iVar2 >= 0)
		{
			bVar0 = (*iParam0 + 1216)[(bVar1 % iVar2)];
		}
		else
		{
			bVar0 = Function_385(2, 1, 2, 4294967295, 0);
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
		Function_444(GET_OBJECT_FROM_ACTOR(bVar9));
		if (bVar1 == 0)
		{
			Function_284(bVar9, 4);
		}
		else
		{
			Function_284(bVar9, 7);
		}
		if (bVar1 <= (GET_NUM_AVAILABLE_SEATS(iParam0->f_972) + GET_NUM_OCCUPIED_SEATS(iParam0->f_972)))
		{
			SET_ACTOR_IN_VEHICLE(bVar9, iParam0->f_972, bVar1);
		}
		else
		{
			LOG_ERROR("No more seats for matkdef actor");
		}
		AI_SET_NAV_ACTOR_AVOIDANCE_MODE(bVar9, true);
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

void Function_444(bool bParam0) //Position: 0x117A9 / 71593
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

var Function_445(bool bParam0) //Position: 0x117DD / 71645
{
	int iVar0;
	int iVar1;
	
	while (iVar1 <= bParam0->f_1216)
	{
		if (Function_395((*bParam0 + 1216)[iVar1]) && (*bParam0 + 1216)[iVar1] == 0)
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

int Function_446(var uParam0, vector3 vParam1, vector3 vParam4, var uParam7) //Position: 0x11823 / 71715
{
	struct<8> Var0;
	
	strcpy(&Var0, "ATTACKDEF_STAGECOACH", 32);
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_282(&Var0) };
	uParam0->f_972 = Function_447(StackVal, StackVal, StackVal, StackVal, *uParam7, &Var0, uParam0->f_976, Function_385(64, 1, 0, 4294967295, 0), vParam1, vParam4, 1, 976, 976, 976, 4);
	if (!IS_ACTOR_VALID(uParam0->f_972))
	{
		return 0;
	}
	Function_444(GET_OBJECT_FROM_ACTOR(uParam0->f_972));
	return 1;
}

var Function_447(bool bParam0, bool bParam1, bool bParam2, int iParam3, vector3 vParam4, vector3 vParam7, var uParam10, int iParam11, int iParam12, int iParam13, int iParam14) //Position: 0x1189A / 71834
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
			if (Function_450(Global_30750[6], 4, 23, 0) && uParam10)
			{
				bVar16 = Function_449(StackVal, StackVal, Global_30750[6], vParam4, 4, 23, 0);
				if (Function_448(bVar16, &iVar1))
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

bool Function_448(int iParam0, int iParam1) //Position: 0x11ACE / 72398
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

var Function_449(bool bParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6) //Position: 0x11B00 / 72448
{
	return GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam4, bParam5, bParam6, 1,401298E-45f, vParam1);
}

int Function_450(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x11B18 / 72472
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

bool Function_451(vector3 vParam0, float fParam3, float fParam4, var uParam5, var uParam6, var uParam7, float fParam8, bool bParam9) //Position: 0x11B3F / 72511
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
	
	Function_354();
	vVar0 = { StackVal, StackVal, Function_354() };
	bVar26 = -1.0f;
	if (bParam9)
	{
		bVar7 = START_CURVE_QUERY(Global_28841, vParam0, 2,937122E-42f, fParam3, fParam4, 20.0f, 0);
	}
	else
	{
		bVar7 = START_CURVE_QUERY(Global_28841, vParam0, 2,242078E-44f, fParam3, fParam4, 2.0f, 0);
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
			Function_274(&Var8);
			vVar3 = { StackVal, StackVal, Function_274(&Var8) };
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
			Function_274(&iVar20);
			*uParam6 = { StackVal, StackVal, Function_274(&iVar20) };
			UNK_0x19D652F9(bVar6, -fParam8, &Var14, &iVar20);
			Function_274(&iVar20);
			*uParam7 = { StackVal, StackVal, Function_274(&iVar20) };
		}
		else
		{
			Function_354();
			*uParam7 = { StackVal, StackVal, Function_354() };
			Function_354();
			*uParam6 = { StackVal, StackVal, Function_354() };
		}
		UNK_0xDF93BD7C(bVar7);
		return 1;
	}
	return 0;
}

vector3 Function_452(int iParam0) //Position: 0x11C7B / 72827
{
	return StackVal, StackVal, *(iParam0 + 4);
}

int Function_453(int iParam0, bool bParam1) //Position: 0x11C87 / 72839
{
	if (IS_LAYOUTREF_VALID(*iParam0))
	{
		LOG_ERROR("CREATEATTACK_SET_LAYOUT found a previously set layout");
		return 0;
	}
	if (bParam1 == "")
	{
		Function_404(iParam0);
	}
	else if (IS_LAYOUTREF_VALID(bParam1))
	{
		Function_58(iParam0 + 92, 16);
	}
	else
	{
		LOG_ERROR("CREATEATTACK_SET_LAYOUT was passed an invalid layout");
		return 0;
	}
	*iParam0 = bParam1;
	return 1;
}

void Function_454(int iParam0) //Position: 0x11D38 / 73016
{
	struct<8> Var0;
	
	if (!IS_LAYOUTREF_VALID(iParam0->f_832))
	{
		strcpy(&Var0, "matkdef_layout", 32);
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_282(&Var0) };
		iParam0->f_832 = CREATE_LAYOUT(&Var0);
		if (!IS_LAYOUTREF_VALID(iParam0->f_832))
		{
			LOG_ERROR("couldn't create internal matkdef layout");
		}
		iParam0->f_896 = 1;
	}
	return;
}

int Function_455(int iParam0) //Position: 0x11DB5 / 73141
{
	if (!Function_462(iParam0))
	{
		if (Function_13(Function_461(iParam0)))
		{
			return 0;
		}
		Function_456(iParam0, Function_457(0, 1, 2));
		if (!Function_13(Function_461(iParam0)))
		{
			return 0;
		}
	}
	LOG_ERROR("Deeds are ignored, but Matkdef_CreatePendingDeed is being called");
	return 1;
}

void Function_456(int iParam0, int iParam1) //Position: 0x11E34 / 73268
{
	if (Function_13(iParam1))
	{
		iParam0->f_624 = iParam1;
		Function_58(iParam0 + 584, 32);
	}
	else
	{
		LOG_ERROR("PROCMISSION_SET_DEED received an invalid deed");
	}
	return;
}

int Function_457(bool bParam0, bool bParam1, bool bParam2) //Position: 0x11E89 / 73353
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_460(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_13172[iVar011] == iVar1)
		{
			return iVar0;
		}
		if (Global_13172[iVar011] != 0 && iVar0 < 0)
		{
			return Function_458(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_458(bParam0, bParam1, bParam2, 4294967295);
}

int Function_458(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x11EE7 / 73447
{
	var uVar0;
	
	if (!Function_298(bParam2))
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
	uVar0 = Function_460(bParam0, bParam1, bParam2);
	if (bParam3 != 4294967295 || bParam3 <= 275)
	{
		bParam3 = Function_459(uVar0);
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

int Function_459(int iParam0) //Position: 0x1203C / 73788
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

var Function_460(int iParam0, int iParam1, int iParam2) //Position: 0x1207A / 73850
{
	return ((iParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

int Function_461(int iParam0) //Position: 0x1209A / 73882
{
	return iParam0->f_624;
}

bool Function_462(int iParam0) //Position: 0x120A5 / 73893
{
	if (Function_80(iParam0->f_584, 32))
	{
		return 1;
	}
	return 0;
}

bool Function_463(int iParam0) //Position: 0x120BE / 73918
{
	if (!Function_464(64, 0, 23, 0))
	{
		return 0;
	}
	iParam0->f_900 = iParam0->f_900;
	return 1;
}

bool Function_464(int iParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x120DE / 73950
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0x00000001:
			iVar0 = Function_450(Global_30750[0], bParam1, bParam2, bParam3);
			break;
		
		case 0x00000002:
			iVar0 = Function_450(Global_30750[1], bParam1, bParam2, bParam3);
			break;
		
		case 0x00000004:
			iVar0 = Function_450(Global_30750[2], bParam1, bParam2, bParam3);
			break;
		
		case 0x00000008:
			iVar0 = Function_450(Global_30750[3], bParam1, bParam2, bParam3);
			break;
		
		case 0x00000010:
			iVar0 = Function_450(Global_30750[4], bParam1, bParam2, bParam3);
			break;
		
		case 0x00000020:
			iVar0 = Function_450(Global_30750[5], bParam1, bParam2, bParam3);
			break;
		
		case 0x00000040:
			iVar0 = Function_450(Global_30750[6], bParam1, bParam2, bParam3);
			break;
		
		case 0x00000080:
			iVar0 = Function_450(Global_30750[7], bParam1, bParam2, bParam3);
			break;
		
		case 0x00000100:
			iVar0 = Function_450(Global_30750[8], bParam1, bParam2, bParam3);
			break;
		
		case 0x00000200:
			iVar0 = Function_450(Global_30750[9], bParam1, bParam2, bParam3);
			break;
		
		case 0x00000400:
			iVar0 = Function_450(Global_30750[10], bParam1, bParam2, bParam3);
			break;
		
		case 0x00000800:
			iVar0 = Function_450(Global_30750[11], bParam1, bParam2, bParam3);
			break;
		
		case 0x00001000:
			iVar0 = Function_450(Global_30750[12], bParam1, bParam2, bParam3);
			break;
		
		case 0x00002000:
			iVar0 = Function_450(Global_30750[13], bParam1, bParam2, bParam3);
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

int Function_465(var uParam0, vector3 vParam1) //Position: 0x122A6 / 74406
{
	if (Function_513(StackVal, StackVal, vParam1))
	{
		LOG_ERROR("Invalid StartPos");
		return 0;
	}
	Function_304(StackVal, StackVal, uParam0, vParam1);
	return 1;
}

bool Function_466(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4) //Position: 0x122DC / 74460
{
	struct<8> Var0;
	bool bVar8;
	bool bVar9;
	
	if (Global_3371 && iParam0->f_32)
	{
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_282(GET_SCRIPT_NAME()) };
		bVar8 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, StackVal, Global_26150, &Var0, 4,203895E-45f, Function_494(*(iParam0 + 8), 0.0f, Global_34573, *(iParam0 + 8)), 0.0f, iParam0->f_52, 20.0f, iParam0->f_52);
		DECOR_SET_INT(bVar8, "script", GET_THIS_SCRIPT_ID());
		if (iParam0->f_56 != 4294967295)
		{
			DECOR_SET_INT(StackVal, bVar8, "category");
			Function_492(&bVar8, iParam0->f_32);
		}
		else
		{
			LOG_ERROR("Trying to set volume restriction on a script that has an invalid ID");
		}
		*(iParam0 + 8) = { StackVal, StackVal, Global_34574 };
		return 1;
	}
	*uParam3 = 0;
	if (!Function_469(iParam0))
	{
		if (iParam0->f_32 == 1)
		{
			if (*uParam2 == 0)
			{
				Function_212("Still scanning for the proper terrain to run this event.  Move the player around to find a good spawn location.", -1.0f, 1, 2, 1, 0);
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
		Function_212("THE EVENT HAS SPAWNED!!!  The event is marked with a CHECKER blip on your map", 5.0f, 1, 2, 1, 0);
	}
	if (bParam4)
	{
		if (!Function_467(iParam0->f_56, 0, 1, 0, 0))
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
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_282("restrictVol") };
		bVar9 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, StackVal, Global_26150, &Var0, 4,203895E-45f, Function_494(*(iParam0 + 8), 0.0f, Global_34573, *(iParam0 + 8)), 0.0f, iParam0->f_52, 20.0f, iParam0->f_52);
		DECOR_SET_INT(bVar9, "script", GET_THIS_SCRIPT_ID());
		if (iParam0->f_56 != 4294967295)
		{
			DECOR_SET_INT(StackVal, bVar9, "category");
			Function_492(&bVar9, iParam0->f_32);
		}
		else
		{
			LOG_ERROR("Trying to set volume restriction on a script that has an invalid ID");
		}
	}
	return 1;
}

bool Function_467(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x1266E / 75374
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
		Function_212("THE EVENT HAS SPAWNED!!!  The event is marked with a CHECKER blip on your map", 10.0f, 1, 2, 1, 0);
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
			Function_468(bVar0);
			PRINTNL();
			PRINTSTRING("timebtwnEvents (in minutes):");
			PRINTINT(bVar1);
			PRINTNL();
			PRINTSTRING("Formed time of day:");
			Function_468(bVar0);
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
			Function_468(bVar0);
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

void Function_468(bool bParam0) //Position: 0x128CB / 75979
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

bool Function_469(int iParam0) //Position: 0x12911 / 76049
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
			Function_295(iParam0 + 4);
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
				vVar3 = { 0.0f, 0.0f, Function_360(1) };
				ROTATE_VECTOR_XZ(&vVar3, GET_HEADING(GET_PLAYER_ACTOR(0)), 0);
				vVar3 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar9, vVar3, StackVal) };
				ITERATE_IN_SPHERE(StackVal, vVar3, Function_360(1));
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
						bVar0 = Function_491(StackVal, StackVal, StackVal, vVar9, 0,01f);
					}
					else
					{
						bVar0 = Function_490(StackVal, StackVal, StackVal, vVar9, 0,1f, "locflag", (iParam0 + 64 + 24)->f_16);
					}
				}
				else if ((iParam0 + 64 + 24)->f_16 == 0)
				{
					bVar0 = Function_488(StackVal, StackVal, StackVal, vVar9, Function_489());
				}
				else
				{
					bVar0 = Function_487(StackVal, StackVal, StackVal, vVar9, Function_489(), "locflag", (iParam0 + 64 + 24)->f_16);
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
			Function_295(iParam0 + 4);
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
					if (Function_63(bVar14))
					{
						if (StackVal == (iParam0 + 64)->f_48)
						{
							if ((StackVal && Global_29008[bVar14]) >= 0)
							{
								GET_OBJECT_POSITION(bVar1, &vVar3);
								if (VDIST(vVar9, vVar3) < fVar13 && VDIST(vVar9, vVar3) > Function_360(1))
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
				Function_255(iParam0 + 8, 99.0f, iParam0 + 8, 10);
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
				Function_486(&vVar9, &vVar6);
				vVar3 = { StackVal, StackVal, Function_486(&vVar9, &vVar6) };
				if (!Function_513(StackVal, StackVal, vVar3))
				{
					PRINTSTRING("Player Pos: ");
					PRINTVECTOR(vVar9);
					PRINTNL();
					Function_361(&fVar13, &fVar12);
					if (VDIST(vVar3, vVar9) < ((fVar13 + ((fVar12 - fVar13) / 2.0f)) * 0,8f))
					{
						iVar2 = Function_484(StackVal, StackVal, iParam0, vVar3);
					}
				}
			}
			else
			{
				iVar2 = Function_483(iParam0);
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
					if (!Function_482(StackVal, StackVal, *(iParam0 + 8)))
					{
						return 0;
					}
				}
				if (iParam0->f_60 == 1)
				{
					if (!Function_481(StackVal, StackVal, *(iParam0 + 8)))
					{
						return 0;
					}
				}
				if (Function_80(StackVal, 131072))
				{
					if (StackVal || Function_480(StackVal, Function_480(StackVal, StackVal, *(iParam0 + 8)), Global_34574))
					{
						return 0;
					}
				}
				if (StackVal & 1024 == 1024)
				{
					if (Function_479(StackVal, StackVal, *(iParam0 + 8)))
					{
						return 0;
					}
				}
				if (!Function_476(iParam0 + 8, iParam0 + 52, 0, iParam0->f_32))
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
				vVar3 = { 0.0f, 0.0f, ((fVar13 + fVar12) * -0,5f) };
				ROTATE_VECTOR_XZ(&vVar3, GET_HEADING(GET_PLAYER_ACTOR(0)), 0);
				vVar3 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar9, vVar3, StackVal) };
				bVar23 = START_CURVE_QUERY(Global_28841, vVar3, Function_253((iParam0 + 64)->f_120, 0), 0.0f, 20.0f, 5.0f, 0);
			}
			else
			{
				bVar23 = START_CURVE_QUERY(Global_28841, vVar9, Function_253((iParam0 + 64)->f_120, 0), 120.0f, 150.0f, 5.0f, 0);
			}
			if (GET_NUM_POINTS_IN_CURVE_QUERY(bVar23) >= 0)
			{
				bVar21 = RAND_INT_RANGE(false, (GET_NUM_POINTS_IN_CURVE_QUERY(bVar23) - 1));
				GET_POINT_FROM_CURVE_QUERY(bVar23, bVar21, &Var15);
				Function_274(&Var15);
				*(iParam0 + 8) = { StackVal, StackVal, Function_274(&Var15) };
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
				if (!Function_482(StackVal, StackVal, *(iParam0 + 8)))
				{
					return 0;
				}
			}
			if (iParam0->f_60 == 1)
			{
				if (!Function_481(StackVal, StackVal, *(iParam0 + 8)))
				{
					return 0;
				}
			}
			if (iParam0->f_60 == 0)
			{
				if (!(StackVal || Function_482(StackVal, Function_481(StackVal, StackVal, *(iParam0 + 8)), *(iParam0 + 8))))
				{
					return 0;
				}
			}
			if (Function_80(StackVal, 131072))
			{
				if (StackVal || Function_480(StackVal, Function_480(StackVal, StackVal, *(iParam0 + 8)), Global_34574))
				{
					return 0;
				}
			}
			if (StackVal && !Function_476(iParam0 + 8, iParam0 + 52, 0, iParam0->f_32) == 262144)
			{
				return 0;
			}
			break;
		
		case 0x00000004:
			if (!Function_474((iParam0 + 64)->f_120) < 0)
			{
				return 0;
			}
			break;
		
		case 0x00000007:
			switch ((iParam0 + 64)->f_128)
			{
				case 0x00000001:
					bVar24 = Function_471(StackVal, Global_29004, Global_29005, Global_29006, 1);
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
						bVar24 = Function_471(StackVal, Global_29004, Global_29005, (Global_29006 + iVar22), 1);
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
	if (Function_470(StackVal, StackVal, *(iParam0 + 8)))
	{
		return 0;
	}
	if (!STREAMING_ARE_BOUNDS_LOADED(*(iParam0 + 8), 10.0f))
	{
		return 0;
	}
	return 1;
}

bool Function_470(vector3 vParam0) //Position: 0x1313B / 78139
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

bool Function_471(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x13170 / 78192
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
								return Function_472(&Global_6298, &Global_7189, bParam3);
								break;
							
							case 0x00000001:
								return Function_472(&Global_6364, &Global_7287, bParam3);
								break;
							
							case 0x00000002:
								return Function_472(&Global_6351, &Global_7268, bParam3);
								break;
							
							default:
								return Function_472(&Global_6391, &Global_7327, bParam3);
								break;
						}
						break;
					
					case 0x00000001:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_472(&Global_6501, &Global_7490, bParam3);
								break;
							
							case 0x00000001:
								return Function_472(&Global_6402, &Global_7343, bParam3);
								break;
							
							case 0x00000003:
								return Function_472(&Global_6433, &Global_7389, bParam3);
								break;
							
							case 0x00000002:
								return Function_472(&Global_6490, &Global_7474, bParam3);
								break;
							
							case 0x00000004:
								return Function_472(&Global_6537, &Global_7543, bParam3);
								break;
							
							default:
								return Function_472(&Global_6532, &Global_7536, bParam3);
								break;
						}
						break;
					
					case 0x00000002:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_472(&Global_6563, &Global_7581, bParam3);
								break;
							
							case 0x00000001:
								return Function_472(&Global_6614, &Global_7657, bParam3);
								break;
							
							case 0x00000002:
								return Function_472(&Global_6643, &Global_7700, bParam3);
								break;
							
							default:
								return Function_472(&Global_6550, &Global_7562, bParam3);
								break;
						}
						break;
					
					case 0x00000003:
						switch (bVar1)
						{
							case 0x00000001:
								return Function_472(&Global_6667, &Global_7735, bParam3);
								break;
							
							default:
								return Function_472(&Global_6704, &Global_7790, bParam3);
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
								return Function_472(&Global_6709, &Global_7797, bParam3);
								break;
							
							case 0x00000001:
								return Function_472(&Global_6764, &Global_7879, bParam3);
								break;
							
							case 0x00000002:
								return Function_472(&Global_6785, &Global_7910, bParam3);
								break;
							
							default:
								return Function_472(&Global_6810, &Global_7947, bParam3);
								break;
						}
						break;
					
					case 0x00000002:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_472(&Global_6815, &Global_7954, bParam3);
								break;
							
							default:
								return Function_472(&Global_6928, &Global_8122, bParam3);
								break;
						}
						break;
					
					case 0x00000001:
						switch (bVar1)
						{
							case 0x00000002:
								return Function_472(&Global_6933, &Global_8129, bParam3);
								break;
							
							case 0x00000001:
								return Function_472(&Global_6962, &Global_8172, bParam3);
								break;
							
							case 0x00000003:
								return Function_472(&Global_6987, &Global_8209, bParam3);
								break;
							
							default:
								return Function_472(&Global_7027, &Global_8268, bParam3);
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
		return Function_472(&Global_6298, &Global_7189, bParam3);
	}
	if (bVar1 == Global_30640[1])
	{
		return Function_472(&Global_6364, &Global_7287, bParam3);
	}
	if (bVar1 == Global_30640[2])
	{
		return Function_472(&Global_6351, &Global_7268, bParam3);
	}
	if (bVar1 == Global_30658[0])
	{
		return Function_472(&Global_6501, &Global_7490, bParam3);
	}
	if (bVar1 == Global_30658[1])
	{
		return Function_472(&Global_6402, &Global_7343, bParam3);
	}
	if (bVar1 == Global_30658[3])
	{
		return Function_472(&Global_6433, &Global_7389, bParam3);
	}
	if (bVar1 == Global_30658[2])
	{
		return Function_472(&Global_6490, &Global_7474, bParam3);
	}
	if (bVar1 == Global_30658[4])
	{
		return Function_472(&Global_6537, &Global_7543, bParam3);
	}
	if (bVar1 == Global_30668[0])
	{
		return Function_472(&Global_6563, &Global_7581, bParam3);
	}
	if (bVar1 == Global_30668[1])
	{
		return Function_472(&Global_6614, &Global_7657, bParam3);
	}
	if (bVar1 == Global_30668[2])
	{
		return Function_472(&Global_6643, &Global_7700, bParam3);
	}
	if (bVar1 == Global_30679[1])
	{
		return Function_472(&Global_6667, &Global_7735, bParam3);
	}
	if (bVar1 == Global_30685[0])
	{
		return Function_472(&Global_6709, &Global_7797, bParam3);
	}
	if (bVar1 == Global_30685[1])
	{
		return Function_472(&Global_6764, &Global_7879, bParam3);
	}
	if (bVar1 == Global_30685[2])
	{
		return Function_472(&Global_6785, &Global_7910, bParam3);
	}
	if (bVar1 == Global_30693[0])
	{
		return Function_472(&Global_6815, &Global_7954, bParam3);
	}
	if (bVar1 == Global_30707[2])
	{
		return Function_472(&Global_6933, &Global_8129, bParam3);
	}
	if (bVar1 == Global_30707[1])
	{
		return Function_472(&Global_6962, &Global_8172, bParam3);
	}
	if (bVar1 == Global_30707[3])
	{
		return Function_472(&Global_6987, &Global_8209, bParam3);
	}
	if (bVar1 == Global_30628[0])
	{
		return Function_472(&Global_6391, &Global_7327, bParam3);
	}
	if (bVar1 == Global_30628[1])
	{
		return Function_472(&Global_6532, &Global_7536, bParam3);
	}
	if (bVar1 == Global_30628[2])
	{
		return Function_472(&Global_6550, &Global_7562, bParam3);
	}
	if (bVar1 == Global_30628[3])
	{
		return Function_472(&Global_6704, &Global_7790, bParam3);
	}
	if (bVar1 == Global_30633[0])
	{
		return Function_472(&Global_6810, &Global_7947, bParam3);
	}
	if (bVar1 == Global_30633[2])
	{
		return Function_472(&Global_6928, &Global_8122, bParam3);
	}
	if (bVar1 == Global_30633[1])
	{
		return Function_472(&Global_7027, &Global_8268, bParam3);
	}
	return "";
}

var Function_472(var uParam0, var uParam1, bool bParam2) //Position: 0x13785 / 79749
{
	int iVar0;
	
	iVar0 = bParam2;
	if (iVar0 <= *uParam0 || iVar0 > 0)
	{
		return "";
	}
	if (!Function_473(uParam0[iVar02], 2))
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

bool Function_473(var uParam0, int iParam1) //Position: 0x137D7 / 79831
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_474(int iParam0) //Position: 0x137F3 / 79859
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
			if (Function_475(GET_SQUAD_FROM_OBJECT(bVar2)) == iParam0)
			{
				iVar0++;
			}
			bVar2 = OBJECT_ITERATOR_NEXT(bVar1);
		}
	}
	DESTROY_ITERATOR(bVar1);
	return iVar0;
}

int Function_475(bool bParam0) //Position: 0x1384E / 79950
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return 4294967295;
	}
	bVar0 = Function_257(bParam0);
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

bool Function_476(var uParam0, float fParam1, int iParam2, bool bParam3) //Position: 0x13886 / 80006
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
	Function_477(4294967295);
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
			else if (Function_201(uParam0, &uVar0) > fVar5)
			{
				return 0;
			}
		}
		iVar3++;
	}
	return 1;
}

int Function_477(bool bParam0) //Position: 0x13956 / 80214
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
						Function_478(iVar0);
					}
					else if (Global_3386)
					{
						if (Function_302(StackVal, StackVal, Global_34573, vVar1) < 25.0f)
						{
							Function_478(iVar0);
						}
					}
					else if (Function_302(StackVal, StackVal, Global_34573, vVar1) < 55.0f)
					{
						Function_478(iVar0);
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
			Function_478(iVar0);
		}
		iVar0++;
	}
	return 0;
}

void Function_478(int iParam0) //Position: 0x13AB7 / 80567
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

bool Function_479(vector3 vParam0) //Position: 0x13B18 / 80664
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

int Function_480(vector3 vParam0) //Position: 0x13BB9 / 80825
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

bool Function_481(vector3 vParam0) //Position: 0x13C05 / 80901
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

bool Function_482(vector3 vParam0) //Position: 0x13C5E / 80990
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

int Function_483(int iParam0) //Position: 0x13CCF / 81103
{
	float fVar0;
	bool bVar1;
	
	Function_361(&fVar0, &bVar1);
	AMBIENT_RESET_FILTER(0);
	AMBIENT_SET_SEARCH_CENTER_PLAYER();
	AMBIENT_SET_DISTANCE_FILTER(fVar0, bVar1);
	Function_438(0);
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
		Function_435(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 64 + 60));
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
	Function_434(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 64 + 60));
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

int Function_484(int iParam0, vector3 vParam1) //Position: 0x13E6A / 81514
{
	AMBIENT_RESET_FILTER(0);
	AMBIENT_SET_SEARCH_CENTER(vParam1);
	if (Global_30842[34])
	{
		PRINTVECTOR(vParam1);
		PRINTNL();
	}
	Function_485();
	Function_438(0);
	Function_436(0);
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
		Function_435(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 64 + 60));
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
	Function_434(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(iParam0 + 64 + 60));
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

void Function_485() //Position: 0x1400E / 81934
{
	AMBIENT_SET_DISTANCE_FILTER(0.0f, 24.0f);
	return;
}

vector3 Function_486(var uParam0, int iParam1) //Position: 0x1401D / 81949
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
	
	bVar10 = START_CURVE_QUERY(Global_28841, *uParam0, 6,726233E-44f, 0.0f, 7.0f, 5.0f, 0);
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
		Function_274(&iVar25);
		vVar19 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*uParam0, Function_274(&iVar25), StackVal) };
		Function_274(&iVar31);
		vVar22 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(*uParam0, Function_274(&iVar31), StackVal) };
		fVar15 = VDOT(&vVar16, &vVar19);
		fVar14 = VDOT(&vVar16, &vVar22);
		Function_361(&fVar7, &fVar8);
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
			Function_274(&iVar31);
			vVar11 = { StackVal, StackVal, Function_274(&iVar31) };
		}
		else
		{
			UNK_0x19D652F9(bVar6, fVar9, &uVar0, &iVar25);
			Function_274(&iVar25);
			vVar11 = { StackVal, StackVal, Function_274(&iVar25) };
		}
	}
	UNK_0xDF93BD7C(bVar10);
	return StackVal, StackVal, vVar11;
}

var Function_487(bool bParam0, vector3 vParam1, float fParam4, bool bParam5, var uParam6) //Position: 0x1412A / 82218
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
						if (Function_476(&vVar5, &fVar4, 0, 0))
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

var Function_488(bool bParam0, vector3 vParam1, float fParam4) //Position: 0x141D2 / 82386
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
				if (Function_476(&vVar5, &uVar4, 0, 0))
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

var Function_489() //Position: 0x1425B / 82523
{
	float fVar0;
	int iVar1;
	
	if (Global_3371)
	{
		return 0.0f;
	}
	Function_361(&fVar0, &iVar1);
	if (fVar0 >= 50.0f)
	{
		return (fVar0 - 10.0f);
	}
	return (fVar0 - 20.0f);
}

var Function_490(bool bParam0, vector3 vParam1, float fParam4, bool bParam5, var uParam6) //Position: 0x1428C / 82572
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

var Function_491(bool bParam0, vector3 vParam1, float fParam4) //Position: 0x14321 / 82721
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

int Function_492(bool bParam0, int iParam1) //Position: 0x1439E / 82846
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
	Function_477(DECOR_GET_INT(*bParam0, "script"));
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
		}
		else
		{
			Function_493(iVar0, bParam0, &uVar1, iParam1);
			return 1;
		}
		iVar0++;
	}
	LOG_ERROR("No room to add another volume... this really shouldn't happen tell steve");
	RELEASE_VOLUME(*bParam0);
	return 0;
}

void Function_493(int iParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x144FF / 83199
{
	struct<8> Var0;
	
	Global_26155[iParam05].f_8 = *uParam1;
	Global_26155[iParam05].f_16 = GET_CURRENT_GAME_TIME();
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_282("stayout") };
	Global_26155[iParam05].f_12 = CREATE_VOLUME_IN_LAYOUT(Global_26150, &Var0, 3, *iParam2, 0.0f, 0.0f, 0.0f, 12.0f, 5.0f, 12.0f);
	ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(Global_26155[iParam05].f_12, 0);
	ADD_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(Global_26155[iParam05].f_12);
	if (bParam3)
	{
		Global_26155[iParam05].f_4 = ADD_BLIP_FOR_COORD(iParam2, 403, 0, 2, 0);
		SET_BLIP_BLINK(StackVal, 1, 1, 20.0f);
	}
}

var Function_494(bool bParam0, vector3 vParam1) //Position: 0x1459A / 83354
{
	vector3 vVar0;
	var uVar3;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		GET_POSITION(bParam0, &vVar0);
		Function_495(StackVal, StackVal, StackVal, StackVal, vVar0, vParam1, &uVar3);
		return UNK_0x9C40E671(&uVar3);
	}
	return 0.0f;
}

void Function_495(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x145CA / 83402
{
	*uParam6 = { (GET_X(&uParam3) - GET_X(&uParam0)), 0.0f, (GET_Z(&uParam3) - GET_Z(&uParam0)) };
}

void Function_496(bool bParam0, int iParam1) //Position: 0x145ED / 83437
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

bool Function_497(int iParam0) //Position: 0x14613 / 83475
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_502();
	iVar1 = 0;
	if (!Function_93(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_501(iParam0[iVar03], 8);
		}
		else if (Function_500())
		{
			iVar1 = 1;
			Function_501(iParam0[iVar03], 8);
		}
		Function_501(iParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_93(iParam0[iVar03], 4))
		{
			if (!Function_93(iParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*iParam0)[iVar03], (Function_93(iParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*iParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], true, (Function_93(iParam0[03], 8) || iVar1));
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
				Function_501(iParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_93(iParam0[iVar03], 4))
		{
			if (!Function_93(iParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*iParam0)[iVar03]))
						{
							Function_501(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_501(iParam0[iVar03], 2);
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
							Function_501(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_501(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_501(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_501(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_501(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_501(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_501(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_501(iParam0[iVar03], 2);
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
	Function_498();
	return 1;
}

void Function_498() //Position: 0x1498E / 84366
{
	if (!Function_499(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_499(int iParam0) //Position: 0x149CE / 84430
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_500() //Position: 0x149EA / 84458
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

void Function_501(var uParam0, int iParam1) //Position: 0x14A15 / 84501
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_502() //Position: 0x14A26 / 84518
{
	if (!Function_499(128))
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

void Function_503(var uParam0, int iParam1) //Position: 0x14A68 / 84584
{
	if (iParam1 >= 0 || iParam1 < 6)
	{
		LOG_ERROR("Cannot initialize numberOfTravelers <=0 or > CONST_MAtkDefMaxNumTravelers");
	}
	uParam0->f_1248 = iParam1;
	return;
}

void Function_504(var uParam0, int iParam1) //Position: 0x14AD0 / 84688
{
	if (iParam1 >= 0 || iParam1 < 4)
	{
		LOG_ERROR("Cannot initialize iNumberOfAttackers <=0 or > CONST_MAtkDefMaxNumAttackers");
	}
	uParam0->f_1528 = iParam1;
	return;
}

int Function_505(int iParam0, int iParam1) //Position: 0x14B39 / 84793
{
	if (!Function_395(iParam1))
	{
		LOG_ERROR("MATKDEF_SET_VEHICLE_TEMPLATE - Invalid vehicleTemplate");
		return 0;
	}
	iParam0->f_976 = iParam1;
	Function_506(iParam0 + 636, iParam0->f_976, 3, 0);
	return 1;
}

var Function_506(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x14B9E / 84894
{
	int iVar0;
	
	iParam2 = iParam2;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_93(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = 3;
			Function_501(uParam0[iVar03], 4);
			if (bParam3)
			{
				Function_501(uParam0[iVar03], 8);
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

void Function_507(bool bParam0, int iParam1, int iParam2) //Position: 0x14C6E / 85102
{
	if (!Function_395(iParam1))
	{
		LOG_ERROR("MATKDEF_ADD_ATTACKER_TEMPLATE - Invalid attackerTemplate");
	}
	if (iParam2 > 0 || iParam2 <= 4)
	{
	}
	if ((*bParam0 + 1480)[iParam2] != 0 || !Function_395((*bParam0 + 1480)[iParam2]))
	{
		(*bParam0 + 1480)[iParam2] = iParam1;
		Function_506(bParam0 + 636, iParam1, 3, 0);
	}
	return;
}

bool Function_508() //Position: 0x14CFE / 85246
{
	return (RAND_INT_RANGE(false, 1999) / 1000) != 0;
}

void Function_509(bool bParam0, int iParam1, int iParam2) //Position: 0x14D11 / 85265
{
	if (!Function_395(iParam1))
	{
		LOG_ERROR("MATKDEF_ADD_TRAVELER_TEMPLATE - Invalid travelerTemplate");
	}
	if (iParam2 > 0 || iParam2 <= 6)
	{
	}
	else if ((*bParam0 + 1216)[iParam2] != 0 || !Function_395((*bParam0 + 1216)[iParam2]))
	{
		(*bParam0 + 1216)[iParam2] = iParam1;
		Function_506(bParam0 + 636, iParam1, 3, 0);
	}
	return;
}

var Function_510(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x14DA4 / 85412
{
	int iVar0;
	bool bVar1;
	
	if (Global_30842[32])
	{
	}
	bVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_511(uParam0, bVar1, iParam2);
	if (bParam3)
	{
		Function_501(uParam0[iVar03], 8);
	}
	return iVar0;
}

var Function_511(var uParam0, int iParam1, int iParam2) //Position: 0x14DDC / 85468
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_93(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_501(uParam0[iVar03], 4);
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

int Function_512(char* cParam0) //Position: 0x14EA0 / 85664
{
	int iVar0[3];
	int iVar4;
	
	if (Function_340(0))
	{
		iVar0[0] = "Pass";
		iVar0[1] = "Fail";
		iVar0[2] = "Cancel";
		iVar4 = Function_326(cParam0 + 588, &iVar0, "RDR MISSION MENU - Moving Attack-Defend", GET_DEBUG_PADINDEX(), 0);
		if (iVar4 == 0)
		{
			Function_112();
			Function_362(cParam0, 11);
		}
		else if (iVar4 == 1)
		{
			Function_112();
			Function_362(cParam0, 12);
		}
		else if (iVar4 == 2)
		{
			Function_362(cParam0, 10);
			Function_112();
		}
		return 1;
	}
	return 0;
}

bool Function_513(vector3 vParam0) //Position: 0x14F4E / 85838
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

void Function_514(bool bParam0, int iParam1, bool bParam2) //Position: 0x14F66 / 85862
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
		Function_517(bParam0->f_1212);
	}
	if (SQUAD_IS_VALID((bParam0 + 1256)->f_60))
	{
		Function_517((bParam0 + 1256)->f_60);
	}
	if (IS_VOLUME_VALID(bParam0->f_968))
	{
		Function_516(bParam0->f_968);
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
			switch (Function_231(bParam0))
			{
				case 0x00000001:
					if (SQUAD_IS_VALID(bParam0->f_1212))
					{
						Function_515(bParam0->f_1212, 325, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
					}
					if (SQUAD_IS_VALID((bParam0 + 1256)->f_60))
					{
						Function_515((bParam0 + 1256)->f_60, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
					}
					break;
				
				case 0x00000002:
					if (SQUAD_IS_VALID(bParam0->f_1212))
					{
						Function_515(bParam0->f_1212, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
					}
					if (SQUAD_IS_VALID((bParam0 + 1256)->f_60))
					{
						Function_515((bParam0 + 1256)->f_60, 325, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
					}
					break;
				
				case 0x00000000:
					if (bParam0->f_916 == 1)
					{
						if (IS_ACTOR_VALID(bParam0->f_972))
						{
							ADD_BLIP_FOR_ACTOR(bParam0->f_972, 387, 0, 2, 0);
							Function_232(bParam0, 1);
						}
					}
					else
					{
						if (SQUAD_IS_VALID(bParam0->f_1212))
						{
							Function_515(bParam0->f_1212, 325, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
						}
						if (SQUAD_IS_VALID((bParam0 + 1256)->f_60))
						{
							Function_515((bParam0 + 1256)->f_60, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
						}
						if (bParam0->f_912 == 0)
						{
							Function_232(bParam0, 1);
							Function_230(bParam0, "pm_mad_side", 1);
							bParam0->f_912 = 1;
						}
					}
					break;
				
				case 0x00000003:
					if (SQUAD_IS_VALID(bParam0->f_1212))
					{
						Function_515(bParam0->f_1212, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
					}
					if (SQUAD_IS_VALID((bParam0 + 1256)->f_60))
					{
						Function_515((bParam0 + 1256)->f_60, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
					}
					break;
				}
			}
	}
	return;
}

void Function_515(bool bParam0, bool bParam1, int iParam2, float fParam3, float fParam4, float fParam5, int iParam6, bool bParam7) //Position: 0x151D2 / 86482
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

int Function_516(bool bParam0) //Position: 0x152BC / 86716
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

void Function_517(bool bParam0) //Position: 0x152E7 / 86759
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

void Function_518(bool bParam0) //Position: 0x15334 / 86836
{
	Global_12976.f_20 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 20, 0, 0, bParam0, 0);
	return;
}

void Function_519(int iParam0) //Position: 0x1534F / 86863
{
	Global_12976.f_4 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 4, 0, 0, (iParam0 + Function_347(105)), 0);
	return;
}

void Function_520(int iParam0) //Position: 0x15370 / 86896
{
	Global_12976.f_12 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 12, 0, 0, (iParam0 + Function_347(90)), 0);
	return;
}

int Function_521(int iParam0, int iParam1) //Position: 0x15391 / 86929
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
	if (!IS_EARLIER_THAN(StackVal, false) && iParam1 != 0)
	{
		return 0;
	}
	return 1;
}

