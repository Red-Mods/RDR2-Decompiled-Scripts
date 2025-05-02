//Decompiled with MagicRDR v1.0
//Function Count : 529
//Statics Count : 710
//Natives Count : 525
//Parameters Count : 62

#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = 2;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	struct<1465> Local_29 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main() //Position: 0x0 / 0
{
	struct<2> Var1;
	struct<2> Var5;
	var uVar15;
	int iVar16;
	bool bVar17;
	int iVar18;
	bool bVar19;
	int iVar20;
	var uVar21;
	bool bVar22;
	int iVar23;
	bool bVar24;
	var uVar25;
	int iVar26;
	float fVar27;
	var uVar28;
	
	iLocal_18 = 0;
	iLocal_19 = 0;
	iLocal_638 = 0;
	iLocal_639 = 0;
	iLocal_644 = 0;
	iLocal_645 = 0;
	iLocal_646 = 0;
	iLocal_647 = 0;
	bVar24 = false;
	iVar26 = 0;
	iLocal_27 = 0;
	bVar19 = (Function_528(1, 0) || ScriptParam_0.f_44 != 1);
	if (bVar19)
	{
		Function_527(0);
		Function_526(0);
		Function_525(12);
		iLocal_27 = 0;
	}
	else
	{
		Function_521(&Local_29, 0, 0);
		iLocal_27 = 5;
	}
	Local_29.f_1096 = 0;
	while (!IS_EXITFLAG_SET())
	{
		if (IS_ACTOR_VALID(&Local_29 + 1576))
		{
			GET_POSITION(&Local_29 + 1576, &Var1);
		}
		else
		{
			Var1 = Vector(0.0f, 0.0f, 0.0f);
		}
		Var5 = Vector(0.0f, 0.0f, 0.0f);
		if ((iLocal_27 < 0 && iLocal_27 > 3) && IS_EARLIER_THAN(&uLocal_636, GET_TIME_OF_DAY()))
		{
			if (Function_520(StackVal, Var1))
			{
				Var5 = *(&ScriptParam_0 + 16);
			}
			else
			{
				Var5 = Var1;
			}
			if (VDIST(Global_54078, Var5) < 75.0f && !WOULD_ACTOR_BE_VISIBLE(false, &Var5, 3212836864))
			{
				Function_521(&Local_29, 0, 0);
				iLocal_27 = 5;
			}
		}
		else if (Global_6623 != 1 && ScriptParam_0.f_44 != 0)
		{
			Function_521(&Local_29, 0, 0);
			iLocal_27 = 5;
		}
		if (iLocal_27 > 3)
		{
			Function_519(&Local_29);
		}
		switch (iLocal_27)
		{
			case 0x00000000:
				if (iLocal_638 == 0)
				{
					Function_517(&Local_29 + 1104, "procmissions", 10, 0);
					Function_517(&Local_29 + 1104, "stats", 10, 0);
					Function_517(&Local_29 + 1104, "$/content/scripting/gringo/simplegringo/shakehands_link", 1, 0);
					Function_517(&Local_29 + 1104, "nthank_you", 5, 0);
					Function_517(&Local_29 + 1104, "custom/thank_you", 8, 0);
					switch (Global_43787)
					{
						case 0x00000000:
						case 0x00000002:
							Function_516(&Local_29, 142, 0);
							Function_516(&Local_29, 155, 1);
							Function_516(&Local_29, 229, 2);
							Function_516(&Local_29, 114, 3);
							Function_516(&Local_29, 112, 4);
							break;
						
						case 0x00000001:
							Function_516(&Local_29, 284, 0);
							Function_516(&Local_29, 285, 1);
							Function_516(&Local_29, 267, 2);
							Function_516(&Local_29, 277, 3);
							Function_516(&Local_29, 304, 4);
							Function_516(&Local_29, 34, 5);
							break;
					}
					switch (Global_43787)
					{
						case 0x00000000:
							if (Function_515())
							{
								if (Global_43788 == Global_46736[2])
								{
									Function_514(&Local_29, 479, 0);
									Function_514(&Local_29, 480, 1);
									Function_514(&Local_29, 481, 2);
									Function_514(&Local_29, 483, 3);
								}
								else if (Global_43788 != Global_46736[0] || Global_43788 != Global_46736[3])
								{
									Function_514(&Local_29, 486, 0);
									Function_514(&Local_29, 490, 1);
									Function_514(&Local_29, 491, 2);
									Function_514(&Local_29, 492, 3);
								}
								else if (Global_43788 == Global_46736[1])
								{
									Function_514(&Local_29, 505, 0);
									Function_514(&Local_29, 509, 1);
									Function_514(&Local_29, 510, 2);
									Function_514(&Local_29, 513, 3);
								}
							}
							else
							{
								Function_514(&Local_29, 398, 0);
								Function_514(&Local_29, 397, 1);
								Function_514(&Local_29, 401, 2);
								Function_514(&Local_29, 403, 3);
							}
							break;
						
						case 0x00000001:
							if (Function_515())
							{
								Function_514(&Local_29, 496, 0);
								Function_514(&Local_29, 500, 1);
								Function_514(&Local_29, 499, 2);
								Function_514(&Local_29, 502, 3);
							}
							else
							{
								Function_514(&Local_29, 406, 0);
								Function_514(&Local_29, 407, 1);
								Function_514(&Local_29, 410, 2);
								Function_514(&Local_29, 411, 3);
							}
							break;
						
						case 0x00000002:
							if (Function_515())
							{
								Function_514(&Local_29, 467, 0);
								Function_514(&Local_29, 468, 1);
								Function_514(&Local_29, 471, 2);
								Function_514(&Local_29, 474, 3);
							}
							else
							{
								Function_514(&Local_29, 416, 0);
								Function_514(&Local_29, 419, 1);
								Function_514(&Local_29, 420, 2);
								Function_514(&Local_29, 423, 3);
							}
							break;
					}
					Function_512(&Local_29, 1177);
					Function_511(&Local_29, 4);
					Function_510(&Local_29, 6);
					iLocal_638 = 1;
				}
				if (iLocal_638 == 1)
				{
					if (Function_504(&Local_29 + 1104))
					{
						uLocal_636 = GET_TIME_OF_DAY();
						ADD_TIME(&uLocal_636, 0, 0, 8, 0);
						Function_503(&Local_29, 0);
						iLocal_27 = 1;
					}
				}
				break;
			
			case 0x00000001:
				if (ScriptParam_0.f_72 == 0)
				{
					ScriptParam_0.f_72 = 3;
				}
				if (!Function_520(StackVal, *(&ScriptParam_0 + 16)))
				{
					iVar20 = 1;
				}
				else if (Function_473(&ScriptParam_0, &iVar16, &uVar15, &iVar18, 1))
				{
					iVar20 = 1;
				}
				else if (iVar18 == 1)
				{
					iLocal_27 = 5;
				}
				Function_503(&Local_29, iVar16);
				if (iVar20 != 1 && iLocal_27 > 5)
				{
					Function_472(StackVal, &Local_29, *(&ScriptParam_0 + 16));
					if (Function_470(&Local_29))
					{
						if (Function_375(&Local_29))
						{
							Function_369(&Local_29, 1);
							Function_369(&Local_29, 3);
							Function_503(&Local_29, 200);
							iLocal_27 = 2;
						}
						else
						{
							iLocal_27 = 5;
						}
					}
					if (Local_29.f_1464 == 1)
					{
						if (!Function_520(StackVal, *(&ScriptParam_0 + 16)) && iLocal_27 > 5)
						{
							if (VDIST(Global_54078, *(&ScriptParam_0 + 16)) < Function_367(1))
							{
								iLocal_27 = 5;
							}
							else
							{
								iLocal_27 = 2;
							}
						}
					}
				}
				break;
			
			case 0x00000002:
				Function_362(&Local_29);
				Function_503(&Local_29, 0);
				iLocal_27 = 3;
				break;
			
			case 0x00000003:
				Function_361();
				Function_349(StackVal, Function_361(), &uVar21, ScriptParam_0.f_64, &Local_29 + 1576, 100, 0x42a00000, 1);
				iLocal_28 = Function_242(&Local_29);
				Function_503(&Local_29, 0);
				switch (iLocal_28)
				{
					case 0x00000000:
						break;
					
					case 0x00000001:
						Function_369(&Local_29, 2);
						Function_369(&Local_29, 4);
						break;
					
					case 0x00000002:
						Function_369(&Local_29, 2);
						Function_369(&Local_29, 4);
						break;
					
					case 0x00000003:
						Function_369(&Local_29, 9);
						break;
					
					case 0x0000000A:
						if (iLocal_639 == 0)
						{
							if (Function_241(&Local_29) == 1)
							{
								Function_240(&Local_29, 1);
								if (Function_239(&Local_29) == 1)
								{
									Function_238(&Local_29, "pm_mad_vfar1", 1);
								}
								else
								{
									Function_238(&Local_29, "pm_mad_vfar2", 1);
								}
							}
							iLocal_639 = 1;
						}
						break;
					
					case 0x0000000B:
						if (Function_234(&Local_29 + 1408, 30.0f))
						{
							if (Function_241(&Local_29) == 1)
							{
								Function_369(&Local_29, 7);
							}
							else
							{
								Function_369(&Local_29, 10);
							}
						}
						break;
					
					case 0x0000000C:
						Function_240(&Local_29, 1);
						if (Function_241(&Local_29) == 1)
						{
							if (Function_239(&Local_29) == 2)
							{
								Function_238(&Local_29, "pm_mad_failb", 1);
								Function_230(5, 5000);
								Function_228(StackVal, 50);
								Function_369(&Local_29, 9);
							}
							else if (Function_239(&Local_29) == 1)
							{
								Function_227(&Local_29);
								Function_369(&Local_29, 8);
							}
						}
						else
						{
							Function_238(&Local_29, "pm_mad_failn", 1);
							Function_369(&Local_29, 10);
						}
						break;
					
					case 0x0000000D:
						Function_227(&Local_29);
						Function_369(&Local_29, 8);
						break;
					
					case 0x00000010:
						Function_225(&Local_29);
						if (Function_239(&Local_29) == 1)
						{
							Function_369(&Local_29, 9);
						}
						else if (Function_239(&Local_29) == 2)
						{
						}
						else
						{
							Function_369(&Local_29, 10);
						}
						break;
					
					case 0x0000000F:
						Function_225(&Local_29);
						if (Function_239(&Local_29) == 2)
						{
							Function_369(&Local_29, 9);
						}
						else if (Function_239(&Local_29) == 1)
						{
							Function_227(&Local_29);
							Function_369(&Local_29, 8);
						}
						else
						{
							Function_369(&Local_29, 10);
						}
						break;
					
					case 0x0000000E:
						Function_369(&Local_29, 6);
						if (Function_241(&Local_29) == 1)
						{
							Function_369(&Local_29, 9);
						}
						else
						{
							Function_369(&Local_29, 10);
						}
						break;
					
					case 0x00000004:
						Function_369(&Local_29, 10);
						break;
					
					case 0x00000009:
						Function_369(&Local_29, 9);
						break;
					
					case 0x00000005:
					case 0x00000008:
					case 0x00000007:
					case 0x00000006:
						Function_369(&Local_29, 9);
						break;
					
					default:
						LOG_ERROR("UNHANDLED MATKDEF STATUS");
						break;
				}
				break;
			
			case 0x00000005:
				if (iLocal_644 == 0)
				{
					Function_216(&Local_29, 0, 0);
					Function_521(&Local_29, 0, 0);
					if (Function_239(&Local_29) != 2 && iLocal_635 != 2)
					{
						iLocal_645 = 1;
					}
					else
					{
						iLocal_645 = 0;
					}
					if (iLocal_645 == 0)
					{
						Function_211(1);
						iLocal_647 = 1;
						Function_210(&iLocal_640);
					}
					iLocal_644 = 1;
				}
				else if (iLocal_647 == 0)
				{
					if (iLocal_646 == 0)
					{
						if (iLocal_645 == 1)
						{
							Function_206(&Local_29);
							Function_205(&Local_29 + 2344);
							if (VDIST(Global_54078, Function_205(&Local_29 + 2344)) > 60.0f)
							{
								bVar22 = true;
								Function_195(&Local_29 + 2344, &Global_54076, &fVar27, &iVar26, &uVar28, &Local_29 + 1368, 10.0f, &bVar24, &uVar25, &Local_29 + 1492, "nthank_you", "nthank_you", "", "", 30.0f, 2, -7,5f, 0, 4.0f, 1, 0, 0, 1, 0, 0x40800000);
							}
							else
							{
								Function_141(&Local_29, 0);
							}
							iLocal_646 = 1;
						}
						else
						{
							LOG_ERROR("mAtkDef: Unexpected state in EVENT_ENDING");
							Function_211(1);
							iLocal_647 = 1;
							Function_210(&iLocal_640);
						}
					}
					if (iLocal_646 == 1)
					{
						if (Function_138(&Local_29))
						{
							Function_369(&Local_29, 9);
							Function_134(&Local_29);
							Function_133(&Local_29 + 1960 + 80, 1);
							Function_132(&Local_29 + 1960 + 80, &Global_54076, 4);
							Function_131(&Local_29 + 1960 + 80, &Global_54076);
							bVar17 = false;
							while (bVar17 <= SQUAD_GET_SIZE(&Local_29 + 1960 + 80))
							{
								Function_130(SQUAD_GET_ACTOR_BY_INDEX(&Local_29 + 1960 + 80, bVar17), &Global_54076);
								bVar17++;
							}
							Function_211(1);
							iLocal_647 = 1;
							iVar23 = 1;
							Function_210(&iLocal_640);
						}
						else if (bVar24 || !bVar22)
						{
							if (GET_TASK_STATUS(&Local_29 + 2336, 0) == 0)
							{
								Function_210(&iLocal_640);
								Function_211(bVar22);
								iLocal_647 = 1;
							}
						}
						else if (Function_195(&Local_29 + 2344, &Global_54076, &fVar27, &iVar26, &uVar28, &Local_29 + 1368, 10.0f, &bVar24, &uVar25, &Local_29 + 1492, "nthank_you", "nthank_you", "", "", 30.0f, 2, -5.0f, 0, 4.0f, 1, 0, 0, 1, 0, 0x40800000))
						{
							if (bVar24)
							{
								if (GET_TASK_STATUS(&Local_29 + 2336, 0) == 0)
								{
									Function_210(&iLocal_640);
									Function_211(1);
									iLocal_647 = 1;
								}
								else
								{
									TASK_WANDER(&Local_29 + 2344, -1.0f);
								}
							}
						}
					}
				}
				else if (Function_234(&iLocal_640, 3.0f))
				{
					Function_240(&Local_29, 1);
					Function_129(&Local_29, 1, 1);
					Function_216(&Local_29, 0, 0);
					Function_503(&Local_29, 0);
					Function_527(0);
					iLocal_27 = 6;
				}
				break;
			
			case 0x00000006:
				TERMINATE_SCRIPT(GET_THIS_SCRIPT_ID());
				break;
		}
		WAIT(Function_127(&Local_29));
	}
	if (iLocal_635 != 2 || iVar23)
	{
		Function_1(&Local_29, 0, 1);
	}
	else
	{
		Function_1(&Local_29, 0, 0);
	}
	REM_PLAYER_CONTROL_HORSE_FOLLOW(0, &Local_29 + 1576);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(struct<1461> Param0) //Position: 0xAC3 / 2755
{
	if (Function_126())
	{
		Function_119();
	}
	Function_521(&Param0, 0, 0);
	Function_105(&Param0, iParam1, &iParam2);
	Function_101(&Param0, iParam1);
	if (IS_VOLUME_VALID(&Param0 + 1568))
	{
		RELEASE_VOLUME(&Param0 + 1568);
	}
	if (IS_ACTORSET_VALID(&Param0 + 2352))
	{
		DESTROY_ACTORSET(&Param0 + 2352);
	}
	SET_NPC_TO_NPC_DAMAGE_SCALE_FACTOR(1.0f);
	Function_97(&Param0 + 1104);
	Function_95(1);
	Function_95(4);
	Function_87(&Param0);
	Function_2(&Param0);
	RELEASE_LAYOUT_OBJECTS(&Param0 + 1368);
	if (Param0.f_1460 == 1)
	{
		DESTROY_LAYOUT(&Param0 + 1368);
	}
	else
	{
		RELEASE_LAYOUT_REF(&Param0 + 1368);
	}
	return;
}

void Function_2(struct<1093> Param0) //Position: 0xB68 / 2920
{
	if (IS_BLIP_VALID(&Param0 + 48))
	{
		REMOVE_BLIP(&Param0 + 48);
	}
	if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(&Global_54076), "procstop"))
	{
		DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&Global_54076), "procstop");
	}
	if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(&Global_54076), "procRideObj"))
	{
		DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&Global_54076), "procRideObj");
	}
	if (Param0.f_984 == 5)
	{
		if (Function_86(Param0.f_1048, 32768))
		{
			Function_85(256);
		}
	}
	Function_84();
	Function_82(1);
	if (Function_86(Param0.f_1048, 32))
	{
		if (Function_80(Param0.f_1092))
		{
			switch (Param0.f_1088)
			{
				case 0x00000002:
					Function_21(Param0.f_1092, 1, 0, 0);
					break;
				
				case 0x00000003:
					Function_18(Param0.f_1092);
					break;
				
				default:
					Function_9(Param0.f_1092);
					break;
				}
			}
	}
	if (SQUAD_IS_VALID(&Param0 + 1024))
	{
		Function_3(&Param0, 0);
	}
	if (IS_VOLUME_VALID(&Param0 + 944))
	{
		DESTROY_VOLUME(&Param0 + 944);
	}
	if (IS_OBJECTSET_VALID(&Param0 + 992))
	{
		DESTROY_OBJECTSET(&Param0 + 992);
	}
	if (IS_LAYOUTREF_VALID(&Param0 + 32))
	{
		RELEASE_LAYOUT_OBJECTS(&Param0 + 32);
		DESTROY_LAYOUT(&Param0 + 32);
	}
	if (Function_86(Param0.f_1048, 64))
	{
		Global_21575 = 0;
	}
	if (Function_86(Param0.f_1048, 16))
	{
		Global_6625 = 0;
	}
	return;
}

void Function_3(int iParam0, bool bParam1) //Position: 0xCE8 / 3304
{
	if (SQUAD_IS_VALID(&iParam0 + 1024))
	{
		Function_8(&iParam0 + 1024);
		Function_6(&iParam0 + 1024, 1, 0);
		if (&bParam1 == 1)
		{
			Function_5(&iParam0 + 1024);
			Function_8(&iParam0 + 1024);
			Function_4(&iParam0 + 1024, &Global_54076, -1.0f, -1.0f, 0, 1);
		}
		Function_6(&iParam0 + 1024, 0, 0);
		SQUAD_MAKE_EMPTY(&iParam0 + 1024);
		DESTROY_OBJECT(&iParam0 + 1024);
	}
	return;
}

void Function_4(var uParam0, var uParam1, float fParam2, float fParam3, int iParam4, bool bParam5) //Position: 0xD5F / 3423
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	if (!IS_ACTOR_VALID(&uParam1))
	{
		return;
	}
	if (SQUAD_GET_SIZE(&uParam0) < 0)
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&uParam0))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			TASK_CLEAR(&uVar1);
			TASK_FLEE_ACTOR(&uVar1, &uParam1, fParam2, fParam3, iParam4, 0, 0);
			TASK_PRIORITY_SET(&uVar1, bParam5);
		}
		bVar0++;
	}
}

void Function_5(int iParam0) //Position: 0xDD8 / 3544
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(&iParam0))
	{
		return;
	}
	bVar0 = false;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&iParam0) - 1))
	{
		MEMORY_CLEAR_ALL(SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0));
		bVar0++;
	}
	return;
}

void Function_6(var uParam0, bool bParam1, bool bParam2) //Position: 0xE10 / 3600
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&uParam0))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			SQUAD_LEAVE(&uVar1);
			if (&bParam2)
			{
				if (!Function_7(&uVar1, 0x3f800000, 0x42960000, 1, 1, 0))
				{
					DESTROY_ACTOR(&uVar1);
				}
			}
			if (IS_ACTOR_VALID(&uVar1))
			{
				if (&bParam1)
				{
					RELEASE_ACTOR_AS_AMBIENT(&uVar1);
				}
				else
				{
					RELEASE_ACTOR(&uVar1);
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

bool Function_7(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) //Position: 0xE99 / 3737
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &uParam0, &uParam1, &uParam2, &uParam3, &uParam4, &uParam5);
}

void Function_8(int iParam0) //Position: 0xEB9 / 3769
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(&iParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&iParam0) - 1))
	{
		TASK_CLEAR(SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0));
		bVar0++;
	}
	return;
}

void Function_9(int iParam0) //Position: 0xEEE / 3822
{
	int iVar0;
	
	if (!Function_80(iParam0))
	{
		Function_16();
		return;
	}
	iVar0 = Function_15(iParam0);
	Global_39873 = (GET_CURRENT_GAME_TIME() - 5.0f);
	if (StackVal == 2)
	{
		Function_10("DEED_CANCEL", iParam0);
	}
	Global_21684[iParam07].f_4 = 0;
	Global_6619 = 1;
	return;
}

void Function_10(var uParam0, int iParam1) //Position: 0xF41 / 3905
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
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, &Var0, Function_15(iParam1), Function_13(iParam1));
			break;
		
		case 0x00000002:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "PROCEDURAL", Function_15(iParam1), iParam1);
			break;
		
		case 0x00000003:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "LOCATION", Function_15(iParam1), iParam1);
			break;
		
		case 0x00000004:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "MINIGAME", Function_15(iParam1), iParam1);
			break;
		
		case 0x00000005:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "ACTIONAREA_EVENT", Function_15(iParam1), iParam1);
			break;
		
		case 0x00000006:
			PLAYSTAT_DEED_NAMED(StackVal, &uParam0, "JOB", Function_15(iParam1), iParam1);
			break;
		
		case 0x00000000:
			break;
	}
	return;
}

struct<16> Function_11(int iParam0) //Position: 0x106B / 4203
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

bool Function_12() //Position: 0x10A5 / 4261
{
	if (Function_86(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

int Function_13(int iParam0) //Position: 0x10C0 / 4288
{
	if (!Function_14(iParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[iParam07], 12) & 255;
}

bool Function_14(int iParam0) //Position: 0x10E0 / 4320
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_15(int iParam0) //Position: 0x10F7 / 4343
{
	if (!Function_14(iParam0))
	{
		return 0;
	}
	return Global_21684[iParam07] & 15;
}

void Function_16() //Position: 0x1112 / 4370
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
			Function_17(Global_21684[iVar07], &iVar18, &iVar19, &iVar20);
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

void Function_17(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x1359 / 4953
{
	uParam3 = iParam0 & 15;
	uParam1 = SHIFT_RIGHT(iParam0, 4) & 255;
	uParam2 = SHIFT_RIGHT(iParam0, 12) & 255;
}

void Function_18(int iParam0) //Position: 0x1385 / 4997
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
	Global_39873 = (GET_CURRENT_GAME_TIME() - 5.0f);
	Global_21684[iParam07].f_4 = 0;
	if (iVar0 == 1)
	{
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_20(Global_10966) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_19(Global_10966) };
		}
		uVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		CLEAR_JOURNAL_ENTRY(uVar11);
	}
	Global_6619 = 1;
	return;
}

struct<16> Function_19(int iParam0) //Position: 0x142B / 5163
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

struct<24> Function_20(char* cParam0) //Position: 0x146A / 5226
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

void Function_21(int iParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x16C0 / 5824
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
		Global_21684[iParam07].f_12++;
		if (Function_79())
		{
			PLAYSTAT_INT("HC_NONSTORY_DEED", bVar0);
		}
	}
	else
	{
		Global_10966 = Function_13(iParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_20(Global_10966) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_19(Global_10966) };
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
	*(&Global_21684[iParam07] + 40) = GET_TIME_OF_DAY();
	if (StackVal == 2)
	{
		Function_10("DEED_COMPLETE", iParam0);
	}
	if (&bParam1)
	{
		Global_39873 = GET_CURRENT_GAME_TIME();
	}
	if (StackVal && StackVal != 3 != 4)
	{
		if (&bParam3)
		{
			Global_21684[iParam07].f_4 = 4;
		}
		else
		{
			Global_21684[iParam07].f_4 = 3;
		}
		iVar12 = 1;
	}
	if (Global_6666)
	{
		Global_21684[iParam07].f_4 = 0;
	}
	if (iVar12 && !Global_6624)
	{
		if (!&bParam3)
		{
			Function_65(iParam0);
		}
		if (&bParam1)
		{
			if (&bParam2)
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
			Function_24(1);
			Function_23(&bParam2, iVar13);
		}
	}
	if (Global_6624 && bParam1)
	{
		*(&Var14 + 80) = 3;
		Var14.f_16 = 0;
		if (!&bParam3)
		{
			Function_22(iParam0, &Var14);
		}
		Var14.f_24 = 1;
		Var14 = Global_10966;
		Var14.f_20 = &bParam3;
		RESET_STORED_DATA();
		STORE_GAME_STATE(&Var14, 48, 1);
		if (!LOAD_SOFT_SAVE(0))
		{
			RESET_GAME();
		}
	}
	Global_6619 = 1;
}

void Function_22(int iParam0, struct<41> Param1) //Position: 0x191E / 6430
{
	Param1.f_28 = Global_21684[iParam07].f_20;
	Param1.f_32 = Global_21684[iParam07].f_24;
	Param1.f_36 = Global_21684[iParam07].f_28;
	Param1.f_40 = Global_21684[iParam07].f_32;
	return;
}

void Function_23(bool bParam0, int iParam1) //Position: 0x195C / 6492
{
	if (Global_6624)
	{
		return;
	}
	Global_6655 = bParam0;
	Global_6659 = iParam1;
	if (!Global_6606 && 1)
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", 1);
	return;
}

void Function_24(bool bParam0) //Position: 0x199B / 6555
{
	if ((Global_6638 || Global_6624) || Global_6639)
	{
		return;
	}
	Global_53524.f_24 = 4294967295;
	Function_56();
	Global_53524.f_28 = 0;
	Global_53524.f_32 = 1;
	*(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Function_26();
	SAVE_SOFT_SAVE(0);
	if (&bParam0)
	{
		Function_25(&Global_99144, 1);
		Function_25(&Global_99144, 2);
	}
	Global_140631 = 1;
	return;
}

void Function_25(int iParam0, int iParam1) //Position: 0x19F0 / 6640
{
	iParam0 = (iParam0 - (iParam0 && iParam1));
	return;
}

void Function_26() //Position: 0x1A06 / 6662
{
	Function_54();
	Function_53();
	Function_53();
	Function_52();
	Function_52();
	Function_51();
	Function_51();
	Function_34(0);
	Function_34(0);
	Function_31();
	Function_30();
	Function_29();
	Function_28();
	if (Global_116927[1996].f_24 != 1 || UI_HAS_CHEATED())
	{
		Global_116927[1996].f_24 = 1;
	}
	Function_27();
	return;
}

void Function_27() //Position: 0x1A51 / 6737
{
	Global_54086[372] = GET_SAGPLAYER_STAT_FLOAT(0);
	Global_54086[373] = GET_SAGPLAYER_STAT_FLOAT(1);
	Global_54086[374] = GET_SAGPLAYER_STAT_FLOAT(2);
	Global_54086[375] = GET_SAGPLAYER_STAT_FLOAT(3);
	Global_54086[376] = GET_SAGPLAYER_STAT_FLOAT(4);
	Global_54086[377] = GET_SAGPLAYER_STAT_FLOAT(5);
	Global_54086[378] = GET_SAGPLAYER_STAT_FLOAT(6);
	Global_54086[379] = GET_SAGPLAYER_STAT_INT(1);
	Global_54086[380] = GET_SAGPLAYER_STAT_INT(2);
	Global_54086[381] = GET_SAGPLAYER_STAT_FLOAT(7);
	Global_54086[382] = GET_SAGPLAYER_STAT_FLOAT(8);
	Global_54086[383] = GET_SAGPLAYER_STAT_FLOAT(9);
	Global_54086[385] = GET_SAGPLAYER_STAT_INT(0);
	Global_54086[387] = GET_SAGPLAYER_STAT_FLOAT(10);
	Global_54086[388] = GET_SAGPLAYER_STAT_FLOAT(11);
	Global_54086[394] = GET_SAGPLAYER_STAT_FLOAT(12);
	Global_54086[44] = GET_SAGPLAYER_STAT_INT(3);
	Global_54086[392] = GET_SAGPLAYER_STAT_INT(4);
	Global_54086[391] = GET_SAGPLAYER_STAT_INT(6);
	Global_54086[393] = GET_SAGPLAYER_STAT_INT(5);
	Global_54086[395] = GET_SAGPLAYER_STAT_INT(7);
	return;
}

void Function_28() //Position: 0x1B57 / 6999
{
	float fVar0;
	
	fVar0 = GET_PLAYER_DEADEYE_POINTS(0);
	if (Global_39290[1])
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
	Global_131716 = fVar0;
	return;
}

void Function_29() //Position: 0x1B8A / 7050
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
					Global_119632[iVar23] = iVar3;
					*(&Global_119632[iVar23] + 8) = GET_JOURNAL_ENTRY_MISC_FLAG(iVar3);
					*(&Global_119632[iVar23] + 16) = IS_JOURNAL_ENTRY_UPDATED(iVar3);
					iVar2++;
				}
			}
		}
		iVar1++;
	}
	iVar1 = iVar2;
	while (iVar1 < 49)
	{
		Global_119632[iVar13] = 4294967295;
		*(&Global_119632[iVar13] + 8) = 4294967295;
		iVar1++;
	}
	return;
}

void Function_30() //Position: 0x1D1D / 7453
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
					Global_119329[iVar23] = iVar3;
					*(&Global_119329[iVar23] + 8) = GET_JOURNAL_ENTRY_MISC_FLAG(iVar3);
					*(&Global_119329[iVar23] + 16) = IS_JOURNAL_ENTRY_UPDATED(iVar3);
					iVar2++;
				}
			}
		}
		iVar1++;
	}
	iVar1 = iVar2;
	while (iVar1 < 49)
	{
		Global_119329[iVar13] = 4294967295;
		*(&Global_119329[iVar13] + 8) = 4294967295;
		iVar1++;
	}
	Global_119631 = GET_TARGETED_JOURNAL_ENTRY();
	if (Global_119631 == 4294967295 && Global_119631 == 0)
	{
		if (!GET_JOURNAL_ENTRY_TYPE(Global_119631) != 2)
		{
			Global_119631 = 4294967295;
		}
	}
	return;
}

void Function_31() //Position: 0x1ED6 / 7894
{
	Function_32(&Global_42918, 1, 0);
	return;
}

void Function_32(struct<2317> Param0) //Position: 0x1EE4 / 7908
{
	var uVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	var uVar11;
	int iVar12;
	int iVar13;
	
	uVar0 = Function_33();
	if (IS_ACTOR_VALID(&uVar0))
	{
		Param0.f_1060 = GET_NUM_WEAPONS_IN_INVENTORY(&uVar0);
		iVar7 = 4294967294;
		iVar8 = GET_WEAPON_IN_HAND(&uVar0);
		if (iVar8 != 4294967295)
		{
			if (GET_WEAPON_IS_EXTERNALLY_CREATED(&uVar0, iVar8) || uParam2)
			{
				iVar7 = GET_WEAPON_IN_HAND_CRC(&uVar0);
			}
		}
		iVar1 = 0;
		while (iVar1 < (Param0.f_1060 - 1))
		{
			iVar9 = ACTOR_GET_ITEM_CRC_AT_INDEX(iVar1, &uVar0);
			if (iVar9 != iVar7)
			{
				(*&Param0 + 92)[iVar1] = iVar9;
				(&Param0 + 92[iVar1])->f_4 = GET_ITEM_COUNT_BY_CRC((*&Param0 + 92)[iVar1], &uVar0);
			}
			iVar1++;
		}
		if (bParam1)
		{
			Param0.f_88 = GET_NUM_ACCESSORIES_IN_INVENTORY(&uVar0);
			iVar2 = 0;
			while (iVar2 < (Param0.f_88 - 1))
			{
				Param0[iVar2] = ACTOR_GET_ACCESSORY_CRC_AT_INDEX(iVar2, &uVar0);
				iVar2++;
			}
		}
		bVar3 = false;
		while (bVar3 < (17 - 1))
		{
			(*&Param0 + 1064)[bVar3] = _GET_AMMO_AMOUNT(&uVar0, bVar3, 0);
			bVar3++;
		}
		Param0.f_1272 = 4294967295;
		iVar4 = 0;
		while (iVar4 < (7 - 1))
		{
			iVar10 = iVar4;
			(*&Param0 + 1208)[iVar4] = GET_WEAPON_EQUIPPED(&uVar0, iVar10);
			if ((*&Param0 + 1208)[iVar4] == 4294967295)
			{
				if (GET_ITEM_EQUIPSLOT(iVar8) == iVar10)
				{
					(*&Param0 + 1208)[iVar4] = iVar8;
					Param0.f_1272 = iVar8;
				}
			}
			iVar4++;
		}
		Param0.f_2316 = GET_NUM_COLLECTABLES_IN_INVENTORY(&uVar0);
		iVar1 = 0;
		while (iVar1 < (Param0.f_2316 - 1))
		{
			uVar11 = ACTOR_GET_COLLECTABLE_CRC_AT_INDEX(iVar1, &uVar0);
			(*&Param0 + 1284)[iVar1] = uVar11;
			(&Param0 + 1284[iVar1])->f_4 = GET_ITEM_COUNT_BY_CRC((*&Param0 + 1284)[iVar1], &uVar0);
			iVar1++;
		}
		iVar12 = ACTOR_GET_NEXT_EQUIP_SLOT(&uVar0);
		if (iVar12 != 4294967295)
		{
			Param0.f_1276 = GET_WEAPON_EQUIPPED(&uVar0, iVar12);
		}
		else
		{
			Param0.f_1276 = 4294967295;
		}
		iVar13 = ACTOR_GET_CURRENT_EQUIP_SLOT(&uVar0);
		if (iVar13 != 4294967295)
		{
			Param0.f_1280 = GET_WEAPON_EQUIPPED(&uVar0, iVar13);
		}
		else
		{
			Param0.f_1280 = 4294967295;
		}
		bVar5 = false;
		while (bVar5 < (39 - 1))
		{
			(*&Param0 + 2320)[bVar5] = IS_WEAPONENUM_LOCKED(bVar5);
			bVar5++;
		}
	}
	return;
}

var Function_33() //Position: 0x2101 / 8449
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

struct<8> Function_34(int iParam0) //Position: 0x2116 / 8470
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
					iVar2 = ((Function_50((50 + iVar4)) + Function_50((183 + iVar4))) + Function_50((90 + iVar4)));
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
	Function_35(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_35(int iParam0, bool bParam1, bool bParam2) //Position: 0x21BD / 8637
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_SET_VALUE_AS_INT_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 5)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of this STAT_TYPE_LIFETIME directly: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of a STAT_TYPE_LIFETIME directly, use the COLLECTION version instead!");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 2)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of this STAT_TYPE_COLLECTIBLE directly: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_INT_NOW: You cannot set value of a STAT_TYPE_COLLECTIBLE directly, only increase and decrease operations are allowed");
		return 0;
	}
	if (Global_54086[iParam0] > TO_FLOAT(bParam1))
	{
		Function_49(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_54086[iParam0] = TO_FLOAT(bParam1);
	Function_48(iParam0);
	if (&bParam2)
	{
		Function_36(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_36(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x2459 / 9305
{
	char* cVar0[32];
	bool bVar8;
	struct<8> Var9;
	int iVar17;
	int iVar18;
	float fVar19;
	float fVar20;
	int iVar21;
	
	if (bParam3)
	{
		cVar0 = I2STR(ROUND(fParam2));
	}
	else
	{
		cVar0 = F2STR(fParam2, 6, 2);
	}
	strcpy(&Global_55480[iParam016] + 32, "", 32);
	if (&bParam4)
	{
		if (bParam1)
		{
			strcpy(&cVar1, "+", 4);
		}
		else
		{
			strcpy(&cVar1, "-", 4);
		}
		stradd(&Global_55480[iParam016] + 32, &cVar1, 32);
	}
	if (bParam1)
	{
		iVar2 = 0;
	}
	else
	{
		iVar2 = 1;
	}
	if (Global_55480[iParam016].f_124 != 3 || Global_55480[iParam016].f_96 != 21)
	{
		stradd(&Global_55480[iParam016] + 32, "$", 32);
	}
	stradd(&Global_55480[iParam016] + 32, &cVar0, 32);
	switch (Global_55480[iParam016].f_96)
	{
		case 0x00000010:
		case 0x00000011:
			strcpy(&Global_55480[iParam016] + 32, "", 32);
			break;
		
		case 0x00000016:
			if (fParam2 > 2000.0f)
			{
				stradd(&Global_55480[iParam016] + 32, " lbs", 32);
			}
			else
			{
				fParam2 = (fParam2 / 2000.0f);
				memcpy(&Global_55480[iParam016] + 32, &cVar1, 8);
				stradd(&Global_55480[iParam016] + 32, FLOAT_TO_STRING_FORMATED(fParam2, 6, 2), 32);
				stradd(&Global_55480[iParam016] + 32, " ton", 32);
			}
			break;
		
		case 0x00000017:
			memcpy(&Global_55480[iParam016] + 32, &cVar1, 8);
			if (fParam2 <= 60.0f)
			{
				bVar7 = false;
				bVar5 = (FLOOR(fParam2) / 60);
				if (bVar5 > 60)
				{
					bVar4 = (bVar5 / 60);
					bVar5 = (bVar5 - bVar4 * 60);
					bVar6 = FLOOR(((fParam2 - TO_FLOAT(bVar4 * 60 * 60)) - TO_FLOAT(bVar5 * 60)));
					if (bVar4 > 24)
					{
						bVar3 = (bVar4 / 24);
						bVar4 = (bVar4 - bVar3 * 24);
						stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(bVar3), 32);
						if (bVar3 >= 1)
						{
							stradd(&Global_55480[iParam016] + 32, " days", 32);
						}
						else
						{
							stradd(&Global_55480[iParam016] + 32, " day", 32);
						}
						bVar7 = true;
					}
					if (bVar4 >= 0)
					{
						if (bVar7)
						{
							stradd(&Global_55480[iParam016] + 32, " ", 32);
						}
						stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(bVar4), 32);
						stradd(&Global_55480[iParam016] + 32, " hr", 32);
						bVar7 = true;
					}
					if (bVar5 >= 0)
					{
						if (bVar7)
						{
							stradd(&Global_55480[iParam016] + 32, " ", 32);
						}
						stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(bVar5), 32);
						stradd(&Global_55480[iParam016] + 32, " min", 32);
						bVar7 = true;
					}
					if (bVar6 >= 0)
					{
						if (bVar7)
						{
							stradd(&Global_55480[iParam016] + 32, " ", 32);
						}
						stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(bVar6), 32);
						stradd(&Global_55480[iParam016] + 32, " sec", 32);
						bVar7 = false;
					}
				}
				else
				{
					stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(bVar5), 32);
					stradd(&Global_55480[iParam016] + 32, " min", 32);
					bVar6 = FLOOR((fParam2 - TO_FLOAT(bVar5 * 60)));
					if (bVar6 >= 0)
					{
						stradd(&Global_55480[iParam016] + 32, " ", 32);
						stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(bVar6), 32);
						stradd(&Global_55480[iParam016] + 32, " sec", 32);
					}
				}
			}
			else
			{
				stradd(&Global_55480[iParam016] + 32, &cVar0, 32);
				stradd(&Global_55480[iParam016] + 32, " sec", 32);
			}
			break;
		
		case 0x00000018:
			memcpy(&Global_55480[iParam016] + 32, &cVar1, 8);
			fParam2 = (fParam2 * 3,28084f);
			if (fParam2 > 5280.0f)
			{
				bVar8 = false;
			}
			else
			{
				fParam2 = (fParam2 / 5280.0f);
				bVar8 = true;
			}
			if ((fParam2 - IntToFloat(FLOOR(fParam2))) < 0.0f)
			{
				stradd(&Global_55480[iParam016] + 32, FLOAT_TO_STRING_FORMATED(fParam2, 6, 2), 32);
			}
			else
			{
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(fParam2)), 32);
			}
			if (bVar8)
			{
				stradd(&Global_55480[iParam016] + 32, " mi", 32);
			}
			else
			{
				stradd(&Global_55480[iParam016] + 32, " ft", 32);
			}
			break;
		
		case 0x00000019:
			memcpy(&Global_55480[iParam016] + 32, &cVar1, 8);
			if ((fParam2 - IntToFloat(FLOOR(fParam2))) < 0.0f)
			{
				stradd(&Global_55480[iParam016] + 32, FLOAT_TO_STRING_FORMATED(fParam2, 6, 2), 32);
			}
			else
			{
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(fParam2)), 32);
			}
			if (fParam2 < 1.0f)
			{
				stradd(&Global_55480[iParam016] + 32, " days", 32);
			}
			else
			{
				stradd(&Global_55480[iParam016] + 32, " day", 32);
			}
			break;
		
		case 0x0000000F:
			if (iParam0 == 390)
			{
				stradd(&Global_55480[iParam016] + 32, UI_GET_STRING("stat_of"), 32);
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(Function_47(390))), 32);
			}
			break;
	}
	CLEAR_STAT_MESSAGE();
	if (!Global_77928)
	{
		iVar21 = 0;
		switch (Global_55480[iParam016].f_96)
		{
			case 0x00000010:
			case 0x00000011:
			case 0x00000008:
			case 0x0000000C:
			case 0x00000009:
			case 0x0000000A:
			case 0x00000006:
				if (&bParam6)
				{
					fVar19 = fParam2;
					fVar20 = 0.0f;
				}
				else if (bParam1)
				{
					fVar19 = (Function_46(iParam0) - fParam2);
					fVar20 = fParam2;
				}
				else
				{
					fVar19 = (Function_46(iParam0) + fParam2);
					fVar20 = (fParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_44(iParam0, fVar19, fVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_131807.f_1316 <= 49)
						{
							Function_41(fVar19, fParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(&iParam7))
							{
								iParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_39(Global_131807.f_1316, Global_132499.f_1412, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(&iParam7), &Global_55480[iParam016] + 32, Function_38(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_131807.f_1316 + 1, Function_37(), &Var9);
						}
						break;
						break;
						if (iParam0 == 0)
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, 4294967295, 0, iVar2, 0, 1, false, 0, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, 4294967295, 0, iVar2, 0, 0, false, 0, 0);
						}
						break;
					}
			}
	}
}

var Function_37() //Position: 0x2A97 / 10903
{
	int iVar0;
	
	return &iVar0;
}

var Function_38(int iParam0) //Position: 0x2AA0 / 10912
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_39(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x2AB1 / 10929
{
	char* cVar0[32];
	
	if (&bParam3)
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
	if (&bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_40(char* cParam0) //Position: 0x2BA8 / 11176
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_41(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x2BC3 / 11203
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_43(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_42(Function_43(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_42(int iParam0, int iParam1) //Position: 0x2C2A / 11306
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_43(int iParam0, bool bParam1) //Position: 0x2C3C / 11324
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_44(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x2C4E / 11342
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
	if (Global_55480[iParam016].f_112 != 0.0f)
	{
		fVar0 = 100.0f;
	}
	else
	{
		fVar0 = Global_55480[iParam016].f_112;
	}
	fVar1 = Global_55480[iParam016].f_108;
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
		uParam3 = ROUND((fVar2 * 100.0f));
		uParam4 = ROUND((fVar3 * 100.0f));
	}
	else
	{
		uParam3 = ROUND(((fParam1 * 100.0f) / fVar0));
		uParam4 = ROUND(((fParam2 * 100.0f) / fVar0));
	}
}

int Function_45(int iParam0) //Position: 0x2D82 / 11650
{
	return Global_55480[iParam016].f_96;
}

float Function_46(int iParam0) //Position: 0x2D91 / 11665
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

float Function_47(int iParam0) //Position: 0x2DCA / 11722
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

void Function_48(int iParam0) //Position: 0x2E07 / 11783
{
	if (Global_55480[iParam016].f_112 == 0.0f)
	{
		if (Global_54086[iParam0] < Global_55480[iParam016].f_112)
		{
			PRINTSTRING("STAT_CHECK_RANGES: Attempting to decrement a STAT out of its fMaxRange - ");
			PRINTSTRING(&(Global_55480[iParam016]));
			PRINTNL();
			LOG_WARNING("STAT_CHECK_RANGES: Attempting to increment a STAT out of its fMaxRange");
		}
	}
	if (Global_55480[iParam016].f_108 == 0.0f)
	{
		if (Global_54086[iParam0] > Global_55480[iParam016].f_108)
		{
			PRINTSTRING("STAT_CHECK_RANGES: Attempting to decrement a STAT out of its fMinRange - ");
			PRINTSTRING(&(Global_55480[iParam016]));
			PRINTNL();
			LOG_ERROR("STAT_CHECK_RANGES: Attempting to decrement a STAT out of its fMinRange");
		}
	}
	return;
}

int Function_49(int iParam0, float fParam1, bool bParam2) //Position: 0x2FA1 / 12193
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_UPDATE_MY_LIFETIME_STAT: Attempting to use a Stat out of bounds.");
		return 0;
	}
	iVar1 = Global_55480[iParam016].f_100;
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
			Global_54086[iVar1] = (Global_54086[iVar1] + 1.0f);
		}
		else
		{
			Global_54086[iVar1] = (Global_54086[iVar1] + fParam1);
		}
	}
	else
	{
		Global_54086[iVar1] = fParam1;
	}
	if (Global_55480[iVar116].f_112 == 0.0f)
	{
		if (Global_54086[iVar1] < Global_55480[iVar116].f_112)
		{
			LOG_WARNING("STAT_UPDATE_MY_LIFETIME_STAT: Attempting to increment a LifetimeStat out of its fMaxRange.");
			Global_54086[iVar1] = Global_55480[iVar116].f_112;
		}
	}
	if (Global_55480[iVar116].f_108 == 0.0f)
	{
		if (Global_54086[iVar1] > Global_55480[iVar116].f_108)
		{
			LOG_WARNING("STAT_UPDATE_MY_LIFETIME_STAT: Attempting to decrement a LifetimeStat out of its fMinRange.");
			Global_54086[iVar1] = Global_55480[iVar116].f_108;
		}
	}
	return 1;
}

int Function_50(bool bParam0) //Position: 0x31E5 / 12773
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_54086[bParam0]);
}

struct<8> Function_51() //Position: 0x3226 / 12838
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

struct<8> Function_52() //Position: 0x32AF / 12975
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

struct<8> Function_53() //Position: 0x3346 / 13126
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

void Function_54() //Position: 0x33C5 / 13253
{
	if (Global_77930 > 0,1f)
	{
		Global_77930 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_55(7, (GET_CURRENT_GAME_TIME() - Global_77930), 0);
	Global_77930 = GET_CURRENT_GAME_TIME();
	Function_35(8, (GET_DAY(0) - 2), 0);
	return;
}

int Function_55(int iParam0, float fParam1, int iParam2) //Position: 0x3402 / 13314
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_INCREASE_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 5)
	{
		PRINTSTRING("STAT_INCREASE_NOW: You cannot increase this STAT_TYPE_LIFETIME directly: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_INCREASE_NOW: You cannot increase a STAT_TYPE_LIFETIME directly, use the COLLECTION version instead!");
		return 0;
	}
	if (fParam1 > 0.0f)
	{
		LOG_ERROR("\STAT_INCREASE_NOW: fIncreaseValue < 0.0 - I am turning this into a positive number for you!");
		fParam1 = FABS(fParam1);
	}
	Global_54086[iParam0] = (Global_54086[iParam0] + fParam1);
	Function_49(iParam0, fParam1, 1);
	Function_48(iParam0);
	if (iParam2 && fParam1 == 0.0f)
	{
		Function_36(iParam0, 1, fParam1, 0, 1, 0x40400000, 0, 0);
	}
	if (Global_55480[iParam016].f_96 == 2)
	{
		iVar1 = 0;
		while (iVar1 <= ROUND(fParam1))
		{
			ADD_COLLECTABLE(&(Global_55480[iParam016]), &Global_54076, 0);
			iVar1++;
		}
	}
	return 1;
}

void Function_56() //Position: 0x360E / 13838
{
	struct<2> Var0;
	var uVar2;
	
	Global_53524.f_24 = 4294967295;
	if (Function_12())
	{
		Function_62(&Global_53524 + 12, &Global_53524 + 16);
		Var0 = Function_62(&Global_53524 + 12, &Global_53524 + 16);
	}
	else
	{
		Function_57(&Global_53524 + 12, &Global_53524 + 16, 0, 0);
		Var0 = Function_57(&Global_53524 + 12, &Global_53524 + 16, 0, 0);
	}
	if (Function_520(StackVal, Var0))
	{
		Var0 = Global_54078;
		Var0.f_4 = (StackVal + 0,5f);
		FIND_GROUND_INTERSECTION(&Var0, 100.0f, &Global_53524, &uVar2);
	}
	else
	{
		Global_53524 = Var0;
	}
	Global_53524.f_208 = Global_53524.f_12;
	(&Global_53524 + 196) = Global_53524;
	Global_53524.f_212 = Global_53524.f_16;
	Global_53524.f_28 = 0;
	Global_53524.f_36 = 0;
	Global_53524.f_40 = 0;
	Global_53524.f_32 = 1;
	*(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Global_140631 = 1;
	return;
}

struct<8> Function_57(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x36C5 / 14021
{
	int iVar0;
	
	iVar0 = Function_60(&uParam2, &uParam3);
	if (Function_59(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_53524.f_24 = Global_43788;
			Function_58(&Global_99144, 1);
			Function_25(&Global_99144, 2);
			Global_99130 = Global_26200[iVar014];
			uParam1 = 0;
		}
		else
		{
			Function_58(&Global_99144, 2);
			Function_25(&Global_99144, 1);
			if ((iVar0 != 13 || iVar0 != 14) || iVar0 != 4)
			{
				uParam1 = 0;
			}
			else
			{
				uParam1 = 1;
			}
		}
		if (iVar0 == 1)
		{
			uParam0 = 89,88f;
			return StackVal, Vector(-2158,348f, 19,944f, 2597,452f);
		}
		uParam0 = Global_26200[iVar014].f_12;
		return StackVal, Global_26200[iVar014];
	}
	if (Global_26651)
	{
		Function_58(&Global_99144, 2);
		Function_25(&Global_99144, 1);
		uParam1 = 1;
		uParam0 = 290.0f;
		return StackVal, Vector(-2833,843f, 50,332f, 2418,003f);
	}
	Function_361();
	return StackVal, Function_361();
}

void Function_58(var uParam0, int iParam1) //Position: 0x37BD / 14269
{
	uParam0 = (uParam0 || iParam1);
	return;
}

bool Function_59(int iParam0) //Position: 0x37CE / 14286
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_60(bool bParam0, bool bParam1) //Position: 0x37E4 / 14308
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar0 = 4294967295;
	fVar1 = 1E+09.0f;
	iVar3 = 0;
	while (iVar3 <= Global_26200)
	{
		if (((Global_26200[iVar314].f_40 != 3 || Global_26200[iVar314].f_40 != 4) || (iVar3 != 15 && !&bParam0)) && (Global_26200[iVar314].f_52 != Global_43787 || bParam1))
		{
			if (Global_6606 || iVar3 == 6)
			{
				fVar2 = Function_61(StackVal, StackVal, Global_54078, Global_26200[iVar314]);
				if (fVar2 > fVar1)
				{
					fVar1 = fVar2;
					iVar0 = iVar3;
				}
			}
		}
		iVar3++;
	}
	if (Global_26651)
	{
		fVar2 = Function_61(StackVal, StackVal, Global_54078, Vector(-2833,843f, 50,332f, 2418,003f));
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_59(iVar0) && !&bParam1)
	{
		iVar0 = Function_60(&bParam0, 1);
	}
	return iVar0;
}

float Function_61(struct<2> Param0, struct<2> Param2) //Position: 0x38B0 / 14512
{
	Param0.f_4 = 0.0f;
	Param2.f_4 = 0.0f;
	return VDIST(Param0, Param2);
}

struct<8> Function_62(float fParam0, int iParam1) //Position: 0x38CD / 14541
{
	bool bVar0;
	struct<2> Var1;
	struct<2> Var3;
	struct<2> Var5;
	bool bVar7;
	
	fParam0 = fParam0;
	bVar0 = 99999,99f;
	Var1 = Vector(0.0f, 0.0f, 0.0f);
	Function_64(&Global_54076, &Var3);
	if (!Function_63(Global_46760[0]))
	{
		Var5 = Vector(-2158,996f, 19,93287f, 2597,94f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 90.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_63(Global_46760[2]))
	{
		Var5 = Vector(-2424,093f, 26,36347f, 2122,362f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -130,87f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_63(Global_46760[1]))
	{
		Var5 = Vector(-3242,193f, 19,4623f, 2725,147f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 90.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_63(Global_46796[1]))
	{
		Var5 = Vector(-3658,131f, 42,81397f, 2092,973f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -135,09f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_63(Global_46796[3]))
	{
		Var5 = Vector(-4454,145f, 9,204829f, 3220,642f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 206,26f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_63(Global_46796[2]))
	{
		GET_VOLUME_CENTER(&Global_44085[Global_46796[2]9] + 8, &Var5);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 0.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_63(Global_46796[4]))
	{
		Var5 = Vector(-3669,226f, 8,477426f, 3491,648f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 106,17f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_63(Global_46816[0]))
	{
		Var5 = Vector(-821,1879f, 93,8091f, 2435,436f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 343,64f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_63(Global_46816[1]))
	{
		Var5 = Vector(124,6513f, 76,73672f, 2235,506f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 165,38f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_63(Global_46816[2]))
	{
		GET_VOLUME_CENTER(&Global_44085[Global_46816[2]9] + 8, &Var5);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 0.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_63(Global_46838[0]))
	{
		Var5 = Vector(-3195,612f, 41,29269f, 3752,929f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -97,3f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_63(Global_46850[0]))
	{
		Var5 = Vector(-4287,014f, 18,13315f, 4453,605f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -6,71f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_63(Global_46850[1]))
	{
		Var5 = Vector(-4708,083f, 3,172676f, 3968,105f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -90.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_63(Global_46850[2]))
	{
		Var5 = Vector(-3245,478f, 39,28797f, 4563,465f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -90.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_63(Global_46866[0]))
	{
		Var5 = Vector(-2687,509f, 31,4827f, 4295,249f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -90.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_63(Global_46866[1]))
	{
		Var5 = Vector(-1719,171f, 11,29226f, 4214,298f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -180.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_63(Global_46866[2]))
	{
		Var5 = Vector(-1462,607f, 16,54457f, 3952,801f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 22,55f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_63(Global_46894[2]))
	{
		Var5 = Vector(-819,4399f, 13,11084f, 3712,137f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -135.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_63(Global_46894[3]))
	{
		Var5 = Vector(343,2535f, 79,47575f, 3448,062f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -104,45f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_63(Global_46894[0]))
	{
		Var5 = Vector(-465,2258f, 20,61027f, 3913,855f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -90.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_63(Global_46914[0]))
	{
		Var5 = Vector(757,22f, 86,90343f, 1271,724f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 270.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_63(Global_46926[2]))
	{
		Var5 = Vector(-298,7082f, 84,35147f, 2134,708f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 59,3f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_63(Global_46926[1]))
	{
		Var5 = Vector(-448,9981f, 153,3878f, 1631,183f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 20,74f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_63(Global_46926[0]))
	{
		Var5 = Vector(-884,3423f, 202,5276f, 1006,602f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = 94,65f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_63(Global_46838[1]))
	{
		Var5 = Vector(-2679,319f, 71,65485f, 3424,564f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -135.0f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	if (!Function_63(Global_46894[1]))
	{
		Var5 = Vector(-720,3301f, 67,5125f, 3293,269f);
		bVar7 = VDIST(Var3, Var5);
		if (bVar7 > bVar0)
		{
			fParam0 = -39,9f;
			bVar0 = bVar7;
			Var1 = Var5;
		}
	}
	Var5 = Vector(-63,861f, 116,861f, 1414,684f);
	bVar7 = VDIST(Var3, Var5);
	if (bVar7 > bVar0)
	{
		bVar0 = bVar7;
		Var1 = Var5;
	}
	Function_58(&Global_99144, 2);
	Function_25(&Global_99144, 1);
	iParam1 = 0;
	if (Function_520(StackVal, Var1))
	{
		Var1 = Vector(-63,861f, 116,861f, 1414,684f);
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(Var1);
	PRINTNL();
	return StackVal, Var1;
}

bool Function_63(int iParam0) //Position: 0x40FA / 16634
{
	int iVar0;
	
	iVar0 = Global_43791[iParam0];
	return (((Function_86(iVar0, 0x1000000) || Function_86(iVar0, 0x2000000)) || Function_86(iVar0, 0x4000000)) || !Function_86(iVar0, 0x10000000));
}

void Function_64(var uParam0, int iParam1) //Position: 0x4135 / 16693
{
	GET_POSITION(&uParam0, &iParam1);
	return;
}

void Function_65(int iParam0) //Position: 0x4144 / 16708
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
				Function_70(12, 1, 0, 0);
				Function_69(0, (iVar1 - 1));
			}
			else if (iVar1 <= 25 && iVar1 >= 41)
			{
				Function_70(13, 1, 0, 0);
				Function_69(1, (iVar1 - 25));
			}
			else if (iVar1 <= 42 && iVar1 >= 48)
			{
				Function_70(14, 1, 0, 0);
				Function_69(1, (iVar1 - 25));
			}
			else if (iVar1 <= 49 && iVar1 >= 57)
			{
				Function_70(15, 1, 0, 0);
				Function_69(1, (iVar1 - 49));
			}
			if (iVar1 <= 1 && iVar1 >= 57)
			{
				Function_70(9, 1, 0, 0);
			}
			break;
		
		case 0x00000002:
			switch (Function_13(iParam0))
			{
				case 0x00000000:
					if (Function_68(iParam0) == 1)
					{
						iVar0 = Function_67(iParam0);
						if (Function_66(iVar0))
						{
							if (iVar0 == Global_46926[5])
							{
								Function_69(4, 18);
							}
							else if (iVar0 == Global_46866[3])
							{
								Function_69(4, 10);
							}
							else if (iVar0 == Global_46926[6])
							{
								Function_69(4, 16);
							}
							else if (iVar0 == Global_46816[3])
							{
								Function_69(4, 6);
							}
							else if (iVar0 == Global_46760[13])
							{
								Function_69(4, 3);
							}
							else if (iVar0 == Global_46866[7])
							{
								Function_69(4, 11);
							}
							else if (iVar0 == Global_46760[6])
							{
								Function_69(4, 0);
							}
							else if (iVar0 == Global_46866[10])
							{
								Function_69(4, 15);
							}
							else if (iVar0 == Global_46866[8])
							{
								Function_69(4, 14);
							}
							else if (iVar0 == Global_46760[11])
							{
								Function_69(4, 2);
							}
							else if (iVar0 == Global_46816[6])
							{
								Function_69(4, 7);
							}
							else if (iVar0 == Global_46926[3])
							{
								Function_69(4, 17);
							}
							else if (iVar0 == Global_46850[5])
							{
								Function_69(4, 8);
							}
							else if (iVar0 == Global_46866[9])
							{
								Function_69(4, 13);
							}
							else if (iVar0 == Global_46866[11])
							{
								Function_69(4, 12);
							}
							else if (iVar0 == Global_46760[7])
							{
								Function_69(4, 1);
							}
							else if (iVar0 == Global_46838[3])
							{
								Function_69(4, 5);
							}
							else if (iVar0 == Global_46866[4])
							{
								Function_69(4, 9);
							}
							else if (iVar0 == Global_46796[7])
							{
								Function_69(4, 4);
							}
							else if (iVar0 == Global_46926[4])
							{
								Function_69(4, 19);
							}
							if (StackVal == 1)
							{
								iVar0 = iVar0;
							}
							else if (StackVal == 2)
							{
								iVar0 = Global_44085[iVar09];
							}
							else
							{
								iVar0 = Global_44085[iVar09];
								iVar0 = Global_44085[iVar09];
							}
							if (iVar0 == Global_46722[0])
							{
								Function_70(363, 1, 0, 0);
							}
							else if (iVar0 == Global_46722[1])
							{
								Function_70(364, 1, 0, 0);
							}
							else if (iVar0 == Global_46722[2])
							{
								Function_70(365, 1, 0, 0);
							}
						}
					}
					break;
			}
			break;
		
		case 0x00000003:
			if (Function_67(iParam0) == 0)
			{
				if (Function_68(iParam0) == 1)
				{
					Function_70(458, 1, 0, 0);
					iVar0 = Function_13(iParam0);
					if (Function_66(iVar0))
					{
						if (iVar0 == Global_46816[2])
						{
							Function_69(2, 10);
						}
						else if (iVar0 == Global_46796[2])
						{
							Function_69(2, 11);
						}
						else if (iVar0 == Global_46760[2])
						{
							Function_69(2, 12);
						}
						else if (iVar0 == Global_46796[0])
						{
							Function_69(2, 13);
						}
						else if (iVar0 == Global_46796[3])
						{
							Function_69(2, 14);
						}
						else if (iVar0 == Global_46850[2])
						{
							Function_69(2, 15);
						}
						else if (iVar0 == Global_46850[1])
						{
							Function_69(2, 16);
						}
						else if (iVar0 == Global_46838[1])
						{
							Function_69(2, 17);
						}
					}
				}
			}
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000006:
			if (Function_68(iParam0) == 1)
			{
				Function_70(400, 1, 0, 0);
			}
			switch (Function_13(iParam0))
			{
				case 0x00000001:
					Function_70(402, 1, 0, 0);
					if (Global_43789 == Global_46816[0])
					{
						Function_69(6, 5);
					}
					else if (Global_43789 == Global_46866[0])
					{
						Function_69(6, 6);
					}
					else if (Global_43789 == Global_46914[0])
					{
						Function_69(6, 7);
					}
					break;
				
				case 0x00000002:
					Function_70(403, 1, 0, 0);
					if (Global_43789 == Global_46760[1])
					{
						Function_69(6, 8);
					}
					else if (Global_43789 == Global_46866[0])
					{
						Function_69(6, 9);
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

bool Function_66(int iParam0) //Position: 0x4620 / 17952
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

int Function_67(int iParam0) //Position: 0x4636 / 17974
{
	if (!Function_14(iParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_21684[iParam07], 4) & 255;
}

int Function_68(int iParam0) //Position: 0x4655 / 18005
{
	if (!Function_14(iParam0))
	{
		return 4294967295;
	}
	return Global_21684[iParam07].f_12;
}

void Function_69(int iParam0, int iParam1) //Position: 0x466F / 18031
{
	bool bVar0;
	
	if (iParam0 >= 16)
	{
		LOG_ERROR("STAT_SET_BIT: Attempting to use a Stat out of bounds.");
		return;
	}
	bVar0 = SHIFT_LEFT(true, &iParam1);
	(*&Global_21369 + 260)[iParam0] = ((*&Global_21369 + 260)[iParam0] || bVar0);
	return;
	return;
}

int Function_70(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x46D9 / 18137
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_INCREASE_INT_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 5)
	{
		PRINTSTRING("STAT_INCREASE_INT_NOW: You cannot increase this STAT_TYPE_LIFETIME directly: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_INCREASE_INT_NOW: You cannot increase a STAT_TYPE_LIFETIME directly, use the COLLECTION version instead!");
		return 0;
	}
	if (bParam1 <= 0)
	{
		LOG_ERROR("STAT_INCREASE_INT_NOW: iIncreaseValue < 0 - I am turning this into a positive number for you!");
		bParam1 = ABS(bParam1);
	}
	Global_54086[iParam0] = (Global_54086[iParam0] + TO_FLOAT(bParam1));
	Function_49(iParam0, TO_FLOAT(bParam1), 1);
	Function_48(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_36(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, &iParam3);
	}
	if (Global_55480[iParam016].f_96 == 2)
	{
		iVar1 = 0;
		while (iVar1 <= bParam1)
		{
			ADD_COLLECTABLE(&(Global_55480[iParam016]), &Global_54076, 0);
			iVar1++;
		}
	}
	Function_71(iParam0);
	return 1;
}

void Function_71(int iParam0) //Position: 0x4901 / 18689
{
	switch (iParam0)
	{
		case 0x00000009:
		case 0x0000000C:
		case 0x0000000D:
		case 0x0000000E:
		case 0x0000000F:
		case 0x000001C9:
		case 0x000001CA:
		case 0x0000016B:
		case 0x0000016C:
		case 0x0000016D:
		case 0x000001D5:
		case 0x00000190:
		case 0x0000019A:
		case 0x000001DA:
		case 0x000001DB:
		case 0x000001DC:
		case 0x00000197:
		case 0x000001D4:
		case 0x00000199:
		case 0x00000291:
		case 0x00000292:
		case 0x00000293:
		case 0x00000290:
			Global_6662 = 1;
			break;
	}
	return;
}

void Function_72() //Position: 0x499F / 18847
{
	PLAYSTAT_INT("HC_FIREBOTTLE", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 4, 1)));
	PLAYSTAT_INT("HC_DYNAMITE", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 5, 1)));
	PLAYSTAT_INT("nHC_PISTOL", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 6, 1)));
	PLAYSTAT_INT("HC_REVOLVER", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 7, 1)));
	PLAYSTAT_INT("HC_REPEATER", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 8, 1)));
	PLAYSTAT_INT("HC_RIFLE", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 9, 1)));
	PLAYSTAT_INT("HC_SHOTGUN", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 10, 1)));
	PLAYSTAT_INT("HC_SNIPERRIFLE", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 11, 1)));
	PLAYSTAT_INT("HC_TOMAHAWK", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 12, 1)));
	PLAYSTAT_INT("HC_ANTITANK", FLOOR(_GET_AMMO_AMOUNT(&Global_54076, 13, 1)));
	PLAYSTAT_INT("HC_MONEY", Function_50(0));
	PLAYSTAT_INT("HC_FAME", Function_50(3));
	PLAYSTAT_INT("HC_HONOR", Function_50(1));
	return;
}

void Function_73() //Position: 0x4B01 / 19201
{
	int iVar0;
	int iVar1;
	
	if (!Function_78(Global_10966))
	{
		return;
	}
	iVar0 = Function_50(24);
	iVar1 = Function_77(Global_10966);
	if (!Function_78(iVar0) && Function_76(iVar1) < 0)
	{
		Function_35(24, Global_10966, 0);
		Function_74(24, &Global_6667[Global_1096628] + 16, 0, 1);
	}
	else if (StackVal <= Function_76(Function_77(iVar0)))
	{
		Function_35(24, Global_10966, 0);
		Function_74(24, &Global_6667[Global_1096628] + 16, 0, 1);
	}
	return;
}

int Function_74(int iParam0, char* cParam1) //Position: 0x4B81 / 19329
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 20 && Global_55480[iParam016].f_96 == 18)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_STRING_NOW: You cannot set value of this stat because it is not of STAT_TYPE_STRING or STAT_TYPE_HIDDEN_STRING: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: You cannot set value of this stat because it is not of STAT_TYPE_STRING or STAT_TYPE_HIDDEN_STRING. Use the other functions");
		return 0;
	}
	if (!IS_STRING_VALID(&cParam1))
	{
		PRINTSTRING("STAT_SET_VALUE_AS_STRING_NOW: Invalid string passed: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: Invalid string passed.");
		return 0;
	}
	if (STRING_LENGTH(&cParam1) >= 7)
	{
		PRINTSTRING("STAT_SET_VALUE_AS_STRING_NOW: The string passed is longer than the 7 characters allowed: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_AS_STRING_NOW: The string passed is longer than the 7 characters allowed.");
		return 0;
	}
	strcpy(&Global_55480[iParam016] + 32, &cParam1, 32);
	if (&bParam2)
	{
		uVar1 = Global_55480[iParam016].f_124;
		Function_75(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_55480[iParam016] + 32), 3.0f, &iParam3);
	}
	return 1;
}

void Function_75(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, bool bParam10) //Position: 0x4ED8 / 20184
{
	CLEAR_STAT_MESSAGE();
	if (!Global_77928)
	{
		if (iParam0 == 0)
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), UI_GET_STRING(&uParam1), &uParam9, "", 2, 4294967295, 0, 0, 0, 1, false, 0, 0);
		}
		else if (&bParam10)
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), UI_GET_STRING(&uParam1), &uParam9, "", 2, 4294967295, 0, 0, 0, 0, false, 0, 0);
		}
		else
		{
			SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), UI_GET_STRING(&uParam1), &uParam9, "", 2, 4294967295, 0, 1, 0, 0, false, 0, 0);
		}
	}
}

int Function_76(int iParam0) //Position: 0x4F60 / 20320
{
	if (!Function_80(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

int Function_77(int iParam0) //Position: 0x4F7A / 20346
{
	if (!Function_78(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_78(int iParam0) //Position: 0x4F94 / 20372
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

bool Function_79() //Position: 0x4FAA / 20394
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

bool Function_80(int iParam0) //Position: 0x4FD5 / 20437
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

bool Function_81(int iParam0) //Position: 0x4FF9 / 20473
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

void Function_82(int iParam0) //Position: 0x500E / 20494
{
	if (&iParam0 != 1 && !GET_THIS_SCRIPT_ID() != &Global_15860)
	{
		return;
	}
	if (Global_15852[&iParam0])
	{
		Global_15852[&iParam0] = 0;
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

bool Function_83() //Position: 0x504E / 20558
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_15852[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void Function_84() //Position: 0x5073 / 20595
{
	if (&Global_47308 == GET_THIS_SCRIPT_ID())
	{
		Global_47308 = "";
	}
	return;
}

void Function_85(int iParam0) //Position: 0x5089 / 20617
{
	int iVar0;
	
	iVar0 = (Global_39922.f_88 && iParam0);
	Global_39922.f_88 = (Global_39922.f_88 - iVar0);
	return;
}

bool Function_86(bool bParam0, int iParam1) //Position: 0x50A6 / 20646
{
	return (bParam0 && iParam1) == 0;
}

void Function_87(struct<1049> Param0) //Position: 0x50B3 / 20659
{
	var uVar0;
	bool bVar1;
	var uVar2;
	
	if (IS_OBJECTSET_VALID(&Param0 + 992))
	{
		bVar1 = false;
		while (bVar1 < (GET_OBJECTSET_SIZE(&Param0 + 992) - 1))
		{
			uVar2 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar1, &Param0 + 992);
			if (GET_OBJECT_TYPE(&uVar2) == 15)
			{
				if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(&uVar2)))
				{
					if (IS_ACTOR_ALIVE(GET_ACTOR_FROM_OBJECT(&uVar2)) && GET_ACTOR_FROM_OBJECT(&uVar2) == &Global_54076)
					{
						ACTOR_END_FORCE_HOLSTER(GET_ACTOR_FROM_OBJECT(&uVar2));
					}
				}
			}
			bVar1++;
		}
	}
	if (!Function_86(Param0.f_1048, 512) && Function_86(Param0.f_1048, 256))
	{
		if (IS_OBJECT_VALID(&Param0 + 936))
		{
			DESTROY_OBJECT(&Param0 + 936);
		}
		if (IS_OBJECT_VALID(GET_OBJECT_FROM_GRINGO(&Param0 + 928)))
		{
			DESTROY_OBJECT(GET_OBJECT_FROM_GRINGO(&Param0 + 928));
		}
		if (IS_OBJECT_VALID(&Param0 + 944))
		{
			DESTROY_VOLUME(&Param0 + 944);
		}
		while (GET_OBJECTSET_SIZE(&Param0 + 992) >= 0)
		{
			uVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, &Param0 + 992);
			if (IS_OBJECT_VALID(&uVar0))
			{
				REMOVE_OBJECT_FROM_OBJECTSET(&uVar0, &Param0 + 992);
				if (GET_OBJECT_TYPE(&uVar0) == 15)
				{
					if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(&uVar0)))
					{
						Function_94(GET_ACTOR_FROM_OBJECT(&uVar0), 0, 0);
						SET_ACTOR_CAN_PLAY_GESTURES(GET_ACTOR_FROM_OBJECT(&uVar0), true);
						SET_ACTOR_CAN_PLAY_BORED_IDLES(GET_ACTOR_FROM_OBJECT(&uVar0), 1);
					}
				}
			}
			CLEAN_OBJECTSET(&Param0 + 992);
		}
		if (((Param0.f_988 != 4 || Param0.f_988 != 5) || Param0.f_988 != 6) || Param0.f_988 != 7)
		{
			Function_94(&Global_54076, 0, 0);
			SET_ACTOR_CAN_PLAY_GESTURES(&Global_54076, true);
			SET_ACTOR_CAN_PLAY_BORED_IDLES(&Global_54076, 1);
		}
		(&Param0 + 1000) = Vector(0.0f, 0.0f, 0.0f);
		Param0.f_1012 = 0;
		Function_90(1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1);
		Function_89(1.0f);
		Function_88(&Param0, 5);
		if (Function_86(Param0.f_1048, 32768))
		{
			Function_85(256);
		}
		Function_58(&Param0 + 1048, 512);
		Function_25(&Param0 + 1048, 256);
	}
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	return;
}

void Function_88(struct<985> Param0) //Position: 0x52A7 / 21159
{
	Param0.f_984 = iParam1;
	return;
}

void Function_89(bool bParam0) //Position: 0x52B5 / 21173
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

void Function_90(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, var uParam9, var uParam10) //Position: 0x52D2 / 21202
{
	var uVar0;
	
	bParam1 = &bParam1;
	if (&bParam6)
	{
		CAMERA_RESET(0);
	}
	if (IS_LOCAL_PLAYER_VALID(0))
	{
		if (&bParam3)
		{
			SET_PLAYER_CONTROL(0, 1, 0, 0);
		}
		uVar0 = Function_33();
		if (IS_ACTOR_VALID(&uVar0))
		{
			if (&bParam2)
			{
				TASK_CLEAR(&uVar0);
			}
			if (!&bParam1)
			{
				if (HUD_IS_FADED())
				{
					RESET_ANIM_SET_FOR_ACTOR(&uVar0, 0);
				}
				else
				{
					RESET_ANIM_SET_FOR_ACTOR(&uVar0, 1);
				}
			}
			ACTOR_END_FORCE_HOLSTER(&uVar0);
			SET_ACTOR_INVULNERABILITY(&uVar0, 0);
			if (Global_53410[0])
			{
				Global_53410[0] = 0;
				UI_CHEAT_SET_VALUE(0, 0);
			}
		}
		Function_70(21, 1, 0, 0);
	}
	if (&bParam5)
	{
		STREAMING_SET_CUTSCENE_MODE(0);
	}
	if (&bParam7)
	{
		Function_93();
	}
	if (&bParam4)
	{
		ENABLE_USE_CONTEXTS(1);
	}
	if (&bParam8)
	{
		UI_POP("nCutscenes");
	}
	AUDIO_ENABLE_PLAYER_TAUNTS();
	Function_91(&uParam9, &uParam10);
}

void Function_91(var uParam0, bool bParam1) //Position: 0x53A1 / 21409
{
	uParam0 = &uParam0;
	HUD_ENABLE(&uParam0);
	if (&bParam1)
	{
		HUD_CLEAR_SMALL_TEXT_QUEUE();
		PRINT_SMALL_B("Common_Null", 0,1f, 0, 2, 1, 0, 0);
	}
	SET_TIME_ACCELERATION(Global_99471);
	STREAMING_UNLOAD_SCENE();
	AI_STOP_IGNORING_ACTORS();
	if (IS_VOLUME_VALID(FIND_VOLUME_IN_LAYOUT(&Global_10996, "tempcutscenevol")))
	{
		DESTROY_VOLUME(FIND_VOLUME_IN_LAYOUT(&Global_10996, "tempcutscenevol"));
	}
	if (!Global_6623)
	{
		Function_92();
	}
	ACTOR_DATA_GRAVITY_LIMIT(0);
	Global_99146 = 0;
	Global_99147 = 0;
	if (IS_VOLUME_VALID(&Global_99170))
	{
		if (DOES_AMBIENT_MOVE_RESTRICTION_VOLUME_EXIST(&Global_99170))
		{
			REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Global_99170);
		}
		if (DOES_AMBIENT_SPAWN_RESTRICTION_VOLUME_EXIST(&Global_99170))
		{
			REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(&Global_99170);
		}
	}
	SET_TREE_COST_MODIFIER(1.0f);
	SET_USES_QUAD_IK_FIX(0);
	return;
}

void Function_92() //Position: 0x5470 / 21616
{
	int iVar0;
	
	iVar0 = FIND_NAMED_LAYOUT("PlayerLayout");
	if (IS_ACTOR_VALID(&Global_21369 + 72))
	{
		if (GET_LAYOUT_FROM_OBJECT(GET_OBJECT_OWNER(&Global_21369 + 72)) != &iVar0)
		{
			LOG_ERROR("PLAYERHORSE NOT IN PLAYER HORSE! WHY? FIXING");
			GIVE_OBJECT_TO_LAYOUT(&Global_21369 + 72, &iVar0);
		}
	}
	return;
}

void Function_93() //Position: 0x54E8 / 21736
{
	HUD_CLEAR_BIG_TEXT();
	HUD_CLEAR_COUNTER();
	HUD_CLEAR_HELP();
	HUD_CLEAR_OBJECTIVE();
	HUD_CLEAR_SMALL_TEXT();
	return;
}

void Function_94(var uParam0, bool bParam1, bool bParam2) //Position: 0x54FD / 21757
{
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return;
	}
	if (bParam1)
	{
		AI_IGNORE_ACTOR(&uParam0);
		if (FIRE_IS_ACTOR_ON_FIRE(&uParam0))
		{
			FIRE_STOP_ON_ACTOR(&uParam0);
		}
		SET_ACTOR_INVULNERABILITY(&uParam0, 1);
		CLEAR_ACTOR_MIN_SPEED(&uParam0);
		CLEAR_ACTOR_MAX_SPEED(&uParam0);
		TASK_OVERRIDE_CLEAR_MOVETYPE(&uParam0);
		RESET_ACTOR_GAITS(&uParam0, 0);
		if (IS_ACTOR_VALID(GET_MOUNT(&uParam0)))
		{
			RESET_ACTOR_GAITS(GET_MOUNT(&uParam0), 0);
		}
		if (&bParam2)
		{
			SET_ACTOR_CUTSCENE_MODE(&uParam0, 1);
		}
		SET_ACTOR_ALLOW_BUMP_REACTIONS(&uParam0, 0);
		AI_SET_NAV_PATHFINDING_ENABLED(&uParam0, 0);
		AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&uParam0, 1);
	}
	else
	{
		AI_GOAL_LOOK_CLEAR(&uParam0);
		SET_ACTOR_INVULNERABILITY(&uParam0, 0);
		SET_ACTOR_ALLOW_BUMP_REACTIONS(&uParam0, 1);
		AI_SET_NAV_PATHFINDING_ENABLED(&uParam0, 1);
		AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&uParam0, 2);
		SET_ACTOR_CUTSCENE_MODE(&uParam0, 0);
	}
	return;
}

void Function_95(int iParam0) //Position: 0x55AD / 21933
{
	Function_96(&Global_43580, iParam0);
	return;
}

void Function_96(var uParam0, int iParam1) //Position: 0x55BB / 21947
{
	uParam0 = (uParam0 || iParam1);
	uParam0 |= 1073741824;
	return;
}

void Function_97(int iParam0) //Position: 0x55DA / 21978
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (iParam0 - 1))
	{
		Function_98(&iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_98(struct<2>[] Param0, int iParam1) //Position: 0x5602 / 22018
{
	if (Function_100(&(Param0[iParam12]), 4))
	{
		if (Function_100(&(Param0[iParam12]), 1))
		{
			switch (StackVal)
			{
				case 0x00000000:
					STREAMING_EVICT_PROP(&(Param0[iParam12]));
					break;
				
				case 0x00000007:
					STREAMING_EVICT_PROPSET(&(Param0[iParam12]));
					break;
				
				case 0x00000002:
				case 0x00000003:
					STREAMING_EVICT_ACTOR(&(Param0[iParam12]), 4294967295);
					break;
				
				case 0x00000005:
					REMOVE_ANIM_SET(GET_ASSET_NAME(StackVal, &(Param0[iParam12])));
					break;
				
				case 0x00000001:
					STREAMING_EVICT_GRINGO(&(Param0[iParam12]));
					break;
				
				case 0x00000008:
					REMOVE_ACTION_TREE(GET_ASSET_NAME(StackVal, &(Param0[iParam12])));
					break;
				
				case 0x0000000A:
					REMOVE_STRING_TABLE(GET_ASSET_NAME(StackVal, &(Param0[iParam12])));
					break;
				
				case 0x00000004:
					STREAMING_EVICT_SCRIPT(&(Param0[iParam12]));
					break;
				
				case 0x00000006:
					STREAMING_UNREQUEST_MOVABLE_NAV_MESH(GET_ASSET_NAME(&(Param0[iParam12]), 6));
					break;
				
				case 0x0000000C:
					STREAMING_EVICT_GRINGO_DICTIONARY(&(Param0[iParam12]));
					break;
				
				default:
					break;
			}
			Function_99(&(Param0[iParam12]), 1);
			Function_99(&(Param0[iParam12]), 2);
			Function_99(&(Param0[iParam12]), 4);
		}
	}
	return;
}

void Function_99(struct<13> Param0) //Position: 0x574D / 22349
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	Param0.f_12 = (Param0.f_12 - iVar0);
	return;
}

bool Function_100(struct<13> Param0) //Position: 0x576A / 22378
{
	int iVar0;
	
	iVar0 = (Param0.f_12 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_101(bool bParam0, int iParam1) //Position: 0x5788 / 22408
{
	var uVar0;
	int iVar1;
	bool bVar2;
	
	if (IS_ACTOR_VALID(&bParam0 + 1576))
	{
		if (&iParam1 == 1)
		{
			if (SQUAD_IS_VALID(&bParam0 + 1880))
			{
				Function_104(&bParam0 + 1880);
			}
		}
		else if (SQUAD_IS_VALID(&bParam0 + 1880))
		{
			bVar2 = false;
			while (bVar2 < (SQUAD_GET_SIZE(&bParam0 + 1880) - 1))
			{
				uVar0 = SQUAD_GET_ACTOR_BY_INDEX(&bParam0 + 1880, bVar2);
				if (IS_ACTOR_VALID(&uVar0))
				{
					MEMORY_CLEAR_ALL(&uVar0);
					if (((Function_239(&bParam0) != 1 && Function_103(&bParam0) != 2) || (Function_239(&bParam0) != 2 && Function_103(&bParam0) != 3)) || !Function_241(&bParam0))
					{
						if (IS_ACTOR_DRIVING_VEHICLE(&uVar0))
						{
							Function_361();
							Function_102(StackVal, &uVar0, Function_361(), 0, 2, 2, 1);
						}
					}
					else
					{
						iVar1 = TASK_SEQUENCE_OPEN();
						if (IS_ACTOR_RIDING_VEHICLE(&uVar0))
						{
							TASK_VEHICLE_LEAVE(0);
						}
						TASK_FLEE_ACTOR(false, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
						TASK_SEQUENCE_CLOSE();
						TASK_PRIORITY_SET(&uVar0, true);
						TASK_SEQUENCE_PERFORM(&uVar0, iVar1);
						RELEASE_ACTOR(&uVar0);
					}
				}
				bVar2++;
			}
		}
		RELEASE_ACTOR(&bParam0 + 1576);
	}
	return;
}

void Function_102(float fParam0, struct<2> Param1, int iParam3, int iParam4, int iParam5, bool bParam6) //Position: 0x588B / 22667
{
	if (!IS_OBJECTSET_VALID(&Global_43580 + 80))
	{
		*(&Global_43580 + 80) = CREATE_OBJECTSET_IN_LAYOUT("trafficReleased", &Global_43578, 15, 1);
	}
	if (!IS_ACTOR_VALID(&fParam0))
	{
		return;
	}
	if (&iParam3 != 0)
	{
		DECOR_SET_INT(&fParam0, "overrideCurve", &iParam3);
	}
	if (!Function_520(StackVal, Param1))
	{
		DECOR_SET_VECTOR(&fParam0, "overrideDest", Param1);
	}
	if (&iParam4 != 0)
	{
		DECOR_SET_INT(&fParam0, "overrideSpeed", &iParam4);
	}
	if (&iParam5 != 2)
	{
		DECOR_SET_INT(&fParam0, "overridePriority", &iParam5);
	}
	else
	{
		TASK_PRIORITY_SET(&fParam0, 2);
	}
	if (&bParam6)
	{
		DECOR_SET_INT(&fParam0, "quickRelease", &iParam5);
	}
	if (!IS_OBJECT_IN_OBJECTSET(&fParam0, &Global_43580 + 80))
	{
		ADD_OBJECT_TO_OBJECTSET(&fParam0, &Global_43580 + 80);
	}
	SET_ACTOR_ALLOW_WEAPON_REACTIONS(&fParam0, 1);
}

int Function_103(struct<1089> Param0) //Position: 0x59AA / 22954
{
	return Param0.f_1088;
}

void Function_104(int iParam0) //Position: 0x59B6 / 22966
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&iParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&iParam0))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			SQUAD_LEAVE(&uVar1);
			DESTROY_ACTOR(&uVar1);
		}
		else
		{
			bVar0++;
		}
	}
	return;
}

void Function_105(int iParam0, int iParam1, int iParam2) //Position: 0x5A04 / 23044
{
	if (SQUAD_IS_VALID(&iParam0 + 1960 + 80))
	{
		if (&iParam1 == 1)
		{
			Function_118(&iParam0 + 1960 + 80);
		}
		else if (&iParam2 == 1)
		{
			Function_116(&iParam0 + 1960);
		}
		else
		{
			Function_106(&iParam0 + 1960, &Global_54076);
		}
	}
	return;
}

void Function_106(int iParam0, int iParam1) //Position: 0x5A4E / 23118
{
	if (SQUAD_IS_VALID(&iParam0 + 80))
	{
		Function_107(&iParam0 + 80, 2, GET_OBJECT_FROM_ACTOR(&iParam1), 4, 1);
	}
	return;
}

int Function_107(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x5A76 / 23158
{
	var uVar0;
	bool bVar1;
	int iVar2;
	
	if (SQUAD_IS_VALID(&uParam0))
	{
		iVar2 = SQUAD_GET_SIZE(&uParam0);
		bVar1 = false;
		while (bVar1 < (iVar2 - 1))
		{
			uVar0 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar1);
			if (IS_ACTOR_ALIVE(&uVar0))
			{
				Function_108(&uVar0, &uParam1, &uParam2, &uParam3, &uParam4);
			}
			bVar1++;
		}
		SQUAD_MAKE_EMPTY(&uParam0);
		return 1;
	}
	return 0;
}

int Function_108(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x5AD9 / 23257
{
	char* cVar0[32];
	
	Function_115();
	if (!IS_ACTOR_VALID(&uParam0))
	{
		return 0;
	}
	if (IS_ACTOR_DEAD(&uParam0))
	{
		return 1;
	}
	if (IS_OBJECT_IN_OBJECTSET(GET_OBJECT_FROM_ACTOR(&uParam0), &Global_26172))
	{
		strcpy(&cVar0, GET_ACTOR_NAME(&uParam0), 32);
		stradd(&cVar0, " already roaming. Cannot add again.", 32);
		LOG_ERROR(&cVar0);
		return 1;
	}
	if (Function_114(&uParam0) == 1)
	{
		LOG_ERROR("ACTORROAM - Actor cannot be added to ActorRoam multiple times");
		return 0;
	}
	if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&uParam0)))
	{
		REMOVE_BLIP(GET_BLIP_ON_ACTOR(&uParam0));
	}
	strcpy(&cVar0, GET_OBJECT_NAME(GET_OBJECT_FROM_ACTOR(&uParam0)), 32);
	if (GIVE_OBJECT_TO_LAYOUT(GET_OBJECT_FROM_ACTOR(&uParam0), &Global_10998))
	{
		PRINTSTRING("Added ");
		PRINTSTRING(&cVar0);
		PRINTSTRING(" to the roaming actor layout.");
		PRINTNL();
	}
	else
	{
		strcpy(&cVar0, GET_OBJECT_NAME(&uParam0), 32);
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
	if (!IS_OBJECT_IN_OBJECTSET(GET_OBJECT_FROM_ACTOR(&uParam0), &Global_26172))
	{
		ADD_OBJECT_TO_OBJECTSET(GET_OBJECT_FROM_ACTOR(&uParam0), &Global_26172);
	}
	if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&uParam0)))
	{
		REMOVE_BLIP(GET_BLIP_ON_ACTOR(&uParam0));
	}
	if (&iParam4 == 1)
	{
		AI_SET_NAV_MATERIAL_USAGE(&uParam0, 64, 0);
		AI_SET_NAV_MATERIAL_USAGE(&uParam0, 32, 0);
	}
	Function_113(&uParam0, 0);
	Function_112(&uParam0, iParam1);
	Function_111(&uParam0, &iParam2);
	Function_110(&uParam0, iParam3);
	if (Function_109(&uParam0) != 5)
	{
		SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(&uParam0, 0);
		SET_ACTOR_OBEY_AMBIENT_MOVE_RESTRICTIONS(&uParam0, 1);
	}
	else
	{
		AI_SET_ENABLE_DEAD_BODY_REACTIONS(&uParam0, 0);
	}
	return 1;
}

int Function_109(int iParam0) //Position: 0x5D45 / 23877
{
	return DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_behavior");
}

void Function_110(var uParam0, bool bParam1) //Position: 0x5D69 / 23913
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&uParam0), "actorRoam_speed", bParam1);
	return;
}

void Function_111(var uParam0, int iParam1) //Position: 0x5D8D / 23949
{
	DECOR_SET_OBJECT(GET_OBJECT_FROM_ACTOR(&uParam0), "actorRoam_target", &iParam1);
	return;
}

void Function_112(var uParam0, bool bParam1) //Position: 0x5DB3 / 23987
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&uParam0), "actorRoam_behavior", bParam1);
	return;
}

void Function_113(var uParam0, bool bParam1) //Position: 0x5DDA / 24026
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&uParam0), "actorRoam_state", bParam1);
	return;
}

int Function_114(bool bParam0) //Position: 0x5DFE / 24062
{
	return DECOR_GET_BOOL(GET_OBJECT_FROM_ACTOR(&bParam0), "actorRoam_ref");
}

void Function_115() //Position: 0x5E1D / 24093
{
	if (!IS_LAYOUTREF_VALID(&Global_10998))
	{
		Global_10998 = CREATE_LAYOUT("RoamingLayout");
	}
	if (!IS_OBJECTSET_VALID(&Global_26172))
	{
		Global_26172 = CREATE_OBJECTSET_IN_LAYOUT("gRoamObjects", &Global_10998, 4294967295, 1);
	}
	return;
}

void Function_116(int iParam0) //Position: 0x5E6C / 24172
{
	if (SQUAD_IS_VALID(&iParam0 + 80))
	{
		Function_117(&iParam0 + 80);
	}
	return;
}

void Function_117(int iParam0) //Position: 0x5E8A / 24202
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&iParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&iParam0))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			SQUAD_LEAVE(&uVar1);
			RELEASE_ACTOR(&uVar1);
		}
		else
		{
			bVar0++;
		}
	}
	return;
}

void Function_118(bool bParam0) //Position: 0x5ED5 / 24277
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	if (!SQUAD_IS_VALID(&bParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&bParam0))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			SQUAD_LEAVE(&uVar1);
			if (IS_ACTOR_RIDING_VEHICLE(&uVar1))
			{
				uVar2 = GET_VEHICLE(&uVar1);
				DESTROY_ACTOR(&uVar1);
				DESTROY_ACTOR(&uVar2);
			}
			else if (IS_ACTOR_RIDING(&uVar1))
			{
				uVar2 = GET_MOUNT(&uVar1);
				DESTROY_ACTOR(&uVar1);
				DESTROY_ACTOR(&uVar2);
			}
			else
			{
				DESTROY_ACTOR(&uVar1);
			}
		}
		else
		{
			bVar0++;
		}
	}
	return;
}

void Function_119() //Position: 0x5F65 / 24421
{
	Function_121();
	Function_120(10, 3);
	return;
}

void Function_120(int iParam0, int iParam1) //Position: 0x5F74 / 24436
{
	int iVar0;
	bool bVar1;
	int iVar2;
	char* cVar3[16];
	
	iVar2 = (iParam0 * iParam1);
	if (iParam0 != 4294967295 && iParam1 != 4294967295)
	{
		bVar1 = false;
		strcpy(&cVar3, "DB_MENU_", 16);
		stradd(&cVar3, I2STR(bVar1), 16);
		iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, &cVar3);
		while (GUI_WINDOW_VALID(&iVar0))
		{
			GUI_CLOSE_WINDOW(&iVar0);
			bVar1++;
			strcpy(&cVar3, "DB_MENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, &cVar3);
		}
	}
	else
	{
		bVar1 = false;
		while (bVar1 < iVar2)
		{
			strcpy(&cVar3, "DB_MENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, &cVar3);
			if (GUI_WINDOW_VALID(&iVar0))
			{
				GUI_CLOSE_WINDOW(&iVar0);
			}
			bVar1++;
		}
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "DB_MENU_TITLE");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "DB_MENU_FOOTER_HIGH");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "DB_MENU_OVERLAY");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	return;
}

void Function_121() //Position: 0x60C1 / 24769
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
	Global_47307 = 0;
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	SET_ACTOR_INVULNERABILITY(Function_33(), 0);
	AI_CLEAR_DONT_HARM_ACTOR(Function_33());
	UI_POP("nDebugMenu");
	return;
}

void Function_122() //Position: 0x610C / 24844
{
	Function_123(25, 2);
	return;
}

void Function_123(int iParam0, int iParam1) //Position: 0x6118 / 24856
{
	int iVar0;
	bool bVar1;
	int iVar2;
	char* cVar3[16];
	
	iVar2 = (iParam0 * iParam1);
	if (iParam0 != 4294967295 && iParam1 != 4294967295)
	{
		bVar1 = false;
		strcpy(&cVar3, "DBGMENU_", 16);
		stradd(&cVar3, I2STR(bVar1), 16);
		iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, &cVar3);
		while (GUI_WINDOW_VALID(&iVar0))
		{
			GUI_CLOSE_WINDOW(&iVar0);
			bVar1++;
			strcpy(&cVar3, "DBGMENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, &cVar3);
		}
	}
	else
	{
		bVar1 = false;
		while (bVar1 <= iVar2)
		{
			strcpy(&cVar3, "DBGMENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, &cVar3);
			if (GUI_WINDOW_VALID(&iVar0))
			{
				GUI_CLOSE_WINDOW(&iVar0);
			}
			bVar1++;
		}
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "DBGMENU_OVERLAY");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "MAINMENUBACK");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "ITEMMENUBACK");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "BACKMENUBACK");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "HEADERBACK");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "FOOTERBACK");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "nHEADERWIN");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "nFOOTERWIN");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "POINTER");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	return;
}

void Function_124(int iParam0, int iParam1) //Position: 0x6344 / 25412
{
	int iVar0;
	bool bVar1;
	int iVar2;
	char* cVar3[16];
	
	iVar2 = (iParam0 * iParam1);
	if (iParam0 != 4294967295 && iParam1 != 4294967295)
	{
		bVar1 = false;
		strcpy(&cVar3, "DB_MENU_", 16);
		stradd(&cVar3, I2STR(bVar1), 16);
		iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, &cVar3);
		while (GUI_WINDOW_VALID(&iVar0))
		{
			GUI_CLOSE_WINDOW(&iVar0);
			bVar1++;
			strcpy(&cVar3, "DB_MENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, &cVar3);
		}
	}
	else
	{
		bVar1 = false;
		while (bVar1 < iVar2)
		{
			strcpy(&cVar3, "DB_MENU_", 16);
			stradd(&cVar3, I2STR(bVar1), 16);
			iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, &cVar3);
			if (GUI_WINDOW_VALID(&iVar0))
			{
				GUI_CLOSE_WINDOW(&iVar0);
			}
			bVar1++;
		}
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "DB_MENU_TITLE");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "DB_MENU_FOOTER_HIGH");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	iVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, "DB_MENU_OVERLAY");
	if (GUI_WINDOW_VALID(&iVar0))
	{
		GUI_CLOSE_WINDOW(&iVar0);
	}
	return;
}

bool Function_125() //Position: 0x6491 / 25745
{
	if (Global_6623)
	{
		return 1;
	}
	if (Global_6625)
	{
		return 1;
	}
	if (Global_6635)
	{
		return 1;
	}
	if (Global_6627)
	{
		return 1;
	}
	if (Global_6638 || Global_6639)
	{
		return 1;
	}
	if (IS_SCRIPT_VALID(&Global_124165))
	{
		switch (Global_124175.f_32)
		{
			case 0x00000014:
			case 0x00000013:
				if (!Function_86(Global_122919.f_192, 1))
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

bool Function_126() //Position: 0x64F9 / 25849
{
	return Global_54085;
}

int Function_127(struct<1493> Param0) //Position: 0x6502 / 25858
{
	if (Function_128(&Param0) == 0)
	{
		return Param0.f_1492;
	}
	return 0;
}

int Function_128(struct<1085> Param0) //Position: 0x651D / 25885
{
	return Param0.f_1084;
}

void Function_129(struct<613> Param0) //Position: 0x6529 / 25897
{
	int iVar0;
	
	if (&iParam1 == 1)
	{
		iVar0 = 0;
		while (iVar0 < (Param0.f_400 - 1))
		{
			strcpy(&Param0 + 400[iVar04], "", 16);
			iVar0++;
		}
		Param0.f_504 = 0;
	}
	if (&iParam2 == 1)
	{
		iVar0 = 0;
		while (iVar0 < (Param0.f_508 - 1))
		{
			strcpy(&Param0 + 508[iVar04], "", 16);
			iVar0++;
		}
		Param0.f_612 = 0;
	}
	return;
}

int Function_130(var uParam0, int iParam1) //Position: 0x659B / 26011
{
	if (IS_ACTOR_HUMAN(&uParam0))
	{
		if (GET_NUM_WEAPONS_IN_INVENTORY(&uParam0) == 0)
		{
			TASK_FLEE_ACTOR(&uParam0, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
			TASK_PRIORITY_SET(&uParam0, false);
			return 1;
		}
	}
	if (!IS_ACTOR_VALID(&uParam0))
	{
		LOG_ERROR("Killer is invalid in TASK_KILL_ACTOR_RUTHLESS");
		return 0;
	}
	if (!IS_ACTOR_VALID(&iParam1))
	{
		LOG_ERROR("VICTIM is invalid in TASK_KILL_ACTOR_RUTHLESS");
		return 0;
	}
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uParam0, 28, 0.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uParam0, 31, -1.0f);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(&uParam0, 37, 2.0f);
	MEMORY_ALLOW_TAKE_COVER(&uParam0, 0);
	COMBAT_CLASS_AI_SET_FRIENDLY_FIRE_CONSIDERATION(&uParam0, 0);
	MEMORY_REPORT_POSITION_AUTO(&uParam0, &iParam1, 1);
	TASK_KILL_CHAR(&uParam0, &iParam1);
	TASK_PRIORITY_SET(&uParam0, true);
	return 1;
}

void Function_131(var uParam0, int iParam1) //Position: 0x6691 / 26257
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	if (!IS_ACTOR_VALID(&iParam1))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (IS_ACTOR_ALIVE(&uVar1))
			{
				MEMORY_IDENTIFY(&uVar1, &iParam1);
			}
		}
		bVar0++;
	}
	return;
}

void Function_132(var uParam0, var uParam1, bool bParam2) //Position: 0x66EC / 26348
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			MEMORY_CONSIDER_AS(&uVar1, &uParam1, bParam2);
		}
		bVar0++;
	}
	return;
}

void Function_133(var uParam0, int iParam1) //Position: 0x6738 / 26424
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		if (IS_ACTOR_VALID(SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0)))
		{
			MEMORY_ATTACK_ON_SIGHT(SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0), iParam1);
		}
		bVar0++;
	}
	return;
}

void Function_134(bool bParam0) //Position: 0x677D / 26493
{
	Function_137(&bParam0, 3);
	Function_136(&bParam0, 4294967295);
	Function_135(&bParam0 + 1880, &Global_54076, 4);
	Function_135(&bParam0 + 1960 + 80, &Global_54076, 4);
	Function_4(&bParam0 + 1880, &Global_54076, 100.0f, -1.0f, 1, 0);
	Function_4(&bParam0 + 1960 + 80, &Global_54076, 100.0f, -1.0f, 1, 0);
	Function_240(&bParam0, 1);
	Function_238(&bParam0, "pm_mad_rog", 0);
	return;
}

void Function_135(var uParam0, int iParam1, bool bParam2) //Position: 0x67FB / 26619
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	if (!IS_ACTOR_VALID(&iParam1))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			MEMORY_CONSIDER_AS(&uVar1, &iParam1, bParam2);
			MEMORY_IDENTIFY(&uVar1, &iParam1);
			if (!&iParam1 != GET_PLAYER_ACTOR(0))
			{
				MEMORY_IDENTIFY(&iParam1, &uVar1);
				MEMORY_CONSIDER_AS(&iParam1, &uVar1, bParam2);
			}
		}
		bVar0++;
	}
	return;
}

void Function_136(struct<921> Param0) //Position: 0x6878 / 26744
{
	Param0.f_920 = iParam1;
	return;
}

void Function_137(struct<913> Param0) //Position: 0x6886 / 26758
{
	Param0.f_912 = iParam1;
	return;
}

bool Function_138(bool bParam0) //Position: 0x6894 / 26772
{
	if (Function_239(&bParam0) == 1)
	{
		if (Function_140(&bParam0 + 1880, &Global_54076) || Function_139(&bParam0, &Global_54076))
		{
			return 1;
		}
	}
	if (Function_239(&bParam0) == 2)
	{
		if (Function_140(&bParam0 + 1960 + 80, &Global_54076))
		{
			return 1;
		}
	}
	return 0;
}

int Function_139(int iParam0, int iParam1) //Position: 0x68E5 / 26853
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(&iParam0 + 1576))
	{
		bVar0 = false;
		while (bVar0 < (GET_NUM_DRAFT_POSITIONS(&iParam0 + 1576) - 1))
		{
			if (GET_LAST_ATTACKER(GET_DRAFT_ACTOR(bVar0, &iParam0 + 1576)) == &iParam1)
			{
				return 1;
			}
			bVar0++;
		}
	}
	return 0;
}

bool Function_140(var uParam0, int iParam1) //Position: 0x692D / 26925
{
	int iVar0;
	bool bVar1;
	int iVar2;
	var uVar3;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(&iParam1))
	{
		return 0;
	}
	iVar0 = 0;
	iVar2 = SQUAD_GET_SIZE(&uParam0);
	bVar1 = false;
	while (bVar1 < (iVar2 - 1))
	{
		uVar3 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar1);
		if (IS_ACTOR_VALID(&uVar3))
		{
			if ((GET_CURRENT_GAME_TIME() - GET_LAST_HIT_TIME(&uVar3)) > 1.0f)
			{
				if (GET_LAST_ATTACKER(&uVar3) == &iParam1)
				{
					iVar0 = 1;
				}
			}
		}
		bVar1++;
	}
	return iVar0;
}

void Function_141(struct<1089> Param0) //Position: 0x699F / 27039
{
	if (Function_239(&Param0) == 1)
	{
		Function_194(368, 1);
		Function_70(371, 1, 0, 0);
		Function_193(370, (Function_47(370) + 1.0f));
		Function_189(200, 1, 0);
	}
	else if (Function_239(&Param0) == 2)
	{
		Function_194(367, 1);
		Function_70(371, 1, 0, 0);
		Function_193(370, (Function_47(370) + 1.0f));
		Function_70(370, 1, 0, 0);
		if (&bParam1)
		{
			Function_186(Function_187(1, 1, 1, 0, 0), 1, 1);
		}
		Function_176(50, 1, 0);
	}
	Function_142(&Param0, 2);
	Param0.f_1088 = 2;
	return;
}

void Function_142(struct<1089> Param0) //Position: 0x6A38 / 27192
{
	int iVar0;
	
	if (Param0.f_1088 != 0 && iParam1 != 1)
	{
		Param0.f_1088 = iParam1;
	}
	else if (Param0.f_1088 == 1)
	{
		Param0.f_1088 = iParam1;
		if (Param0.f_916 != 4294967295)
		{
			if (Param0.f_1088 == 2)
			{
				iVar0 = Function_175(&Param0);
				if ((iVar0 == 4294967295 && iVar0 == 0) && Function_174(&Param0) != 1)
				{
					Function_145(Param0.f_916, iVar0, 1);
				}
				if (Param0.f_912 != 1 || Param0.f_912 != 0)
				{
					Function_189(200, 1, 0);
				}
				else
				{
					Function_176(50, 1, 0);
				}
				if (Param0.f_616 > 0)
				{
					Function_186(Param0.f_616, 1, 1);
				}
				else
				{
					Function_143(Param0.f_616, 1);
				}
			}
			else if (Param0.f_1088 == 3)
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

int Function_143(bool bParam0, bool bParam1) //Position: 0x6B1D / 27421
{
	bool bVar0;
	
	bVar0 = Function_50(0);
	if ((Function_50(0) - bParam0) <= 0)
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
	if (&bParam1)
	{
		PRINT_MONEY(&(Global_55480[016]), bVar0, (bParam0 * 4294967295), 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_50(0));
	return 1;
}

int Function_144(int iParam0, bool bParam1, int iParam2) //Position: 0x6BAE / 27566
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_DECREASE_INT_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 5)
	{
		PRINTSTRING("STAT_DECREASE_INT_NOW: You cannot decrease this STAT_TYPE_LIFETIME: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_DECREASE_INT_NOW: You cannot decrease a STAT_TYPE_LIFETIME!");
		return 0;
	}
	if (Global_55480[iParam016].f_96 != 2 && Global_54086[iParam0] >= 0.0f)
	{
		Global_54086[iParam0] = 0.0f;
		return 1;
	}
	if (bParam1 <= 0)
	{
		LOG_ERROR("STAT_DECREASE_INT_NOW: iDecreaseValue < 0 - I am turning this into a positive number for you!");
		bParam1 = ABS(bParam1);
	}
	Global_54086[iParam0] = (Global_54086[iParam0] - TO_FLOAT(bParam1));
	Function_48(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_36(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
	}
	if (Global_55480[iParam016].f_96 == 2)
	{
		iVar1 = 0;
		while (iVar1 <= bParam1)
		{
			REMOVE_COLLECTABLE(&(Global_55480[iParam016]), &Global_54076);
			iVar1++;
		}
	}
	return 1;
}

void Function_145(int iParam0, char* cParam1, bool bParam2) //Position: 0x6DAB / 28075
{
	char* cVar0[32];
	
	if (!Function_173(3))
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
			if (&bParam2)
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

void Function_146(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x6EC1 / 28353
{
	char* cVar0[32];
	char* cVar8[32];
	
	strcpy(&cVar0, "OUT_", 32);
	stradd(&cVar0, &Global_42265[bParam09] + 32, 32);
	if (!Function_171(bParam0))
	{
		LOG_ERROR("Attempting to add scrap to invalid outfit");
		return;
	}
	if (!Function_173(3) || iParam3)
	{
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_170(bParam0, 2))
	{
		Function_70(456, 1, 0, 0);
		Function_169(bParam0, 2);
		if (!&bParam2)
		{
			cVar8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
			stradd(&cVar8, "_tip", 32);
			Function_168(&cVar8, 10.0f, 1, 0, 0, 1, 0);
		}
	}
	bParam2 = &bParam2;
	if (!Function_167(bParam0, bParam1))
	{
		Global_42265[bParam09].f_4 = (StackVal || bParam1);
		Function_169(bParam0, 1048576);
		if (&bParam4)
		{
			if (!Function_166(0, 0, 1, 1))
			{
				Function_24(1);
				Function_23(1, 0);
			}
			else
			{
				Function_165();
			}
		}
		Function_160(bParam0);
		if (StackVal && !Function_86(((((!Function_159() && !Global_6623) && !Global_6635) && !Global_6627) && !&bParam2), 1))
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Edit", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (StackVal || Function_86((((Function_159() || Global_6623) || Global_6635) || Global_6627), 1))
		{
			if (!DECOR_CHECK_EXIST(&Global_54076, "outfitScrap"))
			{
				DECOR_SET_INT(&Global_54076, "outfitScrap", bParam0);
			}
		}
		if (!Function_12())
		{
			if (!Function_158(Global_119934, 2))
			{
				Function_153(&Global_54076, 2, 1, 0);
			}
		}
		if (Global_42827 == bParam0)
		{
			Global_42827.f_16 = 1;
			Function_148();
		}
		Global_42827.f_16 = 1;
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
				Function_69(2, 24);
				break;
			
			case 0x00000003:
				Function_69(2, 25);
				break;
			
			case 0x0000000F:
				Function_69(2, 26);
				break;
			
			case 0x0000000D:
				Function_69(2, 27);
				break;
			
			case 0x0000000E:
				Function_69(2, 28);
				break;
			}
	}
}

void Function_147(int iParam0, bool bParam1) //Position: 0x7160 / 29024
{
	if (iParam0 < 16 || iParam0 != 4294967295)
	{
		LOG_ERROR("STAT_SET_BIT: Attempting to use a Stat out of bounds.");
		return;
	}
	if (&bParam1 > 0)
	{
		(*&Global_21369 + 260)[iParam0] = ((*&Global_21369 + 260)[iParam0] || bParam1);
	}
	return;
	return;
}

void Function_148() //Position: 0x71CF / 29135
{
	if (Function_171(Global_42827))
	{
		if (Global_42827.f_16)
		{
			if (IS_BLIP_VALID(&Global_42827 + 8))
			{
				REMOVE_BLIP(&Global_42827 + 8);
			}
			Global_42827.f_4 = Function_152(Global_42827);
			*(&Global_42827 + 8) = Function_149(StackVal, Global_42827);
			Global_42827.f_16 = 0;
		}
		else if (!IS_BLIP_VALID(&Global_42827 + 8))
		{
			Global_42827.f_4 = Function_152(Global_42827);
			*(&Global_42827 + 8) = Function_149(StackVal, Global_42827);
			Global_42827.f_16 = 0;
		}
	}
	return;
}

int Function_149(int iParam0, int iParam1) //Position: 0x724F / 29263
{
	struct<2> Var0;
	struct<9> Var2;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	
	iVar13 = 1;
	iVar14 = 1;
	iVar15 = 1;
	iVar16 = 1;
	iVar17 = 1;
	switch (iParam0)
	{
		case 0x00000000:
			break;
		
		case 0x00000004:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46796[2]9] + 8;
					strcpy(&cVar5, "out_dnd_blip1", 32);
					break;
				
				case 0x00000002:
					if (Function_151(6, 0) || Function_151(12, 0))
					{
						cVar4 = &Global_44085[Global_46760[1]9] + 8;
					}
					strcpy(&cVar5, "out_dnd_blip2", 32);
					break;
				
				case 0x00000004:
					cVar4 = &Global_44085[Global_46760[0]9] + 8;
					strcpy(&cVar5, "out_dnd_blip3", 32);
					break;
				
				case 0x00000008:
					cVar4 = &Global_44085[Global_46760[0]9] + 8;
					strcpy(&cVar5, "out_dnd_blip4", 32);
					break;
				
				case 0x00000010:
					Var0 = Vector(-2177,057f, 16,426f, 2626,285f);
					vVar2 = Vector(400.0f, 400.0f, 400.0f);
					strcpy(&cVar5, "out_dnd_blip5", 32);
					break;
				
				case 0x00000020:
					cVar4 = &Global_44085[Global_46816[1]9] + 8;
					strcpy(&cVar5, "out_dnd_blip6", 32);
					break;
			}
			break;
		
		case 0x00000005:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46816[1]9] + 8;
					strcpy(&cVar5, "out_rustler_blip1", 32);
					break;
				
				case 0x00000002:
					cVar4 = &Global_44085[Global_46816[0]9] + 8;
					strcpy(&cVar5, "out_rustler_blip2", 32);
					break;
				
				case 0x00000004:
					cVar4 = &Global_44085[Global_46816[0]9] + 8;
					strcpy(&cVar5, "out_rustler_blip3", 32);
					break;
				
				case 0x00000008:
					cVar4 = &Global_44085[Global_46816[0]9] + 8;
					strcpy(&cVar5, "out_rustler_blip4", 32);
					break;
				
				case 0x00000010:
					cVar4 = &Global_44085[Global_46736[2]9] + 8;
					vVar2 = Vector(400.0f, 400.0f, 400.0f);
					strcpy(&cVar5, "out_rustler_blip5", 32);
					break;
				
				case 0x00000020:
					cVar4 = &Global_44085[Global_46816[1]9] + 8;
					strcpy(&cVar5, "out_rustler_blip6", 32);
					break;
			}
			break;
		
		case 0x00000006:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46796[7]9] + 8;
					strcpy(&cVar5, "out_treasur_blip1", 32);
					break;
				
				case 0x00000002:
					if (Function_150(13) && iVar14)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar14 = 0;
					}
					else if (iVar14 && Function_151(5, 0))
					{
						Var0 = Vector(-4120,147f, 18,356f, 3039,531f);
						vVar2 = Vector(500.0f, 500.0f, 500.0f);
						iVar14 = 0;
					}
					strcpy(&cVar5, "out_treasur_blip2", 32);
					break;
				
				case 0x00000004:
					cVar4 = &Global_44085[Global_46796[1]9] + 8;
					strcpy(&cVar5, "out_treasur_blip3", 32);
					break;
				
				case 0x00000008:
					cVar4 = &Global_44085[Global_46796[1]9] + 8;
					strcpy(&cVar5, "out_treasur_blip4", 32);
					break;
				
				case 0x00000010:
					cVar4 = &Global_44085[Global_46796[3]9] + 8;
					strcpy(&cVar5, "out_treasur_blip5", 32);
					break;
				
				case 0x00000020:
					cVar4 = &Global_44085[Global_46816[1]9] + 8;
					strcpy(&cVar5, "out_treasur_blip6", 32);
					break;
			}
			break;
		
		case 0x00000007:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46850[3]9] + 8;
					strcpy(&cVar5, "out_bandito_blip1", 32);
					break;
				
				case 0x00000002:
					cVar4 = &Global_44085[Global_46866[0]9] + 8;
					strcpy(&cVar5, "out_bandito_blip2", 32);
					break;
				
				case 0x00000004:
					cVar4 = &Global_44085[Global_46894[2]9] + 8;
					strcpy(&cVar5, "out_bandito_blip3", 32);
					break;
				
				case 0x00000008:
					cVar4 = &Global_44085[Global_46866[0]9] + 8;
					strcpy(&cVar5, "out_bandito_blip4", 32);
					break;
				
				case 0x00000010:
					Var0 = Vector(-4178,186f, 32,616f, 4582,207f);
					vVar2 = Vector(500.0f, 500.0f, 500.0f);
					strcpy(&cVar5, "out_bandito_blip5", 32);
					break;
				
				case 0x00000020:
					cVar4 = &Global_44085[Global_46866[0]9] + 8;
					strcpy(&cVar5, "out_bandito_blip6", 32);
					break;
			}
			break;
		
		case 0x00000008:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46866[4]9] + 8;
					strcpy(&cVar5, "out_rebel_blip1", 32);
					break;
				
				case 0x00000002:
					if (Function_150(26) && iVar15)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_150(25) && iVar15)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_150(24) && iVar15)
					{
						cVar4 = &Global_44085[Global_46894[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_150(23) && iVar15)
					{
						cVar4 = &Global_44085[Global_46850[1]9] + 8;
						iVar15 = 0;
					}
					else if (iVar15 && Function_151(26, 0))
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar15 = 0;
					}
					strcpy(&cVar5, "out_rebel_blip2", 32);
					break;
				
				case 0x00000004:
					cVar4 = &Global_44085[Global_46866[0]9] + 8;
					strcpy(&cVar5, "out_rebel_blip3", 32);
					break;
				
				case 0x00000008:
					if (Function_150(55) && iVar16)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar16 = 0;
					}
					else if (Function_150(54) && iVar16)
					{
						cVar4 = &Global_44085[Global_46894[0]9] + 8;
						iVar16 = 0;
					}
					else if (Function_150(27) && iVar16)
					{
						cVar4 = &Global_44085[Global_46894[0]9] + 8;
						iVar16 = 0;
					}
					strcpy(&cVar5, "out_rebel_blip4", 32);
					break;
				
				case 0x00000010:
					cVar4 = &Global_44085[Global_46894[3]9] + 8;
					strcpy(&cVar5, "out_rebel_blip5", 32);
					break;
				
				case 0x00000020:
					cVar4 = &Global_44085[Global_46850[0]9] + 8;
					strcpy(&cVar5, "out_rebel_blip6", 32);
					break;
			}
			break;
		
		case 0x00000009:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46926[5]9] + 8;
					strcpy(&cVar5, "out_military_blip1", 32);
					break;
				
				case 0x00000002:
					cVar4 = &Global_44085[Global_46926[2]9] + 8;
					strcpy(&cVar5, "out_military_blip2", 32);
					break;
				
				case 0x00000004:
					cVar4 = &Global_44085[Global_46914[0]9] + 8;
					strcpy(&cVar5, "out_military_blip3", 32);
					break;
				
				case 0x00000008:
					if (Function_150(52) && iVar13)
					{
						cVar4 = &Global_44085[Global_46926[2]9] + 8;
						iVar13 = 0;
					}
					else if (Function_150(51) && iVar13)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar13 = 0;
					}
					else if (Function_150(50) && iVar13)
					{
						cVar4 = &Global_44085[Global_46796[4]9] + 8;
						iVar13 = 0;
					}
					else if (Function_150(49) && iVar13)
					{
						cVar4 = &Global_44085[Global_46816[1]9] + 8;
						iVar13 = 0;
					}
					else if (Function_151(17, 0) && iVar13)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar13 = 0;
					}
					strcpy(&cVar5, "out_military_blip4", 32);
					break;
				
				case 0x00000010:
					cVar4 = &Global_44085[Global_46914[0]9] + 8;
					strcpy(&cVar5, "out_military_blip5", 32);
					break;
				
				case 0x00000020:
					cVar4 = &Global_44085[Global_46914[0]9] + 8;
					strcpy(&cVar5, "out_military_blip6", 32);
					break;
			}
			break;
		
		case 0x00000002:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46760[4]9] + 8;
					strcpy(&cVar5, "out_gun_blip1", 32);
					break;
				
				case 0x00000002:
					cVar4 = &Global_44085[Global_46760[2]9] + 8;
					strcpy(&cVar5, "out_gun_blip2", 32);
					break;
				
				case 0x00000004:
					cVar4 = &Global_44085[Global_46760[0]9] + 8;
					strcpy(&cVar5, "out_gun_blip3", 32);
					break;
				
				case 0x00000008:
					cVar4 = &Global_44085[Global_46760[0]9] + 8;
					strcpy(&cVar5, "out_gun_blip4", 32);
					break;
				
				case 0x00000010:
					if (Function_150(19) && iVar17)
					{
						Var0 = Vector(-1708,36f, 46,18f, 2175,89f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if ((Function_151(6, 0) && Function_150(18)) && iVar17)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar17 = 0;
					}
					else if (Function_150(17) && iVar17)
					{
						Var0 = Vector(-1687,208f, 53,208f, 2140,491f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if ((Function_151(9, 0) && Function_150(16)) && iVar17)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar17 = 0;
					}
					else if (Function_150(15) && iVar17)
					{
						Var0 = Vector(-1709,084f, 55,216f, 2104,631f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if (Function_151(8, 0) && iVar17)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar17 = 0;
					}
					strcpy(&cVar5, "out_gun_blip5", 32);
					break;
			}
			break;
		
		case 0x00000003:
			switch (iParam1)
			{
				case 0x00000001:
					cVar4 = &Global_44085[Global_46816[1]9] + 8;
					strcpy(&cVar5, "out_suit_blip1", 32);
					break;
			}
			break;
		
		default:
			break;
	}
	if (Function_520(StackVal, Var0))
	{
		if (IS_OBJECT_VALID(&cVar4))
		{
			GET_OBJECT_POSITION(&cVar4, &Var0);
			if (Function_520(StackVal, vVar2))
			{
				if (GET_OBJECT_TYPE(&cVar4) == 9)
				{
					GET_VOLUME_SCALE(&cVar4, &vVar2);
				}
				else
				{
					vVar2 = Vector(200.0f, 200.0f, 200.0f);
				}
			}
		}
	}
	if (!Function_520(StackVal, vVar2))
	{
		iVar18 = ADD_BLIP_FOR_COORD(&Var0, 440, 0, 2, 0);
		SET_BLIP_SCALE(&iVar18, ((vVar2.x + vVar2.z) / 2.0f));
		SET_BLIP_COLOR(&iVar18, 0,58f, 0,35f, 0,72f, 0,5f);
		SET_BLIP_PRIORITY(&iVar18, 3);
		SET_BLIP_NAME(&iVar18, &cVar5);
		return &iVar18;
	}
	return "";
}

int Function_150(int iParam0) //Position: 0x7EB2 / 32434
{
	if (Global_116927[iParam06] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_151(int iParam0, bool bParam1) //Position: 0x7EC7 / 32455
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
	if (!&bParam1)
	{
		if (StackVal == 4)
		{
			return 1;
		}
	}
	return 0;
}

int Function_152(int iParam0) //Position: 0x7F05 / 32517
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
	while (iVar1 <= Global_42265[iParam09].f_28)
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

void Function_153(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x7F54 / 32596
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_155(&uParam0, iParam1, &iParam2) && !&bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(&uParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_154(&cVar1, &iParam2);
	if (!DECOR_CHECK_EXIST(&uParam0, &cVar1))
	{
		DECOR_SET_INT(&uParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(&uParam0, &cVar1, (DECOR_GET_INT(&uParam0, &cVar1) || bVar0));
	}
}

void Function_154(char* cParam0) //Position: 0x7FC9 / 32713
{
	if (iParam1 == 1)
	{
		return;
	}
	if (iParam1 == 2)
	{
		stradd(&cParam0, "2", 16);
	}
	if (iParam1 == 3)
	{
		stradd(&cParam0, "3", 16);
	}
	if (iParam1 == 4)
	{
		stradd(&cParam0, "4", 16);
	}
	return;
}

bool Function_155(int iParam0, var uParam1, int iParam2) //Position: 0x8004 / 32772
{
	var uVar0;
	char* cVar1[16];
	
	uVar0 = uParam1;
	strcpy(&cVar1, "tutorial", 16);
	if (Global_6623)
	{
		return 0;
	}
	if (DECOR_CHECK_EXIST(&iParam0, &cVar1))
	{
		if (Function_157(DECOR_GET_INT(&iParam0, &cVar1)) > 3)
		{
			return 0;
		}
	}
	if (&iParam2 == 1)
	{
		if (Global_6646 || Global_6647)
		{
			return 0;
		}
	}
	if (&iParam2 == 2)
	{
		switch (Function_156(uVar0))
		{
			case 0x00000002:
				if (!Function_158(Global_119935, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_156(char* cParam0) //Position: 0x8080 / 32896
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

int Function_157(int iParam0) //Position: 0x8121 / 33057
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

bool Function_158(int iParam0, int iParam1) //Position: 0x815E / 33118
{
	if ((iParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

bool Function_159() //Position: 0x8171 / 33137
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_160(bool bParam0) //Position: 0x819E / 33182
{
	char* cVar0[32];
	char* cVar8[32];
	struct<8> Var16;
	bool bVar24;
	
	strcpy(&cVar0, "OUT_", 32);
	strcpy(&cVar8, "out_", 32);
	stradd(&cVar0, &Global_42265[bParam09] + 32, 32);
	stradd(&cVar8, &Global_42265[bParam09] + 32, 32);
	stradd(&cVar8, "_hint", 32);
	if (!IS_JOURNAL_ENTRY_IN_LIST(Global_42265[bParam09].f_64, 0) && !IS_JOURNAL_ENTRY_IN_LIST(Global_42265[bParam09].f_64, 1))
	{
		Global_42265[bParam09].f_64 = CREATE_JOURNAL_ENTRY(&cVar0, 4, bParam0, 0);
		APPEND_JOURNAL_ENTRY(Global_42265[bParam09].f_64, 0);
		bVar24 = false;
		while (bVar24 <= Global_42265[bParam09].f_28)
		{
			Var16 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar8 };
			straddi(&Var16, bVar24 + 1, 32);
			if (Function_167(bParam0, Function_164(bVar24)))
			{
				PREPEND_JOURNAL_ENTRY_DETAIL(Global_42265[bParam09].f_64, &Var16, 0, 4, false);
			}
			else
			{
				PREPEND_JOURNAL_ENTRY_DETAIL(Global_42265[bParam09].f_64, &Var16, 0, 3, false);
			}
			bVar24++;
		}
	}
	else if (IS_JOURNAL_ENTRY_IN_LIST(Global_42265[bParam09].f_64, 0))
	{
		bVar24 = false;
		while (bVar24 <= Global_42265[bParam09].f_28)
		{
			Var16 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar8 };
			straddi(&Var16, bVar24 + 1, 32);
			if (Function_167(bParam0, Function_164(bVar24)))
			{
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_42265[bParam09].f_64, &Var16, 4, 0);
			}
			else
			{
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_42265[bParam09].f_64, &Var16, 3, 0);
			}
			bVar24++;
		}
	}
	if (Global_42265[bParam09].f_64 == 4294967295 && Global_42265[bParam09].f_64 == 0)
	{
		SET_JOURNAL_ENTRY_PROGRESS(Global_42265[bParam09].f_64, (TO_FLOAT(Function_163(bParam0)) / TO_FLOAT(Global_42265[bParam09].f_28)), 0, 0);
		Function_162(Global_42265[bParam09].f_64, 0);
		straddi(&cVar8, Function_161(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_42265[bParam09].f_64, &cVar8, 3);
	}
	return;
}

int Function_161(int iParam0) //Position: 0x834E / 33614
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
	while (iVar1 <= Global_42265[iParam09].f_28)
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

void Function_162(var uParam0, int iParam1) //Position: 0x83A5 / 33701
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

var Function_163(int iParam0) //Position: 0x83CA / 33738
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
	while (iVar1 <= Global_42265[iParam09].f_28)
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

int Function_164(bool bParam0) //Position: 0x8420 / 33824
{
	return SHIFT_LEFT(true, bParam0);
}

void Function_165() //Position: 0x842C / 33836
{
	return;
}

bool Function_166(var uParam0, int iParam1, var uParam2, var uParam3) //Position: 0x8432 / 33842
{
	uParam0 = &uParam0;
	if (Global_6623 && !&iParam1 != 1)
	{
		return 1;
	}
	if (Global_6625 && !&iParam1 != 2)
	{
		return 1;
	}
	if (Global_6635 && !&iParam1 != 6)
	{
		return 1;
	}
	if (Global_6627 && !&iParam1 != 4)
	{
		return 1;
	}
	if (Global_6636 && uParam2)
	{
		return 1;
	}
	if (Global_6638 || Global_6639)
	{
		return 1;
	}
	if (Global_6628 && !&iParam1 != 3)
	{
		return 1;
	}
	if (Global_93258 && uParam2)
	{
		return 1;
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "bPlayerSleeping"))
	{
		return 1;
	}
	return 0;
}

bool Function_167(bool bParam0, int iParam1) //Position: 0x84E1 / 34017
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

void Function_168(char* cParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x8540 / 34112
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, (&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_19(Global_10966) };
		}
		PRINT_HELP_B(&cParam0, &fParam1, &iParam2, &iParam3, &iParam4, &iParam5, &Var0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(&cParam0, &fParam1, &iParam2, &iParam3, &iParam4, &iParam5, &uVar4, &iParam6);
	}
}

void Function_169(int iParam0, int iParam1) //Position: 0x85CB / 34251
{
	if (!Function_171(iParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_42265[iParam09].f_8 = (StackVal || iParam1);
	return;
}

bool Function_170(int iParam0, int iParam1) //Position: 0x8620 / 34336
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

bool Function_171(int iParam0) //Position: 0x864D / 34381
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

bool Function_172() //Position: 0x8663 / 34403
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return Function_86(GET_GAME_EDITION(), 16);
	}
	return 0;
}

bool Function_173(int iParam0) //Position: 0x8693 / 34451
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_39290[iParam0];
}

int Function_174(struct<1049> Param0) //Position: 0x86AF / 34479
{
	return !Function_86(Param0.f_1048, 16384);
}

var Function_175(struct<921> Param0) //Position: 0x86C2 / 34498
{
	return Param0.f_920;
}

void Function_176(int iParam0, bool bParam1, bool bParam2) //Position: 0x86CE / 34510
{
	int iVar0;
	bool bVar1;
	
	if (Function_185(0) && (!Global_6623 || iParam0 == 100))
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_79())
	{
		bVar1 = (bVar1 / 2);
	}
	if (Global_6623)
	{
		Global_21369.f_256 = (Global_21369.f_256 + iParam0);
		return;
	}
	if (bVar1 == 0)
	{
		return;
	}
	iVar0 = Function_50(3);
	Function_183();
	if ((iVar0 + bVar1) >= 10000)
	{
		bVar1 = (10000 - iVar0);
	}
	if (&bParam1)
	{
		Function_194(3, bVar1);
		if (!&bParam2)
		{
			if (!Function_158(Global_119936, 4))
			{
				Function_153(&Global_54076, 4, 3, 0);
			}
		}
	}
	else
	{
		Function_70(3, bVar1, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_46(3));
	iVar0 = Function_50(3);
	switch (Global_21369.f_248)
	{
		case 0x00000000:
			if (iVar0 > 1000)
			{
				Global_21369.f_248 = 1;
				Function_178(4, Function_182(Global_21369.f_248), 1);
				Function_177(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000001:
			if (iVar0 > 2000)
			{
				Global_21369.f_248 = 2;
				Function_178(4, Function_182(Global_21369.f_248), 1);
				Function_177(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000002:
			if (iVar0 > 4000)
			{
				Global_21369.f_248 = 3;
				Function_178(4, Function_182(Global_21369.f_248), 1);
				Function_177(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000003:
			if (iVar0 > 7000)
			{
				Global_21369.f_248 = 4;
				Function_178(4, Function_182(Global_21369.f_248), 1);
				Function_177(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000004:
			if (iVar0 > 10000)
			{
				Global_21369.f_248 = 5;
				Function_178(4, Function_182(Global_21369.f_248), 1);
				Function_177(Global_21369.f_244, Global_21369.f_248);
				if (Global_21369.f_244 != 6 || Global_21369.f_244 != 0)
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

void Function_177(int iParam0, int iParam1) //Position: 0x88A2 / 34978
{
	switch (iParam1)
	{
		case 0x00000000:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(&Global_54076, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(&Global_54076, 0,2f);
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
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(&Global_54076, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(&Global_54076, 0,3f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, 0);
			break;
		
		case 0x00000003:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(&Global_54076, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(&Global_54076, 0,4f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, 0);
			break;
		
		case 0x00000004:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(&Global_54076, 120.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(&Global_54076, 0,5f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, 0);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, 1);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, 1);
			break;
		
		case 0x00000005:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(&Global_54076, 180.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(&Global_54076, 0,8f);
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
			SET_ACTOR_SHOULD_TAUNT(&Global_54076, 1);
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
			SET_ACTOR_SHOULD_TAUNT(&Global_54076, 0);
			break;
		
		default:
			break;
	}
	return;
}

int Function_178(int iParam0, char* cParam1) //Position: 0x8B0C / 35596
{
	bool bVar0;
	int iVar1;
	
	bVar0 = iParam0;
	if (bVar0 >= 696)
	{
		LOG_ERROR("STAT_SET_VALUE: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 20 && Global_55480[iParam016].f_96 == 18)
	{
		PRINTSTRING("STAT_SET_STRING_VALUE: You cannot set a string value for this STAT:");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_STRING_VALUE: You cannot set a string value for this STAT.");
		return 0;
	}
	Function_74(iParam0, &cParam1, 0, 1);
	iVar1 = Function_179();
	Global_77754[iVar1] = 0.0f;
	strcpy(&Global_77766[iVar116] + 32, &cParam1, 32);
	strcpy(&Global_77766[iVar116] + 16, "QME=", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	if (&bParam2)
	{
		Global_77766[iVar116].f_120 = 5;
	}
	else
	{
		Global_77766[iVar116].f_120 = 6;
	}
	return 1;
}

int Function_179() //Position: 0x8C9C / 35996
{
	int iVar0;
	
	iVar0 = (Global_77754 - 1);
	while (iVar0 > 0)
	{
		if (Global_77766[iVar016].f_96 == 4294967295)
		{
			return iVar0;
		}
		iVar0 = (iVar0 - 1);
	}
	LOG_ERROR("STAT_FIND_FIRST_EMPTY_SLOT_ON_STACK: too many synchronous Stat Updates! Dropping the oldest in the buffer");
	Function_180();
	return 0;
}

void Function_180() //Position: 0x8D3D / 36157
{
	int iVar0;
	int iVar1;
	
	iVar0 = (Global_77754 - 1);
	iVar1 = (iVar0 - 1);
	while (iVar1 > 0)
	{
		Global_77754[iVar0] = Global_77754[iVar1];
		Global_77766[iVar016] = { StackVal, Global_77766[iVar116] };
		*(&Global_77766[iVar016] + 16) = { StackVal, (&Global_77766[iVar116] + 16) };
		*(&Global_77766[iVar016] + 32) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Global_77766[iVar116] + 32) };
		Global_77766[iVar016].f_96 = Global_77766[iVar116].f_96;
		Global_77766[iVar016].f_116 = Global_77766[iVar116].f_116;
		Global_77766[iVar016].f_120 = Global_77766[iVar116].f_120;
		Function_181(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_181(int iParam0) //Position: 0x8DFB / 36347
{
	Global_77754[iParam0] = 0.0f;
	strcpy(&(Global_77766[iParam016]), "", 8);
	strcpy(&Global_77766[iParam016] + 16, "", 8);
	strcpy(&Global_77766[iParam016] + 32, "", 32);
	Global_77766[iParam016].f_96 = 4294967295;
	Global_77766[iParam016].f_100 = 4294967295;
	Global_77766[iParam016].f_116 = 4294967295;
	Global_77766[iParam016].f_120 = 4294967295;
	return;
}

var Function_182(int iParam0) //Position: 0x8E61 / 36449
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

void Function_183() //Position: 0x8EF0 / 36592
{
	Function_184(3, 0.0f);
	Function_193(3, 10000.0f);
	return;
}

int Function_184(int iParam0, int iParam1) //Position: 0x8F06 / 36614
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_108 = iParam1;
	return 1;
}

var Function_185(int iParam0) //Position: 0x8F46 / 36678
{
	return (*&Global_21369 + 168)[iParam0];
}

int Function_186(bool bParam0, bool bParam1, bool bParam2) //Position: 0x8F55 / 36693
{
	bool bVar0;
	
	bVar0 = Function_50(0);
	if ((Function_50(0) + bParam0) >= 999999)
	{
		bParam0 = (999999 - bVar0);
	}
	if (bParam0 >= 0)
	{
		Function_70(0, bParam0, 0, 0);
	}
	else
	{
		return 0;
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_50(0));
	if (&bParam1)
	{
		PRINT_MONEY(&(Global_55480[016]), bVar0, bParam0, 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	if (!Global_6627)
	{
		Function_70(597, bParam0, 0, 0);
	}
	if (&bParam2)
	{
		if ((Function_50(597) + Function_50(450)) >= 10000)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(24))
			{
				AWARD_ACHIEVEMENT(24);
			}
		}
	}
	return 1;
}

var Function_187(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x9027 / 36903
{
	float fVar0;
	
	switch (iParam0)
	{
		case 0x00000000:
			fVar0 = RAND_FLOAT_RANGE(4.0f, 6.0f);
			break;
		
		case 0x00000001:
			fVar0 = RAND_FLOAT_RANGE(18.0f, 24.0f);
			break;
		
		case 0x00000002:
			fVar0 = RAND_FLOAT_RANGE(45.0f, 55.0f);
			break;
		
		default:
			fVar0 = RAND_FLOAT_RANGE(4.0f, 6.0f);
			break;
	}
	switch (&iParam1)
	{
		case 0x00000000:
			fVar0 = (fVar0 * 0,75f);
			break;
		
		case 0x00000001:
			fVar0 = (fVar0 * 1.0f);
			break;
		
		case 0x00000002:
			fVar0 = (fVar0 * 1,25f);
			break;
		
		default:
			fVar0 = (fVar0 * 0,75f);
			break;
	}
	if (&bParam2)
	{
		fVar0 = (fVar0 * (0,75f + ((TO_FLOAT(Function_50(5)) / 100.0f) * 0,5f)));
	}
	if (&bParam3)
	{
		if (HAS_ITEM(Function_188(17), &Global_54076))
		{
			fVar0 = (fVar0 * 1,2f);
		}
	}
	if (&bParam4)
	{
		fVar0 = (fVar0 * 1,1f);
	}
	if (ROUND(fVar0) <= 1)
	{
		fVar0 = 1.0f;
	}
	return ROUND(fVar0);
}

var Function_188(bool bParam0) //Position: 0x912E / 37166
{
	int iVar0;
	
	iVar0 = SS_GET_STRING(1, bParam0);
	if (!IS_STRING_VALID(&iVar0))
	{
		PRINTSTRING("ITEM_GET_STRING_FROM_ENUM: Missing eSTRING_TYPE_ITEM_NAMES for this eItemsTypes value:");
		PRINTINT(bParam0);
		PRINTNL();
		LOG_ERROR("ITEM_GET_STRING_FROM_ENUM: Missing eSTRING_TYPE_ITEM_NAMES for this eItemsTypes value! Ask Christian to add it");
	}
	return &iVar0;
}

void Function_189(int iParam0, bool bParam1, bool bParam2) //Position: 0x9222 / 37410
{
	int iVar0;
	bool bVar1;
	
	if (Function_185(0) && !Global_6623)
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_79())
	{
		bVar1 = (bVar1 / 2);
	}
	if (Global_6623)
	{
		Global_21369.f_252 = (Global_21369.f_252 + iParam0);
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
	if (&bParam1)
	{
		if (bVar1 >= 0)
		{
			Function_194(1, bVar1);
			if (!&bParam2)
			{
				if (!Function_158(Global_119936, 1))
				{
					Function_153(&Global_54076, 1, 3, 0);
				}
			}
		}
		else
		{
			Function_191(1, (4294967295 * bVar1));
			if (!Global_6623)
			{
				if (!Function_158(Global_119936, 2))
				{
					Function_153(&Global_54076, 2, 3, 0);
				}
			}
		}
	}
	else if (bVar1 >= 0)
	{
		Function_70(1, bVar1, 0, 0);
	}
	else
	{
		Function_144(1, (4294967295 * bVar1), 0);
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
	switch (Global_21369.f_244)
	{
		case 0x00000000:
			if (iVar0 >= 4294962796)
			{
				Global_21369.f_244 = 1;
				Function_178(2, Function_190(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_21369.f_244 = 0;
				Function_178(2, Function_190(Global_21369.f_244), 0);
				if (Global_21369.f_248 == 5)
				{
					if (!HAS_ACHIEVEMENT_BEEN_PASSED(27))
					{
						AWARD_ACHIEVEMENT(27);
					}
				}
			}
			else if (iVar0 >= 4294964796)
			{
				Global_21369.f_244 = 2;
				Function_178(2, Function_190(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_21369.f_244 = 1;
				Function_178(2, Function_190(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_21369.f_244 = 3;
				Function_178(2, Function_190(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000003:
			if (HAS_ITEM("HONOR_ROSARY", &Global_54076))
			{
				DELETE_ITEM("HONOR_ROSARY", &Global_54076, 0);
			}
			if (iVar0 < 4294966296)
			{
				Global_21369.f_244 = 2;
				Function_178(2, Function_190(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_21369.f_244 = 4;
				Function_178(2, Function_190(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_21369.f_244 = 3;
				Function_178(2, Function_190(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_21369.f_244 = 5;
				Function_178(2, Function_190(Global_21369.f_244), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_21369.f_244 = 4;
				Function_178(2, Function_190(Global_21369.f_244), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_21369.f_244 = 6;
				Function_178(2, Function_190(Global_21369.f_244), 1);
				if (Global_21369.f_248 == 5)
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
				Global_21369.f_244 = 5;
				Function_178(2, Function_190(Global_21369.f_244), 0);
			}
			break;
	}
	Function_177(Global_21369.f_244, Global_21369.f_248);
	return;
}

var Function_190(int iParam0) //Position: 0x9549 / 38217
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

int Function_191(int iParam0, bool bParam1) //Position: 0x95EC / 38380
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
		if (Global_77766[iVar116].f_120 != 2 || Global_77766[iVar116].f_120 != 3)
		{
			Global_77754[iVar1] = (Global_77754[iVar1] + TO_FLOAT(bParam1));
			strcpy(&Global_77766[iVar116] + 16, "QME-", 8);
			strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
			Global_77766[iVar116].f_96 = 26;
			Global_77766[iVar116].f_116 = iParam0;
			Global_77766[iVar116].f_120 = 2;
			return 1;
		}
	}
	iVar1 = Function_179();
	Global_77754[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_77766[iVar116] + 16, "QME-INT", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	Global_77766[iVar116].f_120 = 3;
	return 1;
}

var Function_192(int iParam0, int iParam1) //Position: 0x9797 / 38807
{
	int iVar0;
	
	iVar0 = (Global_77754 - 1);
	while (iVar0 > 0)
	{
		if (Global_77766[iVar016].f_116 == iParam0)
		{
			if (&iParam1 == 4294967295)
			{
				return iVar0;
			}
			if (iVar0 != &iParam1)
			{
				return iVar0;
			}
		}
		iVar0 = (iVar0 - 1);
	}
	return 4294967295;
}

int Function_193(int iParam0, int iParam1) //Position: 0x97DC / 38876
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_112 = iParam1;
	return 1;
}

int Function_194(int iParam0, bool bParam1) //Position: 0x981C / 38940
{
	bool bVar0;
	int iVar1;
	
	Function_70(iParam0, bParam1, 0, 0);
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
		if (Global_77766[iVar116].f_120 != 0 || Global_77766[iVar116].f_120 != 1)
		{
			Global_77754[iVar1] = (Global_77754[iVar1] + TO_FLOAT(bParam1));
			strcpy(&Global_77766[iVar116] + 16, "QME+", 8);
			strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
			Global_77766[iVar116].f_96 = 26;
			Global_77766[iVar116].f_116 = iParam0;
			Global_77766[iVar116].f_120 = 0;
			return 1;
		}
	}
	iVar1 = Function_179();
	Global_77754[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_77766[iVar116] + 16, "QME+INT", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = iParam0;
	Global_77766[iVar116].f_120 = 1;
	return 1;
}

bool Function_195(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, float fParam6, int iParam7, var uParam8, var uParam9, float fParam10, int iParam11, var uParam12, bool bParam13, float fParam14, int iParam15, float fParam16, bool bParam17, float fParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, int iParam23, float fParam24) //Position: 0x99C8 / 39368
{
	int iVar0;
	
	uParam9 = uParam9;
	fParam18 = &fParam18;
	bParam17 = &bParam17;
	if (!IS_ACTOR_VALID(&iParam0))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(&iParam1))
	{
		return 0;
	}
	if (GET_LAST_ATTACKER(&iParam0) == &Global_54076)
	{
		TASK_FLEE_ACTOR(&iParam0, &Global_54076, 150.0f, -1.0f, 0, 0, 0);
		return 0;
	}
	switch (uParam3)
	{
		case 0x00000000:
			if (&bParam21)
			{
				uParam3 = 3;
			}
			else
			{
				MEMORY_CLEAR_EVENTS(&iParam0, 0);
				ACTOR_START_FORCE_HOLSTER(&iParam0, 1, 0);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(&iParam0, 1);
				AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&iParam0, 1);
				SET_ACTOR_ALLOW_BUMP_REACTIONS(&iParam0, 0);
				uParam2 = Function_204(&iParam0, &Global_54076);
				AI_GOAL_LOOK_AT_ACTOR_NEW(&iParam0, &iParam1, -1.0f, 1);
				uParam8 = CREATE_POINT_IN_LAYOUT(StackVal, StackVal, &uParam5, Function_37(), Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f));
				ATTACH_OBJECTS(StackVal, StackVal, &uParam8, &iParam1, Function_37(), Vector(0.0f, 0,5f, &fParam16), Vector(0.0f, 0.0f, 0.0f), 4294967295);
				if (!CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &iParam0, 1.0f, &fParam14, 1, 1, 0) || Function_204(&Global_54076, &iParam0) > 2.0f)
				{
					TASK_FOLLOW_OBJECT_AT_DISTANCE(&iParam0, &uParam8, 1.0f, &iParam15);
					TASK_PRIORITY_SET(&iParam0, true);
				}
				uParam3 = 1;
			}
			break;
		
		case 0x00000001:
			if ((Function_204(&iParam0, &iParam1) - uParam2) < fParam6)
			{
				TASK_FLEE_ACTOR(&iParam0, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
				return 0;
			}
			if (CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &iParam0, 1.0f, &fParam14, 1, 1, 0))
			{
				iVar0 = TASK_SEQUENCE_OPEN();
				TASK_FACE_ACTOR(0, &iParam1, 0, 3212836864);
				TASK_FACE_ACTOR(0, &iParam1, 1, 3212836864);
				TASK_SEQUENCE_CLOSE();
				TASK_SEQUENCE_PERFORM(&iParam0, iVar0);
				TASK_SEQUENCE_RELEASE(iVar0, 1);
				TASK_PRIORITY_SET(&iParam0, true);
				uParam9 = 0;
				uParam3 = 4;
			}
			else if (!Function_200(&iParam0, 0))
			{
				if (IS_ACTOR_VALID(&iParam0))
				{
					TASK_FLEE_ACTOR(&iParam0, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
				}
				return 0;
			}
			break;
		
		case 0x00000003:
			RESET_ANIM_SET_FOR_ACTOR(&iParam0, 1);
			SET_ANIM_SET_FOR_ACTOR(&iParam0, &fParam10, 0);
			SET_ACTION_NODE_FOR_ACTOR(&iParam0, &iParam11);
			TASK_FACE_ACTOR(&iParam0, &iParam1, 1, 3212836864);
			uParam3 = 4;
			break;
		
		case 0x00000004:
			uParam9 = 0;
			if (GET_NTH_TASK_STATUS(&iParam0, 0) != 0 || bParam21)
			{
				if (!&bParam21)
				{
					SET_ANIM_SET_FOR_ACTOR(&iParam0, &fParam10, 1);
					SET_ACTION_NODE_FOR_ACTOR(&iParam0, &iParam11);
				}
				if (&bParam19)
				{
					Function_199(&iParam0, &Global_54076, "nThank_You", 0, 5, 60, 1, 1);
				}
				else
				{
					Function_199(&iParam0, &Global_54076, &uParam12, &bParam13, 5, 60, 1, 1);
				}
				uParam3 = 5;
				Function_198(&uParam4, 0.0f);
			}
			else if (!Function_200(&iParam0, 0))
			{
				return 0;
			}
			break;
		
		case 0x00000005:
			if (iParam23 && !Function_197(&iParam0))
			{
				if (&fParam24 != -1.0f)
				{
					if (!IS_AMBIENT_SPEECH_PLAYING(&iParam0))
					{
						RESET_ANIM_SET_FOR_ACTOR(&iParam0, 1);
						Function_196(&iParam0, 4, 0, 1);
					}
				}
				else if (Function_234(&uParam4, &fParam24))
				{
					RESET_ANIM_SET_FOR_ACTOR(&iParam0, 1);
					Function_196(&iParam0, 4, 0, 1);
				}
			}
			if (&bParam22)
			{
				if (!IS_AMBIENT_SPEECH_PLAYING(&iParam0))
				{
					if (!IS_AMBIENT_SPEECH_PLAYING(&Global_54076))
					{
						if (!IS_STRING_VALID(&bParam20))
						{
							SAY_SINGLE_LINE_CONTEXT(&Global_54076, 409, &iParam0, 0, 0, 5, 4294967295, 4294967295, 0, 1);
						}
						else
						{
							Function_199(&Global_54076, &iParam0, &bParam20, &bParam20, 5, 60, 1, 1);
						}
						uParam3 = 6;
					}
				}
			}
			else if (!IS_AMBIENT_SPEECH_PLAYING(&iParam0))
			{
				uParam3 = 6;
			}
			break;
		
		case 0x00000006:
			if (iParam23 && !Function_197(&iParam0))
			{
				if (Function_234(&uParam4, &fParam24))
				{
					RESET_ANIM_SET_FOR_ACTOR(&iParam0, 1);
					Function_196(&iParam0, 4, 0, 1);
				}
			}
			if (!IS_ACTION_NODE_PLAYING_PARTIAL(&iParam0, &iParam11) && !IS_AMBIENT_SPEECH_PLAYING(&Global_54076))
			{
				RESET_ANIM_SET_FOR_ACTOR(&iParam0, 1);
				iParam7 = 1;
				if (&bParam17)
				{
					Function_196(&iParam0, 4, 0, &iParam15);
					TASK_PRIORITY_SET(&iParam0, 2);
				}
				AI_GOAL_LOOK_CLEAR(&iParam0);
				ACTOR_END_FORCE_HOLSTER(&iParam0);
				MEMORY_SET_WEAPON_DRAW_PREFERENCE(&iParam0, 4294967295);
				return 1;
			}
			break;
	}
	return 1;
}

int Function_196(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x9DED / 40429
{
	bool bVar0;
	var uVar1;
	
	if (&iParam1 == 5)
	{
		LOG_ERROR("Please Use RELEASE_ACTOR_TO_ACTORROAM_GRINGO");
		LOG_ERROR("Switching to ACTORROAM_BEHAVIOR_DEFAULT for this actor");
		iParam1 = 0;
	}
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (!IS_ACTOR_VEHICLE(&iParam0))
		{
			SQUAD_LEAVE(&iParam0);
		}
		else
		{
			bVar0 = false;
			while (bVar0 < (GET_NUM_DRAFT_POSITIONS(&iParam0) - 1))
			{
				uVar1 = GET_DRAFT_ACTOR(bVar0, &iParam0);
				if (IS_ACTOR_VALID(&uVar1))
				{
					Function_108(&uVar1, 0, 0, 0, 1);
				}
				bVar0++;
			}
		}
		Function_108(&iParam0, &iParam1, &iParam2, &iParam3, 1);
	}
	else
	{
		return 0;
	}
	return 1;
}

bool Function_197(int iParam0) //Position: 0x9EDB / 40667
{
	if (!IS_ACTOR_VALID(&iParam0))
	{
		return 0;
	}
	if (IS_OBJECT_IN_OBJECTSET(GET_OBJECT_FROM_ACTOR(&iParam0), &Global_26172))
	{
		return 1;
	}
	return 0;
}

void Function_198(vector3 vParam0) //Position: 0x9F03 / 40707
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - bParam1);
	Function_58(&vParam0, 1);
	Function_25(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

void Function_199(int iParam0, int iParam1, var uParam2, bool bParam3, int iParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x9F28 / 40744
{
	iParam1 = &iParam1;
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (IS_ACTOR_ALIVE(&iParam0) && Function_204(&iParam0, &Global_54076) >= IntToFloat(&iParam5))
		{
			if (!IS_ACTOR_VALID(&iParam1))
			{
				iParam1 = "";
			}
			CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(&iParam0);
			if (&bParam6)
			{
				if (IS_ACTOR_HOGTIED(&iParam0))
				{
					if (!SAY_SINGLE_LINE_STRING_BEAT(&iParam0, &uParam2, &iParam1, 1, 1, &iParam4, &iParam7, 0, 0, 1))
					{
						bParam3 = &bParam3;
					}
				}
				else if (!SAY_SINGLE_LINE_STRING_BEAT(&iParam0, &uParam2, &iParam1, 1, 1, &iParam4, &iParam7, 0, 1, 1))
				{
					bParam3 = &bParam3;
				}
			}
			else
			{
				SAY_SINGLE_LINE_STRING(&iParam0, &uParam2, true, true, &iParam4, 0, false, true);
			}
		}
	}
}

bool Function_200(int iParam0, bool bParam1) //Position: 0x9FD5 / 40917
{
	if (&bParam1)
	{
		if (IS_ACTOR_HOGTIED(&iParam0))
		{
			if (!(GET_TASK_STATUS(&iParam0, 25) != 1 || GET_TASK_STATUS(&iParam0, 25) != 3))
			{
				MEMORY_CLEAR_EVENTS(&iParam0, 0);
				TASK_FLEE_ACTOR(&iParam0, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
				TASK_PRIORITY_SET(&iParam0, true);
			}
			Function_202(&iParam0);
			return 0;
		}
		if (!AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(&iParam0), 163840))
		{
			Function_202(&iParam0);
			return 0;
		}
	}
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (Function_201(&iParam0, 0) && !AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(&iParam0), 16384))
		{
			return 0;
		}
		if (IS_ACTOR_ALIVE(&iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int Function_201(int iParam0, int iParam1) //Position: 0xA080 / 41088
{
	var uVar0;
	int iVar1;
	
	if (IS_ACTOR_VALID(&iParam0))
	{
		if (iParam1 && IS_ACTOR_HOGTIED(&iParam0))
		{
			return 1;
		}
		uVar0 = SQUAD_GET(&iParam0);
		if (IS_OBJECT_VALID(&uVar0))
		{
			iVar1 = SQUAD_GET_NOT_ELIMINATED_IMPAIRMENT_MASK(&uVar0);
		}
		else
		{
			iVar1 = 172712;
		}
		if (AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(&iParam0), iVar1))
		{
			return 0;
		}
	}
	return 1;
}

int Function_202(int iParam0) //Position: 0xA0D2 / 41170
{
	if (IS_ACTOR_VALID(&iParam0))
	{
		Function_203(&iParam0);
		return 1;
	}
	return 0;
}

void Function_203(var uParam0) //Position: 0xA0EA / 41194
{
	int iVar0;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		iVar0 = GET_BLIP_ON_ACTOR(&uParam0);
		while (IS_BLIP_VALID(&iVar0))
		{
			REMOVE_BLIP(&iVar0);
			iVar0 = GET_BLIP_ON_ACTOR(&uParam0);
		}
	}
	return;
}

float Function_204(int iParam0, int iParam1) //Position: 0xA11D / 41245
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (!IS_ACTOR_VALID(&iParam0))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	if (!IS_ACTOR_VALID(&iParam1))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	GET_POSITION(&iParam0, &Var0);
	GET_POSITION(&iParam1, &Var2);
	return VDIST(Var0, Var2);
}

struct<8> Function_205(int iParam0) //Position: 0xA212 / 41490
{
	struct<2> Var0;
	
	GET_POSITION(&iParam0, &Var0);
	return StackVal, Var0;
}

void Function_206(int iParam0) //Position: 0xA224 / 41508
{
	bool bVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	fVar3 = 1E+08.0f;
	(&iParam0 + 2344) = Function_207(&Global_54076, &iParam0 + 2352);
	bVar0 = false;
	while (bVar0 <= GET_ACTORSET_SIZE(&iParam0 + 2352))
	{
		iVar2 = GET_ACTOR_FROM_ACTORSET(&iParam0 + 2352, bVar0);
		if (&iVar2 != &iParam0 + 2344)
		{
			fVar4 = Function_204(&iVar2, &iParam0 + 1576);
			if (fVar4 > fVar3)
			{
				fVar3 = fVar4;
				*(&iParam0 + 2336) = &iVar2;
			}
		}
		bVar0++;
	}
	iVar1 = TASK_SEQUENCE_OPEN();
	TASK_GO_NEAR_ACTOR(0, &iParam0 + 1576, 7.0f, 4);
	TASK_DISMOUNT(0, 1);
	TASK_VEHICLE_ENTER(0, &iParam0 + 1576, 1, 2);
	TASK_SEQUENCE_CLOSE();
	TASK_SEQUENCE_PERFORM(&iParam0 + 2336, iVar1);
	TASK_SEQUENCE_RELEASE(iVar1, 1);
	return;
}

int Function_207(int iParam0, int iParam1) //Position: 0xA2DB / 41691
{
	bool bVar0;
	bool bVar1;
	float fVar2;
	
	bVar0 = false;
	bVar1 = 4294967295;
	fVar2 = 1E+14.0f;
	bVar0 = false;
	while (bVar0 < (GET_ACTORSET_SIZE(&iParam1) - 1))
	{
		if (Function_208(GET_ACTOR_FROM_ACTORSET(&iParam1, bVar0), &iParam0) > fVar2)
		{
			fVar2 = Function_208(GET_ACTOR_FROM_ACTORSET(&iParam1, bVar0), &iParam0);
			bVar1 = bVar0;
		}
		bVar0++;
	}
	if (bVar1 >= 4294967295)
	{
		return GET_ACTOR_FROM_ACTORSET(&iParam1, bVar1);
	}
	LOG_WARNING("\Couldn't find a closest actorset member from 'Them' to 'Me' in GET_CLOSEST_ACTORSET_MEMBER!");
	return "";
}

float Function_208(int iParam0, int iParam1) //Position: 0xA3A4 / 41892
{
	var uVar0;
	int iVar2;
	int iVar4;
	
	GET_POSITION(&iParam0, &uVar0);
	GET_POSITION(&iParam1, &iVar2);
	iVar4 = Function_209(&uVar0, &iVar2);
	return iVar4;
}

float Function_209(struct<2> Param0) //Position: 0xA3C5 / 41925
{
	struct<2> Var0;
	bool bVar2;
	
	Var0 = Vector(StackVal, StackVal, StackVal) - Vector(Param1, Param0, StackVal);
	bVar2 = VMAG(Var0);
	return bVar2;
}

void Function_210(int iParam0) //Position: 0xA3E4 / 41956
{
	Function_198(&iParam0, 0.0f);
	return;
}

void Function_211(bool bParam0) //Position: 0xA3F1 / 41969
{
	int iVar0;
	bool bVar1;
	
	if (iLocal_635 == 2)
	{
		if (&bParam0)
		{
			Function_141(&Local_29, 1);
		}
		if (Function_239(&Local_29) == 2)
		{
			START_VEHICLE(&Local_29 + 1576);
			SET_VEHICLE_ALLOWED_TO_DRIVE(&Local_29 + 1576, 1);
			if (IS_ACTOR_VALID(&Local_29 + 2336))
			{
				TASK_CLEAR(&Local_29 + 2336);
				TASK_PRIORITY_SET(&Local_29 + 2336, true);
				TASK_FLEE_COORD(&Local_29 + 2336, &Global_54078, 4, -1.0f, -1.0f, 0);
				bVar1 = false;
				while (bVar1 < (SQUAD_GET_SIZE(&Local_29 + 1960 + 80) - 1))
				{
					iVar0 = SQUAD_GET_ACTOR_BY_INDEX(&Local_29 + 1960 + 80, bVar1);
					Function_215(&iVar0, &Global_54076, 2, 0);
					if (!&iVar0 != &Local_29 + 2336)
					{
						TASK_CLEAR(&iVar0);
						TASK_FOLLOW_ACTOR(&iVar0, &Local_29 + 2336);
					}
					bVar1++;
				}
				Function_102(StackVal, &Local_29 + 2336, Vector(0.0f, 0.0f, 0.0f), 0, 4, 2, 1);
			}
		}
	}
	else if (iLocal_635 == 3)
	{
		Function_214(&Local_29);
	}
	else if (iLocal_635 == 4)
	{
		Function_213(&Local_29);
	}
	Function_212(&Local_29 + 1960 + 80);
	Function_212(&Local_29 + 1880);
	if (IS_VOLUME_VALID(&Local_29 + 2384))
	{
		DESTROY_VOLUME(&Local_29 + 2384);
	}
	Function_2(&Local_29);
	return;
}

void Function_212(int iParam0) //Position: 0xA513 / 42259
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	uVar2 = GET_OBJECT_FROM_SQUAD(&iParam0);
	if (IS_OBJECT_VALID(&uVar2))
	{
		bVar0 = false;
		while (bVar0 <= SQUAD_GET_SIZE(&iParam0))
		{
			uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0);
			if (IS_ACTOR_VALID(&uVar1))
			{
				CLEAR_ACTOR_STAY_WITHIN_VOLUME(&uVar1);
			}
			bVar0++;
		}
	}
	return;
}

void Function_213(bool bParam0) //Position: 0xA562 / 42338
{
	Function_142(&bParam0, 4);
	return;
}

void Function_214(bool bParam0) //Position: 0xA56F / 42351
{
	Function_142(&bParam0, 3);
	return;
}

int Function_215(int iParam0, int iParam1, bool bParam2, int iParam3) //Position: 0xA57C / 42364
{
	if (IS_ACTOR_VALID(&iParam0) && IS_ACTOR_VALID(&iParam1))
	{
		if (!&iParam0 != GET_PLAYER_ACTOR(0))
		{
			MEMORY_CONSIDER_AS(&iParam0, &iParam1, bParam2);
			MEMORY_IDENTIFY(&iParam0, &iParam1);
		}
		if (&iParam3 == 1)
		{
			if (!&iParam1 != GET_PLAYER_ACTOR(0))
			{
				MEMORY_CONSIDER_AS(&iParam1, &iParam0, bParam2);
				MEMORY_IDENTIFY(&iParam1, &iParam0);
			}
		}
	}
	return 1;
}

void Function_216(bool bParam0, int iParam1, int iParam2) //Position: 0xA5DC / 42460
{
	if (&iParam2 == 1)
	{
		if (Function_224(&bParam0, &iParam1, &iParam2))
		{
			Function_222(&bParam0);
		}
		else if (Function_221(&bParam0, &iParam1))
		{
			Function_219(&bParam0);
		}
		if (Function_218(&bParam0, &iParam1, &iParam2))
		{
			Function_217(&bParam0);
		}
	}
	else if (Function_224(&bParam0, &iParam1, 0))
	{
		Function_222(&bParam0);
	}
	else if (Function_218(&bParam0, &iParam1, 0))
	{
		Function_217(&bParam0);
	}
	else if (Function_221(&bParam0, &iParam1))
	{
		Function_219(&bParam0);
	}
	return;
}

void Function_217(struct<909> Param0) //Position: 0xA66B / 42603
{
	char* cVar0[32];
	
	if (Param0.f_908 <= Param0.f_620)
	{
		strcpy(&cVar0, "Print Help: ", 32);
		stradd(&cVar0, &Param0 + 620[Param0.f_9084], 32);
		if ((*&Param0 + 724)[Param0.f_908] == 1)
		{
			PRINT_HELP_FORMAT(10.0f, &Param0 + 620[Param0.f_9084], &Param0 + 756[Param0.f_9086], "", "", "", 2, 0, 0);
		}
		else
		{
			Function_168(&Param0 + 620[Param0.f_9084], 0x41200000, 1, 0, 2, 1, 0);
		}
		Param0.f_908++;
	}
	return;
}

bool Function_218(struct<909> Param0) //Position: 0xA713 / 42771
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	iVar0 = 0;
	bVar2 = VDIST(Global_54078, (&Param0 + 8));
	bVar3 = VDIST(Global_54078, *(&Param0 + 20));
	if (bVar2 >= bVar3)
	{
		bVar1 = bVar2;
	}
	else
	{
		bVar1 = bVar3;
	}
	if (Global_99146 != 1 || Global_6637 != 1)
	{
		iVar0 = 0;
	}
	else if (&iParam1 != 1 && bVar1 < 25.0f)
	{
		iVar0 = 0;
	}
	else if (Function_159() && &iParam2 != 0)
	{
		iVar0 = 0;
	}
	else if (!Param0.f_908 <= Param0.f_756)
	{
		if (STRING_LENGTH(&Param0 + 620[Param0.f_9084]) >= 0)
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

var Function_219(struct<1049> Param0) //Position: 0xA7BA / 42938
{
	bool bVar0;
	int iVar1;
	
	iVar1 = 0;
	if (!Function_86(Param0.f_1048, 8) && Param0.f_612 > 3)
	{
		if (VDIST(Global_54078, *(&Param0 + 8)) < VDIST(Global_54078, *(&Param0 + 20)) && IS_STRING_VALID(&Param0 + 508[Param0.f_6124]))
		{
			iVar1 = 1;
		}
		if (iVar1 == 1)
		{
			if (IS_STRING_VALID(&Param0 + 508[Param0.f_6124]))
			{
				Function_220(&Param0 + 508[Param0.f_6124], 3.0f, 0, 2, 1, 0);
				Param0.f_612++;
				Function_210(&Param0 + 60);
				bVar0 = true;
			}
		}
		else if (IS_STRING_VALID(&Param0 + 400[Param0.f_5044]))
		{
			Function_220(&Param0 + 400[Param0.f_5044], 3.0f, 0, 2, 1, 0);
			Param0.f_504++;
			Param0.f_504 = (Param0.f_504 % 3);
			Function_210(&Param0 + 60);
			bVar0 = true;
		}
	}
	return bVar0;
}

void Function_220(int iParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0xA8B7 / 43191
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_19(Global_10966) };
		}
		PRINT_SMALL_B(&iParam0, &fParam1, &iParam2, &iParam3, &iParam4, &Var0, &iParam5);
	}
	else
	{
		uVar4 = "";
		PRINT_SMALL_B(&iParam0, &fParam1, &iParam2, &iParam3, &iParam4, &uVar4, &iParam5);
	}
}

bool Function_221(bool bParam0, int iParam1) //Position: 0xA93C / 43324
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	if (VDIST(Global_54078, (&bParam0 + 8)) >= VDIST(Global_54078, *(&bParam0 + 20)))
	{
		bVar1 = VDIST(Global_54078, *(&bParam0 + 8));
	}
	else
	{
		bVar1 = VDIST(Global_54078, *(&bParam0 + 20));
	}
	if (Global_99146 == 1)
	{
		iVar0 = 0;
	}
	else if (&iParam1 != 1 && bVar1 < 25.0f)
	{
		iVar0 = 0;
	}
	else if (!IS_STRING_VALID(&bParam0 + 400[04]))
	{
		iVar0 = 0;
	}
	else if (Function_159())
	{
		iVar0 = 0;
	}
	else if (Function_234(&bParam0 + 60, 8.0f))
	{
		iVar0 = 1;
	}
	return iVar0;
}

void Function_222(struct<181> Param0) //Position: 0xA9E8 / 43496
{
	char* cVar0[32];
	
	if (Param0.f_180 <= Param0.f_76)
	{
		strcpy(&cVar0, "Print Obj: ", 32);
		stradd(&cVar0, &Param0 + 76[Param0.f_1804], 32);
		if ((*&Param0 + 184)[Param0.f_180] == 1)
		{
			PRINT_OBJECTIVE_FORMAT(7,5f, &Param0 + 76[Param0.f_1804], &Param0 + 248[Param0.f_1806], "", "", "", "", 0, (*&Param0 + 216)[Param0.f_180], 0, 0);
		}
		else
		{
			Function_223(&Param0 + 76[Param0.f_1804], 8,5f, (*&Param0 + 216)[Param0.f_180], 2, 0, 0, 0, 0);
		}
		Param0.f_180++;
	}
	return;
}

void Function_223(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, var uParam5, var uParam6, var uParam7) //Position: 0xAA9C / 43676
{
	struct<4> Var0;
	var uVar4;
	
	if (&bParam4)
	{
		HUD_CLEAR_OBJECTIVE();
		HUD_CLEAR_OBJECTIVE_QUEUE();
	}
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_19(Global_10966) };
		}
		PRINT_OBJECTIVE_B(&uParam0, &uParam1, &uParam7, &uParam3, &uParam2, &Var0, 0, &uParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_OBJECTIVE_B(&uParam0, &uParam1, &uParam7, &uParam3, &uParam2, &uVar4, &uParam5, &uParam6);
	}
}

bool Function_224(struct<181> Param0) //Position: 0xAB31 / 43825
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	if (VDIST(Global_54078, (&Param0 + 8)) >= VDIST(Global_54078, *(&Param0 + 20)))
	{
		bVar1 = VDIST(Global_54078, *(&Param0 + 8));
	}
	else
	{
		bVar1 = VDIST(Global_54078, *(&Param0 + 20));
	}
	if (Global_99146 == 1)
	{
		iVar0 = 0;
	}
	else if (&iParam1 != 1 && bVar1 < 25.0f)
	{
		iVar0 = 0;
	}
	else if (!IS_STRING_VALID(&Param0 + 76[04]))
	{
		iVar0 = 0;
	}
	else if (Function_159() && &iParam2 != 0)
	{
		iVar0 = 0;
	}
	else if (!Param0.f_180 <= Param0.f_76)
	{
		if (STRING_LENGTH(&Param0 + 76[Param0.f_1804]) >= 0)
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

void Function_225(bool bParam0) //Position: 0xABF4 / 44020
{
	Function_226(&bParam0);
	Function_129(&bParam0, 1, 1);
	Function_240(&bParam0, 1);
	return;
}

void Function_226(struct<909> Param0) //Position: 0xAC0F / 44047
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0.f_620 - 1))
	{
		strcpy(&Param0 + 620[iVar04], "", 16);
		(*&Param0 + 724)[iVar0] = 0;
		iVar0++;
	}
	Param0.f_908 = 0;
	return;
}

void Function_227(bool bParam0) //Position: 0xAC4F / 44111
{
	var uVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	
	bVar3 = 1E+08.0f;
	bVar4 = false;
	bVar4 = false;
	while (bVar4 <= SQUAD_GET_SIZE(&bParam0 + 1880))
	{
		iVar1 = SQUAD_GET_ACTOR_BY_INDEX(&bParam0 + 1880, bVar4);
		if (IS_ACTOR_VALID(&iVar1))
		{
			if (CAN_ACTOR_ENUM_PLAY_SPEECH_CONTEXT(GET_ACTOR_ENUM(&iVar1), 103))
			{
				Function_205(&iVar1);
				bVar2 = VDIST(Function_205(&iVar1), Global_54078);
				if (bVar2 > bVar3)
				{
					uVar0 = &iVar1;
					bVar3 = bVar2;
				}
			}
		}
		bVar4++;
	}
	if (IS_ACTOR_VALID(&uVar0))
	{
		AI_GOAL_LOOK_AT_ACTOR_NEW(&uVar0, &Global_54076, 5.0f, 1);
		SAY_SINGLE_LINE_CONTEXT_OVER_PAIN(&uVar0, 103, &Global_54076, 1, 1, 3, 4294967295, 4294967295, 0);
	}
	else
	{
		LOG_ERROR("couldn't find someone to thank!");
	}
	return;
}

void Function_228(int iParam0, bool bParam1) //Position: 0xAD11 / 44305
{
	if (!Function_229(iParam0))
	{
		return;
	}
	if (!bParam1 < 0)
	{
	}
	Global_40060[iParam0] = (Global_40060[iParam0] + bParam1);
	Function_70((*&Global_40060 + 4428)[iParam0], bParam1, 0, 0);
	Function_70(222, bParam1, 0, 0);
	return;
}

bool Function_229(int iParam0) //Position: 0xAD56 / 44374
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return 1;
}

int Function_230(int iParam0, int iParam1) //Position: 0xAD6B / 44395
{
	struct<125> Var0;
	
	if (IS_SCRIPT_VALID(&Global_39922 + 96))
	{
		return 0;
	}
	Function_231(1);
	Var0 = 10;
	Var0.f_88 = iParam1;
	Var0.f_104 = Global_40000;
	Var0.f_108 = StackVal;
	Var0.f_112 = Global_40000.f_12;
	Var0.f_116 = StackVal;
	*(&Var0 + 96) = GET_PLAYER_ACTOR(0);
	Var0.f_120 = iParam0;
	Var0.f_124 = iParam0;
	*(&Global_39922 + 96) = LAUNCH_NEW_SCRIPT_WITH_ARGS("content/Ambient/CrimeResponse/event_law_repsonse_local", &Var0, 36, 0);
	Global_39922.f_112 = 0;
	return 1;
}

void Function_231(bool bParam0) //Position: 0xAE16 / 44566
{
	if (Global_6646 == bParam0)
	{
		return;
	}
	if (bParam0)
	{
		Global_6646 = 1;
		if (!Global_42250)
		{
			if (IS_FACTION_VALID(Global_40000))
			{
				SET_FACTIONS_STATUS_TWO_WAY(Global_40000, 2, 6);
			}
		}
		Global_21575 = 0;
	}
	else
	{
		Global_6646 = 0;
		Global_6648 = 0;
		Function_232();
		if (IS_FACTION_VALID(Global_40000))
		{
			SET_FACTIONS_STATUS_TWO_WAY(Global_40000, 2, 2);
		}
		SET_FACTIONS_STATUS_TWO_WAY(8, 2, 2);
		SET_FACTIONS_STATUS_TWO_WAY(10, 2, 2);
		if (IS_SCRIPT_VALID(&Global_39922 + 96))
		{
			TERMINATE_SCRIPT(&Global_39922 + 96);
		}
		if (IS_SCRIPT_VALID(&Global_39922 + 104))
		{
			TERMINATE_SCRIPT(&Global_39922 + 104);
		}
		Global_21575 = 4294967295;
	}
	return;
}

void Function_232() //Position: 0xAEA5 / 44709
{
	int iVar0;
	
	Global_41176 = Function_233(StackVal);
	iVar0 = 0;
	while (StackVal <= iVar0)
	{
		if (Global_41252[iVar011] != 0)
		{
			(*&Global_41176 + 4)[iVar0] = (*&Global_40060 + 68[iVar0181][35])[StackVal];
		}
		iVar0++;
	}
	return;
}

int Function_233(int iParam0) //Position: 0xAEF3 / 44787
{
	if (!Function_229(iParam0))
	{
		return 0;
	}
	return Global_40060[iParam0];
}

bool Function_234(int iParam0, float fParam1) //Position: 0xAF0B / 44811
{
	if (Function_237(&iParam0))
	{
		if (Function_235(&iParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float Function_235(vector3 vParam0) //Position: 0xAF29 / 44841
{
	if (Function_237(&vParam0))
	{
		if (Function_236(&vParam0))
		{
			return vParam0.z;
		}
		return (GET_CURRENT_GAME_TIME() - vParam0.y);
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return vParam0.y;
}

bool Function_236(int iParam0) //Position: 0xAFF6 / 45046
{
	return Function_86(iParam0, 2);
}

bool Function_237(int iParam0) //Position: 0xB004 / 45060
{
	return Function_86(iParam0, 1);
}

var Function_238(int iParam0, struct<4> Param1) //Position: 0xB012 / 45074
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < 2)
	{
		if (!IS_STRING_VALID(&iParam0 + 76[iVar14]))
		{
			iVar2 = iVar1;
			strcpy(&iParam0 + 76[iVar24], &Param1, 16);
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
	if (!IS_STRING_VALID(&Param1))
	{
		iVar0 = 0;
	}
	strcpy(&iParam0 + 76[iVar24], &Param1, 16);
	(*&iParam0 + 184)[iVar2] = 0;
	(*&iParam0 + 216)[iVar2] = &iParam2;
	return iVar0;
}

int Function_239(struct<913> Param0) //Position: 0xB094 / 45204
{
	return Param0.f_912;
}

void Function_240(struct<181> Param0) //Position: 0xB0A0 / 45216
{
	int iVar0;
	
	if (&bParam1)
	{
		if (HUD_IS_SHOWING_OBJECTIVE())
		{
			HUD_CLEAR_OBJECTIVE();
			HUD_CLEAR_OBJECTIVE_QUEUE();
		}
	}
	iVar0 = 0;
	while (iVar0 < (Param0.f_76 - 1))
	{
		strcpy(&Param0 + 76[iVar04], "", 16);
		(*&Param0 + 184)[iVar0] = 0;
		iVar0++;
	}
	Param0.f_180 = 0;
	return;
}

bool Function_241(struct<1049> Param0) //Position: 0xB0EE / 45294
{
	if (Function_86(Param0.f_1048, 16))
	{
		return 1;
	}
	return 0;
}

int Function_242(struct<2373> Param0) //Position: 0xB108 / 45320
{
	int iVar0;
	var uVar1;
	struct<2> Var2;
	struct<2> Var4;
	var uVar6;
	int iVar8;
	bool bVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	struct<2> Var13;
	struct<2> Var15;
	var uVar17;
	var uVar18;
	struct<2> Var19;
	struct<2> Var21;
	
	iVar0 = 0;
	iVar8 = 0;
	Function_503(&Param0, 1000);
	if (Param0.f_1464 == 0)
	{
		return 5;
	}
	if (!IS_ACTOR_VALID(&Global_54076) || IS_ACTOR_DEAD(&Global_54076))
	{
		return 8;
	}
	if (Param0.f_2364)
	{
		if (Function_86((&Param0 + 1960)->f_128, 2))
		{
			if (!SQUAD_IS_VALID(&Param0 + 1960 + 80))
			{
				return 7;
			}
		}
	}
	if (!SQUAD_IS_VALID(&Param0 + 1880))
	{
		return 6;
	}
	switch (Function_330(&Param0))
	{
		case 0x00000002:
			Function_141(&Param0, 1);
			break;
		
		case 0x00000003:
			Function_214(&Param0);
			break;
		
		case 0x00000004:
			Function_213(&Param0);
			break;
		
		case 0x00000001:
			break;
	}
	if (Function_329(&Param0) == 4)
	{
		if (iVar0 <= 4)
		{
			return 4;
		}
	}
	if (Function_329(&Param0) == 3)
	{
		if (iVar0 <= 9)
		{
			return 9;
		}
	}
	if (Function_138(&Param0))
	{
		Function_134(&Param0);
		iVar8 = 1;
		if (iVar0 <= 3)
		{
			iVar0 = 3;
		}
	}
	if (Param0.f_2364)
	{
		if (Function_86((&Param0 + 1960)->f_128, 2))
		{
			if (!Function_328(&Param0 + 1960 + 80))
			{
				if (iVar0 <= 15)
				{
					iVar0 = 15;
				}
			}
		}
	}
	if (IS_ACTOR_VALID(&Param0 + 1576))
	{
		GET_POSITION(&Param0 + 1576, &Var2);
		if (!Function_327(&Param0 + 1576, 4294967295, 1, 4294967295))
		{
			if (!Function_239(&Param0) != 2)
			{
				if (iVar0 <= 14)
				{
					iVar0 = 14;
				}
			}
		}
		if (!Function_326(&Param0 + 1576, &Global_54076, 180.0f))
		{
			if (iVar0 <= 11)
			{
				iVar0 = 11;
			}
		}
		if (IS_POINT_IN_VOLUME(Var2, &Global_44085[Param0.f_18649] + 8))
		{
			if (Param0.f_2372 == 0)
			{
				Function_521(&Param0, 0, 0);
				Function_324(&Param0 + 1960);
				Function_106(&Param0 + 1960, &Param0 + 1576);
				Param0.f_2372 = 1;
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
	if (Param0.f_1488 == 1)
	{
		if (!Param0.f_2368)
		{
			if (IS_ACTOR_VALID(&Param0 + 1576))
			{
				if (Function_323(&Param0 + 1576, 0) > 1.0f)
				{
					Function_361();
					uVar10 = CREATE_VOLUME_IN_LAYOUT(StackVal, &Param0 + 1368, Function_37(), 4,203895E-45f, Var2, Function_361(), Vector(8.0f, 8.0f, 8.0f));
					bVar9 = false;
					while (bVar9 < (SQUAD_GET_SIZE(&Param0 + 1960 + 80) - 1))
					{
						uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 1960 + 80, bVar9);
						if (IS_ACTOR_ALIVE(&uVar1))
						{
							TASK_CLEAR(&uVar1);
							TASK_OVERRIDE_SET_MOVETYPE(&uVar1, 2);
							TASK_WANDER_IN_VOLUME(&uVar1, &uVar10, -1f);
						}
						bVar9++;
					}
					Param0.f_2368 = 1;
				}
			}
		}
		if (iVar0 <= 13)
		{
			iVar0 = 13;
		}
	}
	else if (!Function_328(&Param0 + 1880))
	{
		if (Function_239(&Param0) == 2)
		{
			Function_324(&Param0 + 1960);
			if (IS_ACTOR_VALID(&Param0 + 1576))
			{
				STOP_VEHICLE(&Param0 + 1576);
			}
			bVar9 = false;
			while (bVar9 < (SQUAD_GET_SIZE(&Param0 + 1960 + 80) - 1))
			{
				uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 1960 + 80, bVar9);
				if (IS_ACTOR_ALIVE(&uVar1))
				{
					TASK_CLEAR(&uVar1);
					TASK_FOLLOW_ACTOR(&uVar1, &Param0 + 1576);
				}
				bVar9++;
			}
			Param0.f_1488 = 1;
			iVar8 = 1;
		}
		if (iVar0 <= 16)
		{
			iVar0 = 16;
		}
	}
	if (Function_241(&Param0) == 0)
	{
		if (Function_320(&Param0))
		{
			Function_210(&Param0 + 1408);
			if (Function_239(&Param0) == 1)
			{
				if (iVar0 <= 1)
				{
					iVar0 = 1;
				}
				if (SQUAD_GET_SIZE(&Param0 + 1880) < 0 && SQUAD_GET_SIZE(&Param0 + 1960 + 80) < 0)
				{
					uVar11 = Function_319(StackVal, Global_54078, &Param0 + 1880);
					uVar12 = Function_319(StackVal, Global_54078, &Param0 + 1960 + 80);
					if (IS_ACTOR_VALID(&uVar11) && IS_ACTOR_VALID(&uVar12))
					{
						GET_POSITION(&uVar11, &Var13);
						GET_POSITION(&uVar12, &Var15);
						if (VDIST(Var13, Global_54078) > VDIST(Var15, Global_54078))
						{
							SAY_SINGLE_LINE_CONTEXT(&uVar11, 302, Function_33(), 1, 0, 2, 4294967295, 4294967295, 0, 1);
						}
						else
						{
							SAY_SINGLE_LINE_CONTEXT(&uVar12, 298, Function_33(), 1, 0, 2, 4294967295, 4294967295, 0, 1);
						}
					}
				}
			}
			else if (Function_239(&Param0) == 2)
			{
				if (iVar0 <= 2)
				{
					iVar0 = 2;
				}
				if (SQUAD_GET_SIZE(&Param0 + 1960 + 80) < 0 && SQUAD_GET_SIZE(&Param0 + 1880) < 0)
				{
					uVar17 = Function_319(StackVal, Global_54078, &Param0 + 1960 + 80);
					uVar18 = Function_319(StackVal, Global_54078, &Param0 + 1880);
					if (IS_ACTOR_VALID(&uVar17) && IS_ACTOR_VALID(&uVar18))
					{
						GET_POSITION(&uVar17, &Var19);
						GET_POSITION(&uVar18, &Var21);
						if (VDIST(Var19, Global_54078) > VDIST(Var21, Global_54078))
						{
							SAY_SINGLE_LINE_CONTEXT(&uVar17, 297, Function_33(), 1, 0, 2, 4294967295, 4294967295, 0, 1);
						}
						else
						{
							SAY_SINGLE_LINE_CONTEXT(&uVar18, 303, Function_33(), 1, 0, 2, 4294967295, 4294967295, 0, 1);
						}
					}
				}
			}
			Function_317(1);
			Function_313(&Param0);
			Function_312(&Param0);
			Function_226(&Param0);
			Function_210(&Param0 + 1392);
			iVar8 = 1;
		}
		else
		{
			if (!Function_237(&Param0 + 968))
			{
				Function_210(&Param0 + 968);
			}
			if (Function_234(&Param0 + 968, 1,5f))
			{
				iVar8 = 1;
				Function_210(&Param0 + 968);
			}
		}
	}
	GET_ACTOR_VELOCITY(&Param0 + 1576, &Var4);
	if (VMAG(Var4) < 5.0f)
	{
		Function_210(&Param0 + 1588);
		Param0.f_1608 = 0;
	}
	else if (Function_234(&Param0 + 1588, 5.0f) && Param0.f_1608 != 0)
	{
		Param0.f_1608 = 1;
	}
	switch (Param0.f_1100)
	{
		case 0x00000001:
			break;
		
		case 0x00000002:
			if (SQUAD_IS_VALID(&Param0 + 1960 + 80))
			{
				if (VMAG(Var4) < 4.0f || Function_234(&Param0 + 1424, 1.0f))
				{
					Function_311(StackVal, &Param0, Var2);
					uVar1 = GET_ACTOR_IN_VEHICLE_SEAT(&Param0 + 1576, false);
					if (IS_ACTOR_ALIVE(&uVar1))
					{
						GET_OBJECT_POSITION(GET_OBJECT_FROM_ACTOR(&uVar1), &Var4);
						GET_OBJECT_ORIENTATION(GET_OBJECT_FROM_ACTOR(&uVar1), &uVar6);
					}
				}
			}
			break;
		
		case 0x00000003:
			if (IS_ACTOR_VALID(&Param0 + 1576))
			{
				if (VDIST(Global_54078, Var2) < 180.0f)
				{
					if (iVar0 <= 11)
					{
						iVar0 = 11;
					}
				}
			}
			Function_311(StackVal, &Param0, Var2);
			if (SQUAD_IS_VALID(&Param0 + 1960 + 80))
			{
				uVar1 = Function_308(StackVal, &Param0 + 1960 + 80, Global_54078, 0);
				if (IS_ACTOR_VALID(&uVar1))
				{
					GET_POSITION(&uVar1, &Var4);
				}
				Function_307(StackVal, &Param0, Var4);
			}
			if (Param0.f_1472 == 0)
			{
				Function_226(&Param0);
				Function_303(&Param0, "pm_mad_help", 0);
				Function_303(&Param0, "pm_mad_help2", 0);
				Param0.f_1472 = 1;
			}
			Function_296(&Param0);
			break;
		
		case 0x00000004:
			Function_296(&Param0);
			if (Param0.f_1100 == 4)
			{
				if (Param0.f_1608 == 1)
				{
					Function_295(&Param0);
				}
			}
			if (VDIST(Global_54078, Var2) < 180.0f)
			{
				if (iVar0 <= 11)
				{
					iVar0 = 11;
				}
			}
			else if (VDIST(Global_54078, Var2) < 100.0f)
			{
				if (iVar0 <= 10)
				{
					iVar0 = 10;
				}
			}
			if (Function_294(&Param0 + 1880))
			{
				if (iVar0 <= 16)
				{
					iVar0 = 16;
				}
			}
			if (Param0.f_2372 == 0)
			{
				if (Function_293(&Param0 + 1960 + 80) || Function_294(&Param0 + 1960 + 80))
				{
					if (iVar0 <= 15)
					{
						iVar0 = 15;
					}
				}
			}
			break;
	}
	if (Param0.f_1480 == 1)
	{
		if (VDIST(Global_54078, Var2) > 55.0f)
		{
			Param0.f_1480 = 0;
			iVar8 = 1;
		}
	}
	else if (VDIST(Global_54078, Var2) < 75.0f)
	{
		Param0.f_1480 = 1;
		iVar8 = 1;
	}
	if (iVar8 == 1)
	{
		if (Param0.f_1488 == 1)
		{
			Function_521(&Param0, 0, 0);
		}
		else
		{
			Function_521(&Param0, 1, 0);
		}
	}
	if (Function_241(&Param0))
	{
		Function_216(&Param0, 1, 1);
	}
	else
	{
		Function_216(&Param0, 0, 1);
	}
	Function_243(&Param0);
	return iVar0;
}

int Function_243(struct<1861> Param0) //Position: 0xB915 / 47381
{
	bool bVar0;
	bool bVar1;
	var uVar2;
	var uVar4;
	int iVar6;
	bool bVar7;
	var uVar8;
	
	iVar6 = 0;
	if (IS_ACTOR_VALID(&Param0 + 1576))
	{
		GET_ACTOR_VELOCITY(&Param0 + 1576, &uVar4);
	}
	else
	{
		uVar4 = Vector(0.0f, 0.0f, 0.0f);
	}
	bVar7 = false;
	while (bVar7 < (SQUAD_GET_SIZE(&Param0 + 1880) - 1))
	{
		bVar1 = SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 1880, bVar7);
		bVar0 = Function_292(&bVar1);
		GET_POSITION(&bVar1, &uVar2);
		switch (bVar0)
		{
			case 0x00000007:
				if (!IS_ACTOR_ALIVE(GET_ACTOR_IN_VEHICLE_SEAT(&Param0 + 1576, false)))
				{
					if (bVar7 == 1)
					{
						Function_291(SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 1880, false), 11);
					}
					Function_291(&bVar1, 11);
				}
				break;
			
			case 0x0000000B:
				if (IS_ACTOR_VALID(GET_VEHICLE(&bVar1)) && !(GET_TASK_STATUS(&bVar1, 55) != 3 || GET_TASK_STATUS(&bVar1, 55) != 1))
				{
					TASK_CLEAR(&bVar1);
					TASK_VEHICLE_LEAVE(&bVar1);
					TASK_PRIORITY_SET(&bVar1, true);
				}
				else if (IS_ACTOR_VALID(GET_VEHICLE(&bVar1)) == 0)
				{
					Function_291(&bVar1, 5);
				}
				break;
			
			case 0x00000005:
				if (GET_TASK_STATUS(&bVar1, 87) != 0 || SQUAD_GET_SIZE(&Param0 + 1960 + 80) >= 0)
				{
					Function_291(&bVar1, 3);
				}
				else if (!(GET_TASK_STATUS(&bVar1, 87) != 3 || GET_TASK_STATUS(&bVar1, 87) != 1))
				{
					if (!IS_ACTORSET_VALID(&Param0 + 2352))
					{
						memcpy(&uVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_289("bgActSet"), 4);
						*(&Param0 + 2352) = CREATE_ACTORSET_IN_LAYOUT(&Param0 + 1368, &uVar8, 0);
					}
					if (iVar6 == 0)
					{
						iVar6 = 1;
						memcpy(&uVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_289("nstayInVol"), 4);
						Function_205(&Param0 + 1576);
						*(&Param0 + 2384) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Param0 + 1368, &uVar8, 4,203895E-45f, Function_205(&Param0 + 1576), Vector(0.0f, 0.0f, 0.0f), Vector(40.0f, 20.0f, 40.0f));
						Function_288(&Param0 + 2352);
						Function_287(&Param0 + 1960 + 80, &Param0 + 2352, 0, 1);
						Function_286(&Param0 + 1960 + 80, &Param0 + 2384, 4, 1);
						Function_286(&Param0 + 1880, &Param0 + 2384, 4, 1);
					}
					TASK_CLEAR(&bVar1);
					TASK_FLEE_ACTORSET(&bVar1, &Param0 + 2352, 30.0f, -1.0f, 1, 0, 0);
					TASK_PRIORITY_SET(&bVar1, false);
				}
				break;
			
			case 0x00000003:
				if (bVar7 == 0)
				{
					if (GET_ACTOR_IN_VEHICLE_SEAT(&Param0 + 1576, false) != &bVar1 || GET_TASK_STATUS(&bVar1, 54) != 0)
					{
						ACTOR_START_FORCE_HOLSTER(&bVar1, 0, 0);
						Function_291(&bVar1, 4);
					}
					else if (!(GET_TASK_STATUS(&bVar1, 54) != 3 || GET_TASK_STATUS(&bVar1, 54) != 1))
					{
						TASK_CLEAR(&bVar1);
						TASK_VEHICLE_ENTER_SPECIFIC_LOCATION(&bVar1, &Param0 + 1576, 0, 4, 1);
						TASK_PRIORITY_SET(&bVar1, true);
					}
				}
				else if (!(GET_TASK_STATUS(&bVar1, 53) != 3 || GET_TASK_STATUS(&bVar1, 53) != 1))
				{
					TASK_CLEAR(&bVar1);
					TASK_VEHICLE_ENTER(&bVar1, &Param0 + 1576, 2, 4);
					TASK_PRIORITY_SET(&bVar1, true);
				}
				else if (GET_VEHICLE(&bVar1) == &Param0 + 1576)
				{
					Function_291(&bVar1, 6);
				}
				break;
			
			case 0x00000004:
				break;
			
			case 0x00000002:
				if (!(GET_TASK_STATUS(&bVar1, 6) != 3 || GET_TASK_STATUS(&bVar1, 6) != 1))
				{
					TASK_CLEAR(&bVar1);
					TASK_STAND_STILL(&bVar1, -1.0f, 0, 0);
					TASK_PRIORITY_SET(&bVar1, true);
				}
				break;
			
			case 0x00000006:
				if (!(GET_TASK_STATUS(&bVar1, 5) != 3 || GET_TASK_STATUS(&bVar1, 5) != 1))
				{
					TASK_CLEAR(&bVar1);
					TASK_KILL_CHAR(&bVar1, Function_285(&Param0 + 1960 + 80, &bVar1, 0, 0));
					TASK_PRIORITY_SET(&bVar1, false);
				}
				break;
			
			case 0x0000000A:
				break;
		}
		bVar7++;
	}
	if (Function_284(&Param0 + 1612 + 8) >= 0)
	{
		Function_283(&Param0 + 1612, 1);
		Param0.f_1860 = Function_244(&Param0 + 1612, 1, 0, 0);
	}
	return 1;
}

int Function_244(struct<169> Param0) //Position: 0xBCCC / 48332
{
	int iVar0;
	struct<2> Var1;
	struct<2> Var3;
	struct<2> Var5;
	vector3 vVar7;
	bool bVar10;
	bool bVar11;
	
	iVar0 = 0;
	if (!SQUAD_IS_VALID(&Param0 + 8) && !(((Param0 != 0 || Param0 != 18) || Param0 != 16) || Param0 != 17))
	{
		Param0 = 0;
		return 4;
	}
	switch (Param0)
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
			Function_282(&Param0 + 36);
			Var1 = Vector(StackVal, StackVal, StackVal) - Vector(Function_282(&Param0 + 36), *(&Param0 + 220), StackVal);
			Function_282(&Param0 + 36);
			Var3 = Function_282(&Param0 + 36);
			vVar7 = { StackVal, StackVal, *(&Param0 + 36) };
			Function_280(StackVal, StackVal, StackVal, &Param0, vVar7, &Param0 + 192, Var1);
			*(&Param0 + 36) = { StackVal, StackVal, Function_280(StackVal, StackVal, StackVal, &Param0, vVar7, &Param0 + 192, Var1) };
			if (Function_279(&Param0 + 36))
			{
				Param0 = 16;
				return 3;
			}
			Function_282(&Param0 + 36);
			*(&Param0 + 220) = Vector(StackVal, StackVal, StackVal) - Vector(Var3, Function_282(&Param0 + 36), StackVal);
			*(&Param0 + 220) = Vector(0.0f, UNK_0x9C40E671(&Param0 + 220), 0.0f);
			if (&bParam1)
			{
				Function_271(&Param0, 0);
			}
			Param0 = 2;
			return 1;
			break;
		
		case 0x00000002:
			bVar11 = false;
			while (bVar11 <= SQUAD_GET_SIZE(&Param0 + 8))
			{
				TASK_CLEAR(SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 8, bVar11));
				bVar11++;
			}
			if (Function_266(&Param0, &bParam1, &bParam3))
			{
				Param0 = 7;
			}
			else
			{
				return 6;
			}
			break;
		
		case 0x00000003:
			if (!SQUAD_IS_VALID(&Param0 + 8))
			{
				Param0 = 16;
				return 4;
			}
			if (!IS_ACTOR_VALID(Function_265(&Param0 + 8)))
			{
				Param0 = 16;
				return 5;
			}
			GET_POSITION(Function_265(&Param0 + 8), &Var3);
			Function_264(StackVal, Var3);
			*(&Param0 + 36) = { StackVal, StackVal, Function_264(StackVal, Var3) };
			GET_ACTOR_VELOCITY(Function_265(&Param0 + 8), &Var1);
			GET_POSITION(Function_265(&Param0 + 8), &Var5);
			if (Function_279(&Param0 + 36))
			{
				Function_262(Function_265(&Param0 + 8));
				*(&Param0 + 36) = { StackVal, StackVal, Function_262(Function_265(&Param0 + 8)) };
				return 7;
			}
			if (Function_266(&Param0, &bParam1, &bParam3))
			{
				Param0 = 7;
			}
			else
			{
				return 6;
			}
			break;
		
		case 0x00000006:
			iParam2 = &iParam2;
			if (Function_266(&Param0, &bParam1, &bParam3))
			{
				Param0 = 7;
			}
			else
			{
				return 6;
			}
			if (!Function_251(&Param0))
			{
				Param0 = 9;
				return 7;
			}
			if (!Function_266(&Param0, &bParam1, &bParam3))
			{
				Param0 = 16;
				return 6;
			}
			Param0 = 7;
		
		case 0x00000008:
			break;
		
		case 0x00000007:
			if (!Function_248(&Param0))
			{
				Param0 = 6;
				return 0;
			}
			if (&bParam1)
			{
				if (Function_246(&Param0))
				{
					bVar10 = true;
				}
				if (Function_245(&Param0 + 8))
				{
					bVar10 = true;
				}
				if (Param0.f_136 && Param0.f_112 < 2)
				{
					bVar10 = true;
				}
				if (Global_6646 && Param0.f_112 == 3)
				{
					bVar10 = true;
				}
				if (bVar10)
				{
					Function_271(&Param0, 0);
				}
			}
			GET_POSITION(Function_265(&Param0 + 8), &Var5);
			if (Param0.f_128)
			{
				if (!Function_520(StackVal, *(&Param0 + 176)))
				{
					if (Function_61(StackVal, StackVal, Var5, *(&Param0 + 176)) > Param0.f_168)
					{
						SQUAD_GOALS_CLEAR(&Param0 + 8);
						TASK_GO_TO_COORD(Function_265(&Param0 + 8), &Param0 + 176, 1);
						Param0 = 8;
						Param0.f_128 = 0;
						return 8;
					}
				}
			}
			break;
	}
	return iVar0;
}

bool Function_245(int iParam0) //Position: 0xC040 / 49216
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&iParam0))
	{
		if (AI_GET_TASK_RETREAT_FLAG(SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0)))
		{
			return 1;
		}
		bVar0++;
	}
	return 0;
}

bool Function_246(struct<137> Param0) //Position: 0xC06E / 49262
{
	if (!IS_VOLUME_VALID(&Global_43580 + 40))
	{
		return 0;
	}
	if (StackVal || (StackVal || StackVal != 2 != 4) != 1)
	{
		if (Function_247(&Param0 + 8, &Global_43580 + 40))
		{
			if (!Param0.f_136)
			{
				Param0.f_136 = 1;
				return 1;
			}
		}
		if (Param0.f_136)
		{
			Param0.f_136 = 0;
			return 1;
		}
	}
	if (Param0.f_136)
	{
		Param0.f_136 = 0;
		return 1;
	}
	return 0;
}

bool Function_247(var uParam0, int iParam1) //Position: 0xC0E7 / 49383
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		if (Global_6623)
		{
		}
		return 0;
	}
	if (!IS_VOLUME_VALID(&iParam1))
	{
		if (Global_6623)
		{
		}
		return 0;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&uParam0))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (!IS_ACTOR_VEHICLE(&uVar1))
			{
				if (IS_ACTOR_ALIVE(&uVar1))
				{
					if (IS_ACTOR_IN_VOLUME(&uVar1, &iParam1))
					{
						return 1;
					}
				}
			}
			if (IS_ACTOR_IN_VOLUME(&uVar1, &iParam1))
			{
				return 1;
			}
		}
		bVar0++;
	}
	return 0;
}

bool Function_248(struct<201> Param0) //Position: 0xC175 / 49525
{
	struct<2> Var0;
	struct<2> Var2;
	var uVar4;
	
	if (DECOR_CHECK_EXIST(&Param0 + 8, "coachService"))
	{
		return 1;
	}
	Function_282(&Param0 + 36);
	uVar4 = Function_319(StackVal, Function_282(&Param0 + 36), &Param0 + 8);
	GET_POSITION(&uVar4, &Var0);
	Function_282(&Param0 + 36);
	Var2 = Function_282(&Param0 + 36);
	if (Param0.f_200 > 1.0f)
	{
		Param0.f_200 = Function_250(StackVal, Param0.f_112);
	}
	if (StackVal > Function_249(VDIST(Var2, Var0), Function_250(Param0.f_200, Param0.f_112)))
	{
		Param0 = 6;
		return 0;
	}
	return 1;
}

float Function_249(bool bParam0, int iParam1) //Position: 0xC207 / 49671
{
	if (bParam0 > iParam1)
	{
		return bParam0;
	}
	return iParam1;
}

int Function_250(int iParam0, int iParam1) //Position: 0xC21A / 49690
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

bool Function_251(int iParam0) //Position: 0xC32B / 49963
{
	var uVar0;
	var uVar2;
	
	if (DECOR_CHECK_EXIST(&iParam0 + 8, "wasstickup"))
	{
		DECOR_REMOVE(&iParam0 + 8, "wasstickup");
		return 1;
	}
	Function_282(&iParam0 + 36);
	uVar2 = Function_319(StackVal, Function_282(&iParam0 + 36), &iParam0 + 8);
	GET_POSITION(&uVar2, &uVar0);
	Function_252(StackVal, StackVal, &iParam0, *(&iParam0 + 36), &iParam0 + 192, 2,5f, 0);
	*(&iParam0 + 36) = { StackVal, StackVal, Function_252(StackVal, StackVal, &iParam0, *(&iParam0 + 36), &iParam0 + 192, 2,5f, 0) };
	if (Function_279(&iParam0 + 36))
	{
		return 0;
	}
	return 1;
}

vector3 Function_252(struct<217> Param0) //Position: 0xC3AD / 50093
{
	vector3 vVar0;
	struct<2> Var3;
	bool bVar5;
	bool bVar6;
	var uVar7;
	float fVar8;
	float fVar9;
	int iVar10;
	var uVar11;
	struct<2> Var13;
	var uVar15;
	float fVar17;
	vector3 vVar18;
	var uVar21;
	bool bVar22;
	var uVar23;
	float fVar24;
	struct<17> Var25;
	
	Function_282(&vParam1);
	Var3 = Function_282(&vParam1);
	bVar5 = false;
	uVar7 = Function_261(StackVal, Param0.f_216);
	fVar8 = 0.0f;
	if (IS_OBJECTSET_VALID(&Param0 + 64))
	{
		fVar9 = 5.0f;
	}
	else
	{
		fVar9 = (fParam5 * 2.0f);
	}
	iVar10 = 0;
	GET_OBJECT_POSITION(Function_265(&Param0 + 8), &uVar11);
	Var13 = Vector(0.0f, 0.0f, -1.0f);
	if (!IS_OBJECTSET_VALID(&Param0 + 208))
	{
		*(&Param0 + 208) = CREATE_OBJECTSET_IN_LAYOUT(Function_37(), &Global_43578, 36, 1);
	}
	bVar22 = 4294967295;
	while (!bVar6)
	{
		uVar21 = START_CURVE_QUERY(&Global_43578, Var3, uVar7, fVar8, fVar9, Function_249(Function_260(&Param0), ((fVar9 - fVar8) / 2.0f)), 0);
		if (IS_OBJECT_VALID(&uParam4))
		{
			REMOVE_CURVE_FROM_CURVE_QUERY_USING_CURVE(&uVar21, &uParam4);
			if (!IS_OBJECT_IN_OBJECTSET(&uParam4, &Param0 + 208))
			{
				ADD_OBJECT_TO_OBJECTSET(&uParam4, &Param0 + 208);
			}
		}
		if (IS_OBJECTSET_VALID(&Param0 + 64))
		{
			bVar5 = false;
			while (bVar5 <= GET_NUM_CURVES_IN_CURVE_QUERY(&uVar21))
			{
				uVar23 = GET_CURVE_FROM_CURVE_INDEX_IN_CURVE_QUERY(&uVar21, bVar5);
				if (!IS_OBJECT_IN_OBJECTSET(&uVar23, &Param0 + 64))
				{
					REMOVE_CURVE_FROM_CURVE_QUERY_USING_CURVE(&uVar21, &uVar23);
					RELEASE_CURVE(&uVar23);
				}
				bVar5++;
			}
		}
		else
		{
			bVar5 = false;
			while (bVar5 <= GET_NUM_CURVES_IN_CURVE_QUERY(&uVar21))
			{
				uVar23 = GET_CURVE_FROM_CURVE_INDEX_IN_CURVE_QUERY(&uVar21, bVar5);
				if (IS_OBJECT_IN_OBJECTSET(&uVar23, &Param0 + 208))
				{
					REMOVE_CURVE_FROM_CURVE_QUERY_USING_CURVE(&uVar21, &uVar23);
					RELEASE_CURVE(&uVar23);
				}
				bVar5++;
			}
		}
		if (!GET_NUM_CURVES_IN_CURVE_QUERY(&uVar21) < 0)
		{
			REMOVE_OBJECT_FROM_OBJECTSET(&uParam4, &Param0 + 208);
			UNK_0xDF93BD7C(&uVar21);
			Function_259(&Param0 + 208);
			ADD_OBJECT_TO_OBJECTSET(&uParam4, &Param0 + 208);
			if (uParam6 || iVar10 > 5)
			{
				fVar8 = fVar9;
				fVar9 = (fVar9 + fParam5);
				iVar10++;
			}
			else
			{
				Function_258();
				return StackVal, StackVal, Function_258();
			}
		}
		fVar24 = -100000.0f;
		bVar22 = 4294967295;
		bVar5 = false;
		if (IS_OBJECTSET_VALID(&Param0 + 64))
		{
			bVar5 = false;
			while (bVar5 <= GET_NUM_CURVES_IN_CURVE_QUERY(&uVar21))
			{
				uVar23 = GET_CURVE_FROM_CURVE_INDEX_IN_CURVE_QUERY(&uVar21, bVar5);
				if (IS_OBJECT_IN_OBJECTSET(&uVar23, &Param0 + 64))
				{
					GET_POINT_FROM_CURVE_QUERY(&uVar21, bVar5, &vVar18);
					Function_282(&vVar18);
					Function_282(&vParam1);
					uVar15 = Vector(StackVal, StackVal, StackVal) - Vector(Function_282(&vParam1), Function_282(&vVar18), StackVal);
					fVar17 = VDOT(&uVar15, &Var13);
					if (fVar17 < fVar24)
					{
						fVar24 = fVar17;
						bVar22 = bVar5;
					}
				}
				RELEASE_CURVE(&uVar23);
				bVar5++;
			}
		}
		else if (Function_520(StackVal, Var13))
		{
			bVar22 = ROUND((TO_FLOAT(RAND_INT_RANGE(0, (GET_NUM_CURVES_IN_CURVE_QUERY(&uVar21) - 1000))) / 1000.0f));
		}
		else if (Global_6629)
		{
			Function_282(&vParam1);
			Var13 = Vector(StackVal, StackVal, StackVal) - Vector(Function_282(&vParam1), Global_54078, StackVal);
			VNORMALIZE(&Var13);
			Function_258();
			Var25 = { StackVal, StackVal, Function_258() };
			Function_258();
			Var28 = { StackVal, StackVal, Function_258() };
			bVar5 = false;
			while (bVar5 <= GET_NUM_CURVES_IN_CURVE_QUERY(&uVar21))
			{
				uVar31 = GET_CURVE_FROM_CURVE_INDEX_IN_CURVE_QUERY(&uVar21, bVar5);
				GET_CURVE_POINT(&uVar31, 1.0f, &Var25, 0);
				GET_CURVE_POINT(&uVar31, 0.0f, &Var28, 0);
				Function_282(&vParam1);
				Function_282(&Var25);
				Function_282(&vParam1);
				Function_282(&Var28);
				if (StackVal > Function_61(StackVal, Function_61(StackVal, StackVal, Function_282(&vParam1), Function_282(&Var25)), Function_282(&vParam1), Function_282(&Var28)))
				{
					UNK_0x04D89A35(&uVar31, 1.0f, 0.0f, -5.0f, &vVar18);
				}
				else
				{
					UNK_0x04D89A35(&uVar31, 0.0f, 0.0f, 5.0f, &vVar18);
				}
				if (Global_47151[12])
				{
					Function_257(StackVal, StackVal, vVar18);
					PRINTNL();
				}
				Function_282(&vVar18);
				Function_282(&vParam1);
				uVar15 = Vector(StackVal, StackVal, StackVal) - Vector(Function_282(&vParam1), Function_282(&vVar18), StackVal);
				VNORMALIZE(&uVar15);
				fVar17 = VDOT(&uVar15, &Var13);
				fVar17 = (fVar17 * RAND_FLOAT_GAUSSIAN(0,5f, 0,5f));
				if (fVar17 < fVar24)
				{
					fVar24 = fVar17;
					bVar22 = bVar5;
				}
				RELEASE_CURVE(&uVar31);
				bVar5++;
			}
		}
		else
		{
			Function_258();
			Var25 = { StackVal, StackVal, Function_258() };
			Function_258();
			Var28 = { StackVal, StackVal, Function_258() };
			Function_282(&vParam1);
			Var13 = Vector(StackVal, StackVal, StackVal) - Vector(Function_282(&vParam1), Global_54078, StackVal);
			VNORMALIZE(&Var13);
			bVar5 = false;
			while (bVar5 <= GET_NUM_CURVES_IN_CURVE_QUERY(&uVar21))
			{
				uVar31 = GET_CURVE_FROM_CURVE_INDEX_IN_CURVE_QUERY(&uVar21, bVar5);
				GET_CURVE_POINT(&uVar31, 1.0f, &Var25, 0);
				GET_CURVE_POINT(&uVar31, 0.0f, &Var28, 0);
				Function_282(&vParam1);
				Function_282(&Var25);
				Function_282(&vParam1);
				Function_282(&Var28);
				if (StackVal > Function_61(StackVal, Function_61(StackVal, StackVal, Function_282(&vParam1), Function_282(&Var25)), Function_282(&vParam1), Function_282(&Var28)))
				{
					UNK_0x04D89A35(&uVar31, 1.0f, Var25.f_16, 5.0f, &vVar18);
				}
				else
				{
					UNK_0x04D89A35(&uVar31, 0.0f, Var28.f_16, 5.0f, &vVar18);
				}
				Function_282(&vVar18);
				Function_282(&vParam1);
				uVar15 = Vector(StackVal, StackVal, StackVal) - Vector(Function_282(&vParam1), Function_282(&vVar18), StackVal);
				VNORMALIZE(&uVar15);
				fVar17 = VDOT(&uVar15, &Var13);
				fVar17 = (fVar17 * RAND_FLOAT_GAUSSIAN(0,25f, 1.0f));
				if (fVar17 < fVar24)
				{
					fVar24 = fVar17;
					bVar22 = bVar5;
				}
				RELEASE_CURVE(&uVar31);
				bVar5++;
			}
		}
		iVar10 = 0;
		if (bVar22 == 4294967295)
		{
			UNK_0xDF93BD7C(&uVar21);
			if (uParam6 || iVar10 > 5)
			{
				fVar8 = fVar9;
				fVar9 = (fVar9 + fParam5);
				iVar10++;
			}
			else
			{
				Function_258();
				return StackVal, StackVal, Function_258();
			}
		}
		bVar6 = true;
	}
	*(&Param0 + 192) = GET_CURVE_FROM_CURVE_INDEX_IN_CURVE_QUERY(&uVar21, bVar22);
	Param0.f_200 = CURVE_CALCULATE_DISTANCE_BY_FORCED_COMPONENT_SUBDIVISION_BOUNDS(&Param0 + 192, 0.0f, 1.0f, 10);
	GET_POINT_FROM_CURVE_QUERY(&uVar21, bVar22, &vVar0);
	Function_282(&vVar0);
	uVar32 = Function_282(&vVar0);
	GET_CURVE_POINT(&Param0 + 192, 1.0f, &vVar34, 0);
	GET_CURVE_POINT(&Param0 + 192, 0.0f, &vVar37, 0);
	if (StackVal < Function_256(StackVal, StackVal, StackVal, Function_256(StackVal, StackVal, StackVal, StackVal, vVar34, vParam1), vVar37, vParam1))
	{
		Param0.f_188 = 1;
		GET_CURVE_POINT(&Param0 + 192, 1.0f, &vVar0, 0);
	}
	else
	{
		Param0.f_188 = 4294967295;
		GET_CURVE_POINT(&Param0 + 192, 0.0f, &vVar0, 0);
	}
	if (Global_47267[1])
	{
		bVar5 = false;
		bVar5 = false;
		while (bVar5 <= GET_NUM_POINTS_IN_CURVE_QUERY(&uVar21))
		{
			GET_POINT_FROM_CURVE_QUERY(&uVar21, bVar5, &vVar18);
			Function_282(&vVar18);
			uVar32 = Function_282(&vVar18);
			bVar5++;
		}
		Function_282(&vVar0);
		uVar32 = Function_282(&vVar0);
	}
	Function_253(&Param0);
	UNK_0xDF93BD7C(&uVar21);
	return StackVal, StackVal, vVar0;
}

void Function_253(struct<33> Param0) //Position: 0xC902 / 51458
{
	if (!Function_255(&Param0))
	{
		return;
	}
	if (!Function_254(StackVal))
	{
		return;
	}
	if (!SQUAD_IS_VALID(&Param0 + 8))
	{
		return;
	}
	if (!IS_OBJECT_VALID(&Param0 + 192))
	{
		return;
	}
	if (!Param0.f_32 < 0)
	{
		return;
	}
	if (!GET_CURVE_TYPE(&Param0 + 192) != 4 && !GET_CURVE_TYPE(&Param0 + 192) != 5)
	{
		LOG_ERROR("Adding a traffic node with a bad pathtype. I thought we filtered this?");
		return;
	}
	return;
}

bool Function_254(int iParam0) //Position: 0xC9B1 / 51633
{
	if (iParam0 > 0 || iParam0 < 3)
	{
		return 0;
	}
	return 1;
}

bool Function_255(bool bParam0) //Position: 0xC9C6 / 51654
{
	if (bParam0 == 0)
	{
		return 0;
	}
	return 1;
}

float Function_256(int iParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5) //Position: 0xC9D7 / 51671
{
	struct<2> Var0;
	struct<2> Var2;
	
	Function_282(&iParam0);
	Var0 = Function_282(&iParam0);
	Function_282(&iParam3);
	Var2 = Function_282(&iParam3);
	return VDIST(Var0, Var2);
}

void Function_257(struct<17> Param0) //Position: 0xC9FA / 51706
{
	Function_282(&Param0);
	PRINTVECTOR(Function_282(&Param0));
	PRINTSTRING(": t=");
	PRINTFLOAT(Param0.f_12);
	PRINTSTRING(" slope=");
	PRINTFLOAT(Param0.f_16);
	return;
}

vector3 Function_258() //Position: 0xCA2D / 51757
{
	vector3 vVar0;
	
	vVar0.f_20 = 4294967295;
	return StackVal, StackVal, vVar0;
}

void Function_259(var uParam0) //Position: 0xCA3C / 51772
{
	int iVar0;
	
	if (!IS_OBJECTSET_VALID(&uParam0))
	{
		return;
	}
	while (GET_OBJECTSET_SIZE(&uParam0) >= 0)
	{
		iVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, &uParam0);
		REMOVE_OBJECT_FROM_OBJECTSET(&iVar0, &uParam0);
		CLEAN_OBJECTSET(&uParam0);
		if (IS_OBJECT_VALID(&iVar0))
		{
			RELEASE_CURVE(GET_CURVE_FROM_OBJECT(&iVar0));
		}
	}
	return;
}

int Function_260(struct<113> Param0) //Position: 0xCA85 / 51845
{
	if (IS_OBJECTSET_VALID(&Param0 + 64))
	{
		return 5.0f;
	}
	switch (StackVal)
	{
		case 0x00000001:
		case 0x00000002:
		case 0x00000003:
			switch (Param0.f_112)
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

int Function_261(int iParam0, int iParam1) //Position: 0xCB41 / 52033
{
	if (&iParam1 != 0)
	{
		return &iParam1;
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

vector3 Function_262(int iParam0) //Position: 0xCB73 / 52083
{
	struct<2> Var0;
	struct<2> Var2;
	
	Var0 = Vector(0.0f, -50.0f, 0.0f);
	GET_OBJECT_RELATIVE_POSITION(GET_OBJECT_FROM_ACTOR(&iParam0), Var0, &Var2);
	if (!Function_263(&Var2, 50.0f, &Var0, 10))
	{
		Var0 = Var2;
	}
	Function_264(StackVal, Var0);
	return StackVal, StackVal, Function_264(StackVal, Var0);
}

bool Function_263(struct<2> Param0, struct<5> Param2) //Position: 0xCBB4 / 52148
{
	var uVar0;
	int iVar2;
	struct<2> Var3;
	
	if (iParam3 == 4294967295)
	{
		iVar2 = 4294967294;
	}
	else
	{
		iVar2 = 0;
	}
	if (!STREAMING_ARE_BOUNDS_LOADED(Param0, 1.0f))
	{
		GET_CAMERA_POSITION(GET_GAME_CAMERA(), &Var3);
		if (VDIST(Param0, Var3) > 175.0f)
		{
			PRINTSTRING("Camera Position: ");
			PRINTVECTOR(Var3);
			PRINTNL();
			PRINTSTRING("Probe Position: ");
			PRINTVECTOR(Param0);
			PRINTNL();
			PRINTSTRING("Distance");
			PRINTFLOAT(VDIST(Param0, Var3));
			PRINTNL();
		}
		return 0;
	}
	if (FIND_GROUND_INTERSECTION(&Param0, fParam1, &Param2, &uVar0))
	{
		if (!Function_520(StackVal, Param2))
		{
			return 1;
		}
	}
	while (!IS_EXITFLAG_SET() && iVar2 > iParam3)
	{
		Param0 = (Param0 + 0,01f);
		Param0.f_8 = (StackVal + 0,01f);
		if (FIND_GROUND_INTERSECTION(&Param0, fParam1, &Param2, &uVar0))
		{
			if (!Function_520(StackVal, Param2))
			{
				return 1;
			}
		}
		Param2 = Param0;
		Param2.f_4 = (StackVal - fParam1);
		if (!iParam3 != 4294967295)
		{
			iVar2++;
		}
		WAIT(false);
	}
	return 0;
}

vector3 Function_264(vector3 vParam0) //Position: 0xCCF7 / 52471
{
	vector3 vVar0;
	
	vVar0.x = vParam0.x;
	vVar0.f_4 = vParam0.y;
	vVar0.f_8 = vParam0.z;
	return StackVal, StackVal, vVar0;
}

var Function_265(int iParam0) //Position: 0xCD15 / 52501
{
	int iVar0;
	bool bVar1;
	
	if (!SQUAD_IS_VALID(&iParam0))
	{
		return "";
	}
	bVar1 = false;
	while (bVar1 < (SQUAD_GET_SIZE(&iParam0) - 1))
	{
		iVar0 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar1);
		if (IS_ACTOR_VALID(&iVar0) && IS_ACTOR_ALIVE(&iVar0))
		{
			return &iVar0;
		}
		bVar1++;
	}
	return "";
}

bool Function_266(struct<137> Param0) //Position: 0xCD62 / 52578
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (!Function_255(&Param0))
	{
		Function_283(&Param0, 1);
		return 0;
	}
	if (DECOR_CHECK_EXIST(&Param0 + 8, "coachService"))
	{
		return 1;
	}
	AI_CLEAR_NAV_MATERIAL_USAGE(Function_265(&Param0 + 8));
	if (!SQUAD_GOAL_IS_VALID(&Param0 + 16))
	{
		SQUAD_GOALS_CLEAR(&Param0 + 8);
	}
	Function_282(&Param0 + 36);
	Var2 = Function_282(&Param0 + 36);
	Var0 = Var2;
	Function_270(StackVal, Var0, &Param0 + 36);
	if (&bParam1)
	{
		Param0.f_116 = Function_269(StackVal, Param0.f_116, Param0.f_120);
		if (!Param0.f_136 || Param0.f_112 != 4294967295)
		{
			Param0.f_112 = Param0.f_116;
		}
	}
	if (&bParam2)
	{
		AI_SET_NAV_MATERIAL_USAGE(StackVal, Function_268(Function_265(&Param0 + 8)), 0);
	}
	Function_267(&Param0);
	return 1;
}

void Function_267(struct<189> Param0) //Position: 0xCE32 / 52786
{
	int iVar0;
	int iVar1;
	
	if (!SQUAD_IS_VALID(&Param0 + 8))
	{
		return;
	}
	iVar1 = 2;
	if (Function_12())
	{
		iVar1 = 0;
	}
	if (Param0.f_188 == 4294967295)
	{
		iVar0 = 1;
	}
	if (Param0.f_148)
	{
		iVar1 = 1;
	}
	if (Param0.f_156)
	{
		if (!Param0.f_136 && GET_CURVE_TYPE(&Param0 + 192) == 5)
		{
			Param0.f_156 = 0;
		}
	}
	else
	{
		if (GET_CURVE_TYPE(&Param0 + 192) == 5)
		{
			Param0.f_156 = 1;
		}
		if (Param0.f_136)
		{
			Param0.f_156 = 1;
		}
	}
	if (!SQUAD_GOAL_IS_VALID(&Param0 + 16))
	{
		(&Param0 + 16) = SQUAD_GOAL_ADD_FOLLOW_TRAFFIC_CURVE(&Param0 + 8, 0, 4294967295, &Param0 + 192, Param0.f_112, iVar0, iVar1);
		if (Param0.f_156)
		{
			SQUAD_FOLLOW_TRAFFIC_CURVE_SET_BEHAVIOR_FLAG(&Param0 + 8, &Param0 + 16, 2, 0);
			SQUAD_FOLLOW_TRAFFIC_CURVE_SET_BEHAVIOR_FLAG(&Param0 + 8, &Param0 + 16, 1, 1);
		}
		else
		{
			SQUAD_FOLLOW_TRAFFIC_CURVE_SET_BEHAVIOR_FLAG(&Param0 + 8, &Param0 + 16, 2, 1);
			SQUAD_FOLLOW_TRAFFIC_CURVE_SET_BEHAVIOR_FLAG(&Param0 + 8, &Param0 + 16, 1, 0);
		}
		if (Param0.f_124 != 2)
		{
			if (!Param0.f_144)
			{
				Param0.f_124 = 2;
			}
			else
			{
				SQUAD_FOLLOW_TRAFFIC_CURVE_SET_TASK_PRIORITY(&Param0 + 8, &Param0 + 16, Param0.f_124);
			}
		}
		if (StackVal && !Param0.f_152 != 2)
		{
			SQUAD_FOLLOW_TRAFFIC_CURVE_SET_BEHAVIOR_FLAG(&Param0 + 8, &Param0 + 16, 4, 1);
		}
		else
		{
			SQUAD_FOLLOW_TRAFFIC_CURVE_SET_BEHAVIOR_FLAG(&Param0 + 8, &Param0 + 16, 4, 0);
		}
		SQUAD_GOAL_ADD_FACTION_STATUS_WITHIN_GOAL(&Param0 + 8, 1, 0);
		SQUAD_GOAL_ADD_SHARE_PERCEPTION(&Param0 + 8, 1);
	}
	else
	{
		if (!SQUAD_FOLLOW_TRAFFIC_CURVE_IS_CURVE_ALREADY_IN_LIST(&Param0 + 8, &Param0 + 16, &Param0 + 192, iVar0, 0))
		{
			SQUAD_FOLLOW_TRAFFIC_CURVE_ENQUEUE_CURVE(&Param0 + 8, &Param0 + 16, &Param0 + 192, iVar0);
		}
		if (Param0.f_156)
		{
			SQUAD_FOLLOW_TRAFFIC_CURVE_SET_BEHAVIOR_FLAG(&Param0 + 8, &Param0 + 16, 2, 0);
			SQUAD_FOLLOW_TRAFFIC_CURVE_SET_BEHAVIOR_FLAG(&Param0 + 8, &Param0 + 16, 1, 1);
		}
		else
		{
			SQUAD_FOLLOW_TRAFFIC_CURVE_SET_BEHAVIOR_FLAG(&Param0 + 8, &Param0 + 16, 2, 1);
			SQUAD_FOLLOW_TRAFFIC_CURVE_SET_BEHAVIOR_FLAG(&Param0 + 8, &Param0 + 16, 1, 0);
		}
	}
	return;
}

int Function_268(int iParam0) //Position: 0xD02D / 53293
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

int Function_269(int iParam0, int iParam1, int iParam2) //Position: 0xD054 / 53332
{
	int iVar0;
	int iVar1;
	
	if (!Function_12())
	{
		if (&iParam2 != 0)
		{
			return &iParam2;
		}
		iVar0 = RAND_INT_RANGE(1, 10000);
		iParam1 = &iParam1;
		switch (iParam0)
		{
			case 0x00000001:
				if (iVar0 <= 5000)
				{
					return 2;
				}
				if (iVar0 <= 4000)
				{
					return 4;
				}
				return 3;
				break;
			
			case 0x00000003:
				if (iVar0 <= 5000)
				{
					return 1;
				}
				return 2;
				break;
			
			case 0x00000002:
				if (iVar0 <= 7500)
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
	if (&iParam2 != 0)
	{
		return &iParam2;
	}
	iVar1 = RAND_INT_RANGE(1, 10000);
	iParam1 = &iParam1;
	switch (iParam0)
	{
		case 0x00000001:
			if (iVar1 <= 9000)
			{
				return 4;
			}
			return 3;
			break;
		
		case 0x00000003:
			if (iVar1 <= 7500)
			{
				return 2;
			}
			return 4;
			break;
		
		case 0x00000002:
			if (iVar1 <= 7500)
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

void Function_270(vector3 vParam0) //Position: 0xD19A / 53658
{
	vParam2 = vParam0.x;
	vParam2.f_4 = vParam0.y;
	vParam2.f_8 = vParam0.z;
	return;
}

void Function_271(struct<137> Param0) //Position: 0xD1B8 / 53688
{
	if (!Function_12())
	{
		Function_278(&Param0 + 8);
		if (Global_43580.f_104 != 0)
		{
			Param0.f_112 = Global_43580.f_104;
			Function_277(&Param0 + 8, Param0.f_112);
		}
		else if (Global_6646 || iParam1)
		{
			if (StackVal == 2)
			{
				Param0.f_112 = 4;
			}
			else
			{
				Param0.f_112 = 3;
			}
			Function_277(&Param0 + 8, Param0.f_112);
			if (StackVal == 2)
			{
				Function_276(&Param0 + 8, 1);
			}
		}
		else if ((Global_6647 || Function_274(131072)) || Function_245(&Param0 + 8))
		{
			Param0.f_112 = 4;
			Function_277(&Param0 + 8, Param0.f_112);
			if (StackVal == 2)
			{
				Function_276(&Param0 + 8, 1);
			}
		}
		else if (Param0.f_132)
		{
			Param0.f_112 = Function_273(StackVal, Param0.f_120);
			Function_277(&Param0 + 8, Param0.f_112);
		}
		else if (Param0.f_136)
		{
			Param0.f_112 = Function_272(StackVal, Param0.f_120);
			Function_277(&Param0 + 8, Param0.f_112);
			if (StackVal == 2)
			{
				Function_276(&Param0 + 8, 0);
			}
		}
		else
		{
			Param0.f_112 = Param0.f_116;
			if (StackVal == 2)
			{
				Function_276(&Param0 + 8, 1);
			}
		}
	}
	else
	{
		Function_278(&Param0 + 8);
		if (Global_43580.f_104 != 0)
		{
			Param0.f_112 = Global_43580.f_104;
			Function_277(&Param0 + 8, Param0.f_112);
		}
		else if (Function_274(131072) || Function_245(&Param0 + 8))
		{
			Param0.f_112 = 3;
			Function_277(&Param0 + 8, Param0.f_112);
			if (StackVal == 2)
			{
				Function_276(&Param0 + 8, 1);
			}
		}
		else if (Param0.f_132)
		{
			Param0.f_112 = Function_273(StackVal, Param0.f_120);
			Function_277(&Param0 + 8, Param0.f_112);
		}
		else if (Param0.f_136)
		{
			Param0.f_112 = Function_272(StackVal, Param0.f_120);
			Function_277(&Param0 + 8, Param0.f_112);
			if (StackVal == 2)
			{
				Function_276(&Param0 + 8, 0);
			}
		}
		else
		{
			Param0.f_112 = Param0.f_116;
			if (StackVal == 2)
			{
				Function_276(&Param0 + 8, 1);
			}
		}
	}
	return;
}

int Function_272(int iParam0, int iParam1) //Position: 0xD3F4 / 54260
{
	int iVar0;
	int iVar1;
	
	if (!Function_12())
	{
		if (iParam1 != 0)
		{
			return iParam1;
		}
		iVar0 = RAND_INT_RANGE(1, 10000);
		switch (iParam0)
		{
			case 0x00000001:
				if (iVar0 <= 9000)
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
	iVar1 = RAND_INT_RANGE(1, 10000);
	switch (iParam0)
	{
		case 0x00000001:
			if (iVar1 <= 9000)
			{
				return 4;
			}
			return 3;
			break;
		
		case 0x00000002:
			if (iVar1 <= 9000)
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

int Function_273(int iParam0, int iParam1) //Position: 0xD4E0 / 54496
{
	if (!Function_12())
	{
		if (iParam1 != 0)
		{
			return iParam1;
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
	if (iParam1 != 0)
	{
		return iParam1;
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

int Function_274(int iParam0) //Position: 0xD5AB / 54699
{
	return Function_275(&Global_43580, iParam0);
}

int Function_275(var uParam0, int iParam1) //Position: 0xD5B9 / 54713
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_276(var uParam0, int iParam1) //Position: 0xD5D6 / 54742
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&uParam0))
	{
		AI_SET_NAV_ACTOR_AVOIDANCE_ALLOW_TURNS(SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0), iParam1);
		bVar0++;
	}
	return;
}

void Function_277(var uParam0, int iParam1) //Position: 0xD600 / 54784
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&uParam0))
	{
		TASK_OVERRIDE_SET_MOVETYPE(SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0), iParam1);
		bVar0++;
	}
	return;
}

void Function_278(int iParam0) //Position: 0xD62A / 54826
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&iParam0))
	{
		TASK_OVERRIDE_CLEAR_MOVETYPE(SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0));
		bVar0++;
	}
	return;
}

bool Function_279(struct<21> Param0) //Position: 0xD652 / 54866
{
	return ((((StackVal && (StackVal && Param0 != 0.0f != 0.0f) != 0.0f) && Param0.f_12 != 0.0f) && Param0.f_16 != 0.0f) && Param0.f_20 != 4294967295);
}

vector3 Function_280(struct<189> Param0) //Position: 0xD686 / 54918
{
	int iVar0;
	int iVar3;
	vector3 vVar6;
	
	if (!IS_OBJECT_VALID(&uParam4))
	{
		return StackVal, StackVal, vVar6;
	}
	Param0.f_188 = Function_281(StackVal, StackVal, StackVal, &uParam4, vParam1, Param5);
	if (Param0.f_188 >= 0)
	{
		GET_CURVE_POINT(&uParam4, 1.0f, &vVar6, 0);
		UNK_0x19D652F9(&uParam4, 1.0f, &vParam1, &iVar0);
		Function_282(&iVar0);
		Function_282(&vParam1);
		*(&Param0 + 220) = Vector(StackVal, StackVal, StackVal) - Vector(Function_282(&vParam1), Function_282(&iVar0), StackVal);
		*(&Param0 + 220) = Vector(0.0f, UNK_0x9C40E671(&Param0 + 220), 0.0f);
	}
	else
	{
		GET_CURVE_POINT(&uParam4, 0.0f, &vVar6, 0);
		UNK_0x19D652F9(&uParam4, -1.0f, &vParam1, &iVar3);
		Function_282(&iVar3);
		Function_282(&vParam1);
		*(&Param0 + 220) = Vector(StackVal, StackVal, StackVal) - Vector(Function_282(&vParam1), Function_282(&iVar3), StackVal);
		*(&Param0 + 220) = Vector(0.0f, UNK_0x9C40E671(&Param0 + 220), 0.0f);
	}
	return StackVal, StackVal, vVar6;
}

int Function_281(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4, Vector3 vParam5) //Position: 0xD730 / 55088
{
	int iVar0;
	int iVar3;
	var uVar6;
	var uVar8;
	float fVar10;
	float fVar11;
	
	UNK_0x19D652F9(&uParam0, 1.0f, &iParam1, &iVar0);
	UNK_0x19D652F9(&uParam0, -1.0f, &iParam1, &iVar3);
	Function_282(&iVar0);
	Function_282(&iParam1);
	uVar6 = Vector(StackVal, StackVal, StackVal) - Vector(Function_282(&iParam1), Function_282(&iVar0), StackVal);
	fVar10 = VDOT(&uParam4, &uVar6);
	Function_282(&iVar3);
	Function_282(&iParam1);
	uVar8 = Vector(StackVal, StackVal, StackVal) - Vector(Function_282(&iParam1), Function_282(&iVar3), StackVal);
	fVar11 = VDOT(&uParam4, &uVar8);
	if (fVar11 > fVar10)
	{
		return 1;
	}
	return 4294967295;
}

struct<8> Function_282(vector3 vParam0) //Position: 0xD789 / 55177
{
	struct<2> Var0;
	
	Var0 = vParam0;
	Var0.f_4 = vParam0.y;
	Var0.f_8 = vParam0.z;
	return StackVal, Var0;
}

void Function_283(struct<113> Param0) //Position: 0xD7AB / 55211
{
	struct<5> Var0;
	struct<13> Var8;
	
	if (!Global_47267[1] && iParam1)
	{
		return;
	}
	if (!Function_255(&Param0))
	{
		return;
	}
	strcpy(&cVar4, "TRAFFIC NODE", 16);
	switch (Param0.f_112)
	{
		case 0x00000005:
			Var8 = 1.0f;
			Var8.f_4 = 0.0f;
			Var8.f_8 = 0.0f;
			Var8.f_12 = 1.0f;
			break;
		
		case 0x00000001:
			Var8 = 0,9f;
			Var8.f_4 = 0,55f;
			Var8.f_8 = 0,1f;
			Var8.f_12 = 1.0f;
			break;
		
		case 0x00000002:
			Var8 = 0,9f;
			Var8.f_4 = 0,9f;
			Var8.f_8 = 0,1f;
			Var8.f_12 = 1.0f;
			break;
		
		case 0x00000004:
			Var8 = 0,2f;
			Var8.f_4 = 0,8f;
			Var8.f_8 = 0,1f;
			Var8.f_12 = 1.0f;
			break;
		
		case 0x00000003:
			Var8 = 0,1f;
			Var8.f_4 = 0,1f;
			Var8.f_8 = 1.0f;
			Var8.f_12 = 1.0f;
			break;
	}
	GET_POSITION(Function_265(&Param0 + 8), &Var0);
	fVar10 = Vector(0.0f, 1.0f, 0.0f);
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
	Function_282(&Param0 + 36);
	iVar2 = Function_282(&Param0 + 36);
	return;
}

int Function_284(int iParam0) //Position: 0xD8FD / 55549
{
	bool bVar0;
	int iVar1;
	var uVar2;
	
	if (!SQUAD_IS_VALID(&iParam0))
	{
		return 0;
	}
	bVar0 = false;
	iVar1 = 0;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&iParam0) - 1))
	{
		uVar2 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar2))
		{
			if (IS_ACTOR_ALIVE(&uVar2))
			{
				iVar1++;
			}
		}
		bVar0++;
	}
	return iVar1;
}

var Function_285(var uParam0, var uParam1, bool bParam2, bool bParam3) //Position: 0xD953 / 55635
{
	bool bVar0;
	bool bVar1;
	float fVar2;
	float fVar3;
	var uVar4;
	int iVar5;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return "";
	}
	if (!IS_ACTOR_VALID(&uParam1))
	{
		return "";
	}
	bVar1 = 4294967295;
	fVar2 = 999999.0f;
	iVar5 = SQUAD_GET_NOT_ELIMINATED_IMPAIRMENT_MASK(&uParam0);
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar4 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (&bParam2)
		{
			if (!AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(&uVar4), iVar5))
			{
				uVar4 = "";
			}
		}
		if (&bParam3)
		{
			if (IS_ACTOR_RIDING(&uVar4))
			{
				uVar4 = "";
			}
		}
		if (IS_ACTOR_VALID(&uVar4) && IS_ACTOR_ALIVE(&uVar4))
		{
			fVar3 = Function_204(&uVar4, &uParam1);
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
		return SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar1);
	}
	return "";
}

void Function_286(var uParam0, var uParam1, int iParam2, bool bParam3) //Position: 0xDA1E / 55838
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	uVar2 = GET_OBJECT_FROM_SQUAD(&uParam0);
	if (IS_OBJECT_VALID(&uVar2))
	{
		bVar0 = false;
		while (bVar0 <= SQUAD_GET_SIZE(&uParam0))
		{
			uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
			if (IS_ACTOR_VALID(&uVar1))
			{
				SET_ACTOR_STAY_WITHIN_VOLUME(&uVar1, &uParam1, iParam2, bParam3);
			}
			bVar0++;
		}
	}
}

void Function_287(var uParam0, var uParam1, bool bParam2, int iParam3) //Position: 0xDA76 / 55926
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	if (!IS_ACTORSET_VALID(&uParam1))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&uParam0))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (&iParam3 != 0 || (&iParam3 != 1 && IS_ACTOR_HUMAN(&uVar1)))
			{
				if (!IS_ACTOR_IN_ACTORSET(&uParam1, &uVar1))
				{
					ADD_ACTORSET_MEMBER(&uParam1, &uVar1);
				}
				if (bParam2)
				{
					SQUAD_LEAVE(&uVar1);
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

void Function_288(int iParam0) //Position: 0xDB06 / 56070
{
	bool bVar0;
	
	if (IS_ACTORSET_VALID(&iParam0))
	{
		bVar0 = false;
		bVar0 = false;
		while (bVar0 < (GET_ACTORSET_SIZE(&iParam0) - 1))
		{
			if (IS_ACTOR_VALID(GET_ACTOR_FROM_ACTORSET(&iParam0, bVar0)))
			{
				REMOVE_ACTORSET_MEMBER(&iParam0, GET_ACTOR_FROM_ACTORSET(&iParam0, bVar0));
			}
			bVar0++;
		}
	}
	return;
}

struct<32> Function_289(struct<8> Param0) //Position: 0xDB51 / 56145
{
	char* cVar0[32];
	char* cVar8[16];
	
	if (!IS_STRING_VALID(&Param0))
	{
	}
	else
	{
		Global_10985 = (Global_10985 % 10000);
		strcpy(&cVar8, I2STR(Global_10985), 16);
		while (STRING_LENGTH(&cVar8) <= 4)
		{
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_290("0", &cVar8, ""), 4);
		}
		if (IS_STRING_VALID(&cVar8))
		{
			strcpy(&cVar0, &Param0, 32);
			stradd(&cVar0, &cVar8, 32);
			Global_10985++;
		}
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_290(char* cParam0) //Position: 0xDBBD / 56253
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	stradd(&cVar0, &cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_291(bool bParam0, bool bParam1) //Position: 0xDBDF / 56287
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&bParam0), "matkdef_state", bParam1);
	return;
}

var Function_292(int iParam0) //Position: 0xDC01 / 56321
{
	return DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(&iParam0), "matkdef_state");
}

int Function_293(var uParam0) //Position: 0xDC20 / 56352
{
	int iVar0;
	bool bVar1;
	
	if (SQUAD_IS_VALID(&uParam0))
	{
		bVar1 = false;
		while (bVar1 < (SQUAD_GET_SIZE(&uParam0) - 1))
		{
			iVar0 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar1);
			if (IS_ACTOR_ALIVE(&iVar0) && IS_ACTOR_VALID(GET_MOUNT(&iVar0)))
			{
				return 0;
			}
			bVar1++;
		}
	}
	return 1;
}

bool Function_294(int iParam0) //Position: 0xDC69 / 56425
{
	if (SQUAD_IS_VALID(&iParam0))
	{
		if (SQUAD_GET_SIZE(&iParam0) >= 0)
		{
			return 0;
		}
	}
	return 0;
	return 1;
}

void Function_295(int iParam0) //Position: 0xDC8A / 56458
{
	struct<2> Var0;
	struct<2> Var2;
	var uVar4;
	bool bVar5;
	
	bVar5 = false;
	while (bVar5 < (SQUAD_GET_SIZE(&iParam0 + 1960 + 80) - 1))
	{
		uVar4 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0 + 1960 + 80, bVar5);
		GET_OBJECT_POSITION(&uVar4, &Var2);
		GET_OBJECT_POSITION(&iParam0 + 1576, &Var0);
		if (VDIST(Var0, Var2) > 8.0f)
		{
			TASK_CLEAR(&uVar4);
		}
		bVar5++;
	}
	return;
}

void Function_296(struct<2417> Param0) //Position: 0xDCF0 / 56560
{
	var uVar0;
	int iVar1;
	struct<2> Var2;
	float fVar4;
	int iVar5;
	bool bVar6;
	
	uVar0 = Function_301(&Param0 + 1960);
	fVar4 = 7.0f;
	iVar5 = 0;
	Function_205(&Param0 + 1576);
	Var2 = Function_205(&Param0 + 1576);
	if (VDIST(Global_54078, Var2) > 15.0f)
	{
		Param0.f_2412 = 1;
	}
	else
	{
		Param0.f_2412 = 0;
	}
	if (Function_300(&Param0))
	{
		Param0.f_2416 = 1;
	}
	else
	{
		Param0.f_2416 = 0;
	}
	if (Function_241(&Param0) == 0)
	{
		if (Function_234(&Param0 + 2396, fVar4))
		{
			if (Param0.f_2412 == 1)
			{
				bVar6 = false;
				while (bVar6 < (SQUAD_GET_SIZE(&Param0 + 1880) - 1))
				{
					if (iVar5 == 0)
					{
						iVar1 = SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 1880, bVar6);
						if (Function_297(&Param0, &iVar1))
						{
							SAY_SINGLE_LINE_CONTEXT(&iVar1, 301, Function_33(), 1, 0, 2, 4294967295, 4294967295, 0, 1);
							Function_210(&Param0 + 2396);
							iVar5 = 1;
						}
					}
					bVar6++;
				}
			}
			else if (Param0.f_2416 == 1)
			{
				bVar6 = false;
				while (bVar6 < (SQUAD_GET_SIZE(&uVar0) - 1))
				{
					if (iVar5 == 0)
					{
						iVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uVar0, bVar6);
						if (Function_297(&Param0, &iVar1))
						{
							SAY_SINGLE_LINE_CONTEXT(&iVar1, 296, Function_33(), 1, 0, 2, 4294967295, 4294967295, 0, 1);
							Function_210(&Param0 + 2396);
							iVar5 = 1;
						}
					}
					bVar6++;
				}
			}
			else
			{
				Function_210(&Param0 + 2396);
			}
		}
	}
	return;
}

bool Function_297(int iParam0, int iParam1) //Position: 0xDE42 / 56898
{
	int iVar0;
	int iVar1;
	
	iVar0 = Function_301(&iParam0 + 1960);
	iVar1 = Function_299(GET_OBJECT_FROM_ACTOR(&iParam1));
	if (Function_298(&iParam1, &iParam0 + 1880, 1))
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
	else if (Function_298(&iParam1, &iVar0, 1))
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

bool Function_298(int iParam0, int iParam1, bool bParam2) //Position: 0xDF23 / 57123
{
	if (!IS_ACTOR_VALID(&iParam0))
	{
		if (&bParam2)
		{
		}
		return 0;
	}
	if (!SQUAD_IS_VALID(&iParam1))
	{
		if (&bParam2)
		{
		}
		return 0;
	}
	if (SQUAD_GET(&iParam0) == &iParam1)
	{
		if (&bParam2)
		{
		}
		return 1;
	}
	if (&bParam2)
	{
	}
	return 0;
}

var Function_299(int iParam0) //Position: 0xDF6B / 57195
{
	if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(&iParam0)))
	{
		return GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(&iParam0));
	}
	return 4294967295;
}

bool Function_300(int iParam0) //Position: 0xDF88 / 57224
{
	int iVar0;
	struct<2> Var1;
	bool bVar3;
	int iVar4;
	
	iVar4 = 0;
	if (SQUAD_IS_VALID(&iParam0 + 1960 + 80))
	{
		iVar4 = SQUAD_GET_SIZE(&iParam0 + 1960 + 80);
		bVar3 = false;
		while (bVar3 <= iVar4)
		{
			iVar0 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0 + 1960 + 80, bVar3);
			GET_POSITION(&iVar0, &Var1);
			if (VDIST(Global_54078, Var1) > 15.0f)
			{
				return 1;
			}
			bVar3++;
		}
	}
	return 0;
}

var Function_301(int iParam0) //Position: 0xDFF2 / 57330
{
	int iVar0;
	
	if (!IS_LAYOUTREF_VALID(&iParam0))
	{
		return "";
	}
	iVar0 = CREATE_OBJECT_ITERATOR(&iParam0);
	if (!IS_ITERATOR_VALID(&iVar0))
	{
		return "";
	}
	Function_302(&iVar0);
	ITERATE_ON_OBJECT_TYPE(&iVar0, 25);
	ITERATE_ON_PARTIAL_NAME(&iVar0, "atkSquad");
	(&iParam0 + 80) = GET_SQUAD_FROM_OBJECT(START_OBJECT_ITERATOR(&iVar0));
	if (!SQUAD_IS_VALID(&iParam0 + 80))
	{
	}
	if (IS_ITERATOR_VALID(&iVar0))
	{
		DESTROY_ITERATOR(&iVar0);
	}
	return &iParam0 + 80;
}

int Function_302(int iParam0) //Position: 0xE06D / 57453
{
	if (IS_ITERATOR_VALID(&iParam0))
	{
		ITERATE_EVERYWHERE(&iParam0);
		ITERATE_ON_PARTIAL_NAME(&iParam0, Function_37());
		ITERATE_ON_PARTIAL_MODEL_NAME(&iParam0, Function_37());
		ITERATE_ON_OBJECT_TYPE(&iParam0, 4294967295);
		return 1;
	}
	return 0;
}

int Function_303(struct<1093> Param0) //Position: 0xE0A3 / 57507
{
	int iVar16;
	int iVar17;
	int iVar18;
	bool bVar19;
	var uVar20;
	var uVar21;
	int iVar22;
	
	iVar17 = 0;
	iVar18 = 0;
	if (!IS_STRING_VALID(&cParam1))
	{
		return 0;
	}
	if (STRING_LENGTH(&cParam1) >= 14)
	{
		LOG_ERROR("PROCMISSION_ADD_HELP_TEXT: Invalid help text via length. Clearing.");
		return 0;
	}
	if (Function_86(Param0.f_1048, 32))
	{
		if (!Function_80(Param0.f_1092))
		{
			return 0;
		}
	}
	uVar20 = MAKE_TIME_OF_DAY_EX(0, 1, 0, 0);
	uVar21 = Function_306(Function_15(Param0.f_1092), Function_67(Param0.f_1092));
	iVar22 = Function_304(Function_15(Param0.f_1092), Function_67(Param0.f_1092));
	if (iVar22 == 0)
	{
		bVar19 = true;
	}
	else if (IS_LATER_THAN(&uVar21, &uVar20))
	{
		ADD_TIME(&uVar21, 5, 0, false, 0);
		if (IS_EARLIER_THAN(&uVar21, GET_TIME_OF_DAY()))
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
			if (!IS_STRING_VALID(&Param0 + 620[iVar164]))
			{
				iVar17 = iVar16;
				strcpy(&Param0 + 620[iVar174], &cParam1, 16);
				iVar16 = 3;
			}
			iVar16++;
		}
		if (iVar17 <= 3)
		{
			strcpy(&Param0 + 620[iVar174], &cParam1, 16);
			if (&iParam2 == 1)
			{
				(*&Param0 + 724)[iVar17] = &iParam2;
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

int Function_304(int iParam0, int iParam1) //Position: 0xE217 / 57879
{
	int iVar0;
	int iVar1;
	
	if (!Function_305(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 <= Global_21684)
	{
		if (Function_15(iVar1) != iParam0 && Function_67(iVar1) != iParam1)
		{
			iVar0 = (iVar0 + Global_21684[iVar17].f_12);
		}
		iVar1++;
	}
	return iVar0;
}

bool Function_305(int iParam0) //Position: 0xE263 / 57955
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_306(int iParam0, int iParam1) //Position: 0xE278 / 57976
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 <= Global_21684)
	{
		if (Function_15(iVar1) != iParam0 && Function_67(iVar1) != iParam1)
		{
			if (IS_LATER_THAN(&Global_21684[iVar17] + 40, &iVar0))
			{
				iVar0 = &Global_21684[iVar17] + 40;
			}
		}
		iVar1++;
	}
	return &iVar0;
}

void Function_307(int iParam0, struct<2> Param1) //Position: 0xE2C9 / 58057
{
	*(&iParam0 + 20) = Param1;
	return;
}

var Function_308(var uParam0, struct<2> Param1, bool bParam3) //Position: 0xE2D9 / 58073
{
	bool bVar0;
	bool bVar1;
	float fVar2;
	float fVar3;
	var uVar4;
	var uVar5;
	
	bVar1 = 4294967295;
	fVar2 = -1.0f;
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return "";
	}
	uVar5 = SQUAD_GET_NOT_ELIMINATED_IMPAIRMENT_MASK(&uParam0);
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar4 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (&bParam3)
		{
			if (AI_IMPAIRMENT_MASK_MATCHES(uVar5, AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(&uVar4)))
			{
				uVar4 = "";
			}
		}
		if (IS_ACTOR_VALID(&uVar4) && IS_ACTOR_ALIVE(&uVar4))
		{
			fVar3 = Function_309(StackVal, &uVar4, Param1);
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
		return &uVar4;
	}
	return "";
}

float Function_309(var uParam0, struct<2> Param1) //Position: 0xE37D / 58237
{
	struct<2> Var0;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		Function_310(&uParam0);
		Var0 = Function_310(&uParam0);
		return VDIST(Var0, Param1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

struct<8> Function_310(int iParam0) //Position: 0xE3F4 / 58356
{
	struct<2> Var0;
	
	if (IS_ACTOR_VALID(&iParam0))
	{
		GET_POSITION(&iParam0, &Var0);
		return StackVal, Var0;
	}
	LOG_ERROR("Attempting to get location of INVALID actor. Returning << 0,0,0 >>.");
	return StackVal, Var0;
}

void Function_311(int iParam0, struct<2> Param1) //Position: 0xE460 / 58464
{
	(&iParam0 + 8) = Param1;
	return;
}

void Function_312(struct<57> Param0) //Position: 0xE470 / 58480
{
	if (IS_BLIP_VALID(&Param0 + 48))
	{
		REMOVE_BLIP(&Param0 + 48);
	}
	Param0.f_56 = 4294967295;
	return;
}

void Function_313(struct<1093> Param0) //Position: 0xE491 / 58513
{
	if (Function_86(Param0.f_1048, 4))
	{
		Function_316();
	}
	if (IS_BLIP_VALID(&Param0 + 48))
	{
		REMOVE_BLIP(&Param0 + 48);
	}
	Function_315(1);
	if (Function_86(Param0.f_1048, 32))
	{
		if (Function_14(Param0.f_1092))
		{
			Function_314(Param0.f_1092, 1);
		}
	}
	if (SQUAD_IS_VALID(&Param0 + 1024))
	{
		Function_3(&Param0, 0);
	}
	Function_58(&Param0 + 1048, 16);
	Global_6625 = 1;
	if (Function_86(Param0.f_1048, 64))
	{
		Global_21575 = 4294967295;
	}
	Function_142(&Param0, 1);
	return;
}

void Function_314(int iParam0, int iParam1) //Position: 0xE520 / 58656
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
	Global_21684[iParam07].f_4 = 2;
	if (!Global_53524.f_36 && iParam1)
	{
		Function_24(1);
	}
	if (iVar0 == 1)
	{
		Global_10966 = Function_13(iParam0);
	}
	Global_6619 = 1;
	return;
}

void Function_315(int iParam0) //Position: 0xE588 / 58760
{
	if (!Global_15852[&iParam0])
	{
		Global_15852[&iParam0] = 1;
		if (&iParam0 == 1)
		{
			Global_15860 = GET_THIS_SCRIPT_ID();
		}
	}
	if (Function_83())
	{
		SET_HUD_MAP_DRAW_ENABLED_TIMED(0, 10.0f, 1);
	}
	return;
}

void Function_316() //Position: 0xE5C1 / 58817
{
	if (&Global_47308 == "")
	{
		Global_47308 = GET_THIS_SCRIPT_ID();
	}
	return;
}

void Function_317(int iParam0) //Position: 0xE5D7 / 58839
{
	Function_318(&Global_43580, iParam0);
	return;
}

void Function_318(var uParam0, int iParam1) //Position: 0xE5E5 / 58853
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	uParam0 |= 1073741824;
	return;
}

var Function_319(struct<2> Param0, int iParam2) //Position: 0xE60D / 58893
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	struct<2> Var4;
	
	bVar0 = false;
	bVar1 = 4294967295;
	bVar2 = -1.0f;
	if (Function_520(StackVal, Param0))
	{
		LOG_WARNING("Invalid test vector passed to GET_CLOSEST_SQUAD_MEMBER_TO_VECTOR");
		return "";
	}
	if (!SQUAD_IS_VALID(&iParam2))
	{
		LOG_WARNING("Invalid squad passed to GET_CLOSEST_SQUAD_MEMBER_TO_VECTOR");
		return "";
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&iParam2) - 1))
	{
		uVar3 = GET_OBJECT_FROM_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(&iParam2, bVar0));
		GET_OBJECT_POSITION(&uVar3, &Var4);
		if (VDIST(Param0, Var4) > bVar2 || bVar2 > 0.0f)
		{
			bVar2 = VDIST(Param0, Var4);
			bVar1 = bVar0;
		}
		bVar0++;
	}
	if (bVar1 >= 4294967295)
	{
		return SQUAD_GET_ACTOR_BY_INDEX(&iParam2, bVar1);
	}
	LOG_WARNING("Couldn't find a closest sqaud member from 'Them' to 'Me' in GET_CLOSEST_SQUAD_MEMBER_TO_VECTOR!");
	return "";
}

bool Function_320(struct<1485> Param0) //Position: 0xE78C / 59276
{
	if (Param0.f_1484 == 0)
	{
		if (Function_322(&Param0 + 1960 + 80, &Global_54076, 1) && SQUAD_IS_VALID(&Param0 + 1960 + 80))
		{
			Function_137(&Param0, 1);
			Function_136(&Param0, GET_ACTOR_ENUM_FACTION((*&Param0 + 2296)[0]));
			Param0.f_1484 = 1;
		}
		else if ((Function_322(&Param0 + 1880, &Global_54076, 0) || Function_139(&Param0, &Global_54076)) || &Param0 + 1576 != GET_VEHICLE(&Global_54076))
		{
			Function_137(&Param0, 2);
			Function_136(&Param0, GET_ACTOR_FACTION(Function_321(&Param0 + 1880)));
			Param0.f_1484 = 1;
		}
		if (Param0.f_1484)
		{
			SET_NPC_TO_NPC_DAMAGE_SCALE_FACTOR(0,05f);
		}
	}
	return Param0.f_1484;
}

var Function_321(int iParam0) //Position: 0xE845 / 59461
{
	if (SQUAD_GET_SIZE(&iParam0) >= 0)
	{
		return SQUAD_GET_ACTOR_BY_INDEX(&iParam0, RAND_INT_RANGE(0, (SQUAD_GET_SIZE(&iParam0) - 1)));
	}
	return "";
}

int Function_322(bool bParam0, int iParam1, int iParam2) //Position: 0xE86A / 59498
{
	bool bVar0;
	int iVar1;
	
	if (!SQUAD_IS_VALID(&bParam0))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(&iParam1))
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&bParam0) - 1))
	{
		iVar1 = SQUAD_GET_ACTOR_BY_INDEX(&bParam0, bVar0);
		if (IS_ACTOR_VALID(&iVar1))
		{
			if (GET_LAST_ATTACKER(&iVar1) == &iParam1)
			{
				return 1;
			}
			if (&iParam2 == 1)
			{
				if (IS_ACTOR_VALID(GET_MOUNT(&iVar1)))
				{
					if (GET_LAST_ATTACKER(GET_MOUNT(&iVar1)) == &iParam1)
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

float Function_323(var uParam0, bool bParam1) //Position: 0xE8E8 / 59624
{
	struct<2> Var0;
	
	GET_ACTOR_VELOCITY(&uParam0, &Var0);
	if (&bParam1)
	{
		Var0.f_4 = 0.0f;
	}
	return VMAG(Var0);
}

void Function_324(int iParam0) //Position: 0xE909 / 59657
{
	Function_325(&iParam0);
	return;
}

void Function_325(int iParam0) //Position: 0xE915 / 59669
{
	if (IS_ACTORSET_VALID(&iParam0 + 64))
	{
		DISBAND_ACTORSET(&iParam0 + 64);
	}
	return;
}

bool Function_326(var uParam0, var uParam1, bool bParam2) //Position: 0xE931 / 59697
{
	if (IS_ACTOR_VALID(&uParam0))
	{
		if (IS_ACTOR_VALID(&uParam1))
		{
			if (ACTORS_IN_RANGE(&uParam0, &uParam1, bParam2))
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

bool Function_327(var uParam0, int iParam1, bool bParam2, int iParam3) //Position: 0xEA46 / 59974
{
	if (!IS_ACTOR_VALID(&uParam0))
	{
		if (&bParam2)
		{
		}
		return 0;
	}
	if (!IS_ACTOR_VEHICLE(&uParam0))
	{
		if (&bParam2)
		{
		}
		return 0;
	}
	if (!IS_ACTOR_DRAFT_VEHICLE(&uParam0))
	{
		if (&bParam2)
		{
		}
		return 0;
	}
	if (&iParam1 == 4294967295)
	{
		if (GET_NUM_DRAFTED_ACTORS(&uParam0) <= 1)
		{
			if (&bParam2)
			{
			}
			return 0;
		}
	}
	if (GET_NUM_DRAFTED_ACTORS(&uParam0) <= &iParam1)
	{
		if (&bParam2)
		{
		}
		return 0;
	}
	if (&iParam3 == 4294967295)
	{
		if (GET_VEHICLE_WHEEL_COUNT_INITIAL(&uParam0) == 2)
		{
			if (GET_VEHICLE_WHEEL_COUNT_CURRENT(&uParam0) <= 2)
			{
				if (&bParam2)
				{
				}
				return 0;
			}
		}
		if (GET_VEHICLE_WHEEL_COUNT_CURRENT(&uParam0) <= 3)
		{
			if (&bParam2)
			{
			}
			return 0;
		}
	}
	if (GET_VEHICLE_WHEEL_COUNT_CURRENT(&uParam0) <= &iParam3)
	{
		if (&bParam2)
		{
		}
		return 0;
	}
	return 1;
}

bool Function_328(var uParam0) //Position: 0xEB14 / 60180
{
	bool bVar0;
	int iVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return 0;
	}
	if (SQUAD_GET_SIZE(&uParam0) < 0)
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		iVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&iVar1))
		{
			if (!IS_ACTOR_DEAD(&iVar1))
			{
				return 1;
			}
		}
		bVar0++;
	}
	return 0;
}

int Function_329(int iParam0) //Position: 0xEB72 / 60274
{
	return Function_103(&iParam0);
}

int Function_330(struct<1085> Param0) //Position: 0xEB7E / 60286
{
	Param0.f_1084 = Function_332(&Param0);
	Function_331(&Param0);
	return Param0.f_1084;
}

void Function_331(int iParam0) //Position: 0xEB9C / 60316
{
	if (GET_DEBUG_DRAW_STATE())
	{
	}
	return;
}

var Function_332(int iParam0) //Position: 0xEBA8 / 60328
{
	int iVar0;
	var uVar1[3];
	char* cVar5[64];
	int iVar21;
	
	iVar0 = 0;
	if (Function_347(0))
	{
		uVar1[0] = "Pass";
		uVar1[1] = "Fail";
		uVar1[2] = "Cancel";
		strcpy(&cVar5, "RDR PROCMISSION MENU - ", 64);
		stradd(&cVar5, GET_SHORT_SCRIPT_NAME(), 64);
		iVar21 = Function_333(&iParam0 + 1052, &uVar1, &cVar5, GET_DEBUG_PADINDEX(), 0);
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

var Function_333(struct<17> Param0) //Position: 0xEC50 / 60496
{
	struct<65> Var0;
	
	if ((Global_98250 || Global_98251) || Global_98252)
	{
		return 4294967295;
	}
	SET_SCRIPT_AVOIDS_STRINGTABLE(1);
	Param0.f_12 = &uParam3;
	Param0.f_16 = &iParam4;
	Function_346(&Var12, &Var0);
	uVar15 = Function_345(uParam1, &Var12);
	Function_344(&cParam2, 1.0f, 1.0f, 1.0f, 1.0f);
	Function_343(&Param0, uVar15);
	Function_341(StackVal, &Param0, Var12.f_12);
	Function_339(StackVal, &Param0, Var12.f_12);
	iVar16 = Function_338(uParam1, &Param0, &Var12);
	while (!Var12.f_16 && iVar16 > uParam1)
	{
		strcpy(&Var0, &(uParam1[iVar16]), 32);
		if (Function_335(&Var12, &Var0, &Param0, "@DEBUG.LEFT_STICK", "@UI.ACCEPT"))
		{
			SET_SCRIPT_AVOIDS_STRINGTABLE(0);
			GRINGO_DEBUG_CHECK_SOUND(1);
			return iVar16;
		}
		iVar16++;
	}
	Function_334(StackVal, Var0.f_64, Var12.f_12);
	SET_SCRIPT_AVOIDS_STRINGTABLE(0);
	return 4294967295;
}

void Function_334(int iParam0, int iParam1, int iParam2) //Position: 0xED44 / 60740
{
	var uVar0;
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
			uVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, &cVar3);
			if (GUI_WINDOW_VALID(&uVar0))
			{
				GUI_SET_TEXT(&uVar0, " ");
			}
			bVar1++;
		}
	}
	return;
}

bool Function_335(struct<17> Param0) //Position: 0xEDA4 / 60836
{
	char* cVar0[64];
	
	if (IS_STRING_VALID(&Param1))
	{
		if (STRING_LENGTH(&Param1) >= 3)
		{
			if (StackVal && Param0 != vParam2.y != vParam2.z)
			{
				strcpy(&cVar0, "-->", 64);
				stradd(&cVar0, &Param1, 64);
				Function_337(Param1.f_64, Param1.f_68, Param1.f_72, &cVar0, Param1.f_76, Param1.f_80, Param1.f_84, 1.0f, Param1.f_88, 1);
				Param1.f_64++;
				if (UNK_0xDA674AE0(&iParam3, 1, 0))
				{
					(&vParam2 + 24) = &iParam3;
					return 1;
				}
				if (UNK_0xDA674AE0(&iParam4, 1, 0))
				{
					*(&vParam2 + 24) = &iParam4;
					return 1;
				}
			}
			Function_337(Param1.f_64, Param1.f_68, Param1.f_72, &Param1, Param1.f_76, Param1.f_80, Param1.f_84, 1.0f, Param1.f_88, 1);
			Param1.f_64++;
			Param0++;
			Param1.f_72 = (StackVal + ((Param1.f_72 / IntToFloat(375.0f)) * (Param1.f_88 / 1,5f)));
			if (StackVal > Param0)
			{
				Param1.f_68 = (Param1.f_68 + (1140.0f / IntToFloat(Param0.f_12)));
				Param1.f_72 = 110.0f;
				Param0 = 0;
				Param0.f_8 = StackVal + 1;
			}
			if (StackVal > Param0.f_12)
			{
				Param0.f_16 = 1;
				Function_334(StackVal, Param1.f_64, Param0.f_12);
				return 0;
			}
		}
		Function_336(Param1.f_64);
	}
	else
	{
		Function_336(Param1.f_64);
	}
	return 0;
}

void Function_336(bool bParam0) //Position: 0xEF37 / 61239
{
	var uVar0;
	char* cVar1[16];
	
	strcpy(&cVar1, "DB_MENU_", 16);
	stradd(&cVar1, I2STR(bParam0), 16);
	uVar0 = GUI_WINDOWS_WITH_VALUES(&Global_21478, &cVar1);
	if (GUI_WINDOW_VALID(&uVar0))
	{
		GUI_SET_TEXT(&uVar0, " ");
	}
	return;
}

void Function_337(bool bParam0, var uParam1, var uParam2, char* cParam3) //Position: 0xEF75 / 61301
{
	struct<13> Var0;
	
	strcpy(&cVar5, "DB_MENU_", 16);
	stradd(&cVar5, I2STR(bParam0), 16);
	uVar2 = GUI_WINDOWS_WITH_VALUES(&Global_21478, &cVar5);
	if (!GUI_WINDOW_VALID(&uVar2))
	{
		Var0 = uParam1;
		Var0.f_4 = uParam2;
		Var0.f_8 = (Var0 + (500.0f * fParam8));
		Var0.f_12 = (StackVal + (55.0f * fParam8));
		uVar2 = GUI_MAKE_TEXT(&Global_21478, &Var0, &cVar5, "nberrylium", fParam8);
	}
	Var3 = uParam4;
	Var3.f_4 = uParam5;
	Var3.f_8 = uParam6;
	Var3.f_12 = fParam7;
	strcpy(&cVar9, &cParam3, 64);
	if (bParam9)
	{
		STRING_LOWER(&cVar9);
	}
	GUI_SET_TEXT(&uVar2, &cVar9);
	GUI_SET_TEXT_COLOR(&uVar2, &Var3);
}

var Function_338(int iParam0, struct<21> Param1) //Position: 0xF02B / 61483
{
	int iVar0;
	
	iVar0 = (StackVal * (Param1.f_20 * Param2.f_12) + 1);
	if (iVar0 >= iParam0)
	{
		iVar0 = 0;
	}
	return iVar0;
}

void Function_339(vector3 vParam0) //Position: 0xF052 / 61522
{
	switch (Function_340())
	{
		case 0x000000C8:
			if (vParam0.y >= 0)
			{
				vParam0.f_4 = (vParam0.y - 1);
			}
			else
			{
				vParam0.f_4 = 0;
			}
			break;
		
		case 0x000000D0:
			if (vParam0.y <= iParam1)
			{
				vParam0.f_4 = vParam0.y + 1;
			}
			else
			{
				vParam0.f_4 = 0;
			}
			break;
		
		case 0x000000CB:
			if (vParam0.z >= 0)
			{
				vParam0.f_8 = (vParam0.z - 1);
			}
			else
			{
				vParam0.f_8 = 0;
			}
			break;
		
		case 0x000000CD:
			if (vParam0.z <= iParam2)
			{
				vParam0.f_8 = vParam0.z + 1;
			}
			else
			{
				vParam0.f_8 = 0;
			}
			break;
	}
	return;
}

int Function_340() //Position: 0xF0FE / 61694
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

void Function_341(vector3 vParam0) //Position: 0xF13A / 61754
{
	switch (Function_342(&vParam0))
	{
		case 0x00000001:
			vParam0.f_4 = (vParam0.y - 1);
			if (vParam0.y <= 0)
			{
				vParam0.f_4 = (iParam1 - 1);
			}
			break;
		
		case 0x00000002:
			vParam0.f_4 = vParam0.y + 1;
			if (vParam0.y > iParam1)
			{
				vParam0.f_4 = 0;
			}
			break;
		
		case 0x00000003:
			vParam0.f_8 = (vParam0.z - 1);
			if (vParam0.z <= 0)
			{
				vParam0.f_8 = (iParam2 - 1);
			}
			break;
		
		case 0x00000004:
			vParam0.f_8 = vParam0.z + 1;
			if (vParam0.z > iParam2)
			{
				vParam0.f_8 = 0;
			}
			break;
	}
	return;
}

int Function_342(int iParam0) //Position: 0xF1E3 / 61923
{
	if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_UP", 1, 0))
	{
		if (!Function_86(iParam0, 0x40000000))
		{
			Function_58(&iParam0, 0x40000000);
			return 1;
		}
	}
	if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_DOWN", 1, 0))
	{
		if (!Function_86(iParam0, 0x40000000))
		{
			Function_58(&iParam0, 0x40000000);
			return 2;
		}
	}
	Function_25(&iParam0, 0x40000000);
	if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_LEFT", 1, 0))
	{
		if (!Function_86(iParam0, 0x20000000))
		{
			Function_58(&iParam0, 0x20000000);
			return 3;
		}
	}
	if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_RIGHT", 1, 0))
	{
		if (!Function_86(iParam0, 0x20000000))
		{
			Function_58(&iParam0, 0x20000000);
			return 4;
		}
	}
	Function_25(&iParam0, 0x20000000);
	return 0;
}

var Function_343(struct<21> Param0) //Position: 0xF303 / 62211
{
	int iVar0;
	
	iVar0 = Param0.f_20;
	if (iVar0 != 0 && iParam1 != 0)
	{
		return iVar0;
	}
	if (iVar0 < 0 && iVar0 > iParam1)
	{
		DRAW_STRING_CURRENT_FONT(0,1f, 0,9f, "Previous Page<-Dpad->Next Page", 1.0f, 1.0f, 1.0f, 1.0f);
		if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_NAV_RIGHT", 1, 0))
		{
			iVar0++;
			Param0.f_20 = iVar0;
			Param0.f_4 = 0;
			Param0.f_8 = 0;
		}
		else if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_NAV_LEFT", 1, 0))
		{
			iVar0 = (iVar0 - 1);
			Param0.f_20 = iVar0;
			Param0.f_4 = 0;
			Param0.f_8 = 0;
		}
	}
	else if (iVar0 < 0 && iVar0 != iParam1)
	{
		DRAW_STRING_CURRENT_FONT(0,1f, 0,9f, "Previous Page<-Dpad", 1.0f, 1.0f, 1.0f, 1.0f);
		if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_NAV_LEFT", 1, 0))
		{
			iVar0 = (iVar0 - 1);
			Param0.f_20 = iVar0;
			Param0.f_4 = 0;
			Param0.f_8 = 0;
		}
	}
	else
	{
		DRAW_STRING_CURRENT_FONT(0,1f, 0,9f, "Dpad->Next Page", 1.0f, 1.0f, 1.0f, 1.0f);
		if (UNK_0xDA674AE0("@DEBUG.ACTOR_MENU_NAV_RIGHT", 1, 0))
		{
			iVar0++;
			Param0.f_20 = iVar0;
			Param0.f_4 = 0;
			Param0.f_8 = 0;
		}
	}
	return iVar0;
}

void Function_344(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4) //Position: 0xF4BD / 62653
{
	struct<13> Var0;
	
	strcpy(&cVar5, "DB_MENU_TITLE", 16);
	uVar2 = GUI_WINDOWS_WITH_VALUES(&Global_21478, &cVar5);
	if (!GUI_WINDOW_VALID(&uVar2))
	{
		Var0 = 0.0f;
		Var0.f_4 = 50.0f;
		Var0.f_8 = 1280.0f;
		Var0.f_12 = 150.0f;
		uVar2 = GUI_MAKE_TEXT(&Global_21478, &Var0, &cVar5, "nberrylium", 2.0f);
	}
	Var3 = uParam1;
	Var3.f_4 = uParam2;
	Var3.f_8 = uParam3;
	Var3.f_12 = bParam4;
	GUI_SET_TEXT(&uVar2, &uParam0);
	GUI_SET_TEXT_COLOR(&uVar2, &Var3);
	GUI_SET_TEXT_JUSTIFY(&uVar2, 1);
}

var Function_345(int iParam0, struct<13> Param1) //Position: 0xF559 / 62809
{
	int iVar0;
	int iVar1;
	
	iVar0 = (StackVal / iParam0);
	iVar1 = (iVar0 / Param1.f_12);
	return iVar1;
}

void Function_346(struct<17> Param0) //Position: 0xF575 / 62837
{
	Param1.f_68 = 100.0f;
	Param1.f_72 = 110.0f;
	Param1.f_76 = 1.0f;
	Param1.f_80 = 1.0f;
	Param1.f_84 = 1.0f;
	Param1.f_88 = 1,6f;
	Param1.f_64 = 0;
	Param0.f_16 = 0;
	Param0.f_4 = 10;
	Param0.f_12 = 3;
	Param0 = 0;
	Param0.f_8 = 0;
	return;
}

bool Function_347(int iParam0) //Position: 0xF5CF / 62927
{
	if (!Function_348(&iParam0))
	{
		return 0;
	}
	return Global_47307;
}

bool Function_348(bool bParam0) //Position: 0xF5E4 / 62948
{
	if (bParam0 && !IS_SCRIPT_VALID(&Global_47308))
	{
		return 1;
	}
	if (GET_THIS_SCRIPT_ID() == &Global_47308)
	{
		return 1;
	}
	return 0;
}

void Function_349(struct<2> Param0, var uParam2, int iParam3, var uParam4, int iParam5, var uParam6, bool bParam7) //Position: 0xF60B / 62987
{
	int iVar0;
	
	iVar0 = 0;
	if (!uParam2)
	{
		iVar0 = 1;
	}
	if (IS_ACTOR_VALID(&uParam4))
	{
		if (CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), &uParam4, 1.0f, &uParam6, 1, 1, 0))
		{
			if (&iParam5 != 0)
			{
				Global_38378 = (GET_CURRENT_GAME_TIME() + IntToFloat(&iParam5));
			}
			uParam2 = 1;
		}
	}
	else if (!Function_520(StackVal, Param0))
	{
		if (CAMERA_IS_VISIBLE_POINT(GET_GAME_CAMERA(), Param0, 1.0f, &uParam6, 1, 1, 0))
		{
			if (&iParam5 != 0)
			{
				Global_38378 = (GET_CURRENT_GAME_TIME() + IntToFloat(&iParam5));
			}
			uParam2 = 1;
		}
	}
	if (uParam2 && iVar0)
	{
		if (StackVal & 64 == 64)
		{
			Function_360(0);
		}
		if (StackVal & 2048 == 2048)
		{
			Function_359(0);
		}
		if (&bParam7)
		{
			Function_357(0, GET_THIS_SCRIPT_ID());
			Global_6615 = GET_THIS_SCRIPT_ID();
			Function_355(iParam3);
			Global_6644 = 1;
		}
		Function_353(iParam3);
		if (Function_352(StackVal, 32768))
		{
			Function_350(1);
		}
		Global_26652[iParam34].f_16++;
		Function_70(408, 1, 0, 0);
	}
}

void Function_350(bool bParam0) //Position: 0xF720 / 63264
{
	if (bParam0)
	{
		Function_351(0x10000000);
	}
	else
	{
		Function_85(0x10000000);
	}
	Global_39922.f_304 = 0;
	return;
}

void Function_351(int iParam0) //Position: 0xF745 / 63301
{
	Global_39922.f_88 = (Global_39922.f_88 || iParam0);
	return;
}

bool Function_352(var uParam0, int iParam1) //Position: 0xF758 / 63320
{
	return (uParam0 && iParam1) == 0;
}

void Function_353(int iParam0) //Position: 0xF765 / 63333
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	if (!Function_86(StackVal, 524288))
	{
		if (Global_26652[iParam04].f_20 < 0 && Global_26652[iParam04].f_20 > 2)
		{
			iVar0 = 10;
		}
		else if (Global_26652[iParam04].f_20 <= 2 && Global_26652[iParam04].f_20 > 4)
		{
			iVar0 = 16;
		}
		else if (Global_26652[iParam04].f_20 > 4)
		{
			iVar0 = 24;
		}
		if (iVar0 >= 0)
		{
			bVar1 = Function_354(iVar0 * 60);
			ADD_TIME(&Global_27462[iParam052] + 376, 0, 0, bVar1, 0);
			Global_26652[iParam04] = &Global_27462[iParam052] + 376;
		}
	}
	return;
}

int Function_354(int iParam0) //Position: 0xF80B / 63499
{
	return CEIL(((IntToFloat(iParam0) * Global_99471) / 60.0f));
}

void Function_355(int iParam0) //Position: 0xF822 / 63522
{
	struct<77> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 48, 1);
	if (Global_47151[16])
	{
		PRINTNL();
		PRINTSTRING("SAVE_BEAT_STATE: ");
		PRINTSTRING(GET_ASSET_NAME(&Global_27462[iParam052] + 160, 4));
		PRINTNL();
		PRINTSTRING("curIDX: ");
		PRINTINT(Var0.f_76);
		PRINTNL();
	}
	Function_356(&Var0 + 80[Var0.f_762], &(Global_26652[iParam04]), iParam0);
	if (Var0.f_76 == 2)
	{
		Var0.f_76 = 0;
	}
	else
	{
		Var0.f_76++;
	}
	STORE_GAME_STATE(&Var0, 48, 1);
	return;
}

void Function_356(vector3 vParam0) //Position: 0xF8C1 / 63681
{
	vParam0.y = iParam2;
	vParam0 = Param1.f_16;
	vParam0.f_8 = 1;
	return;
}

void Function_357(int iParam0, int iParam1) //Position: 0xF8DD / 63709
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 <= Global_38380)
	{
		iVar1 = 1;
		Global_38380[iVar036].f_104 = 0;
		if (&Global_38380[iVar036] + 48 == &iParam1)
		{
			iVar1 = 0;
		}
		if ((Global_38380[iVar036] != 128 || Global_38380[iVar036] != 64) && &iParam0 != 0)
		{
			iVar1 = 0;
		}
		if (IS_SCRIPT_VALID(&Global_38380[iVar036] + 48) && iVar1 != 1)
		{
			TERMINATE_SCRIPT(&Global_38380[iVar036] + 48);
			Function_358(&(Global_38380[iVar036]));
		}
		iVar0++;
	}
	return;
}

void Function_358(struct<113> Param0) //Position: 0xF964 / 63844
{
	Param0.f_112 = 0;
	Param0.f_4 = 0;
	Param0.f_12 = 4294967295;
	(&Param0 + 16) = "";
	*(&Param0 + 24) = Vector(0.0f, 0.0f, 0.0f);
	*(&Param0 + 36) = Vector(0.0f, 0.0f, 0.0f);
	(&Param0 + 48) = "";
	(&Param0 + 72) = "";
	Param0.f_56 = 4294967295;
	(&Param0 + 64) = "";
	Param0.f_108 = 0.0f;
	Param0.f_96 = 0;
	return;
}

void Function_359(int iParam0) //Position: 0xF9C2 / 63938
{
	*(&Global_21369 + 136) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 136, 0, 0, (&iParam0 + Function_354(900)), 0);
	return;
}

void Function_360(int iParam0) //Position: 0xF9E6 / 63974
{
	*(&Global_21369 + 40) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 40, 0, 0, (&iParam0 + Function_354(200)), 0);
	return;
}

struct<8> Function_361() //Position: 0xFA09 / 64009
{
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

int Function_362(struct<1469> Param0) //Position: 0xFA13 / 64019
{
	if (Param0.f_1464 == 0)
	{
		LOG_ERROR("Cannot launch matkdef without MATKDEF_INIT_MATKDEF being called");
	}
	if (!SQUAD_IS_VALID(&Param0 + 1960 + 80))
	{
		*(&Param0 + 1960 + 80) = Function_366(&Param0 + 1368, "DECOR_ATTACKSQUAD");
		Function_365(&Param0 + 1960 + 80, 39, 0.0f);
	}
	Function_364(&Param0, 1);
	Function_363(&Param0, 1);
	Function_317(4);
	Function_210(&Param0 + 2396);
	Param0.f_1468 = 1;
	return 1;
}

void Function_363(int iParam0, int iParam1) //Position: 0xFAD1 / 64209
{
	if (iParam1 == 1)
	{
		Function_58(&iParam0 + 1048, 64);
	}
	else
	{
		Function_25(&iParam0 + 1048, 64);
	}
	return;
}

void Function_364(int iParam0, int iParam1) //Position: 0xFAF6 / 64246
{
	if (iParam1 == 1)
	{
		Function_58(&iParam0 + 1048, 4096);
	}
	else
	{
		Function_25(&iParam0 + 1048, 4096);
	}
	return;
}

void Function_365(var uParam0, bool bParam1, float fParam2) //Position: 0xFB1D / 64285
{
	bool bVar0;
	var uVar1;
	
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (!IS_ACTOR_ANIMAL(&uVar1))
		{
			if (!IS_ACTOR_VEHICLE(&uVar1))
			{
				if (IS_ACTOR_VALID(&uVar1))
				{
					GIVE_WEAPON_TO_ACTOR(&uVar1, bParam1, fParam2, 1, 1);
				}
			}
		}
		bVar0++;
	}
	return;
}

var Function_366(int iParam0, int iParam1) //Position: 0xFB70 / 64368
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = "";
	if (!IS_LAYOUTREF_VALID(&iParam0))
	{
		return "";
	}
	iVar0 = CREATE_OBJECT_ITERATOR(&iParam0);
	if (!IS_ITERATOR_VALID(&iVar0))
	{
		return "";
	}
	Function_302(&iVar0);
	ITERATE_ON_OBJECT_TYPE(&iVar0, 25);
	iVar2 = START_OBJECT_ITERATOR(&iVar0);
	while (IS_OBJECT_VALID(&iVar2))
	{
		if (DECOR_GET_BOOL(&iVar2, &iParam1))
		{
			iVar1 = GET_SQUAD_FROM_OBJECT(&iVar2);
			if (SQUAD_IS_VALID(&iVar1))
			{
			}
		}
		iVar2 = OBJECT_ITERATOR_NEXT(&iVar0);
	}
	if (IS_ITERATOR_VALID(&iVar0))
	{
		DESTROY_ITERATOR(&iVar0);
	}
	return &iVar1;
}

float Function_367(bool bParam0) //Position: 0xFBFA / 64506
{
	var uVar0;
	float fVar1;
	
	if (!&bParam0)
	{
		Function_368(&uVar0, &fVar1);
		if (fVar1 < 60.0f)
		{
			return (fVar1 + 20.0f);
		}
		return (fVar1 + 10.0f);
	}
	return (190.0f + 20.0f);
}

void Function_368(float fParam0, int iParam1) //Position: 0xFC36 / 64566
{
	struct<2> Var0;
	
	if (Global_6629 && !Global_6646)
	{
		fParam0 = 65.0f;
		iParam1 = 95.0f;
	}
	else if ((!IS_ACTOR_RIDING(GET_PLAYER_ACTOR(0)) && !IS_ACTOR_RIDING_VEHICLE(GET_PLAYER_ACTOR(0))) && !Global_6646)
	{
		fParam0 = 115.0f;
		iParam1 = 170.0f;
	}
	else
	{
		GET_ACTOR_VELOCITY(GET_PLAYER_ACTOR(0), &Var0);
		if (VMAG(Var0) > 5.0f)
		{
			fParam0 = 130.0f;
			iParam1 = 190.0f;
		}
		else
		{
			fParam0 = 130.0f;
			iParam1 = 190.0f;
		}
	}
	return;
}

int Function_369(struct<1101> Param0) //Position: 0xFCC7 / 64711
{
	struct<2> Var0;
	var uVar2;
	var uVar4;
	bool bVar5;
	
	if (!Param0.f_1100 != iParam1)
	{
		switch (iParam1)
		{
			case 0x00000001:
				Function_210(&Param0 + 1408);
				Function_210(&Param0 + 1424);
				Function_210(&Param0 + 2396);
				break;
			
			case 0x00000002:
				Function_210(&Param0 + 1424);
				if (Function_239(&Param0) == 1)
				{
					Function_240(&Param0, 1);
					Function_238(&Param0, "pm_mad_killb", 1);
				}
				else
				{
					Function_240(&Param0, 1);
					Function_238(&Param0, "pm_mad_killt", 1);
				}
				Function_373(&Param0);
				break;
			
			case 0x00000003:
				Function_372(7.0f, 10);
				Var0 = { StackVal, Function_372(7.0f, 10) };
				bVar5 = false;
				while (bVar5 < (SQUAD_GET_SIZE(&Param0 + 1960 + 80) - 1))
				{
					uVar4 = SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 1960 + 80, bVar5);
					if (IS_ACTOR_ALIVE(&uVar4))
					{
						Function_370(&Var0, bVar5 + 2);
						uVar2 = Function_370(&Var0, bVar5 + 2);
						TASK_FOLLOW_AND_ATTACK_OBJECT(&uVar4, GET_OBJECT_FROM_ACTOR(&Param0 + 1576), &uVar2, 0, 0, 0, 0, 0, 1);
					}
					bVar5++;
				}
				Function_373(&Param0);
				break;
			
			case 0x00000004:
				Function_210(&Param0 + 1588);
				break;
			
			case 0x00000005:
				Function_240(&Param0, 1);
				Function_238(&Local_29, "pm_mad_end", 1);
				Function_216(&Local_29, 0, 0);
				break;
			
			case 0x00000007:
				Function_240(&Param0, 1);
				if (Function_239(&Param0) == 1)
				{
					Function_238(&Param0, "pm_mad_esc1", 1);
				}
				else
				{
					Function_238(&Param0, "pm_mad_esc2", 1);
				}
				iLocal_635 = 3;
				break;
			
			case 0x00000006:
				Function_101(&Param0, 0);
				if (Param0.f_1100 >= 3)
				{
					Function_240(&Param0, 1);
					Function_238(&Param0, "pm_mad_vd2", 1);
					Function_216(&Local_29, 0, 0);
				}
				iLocal_635 = 3;
				break;
			
			case 0x0000000B:
			case 0x00000008:
				iLocal_635 = 2;
				iLocal_27 = 5;
				break;
			
			case 0x0000000C:
			case 0x00000009:
				iLocal_635 = 3;
				iLocal_27 = 5;
				break;
			
			case 0x0000000A:
				iLocal_635 = 4;
				iLocal_27 = 5;
				break;
		}
		Param0.f_1100 = iParam1;
	}
	Function_503(&Param0, 0);
	return 1;
}

struct<8> Function_370(vector3 vParam0) //Position: 0xFEF6 / 65270
{
	struct<2> Var0;
	
	if (!Function_371(&vParam0))
	{
		LOG_ERROR("Attempting to GET_FORMATION_POSITION with invalid FORMATION");
		return StackVal, Vector(0.0f, 0.0f, 0.0f);
	}
	if (bParam1 <= 0)
	{
		PRINTSTRING(GET_OBJECT_NAME(&vParam0));
		LOG_ERROR("Attempting to get invalid formation index - less than zero");
		return StackVal, Vector(0.0f, 0.0f, 0.0f);
	}
	if (bParam1 >= (GET_NUM_FORMATION_LOCATIONS(&vParam0) - 1))
	{
		PRINTSTRING(GET_OBJECT_NAME(&vParam0));
		PRINTSTRING(" ");
		PRINTINT(GET_NUM_FORMATION_LOCATIONS(&vParam0));
		PRINTNL();
		LOG_ERROR("Attempting to get invalid formation index - too large!");
		return StackVal, Vector(0.0f, 0.0f, 0.0f);
	}
	GET_FORMATION_LOCATION(&vParam0, bParam1, &Var0);
	Var0 = (Var0 * vParam0.z);
	Var0.f_4 = (StackVal * vParam0.z);
	Var0.f_8 = (StackVal * vParam0.z);
	return StackVal, Var0;
}

bool Function_371(int iParam0) //Position: 0x10077 / 65655
{
	if (!IS_OBJECT_VALID(&iParam0))
	{
		return 0;
	}
	if (!GET_OBJECT_TYPE(&iParam0) != 30)
	{
		return 0;
	}
	return 1;
}

struct<8> Function_372(var uParam0, int iParam1) //Position: 0x1009B / 65691
{
	struct<2> Var0;
	
	Var0.f_8 = uParam0;
	Var0 = &Global_39559[iParam1];
	return StackVal, Var0;
}

void Function_373(int iParam0) //Position: 0x100B6 / 65718
{
	Function_374(&iParam0 + 1880, &iParam0 + 1880, 0);
	Function_374(&iParam0 + 1960 + 80, &iParam0 + 1960 + 80, 0);
	Function_374(&iParam0 + 1880, &iParam0 + 1960 + 80, 4);
	if (Function_239(&iParam0) == 0)
	{
		Function_135(&iParam0 + 1880, &Global_54076, 2);
		Function_135(&iParam0 + 1960 + 80, &Global_54076, 2);
	}
	else if (Function_239(&iParam0) == 1)
	{
		Function_135(&iParam0 + 1880, &Global_54076, 5);
		Function_135(&iParam0 + 1960 + 80, &Global_54076, 4);
	}
	else if (Function_239(&iParam0) == 2)
	{
		Function_135(&iParam0 + 1880, &Global_54076, 4);
		Function_135(&iParam0 + 1960 + 80, &Global_54076, 5);
	}
	return;
}

void Function_374(var uParam0, var uParam1, int iParam2) //Position: 0x1017C / 65916
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	if (!SQUAD_IS_VALID(&uParam1))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&uParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			Function_135(&uParam1, &uVar1, iParam2);
		}
		bVar0++;
	}
	return;
}

bool Function_375(struct<2417> Param0) //Position: 0x101D0 / 66000
{
	var uVar0;
	var uVar1;
	struct<2> Var2;
	var uVar4;
	
	Function_137(&Param0, 0);
	Param0.f_1100 = 0;
	Param0.f_1464 = 1;
	Param0.f_1468 = 0;
	Param0.f_1460 = 0;
	Param0.f_1480 = 1;
	Param0.f_1484 = 0;
	if (Param0.f_1584 == 0)
	{
		Param0.f_1584 = 1177;
	}
	Param0.f_1604 = 0;
	Param0.f_1608 = 0;
	(&Param0 + 1880) = "";
	Param0.f_1944 = 0;
	(&Param0 + 1960 + 80) = "";
	Param0.f_2360 = 0;
	Param0.f_2364 = 0;
	Param0.f_2372 = 0;
	if (Param0.f_2376 < 0)
	{
		Param0.f_2376 = 4;
	}
	Param0.f_2392 = 0;
	Param0.f_2412 = 0;
	Param0.f_2416 = 0;
	Function_462(&Param0);
	Function_461(&Param0);
	Function_460(&Param0 + 1960, &Param0 + 1368);
	SET_NPC_TO_NPC_DAMAGE_SCALE_FACTOR(0.0f);
	if (!Function_388(&Param0))
	{
		return 0;
	}
	(&Param0 + 1612)->f_4 = 2;
	*(&Param0 + 1612 + 8) = &Param0 + 1880;
	(&Param0 + 1612)->f_112 = 4;
	(&Param0 + 1612)->f_148 = 1;
	Param0.f_1864 = Function_383(0x442f0000);
	uVar1 = Function_382(Param0.f_1864);
	GET_OBJECT_POSITION(&uVar1, &Param0 + 1868);
	GET_OBJECT_POSITION(&Param0 + 1576, &Var2);
	uVar0 = CREATE_OBJECTSET_IN_LAYOUT("scoachoset", &Param0 + 1368, 36, 1);
	if (FIND_TRAFFIC_PATH(&Param0 + 1368, &uVar0, &Var2, &Param0 + 1868, 16, &uVar4))
	{
		*(&Param0 + 1612 + 64) = &uVar0;
	}
	Function_381(StackVal, &Param0 + 1612, *(&Param0 + 1868));
	Function_277(&Param0 + 1880, 4);
	Function_376(StackVal, &Param0 + 1612, Var2, 16, 0.0f, 30.0f, 1, 1);
	Function_244(&Param0 + 1612, 0, 0, 0);
	return 1;
}

void Function_376(int iParam0, struct<2> Param1, int iParam3, float fParam4, float fParam5, var uParam6, bool bParam7) //Position: 0x10394 / 66452
{
	bool bVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	
	fVar1 = fParam5;
	fVar2 = fParam4;
	while (!bVar0)
	{
		uVar3 = START_CURVE_QUERY(&Global_43578, Param1, uParam3, fVar2, fVar1, Function_249(5.0f, ((fParam4 + fParam5) / 2.0f)), 0);
		iVar5 = 0;
		if (IS_OBJECTSET_VALID(&iParam0 + 64))
		{
			iVar5 = 0;
			while (iVar5 <= GET_NUM_CURVES_IN_CURVE_QUERY(&uVar3))
			{
				uVar6 = GET_CURVE_FROM_CURVE_INDEX_IN_CURVE_QUERY(&uVar3, iVar5);
				if (!IS_OBJECT_IN_OBJECTSET(&uVar6, &iParam0 + 64))
				{
					REMOVE_CURVE_FROM_CURVE_QUERY_USING_CURVE(&uVar3, &uVar6);
				}
				bVar5++;
			}
		}
		if (!GET_NUM_POINTS_IN_CURVE_QUERY(&uVar3) < 0)
		{
			UNK_0xDF93BD7C(&uVar3);
			if (&bParam7)
			{
				fVar2 = fVar1;
				fVar1 = (fVar1 + 50.0f);
			}
			else
			{
				return;
			}
		}
		iVar4 = Function_379(StackVal, &uVar3, Param1, -1.0f, &uParam6);
		if (iVar4 == 4294967295)
		{
			UNK_0xDF93BD7C(&uVar3);
			if (&bParam7)
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
	GET_POINT_FROM_CURVE_QUERY(&uVar3, iVar4, &iParam0 + 36);
	*(&iParam0 + 192) = GET_CURVE_FROM_POINT_INDEX_IN_CURVE_QUERY(&uVar3, bVar4);
	Function_377(&iParam0);
	Function_253(&iParam0);
	UNK_0xDF93BD7C(&uVar3);
}

void Function_377(int iParam0) //Position: 0x104AD / 66733
{
	struct<2> Var0;
	
	if (!SQUAD_IS_VALID(&iParam0 + 8))
	{
		Function_378();
		Var0 = { StackVal, Function_378() };
		*(&iParam0 + 8) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&Global_43578, &Var0));
	}
	iParam0 = 1;
	return;
}

struct<8> Function_378() //Position: 0x104DE / 66782
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

var Function_379(var uParam0, struct<2> Param1, float fParam3, int iParam4) //Position: 0x10535 / 66869
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<5> Var3;
	bool bVar8;
	int iVar9;
	int iVar12;
	
	if (!IS_CURVE_QUERY_VALID(&uParam0))
	{
		LOG_ERROR("Invalid Curve Query");
		return 4294967295;
	}
	switch (&iParam4)
	{
		case 0x00000000:
			while ((StackVal || !(StackVal || FABS(((Function_380(&Var3) || !bVar6) - &fParam3 != -1.0f)) > &fParam3)) && iVar1 > 10)
			{
				iVar0 = RAND_INT_RANGE(0, (GET_NUM_POINTS_IN_CURVE_QUERY(&uParam0) - 1));
				GET_POINT_FROM_CURVE_QUERY(&uParam0, iVar0, &Var3);
				iVar1++;
				bVar6 = true;
			}
			if (iVar1 < 9 || !bVar6)
			{
				return 4294967295;
			}
			break;
		
		case 0x00000001:
			bVar7 = 1,001638E+07.0f;
			bVar0 = 4294967295;
			iVar2 = 0;
			while (iVar2 <= GET_NUM_POINTS_IN_CURVE_QUERY(&uParam0))
			{
				GET_POINT_FROM_CURVE_QUERY(&uParam0, iVar2, &Var3);
				Function_282(&Var3);
				bVar8 = VDIST(Function_282(&Var3), Param1);
				if (StackVal && (StackVal || FABS((((bVar8 > bVar7 && !Function_380(&Var3)) && !Function_279(&Var3)) - &fParam3 != -1.0f)) > &fParam3))
				{
					Function_257(StackVal, StackVal, Var3);
					PRINTNL();
					bVar7 = bVar8;
					bVar0 = bVar2;
				}
				else
				{
					Function_257(StackVal, StackVal, Var3);
					PRINTNL();
					if (bVar8 < bVar7)
					{
					}
					else if (Function_380(&Var3))
					{
					}
					else if (Function_279(&Var3))
					{
					}
					else if (StackVal && FABS((StackVal - &fParam3 == -1.0f)) < &fParam3)
					{
					}
					else if (&fParam3 != -1.0f)
					{
					}
				}
				bVar2++;
			}
			GET_POINT_FROM_CURVE_QUERY(&uParam0, bVar0, &Var3);
			break;
		
		case 0x00000002:
			bVar7 = 0.0f;
			bVar0 = 4294967295;
			bVar2 = false;
			while (bVar2 <= GET_NUM_POINTS_IN_CURVE_QUERY(&uParam0))
			{
				GET_POINT_FROM_CURVE_QUERY(&uParam0, bVar2, &Var3);
				Function_282(&Var3);
				bVar8 = VDIST(Function_282(&Var3), Param1);
				if (StackVal && (StackVal || FABS((((bVar8 < bVar7 && !Function_380(&Var3)) && !Function_279(&Var3)) - &fParam3 != -1.0f)) > &fParam3))
				{
					bVar7 = bVar8;
					bVar0 = bVar2;
				}
				bVar2++;
			}
			GET_POINT_FROM_CURVE_QUERY(&uParam0, bVar0, &Var3);
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
	if (Function_380(&Var3))
	{
		return 4294967295;
	}
	if (Function_279(&Var3))
	{
		return 4294967295;
	}
	if (Global_47267[1])
	{
		bVar2 = false;
		bVar2 = false;
		while (bVar2 <= GET_NUM_POINTS_IN_CURVE_QUERY(&uParam0))
		{
			GET_POINT_FROM_CURVE_QUERY(&uParam0, bVar2, &iVar9);
			Function_282(&iVar9);
			iVar12 = Function_282(&iVar9);
			bVar2++;
		}
		Function_282(&Var3);
		iVar12 = Function_282(&Var3);
	}
	return bVar0;
}

bool Function_380(struct<13> Param0) //Position: 0x107AB / 67499
{
	if (Param0.f_12 > 0,001f || Param0.f_12 < 0,999f)
	{
		return 1;
	}
	return 0;
}

void Function_381(int iParam0, struct<2> Param1) //Position: 0x107CE / 67534
{
	*(&iParam0 + 220) = Param1;
	return;
}

var Function_382(int iParam0) //Position: 0x107DE / 67550
{
	int iVar0;
	char* cVar1[24];
	
	if (!IS_LAYOUTREF_VALID(&Global_43578))
	{
		return "";
	}
	if (!Function_66(iParam0))
	{
		return "";
	}
	cVar1 = CREATE_OBJECT_ITERATOR(&Global_43578);
	ITERATE_ON_OBJECT_TYPE(&cVar1, 9);
	memcpy(&cVar2, &Global_44085[iParam09] + 32, 6);
	ITERATE_ON_PARTIAL_NAME(&cVar1, &cVar2);
	stradd(&cVar2, "v_coach_park", 24);
	iVar0 = START_OBJECT_ITERATOR(&cVar1);
	while (IS_OBJECT_VALID(&iVar0))
	{
		if (STRINGS_ARE_EQUAL(&cVar2, GET_OBJECT_NAME(&iVar0)))
		{
			DESTROY_ITERATOR(&cVar1);
			return &iVar0;
		}
		iVar0 = OBJECT_ITERATOR_NEXT(&cVar1);
	}
	iVar0 = "";
	DESTROY_ITERATOR(&cVar1);
	return &iVar0;
}

var Function_383(float fParam0) //Position: 0x1087E / 67710
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	var uVar4;
	bool bVar6;
	struct<8> Var7;
	int iVar15;
	
	iVar0 = 4294967295;
	iVar1 = 4294967295;
	bVar6 = 99999.0f;
	iVar15 = 0;
	while (iVar15 < 145)
	{
		if (IS_VOLUME_VALID(&Global_44085[iVar159] + 8))
		{
			if (StackVal && (StackVal || Function_386(Global_43788) != Function_386(Global_44085[iVar159]) != 3 != 4))
			{
				Var7 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_385(iVar15) };
				if (Function_384(iVar15))
				{
					GET_VOLUME_CENTER(&Global_44085[iVar159] + 8, &Var2);
					if (VDIST(Global_54078, Var2) < &fParam0 && VDIST(Global_54078, Var2) > bVar6)
					{
						iVar0 = iVar15;
						bVar6 = VDIST(Global_54078, Var2);
					}
					else
					{
						iVar1 = iVar15;
					}
				}
			}
		}
		iVar15++;
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
		GET_VOLUME_CENTER(&Global_44085[iVar09] + 8, &uVar4);
	}
	return iVar0;
}

bool Function_384(int iParam0) //Position: 0x1096B / 67947
{
	if (!Function_66(iParam0))
	{
		return 0;
	}
	if ((iParam0 != Global_46760[4] || iParam0 != Global_46914[1]) || iParam0 != Global_46866[2])
	{
		return 0;
	}
	return 1;
}

struct<32> Function_385(int iParam0) //Position: 0x1099F / 67999
{
	char* cVar0[32];
	
	strcpy(&cVar0, "INVALID REGION", 32);
	if (!Function_66(iParam0))
	{
		return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
	}
	if (IS_VOLUME_VALID(&Global_44085[iParam09] + 8))
	{
		strcpy(&cVar0, GET_OBJECT_NAME(&Global_44085[iParam09] + 8), 32);
		return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
	}
	switch (StackVal)
	{
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
			memcpy(&cVar0, &Global_44085[iParam09] + 32, 8);
			stradd(&cVar0, "v_region", 32);
			break;
		
		default:
			if (IS_VOLUME_VALID(&Global_44085[iParam09] + 8))
			{
				strcpy(&cVar0, GET_OBJECT_NAME(&Global_44085[iParam09] + 8), 32);
			}
			break;
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

int Function_386(int iParam0) //Position: 0x10A61 / 68193
{
	return Function_387(iParam0);
}

int Function_387(int iParam0) //Position: 0x10A6C / 68204
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_66(iParam0))
	{
		if (StackVal == 1)
		{
			iVar0 = iParam0;
		}
		else if (StackVal == 2)
		{
			iVar0 = Global_44085[iParam09];
		}
		else
		{
			iVar0 = Global_44085[iParam09];
			iVar0 = Global_44085[iVar09];
		}
	}
	return iVar0;
}

bool Function_388(bool bParam0) //Position: 0x10AC4 / 68292
{
	struct<2> Var0;
	struct<2> Var2;
	struct<2> Var4;
	struct<2> Var6;
	var uVar8;
	struct<2> Var10;
	float fVar12;
	char* cVar13[32];
	
	Function_459(&bParam0);
	if (StackVal || Function_520(!IS_LAYOUTREF_VALID(&bParam0 + 1368), Function_459(&bParam0)))
	{
		return 0;
	}
	Function_459(&bParam0);
	fVar12 = (VDIST(Function_459(&bParam0), Global_54078) + 50.0f);
	Function_459(&bParam0);
	if (!Function_458(StackVal, Function_459(&bParam0), 0,1f, fVar12, &Var2, &Var4, &Var6, 0x41c80000, 0))
	{
		return 0;
	}
	if (!Function_520(StackVal, Var2))
	{
		if (VDIST(Global_54078, Var4) > VDIST(Global_54078, Var6))
		{
			Var0 = Var4;
		}
		else
		{
			Var0 = Var6;
		}
	}
	else
	{
		return 0;
	}
	Function_459(&bParam0);
	uVar8 = Vector(StackVal, StackVal, StackVal) - Vector(Var0, Function_459(&bParam0), StackVal);
	Var10 = Vector(0.0f, 0.0f, 0.0f);
	Var10.f_4 = (UNK_0x9C40E671(&uVar8) - 180.0f);
	Function_459(&bParam0);
	Function_453(StackVal, StackVal, &bParam0, Function_459(&bParam0), Var10, &bParam0 + 1368);
	SET_ACTOR_UPDATE_PRIORITY(&bParam0 + 1576, false);
	ADD_PLAYER_CONTROL_HORSE_FOLLOW(0, &bParam0 + 1576, -1.0f, -1.0f, 1, 1, 0);
	if (!IS_ACTOR_VALID(&bParam0 + 1576))
	{
		return 0;
	}
	if (!Function_450(&bParam0, &bParam0 + 1368))
	{
		return 0;
	}
	if (!SQUAD_IS_VALID(&bParam0 + 1960 + 80))
	{
		strcpy(&cVar13, "movAtkSquad", 32);
		cVar13 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_289(&cVar13) };
		(&bParam0 + 1960 + 80) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&bParam0 + 1368, &cVar13));
	}
	Function_449(&bParam0 + 1960, &bParam0 + 1960 + 80);
	if (!SQUAD_IS_VALID(&bParam0 + 1960 + 80))
	{
		return 0;
	}
	if (!Function_407(&bParam0))
	{
		return 0;
	}
	Function_406(&bParam0, 1);
	Function_389(StackVal, &bParam0, Function_265(&bParam0 + 1880), 388, Vector(0.0f, 0.0f, 0.0f), 1, 1, 0);
	return 1;
}

void Function_389(struct<1093> Param0) //Position: 0x10C68 / 68712
{
	struct<8> Var0;
	var uVar8;
	int iVar9;
	
	iVar9 = 0;
	Function_405(&Param0);
	if (IS_OBJECT_VALID(&uParam1))
	{
		Param0 = &uParam1;
		uVar8 = &uParam1;
	}
	Param0.f_56 = uParam2;
	if (!Function_520(StackVal, Param3))
	{
		*(&Param0 + 8) = Param3;
	}
	if (&iParam5 == 1)
	{
		Function_58(&Param0 + 1048, 4);
	}
	else
	{
		Function_25(&Param0 + 1048, 4);
	}
	if (&bParam6)
	{
		if (Function_14(Param0.f_1092))
		{
			Function_404(Param0.f_1092, 1);
			Function_58(&Param0 + 1048, 32);
		}
		else
		{
			LOG_ERROR("PROCMISSION_SETUP found an invalid deed");
		}
	}
	Function_58(&Param0 + 1048, 1024);
	Param0.f_1020 = &iParam7;
	if (&iParam7 >= 0)
	{
		if (!IS_OBJECT_VALID(&uVar8))
		{
			uVar8 = CREATE_POINT_IN_LAYOUT(StackVal, &Param0 + 32, &Var0, Param3, Vector(0.0f, 0.0f, 0.0f));
			iVar9 = 1;
		}
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_289("nbirdSquad") };
		*(&Param0 + 1024) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&Param0 + 32, &Var0));
		if (SQUAD_IS_VALID(&Param0 + 1024))
		{
			Function_391(&Param0 + 32, &Param0 + 1024, &iParam7, &uVar8, 1129, 0x41200000);
			Function_390(&Param0 + 1024, 0);
		}
		if (iVar9 == 1)
		{
			DESTROY_OBJECT(&uVar8);
		}
		Function_210(&Param0 + 1032);
	}
	Function_210(&Param0 + 60);
	Function_526(0);
}

void Function_390(var uParam0, bool bParam1) //Position: 0x10DDF / 69087
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&uParam0))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			SET_ACTOR_UPDATE_PRIORITY(&uVar1, bParam1);
		}
		bVar0++;
	}
	return;
}

void Function_391(var uParam0, var uParam1, int iParam2, var uParam3, bool bParam4, float fParam5) //Position: 0x10E26 / 69158
{
	struct<2> Var0;
	struct<2> Var2;
	struct<8> Var4;
	struct<2> Var12;
	bool bVar14;
	bool bVar15;
	
	Function_403(10.0f);
	Var12 = { StackVal, Function_403(10.0f) };
	if (SQUAD_IS_VALID(&uParam1))
	{
		if (!Function_402(&bParam4) || &bParam4 != 0)
		{
			bVar14 = Function_392(128, 0, 0, 4294967295, 0);
		}
		else
		{
			bVar14 = &bParam4;
		}
		bVar15 = false;
		while (bVar15 < (iParam2 - 1))
		{
			Function_370(&Var12, bVar15);
			GET_OBJECT_RELATIVE_POSITION(&uParam3, Function_370(&Var12, bVar15), &Var0);
			Var0.f_4 = (StackVal + (&fParam5 + RAND_FLOAT_RANGE(0.0f, 20.0f)));
			Var2.f_4 = RAND_FLOAT_RANGE(0.0f, 360.0f);
			Var4 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_289("genbird_") };
			SQUAD_JOIN(CREATE_ACTOR_IN_LAYOUT(&uParam0, &Var4, bVar14, Var0, Var2), &uParam1);
			bVar15++;
		}
	}
	else
	{
		LOG_ERROR("CREATE_BIRD_SQUAD_IN_LAYOUT - birdSquad passed in is not squad");
	}
}

var Function_392(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x10F20 / 69408
{
	return Function_393(StackVal, iParam0, iParam1, &iParam2, &iParam3, &iParam4, 0, Vector(0.0f, 0.0f, 0.0f));
}

var Function_393(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, float fParam5, struct<2> Param6) //Position: 0x10F3D / 69437
{
	switch (iParam0)
	{
		case 0x00000001:
			return Function_396(StackVal, &(Global_46972[0]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000002:
			return Function_396(StackVal, &(Global_46972[1]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000004:
			return Function_396(StackVal, &(Global_46972[2]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000008:
			return Function_396(StackVal, &(Global_46972[3]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000010:
			return Function_396(StackVal, &(Global_46972[4]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000020:
			return Function_396(StackVal, &(Global_46972[5]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000040:
			return Function_396(StackVal, &(Global_46972[6]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000080:
			return Function_396(StackVal, &(Global_46972[7]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000100:
			return Function_396(StackVal, &(Global_46972[8]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000200:
			return Function_396(StackVal, &(Global_46972[9]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000400:
			return Function_396(StackVal, &(Global_46972[10]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00000800:
			return Function_396(StackVal, &(Global_46972[11]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00001000:
			return Function_396(StackVal, &(Global_46972[12]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x00002000:
			return Function_396(StackVal, &(Global_46972[13]), bParam1, iParam2, iParam3, bParam4, fParam5, Param6);
			break;
		
		case 0x40000000:
			LOG_ERROR("Trying to get a random member of invalid popset_type");
			return 4294967295;
			break;
	}
	return Function_394(StackVal, iParam0, bParam1, iParam2, fParam5, Param6);
}

var Function_394(var uParam0, bool bParam1, int iParam2, float fParam3, struct<2> Param4) //Position: 0x111A0 / 70048
{
	bool bVar0;
	
	bVar0 = CREATE_POPULATION_SET(0);
	if (uParam0 & 1 == 1)
	{
		Function_395(&(Global_46972[0]), &bVar0);
	}
	if (uParam0 & 2 == 2)
	{
		Function_395(&(Global_46972[1]), &bVar0);
	}
	if (uParam0 & 4 == 4)
	{
		Function_395(&(Global_46972[2]), &bVar0);
	}
	if (uParam0 & 8 == 8)
	{
		Function_395(&(Global_46972[3]), &bVar0);
	}
	if (uParam0 & 16 == 16)
	{
		Function_395(&(Global_46972[4]), &bVar0);
	}
	if (uParam0 & 32 == 32)
	{
		Function_395(&(Global_46972[5]), &bVar0);
	}
	if (uParam0 & 64 == 64)
	{
		Function_395(&(Global_46972[6]), &bVar0);
	}
	if (uParam0 & 128 == 128)
	{
		Function_395(&(Global_46972[7]), &bVar0);
	}
	if (uParam0 & 256 == 256)
	{
		Function_395(&(Global_46972[8]), &bVar0);
	}
	if (uParam0 & 512 == 512)
	{
		Function_395(&(Global_46972[9]), &bVar0);
	}
	if (uParam0 & 1024 == 1024)
	{
		Function_395(&(Global_46972[10]), &bVar0);
	}
	if (uParam0 & 2048 == 2048)
	{
		Function_395(&(Global_46972[11]), &bVar0);
	}
	if (uParam0 & 4096 == 4096)
	{
		Function_395(&(Global_46972[12]), &bVar0);
	}
	if (uParam0 & 8192 == 8192)
	{
		Function_395(&(Global_46972[13]), &bVar0);
	}
	return Function_396(StackVal, &bVar0, bParam1, iParam2, 4294967295, 0, fParam3, Param4);
}

void Function_395(var uParam0, bool bParam1) //Position: 0x1130F / 70415
{
	int iVar0;
	
	if (!IS_POPSET_VALID(&uParam0))
	{
		LOG_ERROR("POPDESC_INSERT_ALL_MEMBERS given an invalid subPOPSET");
	}
	if (!IS_POPSET_VALID(&bParam1))
	{
		LOG_ERROR("POPDESC_INSERT_ALL_MEMBERS given an invalid master popset");
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= GET_NUM_ACTORENUMS_IN_POPULATION(&uParam0))
	{
		LINK_ACTORENUM_TO_POPULATION(&bParam1, GET_ACTORENUM_IN_POPULATION(&uParam0, iVar0), GET_ACTORENUM_IN_POPULATION_WEIGHT(&uParam0, iVar0));
		iVar0++;
	}
	return;
}

var Function_396(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, float fParam5, struct<2> Param6) //Position: 0x113D3 / 70611
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	if (!IS_POPSET_VALID(&bParam0))
	{
		LOG_ERROR("Trying to get a random member of an invalid popset");
		return 4294967295;
	}
	if (bParam1)
	{
		Function_401();
	}
	bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&bParam0, iParam2, iParam3, bParam4, fParam5, Param6);
	if (!Function_402(bVar1))
	{
		if (!Global_47146 && !Global_47147)
		{
			Function_400(&bParam0, bParam1, iParam2, iParam3, bParam4);
			LOG_ERROR("Did a random on popset, and got back a -1");
		}
		Function_400(&bParam0, bParam1, iParam2, iParam3, bParam4);
		LOG_ERROR("Did a random on popset, and got back a -1");
		return 4294967295;
	}
	bVar0 = bVar1;
	if (bParam1 || (!iParam3 != 4294967295 && !iParam3 != GET_ACTORENUM_SPECIES(bVar1)))
	{
		if (bParam1 && iParam3 != 4294967295)
		{
			while (Function_399(bVar0) && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&bParam0, iParam2, iParam3, false, fParam5, Param6);
				if (Function_402(bVar1))
				{
					bVar0 = bVar1;
				}
				iVar2++;
			}
			if (bParam1)
			{
				if (Function_399(bVar0))
				{
					Function_398();
				}
				Function_397(bVar0);
			}
		}
		else if (!iParam3 != 4294967295)
		{
			while (!GET_ACTORENUM_SPECIES(bVar1) != iParam3 && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&bParam0, iParam2, iParam3, false, fParam5, Param6);
				if (Function_402(bVar1))
				{
					bVar0 = bVar1;
				}
				iVar2++;
			}
		}
	}
	if (!iParam3 != 4294967295 && !iParam3 != GET_ACTORENUM_SPECIES(bVar0))
	{
		if (iParam2 == 0)
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

void Function_397(int iParam0) //Position: 0x116CC / 71372
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_46956.f_12)
	{
		if ((*&Global_46956 + 12)[iVar0] == iParam0)
		{
			LOG_ERROR("Attempting to insert a duplicate asset into the asset duplication array. Clearly something has gone wrong.");
			return;
		}
		if ((*&Global_46956 + 12)[iVar0] == 4294967295)
		{
			(*&Global_46956 + 12)[iVar0] = iParam0;
			return;
		}
		iVar0++;
	}
	return;
}

void Function_398() //Position: 0x11780 / 71552
{
	int iVar0;
	
	if (Global_6645)
	{
		Global_46956 = GET_THIS_SCRIPT_ID();
		Global_46956.f_8 = GET_CURRENT_GAME_TIME();
	}
	iVar0 = 0;
	while (iVar0 <= Global_46956.f_12)
	{
		(*&Global_46956 + 12)[iVar0] = 4294967295;
		iVar0++;
	}
	return;
}

bool Function_399(bool bParam0) //Position: 0x117BB / 71611
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_46956.f_12)
	{
		if ((*&Global_46956 + 12)[iVar0] == bParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void Function_400(var uParam0, bool bParam1, int iParam2, int iParam3, bool bParam4) //Position: 0x117E8 / 71656
{
	int iVar0;
	
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
	PRINTINT(&iParam2);
	PRINTSTRING("  ANIMALSPECIES=");
	PRINTINT(&iParam3);
	PRINTSTRING("  IgnoreStreaming=");
	if (&bParam4)
	{
		PRINTSTRING("TRUE");
	}
	else
	{
		PRINTSTRING("FALSE");
	}
	PRINTSTRING("  PopsetReady");
	if (IS_POPULATION_SET_READY(&uParam0, &iParam2, &iParam3))
	{
		PRINTSTRING("TRUE");
	}
	else
	{
		PRINTSTRING("FALSE");
	}
	PRINTNL();
	iVar0 = 0;
	while (iVar0 <= GET_NUM_ACTORENUMS_IN_POPULATION(&uParam0))
	{
		PRINTSTRING(GET_ACTOR_ENUM_STRING_FROM_ENUM(GET_ACTORENUM_IN_POPULATION(&uParam0, iVar0)));
		PRINTSTRING("n  Weight=");
		PRINTFLOAT(GET_ACTORENUM_IN_POPULATION_WEIGHT(&uParam0, iVar0));
		PRINTSTRING("  Streamed=");
		if (STREAMING_IS_ACTOR_LOADED(GET_ACTORENUM_IN_POPULATION(&uParam0, iVar0), 4294967295))
		{
			PRINTSTRING("TRUE");
		}
		else
		{
			PRINTSTRING("FALSE");
		}
		PRINTNL();
		iVar0++;
	}
}

void Function_401() //Position: 0x11943 / 72003
{
	int iVar0;
	
	if (Global_6645)
	{
		if (StackVal || !&Global_46956 != GET_THIS_SCRIPT_ID() < GET_CURRENT_GAME_TIME())
		{
			Function_398();
		}
	}
	iVar0 = 0;
	while (iVar0 <= Global_46956.f_12)
	{
		if ((*&Global_46956 + 12)[iVar0] == 4294967295)
		{
			return;
		}
		iVar0++;
	}
	Function_398();
	return;
}

bool Function_402(bool bParam0) //Position: 0x1198F / 72079
{
	if (bParam0 > 0 || bParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

struct<8> Function_403(int iParam0) //Position: 0x119A6 / 72102
{
	Function_372(iParam0, 10);
	return StackVal, Function_372(iParam0, 10);
}

void Function_404(int iParam0, int iParam1) //Position: 0x119B3 / 72115
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
	Global_21684[iParam07].f_4 = 1;
	if (!Global_53524.f_36 && iParam1)
	{
		Function_24(1);
	}
	if (iVar0 == 1)
	{
		Global_10966 = Function_13(iParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_20(Global_10966) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_19(Global_10966) };
		}
		uVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		SET_JOURNAL_ENTRY_PROGRESS(uVar11, -2.0f, 0, 0);
		CLEAR_JOURNAL_ENTRY(uVar11);
		APPEND_JOURNAL_ENTRY(uVar11, 0);
	}
	return;
}

void Function_405(int iParam0) //Position: 0x11A5A / 72282
{
	char* cVar0[32];
	
	if (!IS_LAYOUTREF_VALID(&iParam0 + 32))
	{
		strcpy(&cVar0, "procMisslayout", 32);
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_289(&cVar0) };
		*(&iParam0 + 32) = CREATE_LAYOUT(&cVar0);
		if (!IS_LAYOUTREF_VALID(&iParam0 + 32))
		{
			LOG_ERROR("couldn't create internal procmission layout");
		}
	}
	return;
}

void Function_406(struct<917> Param0) //Position: 0x11AD5 / 72405
{
	Param0.f_916 = iParam1;
	return;
}

bool Function_407(struct<2377> Param0) //Position: 0x11AE3 / 72419
{
	struct<8> Var0;
	struct<6> Var8;
	struct<2> Var14;
	struct<2> Var16;
	var uVar18;
	int iVar20;
	
	if (SQUAD_IS_VALID(Function_301(&Param0 + 1960)))
	{
		if (Function_448(Function_301(&Param0 + 1960)) >= 0)
		{
			LOG_ERROR("Attacker's Attack wave already exists, but trying to create another.");
			return 0;
		}
	}
	if (IS_ACTOR_VALID(&Param0 + 1576))
	{
		GET_OBJECT_POSITION(&Param0 + 1576, &uVar18);
		GET_OBJECT_RELATIVE_POSITION(StackVal, &Param0 + 1576, Vector(0.0f, 0.0f, 0.0f), &Var16);
		Function_447(&Var0, 3, 0.0f, 0, 4294967295);
		Function_446(StackVal, &Var8, 0, Var16, 0.0f, 25.0f, 75.0f, 0, 0x40a00000, 0);
		iVar20 = 0;
		while (iVar20 < 200)
		{
			WAIT(500);
			Function_440(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var8, Var0, 1);
			Var14 = Function_440(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var8, Var0, 1);
			if (!Function_520(StackVal, Var14))
			{
				iVar20 = 201;
			}
			iVar20++;
		}
	}
	else
	{
		LOG_ERROR("Invalid stagecoach.");
		return 0;
	}
	if (Function_520(StackVal, Var14))
	{
		return 0;
	}
	if (!Function_520(StackVal, Var14))
	{
		Function_439(&Param0 + 1960, &Param0 + 1880);
		Function_438(&Param0 + 1960, 1);
		Function_437(&Param0 + 1960, 3);
		Function_436(&Param0 + 1960, 0);
		Function_435(&Param0 + 1960, 0);
		Function_434(&Param0 + 1960, "matk");
		Function_433(&Param0 + 1960, Param0.f_2376);
		Function_432(StackVal, &Param0 + 1960, Var14);
		Function_431(&Param0 + 1960, 5.0f, 50.0f, 0x41700000);
		Function_430(&Param0 + 1960, 1);
		Function_429(&Param0 + 1960, &Param0 + 1576);
		Function_428(&Param0 + 1960, 1);
		Function_427(&Param0 + 1960, 1);
		Function_426(&Param0 + 1960, 0, 4294967295);
		Function_425(&Param0 + 1960, 1);
		Function_424(&Param0 + 1960, 1, 976, 1);
		Function_423(&Param0 + 1960, 1);
		if (Function_239(&Param0) == 1)
		{
			Function_418(&Param0 + 1960, &Global_54076);
		}
		while (!Param0.f_2364)
		{
			if (Function_416(&Param0 + 1960))
			{
				iVar20 = 0;
				while (iVar20 < 3)
				{
					Function_415(&Param0 + 1960, (*&Param0 + 2296)[iVar20]);
					iVar20++;
				}
				*(&Param0 + 1952) = Function_413(&Param0 + 1960);
				Function_408(&Param0 + 1960);
				Param0.f_2364 = 1;
			}
			WAIT(false);
		}
	}
	return 1;
}

void Function_408(int iParam0) //Position: 0x11D68 / 73064
{
	if (IS_OBJECT_VALID(Function_412(&iParam0)))
	{
		Function_410(&iParam0, 0);
		Function_409(&iParam0, 0);
	}
	return;
}

int Function_409(struct<329> Param0) //Position: 0x11D8A / 73098
{
	bool bVar0;
	char* cVar1[16];
	char* cVar5[16];
	
	if (IS_LAYOUTREF_VALID(&Param0))
	{
		if (&iParam1 == "")
		{
			iParam1 = Function_412(&Param0);
		}
		if (IS_OBJECT_VALID(&iParam1))
		{
			DECOR_SET_BOOL(&iParam1, "catk_bdi", Param0.f_272);
			DECOR_SET_FLOAT(&iParam1, "catk_spx", Param0.f_284);
			DECOR_SET_FLOAT(StackVal, &iParam1, "catk_spy");
			DECOR_SET_FLOAT(StackVal, &iParam1, "catk_spz");
			DECOR_SET_FLOAT(&iParam1, "catk_scx", Param0.f_296);
			DECOR_SET_FLOAT(StackVal, &iParam1, "catk_scy");
			DECOR_SET_FLOAT(StackVal, &iParam1, "catk_scz");
			DECOR_SET_BOOL(&iParam1, "catk_krd", Param0.f_276);
			DECOR_SET_BOOL(&iParam1, "catk_krt", Param0.f_280);
			DECOR_SET_OBJECT(&iParam1, "catk_atv", &Param0 + 312);
			DECOR_SET_INT(&iParam1, "catk_ats", Param0.f_320);
			DECOR_SET_BOOL(&iParam1, "catk_bus", Param0.f_324);
			DECOR_SET_OBJECT(&iParam1, "catk_asq", GET_OBJECT_FROM_SQUAD(&Param0 + 80));
			DECOR_SET_INT(&iParam1, "catk_wtm", Param0.f_328);
			DECOR_SET_BOOL(&iParam1, "catk_ovr", Param0.f_260);
			bVar0 = false;
			while (bVar0 <= Param0.f_144)
			{
				if (Function_402((*&Param0 + 144)[bVar0]) && !(*&Param0 + 144)[bVar0] != 0)
				{
					strcpy(&cVar1, INT_TO_STRING(bVar0), 16);
					strcpy(&cVar5, "catk_ae", 16);
					stradd(&cVar5, &cVar1, 16);
					DECOR_SET_INT(&iParam1, &cVar5, (*&Param0 + 144)[bVar0]);
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

int Function_410(struct<329> Param0) //Position: 0x11FFE / 73726
{
	bool bVar0;
	char* cVar1[16];
	char* cVar5[16];
	
	Function_411(&Param0);
	if (IS_LAYOUTREF_VALID(&Param0))
	{
		if (&iParam1 == "")
		{
			iParam1 = Function_412(&Param0);
		}
		if (IS_OBJECT_VALID(&iParam1))
		{
			Param0.f_272 = DECOR_GET_BOOL(&iParam1, "catk_bdi");
			Param0.f_284 = DECOR_GET_FLOAT(&iParam1, "catk_spx");
			(&Param0 + 284)->f_4 = DECOR_GET_FLOAT(&iParam1, "catk_spy");
			(&Param0 + 284)->f_8 = DECOR_GET_FLOAT(&iParam1, "catk_spz");
			Param0.f_296 = DECOR_GET_FLOAT(&iParam1, "catk_scx");
			(&Param0 + 296)->f_4 = DECOR_GET_FLOAT(&iParam1, "catk_scy");
			(&Param0 + 296)->f_8 = DECOR_GET_FLOAT(&iParam1, "catk_scz");
			Param0.f_276 = DECOR_GET_BOOL(&iParam1, "catk_krd");
			Param0.f_280 = DECOR_GET_BOOL(&iParam1, "catk_krt");
			(&Param0 + 312) = GET_VOLUME_FROM_OBJECT(DECOR_GET_OBJECT(&iParam1, "catk_atv"));
			Param0.f_320 = DECOR_GET_INT(&iParam1, "catk_ats");
			Param0.f_324 = DECOR_GET_BOOL(&iParam1, "catk_bus");
			*(&Param0 + 80) = GET_SQUAD_FROM_OBJECT(DECOR_GET_OBJECT(&iParam1, "catk_asq"));
			Param0.f_328 = DECOR_GET_INT(&iParam1, "catk_wtm");
			Param0.f_260 = DECOR_GET_BOOL(&iParam1, "catk_ovr");
			bVar0 = false;
			while (bVar0 <= Param0.f_144)
			{
				if (Function_402((*&Param0 + 144)[bVar0]) && !(*&Param0 + 144)[bVar0] != 0)
				{
					strcpy(&cVar1, INT_TO_STRING(bVar0), 16);
					strcpy(&cVar5, "catk_ae", 16);
					stradd(&cVar5, &cVar1, 16);
					(*&Param0 + 144)[bVar0] = DECOR_GET_INT(&iParam1, &cVar5);
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

void Function_411(int iParam0) //Position: 0x12268 / 74344
{
	char* cVar0[16];
	
	if (!IS_LAYOUTREF_VALID(&iParam0))
	{
		strcpy(&cVar0, "catkslay", 16);
		memcpy(&cVar0, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_289(&cVar0), 4);
		iParam0 = CREATE_LAYOUT(&cVar0);
		if (!IS_LAYOUTREF_VALID(&iParam0))
		{
			LOG_ERROR("couldn't create library createattack layout");
		}
	}
	return;
}

var Function_412(int iParam0) //Position: 0x122D8 / 74456
{
	int iVar0;
	
	if (!IS_ITERATOR_VALID(&iParam0 + 16))
	{
		return "";
	}
	iVar0 = START_OBJECT_ITERATOR(&iParam0 + 16);
	return &iVar0;
}

var Function_413(struct<273> Param0) //Position: 0x122FD / 74493
{
	int iVar0;
	
	if (!Param0.f_272 != 1)
	{
		LOG_ERROR("Call CREATEATTACK_INIT before launching");
		return "";
	}
	Function_414(&Param0);
	iVar0 = LAUNCH_NEW_SCRIPT_WITH_ARGS("$/content/scripting/DesignerDefined/createAttack", &Param0, 84, 0);
	return &iVar0;
}

void Function_414(struct<201> Param0) //Position: 0x12387 / 74631
{
	int iVar0;
	int iVar1;
	
	if (Function_86(Param0.f_128, 64))
	{
		iVar1 = 0;
		while (iVar1 <= Param0.f_144)
		{
			if (!(*&Param0 + 144)[iVar1] != 0 && Function_402((*&Param0 + 144)[iVar1]))
			{
				iVar0++;
			}
			iVar1++;
		}
		Param0.f_200 = iVar0;
	}
	else
	{
		Param0.f_200 = Param0.f_144;
	}
	return;
}

int Function_415(struct<273> Param0) //Position: 0x123E6 / 74726
{
	int iVar0;
	
	if (Param0.f_272 == 0)
	{
		LOG_ERROR("CREATEATTACK_ADD_ACTORENUM - Call *after* CREATEATTACK_INIT and before CREATEATTACK_LAUNCH");
		return 0;
	}
	if (!Function_402(bParam1) || bParam1 != 0)
	{
		return 0;
	}
	Function_410(&Param0, 0);
	iVar0 = 0;
	while (iVar0 <= Param0.f_144)
	{
		if ((*&Param0 + 144)[iVar0] != 0 || !Function_402((*&Param0 + 144)[iVar0]))
		{
			(*&Param0 + 144)[iVar0] = bParam1;
			iVar0 = Param0.f_144;
		}
		iVar0++;
	}
	Function_409(&Param0, 0);
	return 1;
}

bool Function_416(struct<325> Param0) //Position: 0x124BD / 74941
{
	int iVar0;
	struct<2> Var1;
	struct<8> Var3;
	struct<6> Var11;
	
	Function_411(&Param0);
	if (Param0.f_320 == 0)
	{
		Param0.f_320 = 3;
		DECOR_SET_BOOL(&Param0, "catk_bus", Param0.f_324);
	}
	if (Function_520(StackVal, (&Param0 + 284)))
	{
		if (Function_520(StackVal, *(&Param0 + 296)))
		{
			if (IS_ACTOR_VALID(GET_PLAYER_ACTOR(0)))
			{
				Function_432(StackVal, &Param0, Global_54078);
			}
			else
			{
				return 0;
			}
		}
		Function_432(StackVal, &Param0, *(&Param0 + 296));
		if (Param0.f_36 > 0,5f)
		{
			Param0.f_36 = 0,5f;
		}
		if ((Param0.f_40 - Param0.f_36) > 6.0f)
		{
			Param0.f_40 = (Param0.f_36 + 6.0f);
		}
		if (Param0.f_44 >= 0.0f)
		{
			Param0.f_44 = 15.0f;
		}
		Function_447(&Var3, 4294967295, 5.0f, 1, 4294967295);
		Function_446(StackVal, &Var11, 0, *(&Param0 + 296), 0.0f, Param0.f_36, Param0.f_40, Param0.f_44, 0x40a00000, 0);
		iVar0 = 0;
		while (iVar0 < 9)
		{
			Function_440(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var11, Var3, 1);
			Var1 = Function_440(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var11, Var3, 1);
			if (!Function_520(StackVal, Var1))
			{
				iVar0 = 10;
			}
			iVar0++;
		}
		if (Function_520(StackVal, Var1))
		{
			*(&Param0 + 284) = *(&Param0 + 296);
			return 0;
		}
		*(&Param0 + 284) = Var1;
	}
	Function_414(&Param0);
	Param0.f_272 = 1;
	if (!Function_417(&Param0))
	{
		LOG_ERROR("CREATEATTACK_INIT could not create data object");
	}
	Function_409(&Param0, 0);
	return 1;
}

bool Function_417(int iParam0) //Position: 0x12660 / 75360
{
	var uVar0;
	
	if (!IS_OBJECT_VALID(&iParam0))
	{
		LOG_ERROR("CREATEATTACK_CreateDataObject - Invalid layout");
		return 0;
	}
	if (!IS_OBJECT_VALID(&iParam0 + 8))
	{
		memcpy(&uVar0, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_289("ncatk_dobj"), 4);
		*(&iParam0 + 8) = CREATE_POINT_IN_LAYOUT(StackVal, &iParam0, &uVar0, *(&iParam0 + 284), Vector(0.0f, 0.0f, 0.0f));
		if (!IS_OBJECT_VALID(&iParam0 + 8))
		{
			LOG_ERROR("CREATEATTACK_CreateDataObject - Could not create data object");
			return 0;
		}
	}
	if (!IS_ITERATOR_VALID(&iParam0 + 16))
	{
		*(&iParam0 + 16) = CREATE_OBJECT_ITERATOR(&iParam0);
	}
	if (!IS_ITERATOR_VALID(&iParam0 + 16))
	{
		LOG_ERROR("CREATEATTACK_CreateDataObject - Could not create data iterator");
		return 0;
	}
	ITERATE_ON_OBJECT_TYPE(&iParam0 + 16, 8);
	ITERATE_ON_PARTIAL_NAME(&iParam0 + 16, "ncatk_dobj");
	PRINTSTRING("data obj =  ");
	PRINTSTRING(GET_OBJECT_NAME(START_OBJECT_ITERATOR(&iParam0 + 16)));
	PRINTNL();
	return 1;
}

int Function_418(var uParam0, int iParam1) //Position: 0x127E7 / 75751
{
	return Function_419(&uParam0, &iParam1);
}

int Function_419(struct<129> Param0) //Position: 0x127F6 / 75766
{
	if (!IS_ACTOR_VALID(&iParam1))
	{
		return 0;
	}
	Function_422(&Param0);
	if (!IS_ACTOR_IN_ACTORSET(&Param0 + 64, &iParam1))
	{
		DECOR_SET_BOOL(&iParam1, "catk_external", 1);
		ADD_ACTORSET_MEMBER(&Param0 + 64, &iParam1);
		PRINTSTRING("Adding as target: ");
		PRINTSTRING(GET_OBJECT_NAME(&iParam1));
		PRINTNL();
		if (!Function_86(Param0.f_128, 1024))
		{
			Function_420(&Param0, &iParam1);
		}
	}
	return 1;
}

void Function_420(int iParam0, var uParam1) //Position: 0x12881 / 75905
{
	var uVar0;
	int iVar4;
	bool bVar5;
	var uVar6;
	
	Function_421(&iParam0);
	memcpy(&uVar0, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_289("catkavol"), 4);
	iVar4 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, &iParam0, &uVar0, 4,203895E-45f, Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), Vector(5.0f, 5.0f, 5.0f));
	if (IS_VOLUME_VALID(&iVar4))
	{
		if (SQUAD_IS_VALID(&iParam0 + 80))
		{
			ATTACH_OBJECTS(StackVal, StackVal, GET_OBJECT_FROM_VOLUME(&iVar4), GET_OBJECT_FROM_ACTOR(&uParam1), Function_37(), Vector(0.0f, 0.0f, 0.0f), Vector(0.0f, 0.0f, 0.0f), 4294967295);
			bVar5 = false;
			while (bVar5 < (SQUAD_GET_SIZE(&iParam0 + 80) - 1))
			{
				uVar6 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0 + 80, bVar5);
				ADD_ACTOR_STAY_OUTSIDE_OF_VOLUME(&uVar6, &iVar4);
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

int Function_421(int iParam0) //Position: 0x12966 / 76134
{
	var uVar0;
	
	Function_411(&iParam0);
	if (!IS_OBJECTSET_VALID(&iParam0 + 136))
	{
		memcpy(&uVar0, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_289("navoidVols"), 4);
		*(&iParam0 + 136) = CREATE_OBJECTSET_IN_LAYOUT(&uVar0, &iParam0, 9, 1);
		if (!IS_OBJECTSET_VALID(&iParam0 + 136))
		{
			return 0;
		}
	}
	return 1;
}

int Function_422(int iParam0) //Position: 0x129B6 / 76214
{
	var uVar0;
	
	if (!IS_ACTORSET_VALID(&iParam0 + 64))
	{
		Function_411(&iParam0);
		memcpy(&uVar0, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_289("ntargetSet"), 4);
		*(&iParam0 + 64) = CREATE_ACTORSET_IN_LAYOUT(&iParam0, &uVar0, 0);
		if (!IS_ACTORSET_VALID(&iParam0 + 64))
		{
			return 0;
		}
	}
	return 1;
}

void Function_423(int iParam0, bool bParam1) //Position: 0x12A04 / 76292
{
	if (bParam1)
	{
		Function_58(&iParam0 + 128, 64);
	}
	else
	{
		Function_25(&iParam0 + 128, 64);
	}
	return;
}

int Function_424(struct<121> Param0) //Position: 0x12A26 / 76326
{
	if (iParam1 == 1)
	{
		Function_58(&Param0 + 128, 1);
	}
	else
	{
		Function_25(&Param0 + 128, 1);
	}
	if (&iParam2 > 976 || &iParam2 <= 1050)
	{
		Param0.f_116 = 4294967295;
	}
	else
	{
		Param0.f_116 = &iParam2;
	}
	Param0.f_120 = &uParam3;
	return 1;
}

void Function_425(int iParam0, int iParam1) //Position: 0x12A75 / 76405
{
	if (iParam1 == 1)
	{
		Function_58(&iParam0 + 128, 8);
	}
	else
	{
		Function_25(&iParam0 + 128, 8);
	}
	return;
}

void Function_426(struct<125> Param0) //Position: 0x12A98 / 76440
{
	if (iParam1 == 1)
	{
		Function_58(&Param0 + 128, 4);
	}
	else
	{
		Function_25(&Param0 + 128, 4);
	}
	Param0.f_124 = &iParam2;
	Function_58(&Param0 + 128, 128);
	return;
}

void Function_427(int iParam0, int iParam1) //Position: 0x12ACB / 76491
{
	if (&iParam1 == 0)
	{
		Function_58(&iParam0 + 128, 4096);
	}
	else
	{
		Function_25(&iParam0 + 128, 4096);
	}
	return;
}

void Function_428(int iParam0, int iParam1) //Position: 0x12AF1 / 76529
{
	if (&iParam1 == 0)
	{
		Function_58(&iParam0 + 128, 2048);
	}
	else
	{
		Function_25(&iParam0 + 128, 2048);
	}
	return;
}

void Function_429(int iParam0, int iParam1) //Position: 0x12B17 / 76567
{
	if (IS_ACTOR_VALID(&iParam1))
	{
		*(&iParam0 + 72) = &iParam1;
	}
	return;
}

int Function_430(int iParam0, int iParam1) //Position: 0x12B2F / 76591
{
	if (iParam1 == 1)
	{
		Function_58(&iParam0 + 128, 512);
	}
	else
	{
		Function_25(&iParam0 + 128, 512);
	}
	return 1;
}

void Function_431(struct<45> Param0) //Position: 0x12B55 / 76629
{
	if (fParam1 < fParam2)
	{
		LOG_ERROR("CREATEATTACK_SET_SPAWN_RANGE got a minRange > maxRange. Check");
		fParam1 = fParam2;
	}
	Param0.f_36 = fParam1;
	Param0.f_40 = fParam2;
	Param0.f_44 = &uParam3;
}

int Function_432(struct<273> Param0) //Position: 0x12BC2 / 76738
{
	int iVar0;
	
	iVar0 = Function_412(&Param0);
	if (Function_520(StackVal, Param1))
	{
		return 0;
	}
	if (Param0.f_272 != 1 && IS_OBJECT_VALID(&iVar0))
	{
		Function_410(&Param0, &iVar0);
	}
	*(&Param0 + 296) = Param1;
	*(&Param0 + 284) = Vector(0.0f, 0.0f, 0.0f);
	if (Param0.f_272 != 1 && IS_OBJECT_VALID(&iVar0))
	{
		Function_409(&Param0, &iVar0);
	}
	return 1;
}

int Function_433(struct<53> Param0) //Position: 0x12C2C / 76844
{
	if (iParam1 > 0 || iParam1 < 6)
	{
		return 0;
	}
	Param0.f_52 = iParam1;
	return 1;
}

int Function_434(int iParam0, char* cParam1) //Position: 0x12C48 / 76872
{
	char* cVar0[8];
	
	strcpy(&cVar0, &cParam1, 8);
	*(&iParam0 + 100) = { StackVal, cVar0 };
	return 1;
}

void Function_435(struct<277> Param0) //Position: 0x12C61 / 76897
{
	if (Param0.f_272 != 1 && IS_OBJECT_VALID(Function_412(&Param0)))
	{
		Function_410(&Param0, 0);
	}
	Param0.f_276 = iParam1;
	if (Param0.f_272 != 1 && IS_OBJECT_VALID(Function_412(&Param0)))
	{
		Function_409(&Param0, 0);
	}
	return;
}

void Function_436(struct<281> Param0) //Position: 0x12CA9 / 76969
{
	if (Param0.f_272 != 1 && IS_OBJECT_VALID(Function_412(&Param0)))
	{
		Function_410(&Param0, 0);
	}
	Param0.f_280 = iParam1;
	if (Param0.f_272 != 1 && IS_OBJECT_VALID(Function_412(&Param0)))
	{
		Function_409(&Param0, 0);
	}
	return;
}

int Function_437(struct<325> Param0) //Position: 0x12CF1 / 77041
{
	if (iParam1 >= 0 || iParam1 <= 7)
	{
		return 0;
	}
	Param0.f_320 = iParam1;
	Param0.f_324 = 1;
	return 1;
}

int Function_438(struct<97> Param0) //Position: 0x12D15 / 77077
{
	Param0.f_96 = iParam1;
	return 1;
}

int Function_439(var uParam0, float fParam1) //Position: 0x12D23 / 77091
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&fParam1))
	{
		return 0;
	}
	if (SQUAD_GET_SIZE(&fParam1) == 0)
	{
		return 0;
	}
	Function_422(&uParam0);
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&fParam1) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&fParam1, bVar0);
		Function_419(&uParam0, &uVar1);
		bVar0++;
	}
	return 1;
}

struct<8> Function_440(struct<45> Param0) //Position: 0x12D7A / 77178
{
	struct<2> Var0;
	
	if (&bParam14)
	{
		AMBIENT_RESET_FILTER(0);
	}
	if (IS_OBJECT_VALID(&Param0))
	{
		GET_OBJECT_POSITION(&Param0, &Var0);
		if (Global_47151[34])
		{
			PRINTVECTOR(Var0);
			PRINTNL();
		}
		AMBIENT_SET_SEARCH_CENTER_ACTOR(GET_ACTOR_FROM_OBJECT(&Param0));
	}
	else if (!Function_520(StackVal, *(&Param0 + 8)))
	{
		if (Global_47151[34])
		{
			PRINTVECTOR(*(&Param0 + 8));
			PRINTNL();
		}
		GET_OBJECT_POSITION(GET_PLAYER_ACTOR(0), &Var0);
		if (Global_47151[34])
		{
			PRINTVECTOR(Var0);
			PRINTNL();
		}
		AMBIENT_SET_SEARCH_CENTER(*(&Param0 + 8));
	}
	else
	{
		GET_OBJECT_POSITION(GET_PLAYER_ACTOR(0), &Var0);
		if (Global_47151[34])
		{
			PRINTVECTOR(Var0);
			PRINTNL();
		}
		AMBIENT_SET_SEARCH_CENTER_PLAYER();
	}
	Function_445(Param0.f_40);
	if (Param0.f_28 > 1.0f && Param0.f_32 > 1.0f)
	{
		Function_444();
	}
	else
	{
		AMBIENT_SET_DISTANCE_FILTER(Param0.f_28, Param0.f_32);
	}
	Function_443(Param0.f_24);
	Function_442(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param6);
	Function_441(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param6);
	if (Param6.f_28 == 0.0f)
	{
		Param0.f_44 = Param6.f_28;
	}
	if (Param0.f_44 == 0.0f)
	{
		UNK_0x0AC99007(Param0.f_44, (-1.0f * Param0.f_44));
		UNK_0x30C67D05(1);
	}
	AMBIENT_SET_RANDOM_SEARCH_ORDER(1);
	if (AMBIENT_GET_POINT(&Var0, 0))
	{
		return StackVal, Var0;
	}
	Function_361();
	return StackVal, Function_361();
}

void Function_441(struct<33> Param0) //Position: 0x12EAD / 77485
{
	if (StackVal && StackVal != 4294967295 != 0)
	{
		if (Param0.f_20 > 1.0f)
		{
			if (Global_47151[34])
			{
				PRINTSTRING("Material Match: ");
				PRINTINT(StackVal);
				PRINTNL();
			}
			AMBIENT_SET_MATERIAL_AT_POINT_FILTER(StackVal);
		}
		else
		{
			if (Global_47151[34])
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
		if (Global_47151[34])
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

void Function_442(struct<5> Param0, var uParam5, var uParam6, var uParam7) //Position: 0x12FD9 / 77785
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

void Function_443(bool bParam0) //Position: 0x1302A / 77866
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

void Function_444() //Position: 0x130DD / 78045
{
	float fVar0;
	bool bVar1;
	
	Function_368(&fVar0, &bVar1);
	AMBIENT_SET_DISTANCE_FILTER(fVar0, bVar1);
	return;
}

void Function_445(bool bParam0) //Position: 0x130F1 / 78065
{
	if (&bParam0 < 0,1f)
	{
		AMBIENT_SET_ELEVATION_FILTER((-1.0f * &bParam0), &bParam0);
	}
	else if (Global_6629)
	{
		AMBIENT_SET_ELEVATION_FILTER((-1.0f * 10.0f), 10.0f);
	}
	else
	{
		AMBIENT_SET_ELEVATION_FILTER((-1.0f * 10.0f), 10.0f);
	}
	return;
}

void Function_446(struct<45> Param0) //Position: 0x13138 / 78136
{
	Param0.f_24 = iParam1;
	*(&Param0 + 8) = Param2;
	Param0.f_20 = fParam4;
	Param0.f_28 = uParam5;
	Param0.f_32 = uParam6;
	Param0.f_36 = &iParam9;
	Param0.f_40 = &uParam7;
	Param0.f_44 = &iParam8;
}

void Function_447(struct<21> Param0) //Position: 0x1317E / 78206
{
	Param0 = iParam1;
	Param0.f_4 = fParam2;
	Param0.f_8 = iParam3;
	Param0.f_16 = iParam4;
	Param0.f_20 = 0.0f;
	Param0.f_12 = 4294967295;
}

int Function_448(int iParam0) //Position: 0x131AD / 78253
{
	bool bVar0;
	var uVar1;
	int iVar2;
	
	if (!SQUAD_IS_VALID(&iParam0))
	{
		return 0;
	}
	iVar2 = 0;
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(&iParam0) - 1))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			if (IS_ACTOR_ALIVE(&uVar1))
			{
				iVar2++;
			}
		}
		bVar0++;
	}
	return iVar2;
}

int Function_449(int iParam0, int iParam1) //Position: 0x13200 / 78336
{
	int iVar0;
	
	if (!IS_LAYOUTREF_VALID(&iParam0))
	{
		return 0;
	}
	iVar0 = CREATE_OBJECT_ITERATOR(&iParam0);
	if (!IS_ITERATOR_VALID(&iVar0))
	{
		return 0;
	}
	Function_302(&iVar0);
	ITERATE_ON_OBJECT_TYPE(&iVar0, 25);
	*(&iParam0 + 80) = &iParam1;
	if (!SQUAD_IS_VALID(&iParam0 + 80))
	{
		return 0;
	}
	DECOR_SET_BOOL(GET_OBJECT_FROM_SQUAD(&iParam0 + 80), "DECOR_ATTACKSQUAD", 1);
	DESTROY_ITERATOR(&iVar0);
	return 1;
}

bool Function_450(struct<1949> Param0) //Position: 0x13278 / 78456
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	struct<2> Var3;
	struct<2> Var5;
	var uVar7;
	char* cVar8[32];
	
	if (!IS_ACTOR_VALID(&Param0 + 1576))
	{
		return 0;
	}
	if (Param0.f_1944 == 0)
	{
		strcpy(&cVar8, "matkdef_travelerSquad", 32);
		cVar8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_289(&cVar8) };
		*(&Param0 + 1880) = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(&iParam1, &cVar8));
		if (Param0.f_1948 < 0)
		{
			Param0.f_1948 = (GET_NUM_AVAILABLE_SEATS(&Param0 + 1576) + GET_NUM_OCCUPIED_SEATS(&Param0 + 1576));
		}
	}
	else if (SQUAD_GET_SIZE(&Param0 + 1880) >= 0)
	{
		Param0.f_1948 = SQUAD_GET_SIZE(&Param0 + 1880);
	}
	else
	{
		LOG_ERROR("MATKDEF_CREATE_TRAVELERS: Using Custom Squad that is empty.(1)");
	}
	iVar2 = Function_452(&Param0);
	bVar1 = false;
	while (bVar1 < (Param0.f_1948 - 1))
	{
		strcpy(&cVar8, "matkdef_traveler", 32);
		cVar8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_289(&cVar8) };
		GET_OBJECT_RELATIVE_POSITION(StackVal, GET_OBJECT_FROM_ACTOR(&Param0 + 1576), Vector(0.0f, 0.0f, (10.0f + IntToFloat(bVar1))), &Var3);
		Function_361();
		Var5 = Function_361();
		if (iVar2 >= 0)
		{
			bVar0 = (*&Param0 + 1888)[(bVar1 % iVar2)];
		}
		else
		{
			bVar0 = Function_392(2, 1, 2, 4294967295, 0);
		}
		if (Param0.f_1944 == 0)
		{
			uVar7 = CREATE_ACTOR_IN_LAYOUT(&iParam1, &cVar8, bVar0, Var3, Var5);
		}
		else if (SQUAD_GET_SIZE(&Param0 + 1880) >= 0)
		{
			uVar7 = SQUAD_GET_ACTOR_BY_INDEX(&Param0 + 1880, bVar1);
		}
		else
		{
			LOG_ERROR("MATKDEF_CREATE_TRAVELERS: Using Custom Squad that is empty.(2)");
		}
		Function_451(GET_OBJECT_FROM_ACTOR(&uVar7));
		if (bVar1 == 0)
		{
			Function_291(&uVar7, 4);
		}
		else
		{
			Function_291(&uVar7, 7);
		}
		if (bVar1 <= (GET_NUM_AVAILABLE_SEATS(&Param0 + 1576) + GET_NUM_OCCUPIED_SEATS(&Param0 + 1576)))
		{
			SET_ACTOR_IN_VEHICLE(&uVar7, &Param0 + 1576, bVar1);
		}
		else
		{
			LOG_ERROR("No more seats for matkdef actor");
		}
		AI_SET_NAV_ACTOR_AVOIDANCE_MODE(&uVar7, 1);
		SET_ACTOR_UPDATE_PRIORITY(&uVar7, false);
		if (!IS_ACTOR_MALE(&uVar7))
		{
			DELETE_ALL_INVENTORY_FROM_ACTOR(&uVar7);
		}
		SQUAD_JOIN(&uVar7, &Param0 + 1880);
		bVar1++;
	}
	return 1;
}

void Function_451(bool bParam0) //Position: 0x13509 / 79113
{
	if (!IS_OBJECT_VALID(&bParam0))
	{
		return;
	}
	if (!DECOR_CHECK_EXIST(&bParam0, "nocrime"))
	{
		DECOR_SET_BOOL(&bParam0, "nocrime", 1);
	}
	return;
}

var Function_452(struct<1889> Param0) //Position: 0x13540 / 79168
{
	bool bVar0;
	int iVar1;
	
	while (iVar1 <= Param0.f_1888)
	{
		if (Function_402((*&Param0 + 1888)[iVar1]) && (*&Param0 + 1888)[iVar1] == 0)
		{
			iVar1++;
			bVar0++;
		}
		else
		{
			iVar1 = Param0.f_1888;
		}
	}
	return bVar0;
}

int Function_453(struct<1585> Param0) //Position: 0x1358A / 79242
{
	char* cVar0[32];
	
	strcpy(&cVar0, "ATTACKDEF_STAGECOACH", 32);
	cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_289(&cVar0) };
	*(&Param0 + 1576) = Function_454(StackVal, StackVal, &uParam5, &cVar0, Param0.f_1584, Function_392(64, 1, 0, 4294967295, 0), Param1, Param3, 1, 976, 976, 976, 4);
	if (!IS_ACTOR_VALID(&Param0 + 1576))
	{
		return 0;
	}
	Function_451(GET_OBJECT_FROM_ACTOR(&Param0 + 1576));
	return 1;
}

var Function_454(var uParam0, var uParam1, bool bParam2, int iParam3, struct<2> Param4, struct<2> Param6, var uParam8, int iParam9, int iParam10, int iParam11, int iParam12) //Position: 0x13609 / 79369
{
	var uVar0;
	int iVar1[6];
	bool bVar8;
	int iVar9;
	int iVar10;
	char* cVar11[16];
	var uVar15;
	bool bVar16;
	bool bVar17;
	int iVar18;
	
	uVar0 = CREATE_ACTOR_IN_LAYOUT(&uParam0, &uParam1, bParam2, Param4, Param6);
	if (!IS_ACTOR_VALID(&uVar0))
	{
		LOG_ERROR("Tried to create coach, but the coach was invalid");
		return &uVar0;
	}
	bVar8 = UNK_0x65C3D8F6();
	if (IS_ACTOR_DRAFT_VEHICLE(&uVar0))
	{
		iVar10 = GET_NUM_DRAFT_POSITIONS(&uVar0);
		if (&iParam12 > iVar10 && &iParam12 < 0)
		{
			iVar10 = &iParam12;
		}
		iVar9 = 0;
		while (iVar9 < (iVar10 - 1))
		{
			strcpy(&cVar11, "Draft", 16);
			straddi(&cVar11, iVar9, 16);
			uVar15 = "";
			if (Function_457(&(Global_46972[6]), 4, 23, 0) && uParam8)
			{
				bVar16 = Function_456(StackVal, &(Global_46972[6]), Param4, 4, 23, 0);
				if (Function_455(bVar16, &iVar1))
				{
					bVar16 = 976;
				}
				iVar1[iVar9] = bVar16;
				uVar15 = CREATE_ACTOR_IN_LAYOUT(&uVar0, &cVar11, bVar16, Param4, Param6);
			}
			bVar17 = 4294967295;
			if (!IS_ACTOR_VALID(&uVar15))
			{
				switch (iVar9)
				{
					case 0x00000000:
						bVar17 = iParam3;
						break;
					
					case 0x00000001:
						bVar17 = &iParam9;
						break;
					
					case 0x00000002:
						bVar17 = &iParam10;
						break;
					
					case 0x00000003:
						bVar17 = &iParam11;
						break;
					
					default:
						bVar17 = iParam3;
						break;
				}
				if ((bVar17 != 4294967295 || bVar17 > 976) || bVar17 < 1007)
				{
					LOG_ERROR("Malformed Coach horses");
					return &uVar0;
				}
				uVar15 = CREATE_ACTOR_IN_LAYOUT(&uVar0, &cVar11, bVar17, Param4, Param6);
			}
			if (IS_ACTOR_VALID(&uVar15))
			{
				ATTACH_DRAFT_TO_VEHICLE(&uVar15, &uVar0, iVar9, 1);
			}
			else
			{
				LOG_ERROR("Tried to create coach, but one of the horses couldn't be created");
				return &uVar0;
			}
			iVar9++;
		}
		if (!bVar8)
		{
			ACCESSORIZE_VEHICLE_HORSES(&uVar0, 5);
		}
	}
	if (bParam2 == 1197)
	{
		iVar18 = 2;
		while (iVar18 < (GET_NUM_AVAILABLE_SEATS(&uVar0) - 1))
		{
			ENABLE_VEHICLE_SEAT(&uVar0, iVar18, 0);
			iVar18++;
		}
	}
	return &uVar0;
}

bool Function_455(int iParam0, bool[] bParam1) //Position: 0x1385C / 79964
{
	int iVar0;
	
	if (iParam0 == 976)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= bParam1)
	{
		if (bParam1[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var Function_456(var uParam0, struct<2> Param1, var uParam3, var uParam4, var uParam5) //Position: 0x13890 / 80016
{
	return GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(&uParam0, &uParam3, &uParam4, &uParam5, 1,401298E-45f, Param1);
}

int Function_457(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x138AC / 80044
{
	if (!IS_POPSET_VALID(&uParam0))
	{
		return 0;
	}
	if (&bParam3)
	{
		return 1;
	}
	return IS_POPULATION_SET_READY(&uParam0, &iParam1, &iParam2);
}

bool Function_458(struct<2> Param0, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, float fParam7, bool bParam8) //Position: 0x138D8 / 80088
{
	struct<2> Var0;
	struct<2> Var2;
	var uVar4;
	var uVar5;
	vector3 vVar6;
	vector3 vVar9;
	int iVar12;
	bool bVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	
	Function_361();
	Var0 = Function_361();
	bVar15 = -1.0f;
	if (&bParam8)
	{
		uVar5 = START_CURVE_QUERY(&Global_43578, Param0, 2096, fParam2, fParam3, 20.0f, 0);
	}
	else
	{
		uVar5 = START_CURVE_QUERY(&Global_43578, Param0, 16, fParam2, fParam3, 2.0f, 0);
	}
	if (!IS_CURVE_QUERY_VALID(&uVar5))
	{
		UNK_0xDF93BD7C(&uVar5);
	}
	else if (!GET_NUM_POINTS_IN_CURVE_QUERY(&uVar5) < 0)
	{
		UNK_0xDF93BD7C(&uVar5);
	}
	else
	{
		iVar18 = GET_NUM_POINTS_IN_CURVE_QUERY(&uVar5);
		iVar16 = 0;
		while (iVar16 < (iVar18 - 1))
		{
			GET_POINT_FROM_CURVE_QUERY(&uVar5, iVar16, &vVar6);
			Function_282(&vVar6);
			Var2 = Function_282(&vVar6);
			if (bVar15 > 0.0f || bVar15 < VDIST(Param0, Var2))
			{
				vVar9 = { StackVal, StackVal, vVar6 };
				bVar15 = VDIST(Param0, Var2);
				iVar17 = bVar16;
				Var0 = Var2;
			}
			bVar16++;
		}
		uVar4 = GET_CURVE_FROM_POINT_INDEX_IN_CURVE_QUERY(&uVar5, iVar17);
		uParam4 = Var0;
		if (&fParam7 >= 0.0f)
		{
			fParam7 = 25.0f;
		}
		if (IS_OBJECT_VALID(&uVar4))
		{
			UNK_0x19D652F9(&uVar4, &fParam7, &vVar9, &iVar12);
			Function_282(&iVar12);
			bParam5 = Function_282(&iVar12);
			UNK_0x19D652F9(&uVar4, -&fParam7, &vVar9, &iVar12);
			Function_282(&iVar12);
			fParam6 = Function_282(&iVar12);
		}
		else
		{
			Function_361();
			fParam6 = Function_361();
			Function_361();
			bParam5 = Function_361();
		}
		UNK_0xDF93BD7C(&uVar5);
		return 1;
	}
	return 0;
}

struct<8> Function_459(int iParam0) //Position: 0x13A26 / 80422
{
	return StackVal, (&iParam0 + 8);
}

int Function_460(int iParam0, int iParam1) //Position: 0x13A33 / 80435
{
	if (IS_LAYOUTREF_VALID(&iParam0))
	{
		LOG_ERROR("CREATEATTACK_SET_LAYOUT found a previously set layout");
		return 0;
	}
	if (&iParam1 == "")
	{
		Function_411(&iParam0);
	}
	else if (IS_LAYOUTREF_VALID(&iParam1))
	{
		Function_58(&iParam0 + 128, 16);
	}
	else
	{
		LOG_ERROR("CREATEATTACK_SET_LAYOUT was passed an invalid layout");
		return 0;
	}
	iParam0 = &iParam1;
	return 1;
}

void Function_461(struct<1461> Param0) //Position: 0x13AEB / 80619
{
	char* cVar0[32];
	
	if (!IS_LAYOUTREF_VALID(&Param0 + 1368))
	{
		strcpy(&cVar0, "matkdef_layout", 32);
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_289(&cVar0) };
		(&Param0 + 1368) = CREATE_LAYOUT(&cVar0);
		if (!IS_LAYOUTREF_VALID(&Param0 + 1368))
		{
			LOG_ERROR("couldn't create internal matkdef layout");
		}
		Param0.f_1460 = 1;
	}
	return;
}

int Function_462(int iParam0) //Position: 0x13B6F / 80751
{
	if (!Function_469(&iParam0))
	{
		if (Function_14(Function_468(&iParam0)))
		{
			return 0;
		}
		Function_463(&iParam0, Function_464(0, 1, 2));
		if (!Function_14(Function_468(&iParam0)))
		{
			return 0;
		}
	}
	LOG_ERROR("Deeds are ignored, but Matkdef_CreatePendingDeed is being called");
	return 1;
}

void Function_463(struct<1093> Param0) //Position: 0x13BF2 / 80882
{
	if (Function_14(iParam1))
	{
		Param0.f_1092 = iParam1;
		Function_58(&Param0 + 1048, 32);
	}
	else
	{
		LOG_ERROR("PROCMISSION_SET_DEED received an invalid deed");
	}
	return;
}

int Function_464(bool bParam0, bool bParam1, bool bParam2) //Position: 0x13C49 / 80969
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_467(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_21684[iVar07] == iVar1)
		{
			return iVar0;
		}
		if (Global_21684[iVar07] != 0 && iVar0 < 0)
		{
			return Function_465(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_465(bParam0, bParam1, bParam2, 4294967295);
}

int Function_465(bool bParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x13CA7 / 81063
{
	var uVar0;
	
	if (!Function_305(bParam2))
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
	uVar0 = Function_467(bParam0, bParam1, bParam2);
	if (&iParam3 != 4294967295 || &iParam3 <= 275)
	{
		iParam3 = Function_466(uVar0);
	}
	if (&iParam3 == 4294967295)
	{
		return 4294967295;
	}
	if (&iParam3 > 275)
	{
		return 4294967295;
	}
	if (Global_21684[&iParam37] == 0)
	{
		PRINTSTRING(GET_SHORT_SCRIPT_NAME());
		PRINTSTRING(": Returning new deed ");
		PRINTINT(&iParam3);
		PRINTSTRING(" ");
		PRINTINT(bParam0);
		PRINTSTRING(" ");
		PRINTINT(bParam1);
		PRINTSTRING(" ");
		PRINTINT(bParam2);
		PRINTNL();
		Global_25536[&iParam3] = 0;
		Global_21684[&iParam37].f_4 = 0;
		Global_21684[&iParam37].f_8 = 0;
		Global_21684[&iParam37].f_12 = 0;
		Global_21684[&iParam37].f_16 = 0;
		Global_21684[&iParam37] = uVar0;
	}
	else
	{
		PRINTSTRING(GET_SHORT_SCRIPT_NAME());
		PRINTSTRING(": Returning existing deed ");
		PRINTINT(&iParam3);
		PRINTSTRING(" ");
		PRINTINT(bParam0);
		PRINTSTRING(" ");
		PRINTINT(bParam1);
		PRINTSTRING(" ");
		PRINTINT(bParam2);
		PRINTNL();
	}
	return &iParam3;
}

var Function_466(int iParam0) //Position: 0x13E0B / 81419
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_21684[iVar07] == iParam0)
		{
			return iVar0;
		}
		if (Global_21684[iVar07] != 0 && iVar0 < 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

var Function_467(int iParam0, int iParam1, int iParam2) //Position: 0x13E49 / 81481
{
	return ((iParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

int Function_468(struct<1093> Param0) //Position: 0x13E69 / 81513
{
	return Param0.f_1092;
}

bool Function_469(struct<1049> Param0) //Position: 0x13E75 / 81525
{
	if (Function_86(Param0.f_1048, 32))
	{
		return 1;
	}
	return 0;
}

bool Function_470(struct<1465> Param0) //Position: 0x13E8F / 81551
{
	if (!Function_471(64, 0, 23, 0))
	{
		return 0;
	}
	Param0.f_1464 = Param0.f_1464;
	return 1;
}

bool Function_471(int iParam0, var uParam1, var uParam2, bool bParam3) //Position: 0x13EB1 / 81585
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0x00000001:
			iVar0 = Function_457(&(Global_46972[0]), &uParam1, &uParam2, &bParam3);
			break;
		
		case 0x00000002:
			iVar0 = Function_457(&(Global_46972[1]), &uParam1, &uParam2, &bParam3);
			break;
		
		case 0x00000004:
			iVar0 = Function_457(&(Global_46972[2]), &uParam1, &uParam2, &bParam3);
			break;
		
		case 0x00000008:
			iVar0 = Function_457(&(Global_46972[3]), &uParam1, &uParam2, &bParam3);
			break;
		
		case 0x00000010:
			iVar0 = Function_457(&(Global_46972[4]), &uParam1, &uParam2, &bParam3);
			break;
		
		case 0x00000020:
			iVar0 = Function_457(&(Global_46972[5]), &uParam1, &uParam2, &bParam3);
			break;
		
		case 0x00000040:
			iVar0 = Function_457(&(Global_46972[6]), &uParam1, &uParam2, &bParam3);
			break;
		
		case 0x00000080:
			iVar0 = Function_457(&(Global_46972[7]), &uParam1, &uParam2, &bParam3);
			break;
		
		case 0x00000100:
			iVar0 = Function_457(&(Global_46972[8]), &uParam1, &uParam2, &bParam3);
			break;
		
		case 0x00000200:
			iVar0 = Function_457(&(Global_46972[9]), &uParam1, &uParam2, &bParam3);
			break;
		
		case 0x00000400:
			iVar0 = Function_457(&(Global_46972[10]), &uParam1, &uParam2, &bParam3);
			break;
		
		case 0x00000800:
			iVar0 = Function_457(&(Global_46972[11]), &uParam1, &uParam2, &bParam3);
			break;
		
		case 0x00001000:
			iVar0 = Function_457(&(Global_46972[12]), &uParam1, &uParam2, &bParam3);
			break;
		
		case 0x00002000:
			iVar0 = Function_457(&(Global_46972[13]), &uParam1, &uParam2, &bParam3);
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

int Function_472(var uParam0, struct<2> Param1) //Position: 0x140B3 / 82099
{
	if (Function_520(StackVal, Param1))
	{
		LOG_ERROR("Invalid StartPos");
		return 0;
	}
	Function_311(StackVal, &uParam0, Param1);
	return 1;
}

bool Function_473(struct<65> Param0) //Position: 0x140E6 / 82150
{
	struct<8> Var0;
	var uVar8;
	var uVar9;
	
	if (Global_6612 && Param0.f_40)
	{
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_289(GET_SCRIPT_NAME()) };
		uVar8 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, StackVal, &Global_39615, &Var0, 4,203895E-45f, Vector(*(&Param0 + 16), Function_501(0.0f, &Global_54076, *(&Param0 + 16)), 0.0f), Vector(Param0.f_60, 20.0f, Param0.f_60));
		DECOR_SET_INT(&uVar8, "script", GET_THIS_SCRIPT_ID());
		if (Param0.f_64 != 4294967295)
		{
			DECOR_SET_INT(StackVal, &uVar8, "category");
			Function_499(&uVar8, Param0.f_40);
		}
		else
		{
			LOG_ERROR("Trying to set volume restriction on a script that has an invalid ID");
		}
		*(&Param0 + 16) = Global_54078;
		return 1;
	}
	uParam3 = 0;
	if (!Function_476(&Param0))
	{
		if (Param0.f_40 == 1)
		{
			if (uParam2 == 0)
			{
				Function_220("Still scanning for the proper terrain to run this event.  Move the player around to find a good spawn location.", -1.0f, 1, 2, 1, 0);
			}
		}
		else if (uParam2 >= 20)
		{
			uParam3 = 1;
			Global_39619++;
		}
		uParam2++;
		uParam1 = 1000;
		*(&Param0 + 16) = Vector(0.0f, 0.0f, 0.0f);
		return 0;
	}
	if (Param0.f_40)
	{
		HUD_CLEAR_SMALL_TEXT_QUEUE();
		Global_6642 = 0;
		Function_220("THE EVENT HAS SPAWNED!!!  The event is marked with a CHECKER blip on your map", 5.0f, 1, 2, 1, 0);
	}
	if (&bParam4)
	{
		if (!Function_474(Param0.f_64, 0, 1, 0, 0))
		{
			uParam3 = 1;
			LOG_ERROR("SET_BEAT_NEXT_SPAWN_TIME Failed, shutting down event");
			return 0;
		}
		if (Param0.f_60 >= 0.0f)
		{
			LOG_ERROR("SET_BEAT_NEXT_SPAWN_TIME Failed: Volume restriction size not set");
			return 0;
		}
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_289("restrictVol") };
		uVar9 = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, StackVal, StackVal, &Global_39615, &Var0, 4,203895E-45f, Vector(*(&Param0 + 16), Function_501(0.0f, &Global_54076, *(&Param0 + 16)), 0.0f), Vector(Param0.f_60, 20.0f, Param0.f_60));
		DECOR_SET_INT(&uVar9, "script", GET_THIS_SCRIPT_ID());
		if (Param0.f_64 != 4294967295)
		{
			DECOR_SET_INT(StackVal, &uVar9, "category");
			Function_499(&uVar9, Param0.f_40);
		}
		else
		{
			LOG_ERROR("Trying to set volume restriction on a script that has an invalid ID");
		}
	}
	return 1;
}

bool Function_474(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x144A4 / 83108
{
	int iVar0;
	bool bVar1;
	
	if (Global_47151[16])
	{
		PRINTSTRING(GET_ASSET_NAME(&Global_27462[iParam052] + 160, 4));
	}
	iParam1 = &iParam1;
	if (&bParam4)
	{
		HUD_CLEAR_OBJECTIVE_QUEUE();
		Global_6642 = 0;
		Function_220("THE EVENT HAS SPAWNED!!!  The event is marked with a CHECKER blip on your map", 10.0f, 1, 2, 1, 0);
		if (StackVal & 128 == 128)
		{
			Global_27462[iParam052].f_184 = 0;
		}
		if (StackVal & 64 == 64)
		{
			if (Global_6608)
			{
				if (IS_SCRIPT_VALID(Global_10986) && Global_10986 == GET_THIS_SCRIPT_ID())
				{
					return 0;
				}
			}
			Global_6608 = 1;
			Global_10986 = GET_THIS_SCRIPT_ID();
		}
		return 1;
	}
	if (iParam0 != 4294967295)
	{
		iVar0 = GET_TIME_OF_DAY();
		bVar1 = GET_TOTAL_MINUTES(&Global_27462[iParam052] + 368);
		if (Global_47151[16])
		{
			PRINTSTRING("Current Time of day:");
			Function_475(&iVar0);
			PRINTNL();
			PRINTSTRING("timebtwnEvents (in minutes):");
			PRINTINT(bVar1);
			PRINTNL();
			PRINTSTRING("Formed time of day:");
			Function_475(&iVar0);
		}
		if (!&bParam3)
		{
			ADD_TIME(&iVar0, 0, 0, bVar1, 0);
		}
		else
		{
			ADD_TIME(&iVar0, 0, 0, 10, 0);
		}
		if (Global_47151[16])
		{
			PRINTSTRING("Formed time of day:");
			Function_475(&iVar0);
		}
		*(&Global_27462[iParam052] + 376) = &iVar0;
		Global_26652[iParam04] = &iVar0;
		if (&bParam2)
		{
			Global_26652[iParam04].f_8 = StackVal + 1;
			if (StackVal & 128 == 128)
			{
				Global_27462[iParam052].f_184 = 0;
			}
			if (StackVal & 64 == 64)
			{
				if (Global_6608)
				{
					if (IS_SCRIPT_VALID(Global_10986) && Global_10986 == GET_THIS_SCRIPT_ID())
					{
						return 0;
					}
				}
				Global_6608 = 1;
				Global_10986 = GET_THIS_SCRIPT_ID();
			}
		}
		return 1;
	}
	LOG_ERROR("Invalid beat index");
	return 0;
}

void Function_475(int iParam0) //Position: 0x14710 / 83728
{
	PRINTSTRING("Day ");
	PRINTINT(GET_DAY(&iParam0));
	PRINTSTRING(": ");
	PRINTINT(GET_HOUR(&iParam0));
	PRINTSTRING(":");
	PRINTINT(GET_MINUTE(&iParam0));
	PRINTSTRING(":");
	PRINTINT(GET_SECOND(&iParam0));
	return;
}

bool Function_476(struct<73> Param0) //Position: 0x1475A / 83802
{
	var uVar0;
	var uVar1;
	int iVar2;
	struct<2> Var3;
	var uVar5;
	struct<2> Var7;
	float fVar9;
	float fVar10;
	bool bVar11;
	struct<17> Var12;
	
	GET_POSITION(GET_PLAYER_ACTOR(0), &Var7);
	switch (Param0.f_72)
	{
		case 0x00000005:
			if (!IS_ITERATOR_VALID(&Param0 + 8))
			{
				if (IS_LAYOUTREF_VALID(&Global_46715))
				{
					*(&Param0 + 8) = CREATE_OBJECT_ITERATOR(&Global_46715);
				}
				else
				{
					return 0;
				}
			}
			Function_302(&Param0 + 8);
			switch ((&Param0 + 72 + 36)->f_28)
			{
				case 0x00000000:
					ITERATE_IN_LAYOUT(&Param0 + 8, &Global_46715);
					break;
				
				case 0x00000001:
					ITERATE_IN_LAYOUT(&Param0 + 8, FIND_NAMED_LAYOUT("regions_layout"));
					break;
			}
			if ((&Param0 + 72 + 36)->f_16 < 0.0f)
			{
				Var3 = Vector(0.0f, 0.0f, Function_367(1));
				ROTATE_VECTOR_XZ(&Var3, GET_HEADING(GET_PLAYER_ACTOR(0)), 0);
				Var3 = Vector(StackVal, StackVal, StackVal) + Vector(Var7, Var3, StackVal);
				ITERATE_IN_SPHERE(&Param0 + 8, Var3, Function_367(1));
			}
			if (!STRINGS_ARE_EQUAL(&Param0 + 72 + 36, ""))
			{
				ITERATE_ON_PARTIAL_NAME(&Param0 + 8, &Param0 + 72 + 36);
			}
			if (!4294967295 != (&Param0 + 72 + 36)->f_20)
			{
				ITERATE_ON_OBJECT_TYPE(&Param0 + 8, (&Param0 + 72 + 36)->f_20);
			}
			if (GET_NUM_ITERATOR_MATCHES(&Param0 + 8) >= 0)
			{
				if (StackVal & 512 == 0 || Param0.f_44 != 1)
				{
					if ((&Param0 + 72 + 36)->f_24 == 0)
					{
						uVar0 = Function_498(StackVal, &Param0 + 8, Var7, 0,01f);
					}
					else
					{
						uVar0 = Function_497(StackVal, &Param0 + 8, Var7, 0,1f, "locflag", (&Param0 + 72 + 36)->f_24);
					}
				}
				else if ((&Param0 + 72 + 36)->f_24 == 0)
				{
					uVar0 = Function_495(StackVal, &Param0 + 8, Var7, Function_496());
				}
				else
				{
					uVar0 = Function_494(StackVal, &Param0 + 8, Var7, Function_496(), "locflag", (&Param0 + 72 + 36)->f_24);
				}
				if (IS_OBJECT_VALID(&uVar0))
				{
					GET_OBJECT_POSITION(&uVar0, &Param0 + 16);
					GET_OBJECT_ORIENTATION(&uVar0, &Param0 + 28);
					Param0.f_56 = &uVar0;
					DESTROY_ITERATOR(&Param0 + 8);
				}
				else
				{
					DESTROY_ITERATOR(&Param0 + 8);
					return 0;
				}
			}
			DESTROY_ITERATOR(&Param0 + 8);
			return 0;
			break;
		
		case 0x00000006:
			if (!IS_ITERATOR_VALID(&Param0 + 8))
			{
				*(&Param0 + 8) = CREATE_OBJECT_ITERATOR(FIND_NAMED_LAYOUT("regions_layout"));
			}
			Function_302(&Param0 + 8);
			ITERATE_IN_LAYOUT(&Param0 + 8, FIND_NAMED_LAYOUT("regions_layout"));
			fVar10 = 130.0f;
			fVar9 = 190.0f;
			GET_POSITION(GET_PLAYER_ACTOR(0), &Var3);
			ITERATE_IN_SPHERE(StackVal, &Param0 + 8, Var3);
			uVar1 = START_OBJECT_ITERATOR(&Param0 + 8);
			while (IS_OBJECT_VALID(&uVar1) && !IS_OBJECT_VALID(&uVar0))
			{
				if (DECOR_CHECK_EXIST(&uVar1, "regid"))
				{
					bVar11 = DECOR_GET_INT(&uVar1, "regid");
					if (Function_66(bVar11))
					{
						if (StackVal == (&Param0 + 72)->f_68)
						{
							if ((StackVal && Global_43791[bVar11]) >= 0)
							{
								GET_OBJECT_POSITION(&uVar1, &Var3);
								if (VDIST(Var7, Var3) < fVar10 && VDIST(Var7, Var3) > Function_367(1))
								{
									uVar0 = &uVar1;
								}
							}
						}
					}
				}
				uVar1 = OBJECT_ITERATOR_NEXT(&Param0 + 8);
			}
			if (IS_OBJECT_VALID(&uVar0))
			{
				GET_OBJECT_POSITION(&uVar0, &Param0 + 16);
				Function_263(&Param0 + 16, 99.0f, &Param0 + 16, 10);
				GET_OBJECT_ORIENTATION(&uVar0, &Param0 + 28);
				Param0.f_56 = DECOR_GET_INT(&uVar0, "regid");
			}
			else
			{
				DESTROY_ITERATOR(&Param0 + 8);
				return 0;
			}
			break;
		
		case 0x00000002:
		case 0x00000001:
			if (StackVal && (((!Global_6629 && Global_6631) && ARE_CURVES_IN_RANGE(48, Var7, 100.0f)) && 8) != 8)
			{
				uVar5 = Vector(0.0f, 0.0f, -10.0f);
				ROTATE_VECTOR_XZ(&uVar5, GET_HEADING(GET_PLAYER_ACTOR(0)), 0);
				Function_493(&Var7, &uVar5);
				Var3 = Function_493(&Var7, &uVar5);
				if (!Function_520(StackVal, Var3))
				{
					PRINTSTRING("Player Pos: ");
					PRINTVECTOR(Var7);
					PRINTNL();
					Function_368(&fVar10, &fVar9);
					if (VDIST(Var3, Var7) < ((fVar10 + ((fVar9 - fVar10) / 2.0f)) * 0,8f))
					{
						iVar2 = Function_491(StackVal, &Param0, Var3);
					}
				}
			}
			else
			{
				iVar2 = Function_490(&Param0);
			}
			if (iVar2 == 1)
			{
				if ((&Param0 + 72)->f_156 == 4)
				{
					if (IS_OBJECT_VALID(StackVal))
					{
						if (GET_OBJECT_TYPE(StackVal) == 9)
						{
							if (!IS_POINT_IN_VOLUME(StackVal, *(&Param0 + 16)))
							{
								return 0;
							}
						}
					}
				}
				if ((&Param0 + 72)->f_156 == 5)
				{
				}
				if (Param0.f_68 == 2)
				{
					if (!Function_489(StackVal, *(&Param0 + 16)))
					{
						return 0;
					}
				}
				if (Param0.f_68 == 1)
				{
					if (!Function_488(StackVal, *(&Param0 + 16)))
					{
						return 0;
					}
				}
				if (Function_86(StackVal, 131072))
				{
					if (StackVal || Function_487(Function_487(StackVal, *(&Param0 + 16)), Global_54078))
					{
						return 0;
					}
				}
				if (StackVal & 1024 == 1024)
				{
					if (Function_486(StackVal, *(&Param0 + 16)))
					{
						return 0;
					}
				}
				if (!Function_483(&Param0 + 16, &Param0 + 60, 0, Param0.f_40))
				{
					return 0;
				}
			}
			return 0;
			break;
		
		case 0x00000003:
			if (StackVal)
			{
				fVar10 = 120.0f;
				fVar9 = 150.0f;
				Var3 = Vector(0.0f, 0.0f, ((fVar10 + fVar9) * -0,5f));
				ROTATE_VECTOR_XZ(&Var3, GET_HEADING(GET_PLAYER_ACTOR(0)), 0);
				Var3 = Vector(StackVal, StackVal, StackVal) + Vector(Var7, Var3, StackVal);
				uVar17 = START_CURVE_QUERY(&Global_43578, Var3, Function_261((&Param0 + 72)->f_148, 0), 0.0f, 20.0f, 5.0f, 0);
			}
			else
			{
				uVar17 = START_CURVE_QUERY(&Global_43578, Var7, Function_261((&Param0 + 72)->f_148, 0), 120.0f, 150.0f, 5.0f, 0);
			}
			if (GET_NUM_POINTS_IN_CURVE_QUERY(&uVar17) >= 0)
			{
				iVar15 = RAND_INT_RANGE(0, (GET_NUM_POINTS_IN_CURVE_QUERY(&uVar17) - 1));
				GET_POINT_FROM_CURVE_QUERY(&uVar17, iVar15, &Var12);
				Function_282(&Var12);
				*(&Param0 + 16) = Function_282(&Var12);
				Param0.f_28 = Var12.f_12;
				(&Param0 + 28)->f_4 = Var12.f_16;
				Param0.f_56 = GET_CURVE_FROM_POINT_INDEX_IN_CURVE_QUERY(&uVar17, bVar15);
				UNK_0xDF93BD7C(&uVar17);
			}
			else
			{
				UNK_0xDF93BD7C(&uVar17);
				return 0;
			}
			if (Param0.f_68 == 2)
			{
				if (!Function_489(StackVal, *(&Param0 + 16)))
				{
					return 0;
				}
			}
			if (Param0.f_68 == 1)
			{
				if (!Function_488(StackVal, *(&Param0 + 16)))
				{
					return 0;
				}
			}
			if (Param0.f_68 == 0)
			{
				if (!(StackVal || Function_489(Function_488(StackVal, *(&Param0 + 16)), *(&Param0 + 16))))
				{
					return 0;
				}
			}
			if (Function_86(StackVal, 131072))
			{
				if (StackVal || Function_487(Function_487(StackVal, *(&Param0 + 16)), Global_54078))
				{
					return 0;
				}
			}
			if (StackVal && !Function_483(&Param0 + 16, &Param0 + 60, 0, Param0.f_40) == 262144)
			{
				return 0;
			}
			break;
		
		case 0x00000004:
			if (!Function_481((&Param0 + 72)->f_148) < 0)
			{
				return 0;
			}
			break;
		
		case 0x00000007:
			switch ((&Param0 + 72)->f_156)
			{
				case 0x00000001:
					iVar18 = Function_478(StackVal, Global_43787, Global_43788, Global_43789, 1);
					if (IS_PERS_CHAR_VALID(&iVar18))
					{
						if (IS_PERS_CHAR_ALIVE(&iVar18))
						{
							return 0;
						}
					}
					break;
				
				case 0x00000002:
					iVar16 = 0;
					while (StackVal <= (StackVal - iVar16) + 1)
					{
						iVar18 = Function_478(StackVal, Global_43787, Global_43788, (Global_43789 + iVar16), 1);
						if (IS_PERS_CHAR_VALID(&iVar18))
						{
							if (IS_PERS_CHAR_ALIVE(&iVar18))
							{
								iVar19++;
							}
						}
						iVar16++;
					}
					if (iVar19 >= 0)
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
					Param0.f_56 = StackVal;
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
	if (Function_477(StackVal, *(&Param0 + 16)))
	{
		return 0;
	}
	if (!STREAMING_ARE_BOUNDS_LOADED(*(&Param0 + 16), 10.0f))
	{
		return 0;
	}
	return 1;
}

bool Function_477(struct<2> Param0) //Position: 0x15021 / 86049
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 <= GET_OBJECTSET_SIZE(&Global_39246))
	{
		if (IS_POINT_IN_VOLUME(Param0, GET_VOLUME_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, &Global_39246))))
		{
			return 1;
		}
		bVar0++;
	}
	return 0;
}

int Function_478(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x15058 / 86104
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
	if (!&bParam4)
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
								return Function_479(&Global_11014, &Global_12796, bParam3);
								break;
							
							case 0x00000001:
								return Function_479(&Global_11146, &Global_12992, bParam3);
								break;
							
							case 0x00000002:
								return Function_479(&Global_11120, &Global_12954, bParam3);
								break;
							
							default:
								return Function_479(&Global_11200, &Global_13072, bParam3);
								break;
						}
						break;
					
					case 0x00000001:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_479(&Global_11420, &Global_13398, bParam3);
								break;
							
							case 0x00000001:
								return Function_479(&Global_11222, &Global_13104, bParam3);
								break;
							
							case 0x00000003:
								return Function_479(&Global_11284, &Global_13196, bParam3);
								break;
							
							case 0x00000002:
								return Function_479(&Global_11398, &Global_13366, bParam3);
								break;
							
							case 0x00000004:
								return Function_479(&Global_11492, &Global_13504, bParam3);
								break;
							
							default:
								return Function_479(&Global_11482, &Global_13490, bParam3);
								break;
						}
						break;
					
					case 0x00000002:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_479(&Global_11544, &Global_13580, bParam3);
								break;
							
							case 0x00000001:
								return Function_479(&Global_11646, &Global_13732, bParam3);
								break;
							
							case 0x00000002:
								return Function_479(&Global_11704, &Global_13818, bParam3);
								break;
							
							default:
								return Function_479(&Global_11518, &Global_13542, bParam3);
								break;
						}
						break;
					
					case 0x00000003:
						switch (bVar1)
						{
							case 0x00000001:
								return Function_479(&Global_11752, &Global_13888, bParam3);
								break;
							
							default:
								return Function_479(&Global_11826, &Global_13998, bParam3);
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
								return Function_479(&Global_11836, &Global_14012, bParam3);
								break;
							
							case 0x00000001:
								return Function_479(&Global_11946, &Global_14176, bParam3);
								break;
							
							case 0x00000002:
								return Function_479(&Global_11988, &Global_14238, bParam3);
								break;
							
							default:
								return Function_479(&Global_12038, &Global_14312, bParam3);
								break;
						}
						break;
					
					case 0x00000002:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_479(&Global_12048, &Global_14326, bParam3);
								break;
							
							default:
								return Function_479(&Global_12274, &Global_14662, bParam3);
								break;
						}
						break;
					
					case 0x00000001:
						switch (bVar1)
						{
							case 0x00000002:
								return Function_479(&Global_12284, &Global_14676, bParam3);
								break;
							
							case 0x00000001:
								return Function_479(&Global_12342, &Global_14762, bParam3);
								break;
							
							case 0x00000003:
								return Function_479(&Global_12392, &Global_14836, bParam3);
								break;
							
							default:
								return Function_479(&Global_12472, &Global_14954, bParam3);
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
	else if (bVar1 == Global_46760[0])
	{
		return Function_479(&Global_11014, &Global_12796, bParam3);
	}
	if (bVar1 == Global_46760[1])
	{
		return Function_479(&Global_11146, &Global_12992, bParam3);
	}
	if (bVar1 == Global_46760[2])
	{
		return Function_479(&Global_11120, &Global_12954, bParam3);
	}
	if (bVar1 == Global_46796[0])
	{
		return Function_479(&Global_11420, &Global_13398, bParam3);
	}
	if (bVar1 == Global_46796[1])
	{
		return Function_479(&Global_11222, &Global_13104, bParam3);
	}
	if (bVar1 == Global_46796[3])
	{
		return Function_479(&Global_11284, &Global_13196, bParam3);
	}
	if (bVar1 == Global_46796[2])
	{
		return Function_479(&Global_11398, &Global_13366, bParam3);
	}
	if (bVar1 == Global_46796[4])
	{
		return Function_479(&Global_11492, &Global_13504, bParam3);
	}
	if (bVar1 == Global_46816[0])
	{
		return Function_479(&Global_11544, &Global_13580, bParam3);
	}
	if (bVar1 == Global_46816[1])
	{
		return Function_479(&Global_11646, &Global_13732, bParam3);
	}
	if (bVar1 == Global_46816[2])
	{
		return Function_479(&Global_11704, &Global_13818, bParam3);
	}
	if (bVar1 == Global_46838[1])
	{
		return Function_479(&Global_11752, &Global_13888, bParam3);
	}
	if (bVar1 == Global_46850[0])
	{
		return Function_479(&Global_11836, &Global_14012, bParam3);
	}
	if (bVar1 == Global_46850[1])
	{
		return Function_479(&Global_11946, &Global_14176, bParam3);
	}
	if (bVar1 == Global_46850[2])
	{
		return Function_479(&Global_11988, &Global_14238, bParam3);
	}
	if (bVar1 == Global_46866[0])
	{
		return Function_479(&Global_12048, &Global_14326, bParam3);
	}
	if (bVar1 == Global_46894[2])
	{
		return Function_479(&Global_12284, &Global_14676, bParam3);
	}
	if (bVar1 == Global_46894[1])
	{
		return Function_479(&Global_12342, &Global_14762, bParam3);
	}
	if (bVar1 == Global_46894[3])
	{
		return Function_479(&Global_12392, &Global_14836, bParam3);
	}
	if (bVar1 == Global_46736[0])
	{
		return Function_479(&Global_11200, &Global_13072, bParam3);
	}
	if (bVar1 == Global_46736[1])
	{
		return Function_479(&Global_11482, &Global_13490, bParam3);
	}
	if (bVar1 == Global_46736[2])
	{
		return Function_479(&Global_11518, &Global_13542, bParam3);
	}
	if (bVar1 == Global_46736[3])
	{
		return Function_479(&Global_11826, &Global_13998, bParam3);
	}
	if (bVar1 == Global_46746[0])
	{
		return Function_479(&Global_12038, &Global_14312, bParam3);
	}
	if (bVar1 == Global_46746[2])
	{
		return Function_479(&Global_12274, &Global_14662, bParam3);
	}
	if (bVar1 == Global_46746[1])
	{
		return Function_479(&Global_12472, &Global_14954, bParam3);
	}
	return "";
}

var Function_479(struct<2>[] Param0, vector3[] vParam1, bool bParam2) //Position: 0x1566E / 87662
{
	int iVar0;
	
	iVar0 = bParam2;
	if (iVar0 <= Param0 || iVar0 > 0)
	{
		return "";
	}
	if (!Function_480(&(Param0[iVar02]), 2))
	{
		return "";
	}
	if (!IS_PERS_CHAR_VALID(&vParam1[iVar03] + 16))
	{
		return "";
	}
	ACTIVATE_ACTOR_FOR_PERS_CHAR(&vParam1[iVar03] + 16);
	return &vParam1[iVar03] + 16;
}

bool Function_480(var uParam0, int iParam1) //Position: 0x156C8 / 87752
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_481(int iParam0) //Position: 0x156E5 / 87781
{
	int iVar0;
	var uVar1;
	int iVar2;
	
	iVar0 = 0;
	uVar1 = CREATE_OBJECT_ITERATOR(&Global_43578);
	ITERATE_ON_OBJECT_TYPE(&uVar1, 25);
	iVar2 = START_OBJECT_ITERATOR(&uVar1);
	if (&iParam0 == 0)
	{
		iVar0 = GET_NUM_ITERATOR_MATCHES(&uVar1);
	}
	else
	{
		while (IS_OBJECT_VALID(&iVar2))
		{
			if (Function_482(GET_SQUAD_FROM_OBJECT(&iVar2)) == &iParam0)
			{
				iVar0++;
			}
			iVar2 = OBJECT_ITERATOR_NEXT(&uVar1);
		}
	}
	DESTROY_ITERATOR(&uVar1);
	return iVar0;
}

int Function_482(int iParam0) //Position: 0x1574D / 87885
{
	var uVar0;
	
	if (!SQUAD_IS_VALID(&iParam0))
	{
		return 4294967295;
	}
	uVar0 = Function_265(&iParam0);
	if (!IS_ACTOR_VALID(&uVar0))
	{
		return 4294967295;
	}
	if (IS_ACTOR_RIDING_VEHICLE(&uVar0))
	{
		return 2;
	}
	if (IS_ACTOR_RIDING(&uVar0))
	{
		return 1;
	}
	return 4294967295;
}

bool Function_483(struct<2> Param0, int iParam2, bool bParam3) //Position: 0x1578B / 87947
{
	var uVar0;
	int iVar2;
	bool bVar3;
	float fVar4;
	bool bVar5;
	
	if (&bParam3)
	{
		return 1;
	}
	bVar3 = false;
	Function_484(4294967295);
	iVar2 = 0;
	while (iVar2 <= 25)
	{
		if (IS_VOLUME_VALID(&Global_39621[iVar25] + 16))
		{
			bVar5 = DECOR_GET_INT(&Global_39621[iVar25] + 16, "category");
			if (&iParam2 != 0)
			{
				if (bVar5 != &iParam2 && &iParam2 != 256)
				{
					bVar3 = true;
				}
			}
			GET_VOLUME_CENTER(&Global_39621[iVar25] + 16, &uVar0);
			if (&iParam2 != 262144)
			{
				if (IS_POINT_IN_VOLUME(Param0, &Global_39621[iVar25] + 16))
				{
					return 0;
				}
			}
			fVar4 = fParam1;
			if (bVar3)
			{
				fVar4 = (fVar4 + 170.0f);
			}
			if (Global_6629 && bVar5 != 512)
			{
			}
			else if (Function_209(&Param0, &uVar0) > fVar4)
			{
				return 0;
			}
		}
		iVar2++;
	}
	return 1;
}

int Function_484(int iParam0) //Position: 0x15867 / 88167
{
	int iVar0;
	struct<2> Var1;
	
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(&Global_39621[iVar05] + 16))
		{
			if (DECOR_CHECK_EXIST(&Global_39621[iVar05] + 16, "script"))
			{
				if (!IS_SCRIPT_VALID(DECOR_GET_INT(&Global_39621[iVar05] + 16, "script")))
				{
					GET_VOLUME_CENTER(&Global_39621[iVar05] + 16, &Var1);
					if (IS_BLIP_VALID(&Global_39621[iVar05] + 8))
					{
						REMOVE_BLIP(&Global_39621[iVar05] + 8);
					}
					if (!IS_ACTOR_VALID(&Global_54076))
					{
						Function_485(iVar0);
					}
					else if (Global_6629)
					{
						if (Function_309(StackVal, &Global_54076, Var1) < 25.0f)
						{
							Function_485(iVar0);
						}
					}
					else if (Function_309(StackVal, &Global_54076, Var1) < 55.0f)
					{
						Function_485(iVar0);
					}
				}
				else if (DECOR_GET_INT(&Global_39621[iVar05] + 16, "script") == &iParam0)
				{
					LOG_ERROR("duplicate script id..This should never happen...Tell Steve");
					PRINTSTRING("Duplicate Script Id:");
					PRINTINT(&iParam0);
					RELEASE_VOLUME(&Global_39621[iVar05] + 16);
				}
			}
		}
		else
		{
			Function_485(iVar0);
		}
		iVar0++;
	}
	return 0;
}

void Function_485(int iParam0) //Position: 0x159D5 / 88533
{
	if (IS_VOLUME_VALID(&Global_39621[iParam05] + 24))
	{
		REMOVE_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(&Global_39621[iParam05] + 24, 0);
		REMOVE_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(&Global_39621[iParam05] + 24);
	}
	if (IS_BLIP_VALID(&Global_39621[iParam05] + 8))
	{
		REMOVE_BLIP(&Global_39621[iParam05] + 8);
	}
	RELEASE_VOLUME(&Global_39621[iParam05] + 16);
	RELEASE_VOLUME(&Global_39621[iParam05] + 24);
	return;
}

bool Function_486(struct<2> Param0) //Position: 0x15A3D / 88637
{
	struct<9> Var0;
	
	iVar5 = 0;
	while (iVar5 <= Global_43791)
	{
		if (IS_VOLUME_VALID(&Global_44085[iVar59] + 8))
		{
			if (StackVal || (StackVal || StackVal != 3 != 4) != 5)
			{
				if (GET_OBJECT_TYPE(&Global_44085[iVar59] + 8) == 9)
				{
					GET_VOLUME_SCALE(&Global_44085[iVar59] + 8, &vVar0);
					GET_VOLUME_CENTER(&Global_44085[iVar59] + 8, &Var2);
					bVar4 = VDIST(Param0, Var2);
					if ((bVar4 - ((vVar0.x + vVar0.z) / 2.0f)) > 60.0f)
					{
						return 1;
					}
				}
			}
		}
		iVar5++;
	}
	return 0;
}

int Function_487(struct<2> Param0) //Position: 0x15AE2 / 88802
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_43791)
	{
		if (IS_VOLUME_VALID(&Global_44085[iVar09] + 8))
		{
			if (IS_POINT_IN_VOLUME(Param0, &Global_44085[iVar09] + 8))
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

bool Function_488(struct<2> Param0) //Position: 0x15B30 / 88880
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_43791)
	{
		if (IS_VOLUME_VALID(&Global_44085[iVar09] + 8))
		{
			if (IS_POINT_IN_VOLUME(Param0, &Global_44085[iVar09] + 8))
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

bool Function_489(struct<2> Param0) //Position: 0x15B8B / 88971
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_43791)
	{
		if (IS_VOLUME_VALID(&Global_44085[iVar09] + 8))
		{
			if (IS_POINT_IN_VOLUME(Param0, &Global_44085[iVar09] + 8))
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

int Function_490(int iParam0) //Position: 0x15C0A / 89098
{
	float fVar0;
	bool bVar1;
	
	Function_368(&fVar0, &bVar1);
	AMBIENT_RESET_FILTER(0);
	AMBIENT_SET_SEARCH_CENTER_PLAYER();
	AMBIENT_SET_DISTANCE_FILTER(fVar0, bVar1);
	Function_445(0);
	AMBIENT_ENABLE_QUADRANT_FILTER(1);
	AMBIENT_SET_QUADRANT_FILTER(1, 0, 0, 0);
	if ((&iParam0 + 72 + 84)->f_44 == 0.0f)
	{
		if ((&iParam0 + 72 + 84)->f_48 == 0.0f)
		{
			AMBIENT_SET_SLOPE_FILTER_PRECISE(0.0f, (&iParam0 + 72 + 84)->f_44, (&iParam0 + 72 + 84)->f_48);
		}
		else
		{
			AMBIENT_SET_SLOPE_FILTER_PRECISE(StackVal, 0.0f, (&iParam0 + 72 + 84)->f_44);
		}
	}
	else
	{
		Function_442(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, (&iParam0 + 72 + 84));
	}
	if ((&iParam0 + 72 + 84)->f_52 == 0.0f)
	{
		if ((&iParam0 + 72 + 84)->f_56 == 0.0f)
		{
			AMBIENT_SET_BUMP_FILTER(0.0f, (&iParam0 + 72 + 84)->f_52, (&iParam0 + 72 + 84)->f_56);
		}
		else
		{
			AMBIENT_SET_BUMP_FILTER(StackVal, 0.0f, (&iParam0 + 72 + 84)->f_52);
		}
	}
	Function_441(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&iParam0 + 72 + 84));
	AMBIENT_SET_ONESHOT_QUERIES(0);
	AMBIENT_SET_RANDOM_SEARCH_ORDER(1);
	if (Global_47151[34])
	{
		PRINTSTRING("HeightDeviation is set to:");
		PRINTFLOAT((&iParam0 + 72 + 84)->f_28);
		PRINTNL();
		PRINTSTRING("Elevation Derivative is set to:");
		PRINTFLOAT((&iParam0 + 72 + 84)->f_36);
		PRINTNL();
	}
	if ((&iParam0 + 72 + 84)->f_28 == 0.0f)
	{
		UNK_0x0AC99007(StackVal, (&iParam0 + 72 + 84)->f_28);
		UNK_0x30C67D05(1);
	}
	if ((&iParam0 + 72 + 84)->f_36 == 0.0f)
	{
		AMBIENT_SET_ELEVATION_DERIVATIVE_IN_AREA_FILTER((&iParam0 + 72 + 84)->f_36, (&iParam0 + 72 + 84)->f_40);
		AMBIENT_ENABLE_ELEVATION_DERIVATIVE_IN_AREA_FILTER(1);
	}
	if (AMBIENT_GET_POINT(&iParam0 + 16, 0))
	{
		return 1;
	}
	return 0;
}

int Function_491(int iParam0, struct<2> Param1) //Position: 0x15DBC / 89532
{
	AMBIENT_RESET_FILTER(0);
	AMBIENT_SET_SEARCH_CENTER(Param1);
	if (Global_47151[34])
	{
		PRINTVECTOR(Param1);
		PRINTNL();
	}
	Function_492();
	Function_445(0);
	Function_443(0);
	if ((&iParam0 + 72 + 84)->f_44 == 0.0f)
	{
		if ((&iParam0 + 72 + 84)->f_48 == 0.0f)
		{
			AMBIENT_SET_SLOPE_FILTER_PRECISE(0.0f, (&iParam0 + 72 + 84)->f_44, (&iParam0 + 72 + 84)->f_48);
		}
		else
		{
			AMBIENT_SET_SLOPE_FILTER_PRECISE(StackVal, 0.0f, (&iParam0 + 72 + 84)->f_44);
		}
	}
	else
	{
		Function_442(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&iParam0 + 72 + 84));
	}
	if ((&iParam0 + 72 + 84)->f_52 == 0.0f)
	{
		if ((&iParam0 + 72 + 84)->f_56 == 0.0f)
		{
			AMBIENT_SET_BUMP_FILTER(0.0f, (&iParam0 + 72 + 84)->f_52, (&iParam0 + 72 + 84)->f_56);
		}
		else
		{
			AMBIENT_SET_BUMP_FILTER(StackVal, 0.0f, (&iParam0 + 72 + 84)->f_52);
		}
	}
	Function_441(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&iParam0 + 72 + 84));
	AMBIENT_SET_ONESHOT_QUERIES(0);
	AMBIENT_SET_RANDOM_SEARCH_ORDER(1);
	if (Global_47151[34])
	{
		PRINTSTRING("HeightDeviation is set to:");
		PRINTFLOAT((&iParam0 + 72 + 84)->f_28);
		PRINTNL();
		PRINTSTRING("Elevation Derivative is set to:");
		PRINTFLOAT((&iParam0 + 72 + 84)->f_36);
		PRINTNL();
	}
	if ((&iParam0 + 72 + 84)->f_28 == 0.0f)
	{
		UNK_0x0AC99007(StackVal, (&iParam0 + 72 + 84)->f_28);
		UNK_0x30C67D05(1);
	}
	if ((&iParam0 + 72 + 84)->f_36 == 0.0f)
	{
		AMBIENT_SET_ELEVATION_DERIVATIVE_IN_AREA_FILTER((&iParam0 + 72 + 84)->f_36, (&iParam0 + 72 + 84)->f_40);
		AMBIENT_ENABLE_ELEVATION_DERIVATIVE_IN_AREA_FILTER(1);
	}
	if (AMBIENT_GET_POINT(&iParam0 + 16, 0))
	{
		return 1;
	}
	return 0;
}

void Function_492() //Position: 0x15F71 / 89969
{
	AMBIENT_SET_DISTANCE_FILTER(0.0f, 24.0f);
	return;
}

struct<8> Function_493(struct<2> Param0) //Position: 0x15F80 / 89984
{
	var uVar0;
	var uVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	var uVar7;
	struct<2> Var8;
	float fVar10;
	float fVar11;
	var uVar12;
	var uVar14;
	var uVar16;
	int iVar18;
	int iVar21;
	
	uVar7 = START_CURVE_QUERY(&Global_43578, Param0, 48, 0.0f, 7.0f, 5.0f, 0);
	if (!GET_NUM_CURVES_IN_CURVE_QUERY(&uVar7) < 0)
	{
		UNK_0xDF93BD7C(&uVar7);
		Var8 = Vector(0.0f, 0.0f, 0.0f);
		return StackVal, Var8;
	}
	GET_POINT_FROM_CURVE_QUERY(&uVar7, false, &uVar0);
	uVar3 = GET_CURVE_FROM_POINT_INDEX_IN_CURVE_QUERY(&uVar7, false);
	if (IS_OBJECT_VALID(&uVar3))
	{
		uVar12 = Param1;
		UNK_0x19D652F9(&uVar3, 50.0f, &uVar0, &iVar18);
		UNK_0x19D652F9(&uVar3, -50.0f, &uVar0, &iVar21);
		Function_282(&iVar18);
		uVar14 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Function_282(&iVar18), StackVal);
		Function_282(&iVar21);
		uVar16 = Vector(StackVal, StackVal, StackVal) - Vector(Param0, Function_282(&iVar21), StackVal);
		fVar11 = VDOT(&uVar12, &uVar14);
		fVar10 = VDOT(&uVar12, &uVar16);
		Function_368(&fVar4, &fVar5);
		fVar6 = ((fVar4 + fVar5) / 2.0f);
		if (fVar11 > 0.0f && fVar10 > 0.0f)
		{
			UNK_0xDF93BD7C(&uVar7);
			Var8 = Vector(0.0f, 0.0f, 0.0f);
			return StackVal, Var8;
		}
		if (fVar11 > fVar10)
		{
			UNK_0x19D652F9(&uVar3, (fVar6 * -1.0f), &uVar0, &iVar21);
			Function_282(&iVar21);
			Var8 = Function_282(&iVar21);
		}
		else
		{
			UNK_0x19D652F9(&uVar3, fVar6, &uVar0, &iVar18);
			Function_282(&iVar18);
			Var8 = Function_282(&iVar18);
		}
	}
	UNK_0xDF93BD7C(&uVar7);
	return StackVal, Var8;
}

var Function_494(var uParam0, struct<2> Param1, float fParam3, int iParam4, var uParam5) //Position: 0x1609A / 90266
{
	float fVar0;
	var uVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;
	struct<2> Var5;
	
	fVar4 = 50.0f;
	bVar3 = -1.0f;
	fVar0 = START_OBJECT_ITERATOR(&uParam0);
	while (IS_OBJECT_VALID(&fVar0))
	{
		GET_OBJECT_POSITION(&fVar0, &Var5);
		bVar2 = VDIST(Var5, Param1);
		if (DECOR_CHECK_EXIST(&fVar0, &iParam4))
		{
			if ((DECOR_GET_INT(&fVar0, &iParam4) && uParam5) >= 0)
			{
				if (bVar2 < fParam3)
				{
					if (bVar3 > 0.0f || bVar2 > bVar3)
					{
						if (Function_483(&Var5, &fVar4, 0, 0))
						{
							bVar3 = bVar2;
							uVar1 = &fVar0;
							PRINTSTRING("Assigning new closestObject ");
							PRINTNL();
						}
					}
				}
			}
		}
		fVar0 = OBJECT_ITERATOR_NEXT(&uParam0);
	}
	return &uVar1;
}

var Function_495(var uParam0, struct<2> Param1, float fParam3) //Position: 0x1614F / 90447
{
	float fVar0;
	var uVar1;
	bool bVar2;
	bool bVar3;
	var uVar4;
	struct<2> Var5;
	
	bVar3 = -1.0f;
	fVar0 = START_OBJECT_ITERATOR(&uParam0);
	while (IS_OBJECT_VALID(&fVar0))
	{
		GET_OBJECT_POSITION(&fVar0, &Var5);
		bVar2 = VDIST(Var5, Param1);
		if (bVar2 < fParam3)
		{
			if (bVar3 > 0.0f || bVar2 > bVar3)
			{
				if (Function_483(&Var5, &uVar4, 0, 0))
				{
					bVar3 = bVar2;
					uVar1 = &fVar0;
					PRINTSTRING("Assigning new closestObject ");
					PRINTNL();
				}
			}
		}
		fVar0 = OBJECT_ITERATOR_NEXT(&uParam0);
	}
	return &uVar1;
}

var Function_496() //Position: 0x161E1 / 90593
{
	float fVar0;
	int iVar1;
	
	if (Global_6612)
	{
		return 0.0f;
	}
	Function_368(&fVar0, &iVar1);
	if (fVar0 >= 50.0f)
	{
		return (fVar0 - 10.0f);
	}
	return (fVar0 - 20.0f);
}

var Function_497(var uParam0, struct<2> Param1, float fParam3, int iParam4, var uParam5) //Position: 0x16212 / 90642
{
	float fVar0;
	var uVar1;
	bool bVar2;
	bool bVar3;
	struct<2> Var4;
	
	bVar3 = -1.0f;
	fVar0 = START_OBJECT_ITERATOR(&uParam0);
	while (IS_OBJECT_VALID(&fVar0))
	{
		GET_OBJECT_POSITION(&fVar0, &Var4);
		bVar2 = VDIST(Var4, Param1);
		if (DECOR_CHECK_EXIST(&fVar0, &iParam4))
		{
			if ((DECOR_GET_INT(&fVar0, &iParam4) && uParam5) >= 0)
			{
				if (bVar2 < fParam3)
				{
					if (bVar3 > 0.0f || bVar2 > bVar3)
					{
						bVar3 = bVar2;
						uVar1 = &fVar0;
						PRINTSTRING("Assigning new closestObject ");
						PRINTNL();
					}
				}
			}
		}
		fVar0 = OBJECT_ITERATOR_NEXT(&uParam0);
	}
	return &uVar1;
}

var Function_498(var uParam0, struct<2> Param1, float fParam3) //Position: 0x162B4 / 90804
{
	float fVar0;
	var uVar1;
	bool bVar2;
	bool bVar3;
	struct<2> Var4;
	
	bVar3 = -1.0f;
	fVar0 = START_OBJECT_ITERATOR(&uParam0);
	while (IS_OBJECT_VALID(&fVar0))
	{
		GET_OBJECT_POSITION(&fVar0, &Var4);
		bVar2 = VDIST(Var4, Param1);
		if (bVar2 < fParam3)
		{
			if (bVar3 > 0.0f || bVar2 > bVar3)
			{
				bVar3 = bVar2;
				uVar1 = &fVar0;
				PRINTSTRING("Assigning new closestObject ");
				PRINTNL();
			}
		}
		fVar0 = OBJECT_ITERATOR_NEXT(&uParam0);
	}
	return &uVar1;
}

int Function_499(var uParam0, int iParam1) //Position: 0x1633A / 90938
{
	int iVar0;
	var uVar1;
	
	if (!IS_VOLUME_VALID(&uParam0))
	{
		LOG_ERROR("Passed an invalid volume into ADD_AMBIENT_VOLUME_RESTRICTION");
	}
	if (DECOR_CHECK_EXIST(&uParam0, "script"))
	{
		if (!IS_SCRIPT_VALID(DECOR_GET_INT(&uParam0, "script")))
		{
			LOG_ERROR("Passed an invalid script ID into ADD_AMBIENT_VOLUME_RESTRICTION");
		}
	}
	GET_VOLUME_CENTER(&uParam0, &uVar1);
	Function_484(DECOR_GET_INT(&uParam0, "script"));
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(&Global_39621[iVar05] + 16))
		{
		}
		else
		{
			Function_500(iVar0, &uParam0, &uVar1, &iParam1);
			return 1;
		}
		iVar0++;
	}
	LOG_ERROR("No room to add another volume... this really shouldn't happen tell steve");
	RELEASE_VOLUME(&uParam0);
	return 0;
}

void Function_500(int iParam0, var uParam1, struct<2> Param2) //Position: 0x164A4 / 91300
{
	struct<8> Var0;
	
	*(&Global_39621[iParam05] + 16) = &uParam1;
	Global_39621[iParam05].f_32 = GET_CURRENT_GAME_TIME();
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_289("stayout") };
	*(&Global_39621[iParam05] + 24) = CREATE_VOLUME_IN_LAYOUT(StackVal, StackVal, &Global_39615, &Var0, 4,203895E-45f, Param2, Vector(0.0f, 0.0f, 0.0f), Vector(12.0f, 5.0f, 12.0f));
	ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(&Global_39621[iParam05] + 24, 0);
	ADD_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(&Global_39621[iParam05] + 24);
	if (&bParam3)
	{
		*(&Global_39621[iParam05] + 8) = ADD_BLIP_FOR_COORD(&Param2, 403, 0, 2, 0);
		SET_BLIP_BLINK(&Global_39621[iParam05] + 8, 1, 1, 20.0f);
	}
}

var Function_501(var uParam0, struct<2> Param1) //Position: 0x1654C / 91468
{
	struct<2> Var0;
	var uVar2;
	
	if (IS_ACTOR_VALID(&uParam0))
	{
		GET_POSITION(&uParam0, &Var0);
		Function_502(StackVal, StackVal, Var0, Param1, &uVar2);
		return UNK_0x9C40E671(&uVar2);
	}
	return 0.0f;
}

void Function_502(var uParam0, float fParam1, float fParam2, float fParam3, var uParam4) //Position: 0x1657A / 91514
{
	uParam4 = Vector((GET_X(&fParam2) - GET_X(&uParam0)), 0.0f, (GET_Z(&fParam2) - GET_Z(&uParam0)));
}

void Function_503(struct<1493> Param0) //Position: 0x1659E / 91550
{
	if (iParam1 <= 0)
	{
		Param0.f_1492 = 0;
	}
	else if (iParam1 <= Param0.f_1492)
	{
		Param0.f_1492 = iParam1;
	}
	return;
}

bool Function_504(struct<2>[] Param0) //Position: 0x165C7 / 91591
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_509();
	iVar1 = 0;
	if (!Function_100(&(Param0[iVar02]), 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_508(&(Param0[iVar02]), 8);
		}
		else if (Function_507())
		{
			iVar1 = 1;
			Function_508(&(Param0[iVar02]), 8);
		}
		Function_508(&(Param0[iVar02]), 16);
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_100(&(Param0[iVar02]), 4))
		{
			if (!Function_100(&(Param0[iVar02]), 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP(&(Param0[iVar02]), (Function_100(&(Param0[02]), 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET(&(Param0[iVar02]));
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR(&(Param0[iVar02]), 1, (Function_100(&(Param0[02]), 8) || iVar1));
						break;
					
					case 0x00000005:
						REQUEST_ANIM_SET(GET_ASSET_NAME(StackVal, &(Param0[iVar02])), 0);
						break;
					
					case 0x00000001:
						STREAMING_REQUEST_GRINGO(&(Param0[iVar02]));
						break;
					
					case 0x00000008:
						REQUEST_ACTION_TREE(GET_ASSET_NAME(StackVal, &(Param0[iVar02])));
						break;
					
					case 0x0000000A:
						REQUEST_STRING_TABLE(GET_ASSET_NAME(StackVal, &(Param0[iVar02])));
						break;
					
					case 0x00000004:
						STREAMING_REQUEST_SCRIPT(&(Param0[iVar02]));
						break;
					
					case 0x00000006:
						STREAMING_REQUEST_MOVABLE_NAV_MESH(GET_ASSET_NAME(&(Param0[iVar02]), 6));
						break;
					
					case 0x0000000C:
						STREAMING_REQUEST_GRINGO_DICTIONARY(&(Param0[iVar02]));
						break;
					
					default:
						break;
				}
				Function_508(&(Param0[iVar02]), 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (Function_100(&(Param0[iVar02]), 4))
		{
			if (!Function_100(&(Param0[iVar02]), 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED(&(Param0[iVar02])))
						{
							Function_508(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED(&(Param0[iVar02])))
						{
							Function_508(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000002:
					case 0x00000003:
						if (STREAMING_IS_ACTOR_LOADED(&(Param0[iVar02]), 4294967295))
						{
							Function_508(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_508(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED(&(Param0[iVar02])))
						{
							Function_508(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_508(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, &(Param0[iVar02]))))
						{
							Function_508(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED(&(Param0[iVar02])))
						{
							Function_508(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME(&(Param0[iVar02]), 6)))
						{
							Function_508(&(Param0[iVar02]), 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED(&(Param0[iVar02])))
						{
							Function_508(&(Param0[iVar02]), 2);
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
	Function_505();
	return 1;
}

void Function_505() //Position: 0x16989 / 92553
{
	if (!Function_506(128))
	{
		return;
	}
	strcpy(&Global_21646, "Done Streaming", 64);
	Global_21646.f_132 = 2;
	Global_21646.f_128 = GET_CURRENT_GAME_TIME();
	Global_21646.f_136 = (Global_21610.f_128 + 3.0f);
	return;
}

bool Function_506(int iParam0) //Position: 0x169C9 / 92617
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_507() //Position: 0x169E5 / 92645
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 200)
	{
		if (GET_THIS_SCRIPT_ID() == &Global_99725[iVar043] + 296)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void Function_508(struct<13> Param0) //Position: 0x16A13 / 92691
{
	Param0.f_12 = (Param0.f_12 || iParam1);
	return;
}

void Function_509() //Position: 0x16A26 / 92710
{
	if (!Function_506(128))
	{
		return;
	}
	if (Global_21646.f_132 == 0)
	{
		strcpy(&Global_21646, "nStreaming", 64);
		Global_21646.f_132 = 1;
		Global_21646.f_128 = GET_CURRENT_GAME_TIME();
		Global_21646.f_136 = Global_21610.f_128;
	}
	return;
}

void Function_510(struct<1949> Param0) //Position: 0x16A68 / 92776
{
	if (iParam1 >= 0 || iParam1 < 6)
	{
		LOG_ERROR("Cannot initialize numberOfTravelers <=0 or > CONST_MAtkDefMaxNumTravelers");
	}
	Param0.f_1948 = iParam1;
	return;
}

void Function_511(struct<2377> Param0) //Position: 0x16AD1 / 92881
{
	if (iParam1 >= 0 || iParam1 < 4)
	{
		LOG_ERROR("Cannot initialize iNumberOfAttackers <=0 or > CONST_MAtkDefMaxNumAttackers");
	}
	Param0.f_2376 = iParam1;
	return;
}

int Function_512(struct<1585> Param0) //Position: 0x16B3B / 92987
{
	if (!Function_402(iParam1))
	{
		LOG_ERROR("MATKDEF_SET_VEHICLE_TEMPLATE - Invalid vehicleTemplate");
		return 0;
	}
	Param0.f_1584 = iParam1;
	Function_513(&Param0 + 1104, Param0.f_1584, 3, 0);
	return 1;
}

var Function_513(struct<2>[] Param0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x16BA3 / 93091
{
	int iVar0;
	
	bParam2 = &bParam2;
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_100(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = bParam1;
			Param0[iVar02].f_8 = 3;
			Function_508(&(Param0[iVar02]), 4);
			if (&bParam3)
			{
				Function_508(&(Param0[iVar02]), 8);
			}
			return iVar0;
		}
		if (bParam1 == &Param0[iVar02])
		{
			return iVar0;
		}
		iVar0++;
	}
	LOG_ERROR("Not enough room in the streaming array to fit a template! Raise the array size to fix!");
	return 4294967295;
}

void Function_514(bool bParam0, bool bParam1, int iParam2) //Position: 0x16C7F / 93311
{
	if (!Function_402(bParam1))
	{
		LOG_ERROR("MATKDEF_ADD_ATTACKER_TEMPLATE - Invalid attackerTemplate");
	}
	if (iParam2 > 0 || iParam2 <= 4)
	{
	}
	if ((*&bParam0 + 2296)[iParam2] != 0 || !Function_402((*&bParam0 + 2296)[iParam2]))
	{
		(*&bParam0 + 2296)[iParam2] = bParam1;
		Function_513(&bParam0 + 1104, bParam1, 3, 0);
	}
	return;
}

bool Function_515() //Position: 0x16D13 / 93459
{
	return (RAND_INT_RANGE(0, 1999) / 1000) != 0;
}

void Function_516(bool bParam0, int iParam1, int iParam2) //Position: 0x16D26 / 93478
{
	if (!Function_402(iParam1))
	{
		LOG_ERROR("MATKDEF_ADD_TRAVELER_TEMPLATE - Invalid travelerTemplate");
	}
	if (iParam2 > 0 || iParam2 <= 6)
	{
	}
	else if ((*&bParam0 + 1888)[iParam2] != 0 || !Function_402((*&bParam0 + 1888)[iParam2]))
	{
		(*&bParam0 + 1888)[iParam2] = iParam1;
		Function_513(&bParam0 + 1104, iParam1, 3, 0);
	}
	return;
}

var Function_517(struct<2>[] Param0, var uParam1, int iParam2, bool bParam3) //Position: 0x16DBD / 93629
{
	int iVar0;
	var uVar1;
	
	if (Global_47151[32])
	{
	}
	uVar1 = GET_ASSET_ID(&uParam1, iParam2);
	iVar0 = Function_518(&Param0, &uVar1, iParam2);
	if (&bParam3)
	{
		Function_508(&(Param0[iVar02]), 8);
	}
	return iVar0;
}

var Function_518(struct<2>[] Param0, int iParam1, int iParam2) //Position: 0x16DFB / 93691
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Param0 - 1))
	{
		if (!Function_100(&(Param0[iVar02]), 4))
		{
			Param0[iVar02] = &iParam1;
			Param0[iVar02].f_8 = iParam2;
			Function_508(&(Param0[iVar02]), 4);
			return iVar0;
		}
		if (StackVal && &iParam1 != &Param0[iVar02] != iParam2)
		{
			return iVar0;
		}
		iVar0++;
	}
	LOG_ERROR("Not enough room in the streaming array to fit a template! Raise the array size to fix!");
	return 4294967295;
}

int Function_519(int iParam0) //Position: 0x16ECA / 93898
{
	var uVar0[3];
	int iVar4;
	
	if (Function_347(0))
	{
		uVar0[0] = "Pass";
		uVar0[1] = "Fail";
		uVar0[2] = "Cancel";
		iVar4 = Function_333(&iParam0 + 1052, &uVar0, "RDR MISSION MENU - Moving Attack-Defend", GET_DEBUG_PADINDEX(), 0);
		if (iVar4 == 0)
		{
			Function_119();
			Function_369(&iParam0, 11);
		}
		else if (iVar4 == 1)
		{
			Function_119();
			Function_369(&iParam0, 12);
		}
		else if (iVar4 == 2)
		{
			Function_369(&iParam0, 10);
			Function_119();
		}
		return 1;
	}
	return 0;
}

bool Function_520(char* cParam0) //Position: 0x16F7F / 94079
{
	return (StackVal && (StackVal && cParam0 != 0.0f != 0.0f) != 0.0f);
}

void Function_521(struct<1481> Param0) //Position: 0x16F97 / 94103
{
	if (IS_ACTOR_VALID(&Param0 + 1576))
	{
		if (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&Param0 + 1576)))
		{
			REMOVE_BLIP(GET_BLIP_ON_ACTOR(&Param0 + 1576));
		}
	}
	if (SQUAD_IS_VALID(&Param0 + 1880))
	{
		Function_524(&Param0 + 1880);
	}
	if (SQUAD_IS_VALID(&Param0 + 1960 + 80))
	{
		Function_524(&Param0 + 1960 + 80);
	}
	if (IS_VOLUME_VALID(&Param0 + 1568))
	{
		Function_523(&Param0 + 1568);
	}
	if (IS_BLIP_VALID(&Param0 + 48))
	{
		REMOVE_BLIP(&Param0 + 48);
		(&Param0 + 48) = "";
	}
	if (iParam1 == 1)
	{
		if (&bParam2 == 1)
		{
			if (IS_ACTOR_VALID(&Param0 + 1576))
			{
				ADD_BLIP_FOR_ACTOR(&Param0 + 1576, 325, 0, 2, 0);
			}
		}
		else
		{
			switch (Function_239(&Param0))
			{
				case 0x00000001:
					if (SQUAD_IS_VALID(&Param0 + 1880))
					{
						Function_522(&Param0 + 1880, 325, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
					}
					if (SQUAD_IS_VALID(&Param0 + 1960 + 80))
					{
						Function_522(&Param0 + 1960 + 80, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
					}
					break;
				
				case 0x00000002:
					if (SQUAD_IS_VALID(&Param0 + 1880))
					{
						Function_522(&Param0 + 1880, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
					}
					if (SQUAD_IS_VALID(&Param0 + 1960 + 80))
					{
						Function_522(&Param0 + 1960 + 80, 325, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
					}
					break;
				
				case 0x00000000:
					if (Param0.f_1480 == 1)
					{
						if (IS_ACTOR_VALID(&Param0 + 1576))
						{
							ADD_BLIP_FOR_ACTOR(&Param0 + 1576, 387, 0, 2, 0);
							Function_240(&Param0, 1);
						}
					}
					else
					{
						if (SQUAD_IS_VALID(&Param0 + 1880))
						{
							Function_522(&Param0 + 1880, 325, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
						}
						if (SQUAD_IS_VALID(&Param0 + 1960 + 80))
						{
							Function_522(&Param0 + 1960 + 80, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
						}
						if (Param0.f_1476 == 0)
						{
							Function_240(&Param0, 1);
							Function_238(&Param0, "pm_mad_side", 1);
							Param0.f_1476 = 1;
						}
					}
					break;
				
				case 0x00000003:
					if (SQUAD_IS_VALID(&Param0 + 1880))
					{
						Function_522(&Param0 + 1880, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
					}
					if (SQUAD_IS_VALID(&Param0 + 1960 + 80))
					{
						Function_522(&Param0 + 1960 + 80, 322, 4294967295, 0, 3212836864, 0x3f800000, 2048, 0);
					}
					break;
				}
			}
	}
	return;
}

void Function_522(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7) //Position: 0x1724B / 94795
{
	bool bVar0;
	var uVar1;
	var uVar2;
	
	if (!SQUAD_IS_VALID(&uParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&uParam0))
	{
		uVar2 = SQUAD_GET_ACTOR_BY_INDEX(&uParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar2))
		{
			uVar1 = GET_BLIP_ON_ACTOR(&uVar2);
			if (IS_BLIP_VALID(&uVar1))
			{
				if (GET_BLIP_ICON(&uVar1) != iParam1)
				{
					CHANGE_BLIP_ICON(&uVar1, iParam1);
				}
				SET_BLIP_MIN_DISTANCE(&uVar1, &bParam3);
				SET_BLIP_MAX_DISTANCE(&uVar1, &iParam4);
				SET_BLIP_SCALE(&uVar1, &iParam5);
				if (&bParam7)
				{
					SET_BLIP_FLAG(&uVar1, 8192, 0);
				}
			}
			else
			{
				uVar1 = ADD_BLIP_FOR_ACTOR(&uVar2, iParam1, &bParam3, 2, 0);
				SET_BLIP_MAX_DISTANCE(&uVar1, &iParam4);
				SET_BLIP_SCALE(&uVar1, &iParam5);
				if (&bParam7)
				{
					SET_BLIP_FLAG(&uVar1, 8192, 0);
				}
			}
			if (&iParam2 != 4294967295)
			{
				if (HUD_GET_SHOOT_BLIP_ICON_FOR_ACTOR(&uVar2) != &iParam2)
				{
					HUD_SET_SHOOT_BLIP_ICON_FOR_ACTOR(&uVar2, &iParam2);
				}
			}
			else if (HUD_GET_SHOOT_BLIP_ICON_FOR_ACTOR(&uVar2) != 4294967295)
			{
				HUD_CLEAR_SHOOT_BLIP_ICON_FOR_ACTOR(&uVar2);
			}
			if (GET_BLIP_ICON(&uVar1) == 322)
			{
				SET_BLIP_IMPAIRMENT_MASK(&uVar1, (GET_BLIP_IMPAIRMENT_MASK(&uVar1) || iParam6));
			}
		}
		bVar0++;
	}
}

int Function_523(int iParam0) //Position: 0x1735B / 95067
{
	var uVar0;
	
	if (IS_VOLUME_VALID(&iParam0))
	{
		uVar0 = GET_OBJECT_FROM_VOLUME(&iParam0);
		if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(&uVar0)))
		{
			REMOVE_BLIP(GET_BLIP_ON_OBJECT(&uVar0));
			return 1;
		}
	}
	return 0;
}

void Function_524(int iParam0) //Position: 0x1738B / 95115
{
	bool bVar0;
	var uVar1;
	
	if (!SQUAD_IS_VALID(&iParam0))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(&iParam0))
	{
		uVar1 = SQUAD_GET_ACTOR_BY_INDEX(&iParam0, bVar0);
		if (IS_ACTOR_VALID(&uVar1))
		{
			while (IS_BLIP_VALID(GET_BLIP_ON_ACTOR(&uVar1)))
			{
				REMOVE_BLIP(GET_BLIP_ON_ACTOR(&uVar1));
			}
		}
		bVar0++;
	}
	return;
}

void Function_525(int iParam0) //Position: 0x173DF / 95199
{
	*(&Global_21369 + 40) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 40, 0, 0, &iParam0, 0);
	return;
}

void Function_526(int iParam0) //Position: 0x173FC / 95228
{
	*(&Global_21369 + 8) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 8, 0, 0, (&iParam0 + Function_354(105)), 0);
	return;
}

void Function_527(int iParam0) //Position: 0x1741F / 95263
{
	*(&Global_21369 + 24) = GET_TIME_OF_DAY();
	ADD_TIME(&Global_21369 + 24, 0, 0, (&iParam0 + Function_354(90)), 0);
	return;
}

int Function_528(int iParam0, int iParam1) //Position: 0x17442 / 95298
{
	if (Global_6646)
	{
		return 0;
	}
	if (Global_6634)
	{
		return 0;
	}
	if (Global_6625)
	{
		return 0;
	}
	if (Global_6635)
	{
		return 0;
	}
	if (Global_6627)
	{
		return 0;
	}
	if (Global_6623)
	{
		return 0;
	}
	if (Global_6636)
	{
		return 0;
	}
	if (Global_6638 || Global_6639)
	{
		return 0;
	}
	iParam0 = &iParam0;
	if (!IS_EARLIER_THAN(&Global_21369 + 8, 0) && &iParam1 != 0)
	{
		return 0;
	}
	return 1;
}

