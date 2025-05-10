//Decompiled with MagicRDR v1.0
//Function Count : 268
//Statics Count : 125
//Natives Count : 266
//Parameters Count : 0

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
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	struct<85> Local_16 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	int iLocal_122 = 0;
	bool bLocal_123 = false;
	float fLocal_124 = 0.0f;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	
	iLocal_62 = 31;
	iLocal_63 = 33;
	iLocal_64 = 1;
	fLocal_65 = 2.0f;
	Function_265(&(vLocal_67[09]));
	Function_257(&(vLocal_67[19]));
	Function_229(&(vLocal_67[29]));
	Function_184(&(vLocal_67[39]));
	Function_169(&(vLocal_67[49]));
	Function_136(&(vLocal_67[59]));
	iVar0 = 0;
	while (iVar0 <= vLocal_67)
	{
		Call_Loc(vLocal_67[iVar09]);
		vLocal_67[iVar09].f_32 = 1;
		iVar0++;
	}
	while (!Function_135(256) && !IS_EXITFLAG_SET())
	{
		WAIT(false);
	}
	Function_133();
	Function_131();
	while (!IS_EXITFLAG_SET())
	{
		iLocal_122 = 100;
		SET_DEBUG_DRAW((Global_30900[8] || Global_30900[9]));
		if (GET_DEBUG_DRAW_STATE())
		{
			iLocal_122 = 0;
		}
		iVar0 = 0;
		while (iVar0 <= vLocal_67)
		{
			if (bLocal_123)
			{
				PRINTSTRING("Time for Exec ");
				PRINTSTRING(&vLocal_67[iVar09] + 12);
				PRINTSTRING(": ");
				fLocal_124 = GET_PROFILE_TIME();
			}
			Call_Loc(vLocal_67[iVar09].y);
			if (StackVal)
			{
				iLocal_122 = 0;
			}
			if (bLocal_123)
			{
				PRINTFLOAT((GET_PROFILE_TIME() - fLocal_124));
				PRINTNL();
			}
			if (!IS_EXITFLAG_SET() && !iLocal_122 != 0)
			{
				WAIT(false);
			}
			iVar0++;
		}
		Function_119();
		Function_4();
		Function_1();
		if (!IS_EXITFLAG_SET())
		{
			WAIT(false);
		}
	}
	iVar0 = 0;
	while (iVar0 <= vLocal_67)
	{
		if (vLocal_67[iVar09].f_32)
		{
			Call_Loc(vLocal_67[iVar09].z);
		}
		iVar0++;
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0x15F / 351
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = Function_3();
	bVar1 = Function_2();
	if (IS_LAYOUTREF_VALID(bVar0))
	{
		if (GET_NUM_ITERATOR_MATCHES(bVar1) >= 0)
		{
			bVar2 = START_OBJECT_ITERATOR(bVar1);
			while (IS_OBJECT_VALID(bVar2))
			{
				if (DECOR_CHECK_EXIST(bVar2, "AM_NO_PURGE"))
				{
					if (DECOR_GET_INT(bVar2, "AM_NO_PURGE") < 0)
					{
						DESTROY_OBJECT(bVar2);
					}
				}
				else
				{
					DESTROY_OBJECT(bVar2);
				}
				bVar2 = OBJECT_ITERATOR_NEXT(bVar1);
			}
		}
	}
	return;
}

var Function_2() //Position: 0x1D3 / 467
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = Function_3();
	bVar1 = GET_ITERATOR_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(bVar0, "AmbientMissions_Iterator"));
	if (!IS_ITERATOR_VALID(bVar1))
	{
		bVar1 = CREATE_NAMED_OBJECT_ITERATOR(bVar0, "AmbientMissions_Iterator");
	}
	return bVar1;
}

var Function_3() //Position: 0x230 / 560
{
	bool bVar0;
	
	bVar0 = FIND_NAMED_LAYOUT("AmbientMissions_Layout");
	if (!IS_LAYOUTREF_VALID(bVar0))
	{
		bVar0 = CREATE_LAYOUT("AmbientMissions_Layout");
	}
	return bVar0;
}

void Function_4() //Position: 0x27D / 637
{
	var uVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	float fVar5;
	var uVar6;
	int iVar10;
	int iVar11;
	
	if (StackVal == 3)
	{
		return;
	}
	uVar0 = Function_118("ER_SP");
	iVar10 = 8872;
	switch (StackVal)
	{
		case 0x00000000:
			switch (StackVal)
			{
				case 0x00000000:
					if (Function_117(5))
					{
						Function_116();
						SET_JOURNAL_ENTRY_PROGRESS(Local_38.f_24, -1.0f, true, 0);
						Local_38.f_32 = 1;
					}
					Local_38.f_4 = 1;
					break;
				
				case 0x00000001:
					if (ACTOR_HAS_WEAPON(Global_34573, 31))
					{
						Local_38.f_4 = 2;
					}
					else if (Function_117(5))
					{
						if (Local_38.f_32 != 1)
						{
							Local_38.f_32 = 1;
							Function_116();
							SET_JOURNAL_ENTRY_PROGRESS(Local_38.f_24, -1.0f, true, 0);
						}
					}
					break;
				
				case 0x00000002:
					if (((Global_3375 && !Global_63096) && !Global_59353) && Function_112())
					{
						Function_111(&uVar0);
						Function_110(1, "AM_ER");
						Function_87(20, 1, 0);
						Function_85();
						Local_38.f_8 = 1;
						Local_38.f_4 = 0;
						Local_38.f_12 = 0.0f;
						Local_38.f_32 = 0;
						Function_79();
						Function_28();
						memcpy(&uVar6, StackVal, StackVal, StackVal, StackVal, StackVal, Function_27(), 4);
						Local_38.f_24 = CREATE_JOURNAL_ENTRY(&uVar6, 3, false, "challenge_01");
					}
					break;
			}
			break;
		
		case 0x00000001:
			switch (StackVal)
			{
				case 0x00000000:
					Function_116();
					SET_JOURNAL_ENTRY_PROGRESS(Local_38.f_24, Local_38.f_12, true, 0);
					(*&Local_38 + 36)[0] = GET_CURRENT_GAME_TIME();
					Local_38.f_4 = 1;
					break;
				
				case 0x00000001:
					if (GET_LAST_ATTACK_TIME(Global_34573) < ((*&Local_38 + 36)[0] + 0.3f))
					{
						(*&Local_38 + 36)[0] = GET_LAST_ATTACK_TIME(Global_34573);
					}
					iVar3 = Function_26(2, &uVar0, 1);
					if (iVar3 >= 0)
					{
						iVar2 = 0;
						while (Function_25(&uVar0, &iVar2, &bVar4))
						{
							if ((GET_EVENT_TIME(GET_EVENT_FROM_OBJECT(bVar4)) + 0.3f) <= (*&Local_38 + 36)[0])
							{
								if (Function_24(bVar4) == 31)
								{
									bVar1 = GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(bVar4)));
									if (IS_ACTOR_VALID(bVar1))
									{
										iVar11 = Function_17(bVar1);
										if (((iVar11 != 0 || iVar11 != 1) || iVar11 != 2) || iVar11 != 3)
										{
											if (!DECOR_CHECK_EXIST(bVar1, "AM_ERcounted"))
											{
												DECOR_SET_BOOL(bVar1, "AM_ERcounted", true);
												switch (iVar11)
												{
													case 0x00000000:
														Function_16(&Local_38 + 32, 1);
														break;
													
													case 0x00000001:
														Function_16(&Local_38 + 32, 2);
														break;
													
													case 0x00000002:
														Function_16(&Local_38 + 32, 4);
														break;
													
													case 0x00000003:
														Function_16(&Local_38 + 32, 8);
														break;
													}
												}
											}
										}
								}
							}
						}
						if (((Function_15(Local_38.f_32, 1) && Function_15(Local_38.f_32, 2)) && Function_15(Local_38.f_32, 4)) && Function_15(Local_38.f_32, 8))
						{
							Local_38.f_4 = 2;
							Local_38.f_28 = 0;
							Local_38.f_32 = 0;
							break;
						}
						else
						{
							Function_111(&uVar0);
						}
					}
					iVar3 = Function_26(91, &uVar0, 1);
					if (iVar3 >= 0)
					{
						iVar2 = 0;
						while (Function_25(&uVar0, &iVar2, &bVar4))
						{
							if ((GET_EVENT_TIME(GET_EVENT_FROM_OBJECT(bVar4)) + 0.3f) <= (*&Local_38 + 36)[0])
							{
								if (Function_24(bVar4) == 31)
								{
									bVar1 = GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(bVar4)));
									if (IS_ACTOR_VALID(bVar1))
									{
										iVar11 = Function_17(bVar1);
										if (((iVar11 != 0 || iVar11 != 1) || iVar11 != 2) || iVar11 != 3)
										{
											if (!AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(bVar1), iVar10))
											{
												if (!DECOR_CHECK_EXIST(bVar1, "AM_ERcounted"))
												{
													DECOR_SET_BOOL(bVar1, "AM_ERcounted", true);
													switch (iVar11)
													{
														case 0x00000000:
															Function_16(&Local_38 + 32, 1);
															break;
														
														case 0x00000001:
															Function_16(&Local_38 + 32, 2);
															break;
														
														case 0x00000002:
															Function_16(&Local_38 + 32, 4);
															break;
														
														case 0x00000003:
															Function_16(&Local_38 + 32, 8);
															break;
														}
													}
												}
											}
										}
								}
							}
						}
						if (((Function_15(Local_38.f_32, 1) && Function_15(Local_38.f_32, 2)) && Function_15(Local_38.f_32, 4)) && Function_15(Local_38.f_32, 8))
						{
							Local_38.f_4 = 2;
							Local_38.f_28 = 0;
							Local_38.f_32 = 0;
							break;
						}
						else
						{
							Function_111(&uVar0);
						}
					}
					iVar3 = 0;
					fVar5 = Local_38.f_12;
					if (Function_15(Local_38.f_32, 1))
					{
						iVar3++;
					}
					if (Function_15(Local_38.f_32, 2))
					{
						iVar3++;
					}
					if (Function_15(Local_38.f_32, 4))
					{
						iVar3++;
					}
					if (Function_15(Local_38.f_32, 8))
					{
						iVar3++;
					}
					Local_38.f_12 = (IntToFloat(iVar3) / 4.0f);
					if (Local_38.f_12 == fVar5)
					{
						SET_JOURNAL_ENTRY_PROGRESS(Local_38.f_24, Local_38.f_12, true, 0);
						Function_79();
					}
					break;
				
				case 0x00000002:
					if (Function_112())
					{
						Function_110(2, "AM_ER");
						Function_111(&uVar0);
						Function_87(20, 1, 0);
						Function_85();
						Local_38.f_8 = 2;
						Local_38.f_4 = 0;
						Local_38.f_12 = 0.0f;
						Function_79();
						if (_GET_AMMO_AMOUNT(Global_34573, 13, 1) > _GET_MAX_AMMO_AMOUNT(Global_34573, 13))
						{
							_ADD_AMMO_OF_TYPE(Global_34573, 13, 2.0f, 1, 1);
						}
						Function_28();
						memcpy(&uVar6, StackVal, StackVal, StackVal, StackVal, StackVal, Function_27(), 4);
						Local_38.f_24 = CREATE_JOURNAL_ENTRY(&uVar6, 3, false, "challenge_01");
					}
					break;
			}
			break;
		
		case 0x00000002:
			switch (StackVal)
			{
				case 0x00000000:
					Function_116();
					SET_JOURNAL_ENTRY_PROGRESS(Local_38.f_24, -1.0f, true, 0);
					(*&Local_38 + 36)[0] = GET_CURRENT_GAME_TIME();
					Local_38.f_4 = 1;
					break;
				
				case 0x00000001:
					if (GET_LAST_ATTACK_TIME(Global_34573) < ((*&Local_38 + 36)[0] + 0.3f))
					{
						(*&Local_38 + 36)[0] = GET_LAST_ATTACK_TIME(Global_34573);
						Local_38.f_28 = 0;
					}
					iVar3 = Function_26(2, &uVar0, 1);
					if (iVar3 >= 0)
					{
						iVar2 = 0;
						while (Function_25(&uVar0, &iVar2, &bVar4))
						{
							if ((GET_EVENT_TIME(GET_EVENT_FROM_OBJECT(bVar4)) + 0.3f) <= (*&Local_38 + 36)[0])
							{
								if (Function_24(bVar4) == 31)
								{
									bVar1 = GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(bVar4)));
									if (IS_ACTOR_VALID(bVar1))
									{
										if (IS_ACTOR_HUMAN(bVar1))
										{
											if (Function_17(bVar1) != 4294967295)
											{
												if (!DECOR_CHECK_EXIST(bVar1, "AM_ERcounted"))
												{
													Local_38.f_28++;
													DECOR_SET_BOOL(bVar1, "AM_ERcounted", true);
												}
											}
										}
									}
								}
							}
						}
						if (Local_38.f_28 > 3)
						{
							Local_38.f_4 = 2;
							Local_38.f_28 = 0;
							break;
						}
						else
						{
							Function_111(&uVar0);
						}
					}
					iVar3 = Function_26(91, &uVar0, 1);
					if (iVar3 >= 0)
					{
						iVar2 = 0;
						while (Function_25(&uVar0, &iVar2, &bVar4))
						{
							if ((GET_EVENT_TIME(GET_EVENT_FROM_OBJECT(bVar4)) + 0.3f) <= (*&Local_38 + 36)[0])
							{
								if (Function_24(bVar4) == 31)
								{
									bVar1 = GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(bVar4)));
									if (IS_ACTOR_VALID(bVar1))
									{
										if (IS_ACTOR_HUMAN(bVar1))
										{
											if (Function_17(bVar1) != 4294967295)
											{
												if (!AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(bVar1), iVar10))
												{
													if (!DECOR_CHECK_EXIST(bVar1, "AM_ERcounted"))
													{
														Local_38.f_28++;
														DECOR_SET_BOOL(bVar1, "AM_ERcounted", true);
													}
												}
											}
										}
									}
								}
							}
						}
						if (Local_38.f_28 > 3)
						{
							Local_38.f_4 = 2;
							Local_38.f_28 = 0;
							break;
						}
						else
						{
							Function_111(&uVar0);
						}
					}
					break;
				
				case 0x00000002:
					if (Function_112())
					{
						Function_110(3, "AM_ER");
						Function_111(&uVar0);
						Function_87(20, 1, 0);
						Function_85();
						Local_38.f_8 = 3;
						Local_38.f_4 = 0;
						Local_38.f_12 = 0.0f;
						Function_79();
						if (_GET_AMMO_AMOUNT(Global_34573, 13, 1) > _GET_MAX_AMMO_AMOUNT(Global_34573, 13))
						{
							_ADD_AMMO_OF_TYPE(Global_34573, 13, 2.0f, 1, 1);
						}
						Function_28();
						memcpy(&uVar6, StackVal, StackVal, StackVal, StackVal, StackVal, Function_27(), 4);
						Local_38.f_24 = CREATE_JOURNAL_ENTRY(&uVar6, 3, false, "challenge_01");
					}
					break;
			}
			break;
		
		case 0x00000003:
			switch (StackVal)
			{
				case 0x00000000:
					Function_116();
					SET_JOURNAL_ENTRY_PROGRESS(Local_38.f_24, -1.0f, true, 0);
					(*&Local_38 + 36)[0] = GET_CURRENT_GAME_TIME();
					Local_38.f_4 = 1;
					break;
				
				case 0x00000001:
					if (GET_LAST_ATTACK_TIME(Global_34573) < ((*&Local_38 + 36)[0] + 0.3f))
					{
						(*&Local_38 + 36)[0] = GET_LAST_ATTACK_TIME(Global_34573);
						Local_38.f_28 = 0;
					}
					iVar3 = Function_13(2, "ANIMAL", &uVar0, 1, 0);
					if (iVar3 >= 0)
					{
						iVar2 = 0;
						while (Function_25(&uVar0, &iVar2, &bVar4))
						{
							if ((GET_EVENT_TIME(GET_EVENT_FROM_OBJECT(bVar4)) + 0.3f) <= (*&Local_38 + 36)[0])
							{
								if (Function_24(bVar4) == 31)
								{
									bVar1 = GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(bVar4)));
									if (IS_ACTOR_VALID(bVar1))
									{
										if (IS_ACTOR_ANIMAL(bVar1))
										{
											if (ANIMAL_ACTOR_GET_DOMESTICATION(bVar1) == 1)
											{
												if (!DECOR_CHECK_EXIST(bVar1, "AM_ERcounted"))
												{
													Local_38.f_28++;
													DECOR_SET_BOOL(bVar1, "AM_ERcounted", true);
												}
											}
										}
									}
								}
							}
						}
						if (Local_38.f_28 > 2)
						{
							Local_38.f_4 = 2;
							Local_38.f_28 = 0;
							break;
						}
						else
						{
							Function_111(&uVar0);
						}
					}
					iVar3 = Function_13(91, "ANIMAL", &uVar0, 1, 0);
					if (iVar3 >= 0)
					{
						iVar2 = 0;
						while (Function_25(&uVar0, &iVar2, &bVar4))
						{
							if ((GET_EVENT_TIME(GET_EVENT_FROM_OBJECT(bVar4)) + 0.3f) <= (*&Local_38 + 36)[0])
							{
								if (Function_24(bVar4) == 31)
								{
									bVar1 = GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(bVar4)));
									if (IS_ACTOR_VALID(bVar1))
									{
										if (IS_ACTOR_ANIMAL(bVar1))
										{
											if (ANIMAL_ACTOR_GET_DOMESTICATION(bVar1) == 1)
											{
												if (!AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(bVar1), iVar10))
												{
													if (!DECOR_CHECK_EXIST(bVar1, "AM_ERcounted"))
													{
														Local_38.f_28++;
														DECOR_SET_BOOL(bVar1, "AM_ERcounted", true);
													}
												}
											}
										}
									}
								}
							}
						}
						if (Local_38.f_28 > 2)
						{
							Local_38.f_4 = 2;
							Local_38.f_28 = 0;
							break;
						}
						else
						{
							Function_111(&uVar0);
						}
					}
					break;
				
				case 0x00000002:
					if (Function_112())
					{
						Function_110(4, "AM_ER");
						Function_111(&uVar0);
						Function_87(20, 1, 0);
						Function_85();
						Local_38.f_8 = 4;
						Local_38.f_4 = 0;
						Local_38.f_12 = 0.0f;
						Local_38.f_28 = 0;
						Function_79();
						if (_GET_AMMO_AMOUNT(Global_34573, 13, 1) > _GET_MAX_AMMO_AMOUNT(Global_34573, 13))
						{
							_ADD_AMMO_OF_TYPE(Global_34573, 13, 2.0f, 1, 1);
						}
						Function_28();
						memcpy(&uVar6, StackVal, StackVal, StackVal, StackVal, StackVal, Function_27(), 4);
						Local_38.f_24 = CREATE_JOURNAL_ENTRY(&uVar6, 3, false, "challenge_01");
					}
					break;
			}
			break;
		
		case 0x00000004:
			switch (StackVal)
			{
				case 0x00000000:
					Function_116();
					SET_JOURNAL_ENTRY_PROGRESS(Local_38.f_24, -1.0f, true, 0);
					(*&Local_38 + 36)[0] = GET_CURRENT_GAME_TIME();
					Local_38.f_4 = 1;
					break;
				
				case 0x00000001:
					if (GET_LAST_ATTACK_TIME(Global_34573) < ((*&Local_38 + 36)[0] + 0.3f))
					{
						(*&Local_38 + 36)[0] = GET_LAST_ATTACK_TIME(Global_34573);
					}
					if (Local_38.f_28 == 0)
					{
						if (Function_9(4, 0))
						{
							Local_38.f_28 = 1;
							Function_116();
						}
					}
					if (Function_8(9) || Function_9(4, 0))
					{
						iVar3 = Function_26(2, &uVar0, 1);
						if (iVar3 >= 0)
						{
							iVar2 = 0;
							while (Function_25(&uVar0, &iVar2, &bVar4))
							{
								if ((GET_EVENT_TIME(GET_EVENT_FROM_OBJECT(bVar4)) + 0.3f) <= (*&Local_38 + 36)[0])
								{
									if (Function_24(bVar4) == 31)
									{
										bVar1 = GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(bVar4)));
										if (IS_ACTOR_VALID(bVar1))
										{
											if (IS_ACTOR_HUMAN(bVar1))
											{
												if (Function_17(bVar1) != 4294967295)
												{
													Local_38.f_4 = 2;
													break;
												}
											}
										}
									}
								}
							}
							Function_111(&uVar0);
						}
						iVar3 = Function_26(91, &uVar0, 1);
						if (iVar3 >= 0)
						{
							iVar2 = 0;
							while (Function_25(&uVar0, &iVar2, &bVar4))
							{
								if ((GET_EVENT_TIME(GET_EVENT_FROM_OBJECT(bVar4)) + 0.3f) <= (*&Local_38 + 36)[0])
								{
									if (Function_24(bVar4) == 31)
									{
										bVar1 = GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(bVar4)));
										if (IS_ACTOR_VALID(bVar1))
										{
											if (IS_ACTOR_HUMAN(bVar1))
											{
												if (Function_17(bVar1) != 4294967295)
												{
													if (!AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(bVar1), iVar10))
													{
														Local_38.f_4 = 2;
														break;
													}
												}
											}
										}
									}
								}
							}
							Function_111(&uVar0);
						}
					}
					break;
				
				case 0x00000002:
					if ((Global_3375 && !Global_63096) && Function_112())
					{
						if (!HAS_ACHIEVEMENT_BEEN_PASSED(69))
						{
							AWARD_ACHIEVEMENT(69);
						}
						Function_110(10, "AM_ER");
						Function_111(&uVar0);
						Function_87(20, 1, 0);
						Function_85();
						Local_38.f_8 = 10;
						Local_38.f_12 = 0.0f;
						Function_79();
						Function_28();
						Local_38.f_8 = 5;
					}
					break;
			}
			break;
		
		case 0x00000005:
			if (!UI_ISACTIVE("SaveGame_DoNotInterruptMe"))
			{
				Function_5("AM_ER_RW1_helpz", 0x41200000, 1, 0, 2, 1, 0);
				Local_38.f_8 = 10;
				Local_38.f_4 = 3;
				Function_85();
			}
			break;
	}
	return;
}

void Function_5(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0xEB3 / 3763
{
	struct<4> Var0;
	int iVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_6(Global_6269) };
		}
		PRINT_HELP_B(bParam0, iParam1, iParam2, iParam3, iParam4, iParam5, &Var0, iParam6);
	}
	else
	{
		iVar4 = "";
		PRINT_HELP_B(bParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iVar4, iParam6);
	}
}

struct<16> Function_6(int iParam0) //Position: 0xF2E / 3886
{
	char* cVar0[16];
	
	if (!Function_7())
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

bool Function_7() //Position: 0xF6D / 3949
{
	if (Function_15(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

int Function_8(int iParam0) //Position: 0xF88 / 3976
{
	if (Global_28178 == iParam0)
	{
		return 1;
	}
	return 0;
}

bool Function_9(int iParam0, bool bParam1) //Position: 0xF99 / 3993
{
	int iVar0;
	
	iVar0 = Function_11(iParam0);
	if (!Function_10(iVar0))
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

bool Function_10(int iParam0) //Position: 0xFD6 / 4054
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_11(int iParam0) //Position: 0xFED / 4077
{
	if (!Function_12(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_12(int iParam0) //Position: 0x1007 / 4103
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

int Function_13(int iParam0, char* cParam1, var uParam2, bool bParam3, bool bParam4) //Position: 0x101D / 4125
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	char* cVar5;
	char* cVar6[64];
	char* cVar22[64];
	bool bVar38;
	
	if (!IS_OBJECTSET_VALID(*uParam2))
	{
		LOG_ERROR("AM_COLLECT_PLAYER_EVENTS_OF_TYPE_ON_ACTORENUM: invalid objectset passed as EventCollection");
		return 4294967295;
	}
	if (!IS_ACTOR_VALID(Function_14()))
	{
		return 4294967295;
	}
	bVar0 = Function_2();
	iVar1 = 0;
	bVar2 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar2))
	{
		if (!IS_OBJECT_IN_OBJECTSET(bVar2, *uParam2))
		{
			if (GET_EVENT_TYPE(GET_EVENT_FROM_OBJECT(bVar2)) == iParam0)
			{
				bVar3 = GET_EVENT_PERPETRATOR(GET_EVENT_FROM_OBJECT(bVar2));
				if (IS_OBJECT_VALID(bVar3))
				{
					if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(bVar3)))
					{
						if (IS_ACTOR_LOCAL_PLAYER(GET_ACTOR_FROM_OBJECT(bVar3)))
						{
							bVar4 = GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(bVar2));
							if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(bVar4)))
							{
								cVar5 = GET_ACTOR_ENUM_STRING(GET_ACTOR_FROM_OBJECT(bVar4));
								strcpy(&cVar6, cVar5, 64);
								STRING_LOWER(&cVar6);
								strcpy(&cVar22, cParam1, 64);
								STRING_LOWER(&cVar22);
								if (STRING_CONTAINS_STRING(&cVar6, &cVar22))
								{
									if (DECOR_CHECK_EXIST(bVar2, "AM_NO_PURGE"))
									{
										bVar38 = DECOR_GET_INT(bVar2, "AM_NO_PURGE");
										bVar38++;
									}
									else
									{
										bVar38 = true;
									}
									DECOR_SET_INT(bVar2, "AM_NO_PURGE", bVar38);
									if (bParam3)
									{
										ADD_OBJECT_TO_OBJECTSET(bVar2, *uParam2);
										if (bParam4)
										{
											return 1;
										}
									}
									iVar1++;
								}
							}
						}
					}
				}
			}
		}
		bVar2 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	return iVar1;
}

var Function_14() //Position: 0x11B0 / 4528
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

bool Function_15(var uParam0, int iParam1) //Position: 0x11C5 / 4549
{
	return (uParam0 && iParam1) == 0;
}

void Function_16(var uParam0, int iParam1) //Position: 0x11D2 / 4562
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

int Function_17(bool bParam0) //Position: 0x11E1 / 4577
{
	if (Function_23(bParam0) || Function_22(bParam0))
	{
		return 0;
	}
	if (Function_21(bParam0))
	{
		return 1;
	}
	if (Function_20(bParam0))
	{
		return 2;
	}
	if (Function_19(bParam0))
	{
		return 3;
	}
	if (Function_18(bParam0))
	{
		return 4;
	}
	return 4294967295;
}

bool Function_18(bool bParam0) //Position: 0x122C / 4652
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_ENUM(bParam0);
	if (bVar0 <= 1204 && bVar0 >= 1227)
	{
		return 1;
	}
	return 0;
}

bool Function_19(bool bParam0) //Position: 0x124C / 4684
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_ENUM(bParam0);
	if (bVar0 <= 1222 && bVar0 >= 1227)
	{
		return 1;
	}
	return 0;
}

bool Function_20(bool bParam0) //Position: 0x126C / 4716
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_ENUM(bParam0);
	if (bVar0 <= 1214 && bVar0 >= 1221)
	{
		return 1;
	}
	return 0;
}

bool Function_21(bool bParam0) //Position: 0x128C / 4748
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_ENUM(bParam0);
	if (bVar0 <= 1204 && bVar0 >= 1213)
	{
		return 1;
	}
	return 0;
}

int Function_22(bool bParam0) //Position: 0x12AC / 4780
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_ENUM(bParam0);
	if (bVar0 <= 1228 && bVar0 >= 1239)
	{
		return 1;
	}
	return 0;
}

int Function_23(bool bParam0) //Position: 0x12CC / 4812
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_ENUM(bParam0);
	if (bVar0 <= 3 && bVar0 >= 836)
	{
		if (DECOR_CHECK_EXIST(bParam0, "Zombie"))
		{
			return DECOR_GET_BOOL(bParam0, "Zombie");
		}
	}
	return 0;
}

int Function_24(bool bParam0) //Position: 0x1308 / 4872
{
	if (DECOR_CHECK_EXIST(bParam0, "nAM_Weapon"))
	{
		return DECOR_GET_INT(bParam0, "nAM_Weapon");
	}
	return 4294967295;
}

bool Function_25(var uParam0, int iParam1, bool bParam2) //Position: 0x1335 / 4917
{
	if (*iParam1 == 4294967295)
	{
		return 0;
	}
	if (IS_OBJECTSET_VALID(*uParam0))
	{
		if (GET_OBJECTSET_SIZE(*uParam0) >= *iParam1)
		{
			*bParam2 = GET_INDEXED_OBJECT_IN_OBJECTSET(*iParam1, *uParam0);
			*iParam1++;
			return 1;
		}
	}
	*iParam1 = 4294967295;
	return 0;
}

int Function_26(int iParam0, var uParam1, bool bParam2) //Position: 0x1374 / 4980
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	
	if (!IS_OBJECTSET_VALID(*uParam1))
	{
		LOG_ERROR("AM_COLLECT_PLAYER_EVENTS_OF_TYPE_ON_ACTORENUM: invalid objectset passed as EventCollection");
		return 4294967295;
	}
	if (!IS_ACTOR_VALID(Function_14()))
	{
		return 4294967295;
	}
	bVar0 = Function_2();
	bVar1 = false;
	bVar2 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar2))
	{
		if (!IS_OBJECT_IN_OBJECTSET(bVar2, *uParam1))
		{
			if (GET_EVENT_TYPE(GET_EVENT_FROM_OBJECT(bVar2)) == iParam0)
			{
				bVar3 = GET_EVENT_PERPETRATOR(GET_EVENT_FROM_OBJECT(bVar2));
				if (IS_OBJECT_VALID(bVar3))
				{
					if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(bVar3)))
					{
						if (IS_ACTOR_LOCAL_PLAYER(GET_ACTOR_FROM_OBJECT(bVar3)))
						{
							if (DECOR_CHECK_EXIST(bVar2, "AM_NO_PURGE"))
							{
								bVar4 = DECOR_GET_INT(bVar2, "AM_NO_PURGE");
								bVar4++;
							}
							else
							{
								bVar4 = true;
							}
							DECOR_SET_INT(bVar2, "AM_NO_PURGE", bVar4);
							if (bParam2)
							{
								ADD_OBJECT_TO_OBJECTSET(bVar2, *uParam1);
							}
							bVar1++;
						}
					}
				}
			}
		}
		bVar2 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	return bVar1;
}

struct<24> Function_27() //Position: 0x14B7 / 5303
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Local_38 + 16), 6);
	stradd(&cVar0, "_", 24);
	stradd(&cVar0, INT_TO_STRING(StackVal), 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_28() //Position: 0x14E1 / 5345
{
	if (!Function_78())
	{
		if (!Function_77(0, 0, 1, 1))
		{
			Function_66(1);
			Function_65(1, 8);
		}
		else
		{
			Function_64();
		}
	}
	else
	{
		Function_29(0);
	}
	return;
}

void Function_29(bool bParam0) //Position: 0x1510 / 5392
{
	NET_LOG(true, "SaveLoad", "Multiplayer Save Triggered, will be picked up by Multiplayer_update_thread soon enough", false, false, false, false);
	Function_62(2);
	if (bParam0)
	{
		Function_62(1);
	}
	else
	{
		Function_59(1);
	}
	Function_30();
	return;
}

void Function_30() //Position: 0x1599 / 5529
{
	Function_57();
	Function_56();
	Function_56();
	Function_55();
	Function_55();
	Function_54();
	Function_54();
	Function_37(0);
	Function_37(0);
	if (!Function_78())
	{
		Function_35();
		Function_34();
		Function_33();
		Function_32();
		if (Global_74542[19910].f_16 != 1 || UI_HAS_CHEATED())
		{
			Global_74542[19910].f_16 = 1;
		}
	}
	Function_31();
	return;
}

void Function_31() //Position: 0x15EB / 5611
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

void Function_32() //Position: 0x16F1 / 5873
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

void Function_33() //Position: 0x1724 / 5924
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

void Function_34() //Position: 0x18B2 / 6322
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

void Function_35() //Position: 0x1A66 / 6758
{
	Function_36(&Global_28260, 1, 0);
	return;
}

void Function_36(int iParam0, bool bParam1, int iParam2) //Position: 0x1A74 / 6772
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
	
	bVar0 = Function_14();
	if (IS_ACTOR_VALID(bVar0))
	{
		iParam0->f_1012 = GET_NUM_WEAPONS_IN_INVENTORY(bVar0);
		iVar7 = 4294967294;
		bVar8 = GET_WEAPON_IN_HAND(bVar0);
		if (bVar8 != 4294967295)
		{
			if (GET_WEAPON_IS_EXTERNALLY_CREATED(bVar0, bVar8) || iParam2)
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

struct<8> Function_37(int iParam0) //Position: 0x1C65 / 7269
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
					iVar2 = ((Function_53((50 + iVar4)) + Function_53((183 + iVar4))) + Function_53((90 + iVar4)));
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
	Function_38(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_38(int iParam0, bool bParam1, bool bParam2) //Position: 0x1D0B / 7435
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
		Function_52(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_51(iParam0);
	if (bParam2)
	{
		Function_39(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_39(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x1FA6 / 8102
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_50(390))), 32);
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
					bVar19 = (Function_49(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_49(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_47(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, false, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_44(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_42(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_41(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_40(), &Var9);
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

var Function_40() //Position: 0x25D3 / 9683
{
	int iVar0;
	
	return iVar0;
}

var Function_41(int iParam0) //Position: 0x25DB / 9691
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_42(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x25EC / 9708
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_43("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_43("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_43("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_43(char* cParam0, bool bParam1) //Position: 0x26E1 / 9953
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_44(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x26FA / 9978
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_46(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_45(Function_46(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_45(int iParam0, int iParam1) //Position: 0x275F / 10079
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_46(int iParam0, bool bParam1) //Position: 0x2771 / 10097
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_47(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x2783 / 10115
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
	if (((Function_48(iParam0) != 19 || Function_48(iParam0) != 17) || Function_48(iParam0) != 10) || Function_48(iParam0) != 9)
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

int Function_48(int iParam0) //Position: 0x28B3 / 10419
{
	return Global_35278[iParam020].f_48;
}

float Function_49(int iParam0) //Position: 0x28C2 / 10434
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_50(int iParam0) //Position: 0x28FB / 10491
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_51(int iParam0) //Position: 0x2938 / 10552
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

int Function_52(int iParam0, bool bParam1, bool bParam2) //Position: 0x2AD2 / 10962
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

int Function_53(bool bParam0) //Position: 0x2D16 / 11542
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

struct<8> Function_54() //Position: 0x2D57 / 11607
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
		iVar2 = ((Function_53((50 + iVar3) + 15) + Function_53((183 + iVar3) + 15)) + Function_53((90 + iVar3) + 15));
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
	Function_38(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_55() //Position: 0x2DE0 / 11744
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
			iVar2 = ((Function_53((50 + iVar3) + 8) + Function_53((183 + iVar3) + 8)) + Function_53((90 + iVar3) + 8));
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
	Function_38(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_56() //Position: 0x2E77 / 11895
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
		iVar2 = ((Function_53((50 + iVar3)) + Function_53((183 + iVar3))) + Function_53((90 + iVar3)));
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
	Function_38(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_57() //Position: 0x2EF6 / 12022
{
	if (Global_49308 > 0.1f)
	{
		Global_49308 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_58(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_38(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_58(int iParam0, bool bParam1, int iParam2) //Position: 0x2F2F / 12079
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
	Function_52(iParam0, bParam1, 1);
	Function_51(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_39(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

void Function_59(int iParam0) //Position: 0x3139 / 12601
{
	Function_60(&Global_79338, iParam0);
	return;
}

void Function_60(var uParam0, int iParam1) //Position: 0x3148 / 12616
{
	Function_61(uParam0, iParam1);
	return;
}

void Function_61(var uParam0, int iParam1) //Position: 0x3155 / 12629
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	return;
}

void Function_62(int iParam0) //Position: 0x3168 / 12648
{
	Function_63(&Global_79338, iParam0);
	return;
}

void Function_63(var uParam0, int iParam1) //Position: 0x3177 / 12663
{
	Function_16(uParam0, iParam1);
	return;
}

void Function_64() //Position: 0x3184 / 12676
{
	return;
}

void Function_65(int iParam0, int iParam1) //Position: 0x318A / 12682
{
	if (Global_3381)
	{
		return;
	}
	Global_3412 = iParam0;
	Global_3416 = iParam1;
	if (!Global_3365 && !Function_78())
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", true);
	return;
}

void Function_66(bool bParam0) //Position: 0x31CC / 12748
{
	if ((Global_3395 || Global_3381) || Global_3396)
	{
		return;
	}
	Global_34165.f_24 = 4294967295;
	Function_67();
	Global_34165.f_28 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_30();
	SAVE_SOFT_SAVE(0);
	if (bParam0)
	{
		Function_61(&Global_63095, 1);
		Function_61(&Global_63095, 2);
	}
	Global_88793 = 1;
	return;
}

void Function_67() //Position: 0x321D / 12829
{
	vector3 vVar0;
	var uVar3;
	
	Global_34165.f_24 = 4294967295;
	if (Function_7())
	{
		Function_74(&Global_34165 + 12, &Global_34165 + 16);
		vVar0 = { StackVal, StackVal, Function_74(&Global_34165 + 12, &Global_34165 + 16) };
	}
	else
	{
		Function_69(&Global_34165 + 12, &Global_34165 + 16, 0, 0);
		vVar0 = { StackVal, StackVal, Function_69(&Global_34165 + 12, &Global_34165 + 16, 0, 0) };
	}
	if (Function_68(StackVal, StackVal, vVar0))
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

bool Function_68(vector3 vParam0) //Position: 0x32D8 / 13016
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_69(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x32F0 / 13040
{
	int iVar0;
	
	iVar0 = Function_72(uParam2, uParam3);
	if (Function_71(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_34165.f_24 = Global_29005;
			Function_16(&Global_63095, 1);
			Function_61(&Global_63095, 2);
			Global_63084 = { StackVal, StackVal, Global_16537[iVar021] };
			*uParam1 = 0;
		}
		else
		{
			Function_16(&Global_63095, 2);
			Function_61(&Global_63095, 1);
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
		Function_16(&Global_63095, 2);
		Function_61(&Global_63095, 1);
		*uParam1 = 1;
		*uParam0 = 290.0f;
		return -2833.843f, 50.332f, 2418.003f;
	}
	Function_70();
	return StackVal, StackVal, Function_70();
}

vector3 Function_70() //Position: 0x33D7 / 13271
{
	return 0.0f, 0.0f, 0.0f;
}

bool Function_71(int iParam0) //Position: 0x33E0 / 13280
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_72(bool bParam0, bool bParam1) //Position: 0x33F6 / 13302
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
				fVar2 = Function_73(StackVal, StackVal, StackVal, StackVal, Global_34574, Global_16537[iVar321]);
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
		fVar2 = Function_73(StackVal, StackVal, Global_34574, -2833.843f, 50.332f, 2418.003f);
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_71(bVar0) && !bParam1)
	{
		bVar0 = Function_72(bParam0, 1);
	}
	return bVar0;
}

float Function_73(vector3 vParam0, vector3 vParam3) //Position: 0x34BD / 13501
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

vector3 Function_74(var uParam0, int iParam1) //Position: 0x34DA / 13530
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	bool bVar10;
	
	*uParam0 = *uParam0;
	bVar0 = 99999.99f;
	vVar1 = { 0.0f, 0.0f, 0.0f };
	Function_76(Global_34573, &vVar4);
	if (!Function_75(Global_30640[0]))
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
	if (!Function_75(Global_30640[2]))
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
	if (!Function_75(Global_30640[1]))
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
	if (!Function_75(Global_30658[1]))
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
	if (!Function_75(Global_30658[3]))
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
	if (!Function_75(Global_30658[2]))
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
	if (!Function_75(Global_30658[4]))
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
	if (!Function_75(Global_30668[0]))
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
	if (!Function_75(Global_30668[1]))
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
	if (!Function_75(Global_30668[2]))
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
	if (!Function_75(Global_30679[0]))
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
	if (!Function_75(Global_30685[0]))
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
	if (!Function_75(Global_30685[1]))
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
	if (!Function_75(Global_30685[2]))
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
	if (!Function_75(Global_30693[0]))
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
	if (!Function_75(Global_30693[1]))
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
	if (!Function_75(Global_30693[2]))
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
	if (!Function_75(Global_30707[2]))
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
	if (!Function_75(Global_30707[3]))
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
	if (!Function_75(Global_30707[0]))
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
	if (!Function_75(Global_30717[0]))
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
	if (!Function_75(Global_30723[2]))
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
	if (!Function_75(Global_30723[1]))
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
	if (!Function_75(Global_30723[0]))
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
	if (!Function_75(Global_30679[1]))
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
	if (!Function_75(Global_30707[1]))
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
	Function_16(&Global_63095, 2);
	Function_61(&Global_63095, 1);
	*iParam1 = 0;
	if (Function_68(StackVal, StackVal, vVar1))
	{
		vVar1 = { -63.861f, 116.861f, 1414.684f };
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(vVar1);
	PRINTNL();
	return StackVal, StackVal, vVar1;
}

bool Function_75(int iParam0) //Position: 0x3CFF / 15615
{
	var uVar0;
	
	uVar0 = Global_29008[iParam0];
	return (((Function_15(uVar0, 0x1000000) || Function_15(uVar0, 0x2000000)) || Function_15(uVar0, 0x4000000)) || !Function_15(uVar0, 0x10000000));
}

void Function_76(bool bParam0, bool bParam1) //Position: 0x3D3A / 15674
{
	GET_POSITION(bParam0, bParam1);
	return;
}

bool Function_77(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x3D47 / 15687
{
	iParam0 = iParam0;
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
	if (Global_3393 && iParam2)
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
	if (Global_59353 && iParam2)
	{
		return 1;
	}
	if (DECOR_CHECK_EXIST(Global_34573, "bPlayerSleeping"))
	{
		return 1;
	}
	return 0;
}

bool Function_78() //Position: 0x3DEB / 15851
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_79() //Position: 0x3DF4 / 15860
{
	iLocal_61 = Function_80(10, 1, 5);
	Global_13172[iLocal_6111].f_20 = StackVal;
	Global_13172[iLocal_6111].f_28 = Local_38.f_12;
	Global_13172[iLocal_6111].f_24 = Local_38.f_28;
	Global_13172[iLocal_6111].f_16 = Local_38.f_32;
	return;
}

int Function_80(bool bParam0, bool bParam1, bool bParam2) //Position: 0x3E37 / 15927
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_84(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_13172[iVar011] == iVar1)
		{
			return iVar0;
		}
		if (Global_13172[iVar011] != 0 && iVar0 < 0)
		{
			return Function_81(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_81(bParam0, bParam1, bParam2, 4294967295);
}

int Function_81(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x3E95 / 16021
{
	var uVar0;
	
	if (!Function_83(bParam2))
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
	uVar0 = Function_84(bParam0, bParam1, bParam2);
	if (bParam3 != 4294967295 || bParam3 <= 275)
	{
		bParam3 = Function_82(uVar0);
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

int Function_82(int iParam0) //Position: 0x3FEA / 16362
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

bool Function_83(int iParam0) //Position: 0x4029 / 16425
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_84(int iParam0, int iParam1, bool bParam2) //Position: 0x403E / 16446
{
	return (((bParam2 && 15) || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

void Function_85() //Position: 0x405E / 16478
{
	struct<6> Var0;
	
	CLEAR_JOURNAL_ENTRY(Local_38.f_24);
	memcpy(&Var0, StackVal, *(&Local_38 + 16), 6);
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_86() };
	APPEND_JOURNAL_ENTRY_DETAIL(Local_38.f_24, &Var0, 0, 2, false);
	PREPEND_JOURNAL_ENTRY(Local_38.f_24, true);
	SET_JOURNAL_ENTRY_PROGRESS(Local_38.f_24, 1.0f, false, 0);
	return;
}

struct<24> Function_86() //Position: 0x409B / 16539
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Local_38 + 16), 6);
	stradd(&cVar0, "_", 24);
	stradd(&cVar0, INT_TO_STRING(StackVal), 24);
	stradd(&cVar0, "_des", 24);
	stradd(&cVar0, "z", 24);
	if (StackVal == 4)
	{
		if (Function_9(4, 0))
		{
			stradd(&cVar0, "2", 24);
		}
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_87(int iParam0, bool bParam1, bool bParam2) //Position: 0x40F0 / 16624
{
	int iVar0;
	bool bVar1;
	
	if (Function_109(0) && (!Global_3380 || iParam0 == 100))
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_108())
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
	iVar0 = Function_53(3);
	Function_105();
	if ((iVar0 + bVar1) >= 10000)
	{
		bVar1 = (10000 - iVar0);
	}
	if (bParam1)
	{
		Function_103(3, bVar1);
		if (!bParam2)
		{
			if (!Function_102(Global_76848, 4))
			{
				Function_97(Global_34573, 4, 3, 0);
			}
		}
	}
	else
	{
		Function_96(3, bVar1, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_49(3));
	iVar0 = Function_53(3);
	switch (Global_12976.f_156)
	{
		case 0x00000000:
			if (iVar0 > 1000)
			{
				Global_12976.f_156 = 1;
				Function_89(4, Function_95(Global_12976.f_156), 1);
				Function_88(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000001:
			if (iVar0 > 2000)
			{
				Global_12976.f_156 = 2;
				Function_89(4, Function_95(Global_12976.f_156), 1);
				Function_88(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000002:
			if (iVar0 > 4000)
			{
				Global_12976.f_156 = 3;
				Function_89(4, Function_95(Global_12976.f_156), 1);
				Function_88(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000003:
			if (iVar0 > 7000)
			{
				Global_12976.f_156 = 4;
				Function_89(4, Function_95(Global_12976.f_156), 1);
				Function_88(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000004:
			if (iVar0 > 10000)
			{
				Global_12976.f_156 = 5;
				Function_89(4, Function_95(Global_12976.f_156), 1);
				Function_88(Global_12976.f_152, Global_12976.f_156);
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

void Function_88(int iParam0, int iParam1) //Position: 0x42BF / 17087
{
	switch (iParam1)
	{
		case 0x00000000:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(Global_34573, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0.2f);
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
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0.3f);
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
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0.4f);
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
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0.5f);
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
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(Global_34573, 0.8f);
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

int Function_89(int iParam0, char* cParam1, bool bParam2) //Position: 0x451D / 17693
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
	Function_93(iParam0, cParam1, 0, 1);
	iVar1 = Function_90();
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

int Function_90() //Position: 0x46A2 / 18082
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
	Function_91();
	return 0;
}

void Function_91() //Position: 0x4741 / 18241
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
		Function_92(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_92(int iParam0) //Position: 0x47F0 / 18416
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

int Function_93(int iParam0, bool bParam1, bool bParam2, var uParam3) //Position: 0x484E / 18510
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
		Function_94(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_35278[iParam020] + 16), 3.0f, uParam3);
	}
	return 1;
}

void Function_94(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, char* cParam9, bool bParam10) //Position: 0x4BA0 / 19360
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

var Function_95(int iParam0) //Position: 0x4C23 / 19491
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

int Function_96(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x4CB2 / 19634
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
	Function_52(iParam0, TO_FLOAT(bParam1), 1);
	Function_51(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_39(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, iParam3);
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

void Function_97(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x4ED2 / 20178
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_99(bParam0, iParam1, iParam2) && !bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_98(&cVar1, iParam2);
	if (!DECOR_CHECK_EXIST(bParam0, &cVar1))
	{
		DECOR_SET_INT(bParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(bParam0, &cVar1, (DECOR_GET_INT(bParam0, &cVar1) || bVar0));
	}
}

void Function_98(char* cParam0, int iParam1) //Position: 0x4F3E / 20286
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

bool Function_99(bool bParam0, var uParam1, int iParam2) //Position: 0x4F75 / 20341
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
		if (Function_101(DECOR_GET_INT(bParam0, &cVar1)) > 3)
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
		switch (Function_100(uVar0))
		{
			case 0x00000002:
				if (!Function_102(Global_76847, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_100(char* cParam0) //Position: 0x4FED / 20461
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

int Function_101(int iParam0) //Position: 0x508E / 20622
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_61(&iVar1, 2147483648);
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

bool Function_102(var uParam0, int iParam1) //Position: 0x50CB / 20683
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_103(var uParam0, bool bParam1) //Position: 0x50DE / 20702
{
	bool bVar0;
	int iVar1;
	
	Function_96(uParam0, bParam1, 0, 0);
	bVar0 = uParam0;
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
	iVar1 = Function_104(uParam0, 4294967295);
	if (iVar1 > 0)
	{
		if (Global_49205[iVar120].f_72 != 0 || Global_49205[iVar120].f_72 != 1)
		{
			Global_49199[iVar1] = (Global_49199[iVar1] + TO_FLOAT(bParam1));
			strcpy(&Global_49205[iVar120] + 8, "QME+", 8);
			strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
			Global_49205[iVar120].f_48 = 26;
			Global_49205[iVar120].f_68 = uParam0;
			Global_49205[iVar120].f_72 = 0;
			return 1;
		}
	}
	iVar1 = Function_90();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME+INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = uParam0;
	Global_49205[iVar120].f_72 = 1;
	return 1;
}

var Function_104(int iParam0, int iParam1) //Position: 0x527B / 21115
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

void Function_105() //Position: 0x52BC / 21180
{
	Function_107(3, 0.0f);
	Function_106(3, 10000.0f);
	return;
}

int Function_106(int iParam0, int iParam1) //Position: 0x52D2 / 21202
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_64 = iParam1;
	return 1;
}

int Function_107(int iParam0, int iParam1) //Position: 0x5312 / 21266
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_60 = iParam1;
	return 1;
}

bool Function_108() //Position: 0x5352 / 21330
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

var Function_109(int iParam0) //Position: 0x537D / 21373
{
	return (*&Global_12976 + 104)[iParam0];
}

void Function_110(int iParam0, bool bParam1) //Position: 0x538C / 21388
{
	char* cVar0[16];
	
	switch (iParam0)
	{
		case 0x0000000A:
			strcpy(&cVar0, "AM_MP_rank10", 16);
			break;
		
		default:
			strcpy(&cVar0, "AM_Rank", 16);
			stradd(&cVar0, INT_TO_STRING((iParam0 - 1)), 16);
			break;
	}
	if (!Global_49306)
	{
		SET_STAT_MESSAGE(STRING_TO_HASH(bParam1), UI_GET_STRING(&cVar0), 3.0f, "", 0, 4294967295, 0, 0, 0, 0, false, false, 0);
	}
	return;
}

void Function_111(var uParam0) //Position: 0x53F2 / 21490
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (IS_OBJECTSET_VALID(*uParam0))
	{
		bVar0 = false;
		if (GET_OBJECTSET_SIZE(*uParam0) >= bVar0)
		{
			bVar1 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, *uParam0);
			while (IS_OBJECT_VALID(bVar1))
			{
				if (DECOR_CHECK_EXIST(bVar1, "AM_NO_PURGE"))
				{
					bVar2 = DECOR_GET_INT(bVar1, "AM_NO_PURGE");
					bVar2 = (bVar2 - 1);
					DECOR_SET_INT(bVar1, "AM_NO_PURGE", bVar2);
				}
				bVar0++;
				if (GET_OBJECTSET_SIZE(*uParam0) >= bVar0)
				{
					bVar1 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, *uParam0);
				}
				else
				{
					bVar1 = "";
				}
			}
		}
		DISBAND_OBJECTSET(*uParam0);
	}
	else
	{
		LOG_ERROR("AM_PURGE_COLLECTION: attempting to disband an invalid objectset");
	}
	return;
}

bool Function_112() //Position: 0x54DB / 21723
{
	if (Function_113() != (Global_63000 - 1) && UI_IS_MESSAGE_QUEUE_EMPTY(4))
	{
		return 1;
	}
	return 0;
}

int Function_113() //Position: 0x54F8 / 21752
{
	int iVar0;
	
	iVar0 = (Global_63000 - 1);
	while (iVar0 >= 0)
	{
		if (Global_63000[iVar08] == 4294967295)
		{
			return iVar0;
		}
		iVar0 = (iVar0 - 1);
	}
	Function_114();
	return 0;
}

void Function_114() //Position: 0x5526 / 21798
{
	int iVar0;
	int iVar1;
	
	iVar0 = (Global_63000 - 1);
	iVar1 = (iVar0 - 1);
	while (iVar1 >= 0)
	{
		Global_63000[iVar08] = Global_63000[iVar18];
		Global_63000[iVar08].f_4 = StackVal;
		*(&Global_63000[iVar08] + 8) = { StackVal, StackVal, StackVal, *(&Global_63000[iVar18] + 8) };
		*(&Global_63000[iVar08] + 24) = { StackVal, *(&Global_63000[iVar18] + 24) };
		Function_115(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_115(int iParam0) //Position: 0x559D / 21917
{
	Global_63000[iParam08] = 4294967295;
	Global_63000[iParam08].f_4 = 4294967295;
	strcpy(&Global_63000[iParam08] + 8, "NHIL", 16);
	strcpy(&Global_63000[iParam08] + 24, "NHIL", 8);
	return;
}

void Function_116() //Position: 0x55D9 / 21977
{
	struct<6> Var0;
	
	CLEAR_JOURNAL_ENTRY(Local_38.f_24);
	PREPEND_JOURNAL_ENTRY(Local_38.f_24, false);
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_27() };
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_86() };
	PREPEND_JOURNAL_ENTRY_DETAIL(Local_38.f_24, &Var0, 0, 2, false);
	return;
}

bool Function_117(int iParam0) //Position: 0x5608 / 22024
{
	if (Global_74542[iParam010] == 6)
	{
		return 1;
	}
	return 0;
}

var Function_118(char* cParam0) //Position: 0x561D / 22045
{
	char* cVar0;
	bool bVar1;
	char* cVar2[16];
	
	bVar1 = Function_3();
	if (IS_LAYOUTREF_VALID(bVar1))
	{
		strcpy(&cVar2, "nAM_OBJSET", 16);
		stradd(&cVar2, cParam0, 16);
		cVar0 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(bVar1, &cVar2));
	}
	return cVar0;
}

void Function_119() //Position: 0x5654 / 22100
{
	var uVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	float fVar5;
	var uVar6;
	
	if (StackVal == 3)
	{
		return;
	}
	uVar0 = Function_118("TM_SP");
	switch (StackVal)
	{
		case 0x00000000:
			switch (StackVal)
			{
				case 0x00000000:
					if (Function_117(5))
					{
						Function_130();
						SET_JOURNAL_ENTRY_PROGRESS(Local_16.f_24, -1.0f, true, 0);
						Local_16.f_32 = 1;
					}
					Local_16.f_4 = 1;
					break;
				
				case 0x00000001:
					if (ACTOR_HAS_WEAPON(Global_34573, 29))
					{
						Local_16.f_4 = 2;
					}
					else if (Function_117(5))
					{
						if (Local_16.f_32 != 1)
						{
							Local_16.f_32 = 1;
							Function_130();
							SET_JOURNAL_ENTRY_PROGRESS(Local_16.f_24, -1.0f, true, 0);
						}
					}
					break;
				
				case 0x00000002:
					if (((Global_3375 && !Global_63096) && !Global_59353) && Function_112())
					{
						Function_111(&uVar0);
						Function_110(1, "AM_TM");
						Function_87(20, 1, 0);
						Function_128();
						Local_16.f_8 = 1;
						Local_16.f_4 = 0;
						Local_16.f_12 = 0.0f;
						Local_16.f_32 = 0;
						Function_127();
						Function_28();
						memcpy(&uVar6, StackVal, StackVal, StackVal, StackVal, StackVal, Function_126(), 4);
						Local_16.f_24 = CREATE_JOURNAL_ENTRY(&uVar6, 3, false, "challenge_01");
					}
					break;
			}
			break;
		
		case 0x00000001:
			switch (StackVal)
			{
				case 0x00000000:
					Function_130();
					SET_JOURNAL_ENTRY_PROGRESS(Local_16.f_24, Local_16.f_12, true, 0);
					Local_16.f_4 = 1;
					break;
				
				case 0x00000001:
					iVar3 = Function_26(2, &uVar0, 1);
					if (iVar3 >= 0)
					{
						iVar2 = 0;
						while (Function_25(&uVar0, &iVar2, &bVar4))
						{
							if (IS_OBJECT_VALID(bVar4))
							{
								if (Function_24(bVar4) == 29)
								{
									bVar1 = GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(bVar4)));
									if (IS_ACTOR_VALID(bVar1))
									{
										if (IS_ACTOR_HUMAN(bVar1))
										{
											if (IS_ACTOR_RIDING_AND_IN_SADDLE(Global_34573))
											{
												Function_16(&Local_16 + 32, 2);
											}
											else if (DECOR_CHECK_EXIST(bVar4, "nAM_Linked"))
											{
												Function_16(&Local_16 + 32, 4);
											}
											else
											{
												Function_16(&Local_16 + 32, 1);
											}
										}
									}
								}
							}
						}
						Function_111(&uVar0);
						if ((Function_15(Local_16.f_32, 2) && Function_15(Local_16.f_32, 4)) && Function_15(Local_16.f_32, 1))
						{
							Local_16.f_4 = 2;
							Local_16.f_32 = 0;
						}
						else
						{
							iVar3 = 0;
							fVar5 = Local_16.f_12;
							if (Function_15(Local_16.f_32, 2))
							{
								iVar3++;
							}
							if (Function_15(Local_16.f_32, 4))
							{
								iVar3++;
							}
							if (Function_15(Local_16.f_32, 1))
							{
								iVar3++;
							}
							Local_16.f_12 = (IntToFloat(iVar3) / 3.0f);
							if (Local_16.f_12 == fVar5)
							{
								SET_JOURNAL_ENTRY_PROGRESS(Local_16.f_24, Local_16.f_12, true, 0);
								Function_127();
							}
						}
					}
					break;
				
				case 0x00000002:
					if (Function_112())
					{
						Function_110(2, "AM_TM");
						Function_111(&uVar0);
						Function_87(20, 1, 0);
						Function_128();
						Local_16.f_8 = 2;
						Local_16.f_4 = 0;
						Local_16.f_12 = 0.0f;
						Function_127();
						if (_GET_AMMO_AMOUNT(Global_34573, 12, 1) > _GET_MAX_AMMO_AMOUNT(Global_34573, 12))
						{
							_ADD_AMMO_OF_TYPE(Global_34573, 12, 5.0f, 1, 1);
						}
						Function_28();
						memcpy(&uVar6, StackVal, StackVal, StackVal, StackVal, StackVal, Function_126(), 4);
						Local_16.f_24 = CREATE_JOURNAL_ENTRY(&uVar6, 3, false, "challenge_01");
					}
					break;
			}
			break;
		
		case 0x00000002:
			switch (StackVal)
			{
				case 0x00000000:
					Function_130();
					SET_JOURNAL_ENTRY_PROGRESS(Local_16.f_24, -1.0f, true, 0);
					Local_16.f_4 = 1;
					break;
				
				case 0x00000001:
					iVar3 = Function_13(2, "FLYING_ANIMAL", &uVar0, 1, 0);
					if (iVar3 >= 0)
					{
						iVar2 = 0;
						while (Function_25(&uVar0, &iVar2, &bVar4))
						{
							if (IS_OBJECT_VALID(bVar4))
							{
								if (Function_24(bVar4) == 29)
								{
									if (Function_125(bVar4))
									{
										Local_16.f_4 = 2;
										break;
									}
								}
							}
						}
					}
					Function_111(&uVar0);
					break;
				
				case 0x00000002:
					if (Function_112())
					{
						Function_110(3, "AM_TM");
						Function_111(&uVar0);
						Function_87(20, 1, 0);
						Function_128();
						Local_16.f_8 = 3;
						Local_16.f_4 = 0;
						Local_16.f_12 = 0.0f;
						Function_127();
						if (_GET_AMMO_AMOUNT(Global_34573, 12, 1) > _GET_MAX_AMMO_AMOUNT(Global_34573, 12))
						{
							_ADD_AMMO_OF_TYPE(Global_34573, 12, 5.0f, 1, 1);
						}
						Function_28();
						memcpy(&uVar6, StackVal, StackVal, StackVal, StackVal, StackVal, Function_126(), 4);
						Local_16.f_24 = CREATE_JOURNAL_ENTRY(&uVar6, 3, false, "challenge_01");
					}
					break;
			}
			break;
		
		case 0x00000003:
			switch (StackVal)
			{
				case 0x00000000:
					Function_130();
					(*&Local_16 + 36)[0] = Function_124((50 + 29));
					(*&Local_16 + 36)[1] = GET_CURRENT_GAME_TIME();
					SET_JOURNAL_ENTRY_PROGRESS(Local_16.f_24, 0.0f, true, 0);
					Local_16.f_4 = 1;
					break;
				
				case 0x00000001:
					iVar3 = Function_26(6, &uVar0, 1);
					if (iVar3 >= 0)
					{
						iVar2 = 0;
						while (Function_25(&uVar0, &iVar2, &bVar4))
						{
							if (IS_OBJECT_VALID(bVar4))
							{
								if (Function_24(bVar4) == 29)
								{
									if (GET_EVENT_TIME(GET_EVENT_FROM_OBJECT(bVar4)) < (*&Local_16 + 36)[1])
									{
										(*&Local_16 + 36)[1] = GET_EVENT_TIME(GET_EVENT_FROM_OBJECT(bVar4));
									}
								}
							}
						}
					}
					Function_111(&uVar0);
					if (Function_124((50 + 29)) > (*&Local_16 + 36)[0])
					{
						if ((GET_CURRENT_GAME_TIME() - (*&Local_16 + 36)[1]) < 1.5f)
						{
							Local_16.f_28 = 0;
							(*&Local_16 + 36)[0] = Function_124((50 + 29));
						}
					}
					else
					{
						(*&Local_16 + 36)[0] = Function_124((50 + 29));
					}
					iVar3 = Function_26(2, &uVar0, 1);
					if (iVar3 >= 0)
					{
						iVar2 = 0;
						while (Function_25(&uVar0, &iVar2, &bVar4))
						{
							if (IS_OBJECT_VALID(bVar4))
							{
								if (Function_24(bVar4) == 29)
								{
									bVar1 = GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(bVar4)));
									if (IS_ACTOR_VALID(bVar1))
									{
										if (IS_ACTOR_HUMAN(bVar1))
										{
											Local_16.f_28++;
										}
									}
								}
							}
						}
					}
					Function_111(&uVar0);
					if (Local_16.f_28 > 5)
					{
						Local_16.f_4 = 2;
					}
					else
					{
						fVar5 = Local_16.f_12;
						Local_16.f_12 = (IntToFloat(Local_16.f_28) / 5.0f);
						if (Local_16.f_12 == fVar5)
						{
							SET_JOURNAL_ENTRY_PROGRESS(Local_16.f_24, Local_16.f_12, true, 0);
						}
					}
					break;
				
				case 0x00000002:
					if (Function_112())
					{
						Function_110(4, "AM_TM");
						Function_111(&uVar0);
						Function_87(20, 1, 0);
						Function_128();
						Local_16.f_8 = 4;
						Local_16.f_4 = 0;
						Local_16.f_12 = 0.0f;
						Function_127();
						if (_GET_AMMO_AMOUNT(Global_34573, 12, 1) > _GET_MAX_AMMO_AMOUNT(Global_34573, 12))
						{
							_ADD_AMMO_OF_TYPE(Global_34573, 12, 5.0f, 1, 1);
						}
						Function_28();
						memcpy(&uVar6, StackVal, StackVal, StackVal, StackVal, StackVal, Function_126(), 4);
						Local_16.f_24 = CREATE_JOURNAL_ENTRY(&uVar6, 3, false, "challenge_01");
					}
					break;
			}
			break;
		
		case 0x00000004:
			switch (StackVal)
			{
				case 0x00000000:
					Function_130();
					Local_16.f_32 = 0;
					Local_16.f_28 = 0;
					SET_JOURNAL_ENTRY_PROGRESS(Local_16.f_24, 0.0f, true, 0);
					if (UI_ISACTIVE("ZMeter"))
					{
						(*&Local_16 + 36)[0] = GET_CURRENT_GAME_TIME();
						Function_123();
						SET_JOURNAL_ENTRY_PROGRESS(Local_16.f_24, 0.5f, true, 0);
					}
					Local_16.f_4 = 1;
					break;
				
				case 0x00000001:
					if (Function_15(Local_16.f_32, 2))
					{
						if (Function_15(Local_16.f_32, 1))
						{
							iVar3 = Function_26(2, &uVar0, 1);
							if (iVar3 >= 0)
							{
								iVar2 = 0;
								while (Function_25(&uVar0, &iVar2, &bVar4))
								{
									if (IS_OBJECT_VALID(bVar4))
									{
										if (Function_24(bVar4) == 29 && Function_24(bVar4) == 4294967295)
										{
											if (GET_EVENT_TIME(GET_EVENT_FROM_OBJECT(bVar4)) < (*&Local_16 + 36)[0])
											{
												SET_JOURNAL_ENTRY_PROGRESS(Local_16.f_24, 0.0f, true, 0);
												Function_61(&Local_16 + 32, 1);
											}
										}
									}
								}
							}
							Function_111(&uVar0);
						}
						if (!Function_121(Local_16.f_28) || Global_29006 == Local_16.f_28)
						{
							if (Function_15(Local_16.f_32, 1))
							{
								if (Function_120())
								{
									Local_16.f_4 = 2;
								}
							}
							Local_16.f_32 = 0;
							Local_16.f_28 = 0;
							SET_JOURNAL_ENTRY_PROGRESS(Local_16.f_24, 0.0f, true, 0);
						}
					}
					else if (UI_ISACTIVE("ZMeter"))
					{
						(*&Local_16 + 36)[0] = GET_CURRENT_GAME_TIME();
						Function_123();
						SET_JOURNAL_ENTRY_PROGRESS(Local_16.f_24, 0.5f, true, 0);
					}
					break;
				
				case 0x00000002:
					if ((Global_3375 && !Global_63096) && Function_112())
					{
						if (!HAS_ACHIEVEMENT_BEEN_PASSED(66))
						{
							AWARD_ACHIEVEMENT(66);
						}
						Function_110(10, "AM_TM");
						Function_111(&uVar0);
						Function_87(20, 1, 0);
						Function_128();
						Local_16.f_8 = 10;
						Local_16.f_12 = 0.0f;
						Function_127();
						Function_28();
						Local_16.f_8 = 5;
					}
					break;
			}
			break;
		
		case 0x00000005:
			if (!UI_ISACTIVE("SaveGame_DoNotInterruptMe"))
			{
				Function_5("AM_TM_RW1_helpz", 0x41200000, 1, 0, 2, 1, 0);
				Local_16.f_8 = 10;
				Local_16.f_4 = 3;
				Function_128();
			}
			break;
	}
	return;
}

bool Function_120() //Position: 0x5E53 / 24147
{
	return !Function_121(Local_16.f_28);
	return 0;
}

bool Function_121(int iParam0) //Position: 0x5E63 / 24163
{
	var uVar0;
	
	if (StackVal || StackVal != 2 != 1)
	{
		return 0;
	}
	if ((iParam0 != Global_30707[2] || iParam0 != Global_30707[1]) || iParam0 != Global_30679[1])
	{
		return 0;
	}
	uVar0 = Global_29008[iParam0];
	return (((Function_15(uVar0, 0x1000000) || Function_15(uVar0, 0x2000000)) || Function_15(uVar0, 0x4000000)) || Function_122(iParam0));
}

var Function_122(bool bParam0) //Position: 0x5ED6 / 24278
{
	var uVar0;
	bool bVar1;
	
	uVar0 = Global_29008[bParam0];
	bVar1 = uVar0 & 268435456 != false;
	return bVar1;
}

void Function_123() //Position: 0x5EF3 / 24307
{
	Local_16.f_32 = 0;
	Function_16(&Local_16 + 32, 1);
	Function_16(&Local_16 + 32, 2);
	Local_16.f_28 = Global_29006;
	return;
}

float Function_124(int iParam0) //Position: 0x5F15 / 24341
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0.0f;
	}
	if (Global_35278[iParam020].f_64 != 0.0f)
	{
		fVar2 = 100.0f;
	}
	else
	{
		fVar2 = Global_35278[iParam020].f_64;
	}
	fVar3 = Global_35278[iParam020].f_60;
	fVar1 = Function_49(iParam0);
	if (Function_48(iParam0) != 19 || Function_48(iParam0) != 17)
	{
		if (fVar1 > fVar3)
		{
			fVar1 = fVar3;
		}
		if (fVar1 < fVar2)
		{
			fVar1 = fVar3;
		}
		fVar4 = ((fVar1 - fVar3) / (fVar2 - fVar3));
		iVar0 = (fVar4 * 100.0f);
		return iVar0;
	}
	if (fVar1 <= fVar2)
	{
		return 100.0f;
	}
	iVar0 = ((fVar1 * 100.0f) / fVar2);
	if (iVar0 <= 0.0f)
	{
		return iVar0;
	}
	return 0.0f;
}

bool Function_125(bool bParam0) //Position: 0x5FF6 / 24566
{
	return DECOR_CHECK_EXIST(bParam0, "nAM_Flying");
}

struct<24> Function_126() //Position: 0x600D / 24589
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Local_16 + 16), 6);
	stradd(&cVar0, "_", 24);
	stradd(&cVar0, INT_TO_STRING(StackVal), 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_127() //Position: 0x6037 / 24631
{
	iLocal_60 = Function_80(9, 1, 5);
	Global_13172[iLocal_6011].f_20 = StackVal;
	Global_13172[iLocal_6011].f_28 = Local_16.f_12;
	Global_13172[iLocal_6011].f_24 = Local_16.f_28;
	Global_13172[iLocal_6011].f_16 = Local_16.f_32;
	return;
}

void Function_128() //Position: 0x607A / 24698
{
	struct<6> Var0;
	
	CLEAR_JOURNAL_ENTRY(Local_16.f_24);
	memcpy(&Var0, StackVal, *(&Local_16 + 16), 6);
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_129() };
	APPEND_JOURNAL_ENTRY_DETAIL(Local_16.f_24, &Var0, 0, 2, false);
	PREPEND_JOURNAL_ENTRY(Local_16.f_24, true);
	SET_JOURNAL_ENTRY_PROGRESS(Local_16.f_24, 1.0f, false, 0);
	return;
}

struct<24> Function_129() //Position: 0x60B7 / 24759
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Local_16 + 16), 6);
	stradd(&cVar0, "_", 24);
	stradd(&cVar0, INT_TO_STRING(StackVal), 24);
	stradd(&cVar0, "_des", 24);
	stradd(&cVar0, "z", 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_130() //Position: 0x60F4 / 24820
{
	struct<6> Var0;
	
	CLEAR_JOURNAL_ENTRY(Local_16.f_24);
	PREPEND_JOURNAL_ENTRY(Local_16.f_24, false);
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_126() };
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_129() };
	PREPEND_JOURNAL_ENTRY_DETAIL(Local_16.f_24, &Var0, 0, 2, false);
	return;
}

void Function_131() //Position: 0x6123 / 24867
{
	var uVar0;
	bool bVar4;
	
	strcpy(&Local_38 + 16, "AM_ER", 8);
	Local_38 = 26;
	Local_38.f_84 = 0;
	Function_132();
	memcpy(&uVar0, StackVal, StackVal, StackVal, StackVal, StackVal, Function_27(), 4);
	Local_38.f_24 = CREATE_JOURNAL_ENTRY(&uVar0, 3, false, "challenge_01");
	if (Function_117(5))
	{
		CLEAR_JOURNAL_ENTRY(Local_38.f_24);
		PREPEND_JOURNAL_ENTRY(Local_38.f_24, false);
		SET_JOURNAL_ENTRY_PROGRESS(Local_38.f_24, 0.0f, false, 0);
		SET_JOURNAL_ENTRY_UPDATED(Local_38.f_24, 0);
		Function_116();
	}
	if (StackVal == 10)
	{
		Function_85();
	}
	else
	{
		Local_38.f_4 = 0;
		SET_JOURNAL_ENTRY_PROGRESS(Local_38.f_24, Local_38.f_12, true, 0);
		bVar4 = Function_3();
		if (IS_LAYOUTREF_VALID(bVar4))
		{
			CREATE_OBJECTSET_IN_LAYOUT("AM_OBJSETER_SP", bVar4, 4294967295, 0);
		}
	}
	return;
}

void Function_132() //Position: 0x61D7 / 25047
{
	iLocal_61 = Function_80(10, 1, 5);
	Local_38.f_8 = Global_13172[iLocal_6111].f_20;
	Local_38.f_12 = Global_13172[iLocal_6111].f_28;
	Local_38.f_28 = Global_13172[iLocal_6111].f_24;
	Local_38.f_32 = Global_13172[iLocal_6111].f_16;
	return;
}

void Function_133() //Position: 0x621A / 25114
{
	var uVar0;
	bool bVar4;
	
	strcpy(&Local_16 + 16, "AM_TM", 8);
	Local_16 = 25;
	Local_16.f_84 = 0;
	Function_134();
	memcpy(&uVar0, StackVal, StackVal, StackVal, StackVal, StackVal, Function_126(), 4);
	Local_16.f_24 = CREATE_JOURNAL_ENTRY(&uVar0, 3, false, "challenge_01");
	if (Function_117(5))
	{
		CLEAR_JOURNAL_ENTRY(Local_16.f_24);
		PREPEND_JOURNAL_ENTRY(Local_16.f_24, false);
		SET_JOURNAL_ENTRY_PROGRESS(Local_16.f_24, 0.0f, false, 0);
		SET_JOURNAL_ENTRY_UPDATED(Local_16.f_24, 0);
		Function_130();
	}
	if (StackVal == 10)
	{
		Function_128();
	}
	else
	{
		Local_16.f_4 = 0;
		SET_JOURNAL_ENTRY_PROGRESS(Local_16.f_24, Local_16.f_12, true, 0);
		bVar4 = Function_3();
		if (IS_LAYOUTREF_VALID(bVar4))
		{
			CREATE_OBJECTSET_IN_LAYOUT("AM_OBJSETTM_SP", bVar4, 4294967295, 0);
		}
	}
	return;
}

void Function_134() //Position: 0x62CE / 25294
{
	iLocal_60 = Function_80(9, 1, 5);
	Local_16.f_8 = Global_13172[iLocal_6011].f_20;
	Local_16.f_12 = Global_13172[iLocal_6011].f_28;
	Local_16.f_28 = Global_13172[iLocal_6011].f_24;
	Local_16.f_32 = Global_13172[iLocal_6011].f_16;
	return;
}

bool Function_135(int iParam0) //Position: 0x6311 / 25361
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_136(int iParam0) //Position: 0x632D / 25389
{
	strcpy(iParam0 + 12, "nACTORROAM", 16);
	*iParam0 = 29544;
	iParam0->f_4 = 25477;
	iParam0->f_8 = 25441;
	iParam0->f_28 = 1;
	return;
}

void Function_137() //Position: 0x6361 / 25441
{
	if (IS_OBJECTSET_VALID(Global_16516))
	{
		DESTROY_OBJECTSET(Global_16516);
	}
	if (IS_LAYOUTREF_VALID(Global_6290))
	{
		RELEASE_LAYOUT_REF(Global_6290);
	}
	return;
}

int Function_138() //Position: 0x6385 / 25477
{
	vector3 vVar0;
	vector3 vVar3;
	bool bVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	bool bVar10;
	bool bVar11;
	int iVar12;
	bool bVar13;
	int iVar14;
	int iVar15;
	var uVar16;
	bool bVar17;
	bool bVar18;
	var uVar19;
	
	bVar17 = -1.0f;
	Function_167();
	if (!IS_OBJECTSET_VALID(Global_16516))
	{
		return 0;
	}
	bVar10 = CREATE_OBJECTSET_IN_LAYOUT("roamRemoveSet", Global_6290, 4294967295, 0);
	CLEAN_OBJECTSET(Global_16516);
	bVar18 = GET_OBJECTSET_SIZE(Global_16516);
	bVar6 = false;
	while (bVar6 < (bVar18 - 1))
	{
		iVar7 = 0;
		bVar13 = GET_ACTOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar6, Global_16516));
		if (IS_ACTOR_VALID(bVar13))
		{
			if (GET_OBJECT_TYPE(bVar13) == 15)
			{
				iVar8 = Function_166(bVar13);
				iVar9 = Function_165(bVar13);
				bVar11 = Function_164(bVar13);
				uVar19 = Function_163(bVar13);
				iVar15 = Function_162(bVar13);
				if (IS_OBJECT_VALID(bVar11))
				{
					iVar12 = GET_OBJECT_TYPE(bVar11);
				}
				else
				{
					iVar12 = 0;
				}
				GET_POSITION(bVar13, &vVar0);
				switch (iVar8)
				{
					case 0x00000000:
						Function_161(bVar13);
						Function_160(bVar13, 1);
						if (iVar9 == 5)
						{
							PRINTSTRING("ActorRoam - ");
							PRINTSTRING(GET_ACTOR_NAME(bVar13));
							PRINTSTRING(" will ignore ambient restrictions while using gringo");
							SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(bVar13, 1);
							SET_ACTOR_OBEY_AMBIENT_MOVE_RESTRICTIONS(bVar13, 0);
						}
					
					case 0x00000001:
						if (IS_ACTOR_VEHICLE(bVar13))
						{
							Function_160(bVar13, 8);
						}
						else if (IS_ACTOR_VALID(GET_VEHICLE(bVar13)))
						{
							SET_ACTOR_ALLOW_WEAPON_REACTIONS(bVar13, 1);
							TASK_CLEAR(bVar13);
							TASK_VEHICLE_LEAVE(bVar13);
							TASK_PRIORITY_SET(bVar13, 2);
							Function_160(bVar13, 6);
						}
						else
						{
							SET_ACTOR_ALLOW_WEAPON_REACTIONS(bVar13, 1);
							switch (iVar9)
							{
								case 0x00000000:
								case 0x00000001:
									if (iVar12 == 9)
									{
										TASK_CLEAR(bVar13);
										TASK_WANDER_IN_VOLUME(bVar13, GET_VOLUME_FROM_OBJECT(bVar11), -1f);
										TASK_PRIORITY_SET(bVar13, 2);
									}
									else
									{
										TASK_CLEAR(bVar13);
										TASK_WANDER(bVar13, 3212836864);
										TASK_PRIORITY_SET(bVar13, 2);
									}
									Function_160(bVar13, 5);
									break;
								
								case 0x00000002:
									if (iVar12 != 15)
									{
										bVar11 = GET_OBJECT_FROM_ACTOR(Function_14());
									}
									TASK_CLEAR(bVar13);
									TASK_FLEE_ACTOR(bVar13, GET_ACTOR_FROM_OBJECT(bVar11), -1.0f, -1.0f, 0, 0, 0);
									TASK_PRIORITY_SET(bVar13, 0);
									Function_160(bVar13, 3);
									break;
								
								case 0x00000003:
									if (iVar12 != 15)
									{
										bVar11 = GET_OBJECT_FROM_ACTOR(Function_14());
									}
									Function_159(bVar13, &bVar17);
									if (Function_155(bVar13, &uVar16, &bVar17, 0, 0, 0x40400000))
									{
										RESET_ANIM_SET_FOR_ACTOR(bVar13, 1);
										TASK_CLEAR(bVar13);
										TASK_FLEE_ACTOR(bVar13, GET_ACTOR_FROM_OBJECT(bVar11), -1.0f, -1.0f, 0, 0, 0);
										TASK_PRIORITY_SET(bVar13, 0);
										Function_160(bVar13, 3);
									}
									Function_154(bVar13, bVar17);
									break;
								
								case 0x00000004:
									TASK_CLEAR(bVar13);
									switch (iVar12)
									{
										case 0x00000000:
											iVar14 = Function_151(StackVal, StackVal, vVar0, 0x42200000, 1);
											if (Function_150(iVar14))
											{
												Function_149(StackVal, GET_OBJECT_FROM_VOLUME(bVar13));
												bVar11 = Function_164(bVar13);
												iVar12 = GET_OBJECT_TYPE(bVar11);
												Function_148(bVar13, GET_VOLUME_FROM_OBJECT(bVar11), 2, 60.0f, iVar15);
											}
											else
											{
												TASK_CLEAR(bVar13);
												TASK_FLEE_ACTOR(bVar13, GET_ACTOR_FROM_OBJECT(Function_14()), -1.0f, -1.0f, 0, 0, 0);
												TASK_PRIORITY_SET(bVar13, 2);
											}
											break;
										
										case 0x0000000F:
											TASK_FOLLOW_OBJECT_AT_DISTANCE(bVar13, GET_ACTOR_FROM_OBJECT(bVar11), 3.0f, iVar15);
											TASK_PRIORITY_SET(bVar13, 2);
											break;
										
										case 0x00000009:
											Function_148(bVar13, GET_VOLUME_FROM_OBJECT(bVar11), 2, 60.0f, iVar15);
											break;
										
										default:
											LOG_ERROR("Invalid Object type passed to ActorRoam");
											break;
									}
									Function_160(bVar13, 4);
									break;
								
								case 0x00000005:
									Function_159(bVar13, &bVar17);
									if (Function_155(bVar13, &uVar16, &bVar17, 0, 0, 0x40400000))
									{
										RESET_ANIM_SET_FOR_ACTOR(bVar13, 1);
										TASK_CLEAR(bVar13);
										TASK_FLEE_ACTOR(bVar13, Global_34573, -1.0f, -1.0f, 0, 0, 0);
										TASK_PRIORITY_SET(bVar13, 0);
										SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(bVar13, 0);
										SET_ACTOR_OBEY_AMBIENT_MOVE_RESTRICTIONS(bVar13, 1);
										Function_160(bVar13, 3);
									}
									else if (!IS_GRINGO_VALID(GET_CURRENT_GRINGO(bVar13)))
									{
										if (!(GET_TASK_STATUS(bVar13, 19) != 1 || GET_TASK_STATUS(bVar13, 19) != 3))
										{
											if (Function_147(bVar13))
											{
												PRINTSTRING("ACTORROAM - Actor ");
												PRINTSTRING(GET_ACTOR_NAME(bVar13));
												PRINTSTRING(" failing on use of gringo ");
												PRINTSTRING(GET_OBJECT_NAME(bVar11));
												PRINTSTRING("n of type ");
												GET_OBJECT_MODEL_NAME(bVar11);
												PRINTNL();
												DESTROY_OBJECT(bVar11);
												SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(bVar13, 0);
												SET_ACTOR_OBEY_AMBIENT_MOVE_RESTRICTIONS(bVar13, 1);
												Function_146(bVar13, 1);
												Function_160(bVar13, 0);
											}
										}
									}
									Function_154(bVar13, bVar17);
									break;
								
								default:
									break;
								}
						}
						break;
					
					case 0x00000006:
						if (GET_TASK_STATUS(bVar13, 55) != 0 || !IS_ACTOR_VALID(GET_VEHICLE(bVar13)))
						{
							Function_160(bVar13, 0);
						}
						break;
					
					case 0x00000003:
						if (GET_TASK_STATUS(bVar13, 25) == 0)
						{
							Function_160(bVar13, 7);
						}
						break;
					
					case 0x00000004:
						switch (iVar12)
						{
							case 0x00000000:
							case 0x0000000F:
								if (GET_TASK_STATUS(bVar13, 67) == 0)
								{
									Function_160(bVar13, 7);
								}
								break;
							
							case 0x00000009:
								GET_VOLUME_CENTER(GET_VOLUME_FROM_OBJECT(bVar11), &vVar3);
								Function_145(StackVal, StackVal, StackVal, StackVal, vVar3, vVar0, &vVar3);
								if (VMAG(vVar3) > 20.0f)
								{
									SET_ACTOR_STAY_WITHIN_VOLUME(bVar13, GET_VOLUME_FROM_OBJECT(bVar11), 1, 3);
									Function_160(bVar13, 7);
								}
								break;
							
							default:
								PRINTSTRING("ActorRoam got an invalid object named: ");
								PRINTSTRING(GET_OBJECT_NAME(bVar11));
								PRINTNL();
								LOG_ERROR("Invalid Object in ActorRoam update");
								break;
						}
						break;
					
					case 0x00000002:
					case 0x00000005:
					case 0x00000007:
						if (GET_TASK_STATUS(bVar13, 10) == 1 && GET_TASK_STATUS(bVar13, 10) == 3)
						{
							TASK_CLEAR(bVar13);
							TASK_WANDER(bVar13, 3212836864);
							Function_160(bVar13, 8);
						}
						else if ((GET_TASK_STATUS(bVar13, 57) == 1 && GET_TASK_STATUS(bVar13, 57) == 3) && iVar12 != 9)
						{
							TASK_CLEAR(bVar13);
							TASK_WANDER_IN_VOLUME(bVar13, GET_VOLUME_FROM_OBJECT(bVar11), -1f);
							Function_160(bVar13, 8);
						}
						break;
					
					case 0x00000008:
						break;
					
					default:
						break;
				}
				if (VDIST(Global_34574, vVar0) < Function_143(1) && !Function_142(bVar13, 0x3f800000, 0x42960000, 1, 1, 0))
				{
					iVar7 = 1;
				}
				else if (bVar18 >= 100)
				{
					iVar7 = 1;
				}
				else if (HUD_IS_FADED() && Function_15(uVar19, 1))
				{
					iVar7 = 1;
				}
				if (iVar7 == 1)
				{
					ADD_OBJECT_TO_OBJECTSET(GET_OBJECT_FROM_ACTOR(bVar13), bVar10);
					if (iVar9 != 5 && IS_OBJECT_VALID(bVar11))
					{
						DESTROY_OBJECT(bVar11);
					}
				}
			}
		}
		bVar6++;
	}
	if (IS_OBJECTSET_VALID(bVar10))
	{
		bVar18 = GET_OBJECTSET_SIZE(bVar10);
		bVar6 = false;
		while (bVar6 < (bVar18 - 1))
		{
			bVar13 = GET_ACTOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(false, bVar10));
			TASK_CLEAR(bVar13);
			TASK_WANDER(bVar13, -1.0f);
			Function_140(bVar13);
			CLEAN_OBJECTSET(bVar10);
			bVar6++;
		}
		DESTROY_OBJECTSET(bVar10);
	}
	if (IS_EXITFLAG_SET())
	{
		if (IS_OBJECTSET_VALID(Global_16516))
		{
			Function_139(Global_16516);
			DESTROY_OBJECTSET(Global_16516);
		}
		if (IS_LAYOUTREF_VALID(Global_6290))
		{
			DESTROY_LAYOUT(Global_6290);
		}
	}
	return 0;
}

void Function_139(bool bParam0) //Position: 0x6A66 / 27238
{
	bool bVar0;
	
	if (!IS_OBJECTSET_VALID(bParam0))
	{
		return;
	}
	while (GET_OBJECTSET_SIZE(bParam0) >= 0)
	{
		bVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, bParam0);
		if (IS_OBJECT_VALID(bVar0))
		{
			REMOVE_OBJECT_FROM_OBJECTSET(bVar0, bParam0);
		}
		CLEAN_OBJECTSET(bParam0);
		if (IS_OBJECT_VALID(bVar0))
		{
			RELEASE_OBJECT_REF(bVar0);
		}
	}
	return;
}

void Function_140(bool bParam0) //Position: 0x6AAB / 27307
{
	char* cVar0[32];
	
	strcpy(&cVar0, GET_OBJECT_NAME(bParam0), 32);
	if (STRING_LENGTH(&cVar0) < 0)
	{
		strcpy(&cVar0, "n(Unnamed)", 32);
	}
	Function_141(bParam0);
	REMOVE_OBJECT_FROM_OBJECTSET(GET_OBJECT_FROM_ACTOR(bParam0), Global_16516);
	RELEASE_ACTOR(bParam0);
	return;
}

void Function_141(bool bParam0) //Position: 0x6AE8 / 27368
{
	DEREFERENCE_ACTOR(bParam0);
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_ref");
	return;
}

bool Function_142(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x6B0C / 27404
{
	return CAMERA_IS_VISIBLE_OBJECT(GET_GAME_CAMERA(), bParam0, iParam1, iParam2, iParam3, iParam4, iParam5);
}

float Function_143(bool bParam0) //Position: 0x6B26 / 27430
{
	var uVar0;
	float fVar1;
	
	if (!bParam0)
	{
		Function_144(&uVar0, &fVar1);
		if (fVar1 < 60.0f)
		{
			return (fVar1 + 20.0f);
		}
		return (fVar1 + 10.0f);
	}
	return (190.0f + 20.0f);
}

void Function_144(var uParam0, int iParam1) //Position: 0x6B61 / 27489
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

void Function_145(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x6BEA / 27626
{
	*uParam6 = { (GET_X(&uParam3) - GET_X(&uParam0)), 0.0f, (GET_Z(&uParam3) - GET_Z(&uParam0)) };
}

void Function_146(bool bParam0, bool bParam1) //Position: 0x6C0D / 27661
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_behavior", bParam1);
	return;
}

bool Function_147(bool bParam0) //Position: 0x6C33 / 27699
{
	bool bVar0;
	
	if (!DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_gringoFail"))
	{
		DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_gringoFail", false);
	}
	else
	{
		bVar0 = DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_gringoFail");
		if (bVar0 >= 20)
		{
			return 1;
		}
		DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_gringoFail", bVar0 + 1);
	}
	return 0;
}

void Function_148(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4) //Position: 0x6CD2 / 27858
{
	var uVar0;
	var uVar3;
	var uVar6;
	
	if (IS_VOLUME_VALID(bParam1))
	{
		GET_VOLUME_CENTER(bParam1, &uVar0);
		if (FIND_GROUND_INTERSECTION(&uVar0, 100.0f, &uVar3, &uVar6))
		{
			TASK_GO_NEAR_COORD(bParam0, &uVar3, bParam3, iParam4);
		}
		else
		{
			TASK_GO_NEAR_COORD(bParam0, &uVar0, bParam3, iParam4);
		}
		TASK_PRIORITY_SET(bParam0, iParam2);
	}
	else
	{
		LOG_ERROR("GO_NEAR_VOLUME - Invalid Volume");
	}
}

void Function_149(bool bParam0, bool bParam1) //Position: 0x6D42 / 27970
{
	DECOR_SET_OBJECT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_target", bParam1);
	return;
}

bool Function_150(int iParam0) //Position: 0x6D66 / 28006
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

var Function_151(vector3 vParam0, float fParam3, int iParam4) //Position: 0x6D7C / 28028
{
	int iVar0;
	vector3 vVar1;
	bool bVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = 4294967295;
	bVar4 = 99999.0f;
	iVar5 = 0;
	if (Function_68(StackVal, StackVal, vParam0))
	{
		return 4294967295;
	}
	iVar6 = 0;
	while (iVar6 < 145)
	{
		if ((StackVal && (StackVal || IS_VOLUME_VALID(StackVal) != 3 != 4)) && !Function_153(iVar6))
		{
			iVar5 = 0;
			if (iParam4 == 0)
			{
				iVar5 = 1;
			}
			else if (Function_152(Global_29006) == Global_30621[Global_29004])
			{
				iVar5 = 1;
			}
			if (iVar5 == 1)
			{
				GET_VOLUME_CENTER(StackVal, &vVar1);
				if (VDIST(vParam0, vVar1) > bVar4 && VDIST(vParam0, vVar1) < fParam3)
				{
					iVar0 = iVar6;
					bVar4 = VDIST(vParam0, vVar1);
				}
			}
		}
		iVar6++;
	}
	if (Function_150(iVar0))
	{
	}
	else
	{
		iVar0 = 4294967295;
	}
	return iVar0;
}

int Function_152(int iParam0) //Position: 0x6E58 / 28248
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_150(iParam0))
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

bool Function_153(int iParam0) //Position: 0x6EB0 / 28336
{
	if ((((iParam0 != Global_30707[1] || iParam0 != Global_30679[1]) || iParam0 != Global_30668[1]) || iParam0 != Global_30640[4]) || iParam0 != Global_30693[1])
	{
		return 1;
	}
	return 0;
}

void Function_154(bool bParam0, bool bParam1) //Position: 0x6EF0 / 28400
{
	DECOR_SET_FLOAT(GET_OBJECT_FROM_ACTOR(bParam0), "actorroam_lockon", bParam1);
	return;
}

bool Function_155(bool bParam0, var uParam1, int iParam2, int iParam3, bool bParam4, float fParam5) //Position: 0x6F14 / 28436
{
	float fVar0;
	
	if (IS_ACTOR_VALID(bParam0) && !bParam4)
	{
		if (IS_ACTOR_ON_FOOT(bParam0))
		{
			AI_SET_PLAYER_PROJECTILE_IMPACT_HEAR_RANGE(bParam0, fParam5);
		}
		else
		{
			AI_SET_PLAYER_PROJECTILE_IMPACT_HEAR_RANGE(bParam0, (fParam5 + 3.0f));
		}
	}
	if (IS_ACTOR_VALID(bParam0) && !bParam4)
	{
		fVar0 = Function_158(bParam0, Global_34573);
		if (!Function_15(iParam3, 8))
		{
			if (GET_LAST_ATTACKER(bParam0) == Global_34573)
			{
				*uParam1 = 8;
				Function_156(bParam0);
				return 1;
			}
		}
		if (!Function_15(iParam3, 2))
		{
			if (AI_HAS_PLAYER_PROJECTILE_IMPACTED_WITHIN(bParam0, 1.0f))
			{
				*uParam1 = 2;
				Function_156(bParam0);
				return 1;
			}
			if (AI_HAS_PLAYER_PROJECTILE_NEAR_MISSED_WITHIN(bParam0, 1.0f, 1.0f))
			{
				*uParam1 = 2;
				Function_156(bParam0);
				return 1;
			}
		}
		if (!Function_15(iParam3, 4))
		{
			if ((IS_ACTOR_HANDSUP(bParam0) || (((GET_ACTOR_UNDER_RETICLE(Global_34573, 0) != bParam0 && IS_PLAYER_WEAPON_ZOOMED(Global_34573)) && MEMORY_GET_IS_VISIBLE(bParam0, Global_34573)) && fVar0 > 20.0f)) || ((GET_ACTOR_MELEE_TARGETED_BY(Global_34573) != bParam0 && MEMORY_GET_IS_VISIBLE(bParam0, Global_34573)) && fVar0 > 20.0f))
			{
				if (*iParam2 > 0.0f)
				{
					*uParam1 = 4;
					Function_156(bParam0);
					return 1;
				}
				if (*iParam2 < 0.0f)
				{
					if ((GET_CURRENT_GAME_TIME() - *iParam2) < 1.3f)
					{
						*uParam1 = 4;
						Function_156(bParam0);
						return 1;
					}
				}
				*iParam2 = GET_CURRENT_GAME_TIME();
			}
		}
		if (!Function_15(iParam3, 1))
		{
			if (Global_3403 || Global_3404)
			{
				*uParam1 = 1;
				Function_156(bParam0);
				return 1;
			}
		}
		if (!Function_15(iParam3, 16))
		{
			if (UNK_0x7F454A92(bParam0) < 0.0f)
			{
				if ((GET_CURRENT_GAME_TIME() - UNK_0x7F454A92(bParam0)) > 2.0f && fVar0 > 18.0f)
				{
					*uParam1 = 16;
					Function_156(bParam0);
					return 1;
				}
			}
		}
	}
	return 0;
}

void Function_156(bool bParam0) //Position: 0x70AB / 28843
{
	CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(bParam0);
	AI_SPEECH_SET_ALLOW_FOR_ACTOR(bParam0, 1);
	UNK_0x99AFD2D1(bParam0, 0, 0);
	Function_157(bParam0);
	MEMORY_CONSIDER_AS(Global_34573, bParam0, 2);
	MEMORY_CONSIDER_AS(bParam0, Global_34573, 2);
	AI_GOAL_LOOK_CLEAR(bParam0);
	return;
}

void Function_157(bool bParam0) //Position: 0x70DF / 28895
{
	SAY_SINGLE_LINE_CONTEXT(bParam0, 60, Global_34573, 1, 0, 2, 4294967295, 4294967295, 0, 1);
	return;
}

var Function_158(bool bParam0, bool bParam1) //Position: 0x70F6 / 28918
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

void Function_159(bool bParam0, int iParam1) //Position: 0x71E7 / 29159
{
	if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(bParam0), "actorroam_lockon"))
	{
		*iParam1 = DECOR_GET_FLOAT(GET_OBJECT_FROM_ACTOR(bParam0), "actorroam_lockon");
	}
	else
	{
		*iParam1 = 0.0f;
	}
	return;
}

void Function_160(bool bParam0, bool bParam1) //Position: 0x7230 / 29232
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_state", bParam1);
	return;
}

void Function_161(bool bParam0) //Position: 0x7253 / 29267
{
	REFERENCE_ACTOR(bParam0);
	DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_ref", true);
	return;
}

var Function_162(bool bParam0) //Position: 0x7278 / 29304
{
	return DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_speed");
}

var Function_163(bool bParam0) //Position: 0x7298 / 29336
{
	return DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_options");
}

bool Function_164(bool bParam0) //Position: 0x72BA / 29370
{
	return DECOR_GET_OBJECT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_target");
}

var Function_165(bool bParam0) //Position: 0x72DB / 29403
{
	return DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_behavior");
}

var Function_166(bool bParam0) //Position: 0x72FE / 29438
{
	return DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(bParam0), "actorRoam_state");
}

void Function_167() //Position: 0x731E / 29470
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

void Function_168() //Position: 0x7368 / 29544
{
	Function_167();
	return;
}

void Function_169(int iParam0) //Position: 0x7371 / 29553
{
	strcpy(iParam0 + 12, "GPS_MANAGER", 16);
	*iParam0 = 31308;
	iParam0->f_4 = 29838;
	iParam0->f_8 = 29607;
	iParam0->f_28 = 1;
	return;
}

void Function_170() //Position: 0x73A7 / 29607
{
	if (IS_OBJECTSET_VALID(Global_28210.f_12))
	{
		Function_171(Global_28210.f_12);
		DESTROY_OBJECTSET(Global_28210.f_12);
	}
	if (IS_LAYOUTREF_VALID(StackVal))
	{
		DESTROY_LAYOUT(StackVal);
	}
	if (IS_OBJECTSET_VALID(Global_28185.f_12))
	{
		Function_171(Global_28185.f_12);
		DESTROY_OBJECTSET(Global_28185.f_12);
	}
	if (IS_LAYOUTREF_VALID(StackVal))
	{
		DESTROY_LAYOUT(StackVal);
	}
	if (IS_OBJECTSET_VALID(Global_28235.f_12))
	{
		Function_171(Global_28235.f_12);
		DESTROY_OBJECTSET(Global_28235.f_12);
	}
	if (IS_LAYOUTREF_VALID(StackVal))
	{
		DESTROY_LAYOUT(StackVal);
	}
	if (IS_GAME_RESETTING() && !Global_3395)
	{
		CLEAR_GPS_PATH(0);
	}
	CLEAR_GPS_PATH(1);
	CLEAR_GPS_PATH(2);
	return;
}

void Function_171(bool bParam0) //Position: 0x744E / 29774
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

int Function_172() //Position: 0x748E / 29838
{
	if (Function_173(&Global_28210))
	{
		return 1;
	}
	if (Function_173(&Global_28185))
	{
		return 1;
	}
	if (Function_173(&Global_28235))
	{
		return 1;
	}
	return 0;
}

bool Function_173(int iParam0) //Position: 0x74BC / 29884
{
	var uVar0;
	var uVar1;
	var uVar2;
	struct<6> Var3;
	
	switch (StackVal)
	{
		case 0x00000000:
			if ((*iParam0 != 1 || *iParam0 != 2) || *iParam0 != 3)
			{
				iParam0->f_4 = 1;
			}
			break;
		
		case 0x00000001:
			if (*iParam0 == 3)
			{
				if (StackVal != 0)
				{
					iParam0->f_16 = Global_28185.f_16;
				}
				else
				{
					iParam0->f_16 = 393264;
				}
			}
			else if (*iParam0 == 1)
			{
				iParam0->f_16 = 393264;
			}
			if (GET_OBJECTSET_SIZE(iParam0->f_12) >= 0)
			{
				Function_171(iParam0->f_12);
				CLEAN_OBJECTSET(iParam0->f_12);
			}
			if (FIND_TRAFFIC_PATH(StackVal, iParam0->f_12, &Global_34574, iParam0 + 24, iParam0->f_16, iParam0 + 20))
			{
				*(iParam0 + 80) = { StackVal, StackVal, Global_34574 };
				Var3 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_179(StackVal, StackVal, GET_CURVE_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(false, iParam0->f_12)), *(iParam0 + 24), 0x41200000, 0, 0x3f800000, 1) };
				Function_178(&Var3);
				*(iParam0 + 48) = { StackVal, StackVal, Function_178(&Var3) };
				Function_177(iParam0->f_60, &uVar0, &uVar1, &uVar2);
				if (*iParam0 == 1)
				{
					SET_GPS_PATH(0, iParam0->f_20, iParam0->f_12, uVar0, uVar1, uVar2, 1.0f, iParam0 + 24, 1);
				}
				else if (*iParam0 == 2)
				{
					SET_GPS_PATH(1, iParam0->f_20, iParam0->f_12, uVar0, uVar1, uVar2, 1.0f, iParam0 + 24, iParam0->f_92);
				}
				else
				{
					SET_GPS_PATH(2, iParam0->f_20, iParam0->f_12, uVar0, uVar1, uVar2, 1.0f, iParam0 + 24, iParam0->f_92);
				}
				iParam0->f_76 = GET_CURRENT_GAME_TIME();
				iParam0->f_4 = 2;
				REGISTER_GPS_CURVE_OBJECTSET(iParam0->f_12);
			}
			else
			{
				LOG_ERROR("Cannot find a path from here to there - check output for locations");
				CLEAR_GPS_PATH(2);
				iParam0->f_4 = 3;
			}
		
		case 0x00000002:
			if ((*iParam0 != 2 || *iParam0 != 1) || *iParam0 != 3)
			{
				if (iParam0->f_96 || *iParam0 != 3)
				{
					if (StackVal || Function_73(StackVal, StackVal, StackVal, (StackVal || Function_73(StackVal, StackVal, StackVal, Function_73(StackVal, StackVal, StackVal, StackVal, *(iParam0 + 24), Global_34574) > 15.0f, *(iParam0 + 48), Global_34574) > 15.0f), *(iParam0 + 36), Global_34574) > 15.0f)
					{
						if (*iParam0 == 1)
						{
							CLEAR_GPS_PATH(0);
						}
						else if (*iParam0 == 2)
						{
							CLEAR_GPS_PATH(1);
						}
						else
						{
							CLEAR_GPS_PATH(2);
						}
						iParam0->f_4 = 3;
						return 0;
					}
				}
				if (*iParam0 == 1)
				{
					if (IS_GPS_RECOMPUTE(0))
					{
						iParam0->f_4 = 1;
						return 0;
					}
				}
				if (*iParam0 == 2)
				{
					if (IS_GPS_RECOMPUTE(1))
					{
						iParam0->f_4 = 1;
						return 0;
					}
				}
				if (IS_GPS_RECOMPUTE(2))
				{
					iParam0->f_4 = 1;
					return 0;
				}
			}
			break;
		
		case 0x00000003:
			if (*iParam0 == 1)
			{
				Function_176();
			}
			else if (*iParam0 == 2)
			{
				Function_175();
			}
			else
			{
				Function_174();
			}
			if (IS_OBJECTSET_VALID(iParam0->f_12))
			{
				Function_171(iParam0->f_12);
				CLEAN_OBJECTSET(iParam0->f_12);
			}
			iParam0->f_4 = 0;
			*iParam0 = 0;
			break;
	}
	return 0;
}

void Function_174() //Position: 0x7787 / 30599
{
	if (Global_28235 == 3)
	{
		Global_28235.f_4 = 3;
	}
	*(&Global_28235 + 24) = { 0.0f, 0.0f, 0.0f };
	*(&Global_28235 + 36) = { 0.0f, 0.0f, 0.0f };
	CLEAR_GPS_PATH(2);
	return;
}

void Function_175() //Position: 0x77B2 / 30642
{
	if (Global_28185 == 2)
	{
		Global_28185.f_4 = 3;
	}
	*(&Global_28185 + 24) = { 0.0f, 0.0f, 0.0f };
	*(&Global_28185 + 36) = { 0.0f, 0.0f, 0.0f };
	CLEAR_GPS_PATH(1);
	return;
}

void Function_176() //Position: 0x77DD / 30685
{
	if (Global_28210 == 1)
	{
		Global_28210.f_4 = 3;
	}
	*(&Global_28210 + 24) = { 0.0f, 0.0f, 0.0f };
	*(&Global_28210 + 36) = { 0.0f, 0.0f, 0.0f };
	CLEAR_GPS_PATH(0);
	return;
}

void Function_177(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x7808 / 30728
{
	switch (iParam0)
	{
		case 0x00000001:
			*uParam1 = 0.64f;
			*uParam2 = 0.22f;
			*uParam3 = 0.26f;
			break;
		
		case 0x00000002:
			*uParam1 = 0.34f;
			*uParam2 = 0.58f;
			*uParam3 = 0.74f;
			break;
		
		case 0x00000000:
			*uParam1 = 0.83f;
			*uParam2 = 0.65f;
			*uParam3 = 0.36f;
			break;
		
		case 0x00000003:
			*uParam1 = 0.41f;
			*uParam2 = 0.57f;
			*uParam3 = 0.23f;
			break;
		
		case 0x00000005:
			*uParam1 = Global_28185.f_64;
			*uParam2 = Global_28185.f_68;
			*uParam3 = Global_28185.f_72;
			break;
		
		case 0x00000004:
			*uParam1 = Global_28235.f_64;
			*uParam2 = Global_28235.f_68;
			*uParam3 = Global_28235.f_72;
			break;
		
		default:
			*uParam1 = 0.71f;
			*uParam2 = 0.64f;
			*uParam3 = 0.57f;
			break;
	}
}

vector3 Function_178(bool bParam0) //Position: 0x78F8 / 30968
{
	vector3 vVar0;
	
	vVar0.x = *bParam0;
	vVar0.f_4 = StackVal;
	vVar0.f_8 = StackVal;
	return StackVal, StackVal, vVar0;
}

struct<24> Function_179(bool bParam0, vector3 vParam1, bool bParam4, float fParam5, float fParam6, int iParam7) //Position: 0x7917 / 30999
{
	bool bVar0;
	struct<13> Var1;
	float fVar19;
	bool bVar20;
	bool bVar21;
	
	if (!fParam6 <= fParam5)
	{
		fVar19 = fParam6;
		fParam6 = fParam5;
		fParam5 = fVar19;
	}
	GET_CURVE_POINT(bParam0, fParam5, &Var1, 0);
	Function_178(&Var1);
	bVar20 = VDIST(Function_178(&Var1), vParam1);
	Var13 = { StackVal, StackVal, StackVal, StackVal, StackVal, Var1 };
	while (Var1.f_12 >= fParam6 && !bVar0)
	{
		Var7 = { StackVal, StackVal, StackVal, StackVal, StackVal, Var1 };
		UNK_0x19D652F9(bParam0, FABS(bParam4), &Var7, &Var1);
		Function_178(&Var1);
		bVar21 = VDIST(Function_178(&Var1), vParam1);
		if (bVar21 > bVar20)
		{
			bVar20 = bVar21;
			Var13 = { StackVal, StackVal, StackVal, StackVal, StackVal, Var1 };
		}
		if (Function_182(&Var1))
		{
			bVar0 = true;
		}
	}
	if (iParam7 < 1 && bParam4 < 1.0f)
	{
		UNK_0x19D652F9(bParam0, (bParam4 / 2.0f), &Var13, &Var1);
		UNK_0x19D652F9(bParam0, (-1.0f * (bParam4 / 2.0f)), &Var13, &Var7);
		return StackVal, StackVal, StackVal, StackVal, StackVal, Function_179(StackVal, StackVal, bParam0, vParam1, (bParam4 / 10.0f), Function_181(Var7.f_12, Var1.f_12), Function_180(Var7.f_12, Var1.f_12), (iParam7 - 1));
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, Var13;
}

var Function_180(int iParam0, int iParam1) //Position: 0x7A05 / 31237
{
	if (iParam0 < iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

float Function_181(int iParam0, int iParam1) //Position: 0x7A18 / 31256
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

bool Function_182(int iParam0) //Position: 0x7A2B / 31275
{
	if (iParam0->f_12 > 0.001f || iParam0->f_12 < 0.999f)
	{
		return 1;
	}
	return 0;
}

void Function_183() //Position: 0x7A4C / 31308
{
	Global_28210.f_8 = CREATE_LAYOUT("UserGPS");
	Global_28210.f_12 = CREATE_OBJECTSET_IN_LAYOUT(StackVal, "UserGPSPath", 36, 1);
	Global_28185.f_8 = CREATE_LAYOUT("MissionGPS");
	Global_28185.f_12 = CREATE_OBJECTSET_IN_LAYOUT(StackVal, "MissionGPSPath", 36, 1);
	Global_28235.f_8 = CREATE_LAYOUT("PosseGPS");
	Global_28235.f_12 = CREATE_OBJECTSET_IN_LAYOUT(StackVal, "PosseGPSPath", 36, 1);
	return;
}

void Function_184(int iParam0) //Position: 0x7AEA / 31466
{
	strcpy(iParam0 + 12, "OUTFIT-MANAGER", 16);
	*iParam0 = 37909;
	iParam0->f_4 = 31529;
	iParam0->f_8 = 31523;
	iParam0->f_28 = 0;
	return;
}

void Function_185() //Position: 0x7B23 / 31523
{
	return;
}

int Function_186() //Position: 0x7B29 / 31529
{
	char* cVar0[32];
	bool bVar8;
	bool bVar9;
	
	if (!IS_ACTOR_VALID(Global_34573))
	{
		return 0;
	}
	if (!IS_ACTOR_ALIVE(Global_34573))
	{
		return 0;
	}
	if (DECOR_CHECK_EXIST(Global_34573, "outfitScrap"))
	{
		if ((((!Global_3380 && !Global_3392) && !Global_3384) && !Function_225()) && Function_224() != 0)
		{
			bVar8 = DECOR_GET_INT(Global_34573, "outfitScrap");
			strcpy(&cVar0, "OUT_", 32);
			stradd(&cVar0, &Global_27774[bVar813] + 32, 32);
			DECOR_REMOVE(Global_34573, "outfitScrap");
			PRINT_OBJECTIVE_FORMAT(7.5f, "out_Journal_Edit", &cVar0, false, false, false, 0, 2, 0, 0, 0);
		}
	}
	if (DECOR_CHECK_EXIST(Global_34573, "outfitDisc"))
	{
		if ((!Global_3380 && !Function_225()) && Function_224() != 0)
		{
			bVar8 = DECOR_GET_INT(Global_34573, "outfitDisc");
			strcpy(&cVar0, "OUT_", 32);
			stradd(&cVar0, &Global_27774[bVar813] + 32, 32);
			DECOR_REMOVE(Global_34573, "outfitDisc");
			PRINT_OBJECTIVE_FORMAT(7.5f, "out_Journal_Add", &cVar0, false, false, false, 0, 2, 0, 0, 0);
		}
	}
	if (!Global_28179 != Global_28178)
	{
		bVar9 = GET_ACTOR_ENUM(Global_34573);
		if (!Function_223(Global_28179, 1024))
		{
			STREAMING_REQUEST_ACTOR(bVar9, SHIFT_LEFT(true, Global_27774[Global_2817913].f_20), false);
			STREAMING_EVICT_ACTOR(bVar9, SHIFT_LEFT(true, Global_27774[Global_2817813].f_20));
			Function_222(Global_28179, 1024);
			Function_221(Global_28178, 1024);
			Function_221(Global_28178, 2048);
			Function_220(Global_28178);
		}
		if (!Function_223(Global_28179, 4096) && HUD_IS_FADED())
		{
			SWITCH_ACTOR_ENUM_VARIATION(Global_34573, Global_27774[Global_2817913].f_20);
			Function_222(Global_28179, 4096);
			Function_221(Global_28178, 4096);
		}
		if (!Function_223(Global_28179, 2048))
		{
			if (STREAMING_IS_ACTOR_LOADED(bVar9, 4294967295))
			{
				Function_222(Global_28179, 2048);
			}
		}
		if (!HUD_IS_FADED())
		{
			if (!HUD_IS_FADING())
			{
				HUD_FADE_OUT(0.0f, 1f, 1);
			}
		}
		if ((HUD_IS_FADED() && Function_223(Global_28179, 2048)) && Function_223(Global_28179, 4096))
		{
			if (Global_28179 != 1 || Global_28178 != 1)
			{
				if (Global_29006 == Global_30717[0])
				{
					Function_214(0, 1, 0);
				}
			}
			Global_28178 = Global_28179;
			Function_211(Global_28179);
			if (Function_223(Global_28179, 8192))
			{
				Function_221(Global_28179, 8192);
				DECOR_SET_BOOL(Global_34573, "OutfitChanged", true);
				HUD_FADE_IN(0.25f, 1065353216);
			}
		}
	}
	bVar8 = false;
	while (bVar8 <= Global_27774)
	{
		if (Global_27774[bVar813] != 4294967295)
		{
			Function_201(bVar8);
			if (Function_188(bVar8))
			{
				if (Global_27774[bVar813].f_48 >= 0)
				{
					SET_JOURNAL_ENTRY_DISALLOW_TRACKING(Global_27774[bVar813].f_48, 0);
				}
			}
			else
			{
				if (Global_27774[bVar813].f_48 >= 0)
				{
					SET_JOURNAL_ENTRY_DISALLOW_TRACKING(Global_27774[bVar813].f_48, 1);
				}
				if (Global_28180 == bVar8)
				{
					Function_187();
				}
			}
		}
		bVar8++;
	}
	return 0;
}

void Function_187() //Position: 0x7E30 / 32304
{
	Global_28180 = 4294967295;
	if (IS_BLIP_VALID(StackVal))
	{
		REMOVE_BLIP(StackVal);
	}
	Global_28180.f_12 = 1;
	return;
}

bool Function_188(int iParam0) //Position: 0x7E53 / 32339
{
	int iVar0;
	
	if (Function_200(iParam0))
	{
		if (Function_199(iParam0) && !Function_198(iParam0))
		{
			iVar0 = Function_197(iParam0);
			switch (iParam0)
			{
				case 0x00000004:
					switch (iVar0)
					{
						case 0x00000001:
							return 1;
							break;
						
						case 0x00000002:
							if (Function_9(6, 0) || Function_9(12, 0))
							{
								return 1;
							}
							return 0;
							break;
						
						default:
							return 1;
							break;
					}
					break;
				
				case 0x00000005:
					return 1;
					break;
				
				case 0x00000006:
					switch (iVar0)
					{
						case 0x00000001:
							return 1;
							break;
						
						case 0x00000002:
							if (Function_117(13))
							{
								if (Function_190(&(Global_63541[1455]), 14, 1, 1) && !Function_189(14))
								{
									return 1;
								}
								return 0;
							}
							if (Function_117(12))
							{
								if ((Function_190(&(Global_63541[1355]), 13, 1, 1) && !Function_189(13)) && !IS_EARLIER_THAN(GET_TIME_OF_DAY(), Global_63541[1355].f_156))
								{
									return 1;
								}
								return 0;
							}
							if (Function_117(11))
							{
								if ((Function_190(&(Global_63541[1255]), 12, 1, 1) && !Function_189(12)) && !IS_EARLIER_THAN(GET_TIME_OF_DAY(), Global_63541[1255].f_156))
								{
									return 1;
								}
								return 0;
							}
							if (Function_117(10))
							{
								if ((Function_190(&(Global_63541[1155]), 11, 1, 1) && !Function_189(11)) && !IS_EARLIER_THAN(GET_TIME_OF_DAY(), Global_63541[1155].f_156))
								{
									return 1;
								}
								return 0;
							}
							if (Function_9(5, 0))
							{
								if (Function_190(&(Global_63541[1055]), 10, 1, 1) && !Function_189(10))
								{
									return 1;
								}
								return 0;
							}
							return 0;
							break;
						
						default:
							return 1;
							break;
					}
					break;
				
				case 0x00000007:
					return 1;
					break;
				
				case 0x00000008:
					switch (iVar0)
					{
						case 0x00000002:
							if (Function_117(26))
							{
								if (Function_190(&(Global_63541[2755]), 27, 1, 1) && !Function_189(27))
								{
									return 1;
								}
								return 0;
							}
							if (Function_117(25))
							{
								if (Function_190(&(Global_63541[2655]), 26, 1, 1) && !Function_189(26))
								{
									return 1;
								}
								return 0;
							}
							if (Function_117(24))
							{
								if (Function_190(&(Global_63541[2555]), 25, 1, 1) && !Function_189(25))
								{
									return 1;
								}
								return 0;
							}
							if (Function_117(23))
							{
								if (Function_190(&(Global_63541[2455]), 24, 1, 1) && !Function_189(24))
								{
									return 1;
								}
								return 0;
							}
							if (Function_9(26, 0))
							{
								if (Function_190(&(Global_63541[2355]), 23, 1, 1) && !Function_189(23))
								{
									return 1;
								}
								return 0;
							}
							return 0;
							break;
						
						case 0x00000008:
							if (Function_117(55))
							{
								if ((Function_190(&(Global_63541[5655]), 56, 1, 1) && !Function_189(56)) && !IS_EARLIER_THAN(GET_TIME_OF_DAY(), Global_63541[5655].f_156))
								{
									return 1;
								}
								return 0;
							}
							if (Function_117(54))
							{
								if ((Function_190(&(Global_63541[5555]), 55, 1, 1) && !Function_189(55)) && !IS_EARLIER_THAN(GET_TIME_OF_DAY(), Global_63541[5555].f_156))
								{
									return 1;
								}
								return 0;
							}
							if (Function_117(27))
							{
								if (Function_190(&(Global_63541[5455]), 54, 1, 1) && !Function_189(54))
								{
									return 1;
								}
								return 0;
							}
							return 0;
							break;
						
						case 0x00000020:
							if (Function_9(41, 0))
							{
								return 1;
							}
							return 0;
							break;
						
						default:
							return 1;
							break;
					}
					break;
				
				case 0x00000009:
					switch (iVar0)
					{
						case 0x00000008:
							if (Function_117(52))
							{
								if ((Function_190(&(Global_63541[5355]), 53, 1, 1) && !Function_189(53)) && !IS_EARLIER_THAN(GET_TIME_OF_DAY(), Global_63541[5355].f_156))
								{
									return 1;
								}
								return 0;
							}
							if (Function_117(51))
							{
								if (Function_190(&(Global_63541[5255]), 52, 1, 1) && !Function_189(52))
								{
									return 1;
								}
								return 0;
							}
							if (Function_117(50))
							{
								if (Function_190(&(Global_63541[5155]), 51, 1, 1) && !Function_189(51))
								{
									return 1;
								}
								return 0;
							}
							if (Function_117(49))
							{
								if (Function_190(&(Global_63541[5055]), 50, 1, 1) && !Function_189(50))
								{
									return 1;
								}
								return 0;
							}
							if (Function_9(17, 0))
							{
								if (Function_190(&(Global_63541[4955]), 49, 1, 1) && !Function_189(49))
								{
									return 1;
								}
								return 0;
							}
							return 0;
							break;
						
						case 0x00000020:
							if (Function_9(57, 0))
							{
								return 1;
							}
							return 0;
							break;
						
						default:
							return 1;
							break;
					}
					break;
				
				case 0x00000002:
					switch (iVar0)
					{
						case 0x00000010:
							if (Function_117(19))
							{
								if (Function_190(&(Global_63541[2055]), 20, 1, 1) && !Function_189(20))
								{
									return 1;
								}
								return 0;
							}
							if (Function_117(18))
							{
								if ((Function_190(&(Global_63541[1955]), 19, 1, 1) && !Function_189(19)) && !IS_EARLIER_THAN(GET_TIME_OF_DAY(), Global_63541[1955].f_156))
								{
									return 1;
								}
								return 0;
							}
							if (Function_117(17))
							{
								if (Function_190(&(Global_63541[1855]), 18, 1, 1) && !Function_189(18))
								{
									return 1;
								}
								return 0;
							}
							if (Function_117(16))
							{
								if ((Function_190(&(Global_63541[1755]), 17, 1, 1) && !Function_189(17)) && !IS_EARLIER_THAN(GET_TIME_OF_DAY(), Global_63541[1755].f_156))
								{
									return 1;
								}
								return 0;
							}
							if (Function_117(15))
							{
								if (Function_190(&(Global_63541[1655]), 16, 1, 1) && !Function_189(16))
								{
									return 1;
								}
								return 0;
							}
							if (Function_9(8, 0))
							{
								if (Function_190(&(Global_63541[1555]), 15, 1, 1) && !Function_189(15))
								{
									return 1;
								}
								return 0;
							}
							return 0;
							break;
						
						default:
							return 1;
							break;
					}
					break;
				
				case 0x00000003:
					return 1;
					break;
				
				case 0x00000010:
					return 0;
					break;
				
				case 0x00000011:
					return 0;
					break;
				
				default:
					return 0;
					break;
				}
		}
	}
	else
	{
		LOG_ERROR("Attempting to track an invalid outfit");
		return 0;
	}
	return 0;
}

bool Function_189(int iParam0) //Position: 0x8425 / 33829
{
	if (Global_74542[iParam010] == 7)
	{
		return 1;
	}
	return 0;
}

int Function_190(int iParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x843A / 33850
{
	if (!iParam0->f_172 != 0)
	{
		if (Function_196(iParam0 + 172, 4))
		{
			if (!Function_195(iParam1))
			{
				return 0;
			}
		}
		if (Function_196(iParam0 + 172, 1))
		{
			if (Global_63541[iParam0->f_16855].f_20 != Global_63541[iParam155].f_20 || iParam3)
			{
				if (!Function_117(iParam0->f_168))
				{
					return 0;
				}
			}
		}
		if (Function_196(iParam0 + 172, 2) && Global_3365)
		{
			if (!Function_9(iParam0->f_176, 0))
			{
				return 0;
			}
		}
		if (Function_196(iParam0 + 172, 8) && Global_3365)
		{
			if (!Function_192(iParam0->f_164, 0))
			{
				return 0;
			}
		}
		if (!bParam2)
		{
			return 1;
		}
		return Function_191(iParam0);
	}
	return 1;
}

int Function_191(int iParam0) //Position: 0x84EE / 34030
{
	if (!iParam0->f_172 != 0)
	{
		switch (Global_63399)
		{
			case 0x00000001:
				if (!Function_196(iParam0 + 172, 32))
				{
					return 0;
				}
				break;
			
			case 0x00000002:
				if (!Function_196(iParam0 + 172, 64))
				{
					return 0;
				}
				break;
			
			case 0x00000004:
				if (!Function_196(iParam0 + 172, 128))
				{
					return 0;
				}
				break;
			
			case 0x00000008:
				if (!Function_196(iParam0 + 172, 256))
				{
					return 0;
				}
				break;
			
			case 0x00000010:
				if (!Function_196(iParam0 + 172, 512))
				{
					return 0;
				}
				break;
			
			case 0x00000020:
				if (!Function_196(iParam0 + 172, 1024))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

bool Function_192(int iParam0, bool bParam1) //Position: 0x859A / 34202
{
	if (!Function_193(iParam0))
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

bool Function_193(int iParam0) //Position: 0x85D0 / 34256
{
	if (!Function_10(iParam0))
	{
		return 0;
	}
	if (!Function_194(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_194(int iParam0) //Position: 0x85F4 / 34292
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_195(int iParam0) //Position: 0x8609 / 34313
{
	return StackVal;
}

bool Function_196(var uParam0, int iParam1) //Position: 0x8619 / 34329
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_197(int iParam0) //Position: 0x8635 / 34357
{
	int iVar0;
	int iVar1;
	
	if (!Function_200(iParam0))
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

bool Function_198(int iParam0) //Position: 0x8684 / 34436
{
	if (!Function_200(iParam0))
	{
		LOG_ERROR("Attempting to check wearable on invalid outfit");
		return 0;
	}
	if (Function_223(iParam0, 4))
	{
		return 1;
	}
	return 0;
}

bool Function_199(int iParam0) //Position: 0x86D5 / 34517
{
	if (!Function_200(iParam0))
	{
		LOG_ERROR("Attempting to check discovery of invalid outfit");
		return 0;
	}
	if (Function_223(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

bool Function_200(int iParam0) //Position: 0x8727 / 34599
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

void Function_201(int iParam0) //Position: 0x873D / 34621
{
	int iVar0;
	
	if (!Function_200(iParam0))
	{
		return;
	}
	if (Function_198(iParam0))
	{
		return;
	}
	if (!Function_223(iParam0, 1048576))
	{
		return;
	}
	iVar0 = Function_210(iParam0);
	if (iVar0 >= Global_27774[iParam013].f_24)
	{
		Global_27774[iParam013].f_24 = iVar0;
		if (Global_27774[iParam013].f_24 == Global_27774[iParam013].f_28)
		{
			Function_202(iParam0, 0, 1);
		}
	}
	return;
}

void Function_202(bool bParam0, bool bParam1, bool bParam2) //Position: 0x87A0 / 34720
{
	char* cVar0[32];
	char* cVar8[32];
	
	if (!Function_200(bParam0))
	{
		LOG_ERROR("Attempting to mostly complete an invalid outfit");
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_198(bParam0))
	{
		if (!Function_199(bParam0))
		{
			Function_203(bParam0, 1, 0, 0, 1);
		}
		strcpy(&cVar0, "OUT_", 32);
		strcpy(&cVar8, "out_", 32);
		stradd(&cVar0, &Global_27774[bParam013] + 32, 32);
		stradd(&cVar8, &Global_27774[bParam013] + 32, 32);
		stradd(&cVar8, "_desc", 32);
		if (Global_27774[bParam013].f_48 != 4294967295 || (Global_27774[bParam013].f_48 != 0 && Global_27774[bParam013].f_28 < 0))
		{
			Global_27774[bParam013].f_48 = CREATE_JOURNAL_ENTRY(&cVar0, 4, bParam0, 0);
		}
		if (Global_27774[bParam013].f_48 == 4294967295 && Global_27774[bParam013].f_48 == 0)
		{
			CLEAR_JOURNAL_ENTRY(Global_27774[bParam013].f_48);
			PREPEND_JOURNAL_ENTRY(Global_27774[bParam013].f_48, true);
			PREPEND_JOURNAL_ENTRY_DETAIL(Global_27774[bParam013].f_48, &cVar8, 0, 2, false);
			SET_JOURNAL_ENTRY_PROGRESS(Global_27774[bParam013].f_48, -1.0f, false, 0);
			if (!bParam1)
			{
				PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Finish", &cVar0, false, false, false, 0, 2, 0, 0, 0);
			}
		}
		Function_96(457, 1, 0, 0);
		Function_222(bParam0, 6);
		if (bParam0 == 3)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(23))
			{
				AWARD_ACHIEVEMENT(23);
			}
		}
		if (bParam2)
		{
			if (!Function_77(0, 0, 1, 1))
			{
				Function_66(1);
				Function_65(1, 0);
			}
			else
			{
				Function_64();
			}
		}
	}
	return;
}

void Function_203(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x893F / 35135
{
	struct<8> Var0;
	
	if (!Function_200(bParam0))
	{
		LOG_ERROR("Attempting to discover invalid outfit");
		return;
	}
	if (!Function_209(3) && !bParam4)
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_199(bParam0))
	{
		Function_96(456, 1, 0, 0);
		Function_222(bParam0, 2);
		if (bParam2)
		{
			if (!Function_77(0, 0, 1, 1))
			{
				Function_66(1);
				Function_65(1, 5);
			}
			else
			{
				Function_64();
			}
		}
		Function_204(bParam0);
		strcpy(&Var0, "OUT_", 32);
		stradd(&Var0, &Global_27774[bParam013] + 32, 32);
		if ((!Function_225() && !bParam1) && !Global_3380)
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Add", &Var0, false, false, false, 0, 2, 0, 0, 0);
		}
		else if (Function_225() || Global_3380)
		{
			if (!DECOR_CHECK_EXIST(Global_34573, "outfitDisc"))
			{
				DECOR_SET_INT(Global_34573, "outfitDisc", bParam0);
			}
		}
		if (bParam3)
		{
			stradd(&Var0, "_tip", 32);
			Function_5(&Var0, 10.0f, 1, 0, 0, 1, 0);
		}
		if (!Function_7())
		{
			if (!Function_102(Global_76846, 2))
			{
				Function_97(Global_34573, 2, 1, 0);
			}
		}
	}
}

void Function_204(bool bParam0) //Position: 0x8A94 / 35476
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
			if (Function_207(bParam0, Function_208(bVar24)))
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
			if (Function_207(bParam0, Function_208(bVar24)))
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
		SET_JOURNAL_ENTRY_PROGRESS(Global_27774[bParam013].f_48, (TO_FLOAT(Function_210(bParam0)) / TO_FLOAT(Global_27774[bParam013].f_28)), false, 0);
		Function_206(Global_27774[bParam013].f_48, 0);
		straddi(&cVar8, Function_205(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_27774[bParam013].f_48, &cVar8, 3);
	}
	return;
}

int Function_205(int iParam0) //Position: 0x8C44 / 35908
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_200(iParam0))
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

void Function_206(char* cParam0, bool bParam1) //Position: 0x8C9B / 35995
{
	bool bVar0;
	
	bVar0 = IS_JOURNAL_ENTRY_TARGETED(cParam0);
	REMOVE_JOURNAL_ENTRY(cParam0, bParam1);
	PREPEND_JOURNAL_ENTRY(cParam0, bParam1);
	if (bVar0)
	{
		TARGET_JOURNAL_ENTRY(cParam0);
	}
	return;
}

bool Function_207(bool bParam0, int iParam1) //Position: 0x8CC0 / 36032
{
	int iVar0;
	
	if (!Function_200(bParam0))
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

int Function_208(bool bParam0) //Position: 0x8D1F / 36127
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_209(int iParam0) //Position: 0x8D2B / 36139
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_25986[iParam0];
}

var Function_210(bool bParam0) //Position: 0x8D47 / 36167
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_200(bParam0))
	{
		return 4294967295;
	}
	iVar0 = 1;
	iVar1 = 0;
	iVar2 = 0;
	iVar1 = iVar1;
	iVar1 = 0;
	while (iVar1 <= Global_27774[bParam013].f_28)
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

void Function_211(int iParam0) //Position: 0x8D9D / 36253
{
	int iVar0;
	int iVar1;
	
	if (!Function_200(iParam0))
	{
		LOG_ERROR("Attempting to do the SpecialEffects for an invalid outfit");
		return;
	}
	if (Global_27774[iParam013].f_12 & 1 >= 0)
	{
		SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, Global_27774[iParam013].f_16, true);
		iVar0 = GET_ACTOR_FACTION(Global_34573);
	}
	if (Global_27774[iParam013].f_12 & 2 >= 0)
	{
		Function_212(78, 1, 1);
		if (!Function_102(Global_76847, 64))
		{
			Function_97(Global_34573, 64, 2, 0);
		}
	}
	if (Global_27774[iParam013].f_12 & 32 >= 0)
	{
		SET_DEADEYE_REGENERATION_RATE_MULTIPLIER(0, 2.0f);
		SET_DEADEYE_POINT_MODIFIER(0, 2.0f);
	}
	if (Global_27774[iParam013].f_12 & 64 >= 0)
	{
		SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, Global_27774[iParam013].f_16, 3);
		iVar1 = GET_ACTOR_FACTION(Global_34573);
		DECOR_SET_BOOL(Global_34573, "zMarston", true);
		DECOR_SET_BOOL(Global_34573, "zombie", true);
		RESET_ACTIONTREE_FOR_ACTOR(Global_34573);
	}
	if (Global_27774[iParam013].f_12 & 128 >= 0)
	{
		ACTOR_ENABLE_VARIABLE_MESH(Global_34573, 23, true);
		ACTOR_ENABLE_VARIABLE_MESH(Global_34573, 25, true);
	}
	return;
}

int Function_212(bool bParam0, bool bParam1, int iParam2) //Position: 0x8ECB / 36555
{
	if (bParam0 >= 4294967295 || bParam0 <= 79)
	{
		return 0;
	}
	if (bParam1)
	{
		if (GET_ITEM_COUNT(Function_213(bParam0), Function_14()) == 0)
		{
			ADD_ITEM(Function_213(bParam0), Function_14(), iParam2);
			return 1;
		}
	}
	ADD_ITEM(Function_213(bParam0), Function_14(), iParam2);
	return 1;
}

var Function_213(bool bParam0) //Position: 0x8F16 / 36630
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

void Function_214(var uParam0, bool bParam1, int iParam2) //Position: 0x9007 / 36871
{
	int iVar0;
	
	iVar0 = 0;
	if (IS_SCRIPT_VALID(Global_30617))
	{
		TERMINATE_SCRIPT(Global_30617);
	}
	if (IS_GAME_RESETTING())
	{
		bParam1 = false;
	}
	if (bParam1)
	{
		if (Function_150(Global_29006))
		{
			Function_219(&(Global_29008[Global_29006]), 131072);
			Function_218(&(Global_29008[Global_29006]), 2097152);
			Function_216(Global_29006);
		}
		else
		{
			bParam1 = false;
		}
	}
	if (!bParam1)
	{
		if (!HUD_IS_FADED())
		{
		}
		iVar0 = 0;
		while (iVar0 <= 146)
		{
			if (!StackVal != 1)
			{
				if (Function_215(&(Global_29008[iVar0]), 4) || Function_215(&(Global_29008[iVar0]), 1))
				{
					if (IS_SCRIPT_VALID(Global_29155[iVar010].f_24))
					{
						TERMINATE_SCRIPT(Global_29155[iVar010].f_24);
					}
					Function_218(&(Global_29008[iVar0]), 2097155);
					Function_219(&(Global_29008[iVar0]), 262144);
				}
			}
			iVar0++;
		}
		Global_3386 = 0;
		Global_3387 = 0;
		if (!IS_EXITFLAG_SET() && iParam2)
		{
			if (Function_78())
			{
			}
			WAIT(false);
		}
		if (uParam0 && !NET_IS_IN_SESSION())
		{
			DESTROY_GC_OBJECTS(0, 1);
		}
		CLEAN_CACHE_ENTRIES();
		ENABLE_AMBIENT_SPAWNING(false);
	}
	return;
}

bool Function_215(var uParam0, int iParam1) //Position: 0x9112 / 37138
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_216(int iParam0) //Position: 0x912E / 37166
{
	if (StackVal || ((StackVal || (StackVal || StackVal != 3 != 5) != 4) != 2 && !Global_3386))
	{
		if (StackVal == 2)
		{
			if (Function_217())
			{
				return;
			}
		}
		if (!Function_215(&(Global_29008[iParam0]), 2048))
		{
			Global_30618 = iParam0;
		}
		Global_29007 = StackVal;
	}
	else if (Global_3386)
	{
	}
	return;
}

bool Function_217() //Position: 0x91AD / 37293
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_29008)
	{
		if (StackVal && (StackVal && (StackVal && StackVal == 2 == 1) == 6) == 7)
		{
			if (Function_215(&(Global_29008[iVar0]), 4) || Function_215(&(Global_29008[iVar0]), 1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_218(var uParam0, int iParam1) //Position: 0x9216 / 37398
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_219(var uParam0, int iParam1) //Position: 0x922D / 37421
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_220(int iParam0) //Position: 0x923C / 37436
{
	if (!Function_200(iParam0))
	{
		LOG_ERROR("Attempting to undo the SpecialEffects for an invalid outfit");
		return;
	}
	if (Global_27774[iParam013].f_12 & 1 >= 0)
	{
		RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, Global_27774[iParam013].f_16);
	}
	if (Global_27774[iParam013].f_12 & 2 >= 0)
	{
	}
	if (Global_27774[iParam013].f_12 & 32 >= 0)
	{
		SET_DEADEYE_REGENERATION_RATE_MULTIPLIER(0, 1.0f);
		SET_DEADEYE_POINT_MODIFIER(0, 1.0f);
	}
	if (Global_27774[iParam013].f_12 & 64 >= 0)
	{
	}
	if (Global_27774[iParam013].f_12 & 128 >= 0)
	{
	}
	return;
}

void Function_221(int iParam0, int iParam1) //Position: 0x92F2 / 37618
{
	int iVar0;
	
	if (!Function_200(iParam0))
	{
		LOG_ERROR("Attempting to unset status on invalid outfit");
		return;
	}
	iVar0 = (StackVal && iParam1);
	Global_27774[iParam013].f_8 = (StackVal - iVar0);
	return;
}

void Function_222(bool bParam0, int iParam1) //Position: 0x9357 / 37719
{
	if (!Function_200(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_27774[bParam013].f_8 = (StackVal || iParam1);
	return;
}

bool Function_223(int iParam0, int iParam1) //Position: 0x93AC / 37804
{
	int iVar0;
	
	if (!Function_200(iParam0))
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

int Function_224() //Position: 0x93D9 / 37849
{
	return Function_15(StackVal, 1);
}

bool Function_225() //Position: 0x93E8 / 37864
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_226() //Position: 0x9415 / 37909
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_27774)
	{
		Global_27774[iVar013] = 4294967295;
		iVar0++;
	}
	Function_228(0, "cowboy", 0, 0, 2, 0, 3);
	Function_228(14, "poncho", 1, 17, 2, 0, 1);
	Function_228(13, "duster", 1, 16, 2, 0, 1);
	Function_228(15, "rancher", 1, 10, 2, 0, 1);
	Function_228(9, "military", 1, 9, 8, 1, 0);
	Function_228(18, "zhunter", 5, 24, 2, 2, 1);
	Function_228(19, "apoc", 1, 23, 2, 0, 1);
	Function_228(20, "zombie", 1, 22, 32, 64, 0);
	Function_228(21, "small", 1, 21, 2, 128, 1);
	Function_228(22, "apoc_z", 1, 14, 32, 64, 0);
	Function_228(23, "nzhunter_z", 5, 15, 32, 66, 0);
	if (Function_227(Function_80(0, 4, 1)) == 3 && Function_227(Function_80(0, 4, 1)) == 4)
	{
		Function_203(0, 1, 0, 0, 1);
		Function_202(0, 1, 0);
		Function_203(14, 1, 0, 0, 1);
		Function_202(14, 1, 0);
		Function_203(13, 1, 0, 0, 1);
		Function_202(13, 1, 0);
		Function_203(15, 1, 0, 0, 1);
		Function_202(15, 1, 0);
		Function_203(21, 1, 0, 0, 1);
		Function_202(21, 1, 0);
	}
	else
	{
		Function_221(0, 6);
		Function_222(0, 8);
		Function_221(13, 6);
		Function_222(13, 8);
		Function_221(14, 6);
		Function_222(14, 8);
		Function_221(9, 6);
		Function_222(9, 8);
		Function_221(15, 6);
		Function_222(15, 8);
		Function_221(19, 6);
		Function_222(19, 8);
		Function_221(18, 6);
		Function_222(18, 8);
		Function_221(21, 6);
		Function_222(21, 8);
	}
	if (Global_3364)
	{
		Global_28180 = 4294967295;
	}
	Global_28180.f_8 = "";
	return;
}

int Function_227(int iParam0) //Position: 0x95F1 / 38385
{
	if (!Function_193(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

void Function_228(bool bParam0, char* cParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x960B / 38411
{
	char* cVar0[32];
	char* cVar8[32];
	
	if (bParam0 > 0 || bParam0 < 30)
	{
		LOG_ERROR("Attempting to initialize an outfit that is out of range");
		return;
	}
	if (iParam2 > 0 || iParam2 < 32)
	{
		LOG_ERROR("Attempting to initialize an outfit with invalid scrap count");
		return;
	}
	Global_27774[bParam013] = bParam0;
	strcpy(&Global_27774[bParam013] + 32, cParam1, 16);
	if (Global_3364)
	{
		Global_27774[bParam013].f_4 = 0;
		Global_27774[bParam013].f_8 = 1;
	}
	if (iParam6 == 0)
	{
		Function_222(bParam0, 8);
	}
	Global_27774[bParam013].f_28 = iParam2;
	Global_27774[bParam013].f_16 = iParam4;
	Global_27774[bParam013].f_20 = iParam3;
	Global_27774[bParam013].f_12 = iParam5;
	strcpy(&cVar0, "out_", 32);
	stradd(&cVar0, &Global_27774[bParam013] + 32, 32);
	cVar8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
	stradd(&cVar8, "_desc", 32);
	SATCHEL_CREATE_OUTFIT(&cVar0, &cVar8, iParam6);
}

void Function_229(int iParam0) //Position: 0x9752 / 38738
{
	strcpy(iParam0 + 12, "AMBIENT-UNLOCK", 16);
	*iParam0 = 46992;
	iParam0->f_4 = 38801;
	iParam0->f_8 = 38795;
	iParam0->f_28 = 1;
	return;
}

void Function_230() //Position: 0x978B / 38795
{
	return;
}

int Function_231() //Position: 0x9791 / 38801
{
	if (!Global_3366)
	{
		return 0;
	}
	Function_239();
	Function_234(1);
	Function_232();
	if ((Function_225() || HUD_IS_FADED()) || HUD_IS_FADING())
	{
		return 0;
	}
	if (!Function_135(8192))
	{
		return 0;
	}
	if ((((Global_3380 || Global_63096) || Global_3395) || Global_3394) || Global_3396)
	{
		return 0;
	}
	if (Global_26281 + 5.0f) < GET_CURRENT_GAME_TIME()
	{
		return 0;
	}
	return 0;
}

void Function_232() //Position: 0x97ED / 38893
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_26003)
	{
		if (!Global_26003[iVar0])
		{
			switch (iVar0)
			{
				case 0x00000000:
					if (Function_9(2, 0))
					{
						Global_26003[iVar0] = 1;
						ENABLE_WORLD_SECTOR("ramitaBayaAfter");
						DISABLE_WORLD_SECTOR("ramitaBayaBefore");
						ENABLE_CURVE("rsdROAD_frb_road", true);
						ENABLE_CURVE("rsdROAD_fom_frb_road", true);
						ENABLE_CURVE("rsdGPSTRAIL_curve221", true);
					}
					break;
				
				case 0x00000001:
				case 0x00000002:
					Global_26003[iVar0] = 1;
					break;
				
				case 0x00000003:
					if (Function_9(2, 0))
					{
						Global_26003[iVar0] = 1;
						ENABLE_WORLD_SECTOR("butterBridgeB");
						DISABLE_WORLD_SECTOR("butterBridgeA");
						DISABLE_WORLD_SECTOR("butterBridgeD");
						DISABLE_WORLD_SECTOR("butterBridgeC");
						ENABLE_CURVE("rsdGPSTRAIL_butterBridge_path", true);
						DISABLE_CHILD_SECTOR("dlc_frb_zombie02x");
					}
					break;
				
				case 0x00000004:
					if (Function_117(5))
					{
						Global_26003[iVar0] = 1;
						ENABLE_WORLD_SECTOR("tannersSpanAfter");
						DISABLE_WORLD_SECTOR("tannersSpanBefore");
					}
					break;
				
				case 0x00000005:
					if (Function_117(5))
					{
						Global_26003[iVar0] = 1;
						ENABLE_WORLD_SECTOR("dixonCrossingAfter");
						DISABLE_WORLD_SECTOR("dixonCrossingBefore");
						ENABLE_CURVE("rsdROAD_thi_blk_road", true);
						ENABLE_CURVE("rsdROAD_thi_blk_roaddetachedCurve2", true);
						ENABLE_CURVE("rsdGPSTRAIL_curve124", true);
						ENABLE_CURVE("rsdGPSTRAIL_curve132", true);
					}
					break;
				
				case 0x00000006:
				case 0x00000007:
					Global_26003[iVar0] = 1;
					break;
				
				case 0x00000008:
					Global_26003[iVar0] = 1;
					break;
				
				case 0x00000009:
					if (Function_233(2) || Function_9(2, 0))
					{
						Global_26003[iVar0] = 1;
						ENABLE_WORLD_SECTOR("fronteraBridgeAfter");
						DISABLE_WORLD_SECTOR("fronteraBridgeBefore");
					}
					break;
				
				case 0x0000000A:
					Global_26003[iVar0] = 1;
					break;
				
				case 0x0000000B:
					Global_26003[iVar0] = 1;
					break;
				
				case 0x0000000C:
					if (Function_117(5))
					{
						Global_26003[iVar0] = 1;
						ENABLE_WORLD_SECTOR("masonBridgeAfter");
						DISABLE_WORLD_SECTOR("masonBridgeBefore");
					}
					break;
				
				case 0x0000000D:
					if (Function_117(5))
					{
						Global_26003[iVar0] = 1;
						ENABLE_CHILD_SECTOR("lmf_troughAfter01x");
						DISABLE_CHILD_SECTOR("lmf_troughBefore01x");
					}
					break;
				
				case 0x0000000E:
					Global_26003[iVar0] = 1;
					break;
				
				case 0x0000000F:
					Global_26003[iVar0] = 1;
					break;
				
				case 0x00000010:
					Global_26003[iVar0] = 1;
					break;
				
				case 0x00000011:
					Global_26003[iVar0] = 1;
					break;
				
				case 0x00000012:
					Global_26003[iVar0] = 1;
					break;
				
				case 0x00000013:
					Global_26003[iVar0] = 1;
					break;
				
				case 0x00000014:
					Global_26003[iVar0] = 1;
					break;
				
				case 0x00000015:
					if (Function_117(24))
					{
						Global_26003[iVar0] = 1;
						ENABLE_CHILD_SECTOR("mp_lsh_ffa01x");
					}
					break;
				
				case 0x00000016:
					Global_26003[iVar0] = 1;
					break;
				
				case 0x00000017:
					if (Function_9(4, 0))
					{
						Global_26003[iVar0] = 1;
						ENABLE_CHILD_SECTOR("beh_grave01x");
					}
					break;
				
				case 0x00000018:
					if (Function_9(2, 0))
					{
						Global_26003[iVar0] = 1;
						ENABLE_CURVE("rsdGPSTRAIL_elm_cas_path", true);
						ENABLE_CURVE("rsdGPSTRAIL_curve495", true);
						ENABLE_CURVE("rsdGPSTRAIL_elm_cas_pathdetachedCurve12", true);
						ENABLE_CURVE("rsdGPSTRAIL_elm_cas_pathdetachedCurve13", true);
						ENABLE_CURVE("rsdGPSTRAIL_elm_cas_loop1", true);
						ENABLE_CURVE("rsdTRAIL_cas_ram_pathdetachedCurve10", true);
						ENABLE_CURVE("rsdTRAIL_cas_ram_pathdetachedCurve8", true);
						ENABLE_CURVE("rsdTRAIL_cas_ram_pathdetachedCurve6", true);
						ENABLE_CURVE("rsdTRAIL_las_nos_pathdetachedCurve2", true);
						ENABLE_CURVE("rsdROAD_las_esc_roaddetachedCurve10detachedCurve1", true);
						ENABLE_CURVE("rsdTRAIL_curve44", true);
						ENABLE_CURVE("rsdROAD_las_esc_roaddetachedCurve18", true);
						ENABLE_CURVE("rsdTRAIL_cas_ram_pathdetachedCurve2", true);
						ENABLE_CURVE("rsdTRAIL_cas_ram_pathdetachedCurve4detachedCurve2", true);
						ENABLE_CURVE("rsdROAD_las_roaddetachedCurve4", true);
						ENABLE_CURVE("rsdROAD_las_roaddetachedCurve2", true);
						ENABLE_CURVE("rsdROAD_curve69", true);
						ENABLE_CURVE("rsdROAD_las_road", true);
						ENABLE_CURVE("rsdROAD_frb_road", true);
						ENABLE_CURVE("rsdGPSTRAIL_curve98", true);
						ENABLE_CURVE("rsdGPSROAD_elm_cas_roaddetachedCurve4detachedCurve2", true);
						ENABLE_CURVE("rsdGPSROAD_elm_cas_roaddetachedCurve4", true);
						ENABLE_CURVE("rsdGPSTRAIL_elm_loop01_pathdetachedCurve2detachedCurve2", true);
						ENABLE_CURVE("rsdGPSTRAIL_curve634", true);
						ENABLE_CURVE("rsdGPSTRAIL_curve635", true);
						ENABLE_CURVE("rsdGPSTRAIL_curve636", true);
						ENABLE_CURVE("rsdTRAIL_curve637", true);
						ENABLE_CURVE("rsdTRAIL_curve638", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop04_pathdetachedCurve2", true);
						ENABLE_CURVE("rsdTRAIL_curve70", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop04_path", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop05_pathdetachedCurve4", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop05_pathdetachedCurve2", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop01_pathdetachedCurve2detachedCurve2", true);
						ENABLE_CURVE("rsdTRAIL_chu_loop01_pathdetachedCurve2detachedCurve2detachedCurve2detachedCurve2", true);
						ENABLE_CURVE("rsdTRAIL_chu_loop01_pathdetachedCurve2detachedCurve2detachedCurve2", true);
						ENABLE_CURVE("rsdTRAIL_chu_loop01_pathdetachedCurve2detachedCurve2", true);
						ENABLE_CURVE("rsdTRAIL_chu_loop01_pathdetachedCurve2", true);
						ENABLE_CURVE("rsdTRAIL_chu_loop01_pathdetachedCurve4", true);
						ENABLE_CURVE("rsdTRAIL_elm_cas_pathdetachedCurve10", true);
						ENABLE_CURVE("rsdTRAIL_elm_cas_pathdetachedCurve8", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop03_path1", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop03_path", true);
						ENABLE_CURVE("rsdTRAIL_elm_cas_pathdetachedCurve6", true);
						ENABLE_CURVE("rsdTRAIL_elm_cas_pathdetachedCurve4", true);
						ENABLE_CURVE("rsdTRAIL_elm_cas_pathdetachedCurve2", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop02_path", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop01_path1", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop01_path", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop03_path1detachedCurve4", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop03_pathdetachedCurve4", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop03_pathdetachedCurve2", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop03_path1detachedCurve2", true);
						ENABLE_CURVE("rsdTRAIL_chu_loop01_path3detachedCurve2", true);
						ENABLE_CURVE("rsdTRAIL_chu_loop01_path3", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop09_path", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop06__path", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop01_path1detachedCurve4", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop01_pathdetachedCurve4", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop01_path1detachedCurve2", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop01_path1detachedCurve6", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop07_pathdetachedCurve2detachedCurve2", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop07_pathdetachedCurve2", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop07_path", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop02_path1", true);
						ENABLE_CURVE("rsdTRAIL_cas_ram_pathdetachedCurve4", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop02_path1detachedCurve4", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop02_path1detachedCurve2", true);
						ENABLE_CURVE("rsdROAD_las_esc_roaddetachedCurve20detachedCurve2", true);
						ENABLE_CURVE("rsdROAD_las_esc_roaddetachedCurve16", true);
						ENABLE_CURVE("rsdROAD_las_esc_roaddetachedCurve12", true);
						ENABLE_CURVE("rsdROAD_las_esc_roaddetachedCurve14", true);
						ENABLE_CURVE("rsdGPSTRAIL_curve163", true);
						ENABLE_CURVE("rsdTRAIL_curve297", true);
						ENABLE_CURVE("rsdTRAIL_curve71", true);
						ENABLE_CURVE("rsdTRAIL_curve72", true);
						ENABLE_CURVE("rsdTRAIL_cas_ram_path", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop04_pathdetachedCurve2detachedCurve2", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop05_path", true);
						ENABLE_CURVE("rsdTRAIL_cas_loop08_path", true);
						ENABLE_CURVE("rsdGPSTRAIL_curve77", true);
						ENABLE_CURVE("rsdGPSTRAIL_curve78", true);
						ENABLE_CURVE("rsdGPSTRAIL_curve78", true);
						ENABLE_CURVE("rsdGPSTRAIL_curve79", true);
						ENABLE_CURVE("rsdGPSTRAIL_elm_loop01_pathdetachedCurve2detachedCurve4", true);
						ENABLE_CURVE("rsdGPSTRAIL_elm_loop01_pathdetachedCurve2", true);
						ENABLE_CURVE("rsdGPSTRAIL_elm_loop01_path", true);
						ENABLE_CURVE("rsdGPSTRAIL_elm_loop02_path", true);
						ENABLE_CURVE("rsdROAD_elm_cas_roaddetachedCurve8", true);
						ENABLE_CURVE("rsdROAD_elm_cas_roaddetachedCurve6", true);
						ENABLE_CURVE("rsdROAD_las_esc_roaddetachedCurve20", true);
					}
					break;
				
				case 0x00000019:
					if (Function_117(8))
					{
						Global_26003[iVar0] = 1;
						ENABLE_CHILD_SECTOR("dlc_fom_ladders01x");
					}
					break;
				
				case 0x0000001A:
					Global_26003[iVar0] = 1;
					break;
				
				default:
					LOG_ERROR("World state error!");
					break;
				}
		}
		iVar0++;
	}
	return;
}

int Function_233(int iParam0) //Position: 0xAB57 / 43863
{
	int iVar0;
	
	if (!Function_12(iParam0))
	{
		return 0;
	}
	iVar0 = Function_11(iParam0);
	if (!Function_193(Function_11(iParam0)))
	{
		return 0;
	}
	if (StackVal == 2)
	{
		return 1;
	}
	return 0;
}

void Function_234(bool bParam0) //Position: 0xAB8D / 43917
{
	int iVar0;
	bool bVar1;
	
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 <= Global_25986)
	{
		if ((!Global_25986[iVar0] && (!bParam0 || !Function_225())) && !bVar1)
		{
			switch (iVar0)
			{
				case 0x00000000:
				case 0x00000002:
					Global_25986[iVar0] = 1;
					break;
				
				case 0x00000001:
					Global_25986[iVar0] = 1;
					SET_DISABLE_DEADEYE(0, 0);
					SET_DEADEYE_MULTILOCK_ENABLE(0, true);
					SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
					SET_PLAYER_ENDLESS_READYMODE(0, 1);
					Function_106(390, 3.0f);
					Function_38(390, 3, 0);
					break;
				
				case 0x00000003:
					Global_25986[iVar0] = 1;
					break;
				
				case 0x00000004:
					if (Function_117(2))
					{
						Global_25986[iVar0] = 1;
						Function_238(1);
						ENABLE_AMBIENT_SPAWNING(true);
					}
					break;
				
				case 0x00000005:
					Global_25986[iVar0] = 1;
					break;
				
				case 0x00000009:
					Global_25986[iVar0] = 1;
					break;
				
				case 0x00000006:
					Global_25986[iVar0] = 1;
					break;
				
				case 0x00000007:
					Global_25986[iVar0] = 1;
					break;
				
				case 0x00000008:
					if (Function_117(4))
					{
						Global_25986[iVar0] = 1;
					}
					break;
				
				case 0x0000000A:
					Global_25986[iVar0] = 1;
					break;
				
				case 0x0000000B:
					if (Function_236(0) || !Global_3365)
					{
						Global_25986[iVar0] = 1;
					}
					break;
				
				case 0x0000000C:
					Global_25986[iVar0] = 1;
					Function_235(1);
					break;
				
				case 0x0000000F:
				case 0x0000000D:
				case 0x0000000E:
					Global_25986[iVar0] = 0;
					break;
				
				default:
					LOG_ERROR("Found a FeatureType that is not enabled for unlocking!");
					break;
				}
		}
		iVar0++;
	}
	return;
}

void Function_235(bool bParam0) //Position: 0xAD42 / 44354
{
	if (DECOR_CHECK_EXIST(Global_34573, "DISABLE_HORSE_WHISTLE"))
	{
		if (bParam0)
		{
			DECOR_REMOVE(Global_34573, "DISABLE_HORSE_WHISTLE");
		}
	}
	else if (!bParam0)
	{
		DECOR_SET_BOOL(Global_34573, "DISABLE_HORSE_WHISTLE", true);
	}
	return;
}

int Function_236(int iParam0) //Position: 0xADB6 / 44470
{
	if (iParam0 > 0 || iParam0 < 4)
	{
		LOG_ERROR("HAS_GRAVEYARD_EVER_BEEN_COMPLETED: iDeedIndex is out of range!");
		return 0;
	}
	return Global_13172[Function_237(iParam0)11].f_12 < 0;
}

int Function_237(int iParam0) //Position: 0xAE1C / 44572
{
	if (iParam0 > 0 || iParam0 < 4)
	{
		LOG_ERROR("\HAS_GRAVEYARD_EVER_BEEN_COMPLETED: iDeedIndex is out of range, returning gHideoutTwinRocks!");
		return Global_30734;
	}
	switch (iParam0)
	{
		case 0x00000000:
			return Global_30734;
			break;
		
		case 0x00000001:
			return Global_30735;
			break;
		
		case 0x00000004:
			return Global_30736;
			break;
		
		case 0x00000003:
			return Global_30737;
			break;
		
		case 0x00000002:
			return Global_30738;
			break;
	}
	return Global_30734;
}

void Function_238(int iParam0) //Position: 0xAEDE / 44766
{
	if (Function_15(iParam0, 1) && !Function_15(Global_26119, 1))
	{
	}
	Global_26119 = (Global_26119 || iParam0);
	Global_26119 |= 1073741824;
	return;
}

void Function_239() //Position: 0xAF0B / 44811
{
	float fVar0;
	int iVar1;
	
	fVar0 = 0.0f;
	iVar1 = Function_248();
	fVar0 = (fVar0 + (15.0f * Function_181(1.0f, (IntToFloat(Function_53(9)) / 3.0f))));
	fVar0 = (fVar0 + (20.0f * Function_181(1.0f, (IntToFloat(Function_53(407)) / 10.0f))));
	fVar0 = (fVar0 + (10.0f * Function_181(1.0f, (IntToFloat(Function_53(656)) / 5.0f))));
	fVar0 = (fVar0 + (4.0f * Function_181(1.0f, (IntToFloat(iVar1) / 1.0f))));
	fVar0 = (fVar0 + (16.0f * Function_181(1.0f, (IntToFloat(Function_53(657)) / 16.0f))));
	fVar0 = (fVar0 + (19.0f * Function_181(1.0f, (Function_49(658) / 19.0f))));
	if (Function_247(3) > 10)
	{
		fVar0 = (fVar0 + 4.0f);
	}
	if (Function_247(0) > 10)
	{
		fVar0 = (fVar0 + 4.0f);
	}
	if (Function_247(2) > 10)
	{
		fVar0 = (fVar0 + 4.0f);
	}
	if (Function_247(1) > 10)
	{
		fVar0 = (fVar0 + 4.0f);
	}
	if (Global_30842[7])
	{
		Function_246(iVar1);
	}
	if (fVar0 < Function_49(5))
	{
		Function_245(5, fVar0, 0);
		Function_246(iVar1);
	}
	if (fVar0 <= 100.0f)
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(93))
		{
			AWARD_ACHIEVEMENT(93);
			Function_5("UN_100", 0x41200000, 1, 0, 2, 1, 0);
		}
	}
	Function_240();
	return;
}

void Function_240() //Position: 0xB03F / 45119
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Function_9(1, 0))
	{
		Function_244(12, 0);
	}
	if (Function_9(2, 0))
	{
		Function_244(12, 1);
	}
	if (Function_9(3, 0))
	{
		Function_244(12, 2);
	}
	if (Function_117(7))
	{
		Function_244(12, 3);
	}
	if (Function_117(10))
	{
		Function_244(12, 4);
	}
	if (Function_117(18))
	{
		Function_244(12, 5);
	}
	if (Function_117(14))
	{
		Function_244(12, 6);
	}
	if (Function_117(1))
	{
		Function_244(12, 7);
	}
	if (Function_117(21))
	{
		Function_244(12, 8);
	}
	if (Function_117(27))
	{
		Function_244(12, 9);
	}
	if (Function_117(23))
	{
		Function_244(12, 10);
	}
	if (Function_117(5))
	{
		Function_244(12, 11);
	}
	if (Function_117(37))
	{
		Function_244(12, 12);
	}
	if (Function_243(Function_237(0)) >= 0)
	{
		Function_244(12, 13);
	}
	if (Function_243(Function_237(4)) >= 0)
	{
		Function_244(12, 14);
	}
	if (Function_243(Function_237(1)) >= 0)
	{
		Function_244(12, 15);
	}
	if (Function_243(Function_237(3)) >= 0)
	{
		Function_244(12, 16);
	}
	if (Function_243(Function_237(2)) >= 0)
	{
		Function_244(12, 17);
	}
	iVar0 = Function_247(1);
	switch (iVar0)
	{
		case 0x0000000A:
			Function_244(12, 22);
		
		case 0x00000005:
			Function_244(12, 21);
		
		case 0x00000004:
			Function_244(12, 20);
		
		case 0x00000003:
			Function_244(12, 19);
		
		case 0x00000002:
			Function_244(12, 18);
			break;
	}
	iVar0 = Function_247(0);
	switch (iVar0)
	{
		case 0x0000000A:
			Function_244(12, 27);
		
		case 0x00000005:
			Function_244(12, 26);
		
		case 0x00000004:
			Function_244(12, 25);
		
		case 0x00000003:
			Function_244(12, 24);
		
		case 0x00000002:
			Function_244(12, 23);
			break;
	}
	iVar0 = Function_247(3);
	switch (iVar0)
	{
		case 0x0000000A:
			Function_244(13, 4);
		
		case 0x00000005:
			Function_244(13, 3);
		
		case 0x00000004:
			Function_244(13, 2);
		
		case 0x00000003:
			Function_244(13, 1);
		
		case 0x00000002:
			Function_244(13, 0);
			break;
	}
	if (Function_242(2, 6, 0) == 0.0f)
	{
		Function_244(13, 5);
	}
	if (Function_242(2, 8, 0) == 0.0f)
	{
		Function_244(13, 6);
	}
	if (Function_242(2, 7, 0) == 0.0f)
	{
		Function_244(13, 7);
	}
	if (Function_242(2, 5, 0) == 0.0f)
	{
		Function_244(13, 8);
	}
	if (Function_247(2) == 10)
	{
		Function_244(13, 9);
	}
	if (Function_207(18, 1))
	{
		Function_244(13, 10);
	}
	if (Function_207(18, 2))
	{
		Function_244(13, 11);
	}
	if (Function_207(18, 4))
	{
		Function_244(13, 12);
	}
	if (Function_207(18, 8))
	{
		Function_244(13, 13);
	}
	if (Function_207(18, 16))
	{
		Function_244(13, 14);
	}
	iVar1 = 4;
	iVar2 = Function_243(Function_241(Global_30679[1]));
	iVar3 = Function_243(Function_241(Global_30707[1]));
	if (iVar2 >= 9)
	{
		iVar2 = 9;
	}
	else if (iVar2 <= 0)
	{
		iVar2 = 0;
	}
	if (iVar3 >= 6)
	{
		iVar3 = 6;
	}
	else if (iVar3 <= 0)
	{
		iVar3 = 0;
	}
	iVar4 = 0;
	while (iVar4 <= iVar2)
	{
		Function_244(14, (iVar1 + iVar4));
		iVar4++;
	}
	iVar1 = 13;
	iVar4 = 0;
	while (iVar4 <= iVar3)
	{
		Function_244(14, (iVar1 + iVar4));
		iVar4++;
	}
	return;
}

int Function_241(bool bParam0) //Position: 0xB359 / 45913
{
	if (Function_150(bParam0))
	{
		return Function_80(bParam0, 0, 2);
	}
	return 4294967295;
}

float Function_242(bool bParam0, bool bParam1, bool bParam2) //Position: 0xB373 / 45939
{
	char* cVar0[16];
	bool bVar4;
	
	if (bParam2)
	{
		if (Function_78() || Global_34165.f_44)
		{
			return (*&Global_49399[bParam022] + 36)[bParam1];
		}
		return (*&Global_49310[bParam022] + 36)[bParam1];
	}
	strcpy(&cVar0, INT_TO_STRING(bParam0), 16);
	stradd(&cVar0, "_FLOATSLOT", 16);
	stradd(&cVar0, INT_TO_STRING(bParam1), 16);
	bVar4 = Function_3();
	if (IS_LAYOUTREF_VALID(bVar4))
	{
		if (DECOR_CHECK_EXIST(bVar4, &cVar0))
		{
			return DECOR_GET_FLOAT(bVar4, &cVar0);
		}
		return -1.0f;
	}
	LOG_ERROR("AM_RETRIEVE_FLOAT: failed to retrieve float value from slot");
	return -1.0f;
}

int Function_243(int iParam0) //Position: 0xB435 / 46133
{
	if (!Function_10(iParam0))
	{
		return 4294967295;
	}
	return Global_13172[iParam011].f_12;
}

void Function_244(int iParam0, bool bParam1) //Position: 0xB44F / 46159
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

int Function_245(int iParam0, bool bParam1, bool bParam2) //Position: 0xB4B6 / 46262
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
		Function_52(iParam0, bParam1, 0);
	}
	Global_34581[iParam0] = bParam1;
	Function_51(iParam0);
	if (bParam2)
	{
		Function_39(iParam0, 1, bParam1, 0, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_246(int iParam0) //Position: 0xB722 / 46882
{
	if (Function_247(3) > 10)
	{
	}
	if (Function_247(0) > 10)
	{
	}
	if (Function_247(2) > 10)
	{
	}
	if (Function_247(1) > 10)
	{
	}
	return;
}

int Function_247(int iParam0) //Position: 0xB74C / 46924
{
	if (Function_78() || Global_34165.f_44)
	{
		return StackVal;
	}
	return StackVal;
}

var Function_248() //Position: 0xB774 / 46964
{
	int iVar0;
	
	if (Function_198(18) || Function_198(23))
	{
		iVar0++;
	}
	return iVar0;
}

void Function_249() //Position: 0xB790 / 46992
{
	if (!Global_3365)
	{
		Function_255();
	}
	Function_253();
	Function_250();
	return;
}

void Function_250() //Position: 0xB7A6 / 47014
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_26055)
	{
		if (Global_26055[iVar0])
		{
			Function_251(iVar0);
		}
		iVar0++;
	}
	return;
}

void Function_251(int iParam0) //Position: 0xB7CF / 47055
{
	bool bVar0;
	struct<4> Var1;
	
	bVar0 = true;
	switch (iParam0)
	{
		case 0x00000001:
		case 0x00000004:
			bVar0 = false;
			break;
		
		case 0x00000009:
			if (!Global_26055[iParam0])
			{
				Function_252(992, 0, 1);
				Function_212(52, 1, 0);
			}
			break;
		
		case 0x0000000A:
			SET_WEAPON_GOLD(Global_34573, 4, 1);
			SET_WEAPON_GOLD(Global_34573, 8, 1);
			break;
		
		case 0x0000000D:
		case 0x0000000E:
		case 0x0000000F:
		case 0x00000010:
		case 0x00000011:
		case 0x00000012:
		case 0x00000013:
		case 0x00000014:
		case 0x00000015:
		case 0x00000016:
		case 0x00000017:
		case 0x00000018:
		case 0x00000019:
		case 0x0000001A:
		case 0x0000001B:
		case 0x0000001C:
		case 0x0000001D:
		case 0x0000001E:
		case 0x00000023:
		case 0x00000028:
		case 0x00000002:
		case 0x00000003:
		case 0x00000005:
		case 0x00000006:
		case 0x00000007:
		case 0x00000008:
		case 0x00000000:
		case 0x0000000B:
		case 0x0000000C:
		case 0x00000029:
		case 0x0000002A:
		case 0x0000002B:
		case 0x0000002C:
		case 0x0000002D:
			bVar0 = false;
			break;
		
		default:
			bVar0 = false;
			LOG_ERROR("Unimplemented Net Unlock - please do!");
			break;
	}
	if (!Global_26055[iParam0])
	{
		if (bVar0)
		{
			strcpy(&Var1, "unlock_help_", 16);
			straddi(&Var1, iParam0, 16);
			Function_5(&Var1, 0x41200000, 1, 0, 2, 1, 0);
		}
	}
	Global_26055[iParam0] = 1;
	return;
}

void Function_252(var uParam0, bool bParam1, bool bParam2) //Position: 0xB972 / 47474
{
	Global_13038 = uParam0;
	if (bParam1)
	{
		Function_16(&Global_12976 + 36 + 20, 128);
	}
	if (bParam2)
	{
		Function_16(&Global_12976 + 36 + 20, 64);
	}
	return;
}

void Function_253() //Position: 0xB99F / 47519
{
	int iVar0;
	
	DISABLE_WORLD_SECTOR("dlc02x");
	DISABLE_WORLD_SECTOR("dlc05x");
	DISABLE_CHILD_SECTOR("tes_wall02x");
	DISABLE_CHILD_SECTOR("mp_tes_coop01ax");
	DISABLE_CHILD_SECTOR("mp_tes_coop01bx");
	DISABLE_CHILD_SECTOR("mp_tes_coop01cx");
	DISABLE_CHILD_SECTOR("mp_tes_coop02x");
	DISABLE_CHILD_SECTOR("mp_tes_base01x");
	DISABLE_CHILD_SECTOR("mp_gap_mineLid01x");
	DISABLE_CHILD_SECTOR("mp_fom_coop01x");
	DISABLE_CHILD_SECTOR("mp_fom_burntDebris01x");
	DISABLE_CHILD_SECTOR("mp_wld_base03x");
	DISABLE_CHILD_SECTOR("mp_nos_coop01ax");
	DISABLE_CHILD_SECTOR("mp_nos_coop01bx");
	DISABLE_CHILD_SECTOR("mp_nos_coop01cx");
	DISABLE_CHILD_SECTOR("mp_nos_coop01dx");
	DISABLE_CHILD_SECTOR("mp_nos_coop01ex");
	DISABLE_CHILD_SECTOR("mp_scr_coop01x");
	DISABLE_CHILD_SECTOR("arm_flags01x");
	DISABLE_CHILD_SECTOR("chu_flags01x");
	DISABLE_CHILD_SECTOR("esc_flags01x");
	DISABLE_CHILD_SECTOR("han_flags01x");
	DISABLE_CHILD_SECTOR("hen_flags01x");
	DISABLE_CHILD_SECTOR("mtp_flags01x");
	DISABLE_CHILD_SECTOR("mp_arm_base01x");
	DISABLE_CHILD_SECTOR("mp_cas_base01x");
	DISABLE_CHILD_SECTOR("mp_pik_base01x");
	DISABLE_CHILD_SECTOR("mp_tes_base01x");
	DISABLE_CHILD_SECTOR("mp_tum_base01x");
	DISABLE_CHILD_SECTOR("mp_arm_ffa01x");
	DISABLE_CHILD_SECTOR("mp_chu_ffa01x");
	DISABLE_CHILD_SECTOR("mp_esc_ffa01x");
	DISABLE_CHILD_SECTOR("mp_hen_ffa01x");
	DISABLE_CHILD_SECTOR("mp_pik_ffa01x");
	DISABLE_CHILD_SECTOR("mp_upr_ffa01x");
	DISABLE_CHILD_SECTOR("mp_chu_platforms01x");
	DISABLE_CHILD_SECTOR("mp_mtp_base01x");
	DISABLE_CHILD_SECTOR("mp_fom_base01x");
	DISABLE_CHILD_SECTOR("mp_fom_ffa01x");
	DISABLE_CHILD_SECTOR("mp_wld_base01x");
	DISABLE_CHILD_SECTOR("mp_chu_base01x");
	ENABLE_CHILD_SECTOR("thi_gates01x");
	ENABLE_CHILD_SECTOR("thi_gates02x");
	ENABLE_CHILD_SECTOR("sep_graveCoverSingle01x");
	DISABLE_CHILD_SECTOR("sp_grave03x");
	DISABLE_CHILD_SECTOR("sp_outlaw03x");
	DISABLE_CHILD_SECTOR("sp_marshal02x");
	DISABLE_CHILD_SECTOR("sp_marshal03x");
	DISABLE_CHILD_SECTOR("sp_marshal04ax");
	DISABLE_CHILD_SECTOR("sp_marshal04bx");
	DISABLE_CHILD_SECTOR("sep_graveEva01x");
	DISABLE_CHILD_SECTOR("hen_barn03props01x");
	DISABLE_CHILD_SECTOR("hen_beamsEntity01x");
	DISABLE_CHILD_SECTOR("ram_missionProps01x");
	DISABLE_CHILD_SECTOR("gap_caveBlockades01x");
	DISABLE_CHILD_SECTOR("fom_corralBreakProps01x");
	DISABLE_CHILD_SECTOR("blk_archeologist01Props01x");
	if (!Function_254("noZombieFireArt"))
	{
		ENABLE_CHILD_SECTOR("dlc_agv_zombieDebris01x");
		ENABLE_CHILD_SECTOR("dlc_agv_zombieFire01x");
		ENABLE_CHILD_SECTOR("dlc_arm_zombieDebris01x");
		ENABLE_CHILD_SECTOR("dlc_arm_zombieFire01x");
		ENABLE_CHILD_SECTOR("dlc_blk_zombieDebris01x");
		ENABLE_CHILD_SECTOR("dlc_blk_zombieFire01x");
		ENABLE_CHILD_SECTOR("dlc_blk_zombieGraffiti01x");
		ENABLE_CHILD_SECTOR("dlc_but_zombieDebris01x");
		ENABLE_CHILD_SECTOR("dlc_but_zombieFire01x");
		ENABLE_CHILD_SECTOR("dlc_cas_zombieDebris01x");
		ENABLE_CHILD_SECTOR("dlc_cas_zombieFire01x");
		ENABLE_CHILD_SECTOR("dlc_chu_zombieDebris01x");
		ENABLE_CHILD_SECTOR("dlc_chu_zombieFire01x");
		ENABLE_CHILD_SECTOR("dlc_cri_zombieDebris01x");
		ENABLE_CHILD_SECTOR("dlc_cri_zombieFire01x");
		ENABLE_CHILD_SECTOR("dlc_dix_zombieDebris01x");
		ENABLE_CHILD_SECTOR("dlc_dix_zombieFire01x");
		ENABLE_CHILD_SECTOR("dlc_elm_zombieDebris01x");
		ENABLE_CHILD_SECTOR("dlc_elm_zombieFire01x");
		ENABLE_CHILD_SECTOR("dlc_esc_zombieDebris01x");
		ENABLE_CHILD_SECTOR("dlc_esc_zombieFire01x");
		ENABLE_CHILD_SECTOR("dlc_frb_zombieDebris01x");
		ENABLE_CHILD_SECTOR("dlc_frb_zombieFire01x");
		ENABLE_CHILD_SECTOR("dlc_gap_zombieDebris01x");
		ENABLE_CHILD_SECTOR("dlc_gap_zombieFire01x");
		ENABLE_CHILD_SECTOR("dlc_hen_zombieDebris01x");
		ENABLE_CHILD_SECTOR("dlc_hen_zombieFire01x");
		ENABLE_CHILD_SECTOR("dlc_lsh_zombieDebris01x");
		ENABLE_CHILD_SECTOR("dlc_lsh_zombieFire01x");
		ENABLE_CHILD_SECTOR("dlc_mtp_zombieDebris01x");
		ENABLE_CHILD_SECTOR("dlc_mtp_zombieFire01x");
		ENABLE_CHILD_SECTOR("dlc_nos_zombieDebris01x");
		ENABLE_CHILD_SECTOR("dlc_nos_zombieFire01x");
		ENABLE_CHILD_SECTOR("dlc_pik_zombieDebris01x");
		ENABLE_CHILD_SECTOR("dlc_pik_zombieFire01x");
		ENABLE_CHILD_SECTOR("dlc_pln_zombieDebris01x");
		ENABLE_CHILD_SECTOR("dlc_pln_zombieFire01x");
		ENABLE_CHILD_SECTOR("dlc_ram_zombieDebris01x");
		ENABLE_CHILD_SECTOR("dlc_ram_zombieFire01x");
		ENABLE_CHILD_SECTOR("dlc_rat_zombieDebris01x");
		ENABLE_CHILD_SECTOR("dlc_rat_zombieFire01x");
		ENABLE_CHILD_SECTOR("dlc_rwf_zombieDebris01x");
		ENABLE_CHILD_SECTOR("dlc_rwf_zombieFire01x");
		ENABLE_CHILD_SECTOR("dlc_sol_zombieDebris01x");
		ENABLE_CHILD_SECTOR("dlc_sol_zombieFire01x");
		ENABLE_CHILD_SECTOR("dlc_tes_zombieDebris01x");
		ENABLE_CHILD_SECTOR("dlc_tes_zombieFire01x");
		ENABLE_CHILD_SECTOR("dlc_thi_zombieDebris01x");
		ENABLE_CHILD_SECTOR("dlc_thi_zombieFire01x");
		ENABLE_CHILD_SECTOR("dlc_tor_zombieDebris01x");
		ENABLE_CHILD_SECTOR("dlc_tor_zombieFire01x");
		ENABLE_CHILD_SECTOR("dlc_twr_zombieDebris01x");
		ENABLE_CHILD_SECTOR("dlc_twr_zombieFire01x");
		ENABLE_CHILD_SECTOR("dlc_upr_zombieDebris01x");
		ENABLE_CHILD_SECTOR("dlc_upr_zombieFire01x");
		ENABLE_CHILD_SECTOR("dlc_ven_zombieDebris01x");
		ENABLE_CHILD_SECTOR("dlc_ven_zombieFire01x");
		ENABLE_CHILD_SECTOR("dlc_war_zombieDebris01x");
		ENABLE_CHILD_SECTOR("dlc_war_zombieFire01x");
	}
	else
	{
		DISABLE_CHILD_SECTOR("dlc_agv_zombieDebris01x");
		DISABLE_CHILD_SECTOR("dlc_agv_zombieFire01x");
		DISABLE_CHILD_SECTOR("dlc_arm_zombieDebris01x");
		DISABLE_CHILD_SECTOR("dlc_arm_zombieFire01x");
		DISABLE_CHILD_SECTOR("dlc_blk_zombieDebris01x");
		DISABLE_CHILD_SECTOR("dlc_blk_zombieFire01x");
		DISABLE_CHILD_SECTOR("dlc_blk_zombieGraffiti01x");
		DISABLE_CHILD_SECTOR("dlc_but_zombieDebris01x");
		DISABLE_CHILD_SECTOR("dlc_but_zombieFire01x");
		DISABLE_CHILD_SECTOR("dlc_cas_zombieDebris01x");
		DISABLE_CHILD_SECTOR("dlc_cas_zombieFire01x");
		DISABLE_CHILD_SECTOR("dlc_chu_zombieDebris01x");
		DISABLE_CHILD_SECTOR("dlc_chu_zombieFire01x");
		DISABLE_CHILD_SECTOR("dlc_cri_zombieDebris01x");
		DISABLE_CHILD_SECTOR("dlc_cri_zombieFire01x");
		DISABLE_CHILD_SECTOR("dlc_dix_zombieDebris01x");
		DISABLE_CHILD_SECTOR("dlc_dix_zombieFire01x");
		DISABLE_CHILD_SECTOR("dlc_elm_zombieDebris01x");
		DISABLE_CHILD_SECTOR("dlc_elm_zombieFire01x");
		DISABLE_CHILD_SECTOR("dlc_esc_zombieDebris01x");
		DISABLE_CHILD_SECTOR("dlc_esc_zombieFire01x");
		DISABLE_CHILD_SECTOR("dlc_frb_zombieDebris01x");
		DISABLE_CHILD_SECTOR("dlc_frb_zombieFire01x");
		DISABLE_CHILD_SECTOR("dlc_gap_zombieDebris01x");
		DISABLE_CHILD_SECTOR("dlc_gap_zombieFire01x");
		DISABLE_CHILD_SECTOR("dlc_hen_zombieDebris01x");
		DISABLE_CHILD_SECTOR("dlc_hen_zombieFire01x");
		DISABLE_CHILD_SECTOR("dlc_lsh_zombieDebris01x");
		DISABLE_CHILD_SECTOR("dlc_lsh_zombieFire01x");
		DISABLE_CHILD_SECTOR("dlc_mtp_zombieDebris01x");
		DISABLE_CHILD_SECTOR("dlc_mtp_zombieFire01x");
		DISABLE_CHILD_SECTOR("dlc_nos_zombieDebris01x");
		DISABLE_CHILD_SECTOR("dlc_nos_zombieFire01x");
		DISABLE_CHILD_SECTOR("dlc_pik_zombieDebris01x");
		DISABLE_CHILD_SECTOR("dlc_pik_zombieFire01x");
		DISABLE_CHILD_SECTOR("dlc_pln_zombieDebris01x");
		DISABLE_CHILD_SECTOR("dlc_pln_zombieFire01x");
		DISABLE_CHILD_SECTOR("dlc_ram_zombieDebris01x");
		DISABLE_CHILD_SECTOR("dlc_ram_zombieFire01x");
		DISABLE_CHILD_SECTOR("dlc_rat_zombieDebris01x");
		DISABLE_CHILD_SECTOR("dlc_rat_zombieFire01x");
		DISABLE_CHILD_SECTOR("dlc_rwf_zombieDebris01x");
		DISABLE_CHILD_SECTOR("dlc_rwf_zombieFire01x");
		DISABLE_CHILD_SECTOR("dlc_sol_zombieDebris01x");
		DISABLE_CHILD_SECTOR("dlc_sol_zombieFire01x");
		DISABLE_CHILD_SECTOR("dlc_tes_zombieDebris01x");
		DISABLE_CHILD_SECTOR("dlc_tes_zombieFire01x");
		DISABLE_CHILD_SECTOR("dlc_thi_zombieDebris01x");
		DISABLE_CHILD_SECTOR("dlc_thi_zombieFire01x");
		DISABLE_CHILD_SECTOR("dlc_tor_zombieDebris01x");
		DISABLE_CHILD_SECTOR("dlc_tor_zombieFire01x");
		DISABLE_CHILD_SECTOR("dlc_twr_zombieDebris01x");
		DISABLE_CHILD_SECTOR("dlc_twr_zombieFire01x");
		DISABLE_CHILD_SECTOR("dlc_upr_zombieDebris01x");
		DISABLE_CHILD_SECTOR("dlc_upr_zombieFire01x");
		DISABLE_CHILD_SECTOR("dlc_ven_zombieDebris01x");
		DISABLE_CHILD_SECTOR("dlc_ven_zombieFire01x");
		DISABLE_CHILD_SECTOR("dlc_war_zombieDebris01x");
		DISABLE_CHILD_SECTOR("dlc_war_zombieFire01x");
	}
	ENABLE_CHILD_SECTOR("dlc_blk_flagsTorn01x");
	ENABLE_CHILD_SECTOR("dlc_hen_flagsTorn01x");
	ENABLE_CHILD_SECTOR("dlc_arm_generalStoreProps01x");
	DISABLE_CHILD_SECTOR("arm_generalStoreProps01x");
	ENABLE_CHILD_SECTOR("dlc_arm_saloon01props01x");
	DISABLE_CHILD_SECTOR("arm_saloon01props01x");
	DISABLE_CHILD_SECTOR("dlc_beh_catacombs01x");
	DISABLE_CHILD_SECTOR("dlc_beh_catacombs01props01x");
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve361rebuiltCurve1", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve427", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve366rebuiltCurve1", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve404", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve394", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve104", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve454", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdTRAIL_cas_ram_pathdetachedCurve2", 5)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdTRAIL_cas_ram_pathdetachedCurve4detachedCurve2", 5)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve159rebuiltCurve1", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_but_cas_path", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_but_cas_pathdetachedCurve4detachedCurve2", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve80", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve154detachedCurve2", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve155", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve156", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve156detachedCurve2", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve157", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve158", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve159rebuiltCurve1", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve507", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve154detachedCurve2", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve214", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve219", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve220", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve221", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve163", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve164", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve165", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve166", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve168", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve333rebuiltCurve1", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve334rebuiltCurve1", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve329rebuiltCurve1detachedCurve2", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve330rebuiltCurve1", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve331rebuiltCurve1", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve332rebuiltCurve1", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve206rebuiltCurve1", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve207", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve208", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve209rebuiltCurve1", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve210", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve213", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve460", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve337rebuiltCurve1", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve129", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve128rebuiltCurve1", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve324rebuiltCurve1rebuiltCurve1", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve377rebuiltCurve1", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve325rebuiltCurve1rebuiltCurve1", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve325rebuiltCurve1detachedCurve2rebuiltCurve1", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve326rebuiltCurve1rebuiltCurve1", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve129", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve128rebuiltCurve1", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve127", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve126rebuiltCurve1", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve125", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve124", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve123", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve122", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve121", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve120", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve119", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve118rebuiltCurve1", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve117", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve116", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve112", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve130", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve132", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve131", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve121detachedCurve2rebuiltCurve1", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve217rebuiltCurve1rebuiltCurve1detachedCurve2", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve217rebuiltCurve1rebuiltCurve1rebuiltCurve1", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve218rebuiltCurve1detachedCurve2", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_but_mac_path", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_hen_thi_path", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_butterBridge_path", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_curve617", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_arm_hen_pathdetachedCurve01detachedCurve2", 18)), 30);
	SET_CURVE_WEIGHT(GET_CURVE_FROM_OBJECT(GET_CURVE_BY_NAME("rsdGPSTRAIL_arm_hen_pathdetachedCurve01", 18)), 30);
	iVar0 = 0;
	while (iVar0 <= Global_26003)
	{
		Global_26003[iVar0] = !Global_3365;
		switch (iVar0)
		{
			case 0x00000000:
				if (Global_3365)
				{
					ENABLE_WORLD_SECTOR("ramitaBayaBefore");
					DISABLE_WORLD_SECTOR("ramitaBayaAfter");
					ENABLE_CURVE("rsdROAD_frb_road", false);
					ENABLE_CURVE("rsdROAD_fom_frb_road", false);
					ENABLE_CURVE("rsdGPSTRAIL_curve221", false);
				}
				else
				{
					ENABLE_WORLD_SECTOR("ramitaBayaAfter");
					DISABLE_WORLD_SECTOR("ramitaBayaBefore");
					ENABLE_CURVE("rsdROAD_frb_road", true);
					ENABLE_CURVE("rsdROAD_fom_frb_road", true);
					ENABLE_CURVE("rsdGPSTRAIL_curve221", true);
				}
				break;
			
			case 0x00000001:
			case 0x00000002:
				break;
			
			case 0x00000003:
				if (Global_3365)
				{
					ENABLE_WORLD_SECTOR("butterBridgeA");
					DISABLE_WORLD_SECTOR("butterBridgeB");
					DISABLE_WORLD_SECTOR("butterBridgeC");
					DISABLE_WORLD_SECTOR("butterBridgeD");
					ENABLE_CURVE("rsdGPSTRAIL_butterBridge_path", false);
				}
				else
				{
					ENABLE_WORLD_SECTOR("butterBridgeB");
					DISABLE_WORLD_SECTOR("butterBridgeA");
					DISABLE_WORLD_SECTOR("butterBridgeC");
					DISABLE_WORLD_SECTOR("butterBridgeD");
					ENABLE_CURVE("rsdGPSTRAIL_butterBridge_path", true);
				}
				break;
			
			case 0x00000004:
				if (Global_3365)
				{
					ENABLE_WORLD_SECTOR("tannersSpanBefore");
					DISABLE_WORLD_SECTOR("tannersSpanAfter");
				}
				else
				{
					ENABLE_WORLD_SECTOR("tannersSpanAfter");
					DISABLE_WORLD_SECTOR("tannersSpanBefore");
				}
				break;
			
			case 0x00000005:
				if (Global_3365)
				{
					ENABLE_WORLD_SECTOR("dixonCrossingBefore");
					DISABLE_WORLD_SECTOR("dixonCrossingAfter");
					ENABLE_CURVE("rsdROAD_thi_blk_road", false);
					ENABLE_CURVE("rsdROAD_thi_blk_roaddetachedCurve2", false);
					ENABLE_CURVE("rsdGPSTRAIL_curve124", false);
					ENABLE_CURVE("rsdGPSTRAIL_curve132", false);
				}
				else
				{
					ENABLE_WORLD_SECTOR("dixonCrossingAfter");
					DISABLE_WORLD_SECTOR("dixonCrossingBefore");
					ENABLE_CURVE("rsdROAD_thi_blk_road", true);
					ENABLE_CURVE("rsdROAD_thi_blk_roaddetachedCurve2", true);
					ENABLE_CURVE("rsdGPSTRAIL_curve124", true);
					ENABLE_CURVE("rsdGPSTRAIL_curve132", true);
				}
				break;
			
			case 0x00000006:
				break;
			
			case 0x00000007:
				ENABLE_CHILD_SECTOR("hen_barn01x");
				ENABLE_CHILD_SECTOR("hen_barn02props01x");
				DISABLE_CHILD_SECTOR("hen_barn02x");
				DISABLE_CHILD_SECTOR("hen_barn01props01x");
				break;
			
			case 0x00000008:
				ENABLE_WORLD_SECTOR("campoMiradaAfter");
				DISABLE_WORLD_SECTOR("campoMiradaBefore");
				break;
			
			case 0x00000009:
				if (Global_3365)
				{
					ENABLE_WORLD_SECTOR("fronteraBridgeBefore");
					DISABLE_WORLD_SECTOR("fronteraBridgeAfter");
				}
				else
				{
					ENABLE_WORLD_SECTOR("fronteraBridgeAfter");
					DISABLE_WORLD_SECTOR("fronteraBridgeBefore");
				}
				break;
			
			case 0x0000000A:
				ENABLE_CHILD_SECTOR("fod_gates01x");
				DISABLE_CHILD_SECTOR("fod_gates02x");
				DISABLE_CHILD_SECTOR("fod_gates02Doors01x");
				break;
			
			case 0x0000000B:
				ENABLE_CHILD_SECTOR("coc_fence01bx");
				ENABLE_CHILD_SECTOR("coc_fence03bx");
				ENABLE_CHILD_SECTOR("dlc_coc_gates02x");
				DISABLE_CHILD_SECTOR("coc_fence01x");
				DISABLE_CHILD_SECTOR("coc_fence03x");
				DISABLE_CHILD_SECTOR("coc_gates01x");
				DISABLE_CHILD_SECTOR("coc_gates02x");
				break;
			
			case 0x0000000C:
				if (Global_3365)
				{
					ENABLE_WORLD_SECTOR("masonBridgeBefore");
					DISABLE_WORLD_SECTOR("masonBridgeAfter");
				}
				else
				{
					ENABLE_WORLD_SECTOR("masonBridgeAfter");
					DISABLE_WORLD_SECTOR("masonBridgeBefore");
				}
				break;
			
			case 0x0000000D:
				if (Global_3365)
				{
					ENABLE_CHILD_SECTOR("lmf_troughBefore01x");
					DISABLE_CHILD_SECTOR("lmf_troughAfter01x");
				}
				else
				{
					ENABLE_CHILD_SECTOR("lmf_troughAfter01x");
					DISABLE_CHILD_SECTOR("lmf_troughBefore01x");
				}
				break;
			
			case 0x0000000E:
				DISABLE_WORLD_SECTOR("morningStar");
				DISABLE_CHILD_SECTOR("blk_barge01Props01x");
				DISABLE_CHILD_SECTOR("blk_barge01x");
				ENABLE_CHILD_SECTOR("blk_theatre_int_Props01x");
				ENABLE_CHILD_SECTOR("blk_theatre_int_01x");
				ENABLE_CHILD_SECTOR("dlc_blk_bank01_int_Props02x");
				DISABLE_CHILD_SECTOR("blk_bank01_int_Props02x");
				ENABLE_CHILD_SECTOR("blk_bank_int_02x");
				DISABLE_CHILD_SECTOR("blk_bank_int_shade_02x");
				DISABLE_CHILD_SECTOR("blk_cityHall01_int_Props01x");
				DISABLE_CHILD_SECTOR("blk_cityHall_int_01x");
				ENABLE_CHILD_SECTOR("blk_policeStation01_int_props02x");
				ENABLE_CHILD_SECTOR("blk_policeStation_int_02x");
				ENABLE_CHILD_SECTOR("blk_policeStation01_int_props01x");
				ENABLE_CHILD_SECTOR("blk_policeStation_int_01x");
				DISABLE_CHILD_SECTOR("blk_policeStation_int_shades01x");
				ENABLE_CHILD_SECTOR("blk_blacksmith_int_Props01x");
				ENABLE_CHILD_SECTOR("blk_blacksmith_int_01x");
				ENABLE_CHILD_SECTOR("blk_church_int_Props01x");
				ENABLE_CHILD_SECTOR("blk_church_int_01x");
				ENABLE_CHILD_SECTOR("blk_doctorsOffice_int_Props01x");
				ENABLE_CHILD_SECTOR("blk_doctorsOffice_int_01x");
				ENABLE_CHILD_SECTOR("blk_freightstation01_int_Props01x");
				ENABLE_CHILD_SECTOR("blk_freightstation_int_01x");
				ENABLE_CHILD_SECTOR("blk_generalStore_int_Props01x");
				ENABLE_CHILD_SECTOR("blk_generalStore_int_Props02x");
				ENABLE_CHILD_SECTOR("blk_generalStore_int_01x");
				ENABLE_CHILD_SECTOR("blk_tailor01_int_Props01x");
				ENABLE_CHILD_SECTOR("blk_tailor_int_01x");
				ENABLE_CHILD_SECTOR("blk_trainstation_int_Props01x");
				ENABLE_CHILD_SECTOR("blk_trainstation_int_01x");
				ENABLE_CHILD_SECTOR("blk_gunshop_int_Props01x");
				ENABLE_CHILD_SECTOR("blk_gunshop_int_01x");
				DISABLE_CHILD_SECTOR("blk_theatre_int_shade_01x");
				DISABLE_CHILD_SECTOR("blk_generalStore_int_shade_01x");
				DISABLE_CHILD_SECTOR("blk_tailor_int_shade_01x");
				DISABLE_CHILD_SECTOR("blk_doctorsOffice_int_shade_01x");
				DISABLE_CHILD_SECTOR("blk_forgeMill_int_shade_01x");
				DISABLE_CHILD_SECTOR("blk_sawMill_int_shade_01x");
				DISABLE_CHILD_SECTOR("blk_freightstation_int_shade_01x");
				DISABLE_CHILD_SECTOR("blk_blacksmith_int_shade_01x");
				ENABLE_CHILD_SECTOR("blk_cityHall_int_shade_01x");
				DISABLE_CHILD_SECTOR("blk_bank_int_shade_01x");
				DISABLE_CHILD_SECTOR("mor_morningStar_int_shade_01x");
				DISABLE_CHILD_SECTOR("blk_gunshop_int_shade_01x");
				ENABLE_CHILD_SECTOR("blk_saloon_int_Props01x");
				ENABLE_CHILD_SECTOR("blk_saloon_int_01x");
				ENABLE_CHILD_SECTOR("dlc_blk_hotel01Props01x");
				DISABLE_CHILD_SECTOR("blk_hotel01Props01x");
				ENABLE_CHILD_SECTOR("dlc_blk_tailor01_int_Props01x");
				DISABLE_CHILD_SECTOR("blk_tailor01_int_Props01x");
				ENABLE_CHILD_SECTOR("blk_hotel01_int_Props01x");
				ENABLE_CHILD_SECTOR("blk_hotel_int_01x");
				DISABLE_CHILD_SECTOR("blk_hotel_int_shade_01x");
				ENABLE_CHILD_SECTOR("blk_trainstation_int_Props01x");
				ENABLE_CHILD_SECTOR("blk_trainstation_int_01x");
				DISABLE_CHILD_SECTOR("mor_morningStar01_int_Props01x");
				DISABLE_CHILD_SECTOR("mor_morningStar_int_01x");
				DISABLE_CHILD_SECTOR("mor_morningStar_int_shade_01x");
				break;
			
			case 0x0000000F:
				ENABLE_CHILD_SECTOR("rwf_barn01xprops01x");
				ENABLE_CHILD_SECTOR("rwf_livingRoom01props01x");
				DISABLE_CHILD_SECTOR("rwf_barn01xprops02x");
				DISABLE_CHILD_SECTOR("rwf_livingRoom01props02x");
				break;
			
			case 0x00000010:
				ENABLE_CHILD_SECTOR("beh_silo01x");
				DISABLE_CHILD_SECTOR("beh_silo02x");
				break;
			
			case 0x00000011:
				ENABLE_CHILD_SECTOR("beh_house01x");
				ENABLE_CHILD_SECTOR("beh_house01props01x");
				DISABLE_CHILD_SECTOR("beh_house02x");
				DISABLE_CHILD_SECTOR("beh_house02props01x");
				break;
			
			case 0x00000012:
				ENABLE_CHILD_SECTOR("tor_militaryCamp02x");
				DISABLE_CHILD_SECTOR("tor_militaryCamp01x");
				DISABLE_CHILD_SECTOR("sp_mexArmy03x");
				break;
			
			case 0x00000013:
				ENABLE_CHILD_SECTOR("esc_villaWall04x");
				DISABLE_CHILD_SECTOR("esc_villaWall05x");
				DISABLE_CHILD_SECTOR("sp_rebel05x");
				ENABLE_CHILD_SECTOR("dlc_esc_bullRing02x");
				ENABLE_CHILD_SECTOR("dlc_esc_bullRing02Props01x");
				ENABLE_CHILD_SECTOR("dlc_esc_zombieCave02x");
				DISABLE_CHILD_SECTOR("esc_bullRing01x");
				DISABLE_CHILD_SECTOR("esc_bullRing01props01x");
				DISABLE_CHILD_SECTOR("dlc_esc_zombieCave01x");
				DISABLE_CHILD_SECTOR("dlc_esc_zombieCave01Props01x");
				DISABLE_CHILD_SECTOR("dlc_esc_zombieCave01Props02x");
				DISABLE_CHILD_SECTOR("dlc_esc_zombieCave01Props03x");
				break;
			
			case 0x00000014:
				DISABLE_CHILD_SECTOR("icarus");
				break;
			
			case 0x00000015:
				DISABLE_CHILD_SECTOR("chu_gatlingBreakables01x");
				DISABLE_CHILD_SECTOR("lsh_gatlingBreakables01x");
				if (Global_3365)
				{
					DISABLE_CHILD_SECTOR("mp_lsh_ffa01x");
				}
				else
				{
					ENABLE_CHILD_SECTOR("mp_lsh_ffa01x");
				}
				break;
			
			case 0x00000016:
				DISABLE_CHILD_SECTOR("sp_anthro01x");
				break;
			
			case 0x00000017:
				if (Global_3365)
				{
					DISABLE_CHILD_SECTOR("beh_grave01x");
					DISABLE_CHILD_SECTOR("beh_grave02x");
					DISABLE_CHILD_SECTOR("beh_grave03x");
				}
				else
				{
					ENABLE_CHILD_SECTOR("beh_grave01x");
					DISABLE_CHILD_SECTOR("beh_grave02x");
					DISABLE_CHILD_SECTOR("beh_grave03x");
				}
				break;
			
			case 0x00000018:
				ENABLE_CURVE("rsdGPSTRAIL_elm_cas_path", !Global_3365);
				ENABLE_CURVE("rsdGPSTRAIL_curve495", !Global_3365);
				ENABLE_CURVE("rsdGPSTRAIL_elm_cas_pathdetachedCurve12", !Global_3365);
				ENABLE_CURVE("rsdGPSTRAIL_elm_cas_pathdetachedCurve13", !Global_3365);
				ENABLE_CURVE("rsdGPSTRAIL_elm_cas_loop1", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_cas_ram_pathdetachedCurve10", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_cas_ram_pathdetachedCurve8", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_cas_ram_pathdetachedCurve6", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_las_nos_pathdetachedCurve2", !Global_3365);
				ENABLE_CURVE("rsdROAD_las_esc_roaddetachedCurve10detachedCurve1", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_curve44", !Global_3365);
				ENABLE_CURVE("rsdROAD_las_esc_roaddetachedCurve18", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_cas_ram_pathdetachedCurve2", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_cas_ram_pathdetachedCurve4detachedCurve2", !Global_3365);
				ENABLE_CURVE("rsdROAD_las_roaddetachedCurve4", !Global_3365);
				ENABLE_CURVE("rsdROAD_las_roaddetachedCurve2", !Global_3365);
				ENABLE_CURVE("rsdROAD_curve69", !Global_3365);
				ENABLE_CURVE("rsdROAD_las_road", !Global_3365);
				ENABLE_CURVE("rsdROAD_frb_road", !Global_3365);
				ENABLE_CURVE("rsdGPSTRAIL_curve98", !Global_3365);
				ENABLE_CURVE("rsdGPSROAD_elm_cas_roaddetachedCurve4detachedCurve2", !Global_3365);
				ENABLE_CURVE("rsdGPSROAD_elm_cas_roaddetachedCurve4", !Global_3365);
				ENABLE_CURVE("rsdGPSTRAIL_elm_loop01_pathdetachedCurve2detachedCurve2", !Global_3365);
				ENABLE_CURVE("rsdGPSTRAIL_curve634", !Global_3365);
				ENABLE_CURVE("rsdGPSTRAIL_curve635", !Global_3365);
				ENABLE_CURVE("rsdGPSTRAIL_curve636", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_curve637", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_curve638", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_cas_loop04_pathdetachedCurve2", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_curve70", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_cas_loop04_path", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_cas_loop05_pathdetachedCurve4", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_cas_loop05_pathdetachedCurve2", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_cas_loop01_pathdetachedCurve2detachedCurve2", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_chu_loop01_pathdetachedCurve2detachedCurve2detachedCurve2detachedCurve2", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_chu_loop01_pathdetachedCurve2detachedCurve2detachedCurve2", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_chu_loop01_pathdetachedCurve2detachedCurve2", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_chu_loop01_pathdetachedCurve2", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_chu_loop01_pathdetachedCurve4", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_elm_cas_pathdetachedCurve10", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_elm_cas_pathdetachedCurve8", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_cas_loop03_path1", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_cas_loop03_path", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_elm_cas_pathdetachedCurve6", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_elm_cas_pathdetachedCurve4", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_elm_cas_pathdetachedCurve2", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_cas_loop02_path", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_cas_loop01_path1", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_cas_loop01_path", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_cas_loop03_path1detachedCurve4", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_cas_loop03_pathdetachedCurve4", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_cas_loop03_pathdetachedCurve2", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_cas_loop03_path1detachedCurve2", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_chu_loop01_path3detachedCurve2", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_chu_loop01_path3", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_cas_loop09_path", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_cas_loop06__path", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_cas_loop01_path1detachedCurve4", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_cas_loop01_pathdetachedCurve4", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_cas_loop01_path1detachedCurve2", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_cas_loop01_path1detachedCurve6", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_cas_loop07_pathdetachedCurve2detachedCurve2", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_cas_loop07_pathdetachedCurve2", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_cas_loop07_path", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_cas_loop02_path1", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_cas_ram_pathdetachedCurve4", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_cas_loop02_path1detachedCurve4", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_cas_loop02_path1detachedCurve2", !Global_3365);
				ENABLE_CURVE("rsdROAD_las_esc_roaddetachedCurve20detachedCurve2", !Global_3365);
				ENABLE_CURVE("rsdROAD_las_esc_roaddetachedCurve16", !Global_3365);
				ENABLE_CURVE("rsdROAD_las_esc_roaddetachedCurve12", !Global_3365);
				ENABLE_CURVE("rsdROAD_las_esc_roaddetachedCurve14", !Global_3365);
				ENABLE_CURVE("rsdGPSTRAIL_curve163", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_curve297", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_curve71", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_curve72", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_cas_ram_path", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_cas_loop04_pathdetachedCurve2detachedCurve2", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_cas_loop05_path", !Global_3365);
				ENABLE_CURVE("rsdTRAIL_cas_loop08_path", !Global_3365);
				ENABLE_CURVE("rsdGPSTRAIL_curve77", !Global_3365);
				ENABLE_CURVE("rsdGPSTRAIL_curve78", !Global_3365);
				ENABLE_CURVE("rsdGPSTRAIL_curve78", !Global_3365);
				ENABLE_CURVE("rsdGPSTRAIL_curve79", !Global_3365);
				ENABLE_CURVE("rsdGPSTRAIL_elm_loop01_pathdetachedCurve2detachedCurve4", !Global_3365);
				ENABLE_CURVE("rsdGPSTRAIL_elm_loop01_pathdetachedCurve2", !Global_3365);
				ENABLE_CURVE("rsdGPSTRAIL_elm_loop01_path", !Global_3365);
				ENABLE_CURVE("rsdGPSTRAIL_elm_loop02_path", !Global_3365);
				ENABLE_CURVE("rsdROAD_elm_cas_roaddetachedCurve8", !Global_3365);
				ENABLE_CURVE("rsdROAD_elm_cas_roaddetachedCurve6", !Global_3365);
				ENABLE_CURVE("rsdROAD_las_esc_roaddetachedCurve20", !Global_3365);
				break;
			
			case 0x00000019:
				ENABLE_CHILD_SECTOR("emt_caveDoor01x");
				DISABLE_CHILD_SECTOR("emt_caveDoor02x");
				if (Global_3365)
				{
					DISABLE_CHILD_SECTOR("dlc_fom_ladders01x");
				}
				else
				{
					ENABLE_CHILD_SECTOR("dlc_fom_ladders01x");
				}
				break;
			
			case 0x0000001A:
				ENABLE_CHILD_SECTOR("thi_window01x");
				DISABLE_CHILD_SECTOR("thi_window02x");
				break;
			
			default:
				LOG_ERROR("world state error!");
				break;
		}
		iVar0++;
	}
	if (Global_3365)
	{
		Function_232();
	}
	return;
}

bool Function_254(bool bParam0) //Position: 0xFC06 / 64518
{
	bool bVar0;
	
	bVar0 = _GET_PARAM_VALUE(cParam0, "blah");
	if (IS_STRING_VALID(bVar0))
	{
		return 1;
	}
	return 0;
}

void Function_255() //Position: 0xFC25 / 64549
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_25986)
	{
		Global_25986[iVar0] = !Global_3365;
		switch (iVar0)
		{
			case 0x00000000:
			case 0x00000002:
				Global_25986[iVar0] = 1;
				break;
			
			case 0x00000001:
				if (IS_ACTOR_VALID(Global_34573))
				{
					SET_DISABLE_DEADEYE(0, 0);
					SET_DEADEYE_MULTILOCK_ENABLE(0, true);
					SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
					SET_PLAYER_ENDLESS_READYMODE(0, 1);
					Function_106(390, 3.0f);
					Function_38(390, 3, 0);
				}
				break;
			
			case 0x00000003:
				Global_25986[iVar0] = 1;
				break;
			
			case 0x00000004:
				if (Function_117(2) || !Global_3365)
				{
					Global_25986[iVar0] = 1;
					Function_238(1);
					ENABLE_AMBIENT_SPAWNING(true);
				}
				else
				{
					Global_25986[iVar0] = 0;
					Function_256(1);
					ENABLE_AMBIENT_SPAWNING(false);
				}
				break;
			
			case 0x00000005:
				Global_25986[iVar0] = 1;
				break;
			
			case 0x00000009:
				Global_25986[iVar0] = 1;
				break;
			
			case 0x00000006:
				Global_25986[iVar0] = 1;
				break;
			
			case 0x00000007:
				Global_25986[iVar0] = 1;
				break;
			
			case 0x00000008:
				if (Function_117(4))
				{
					Global_25986[iVar0] = 1;
				}
				else
				{
					Global_25986[iVar0] = 0;
				}
				break;
			
			case 0x0000000A:
				Global_25986[iVar0] = 1;
				break;
			
			case 0x0000000B:
				if (Function_236(0) || !Global_3365)
				{
					Global_25986[iVar0] = 1;
				}
				break;
			
			case 0x0000000C:
				Function_235(1);
				Global_25986[iVar0] = 1;
				break;
			
			case 0x0000000D:
			case 0x0000000F:
			case 0x0000000E:
				Global_25986[iVar0] = 0;
				break;
			
			default:
				LOG_ERROR("Found a FeatureType that is not enabled for unlocking!");
				break;
		}
		iVar0++;
	}
	if (Global_3365)
	{
		Function_234(0);
	}
	return;
}

void Function_256(int iParam0) //Position: 0xFDFB / 65019
{
	int iVar0;
	
	if (Function_15(iParam0, 1) && Function_15(Global_26119, 1))
	{
	}
	iVar0 = (Global_26119 && iParam0);
	Global_26119 = (Global_26119 - iVar0);
	Global_26119 |= 1073741824;
	return;
}

void Function_257(int iParam0) //Position: 0xFE2F / 65071
{
	strcpy(iParam0 + 12, "nTUTORIALS", 16);
	*iParam0 = 72388;
	iParam0->f_4 = 65129;
	iParam0->f_8 = 65123;
	iParam0->f_28 = 1;
	return;
}

void Function_258() //Position: 0xFE63 / 65123
{
	return;
}

int Function_259() //Position: 0xFE69 / 65129
{
	return Function_260(0);
}

int Function_260(bool bParam0) //Position: 0xFE73 / 65139
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!Global_3365)
	{
		return 0;
	}
	if (!IS_OBJECT_VALID(Global_34573))
	{
		return 0;
	}
	if (!bParam0 && !Function_135(8192))
	{
		return 0;
	}
	if (!bParam0 && (((Function_225() || HUD_IS_FADED()) || HUD_IS_FADING()) || UI_ISACTIVE("SG_SaveFile")))
	{
		return 0;
	}
	if (!bParam0 && (Global_26281 + 5.0f) < GET_CURRENT_GAME_TIME())
	{
		return 0;
	}
	if (!bParam0 && ((((((((((Global_59353 || Global_3380) || Global_3382) || Global_3367) || Global_63096) || Global_3395) || Global_3394) || Global_3384) || Global_3369) || Global_3396) || !IS_ACTOR_ALIVE(Global_34573)))
	{
		return 0;
	}
	bVar0 = DECOR_GET_INT(Global_34573, "tutorial");
	bVar1 = DECOR_GET_INT(Global_34573, "ntutorial2");
	bVar2 = DECOR_GET_INT(Global_34573, "ntutorial3");
	switch (iLocal_66)
	{
		case 0x00000000:
			if (!Function_102(Global_76846, 1))
			{
				if (Function_263(bVar0, 1))
				{
					Function_262(&Global_76846, 1);
					Function_261(Global_34573, 1, 1);
					if (!bParam0)
					{
						Function_5("tut_zombie_fast", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_102(Global_76846, 2))
			{
				if (Function_263(bVar0, 2))
				{
					Function_262(&Global_76846, 2);
					Function_261(Global_34573, 2, 1);
					if (!bParam0)
					{
						Function_5("tut_zombie_bruiser", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_102(Global_76846, 4))
			{
				if (Function_263(bVar0, 4))
				{
					Function_262(&Global_76846, 4);
					Function_261(Global_34573, 4, 1);
					if (!bParam0)
					{
						Function_5("tut_zombie_toxic", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_102(Global_76846, 8))
			{
				if (Function_263(bVar0, 8))
				{
					Function_262(&Global_76846, 8);
					Function_261(Global_34573, 8, 1);
					if (!bParam0)
					{
						Function_5("tut_weapon_torch", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_102(Global_76846, 16))
			{
				if (Function_263(bVar0, 16))
				{
					Function_262(&Global_76846, 16);
					Function_261(Global_34573, 16, 1);
					if (!bParam0)
					{
						Function_5("tut_weapon_holy_water", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_102(Global_76846, 32))
			{
				if (Function_263(bVar0, 32))
				{
					Function_262(&Global_76846, 32);
					Function_261(Global_34573, 32, 1);
					if (!bParam0)
					{
						Function_5("tut_weapon_phosphorus", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_102(Global_76846, 64))
			{
				if (Function_263(bVar0, 64))
				{
					Function_262(&Global_76846, 64);
					Function_261(Global_34573, 64, 1);
					if (!bParam0)
					{
						Function_5("tut_weapon_blunderbuss", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_102(Global_76846, 128))
			{
				if (Function_263(bVar0, 128))
				{
					Function_262(&Global_76846, 128);
					Function_261(Global_34573, 128, 1);
					if (!bParam0)
					{
						Function_5("tut_weapon_zombie_bait", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_102(Global_76846, 256))
			{
				if (Function_263(bVar0, 256))
				{
					Function_262(&Global_76846, 256);
					Function_261(Global_34573, 256, 1);
					if (!bParam0)
					{
						Function_5("tut_weapon_boomie_bait", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_102(Global_76846, 512))
			{
				if (Function_263(bVar0, 512))
				{
					Function_262(&Global_76846, 512);
					Function_261(Global_34573, 512, 1);
					if (!bParam0)
					{
						Function_5("tut_ambient_use_deadeye", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_102(Global_76846, 1024))
			{
				if (Function_263(bVar0, 1024))
				{
					Function_262(&Global_76846, 1024);
					Function_261(Global_34573, 1024, 1);
					if (!bParam0)
					{
						Function_5("tut_ambient_conserve_ammo", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_102(Global_76846, 2048))
			{
				if (Function_263(bVar0, 2048))
				{
					Function_262(&Global_76846, 2048);
					Function_261(Global_34573, 2048, 1);
					if (!bParam0)
					{
						Function_5("tut_ambient_dead_horse", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_102(Global_76846, 4096))
			{
				if (Function_263(bVar0, 4096))
				{
					Function_262(&Global_76846, 4096);
					Function_261(Global_34573, 4096, 1);
					if (!bParam0)
					{
						Function_5("tut_ambient_zombie_horse", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_102(Global_76846, 8192))
			{
				if (Function_263(bVar0, 8192))
				{
					Function_262(&Global_76846, 8192);
					Function_261(Global_34573, 8192, 1);
					if (!bParam0)
					{
						Function_5("tut_ambient_ruined_quest", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_102(Global_76846, 16384))
			{
				if (Function_263(bVar0, 16384))
				{
					Function_262(&Global_76846, 16384);
					Function_261(Global_34573, 16384, 1);
					if (!bParam0)
					{
						Function_5("tut_ambient_fast_travel", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_102(Global_76846, 32768))
			{
				if (Function_263(bVar0, 32768))
				{
					Function_262(&Global_76846, 32768);
					Function_261(Global_34573, 32768, 1);
					return 0;
				}
			}
			if (!Function_102(Global_76846, 65536))
			{
				if (Function_263(bVar0, 65536))
				{
					Function_262(&Global_76846, 65536);
					Function_261(Global_34573, 65536, 1);
					return 0;
				}
			}
			if (!Function_102(Global_76846, 131072))
			{
				if (Function_263(bVar0, 131072))
				{
					Function_262(&Global_76846, 131072);
					Function_261(Global_34573, 131072, 1);
					if (!bParam0)
					{
						Function_5("tut_firsttime_fort_mercer", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_102(Global_76846, 262144))
			{
				if (Function_263(bVar0, 262144))
				{
					Function_262(&Global_76846, 262144);
					Function_261(Global_34573, 262144, 1);
					if (!bParam0)
					{
						Function_5("tut_firsttime_el_presidio", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_102(Global_76846, 524288))
			{
				if (Function_263(bVar0, 524288))
				{
					Function_262(&Global_76846, 524288);
					Function_261(Global_34573, 524288, 1);
					if (!bParam0)
					{
						Function_5("tut_survivor_bullet_waste", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_102(Global_76846, 1048576))
			{
				if (Function_263(bVar0, 1048576))
				{
					Function_262(&Global_76846, 1048576);
					Function_261(Global_34573, 1048576, 1);
					if (!bParam0)
					{
						Function_5("tut_survivor_loot_got_ammo", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_102(Global_76846, 2097152))
			{
				if (Function_263(bVar0, 2097152))
				{
					Function_262(&Global_76846, 2097152);
					Function_261(Global_34573, 2097152, 1);
					if (!bParam0)
					{
						Function_5("tut_survivor_loot_got_parts", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_102(Global_76846, 4194304))
			{
				if (Function_263(bVar0, 4194304))
				{
					Function_262(&Global_76846, 4194304);
					Function_261(Global_34573, 4194304, 1);
					if (!bParam0)
					{
						Function_5("tut_survivor_lead_no_talk", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_102(Global_76846, 8388608))
			{
				if (Function_263(bVar0, 8388608))
				{
					Function_262(&Global_76846, 8388608);
					Function_261(Global_34573, 8388608, 1);
					if (!bParam0)
					{
						Function_5("tut_survivor_talk_no_save", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_102(Global_76846, 0x1000000))
			{
				if (Function_263(bVar0, 0x1000000))
				{
					Function_262(&Global_76846, 0x1000000);
					Function_261(Global_34573, 0x1000000, 1);
					if (!bParam0)
					{
						Function_5("tut_survivor_save_rewarded", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_102(Global_76846, 0x2000000))
			{
				if (Function_263(bVar0, 0x2000000))
				{
					Function_262(&Global_76846, 0x2000000);
					Function_261(Global_34573, 0x2000000, 1);
					if (!bParam0)
					{
						Function_5("tut_survivor_save_and_leave", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_102(Global_76846, 0x4000000))
			{
				if (Function_263(bVar0, 0x4000000))
				{
					Function_262(&Global_76846, 0x4000000);
					Function_261(Global_34573, 0x4000000, 1);
					if (!bParam0)
					{
						Function_5("tut_survivor_town_check_map", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_102(Global_76846, 0x8000000))
			{
				if (Function_263(bVar0, 0x8000000))
				{
					Function_262(&Global_76846, 0x8000000);
					Function_261(Global_34573, 0x8000000, 1);
					if (!bParam0)
					{
						Function_5("tut_survivor_town_reattack", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_102(Global_76846, 0x10000000))
			{
				if (Function_263(bVar0, 0x10000000))
				{
					Function_262(&Global_76846, 0x10000000);
					Function_261(Global_34573, 0x10000000, 1);
					if (!bParam0)
					{
						Function_5("tut_survivor_town_taken", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_102(Global_76846, 0x20000000))
			{
				if (Function_263(bVar0, 0x20000000))
				{
					Function_262(&Global_76846, 0x20000000);
					Function_261(Global_34573, 0x20000000, 1);
					if (!bParam0)
					{
						Function_5("tut_survivor_town_lost_guy", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_102(Global_76846, 0x40000000))
			{
				if (Function_263(bVar0, 0x40000000))
				{
					Function_262(&Global_76846, 0x40000000);
					Function_261(Global_34573, 0x40000000, 1);
					if (!bParam0)
					{
						Function_5("tut_survivor_town_lost_forever", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			break;
		
		case 0x00000001:
			if (!Function_102(Global_76847, 2))
			{
				if (Function_263(bVar1, 2))
				{
					Function_262(&Global_76847, 2);
					Function_261(Global_34573, 2, 2);
					if (!bParam0)
					{
						Function_5("tut_zombie02_talktosurvivors", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_102(Global_76847, 4))
			{
				if (Function_263(bVar1, 4))
				{
					Function_262(&Global_76847, 4);
					Function_261(Global_34573, 4, 2);
					if (!bParam0)
					{
						Function_5("tut_mother4_talktosurvivors", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_102(Global_76847, 16))
			{
				if (Function_263(bVar1, 16))
				{
					Function_262(&Global_76847, 16);
					Function_261(Global_34573, 16, 2);
					if (!bParam0)
					{
						Function_5("tut_zombie_john", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_102(Global_76847, 32))
			{
				if (Function_263(bVar1, 32))
				{
					Function_262(&Global_76847, 32);
					Function_261(Global_34573, 32, 2);
					if (!bParam0)
					{
						Function_5("tut_zombie_grapple", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_102(Global_76847, 64))
			{
				if (Function_263(bVar1, 64))
				{
					Function_262(&Global_76847, 64);
					Function_261(Global_34573, 64, 2);
					if (!bParam0)
					{
						Function_5("tut_weapon_holy_relic", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_102(Global_76847, 128))
			{
				if (Function_263(bVar1, 128))
				{
					Function_262(&Global_76847, 128);
					Function_261(Global_34573, 128, 2);
					if (!bParam0)
					{
						Function_5("tut_lowhealth_usemeds", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_102(Global_76847, 256))
			{
				if (Function_263(bVar1, 256))
				{
					Function_262(&Global_76847, 256);
					Function_261(Global_34573, 256, 2);
					if (!bParam0)
					{
						Function_5("tut_hogtieonhorse", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_102(Global_76847, 512))
			{
				if (Function_263(bVar1, 512))
				{
					Function_262(&Global_76847, 512);
					Function_261(Global_34573, 512, 2);
					if (!bParam0)
					{
						Function_5("tut_navigation_foot_basic", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_102(Global_76847, 1024))
			{
				if (Function_263(bVar1, 1024))
				{
					Function_262(&Global_76847, 1024);
					Function_261(Global_34573, 1024, 2);
					if (!bParam0)
					{
						Function_5("tut_navigation_foot_run", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_102(Global_76847, 8))
			{
				if (Function_263(bVar1, 8))
				{
					Function_262(&Global_76847, 8);
					Function_261(Global_34573, 8, 2);
					if (!bParam0)
					{
						Function_5("tut_horse_whistle", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_102(Global_76847, 2048))
			{
				if (Function_263(bVar1, 2048))
				{
					Function_262(&Global_76847, 2048);
					Function_261(Global_34573, 2048, 2);
					if (!bParam0)
					{
						Function_5("tut_navigation_horse_basic", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_102(Global_76847, 4096))
			{
				if (Function_263(bVar1, 4096))
				{
					Function_262(&Global_76847, 4096);
					Function_261(Global_34573, 4096, 2);
					if (!bParam0)
					{
						Function_5("tut_navigation_horse_gallop", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_102(Global_76847, 8192))
			{
				if (Function_263(bVar1, 8192))
				{
					Function_262(&Global_76847, 8192);
					Function_261(Global_34573, 8192, 2);
					if (!bParam0)
					{
						Function_5("tut_navigation_horse_stamina", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_102(Global_76847, 16384))
			{
				if (Function_263(bVar1, 16384))
				{
					Function_262(&Global_76847, 16384);
					Function_261(Global_34573, 16384, 2);
					if (!bParam0)
					{
						Function_5("tut_weapon_reload", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_102(Global_76847, 32768))
			{
				if (Function_263(bVar1, 32768))
				{
					Function_262(&Global_76847, 32768);
					Function_261(Global_34573, 32768, 2);
					if (!bParam0)
					{
						Function_5("tut_loot_corpse", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_102(Global_76847, 65536))
			{
				if (Function_263(bVar1, 65536))
				{
					Function_262(&Global_76847, 65536);
					Function_261(Global_34573, 65536, 2);
					if (!bParam0)
					{
						Function_5("tut_weapon_new", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_102(Global_76847, 131072))
			{
				if (Function_263(bVar1, 131072))
				{
					Function_262(&Global_76847, 131072);
					Function_261(Global_34573, 131072, 2);
					if (!bParam0)
					{
						Function_5("tut_new_weapon_choose", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_102(Global_76847, 1048576))
			{
				if (Function_263(bVar1, 1048576))
				{
					Function_262(&Global_76847, 1048576);
					Function_261(Global_34573, 1048576, 2);
					if (!bParam0)
					{
						Function_5("tut_deadeye_activation", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_102(Global_76847, 2097152))
			{
				if (Function_263(bVar1, 2097152))
				{
					Function_262(&Global_76847, 2097152);
					Function_261(Global_34573, 2097152, 2);
					if (!bParam0)
					{
						Function_5("tut_deadeye_locks", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_102(Global_76847, 4194304))
			{
				if (Function_263(bVar1, 4194304))
				{
					Function_262(&Global_76847, 4194304);
					Function_261(Global_34573, 4194304, 2);
					if (!bParam0)
					{
						Function_5("tut_deadeye_exit", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_102(Global_76847, 8388608))
			{
				if (Function_263(bVar1, 8388608))
				{
					Function_262(&Global_76847, 8388608);
					Function_261(Global_34573, 8388608, 2);
					if (!bParam0)
					{
						Function_5("tut_thrown_arc", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_102(Global_76847, 0x1000000))
			{
				if (Function_263(bVar1, 0x1000000))
				{
					Function_262(&Global_76847, 0x1000000);
					Function_261(Global_34573, 0x1000000, 2);
					if (!bParam0)
					{
						Function_5("tut_hitch_horse", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_102(Global_76847, 0x2000000))
			{
				if (Function_263(bVar1, 0x2000000))
				{
					Function_262(&Global_76847, 0x2000000);
					Function_261(Global_34573, 0x2000000, 2);
					if (!bParam0)
					{
						Function_5("tut_hitch_horse_return", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_102(Global_76847, 0x4000000))
			{
				if (Function_263(bVar1, 0x4000000))
				{
					Function_262(&Global_76847, 0x4000000);
					Function_261(Global_34573, 0x4000000, 2);
					if (!bParam0)
					{
						Function_5("tut_house_save", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_102(Global_76847, 0x10000000))
			{
				if (Function_263(bVar1, 0x10000000))
				{
					Function_262(&Global_76847, 0x10000000);
					Function_261(Global_34573, 0x10000000, 2);
					if (!bParam0)
					{
						Function_5("tut_satchel_open", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_102(Global_76847, 0x20000000))
			{
				if (Function_263(bVar1, 0x20000000))
				{
					Function_262(&Global_76847, 0x20000000);
					Function_261(Global_34573, 0x20000000, 2);
					if (!bParam0)
					{
						Function_5("tut_new_weapon_range", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_102(Global_76847, 0x40000000))
			{
				if (Function_263(bVar1, 0x40000000))
				{
					Function_262(&Global_76847, 0x40000000);
					Function_261(Global_34573, 0x40000000, 2);
					if (!bParam0)
					{
						Function_5("tut_melee_lockon", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			break;
		
		case 0x00000002:
			if (!Function_102(Global_76848, 2))
			{
				if (Function_263(bVar2, 2))
				{
					Function_262(&Global_76848, 2);
					Function_261(Global_34573, 2, 3);
					if (!bParam0)
					{
						Function_5("tut_health_death", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_102(Global_76848, 4))
			{
				if (Function_263(bVar2, 4))
				{
					Function_262(&Global_76848, 4);
					Function_261(Global_34573, 4, 3);
					if (!bParam0)
					{
						Function_5("tut_health_regen", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_102(Global_76848, 8))
			{
				if (Function_263(bVar2, 8))
				{
					Function_262(&Global_76848, 8);
					Function_261(Global_34573, 8, 3);
					if (!bParam0)
					{
						Function_5("tut_horse_roads", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_102(Global_76848, 16))
			{
				if (Function_263(bVar2, 16))
				{
					Function_262(&Global_76848, 16);
					Function_261(Global_34573, 16, 3);
					if (!bParam0)
					{
						Function_5("tut_ledgeplay_1", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_102(Global_76848, 32))
			{
				if (Function_263(bVar2, 32))
				{
					Function_262(&Global_76848, 32);
					Function_261(Global_34573, 32, 3);
					if (!bParam0)
					{
						Function_5("tut_ledgeplay_2", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_102(Global_76848, 64))
			{
				if (Function_263(bVar2, 64))
				{
					Function_262(&Global_76848, 64);
					Function_261(Global_34573, 64, 3);
					if (!bParam0)
					{
						Function_5("tut_sniper_zoom", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_102(Global_76848, 256))
			{
				if (Function_263(bVar2, 256))
				{
					Function_262(&Global_76848, 256);
					Function_261(Global_34573, 256, 3);
					if (!bParam0)
					{
						if (GET_PLAYER_COMBATMODE() == 1)
						{
							Function_5("tut_weapon_aim_expert", 0x41200000, 1, 0, 2, 1, 0);
						}
						else if (GET_PLAYER_COMBATMODE() == 2)
						{
							Function_5("tut_weapon_aim_normal", 0x41200000, 1, 0, 2, 1, 0);
						}
						else
						{
							Function_5("tut_weapon_aim_casual", 0x41200000, 1, 0, 2, 1, 0);
						}
						return 0;
					}
				}
			}
			if (!Function_102(Global_76848, 2048))
			{
				if (Function_263(bVar2, 2048))
				{
					Function_262(&Global_76848, 2048);
					Function_261(Global_34573, 2048, 3);
					if (!bParam0)
					{
						Function_5("AMZFH_HLP_DEATH", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_102(Global_76848, 4096))
			{
				if (Function_263(bVar2, 4096))
				{
					Function_262(&Global_76848, 4096);
					Function_261(Global_34573, 4096, 3);
					if (!bParam0)
					{
						Function_5("AMZFH_HLP_DEATH_2", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_102(Global_76848, 8192))
			{
				if (Function_263(bVar2, 8192))
				{
					Function_262(&Global_76848, 8192);
					Function_261(Global_34573, 8192, 3);
					if (!bParam0)
					{
						Function_5("AMZFH_HLP_WAR", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_102(Global_76848, 16384))
			{
				if (Function_263(bVar2, 16384))
				{
					Function_262(&Global_76848, 16384);
					Function_261(Global_34573, 16384, 3);
					if (!bParam0)
					{
						Function_5("AMZFH_HLP_WAR_2", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_102(Global_76848, 32768))
			{
				if (Function_263(bVar2, 32768))
				{
					Function_262(&Global_76848, 32768);
					Function_261(Global_34573, 32768, 3);
					if (!bParam0)
					{
						Function_5("AMZFH_HLP_PEST", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_102(Global_76848, 65536))
			{
				if (Function_263(bVar2, 65536))
				{
					Function_262(&Global_76848, 65536);
					Function_261(Global_34573, 65536, 3);
					if (!bParam0)
					{
						Function_5("AMZFH_HLP_PEST_2", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_102(Global_76848, 131072))
			{
				if (Function_263(bVar2, 131072))
				{
					Function_262(&Global_76848, 131072);
					Function_261(Global_34573, 131072, 3);
					if (!bParam0)
					{
						Function_5("AMZFH_HLP_FAM", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_102(Global_76848, 262144))
			{
				if (Function_263(bVar2, 262144))
				{
					Function_262(&Global_76848, 262144);
					Function_261(Global_34573, 262144, 3);
					if (!bParam0)
					{
						Function_5("AMZFH_HLP_FAM_2", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_102(Global_76848, 128))
			{
				if (Function_263(bVar2, 128))
				{
					Function_262(&Global_76848, 128);
					Function_261(Global_34573, 128, 3);
					if (!bParam0)
					{
						Function_5("tut_horse_mount", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_102(Global_76848, 512))
			{
				if (Function_263(bVar2, 512))
				{
					Function_262(&Global_76848, 512);
					Function_261(Global_34573, 512, 3);
					if (!bParam0)
					{
						Function_5("tut_undead_nightmare", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_102(Global_76848, 1024))
			{
				if (Function_263(bVar2, 1024))
				{
					Function_262(&Global_76848, 1024);
					Function_261(Global_34573, 1024, 3);
					if (!bParam0)
					{
						Function_5("tutorial_place_waypoint", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			break;
		
		case 0x00000003:
			break;
	}
	iLocal_66++;
	if (iLocal_66 >= 2)
	{
		iLocal_66 = 0;
	}
	return 0;
}

void Function_261(bool bParam0, int iParam1, int iParam2) //Position: 0x11A50 / 72272
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
	Function_98(&Var1, iParam2);
	if (!DECOR_CHECK_EXIST(bParam0, &Var1))
	{
		return;
	}
	bVar5 = DECOR_GET_INT(bParam0, &Var1);
	DECOR_SET_INT(bParam0, &Var1, (bVar5 - (bVar5 && uVar0)));
	return;
}

void Function_262(var uParam0, int iParam1) //Position: 0x11A9F / 72351
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_263(bool bParam0, int iParam1) //Position: 0x11AAE / 72366
{
	var uVar0;
	
	uVar0 = iParam1;
	if ((bParam0 && uVar0) >= 0)
	{
		return 1;
	}
	return 0;
}

void Function_264() //Position: 0x11AC4 / 72388
{
	return;
}

void Function_265(int iParam0) //Position: 0x11ACA / 72394
{
	strcpy(iParam0 + 12, "AMBIENT-CHALL", 16);
	*iParam0 = 72457;
	iParam0->f_4 = 72450;
	iParam0->f_8 = 72457;
	iParam0->f_28 = 1;
	return;
}

int Function_266() //Position: 0x11B02 / 72450
{
	return 0;
}

void Function_267() //Position: 0x11B09 / 72457
{
	return;
}

