//Decompiled with MagicRDR v1.0
//Function Count : 268
//Statics Count : 201
//Natives Count : 270
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
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	struct<141> Local_21 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	int iLocal_198 = 0;
	bool bLocal_199 = false;
	float fLocal_200 = 0.0f;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	
	iLocal_95 = 31;
	iLocal_96 = 33;
	iLocal_97 = 1;
	fLocal_98 = 2.0f;
	Function_265(&(Local_100[08]));
	Function_257(&(Local_100[18]));
	Function_228(&(Local_100[28]));
	Function_187(&(Local_100[38]));
	Function_172(&(Local_100[48]));
	Function_139(&(Local_100[58]));
	iVar0 = 0;
	while (iVar0 <= Local_100)
	{
		Call_Loc(Local_100[iVar08]);
		Local_100[iVar08].f_60 = 1;
		iVar0++;
	}
	while (!Function_138(256) && !IS_EXITFLAG_SET())
	{
		WAIT(false);
	}
	Function_136();
	Function_134();
	while (!IS_EXITFLAG_SET())
	{
		iLocal_198 = 100;
		SET_DEBUG_DRAW((Global_47267[8] || Global_47267[9]));
		if (GET_DEBUG_DRAW_STATE())
		{
			iLocal_198 = 0;
		}
		iVar0 = 0;
		while (iVar0 <= Local_100)
		{
			if (bLocal_199)
			{
				PRINTSTRING("Time for Exec ");
				PRINTSTRING(&Local_100[iVar08] + 24);
				PRINTSTRING(": ");
				fLocal_200 = GET_PROFILE_TIME();
			}
			Call_Loc(&Local_100[iVar08] + 8);
			if (StackVal)
			{
				iLocal_198 = 0;
			}
			if (bLocal_199)
			{
				PRINTFLOAT((GET_PROFILE_TIME() - fLocal_200));
				PRINTNL();
			}
			if (!IS_EXITFLAG_SET() && !iLocal_198 != 0)
			{
				WAIT(false);
			}
			iVar0++;
		}
		Function_117();
		Function_4();
		Function_1();
		if (!IS_EXITFLAG_SET())
		{
			WAIT(false);
		}
	}
	iVar0 = 0;
	while (iVar0 <= Local_100)
	{
		if (Local_100[iVar08].f_60)
		{
			Call_Loc(Local_100[iVar08].f_16);
		}
		iVar0++;
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0x160 / 352
{
	var uVar0;
	var uVar1;
	var uVar2;
	
	uVar0 = Function_3();
	uVar1 = Function_2();
	if (IS_LAYOUTREF_VALID(&uVar0))
	{
		if (GET_NUM_ITERATOR_MATCHES(&uVar1) >= 0)
		{
			uVar2 = START_OBJECT_ITERATOR(&uVar1);
			while (IS_OBJECT_VALID(&uVar2))
			{
				if (DECOR_CHECK_EXIST(&uVar2, "AM_NO_PURGE"))
				{
					if (DECOR_GET_INT(&uVar2, "AM_NO_PURGE") < 0)
					{
						DESTROY_OBJECT(&uVar2);
					}
				}
				else
				{
					DESTROY_OBJECT(&uVar2);
				}
				uVar2 = OBJECT_ITERATOR_NEXT(&uVar1);
			}
		}
	}
	return;
}

var Function_2() //Position: 0x1E1 / 481
{
	var uVar0;
	var uVar1;
	
	uVar0 = Function_3();
	uVar1 = GET_ITERATOR_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(&uVar0, "AmbientMissions_Iterator"));
	if (!IS_ITERATOR_VALID(&uVar1))
	{
		uVar1 = CREATE_NAMED_OBJECT_ITERATOR(&uVar0, "AmbientMissions_Iterator");
	}
	return &uVar1;
}

bool Function_3() //Position: 0x245 / 581
{
	var uVar0;
	
	uVar0 = FIND_NAMED_LAYOUT("AmbientMissions_Layout");
	if (!IS_LAYOUTREF_VALID(&uVar0))
	{
		uVar0 = CREATE_LAYOUT("AmbientMissions_Layout");
	}
	return &uVar0;
}

void Function_4() //Position: 0x296 / 662
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	var uVar6;
	int iVar10;
	int iVar11;
	
	if (StackVal == 3)
	{
		return;
	}
	bVar0 = Function_116("ER_SP");
	iVar10 = 8872;
	switch (StackVal)
	{
		case 0x00000000:
			switch (StackVal)
			{
				case 0x00000000:
					if ((!Global_6661 && Function_112(41, 0)) || (Global_6661 && Function_111(5)))
					{
						Function_110();
						SET_JOURNAL_ENTRY_PROGRESS(Local_57.f_32, -1.0f, true, 0);
						Local_57.f_40 = 1;
					}
					Local_57.f_4 = 1;
					break;
				
				case 0x00000001:
					if (ACTOR_HAS_WEAPON(&Global_54076, 31))
					{
						Local_57.f_4 = 2;
					}
					else if ((!Global_6661 && Function_112(41, 0)) || (Global_6661 && Function_111(5)))
					{
						if (Local_57.f_40 != 1)
						{
							Local_57.f_40 = 1;
							Function_110();
							SET_JOURNAL_ENTRY_PROGRESS(Local_57.f_32, -1.0f, true, 0);
						}
					}
					break;
				
				case 0x00000002:
					if (((Global_6618 && !Global_99146) && !Global_93258) && Function_106())
					{
						Function_105(&bVar0);
						Function_104(1, "AM_ER");
						Function_80(20, 1, 0);
						Function_78();
						Local_57.f_8 = 1;
						Local_57.f_4 = 0;
						Local_57.f_12 = 0.0f;
						Local_57.f_40 = 0;
						Function_72();
						Function_27();
						memcpy(&uVar6, StackVal, StackVal, StackVal, StackVal, StackVal, Function_26(), 4);
						Local_57.f_32 = CREATE_JOURNAL_ENTRY(&uVar6, 3, false, "challenge_01");
					}
					break;
			}
			break;
		
		case 0x00000001:
			switch (StackVal)
			{
				case 0x00000000:
					Function_110();
					SET_JOURNAL_ENTRY_PROGRESS(Local_57.f_32, Local_57.f_12, true, 0);
					(*&Local_57 + 44)[0] = GET_CURRENT_GAME_TIME();
					Local_57.f_4 = 1;
					break;
				
				case 0x00000001:
					if (GET_LAST_ATTACK_TIME(&Global_54076) < ((*&Local_57 + 44)[0] + 0,3f))
					{
						(*&Local_57 + 44)[0] = GET_LAST_ATTACK_TIME(&Global_54076);
					}
					if (!Global_6661)
					{
						iVar3 = Function_25(2, &bVar0, 1);
						if (iVar3 >= 0)
						{
							iVar2 = 0;
							while (Function_24(&bVar0, &iVar2, &iVar4))
							{
								if ((GET_EVENT_TIME(GET_EVENT_FROM_OBJECT(&iVar4)) + 0,3f) <= (*&Local_57 + 44)[0])
								{
									if (Function_23(&iVar4) == 31)
									{
										bVar1 = GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(&iVar4)));
										if (IS_ACTOR_VALID(&bVar1))
										{
											if (IS_ACTOR_HUMAN(&bVar1))
											{
												if (Function_22(&bVar1))
												{
													if (DECOR_CHECK_EXIST(&iVar4, "AM_InCover"))
													{
														if (!DECOR_CHECK_EXIST(&bVar1, "AM_ERcounted"))
														{
															Local_57.f_36++;
															DECOR_SET_BOOL(&bVar1, "AM_ERcounted", 1);
														}
													}
												}
											}
										}
									}
								}
							}
							if (Local_57.f_36 > 5)
							{
								Local_57.f_4 = 2;
								Local_57.f_36 = 0;
								break;
							}
							else
							{
								Function_105(&bVar0);
							}
						}
						iVar3 = Function_25(91, &bVar0, 1);
						if (iVar3 >= 0)
						{
							iVar2 = 0;
							while (Function_24(&bVar0, &iVar2, &iVar4))
							{
								if ((GET_EVENT_TIME(GET_EVENT_FROM_OBJECT(&iVar4)) + 0,3f) <= (*&Local_57 + 44)[0])
								{
									if (Function_23(&iVar4) == 31)
									{
										bVar1 = GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(&iVar4)));
										if (IS_ACTOR_VALID(&bVar1))
										{
											if (IS_ACTOR_HUMAN(&bVar1))
											{
												if (Function_22(&bVar1))
												{
													if (!AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(&bVar1), iVar10))
													{
														if (DECOR_CHECK_EXIST(&iVar4, "AM_InCover"))
														{
															if (!DECOR_CHECK_EXIST(&bVar1, "AM_ERcounted"))
															{
																Local_57.f_36++;
																DECOR_SET_BOOL(&bVar1, "AM_ERcounted", 1);
															}
														}
													}
												}
											}
										}
									}
								}
							}
							if (Local_57.f_36 > 5)
							{
								Local_57.f_4 = 2;
								Local_57.f_36 = 0;
								break;
							}
							else
							{
								Function_105(&bVar0);
							}
						}
						fVar5 = Local_57.f_12;
						Local_57.f_12 = (IntToFloat(Local_57.f_36) / 5.0f);
						if (Local_57.f_12 == fVar5)
						{
							Function_20(Local_57.f_12, Local_57.f_36, 30);
							Function_72();
						}
					}
					else
					{
						iVar3 = Function_25(2, &bVar0, 1);
						if (iVar3 >= 0)
						{
							iVar2 = 0;
							while (Function_24(&bVar0, &iVar2, &iVar4))
							{
								if ((GET_EVENT_TIME(GET_EVENT_FROM_OBJECT(&iVar4)) + 0,3f) <= (*&Local_57 + 44)[0])
								{
									if (Function_23(&iVar4) == 31)
									{
										bVar1 = GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(&iVar4)));
										if (IS_ACTOR_VALID(&bVar1))
										{
											iVar11 = Function_13(&bVar1);
											if (((iVar11 != 0 || iVar11 != 1) || iVar11 != 2) || iVar11 != 3)
											{
												if (!DECOR_CHECK_EXIST(&bVar1, "AM_ERcounted"))
												{
													DECOR_SET_BOOL(&bVar1, "AM_ERcounted", 1);
													switch (iVar11)
													{
														case 0x00000000:
															Function_12(&Local_57 + 40, 1);
															break;
														
														case 0x00000001:
															Function_12(&Local_57 + 40, 2);
															break;
														
														case 0x00000002:
															Function_12(&Local_57 + 40, 4);
															break;
														
														case 0x00000003:
															Function_12(&Local_57 + 40, 8);
															break;
														}
													}
												}
											}
									}
								}
							}
							if (((Function_11(Local_57.f_40, 1) && Function_11(Local_57.f_40, 2)) && Function_11(Local_57.f_40, 4)) && Function_11(Local_57.f_40, 8))
							{
								Local_57.f_4 = 2;
								Local_57.f_36 = 0;
								Local_57.f_40 = 0;
								break;
							}
							else
							{
								Function_105(&bVar0);
							}
						}
						iVar3 = Function_25(91, &bVar0, 1);
						if (iVar3 >= 0)
						{
							iVar2 = 0;
							while (Function_24(&bVar0, &iVar2, &iVar4))
							{
								if ((GET_EVENT_TIME(GET_EVENT_FROM_OBJECT(&iVar4)) + 0,3f) <= (*&Local_57 + 44)[0])
								{
									if (Function_23(&iVar4) == 31)
									{
										bVar1 = GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(&iVar4)));
										if (IS_ACTOR_VALID(&bVar1))
										{
											iVar11 = Function_13(&bVar1);
											if (((iVar11 != 0 || iVar11 != 1) || iVar11 != 2) || iVar11 != 3)
											{
												if (!AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(&bVar1), iVar10))
												{
													if (!DECOR_CHECK_EXIST(&bVar1, "AM_ERcounted"))
													{
														DECOR_SET_BOOL(&bVar1, "AM_ERcounted", 1);
														switch (iVar11)
														{
															case 0x00000000:
																Function_12(&Local_57 + 40, 1);
																break;
															
															case 0x00000001:
																Function_12(&Local_57 + 40, 2);
																break;
															
															case 0x00000002:
																Function_12(&Local_57 + 40, 4);
																break;
															
															case 0x00000003:
																Function_12(&Local_57 + 40, 8);
																break;
															}
														}
													}
												}
											}
									}
								}
							}
							if (((Function_11(Local_57.f_40, 1) && Function_11(Local_57.f_40, 2)) && Function_11(Local_57.f_40, 4)) && Function_11(Local_57.f_40, 8))
							{
								Local_57.f_4 = 2;
								Local_57.f_36 = 0;
								Local_57.f_40 = 0;
								break;
							}
							else
							{
								Function_105(&bVar0);
							}
						}
						iVar3 = 0;
						fVar5 = Local_57.f_12;
						if (Function_11(Local_57.f_40, 1))
						{
							iVar3++;
						}
						if (Function_11(Local_57.f_40, 2))
						{
							iVar3++;
						}
						if (Function_11(Local_57.f_40, 4))
						{
							iVar3++;
						}
						if (Function_11(Local_57.f_40, 8))
						{
							iVar3++;
						}
						Local_57.f_12 = (IntToFloat(iVar3) / 4.0f);
						if (Local_57.f_12 == fVar5)
						{
							SET_JOURNAL_ENTRY_PROGRESS(Local_57.f_32, Local_57.f_12, true, 0);
							Function_72();
						}
					}
					break;
				
				case 0x00000002:
					if (Function_106())
					{
						Function_104(2, "AM_ER");
						Function_105(&bVar0);
						Function_80(20, 1, 0);
						Function_78();
						Local_57.f_8 = 2;
						Local_57.f_4 = 0;
						Local_57.f_12 = 0.0f;
						Function_72();
						if (Global_6661 && _GET_AMMO_AMOUNT(&Global_54076, 13, 1) > _GET_MAX_AMMO_AMOUNT(&Global_54076, 13))
						{
							_ADD_AMMO_OF_TYPE(&Global_54076, 13, 2.0f, 1, 1);
						}
						Function_27();
						memcpy(&uVar6, StackVal, StackVal, StackVal, StackVal, StackVal, Function_26(), 4);
						Local_57.f_32 = CREATE_JOURNAL_ENTRY(&uVar6, 3, false, "challenge_01");
					}
					break;
			}
			break;
		
		case 0x00000002:
			switch (StackVal)
			{
				case 0x00000000:
					Function_110();
					SET_JOURNAL_ENTRY_PROGRESS(Local_57.f_32, -1.0f, true, 0);
					(*&Local_57 + 44)[0] = GET_CURRENT_GAME_TIME();
					Local_57.f_4 = 1;
					break;
				
				case 0x00000001:
					if (GET_LAST_ATTACK_TIME(&Global_54076) < ((*&Local_57 + 44)[0] + 0,3f))
					{
						(*&Local_57 + 44)[0] = GET_LAST_ATTACK_TIME(&Global_54076);
						Local_57.f_36 = 0;
					}
					iVar3 = Function_25(2, &bVar0, 1);
					if (iVar3 >= 0)
					{
						iVar2 = 0;
						while (Function_24(&bVar0, &iVar2, &iVar4))
						{
							if ((GET_EVENT_TIME(GET_EVENT_FROM_OBJECT(&iVar4)) + 0,3f) <= (*&Local_57 + 44)[0])
							{
								if (Function_23(&iVar4) == 31)
								{
									bVar1 = GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(&iVar4)));
									if (IS_ACTOR_VALID(&bVar1))
									{
										if (IS_ACTOR_HUMAN(&bVar1))
										{
											if ((!Global_6661 && Function_22(&bVar1)) || (Global_6661 && Function_13(&bVar1) == 4294967295))
											{
												if (!DECOR_CHECK_EXIST(&bVar1, "AM_ERcounted"))
												{
													Local_57.f_36++;
													DECOR_SET_BOOL(&bVar1, "AM_ERcounted", 1);
												}
											}
										}
									}
								}
							}
						}
						if (Local_57.f_36 > 3)
						{
							Local_57.f_4 = 2;
							Local_57.f_36 = 0;
							break;
						}
						else
						{
							Function_105(&bVar0);
						}
					}
					iVar3 = Function_25(91, &bVar0, 1);
					if (iVar3 >= 0)
					{
						iVar2 = 0;
						while (Function_24(&bVar0, &iVar2, &iVar4))
						{
							if ((GET_EVENT_TIME(GET_EVENT_FROM_OBJECT(&iVar4)) + 0,3f) <= (*&Local_57 + 44)[0])
							{
								if (Function_23(&iVar4) == 31)
								{
									bVar1 = GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(&iVar4)));
									if (IS_ACTOR_VALID(&bVar1))
									{
										if (IS_ACTOR_HUMAN(&bVar1))
										{
											if ((!Global_6661 && Function_22(&bVar1)) || (Global_6661 && Function_13(&bVar1) == 4294967295))
											{
												if (!AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(&bVar1), iVar10))
												{
													if (!DECOR_CHECK_EXIST(&bVar1, "AM_ERcounted"))
													{
														Local_57.f_36++;
														DECOR_SET_BOOL(&bVar1, "AM_ERcounted", 1);
													}
												}
											}
										}
									}
								}
							}
						}
						if (Local_57.f_36 > 3)
						{
							Local_57.f_4 = 2;
							Local_57.f_36 = 0;
							break;
						}
						else
						{
							Function_105(&bVar0);
						}
					}
					break;
				
				case 0x00000002:
					if (Function_106())
					{
						Function_104(3, "AM_ER");
						Function_105(&bVar0);
						Function_80(20, 1, 0);
						Function_78();
						Local_57.f_8 = 3;
						Local_57.f_4 = 0;
						Local_57.f_12 = 0.0f;
						Function_72();
						if (Global_6661 && _GET_AMMO_AMOUNT(&Global_54076, 13, 1) > _GET_MAX_AMMO_AMOUNT(&Global_54076, 13))
						{
							_ADD_AMMO_OF_TYPE(&Global_54076, 13, 2.0f, 1, 1);
						}
						Function_27();
						memcpy(&uVar6, StackVal, StackVal, StackVal, StackVal, StackVal, Function_26(), 4);
						Local_57.f_32 = CREATE_JOURNAL_ENTRY(&uVar6, 3, false, "challenge_01");
					}
					break;
			}
			break;
		
		case 0x00000003:
			switch (StackVal)
			{
				case 0x00000000:
					Function_110();
					SET_JOURNAL_ENTRY_PROGRESS(Local_57.f_32, -1.0f, true, 0);
					(*&Local_57 + 44)[0] = GET_CURRENT_GAME_TIME();
					Local_57.f_4 = 1;
					break;
				
				case 0x00000001:
					if (GET_LAST_ATTACK_TIME(&Global_54076) < ((*&Local_57 + 44)[0] + 0,3f))
					{
						(*&Local_57 + 44)[0] = GET_LAST_ATTACK_TIME(&Global_54076);
						Local_57.f_36 = 0;
					}
					iVar3 = Function_9(2, "ANIMAL", &bVar0, 1, 0);
					if (iVar3 >= 0)
					{
						iVar2 = 0;
						while (Function_24(&bVar0, &iVar2, &iVar4))
						{
							if ((GET_EVENT_TIME(GET_EVENT_FROM_OBJECT(&iVar4)) + 0,3f) <= (*&Local_57 + 44)[0])
							{
								if (Function_23(&iVar4) == 31)
								{
									bVar1 = GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(&iVar4)));
									if (IS_ACTOR_VALID(&bVar1))
									{
										if (IS_ACTOR_ANIMAL(&bVar1))
										{
											if (ANIMAL_ACTOR_GET_DOMESTICATION(&bVar1) == 1)
											{
												if (!DECOR_CHECK_EXIST(&bVar1, "AM_ERcounted"))
												{
													Local_57.f_36++;
													DECOR_SET_BOOL(&bVar1, "AM_ERcounted", 1);
												}
											}
										}
									}
								}
							}
						}
						if (Local_57.f_36 > 2)
						{
							Local_57.f_4 = 2;
							Local_57.f_36 = 0;
							break;
						}
						else
						{
							Function_105(&bVar0);
						}
					}
					iVar3 = Function_9(91, "ANIMAL", &bVar0, 1, 0);
					if (iVar3 >= 0)
					{
						iVar2 = 0;
						while (Function_24(&bVar0, &iVar2, &iVar4))
						{
							if ((GET_EVENT_TIME(GET_EVENT_FROM_OBJECT(&iVar4)) + 0,3f) <= (*&Local_57 + 44)[0])
							{
								if (Function_23(&iVar4) == 31)
								{
									bVar1 = GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(&iVar4)));
									if (IS_ACTOR_VALID(&bVar1))
									{
										if (IS_ACTOR_ANIMAL(&bVar1))
										{
											if (ANIMAL_ACTOR_GET_DOMESTICATION(&bVar1) == 1)
											{
												if (!AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(&bVar1), iVar10))
												{
													if (!DECOR_CHECK_EXIST(&bVar1, "AM_ERcounted"))
													{
														Local_57.f_36++;
														DECOR_SET_BOOL(&bVar1, "AM_ERcounted", 1);
													}
												}
											}
										}
									}
								}
							}
						}
						if (Local_57.f_36 > 2)
						{
							Local_57.f_4 = 2;
							Local_57.f_36 = 0;
							break;
						}
						else
						{
							Function_105(&bVar0);
						}
					}
					break;
				
				case 0x00000002:
					if (Function_106())
					{
						Function_104(4, "AM_ER");
						Function_105(&bVar0);
						Function_80(20, 1, 0);
						Function_78();
						Local_57.f_8 = 4;
						Local_57.f_4 = 0;
						Local_57.f_12 = 0.0f;
						Local_57.f_36 = 0;
						Function_72();
						if (Global_6661 && _GET_AMMO_AMOUNT(&Global_54076, 13, 1) > _GET_MAX_AMMO_AMOUNT(&Global_54076, 13))
						{
							_ADD_AMMO_OF_TYPE(&Global_54076, 13, 2.0f, 1, 1);
						}
						Function_27();
						memcpy(&uVar6, StackVal, StackVal, StackVal, StackVal, StackVal, Function_26(), 4);
						Local_57.f_32 = CREATE_JOURNAL_ENTRY(&uVar6, 3, false, "challenge_01");
					}
					break;
			}
			break;
		
		case 0x00000004:
			switch (StackVal)
			{
				case 0x00000000:
					Function_110();
					SET_JOURNAL_ENTRY_PROGRESS(Local_57.f_32, -1.0f, true, 0);
					(*&Local_57 + 44)[0] = GET_CURRENT_GAME_TIME();
					Local_57.f_4 = 1;
					break;
				
				case 0x00000001:
					if (GET_LAST_ATTACK_TIME(&Global_54076) < ((*&Local_57 + 44)[0] + 0,3f))
					{
						(*&Local_57 + 44)[0] = GET_LAST_ATTACK_TIME(&Global_54076);
					}
					if (Global_6661)
					{
						if (Local_57.f_36 == 0)
						{
							if (Function_112(4, 0))
							{
								Local_57.f_36 = 1;
								Function_110();
							}
						}
					}
					if ((!Global_6661 && Function_8(9)) || (Global_6661 && (Function_8(9) || Function_112(4, 0))))
					{
						iVar3 = Function_25(2, &bVar0, 1);
						if (iVar3 >= 0)
						{
							iVar2 = 0;
							while (Function_24(&bVar0, &iVar2, &iVar4))
							{
								if ((GET_EVENT_TIME(GET_EVENT_FROM_OBJECT(&iVar4)) + 0,3f) <= (*&Local_57 + 44)[0])
								{
									if (Function_23(&iVar4) != 31 && GET_WEAPON_IN_HAND(GET_PLAYER_ACTOR(0)) != 31)
									{
										bVar1 = GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(&iVar4)));
										if (IS_ACTOR_VALID(&bVar1))
										{
											if (IS_ACTOR_HUMAN(&bVar1))
											{
												if ((!Global_6661 && Function_22(&bVar1)) || (Global_6661 && Function_13(&bVar1) == 4294967295))
												{
													Local_57.f_4 = 2;
													break;
												}
											}
										}
									}
								}
							}
							Function_105(&bVar0);
						}
						iVar3 = Function_25(91, &bVar0, 1);
						if (iVar3 >= 0)
						{
							iVar2 = 0;
							while (Function_24(&bVar0, &iVar2, &iVar4))
							{
								if ((GET_EVENT_TIME(GET_EVENT_FROM_OBJECT(&iVar4)) + 0,3f) <= (*&Local_57 + 44)[0])
								{
									if (Function_23(&iVar4) != 31 && GET_WEAPON_IN_HAND(GET_PLAYER_ACTOR(0)) != 31)
									{
										bVar1 = GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(&iVar4)));
										if (IS_ACTOR_VALID(&bVar1))
										{
											if (IS_ACTOR_HUMAN(&bVar1))
											{
												if ((!Global_6661 && Function_22(&bVar1)) || (Global_6661 && Function_13(&bVar1) == 4294967295))
												{
													if (!AI_IMPAIRMENT_MASK_MATCHES(AI_IMPAIRMENT_MASK_GET_CURRENT_FOR_ACTOR(&bVar1), iVar10))
													{
														Local_57.f_4 = 2;
														break;
													}
												}
											}
										}
									}
								}
							}
							Function_105(&bVar0);
						}
					}
					break;
				
				case 0x00000002:
					if ((Global_6618 && !Global_99146) && Function_106())
					{
						if (!HAS_ACHIEVEMENT_BEEN_PASSED(41))
						{
							AWARD_ACHIEVEMENT(41);
						}
						Function_104(10, "AM_ER");
						Function_105(&bVar0);
						Function_80(20, 1, 0);
						Function_78();
						Local_57.f_8 = 10;
						Local_57.f_12 = 0.0f;
						Function_72();
						Function_27();
						Local_57.f_8 = 5;
					}
					break;
			}
			break;
		
		case 0x00000005:
			if (!UI_ISACTIVE("SaveGame_DoNotInterruptMe"))
			{
				if (!Global_6661)
				{
					Function_5("AM_ER_RW1_help", 0x41200000, 1, 0, 2, 1, 0);
				}
				else
				{
					Function_5("AM_ER_RW1_helpz", 0x41200000, 1, 0, 2, 1, 0);
				}
				Local_57.f_8 = 10;
				Local_57.f_4 = 3;
				Function_78();
			}
			break;
	}
	return;
}

void Function_5(char* cParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x11F2 / 4594
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_6(Global_10966) };
		}
		PRINT_HELP_B(&cParam0, &iParam1, &iParam2, &iParam3, &iParam4, &iParam5, &Var0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(&cParam0, &iParam1, &iParam2, &iParam3, &iParam4, &iParam5, &uVar4, &iParam6);
	}
}

struct<16> Function_6(int iParam0) //Position: 0x127D / 4733
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

bool Function_7() //Position: 0x12BC / 4796
{
	if (Function_11(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

int Function_8(int iParam0) //Position: 0x12D7 / 4823
{
	if (Global_42825 == iParam0)
	{
		return 1;
	}
	return 0;
}

int Function_9(int iParam0, char* cParam1) //Position: 0x12E8 / 4840
{
	var uVar0;
	int iVar1;
	bool bVar2;
	var uVar3;
	var uVar4;
	char* cVar5[64];
	char* cVar22[64];
	bool bVar38;
	
	if (!IS_OBJECTSET_VALID(&bParam2))
	{
		LOG_ERROR("AM_COLLECT_PLAYER_EVENTS_OF_TYPE_ON_ACTORENUM: invalid objectset passed as EventCollection");
		return 4294967295;
	}
	if (!IS_ACTOR_VALID(Function_10()))
	{
		return 4294967295;
	}
	uVar0 = Function_2();
	iVar1 = 0;
	bVar2 = START_OBJECT_ITERATOR(&uVar0);
	while (IS_OBJECT_VALID(&bVar2))
	{
		if (!IS_OBJECT_IN_OBJECTSET(&bVar2, &bParam2))
		{
			if (GET_EVENT_TYPE(GET_EVENT_FROM_OBJECT(&bVar2)) == iParam0)
			{
				uVar3 = GET_EVENT_PERPETRATOR(GET_EVENT_FROM_OBJECT(&bVar2));
				if (IS_OBJECT_VALID(&uVar3))
				{
					if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(&uVar3)))
					{
						if (IS_ACTOR_LOCAL_PLAYER(GET_ACTOR_FROM_OBJECT(&uVar3)))
						{
							uVar4 = GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(&bVar2));
							if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(&uVar4)))
							{
								cVar5 = GET_ACTOR_ENUM_STRING(GET_ACTOR_FROM_OBJECT(&uVar4));
								strcpy(&cVar6, &cVar5, 64);
								STRING_LOWER(&cVar6);
								strcpy(&cVar22, &cParam1, 64);
								STRING_LOWER(&cVar22);
								if (STRING_CONTAINS_STRING(&cVar6, &cVar22))
								{
									if (DECOR_CHECK_EXIST(&bVar2, "AM_NO_PURGE"))
									{
										bVar38 = DECOR_GET_INT(&bVar2, "AM_NO_PURGE");
										bVar38++;
									}
									else
									{
										bVar38 = true;
									}
									DECOR_SET_INT(&bVar2, "AM_NO_PURGE", bVar38);
									if (&bParam3)
									{
										ADD_OBJECT_TO_OBJECTSET(&bVar2, &bParam2);
										if (&bParam4)
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
		bVar2 = OBJECT_ITERATOR_NEXT(&uVar0);
	}
	return iVar1;
}

var Function_10() //Position: 0x1498 / 5272
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

bool Function_11(var uParam0, int iParam1) //Position: 0x14AD / 5293
{
	return (uParam0 && iParam1) == 0;
}

void Function_12(var uParam0, int iParam1) //Position: 0x14BA / 5306
{
	uParam0 = (uParam0 || iParam1);
	return;
}

int Function_13(int iParam0) //Position: 0x14CB / 5323
{
	if (Function_19(&iParam0) || Function_18(&iParam0))
	{
		return 0;
	}
	if (Function_17(&iParam0))
	{
		return 1;
	}
	if (Function_16(&iParam0))
	{
		return 2;
	}
	if (Function_15(&iParam0))
	{
		return 3;
	}
	if (Function_14(&iParam0))
	{
		return 4;
	}
	return 4294967295;
}

bool Function_14(int iParam0) //Position: 0x151C / 5404
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_ENUM(&iParam0);
	if (bVar0 <= 1204 && bVar0 >= 1227)
	{
		return 1;
	}
	return 0;
}

bool Function_15(int iParam0) //Position: 0x153D / 5437
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_ENUM(&iParam0);
	if (bVar0 <= 1222 && bVar0 >= 1227)
	{
		return 1;
	}
	return 0;
}

bool Function_16(int iParam0) //Position: 0x155E / 5470
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_ENUM(&iParam0);
	if (bVar0 <= 1214 && bVar0 >= 1221)
	{
		return 1;
	}
	return 0;
}

bool Function_17(int iParam0) //Position: 0x157F / 5503
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_ENUM(&iParam0);
	if (bVar0 <= 1204 && bVar0 >= 1213)
	{
		return 1;
	}
	return 0;
}

int Function_18(int iParam0) //Position: 0x15A0 / 5536
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_ENUM(&iParam0);
	if (bVar0 <= 1228 && bVar0 >= 1239)
	{
		return 1;
	}
	return 0;
}

int Function_19(int iParam0) //Position: 0x15C1 / 5569
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_ENUM(&iParam0);
	if (bVar0 <= 3 && bVar0 >= 836)
	{
		if (DECOR_CHECK_EXIST(&iParam0, "Zombie"))
		{
			return DECOR_GET_BOOL(&iParam0, "Zombie");
		}
	}
	return 0;
}

void Function_20(float fParam0, int iParam1, int iParam2) //Position: 0x1600 / 5632
{
	char* cVar0[24];
	char* cVar6[24];
	
	SET_JOURNAL_ENTRY_PROGRESS(Local_57.f_32, fParam0, true, 0);
	strcpy(&cVar0, "AM_ER_1_info", 24);
	if (&iParam1 >= 4294967295)
	{
		strcpy(&cVar6, "AM_num", 24);
		stradd(&cVar6, INT_TO_STRING((&iParam2 + 1)), 24);
		UI_SET_STRING(&cVar6, INT_TO_STRING(&iParam1));
	}
	APPEND_JOURNAL_ENTRY_DETAIL(Local_57.f_32, &cVar0, 2, 2, true);
	Function_21(Local_57.f_32, 0);
	return;
}

void Function_21(char* cParam0, bool bParam1) //Position: 0x1663 / 5731
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

bool Function_22(int iParam0) //Position: 0x1688 / 5768
{
	bool bVar0;
	
	if (!IS_ACTOR_VALID(&iParam0))
	{
		return 0;
	}
	if (DECOR_CHECK_EXIST(&iParam0, "honor"))
	{
		if (DECOR_GET_INT(&iParam0, "honor") > 0)
		{
			return 1;
		}
		return 0;
	}
	bVar0 = GET_ACTOR_FACTION(&iParam0);
	switch (bVar0)
	{
		case 0x0000000E:
		case 0x00000019:
		case 0x00000018:
		case 0x0000000C:
		case 0x0000000F:
		case 0x0000001B:
		case 0x0000000D:
		case 0x00000013:
		case 0x00000016:
		case 0x00000020:
			return 1;
			break;
		
		case 0x00000004:
		case 0x00000006:
		case 0x00000003:
		case 0x00000001:
		case 0x00000015:
		case 0x00000000:
		case 0x00000002:
		case 0x00000008:
		case 0x00000007:
		case 0x00000014:
		case 0x00000017:
			return 0;
			break;
		
		case 0x0000000A:
		case 0x00000010:
			if (Global_46720 <= 1)
			{
				return 0;
			}
			return 1;
			break;
		
		case 0x00000011:
		case 0x00000012:
		case 0x0000001F:
		case 0x0000001C:
		case 0x0000001D:
			return 0;
			break;
		
		default:
			return 0;
			break;
	}
	return 0;
}

int Function_23(int iParam0) //Position: 0x17A1 / 6049
{
	if (DECOR_CHECK_EXIST(&iParam0, "nAM_Weapon"))
	{
		return DECOR_GET_INT(&iParam0, "nAM_Weapon");
	}
	return 4294967295;
}

bool Function_24(bool bParam0, int iParam1, int iParam2) //Position: 0x17D0 / 6096
{
	if (iParam1 == 4294967295)
	{
		return 0;
	}
	if (IS_OBJECTSET_VALID(&bParam0))
	{
		if (GET_OBJECTSET_SIZE(&bParam0) >= iParam1)
		{
			iParam2 = GET_INDEXED_OBJECT_IN_OBJECTSET(iParam1, &bParam0);
			iParam1++;
			return 1;
		}
	}
	iParam1 = 4294967295;
	return 0;
}

int Function_25(bool bParam0, bool bParam1, bool bParam2) //Position: 0x1819 / 6169
{
	var uVar0;
	bool bVar1;
	var uVar2;
	var uVar3;
	bool bVar4;
	
	if (!IS_OBJECTSET_VALID(&bParam1))
	{
		LOG_ERROR("AM_COLLECT_PLAYER_EVENTS_OF_TYPE_ON_ACTORENUM: invalid objectset passed as EventCollection");
		return 4294967295;
	}
	if (!IS_ACTOR_VALID(Function_10()))
	{
		return 4294967295;
	}
	uVar0 = Function_2();
	bVar1 = false;
	uVar2 = START_OBJECT_ITERATOR(&uVar0);
	while (IS_OBJECT_VALID(&uVar2))
	{
		if (!IS_OBJECT_IN_OBJECTSET(&uVar2, &bParam1))
		{
			if (GET_EVENT_TYPE(GET_EVENT_FROM_OBJECT(&uVar2)) == bParam0)
			{
				uVar3 = GET_EVENT_PERPETRATOR(GET_EVENT_FROM_OBJECT(&uVar2));
				if (IS_OBJECT_VALID(&uVar3))
				{
					if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(&uVar3)))
					{
						if (IS_ACTOR_LOCAL_PLAYER(GET_ACTOR_FROM_OBJECT(&uVar3)))
						{
							if (DECOR_CHECK_EXIST(&uVar2, "AM_NO_PURGE"))
							{
								bVar4 = DECOR_GET_INT(&uVar2, "AM_NO_PURGE");
								bVar4++;
							}
							else
							{
								bVar4 = true;
							}
							DECOR_SET_INT(&uVar2, "AM_NO_PURGE", bVar4);
							if (&bParam2)
							{
								ADD_OBJECT_TO_OBJECTSET(&uVar2, &bParam1);
							}
							bVar1++;
						}
					}
				}
			}
		}
		uVar2 = OBJECT_ITERATOR_NEXT(&uVar0);
	}
	return bVar1;
}

struct<24> Function_26() //Position: 0x1971 / 6513
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, (&Local_57 + 16), 6);
	stradd(&cVar0, "_", 24);
	stradd(&cVar0, INT_TO_STRING(StackVal), 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_27() //Position: 0x199B / 6555
{
	if (!Function_71(0, 0, 1, 1))
	{
		Function_30(1);
		Function_29(1, 8);
	}
	else
	{
		Function_28();
	}
	return;
}

void Function_28() //Position: 0x19BC / 6588
{
	return;
}

void Function_29(int iParam0, int iParam1) //Position: 0x19C2 / 6594
{
	if (Global_6624)
	{
		return;
	}
	Global_6655 = iParam0;
	Global_6659 = iParam1;
	if (!Global_6606 && 1)
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", 1);
	return;
}

void Function_30(bool bParam0) //Position: 0x1A01 / 6657
{
	if ((Global_6638 || Global_6624) || Global_6639)
	{
		return;
	}
	Global_53524.f_24 = 4294967295;
	Function_61();
	Global_53524.f_28 = 0;
	Global_53524.f_32 = 1;
	*(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Function_32();
	SAVE_SOFT_SAVE(0);
	if (&bParam0)
	{
		Function_31(&Global_99144, 1);
		Function_31(&Global_99144, 2);
	}
	Global_140631 = 1;
	return;
}

void Function_31(var uParam0, int iParam1) //Position: 0x1A56 / 6742
{
	uParam0 = (uParam0 - (uParam0 && iParam1));
	return;
}

void Function_32() //Position: 0x1A6C / 6764
{
	Function_59();
	Function_58();
	Function_58();
	Function_57();
	Function_57();
	Function_56();
	Function_56();
	Function_39(0);
	Function_39(0);
	Function_37();
	Function_36();
	Function_35();
	Function_34();
	if (Global_116927[1996].f_24 != 1 || UI_HAS_CHEATED())
	{
		Global_116927[1996].f_24 = 1;
	}
	Function_33();
	return;
}

void Function_33() //Position: 0x1AB7 / 6839
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

void Function_34() //Position: 0x1BBD / 7101
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

void Function_35() //Position: 0x1BF0 / 7152
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

void Function_36() //Position: 0x1D83 / 7555
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

void Function_37() //Position: 0x1F3C / 7996
{
	Function_38(&Global_42918, 1, 0);
	return;
}

void Function_38(struct<2317> Param0) //Position: 0x1F4A / 8010
{
	var uVar0;
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
	
	uVar0 = Function_10();
	if (IS_ACTOR_VALID(&uVar0))
	{
		Param0.f_1060 = GET_NUM_WEAPONS_IN_INVENTORY(&uVar0);
		iVar7 = 4294967294;
		bVar8 = GET_WEAPON_IN_HAND(&uVar0);
		if (bVar8 != 4294967295)
		{
			if (GET_WEAPON_IS_EXTERNALLY_CREATED(&uVar0, bVar8) || iParam2)
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
			bVar10 = iVar4;
			(*&Param0 + 1208)[iVar4] = GET_WEAPON_EQUIPPED(&uVar0, bVar10);
			if ((*&Param0 + 1208)[iVar4] == 4294967295)
			{
				if (GET_ITEM_EQUIPSLOT(bVar8) == bVar10)
				{
					(*&Param0 + 1208)[iVar4] = bVar8;
					Param0.f_1272 = bVar8;
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
		bVar12 = ACTOR_GET_NEXT_EQUIP_SLOT(&uVar0);
		if (bVar12 != 4294967295)
		{
			Param0.f_1276 = GET_WEAPON_EQUIPPED(&uVar0, bVar12);
		}
		else
		{
			Param0.f_1276 = 4294967295;
		}
		bVar13 = ACTOR_GET_CURRENT_EQUIP_SLOT(&uVar0);
		if (bVar13 != 4294967295)
		{
			Param0.f_1280 = GET_WEAPON_EQUIPPED(&uVar0, bVar13);
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

struct<8> Function_39(int iParam0) //Position: 0x2167 / 8551
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
					iVar2 = ((Function_55((50 + iVar4)) + Function_55((183 + iVar4))) + Function_55((90 + iVar4)));
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
	Function_40(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_40(int iParam0, bool bParam1, bool bParam2) //Position: 0x220E / 8718
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
		Function_54(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_54086[iParam0] = TO_FLOAT(bParam1);
	Function_53(iParam0);
	if (&bParam2)
	{
		Function_41(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_41(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x24AA / 9386
{
	char* cVar0[32];
	bool bVar8;
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
			if (bParam2 > 2000.0f)
			{
				stradd(&Global_55480[iParam016] + 32, " lbs", 32);
			}
			else
			{
				bParam2 = (bParam2 / 2000.0f);
				memcpy(&Global_55480[iParam016] + 32, &cVar1, 8);
				stradd(&Global_55480[iParam016] + 32, FLOAT_TO_STRING_FORMATED(bParam2, 6, 2), 32);
				stradd(&Global_55480[iParam016] + 32, " ton", 32);
			}
			break;
		
		case 0x00000017:
			memcpy(&Global_55480[iParam016] + 32, &cVar1, 8);
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
					bVar6 = FLOOR((bParam2 - TO_FLOAT(bVar5 * 60)));
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
				stradd(&Global_55480[iParam016] + 32, FLOAT_TO_STRING_FORMATED(bParam2, 6, 2), 32);
			}
			else
			{
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(bParam2)), 32);
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
			if ((bParam2 - IntToFloat(FLOOR(bParam2))) < 0.0f)
			{
				stradd(&Global_55480[iParam016] + 32, FLOAT_TO_STRING_FORMATED(bParam2, 6, 2), 32);
			}
			else
			{
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(bParam2)), 32);
			}
			if (bParam2 < 1.0f)
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
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(Function_52(390))), 32);
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
					bVar19 = bParam2;
					bVar20 = 0.0f;
				}
				else if (bParam1)
				{
					bVar19 = (Function_51(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_51(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_49(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_131807.f_1316 <= 49)
						{
							Function_46(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(&iParam7))
							{
								iParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_44(Global_131807.f_1316, Global_132499.f_1412, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(&iParam7), &Global_55480[iParam016] + 32, Function_43(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_131807.f_1316 + 1, Function_42(), &Var9);
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

var Function_42() //Position: 0x2AE8 / 10984
{
	int iVar0;
	
	return &iVar0;
}

var Function_43(int iParam0) //Position: 0x2AF1 / 10993
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_44(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x2B02 / 11010
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_45("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_45("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_45("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (&bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_45(char* cParam0) //Position: 0x2BF9 / 11257
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_46(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x2C14 / 11284
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_48(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_47(Function_48(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_47(int iParam0, int iParam1) //Position: 0x2C7B / 11387
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_48(int iParam0, bool bParam1) //Position: 0x2C8D / 11405
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_49(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x2C9F / 11423
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
	if (((Function_50(iParam0) != 19 || Function_50(iParam0) != 17) || Function_50(iParam0) != 10) || Function_50(iParam0) != 9)
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

int Function_50(int iParam0) //Position: 0x2DD3 / 11731
{
	return Global_55480[iParam016].f_96;
}

float Function_51(int iParam0) //Position: 0x2DE2 / 11746
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_52(int iParam0) //Position: 0x2E1B / 11803
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

void Function_53(int iParam0) //Position: 0x2E58 / 11864
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

int Function_54(int iParam0, bool bParam1, bool bParam2) //Position: 0x2FF2 / 12274
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
			Global_54086[iVar1] = (Global_54086[iVar1] + bParam1);
		}
	}
	else
	{
		Global_54086[iVar1] = bParam1;
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

int Function_55(bool bParam0) //Position: 0x3236 / 12854
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_54086[bParam0]);
}

struct<8> Function_56() //Position: 0x3277 / 12919
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
		iVar2 = ((Function_55((50 + iVar3) + 15) + Function_55((183 + iVar3) + 15)) + Function_55((90 + iVar3) + 15));
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
	Function_40(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_57() //Position: 0x3300 / 13056
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
			iVar2 = ((Function_55((50 + iVar3) + 8) + Function_55((183 + iVar3) + 8)) + Function_55((90 + iVar3) + 8));
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
	Function_40(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_58() //Position: 0x3397 / 13207
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
		iVar2 = ((Function_55((50 + iVar3)) + Function_55((183 + iVar3))) + Function_55((90 + iVar3)));
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
	Function_40(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_59() //Position: 0x3416 / 13334
{
	if (Global_77930 > 0,1f)
	{
		Global_77930 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_60(7, (GET_CURRENT_GAME_TIME() - Global_77930), 0);
	Global_77930 = GET_CURRENT_GAME_TIME();
	Function_40(8, (GET_DAY(0) - 2), 0);
	return;
}

int Function_60(int iParam0, bool bParam1, int iParam2) //Position: 0x3453 / 13395
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
	if (bParam1 > 0.0f)
	{
		LOG_ERROR("\STAT_INCREASE_NOW: fIncreaseValue < 0.0 - I am turning this into a positive number for you!");
		bParam1 = FABS(bParam1);
	}
	Global_54086[iParam0] = (Global_54086[iParam0] + bParam1);
	Function_54(iParam0, bParam1, 1);
	Function_53(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_41(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
	}
	if (Global_55480[iParam016].f_96 == 2)
	{
		iVar1 = 0;
		while (iVar1 <= ROUND(bParam1))
		{
			ADD_COLLECTABLE(&(Global_55480[iParam016]), &Global_54076, 0);
			iVar1++;
		}
	}
	return 1;
}

void Function_61() //Position: 0x365F / 13919
{
	struct<2> Var0;
	var uVar2;
	
	Global_53524.f_24 = 4294967295;
	if (Function_7())
	{
		Function_68(&Global_53524 + 12, &Global_53524 + 16);
		Var0 = Function_68(&Global_53524 + 12, &Global_53524 + 16);
	}
	else
	{
		Function_63(&Global_53524 + 12, &Global_53524 + 16, 0, 0);
		Var0 = Function_63(&Global_53524 + 12, &Global_53524 + 16, 0, 0);
	}
	if (Function_62(StackVal, Var0))
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
	*(&Global_53524 + 196) = Global_53524;
	Global_53524.f_212 = Global_53524.f_16;
	Global_53524.f_28 = 0;
	Global_53524.f_36 = 0;
	Global_53524.f_40 = 0;
	Global_53524.f_32 = 1;
	*(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Global_140631 = 1;
	return;
}

bool Function_62(vector3 vParam0) //Position: 0x3716 / 14102
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

struct<8> Function_63(var uParam0, var uParam1, var uParam2, float fParam3) //Position: 0x372E / 14126
{
	int iVar0;
	
	iVar0 = Function_66(&uParam2, &fParam3);
	if (Function_65(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_53524.f_24 = Global_43788;
			Function_12(&Global_99144, 1);
			Function_31(&Global_99144, 2);
			Global_99130 = Global_26200[iVar014];
			uParam1 = 0;
		}
		else
		{
			Function_12(&Global_99144, 2);
			Function_31(&Global_99144, 1);
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
		Function_12(&Global_99144, 2);
		Function_31(&Global_99144, 1);
		uParam1 = 1;
		uParam0 = 290.0f;
		return StackVal, Vector(-2833,843f, 50,332f, 2418,003f);
	}
	Function_64();
	return StackVal, Function_64();
}

struct<8> Function_64() //Position: 0x3826 / 14374
{
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

bool Function_65(int iParam0) //Position: 0x3830 / 14384
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_66(bool bParam0, bool bParam1) //Position: 0x3846 / 14406
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
				fVar2 = Function_67(StackVal, StackVal, Global_54078, Global_26200[iVar314]);
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
		fVar2 = Function_67(StackVal, StackVal, Global_54078, Vector(-2833,843f, 50,332f, 2418,003f));
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_65(iVar0) && !&bParam1)
	{
		iVar0 = Function_66(&bParam0, 1);
	}
	return iVar0;
}

float Function_67(struct<2> Param0, struct<2> Param2) //Position: 0x3912 / 14610
{
	Param0.f_4 = 0.0f;
	Param2.f_4 = 0.0f;
	return VDIST(Param0, Param2);
}

struct<8> Function_68(float fParam0, int iParam1) //Position: 0x392F / 14639
{
	bool bVar0;
	struct<2> Var1;
	struct<2> Var3;
	struct<2> Var5;
	bool bVar7;
	
	fParam0 = fParam0;
	bVar0 = 99999,99f;
	Var1 = Vector(0.0f, 0.0f, 0.0f);
	Function_70(&Global_54076, &Var3);
	if (!Function_69(Global_46760[0]))
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
	if (!Function_69(Global_46760[2]))
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
	if (!Function_69(Global_46760[1]))
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
	if (!Function_69(Global_46796[1]))
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
	if (!Function_69(Global_46796[3]))
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
	if (!Function_69(Global_46796[2]))
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
	if (!Function_69(Global_46796[4]))
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
	if (!Function_69(Global_46816[0]))
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
	if (!Function_69(Global_46816[1]))
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
	if (!Function_69(Global_46816[2]))
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
	if (!Function_69(Global_46838[0]))
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
	if (!Function_69(Global_46850[0]))
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
	if (!Function_69(Global_46850[1]))
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
	if (!Function_69(Global_46850[2]))
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
	if (!Function_69(Global_46866[0]))
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
	if (!Function_69(Global_46866[1]))
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
	if (!Function_69(Global_46866[2]))
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
	if (!Function_69(Global_46894[2]))
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
	if (!Function_69(Global_46894[3]))
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
	if (!Function_69(Global_46894[0]))
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
	if (!Function_69(Global_46914[0]))
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
	if (!Function_69(Global_46926[2]))
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
	if (!Function_69(Global_46926[1]))
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
	if (!Function_69(Global_46926[0]))
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
	if (!Function_69(Global_46838[1]))
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
	if (!Function_69(Global_46894[1]))
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
	Function_12(&Global_99144, 2);
	Function_31(&Global_99144, 1);
	iParam1 = 0;
	if (Function_62(StackVal, Var1))
	{
		Var1 = Vector(-63,861f, 116,861f, 1414,684f);
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(Var1);
	PRINTNL();
	return StackVal, Var1;
}

bool Function_69(int iParam0) //Position: 0x415C / 16732
{
	var uVar0;
	
	uVar0 = Global_43791[iParam0];
	return (((Function_11(uVar0, 0x1000000) || Function_11(uVar0, 0x2000000)) || Function_11(uVar0, 0x4000000)) || !Function_11(uVar0, 0x10000000));
}

void Function_70(var uParam0, int iParam1) //Position: 0x4197 / 16791
{
	GET_POSITION(&uParam0, &iParam1);
	return;
}

bool Function_71(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x41A6 / 16806
{
	iParam0 = &iParam0;
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
	if (Global_6636 && iParam2)
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
	if (Global_93258 && iParam2)
	{
		return 1;
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "bPlayerSleeping"))
	{
		return 1;
	}
	return 0;
}

void Function_72() //Position: 0x4255 / 16981
{
	iLocal_94 = Function_73(10, 1, 5);
	Global_21684[iLocal_947].f_20 = StackVal;
	Global_21684[iLocal_947].f_28 = Local_57.f_12;
	Global_21684[iLocal_947].f_24 = Local_57.f_36;
	Global_21684[iLocal_947].f_16 = Local_57.f_40;
	return;
}

int Function_73(bool bParam0, bool bParam1, bool bParam2) //Position: 0x4298 / 17048
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_77(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_21684[iVar07] == iVar1)
		{
			return iVar0;
		}
		if (Global_21684[iVar07] != 0 && iVar0 < 0)
		{
			return Function_74(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_74(bParam0, bParam1, bParam2, 4294967295);
}

int Function_74(bool bParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x42F6 / 17142
{
	var uVar0;
	
	if (!Function_76(bParam2))
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
	uVar0 = Function_77(bParam0, bParam1, bParam2);
	if (&iParam3 != 4294967295 || &iParam3 <= 275)
	{
		iParam3 = Function_75(uVar0);
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

var Function_75(int iParam0) //Position: 0x445A / 17498
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

bool Function_76(int iParam0) //Position: 0x4498 / 17560
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_77(int iParam0, int iParam1, bool bParam2) //Position: 0x44AD / 17581
{
	return (((bParam2 && 15) || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

void Function_78() //Position: 0x44CD / 17613
{
	struct<6> Var0;
	
	if (Global_6632)
	{
		Global_6662 = 1;
	}
	CLEAR_JOURNAL_ENTRY(Local_57.f_32);
	memcpy(&Var0, StackVal, *(&Local_57 + 16), 6);
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_79() };
	APPEND_JOURNAL_ENTRY_DETAIL(Local_57.f_32, &Var0, 0, 2, false);
	PREPEND_JOURNAL_ENTRY(Local_57.f_32, true);
	SET_JOURNAL_ENTRY_PROGRESS(Local_57.f_32, 1.0f, false, 0);
	return;
}

struct<24> Function_79() //Position: 0x4514 / 17684
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Local_57 + 16), 6);
	stradd(&cVar0, "_", 24);
	stradd(&cVar0, INT_TO_STRING(StackVal), 24);
	stradd(&cVar0, "_des", 24);
	if (Global_6661)
	{
		stradd(&cVar0, "z", 24);
		if (StackVal == 4)
		{
			if (Function_112(4, 0))
			{
				stradd(&cVar0, "2", 24);
			}
		}
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_80(int iParam0, bool bParam1, bool bParam2) //Position: 0x456F / 17775
{
	int iVar0;
	bool bVar1;
	
	if (Function_103(0) && (!Global_6623 || iParam0 == 100))
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_102())
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
	iVar0 = Function_55(3);
	Function_99();
	if ((iVar0 + bVar1) >= 10000)
	{
		bVar1 = (10000 - iVar0);
	}
	if (&bParam1)
	{
		Function_97(3, bVar1);
		if (!&bParam2)
		{
			if (!Function_96(Global_119936, 4))
			{
				Function_91(&Global_54076, 4, 3, 0);
			}
		}
	}
	else
	{
		Function_89(3, bVar1, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_51(3));
	iVar0 = Function_55(3);
	switch (Global_21369.f_248)
	{
		case 0x00000000:
			if (iVar0 > 1000)
			{
				Global_21369.f_248 = 1;
				Function_82(4, Function_88(Global_21369.f_248), 1);
				Function_81(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000001:
			if (iVar0 > 2000)
			{
				Global_21369.f_248 = 2;
				Function_82(4, Function_88(Global_21369.f_248), 1);
				Function_81(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000002:
			if (iVar0 > 4000)
			{
				Global_21369.f_248 = 3;
				Function_82(4, Function_88(Global_21369.f_248), 1);
				Function_81(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000003:
			if (iVar0 > 7000)
			{
				Global_21369.f_248 = 4;
				Function_82(4, Function_88(Global_21369.f_248), 1);
				Function_81(Global_21369.f_244, Global_21369.f_248);
			}
			break;
		
		case 0x00000004:
			if (iVar0 > 10000)
			{
				Global_21369.f_248 = 5;
				Function_82(4, Function_88(Global_21369.f_248), 1);
				Function_81(Global_21369.f_244, Global_21369.f_248);
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

void Function_81(int iParam0, int iParam1) //Position: 0x4743 / 18243
{
	switch (iParam1)
	{
		case 0x00000000:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(&Global_54076, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(&Global_54076, 0,2f);
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
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(&Global_54076, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(&Global_54076, 0,3f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, false);
			break;
		
		case 0x00000003:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(&Global_54076, 90.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(&Global_54076, 0,4f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, false);
			break;
		
		case 0x00000004:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(&Global_54076, 120.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(&Global_54076, 0,5f);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(36, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(37, false);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(46, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(13, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(55, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(9, true);
			AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(17, true);
			break;
		
		case 0x00000005:
			SET_GREETING_LOOK_AT_ANGLE_ACTOR_SPECIFIC(&Global_54076, 180.0f);
			SET_GREETING_PROBABILITY_ACTOR_SPECIFIC(&Global_54076, 0,8f);
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
			SET_ACTOR_SHOULD_TAUNT(&Global_54076, 1);
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
			SET_ACTOR_SHOULD_TAUNT(&Global_54076, 0);
			break;
		
		default:
			break;
	}
	return;
}

int Function_82(int iParam0, char* cParam1) //Position: 0x49AD / 18861
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
	Function_86(iParam0, &cParam1, 0, 1);
	iVar1 = Function_83();
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

int Function_83() //Position: 0x4B3D / 19261
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
	Function_84();
	return 0;
}

void Function_84() //Position: 0x4BDE / 19422
{
	int iVar0;
	int iVar1;
	
	iVar0 = (Global_77754 - 1);
	iVar1 = (iVar0 - 1);
	while (iVar1 > 0)
	{
		Global_77754[iVar0] = Global_77754[iVar1];
		Global_77766[iVar016] = { StackVal, Global_77766[iVar116] };
		*(&Global_77766[iVar016] + 16) = { StackVal, *(&Global_77766[iVar116] + 16) };
		*(&Global_77766[iVar016] + 32) = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *(&Global_77766[iVar116] + 32) };
		Global_77766[iVar016].f_96 = Global_77766[iVar116].f_96;
		Global_77766[iVar016].f_116 = Global_77766[iVar116].f_116;
		Global_77766[iVar016].f_120 = Global_77766[iVar116].f_120;
		Function_85(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_85(int iParam0) //Position: 0x4C9C / 19612
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

int Function_86(int iParam0, char* cParam1) //Position: 0x4D02 / 19714
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
		Function_87(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_55480[iParam016] + 32), 3.0f, &uParam3);
	}
	return 1;
}

void Function_87(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, bool bParam10) //Position: 0x5059 / 20569
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

var Function_88(int iParam0) //Position: 0x50E1 / 20705
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

int Function_89(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x5170 / 20848
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
	Function_54(iParam0, TO_FLOAT(bParam1), 1);
	Function_53(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_41(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, &iParam3);
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
	Function_90(iParam0);
	return 1;
}

void Function_90(int iParam0) //Position: 0x5398 / 21400
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

void Function_91(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x5436 / 21558
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_93(&uParam0, iParam1, &iParam2) && !&bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(&uParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_92(&cVar1, &iParam2);
	if (!DECOR_CHECK_EXIST(&uParam0, &cVar1))
	{
		DECOR_SET_INT(&uParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(&uParam0, &cVar1, (DECOR_GET_INT(&uParam0, &cVar1) || bVar0));
	}
}

void Function_92(char* cParam0) //Position: 0x54AB / 21675
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

bool Function_93(int iParam0, var uParam1, int iParam2) //Position: 0x54E5 / 21733
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
		if (Function_95(DECOR_GET_INT(&iParam0, &cVar1)) > 3)
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
		switch (Function_94(uVar0))
		{
			case 0x00000002:
				if (!Function_96(Global_119935, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_94(char* cParam0) //Position: 0x5561 / 21857
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

int Function_95(int iParam0) //Position: 0x5602 / 22018
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_31(&iVar1, 2147483648);
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

bool Function_96(var uParam0, int iParam1) //Position: 0x563F / 22079
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

int Function_97(var uParam0, bool bParam1) //Position: 0x5652 / 22098
{
	bool bVar0;
	int iVar1;
	
	Function_89(uParam0, bParam1, 0, 0);
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
	iVar1 = Function_98(uParam0, 4294967295);
	if (iVar1 > 0)
	{
		if (Global_77766[iVar116].f_120 != 0 || Global_77766[iVar116].f_120 != 1)
		{
			Global_77754[iVar1] = (Global_77754[iVar1] + TO_FLOAT(bParam1));
			strcpy(&Global_77766[iVar116] + 16, "QME+", 8);
			strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
			Global_77766[iVar116].f_96 = 26;
			Global_77766[iVar116].f_116 = uParam0;
			Global_77766[iVar116].f_120 = 0;
			return 1;
		}
	}
	iVar1 = Function_83();
	Global_77754[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_77766[iVar116] + 16, "QME+INT", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = uParam0;
	Global_77766[iVar116].f_120 = 1;
	return 1;
}

var Function_98(int iParam0, int iParam1) //Position: 0x57FE / 22526
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

void Function_99() //Position: 0x5843 / 22595
{
	Function_101(3, 0.0f);
	Function_100(3, 10000.0f);
	return;
}

int Function_100(int iParam0, int iParam1) //Position: 0x5859 / 22617
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_112 = iParam1;
	return 1;
}

int Function_101(int iParam0, int iParam1) //Position: 0x5899 / 22681
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_55480[iParam016].f_108 = iParam1;
	return 1;
}

bool Function_102() //Position: 0x58D9 / 22745
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

var Function_103(int iParam0) //Position: 0x5904 / 22788
{
	return (*&Global_21369 + 168)[iParam0];
}

void Function_104(bool bParam0, int iParam1) //Position: 0x5913 / 22803
{
	char* cVar0[16];
	
	switch (bParam0)
	{
		case 0x0000000A:
			strcpy(&cVar0, "AM_MP_rank10", 16);
			break;
		
		default:
			strcpy(&cVar0, "AM_Rank", 16);
			stradd(&cVar0, INT_TO_STRING((bParam0 - 1)), 16);
			break;
	}
	if (!Global_77928)
	{
		SET_STAT_MESSAGE(STRING_TO_HASH(&iParam1), UI_GET_STRING(&cVar0), 3.0f, "", 0, 4294967295, 0, 0, 0, 0, false, 0, 0);
	}
	return;
}

void Function_105(bool bParam0) //Position: 0x597B / 22907
{
	bool bVar0;
	var uVar1;
	bool bVar2;
	
	if (IS_OBJECTSET_VALID(&bParam0))
	{
		bVar0 = false;
		if (GET_OBJECTSET_SIZE(&bParam0) >= bVar0)
		{
			uVar1 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, &bParam0);
			while (IS_OBJECT_VALID(&uVar1))
			{
				if (DECOR_CHECK_EXIST(&uVar1, "AM_NO_PURGE"))
				{
					bVar2 = DECOR_GET_INT(&uVar1, "AM_NO_PURGE");
					bVar2 = (bVar2 - 1);
					DECOR_SET_INT(&uVar1, "AM_NO_PURGE", bVar2);
				}
				bVar0++;
				if (GET_OBJECTSET_SIZE(&bParam0) >= bVar0)
				{
					uVar1 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, &bParam0);
				}
				else
				{
					uVar1 = "";
				}
			}
		}
		DISBAND_OBJECTSET(&bParam0);
	}
	else
	{
		LOG_ERROR("AM_PURGE_COLLECTION: attempting to disband an invalid objectset");
	}
	return;
}

bool Function_106() //Position: 0x5A71 / 23153
{
	if (Function_107() != (Global_98983 - 1) && UI_IS_MESSAGE_QUEUE_EMPTY(4))
	{
		return 1;
	}
	return 0;
}

int Function_107() //Position: 0x5A8F / 23183
{
	int iVar0;
	
	iVar0 = (Global_98983 - 1);
	while (iVar0 >= 0)
	{
		if (Global_98983[iVar07] == 4294967295)
		{
			return iVar0;
		}
		iVar0 = (iVar0 - 1);
	}
	Function_108();
	return 0;
}

void Function_108() //Position: 0x5ABF / 23231
{
	int iVar0;
	int iVar1;
	
	iVar0 = (Global_98983 - 1);
	iVar1 = (iVar0 - 1);
	while (iVar1 >= 0)
	{
		Global_98983[iVar07] = Global_98983[iVar17];
		Global_98983[iVar07].f_4 = StackVal;
		*(&Global_98983[iVar07] + 8) = { StackVal, StackVal, StackVal, (&Global_98983[iVar17] + 8) };
		*(&Global_98983[iVar07] + 40) = { StackVal, *(&Global_98983[iVar17] + 40) };
		Function_109(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_109(int iParam0) //Position: 0x5B3F / 23359
{
	Global_98983[iParam07] = 4294967295;
	Global_98983[iParam07].f_4 = 4294967295;
	strcpy(&Global_98983[iParam07] + 8, "NHIL", 16);
	strcpy(&Global_98983[iParam07] + 40, "NHIL", 8);
	return;
}

void Function_110() //Position: 0x5B7F / 23423
{
	struct<6> Var0;
	
	CLEAR_JOURNAL_ENTRY(Local_57.f_32);
	PREPEND_JOURNAL_ENTRY(Local_57.f_32, false);
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_26() };
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_79() };
	PREPEND_JOURNAL_ENTRY_DETAIL(Local_57.f_32, &Var0, 0, 2, false);
	return;
}

bool Function_111(int iParam0) //Position: 0x5BAE / 23470
{
	if (Global_116927[iParam06] == 6)
	{
		return 1;
	}
	return 0;
}

bool Function_112(int iParam0, bool bParam1) //Position: 0x5BC3 / 23491
{
	int iVar0;
	
	iVar0 = Function_114(iParam0);
	if (!Function_113(iVar0))
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

bool Function_113(int iParam0) //Position: 0x5C01 / 23553
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

int Function_114(int iParam0) //Position: 0x5C18 / 23576
{
	if (!Function_115(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_115(int iParam0) //Position: 0x5C32 / 23602
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

bool Function_116(char* cParam0) //Position: 0x5C48 / 23624
{
	char[] cVar0[4];
	char* cVar1[16];
	
	cVar1 = Function_3();
	if (IS_LAYOUTREF_VALID(&cVar1))
	{
		strcpy(&cVar2, "nAM_OBJSET", 16);
		stradd(&cVar2, &cParam0, 16);
		cVar0 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(&cVar1, &cVar2));
	}
	return &cVar0;
}

void Function_117() //Position: 0x5C85 / 23685
{
	bool bVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	var uVar6;
	
	if (StackVal == 3)
	{
		return;
	}
	bVar0 = Function_116("TM_SP");
	switch (StackVal)
	{
		case 0x00000000:
			switch (StackVal)
			{
				case 0x00000000:
					if (!Global_6661)
					{
						if (Function_112(41, 0))
						{
							SET_JOURNAL_ENTRY_PROGRESS(Local_21.f_32, -1.0f, true, 0);
							Local_21.f_40 = 1;
						}
					}
					else if (Function_111(5))
					{
						SET_JOURNAL_ENTRY_PROGRESS(Local_21.f_32, -1.0f, true, 0);
						Local_21.f_40 = 1;
					}
					Local_21.f_4 = 1;
					break;
				
				case 0x00000001:
					if (ACTOR_HAS_WEAPON(&Global_54076, 29))
					{
						Local_21.f_4 = 2;
					}
					else if ((!Global_6661 && Function_112(41, 0)) || (Global_6661 && Function_111(5)))
					{
						if (Local_21.f_40 != 1)
						{
							Local_21.f_40 = 1;
							Function_133();
							SET_JOURNAL_ENTRY_PROGRESS(Local_21.f_32, -1.0f, true, 0);
						}
					}
					break;
				
				case 0x00000002:
					if (((Global_6618 && !Global_99146) && !Global_93258) && Function_106())
					{
						Function_105(&bVar0);
						Function_104(1, "AM_TM");
						Function_80(20, 1, 0);
						Function_131();
						Local_21.f_8 = 1;
						Local_21.f_4 = 0;
						Local_21.f_12 = 0.0f;
						Local_21.f_40 = 0;
						Function_130();
						Function_27();
						memcpy(&uVar6, StackVal, StackVal, StackVal, StackVal, StackVal, Function_129(), 4);
						Local_21.f_32 = CREATE_JOURNAL_ENTRY(&uVar6, 3, false, "challenge_01");
					}
					break;
			}
			break;
		
		case 0x00000001:
			switch (StackVal)
			{
				case 0x00000000:
					Function_133();
					SET_JOURNAL_ENTRY_PROGRESS(Local_21.f_32, Local_21.f_12, true, 0);
					Local_21.f_4 = 1;
					break;
				
				case 0x00000001:
					iVar3 = Function_25(2, &bVar0, 1);
					if (iVar3 >= 0)
					{
						iVar2 = 0;
						while (Function_24(&bVar0, &iVar2, &iVar4))
						{
							if (IS_OBJECT_VALID(&iVar4))
							{
								if (Function_23(&iVar4) == 29)
								{
									uVar1 = GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(&iVar4)));
									if (IS_ACTOR_VALID(&uVar1))
									{
										if (IS_ACTOR_HUMAN(&uVar1))
										{
											if (IS_ACTOR_RIDING_AND_IN_SADDLE(&Global_54076))
											{
												Function_12(&Local_21 + 40, 2);
											}
											else if (DECOR_CHECK_EXIST(&iVar4, "nAM_Linked"))
											{
												Function_12(&Local_21 + 40, 4);
											}
											else
											{
												Function_12(&Local_21 + 40, 1);
											}
										}
									}
								}
							}
						}
						Function_105(&bVar0);
						if ((Function_11(Local_21.f_40, 2) && Function_11(Local_21.f_40, 4)) && Function_11(Local_21.f_40, 1))
						{
							Local_21.f_4 = 2;
							Local_21.f_40 = 0;
						}
						else
						{
							iVar3 = 0;
							fVar5 = Local_21.f_12;
							if (Function_11(Local_21.f_40, 2))
							{
								iVar3++;
							}
							if (Function_11(Local_21.f_40, 4))
							{
								iVar3++;
							}
							if (Function_11(Local_21.f_40, 1))
							{
								iVar3++;
							}
							Local_21.f_12 = (IntToFloat(iVar3) / 3.0f);
							if (Local_21.f_12 == fVar5)
							{
								SET_JOURNAL_ENTRY_PROGRESS(Local_21.f_32, Local_21.f_12, true, 0);
								Function_130();
							}
						}
					}
					break;
				
				case 0x00000002:
					if (Function_106())
					{
						Function_104(2, "AM_TM");
						Function_105(&bVar0);
						Function_80(20, 1, 0);
						Function_131();
						Local_21.f_8 = 2;
						Local_21.f_4 = 0;
						Local_21.f_12 = 0.0f;
						Function_130();
						if (Global_6661 && _GET_AMMO_AMOUNT(&Global_54076, 12, 1) > _GET_MAX_AMMO_AMOUNT(&Global_54076, 12))
						{
							_ADD_AMMO_OF_TYPE(&Global_54076, 12, 5.0f, 1, 1);
						}
						Function_27();
						memcpy(&uVar6, StackVal, StackVal, StackVal, StackVal, StackVal, Function_129(), 4);
						Local_21.f_32 = CREATE_JOURNAL_ENTRY(&uVar6, 3, false, "challenge_01");
					}
					break;
			}
			break;
		
		case 0x00000002:
			switch (StackVal)
			{
				case 0x00000000:
					Function_133();
					SET_JOURNAL_ENTRY_PROGRESS(Local_21.f_32, -1.0f, true, 0);
					Local_21.f_4 = 1;
					break;
				
				case 0x00000001:
					iVar3 = Function_9(2, "FLYING_ANIMAL", &bVar0, 1, 0);
					if (iVar3 >= 0)
					{
						iVar2 = 0;
						while (Function_24(&bVar0, &iVar2, &iVar4))
						{
							if (IS_OBJECT_VALID(&iVar4))
							{
								if (Function_23(&iVar4) == 29)
								{
									if (Function_128(&iVar4))
									{
										if ((!Global_6661 && !DECOR_CHECK_EXIST(&iVar4, "AM_Deadeye")) || Global_6661)
										{
											Local_21.f_4 = 2;
											break;
										}
									}
								}
							}
						}
					}
					Function_105(&bVar0);
					break;
				
				case 0x00000002:
					if (Function_106())
					{
						Function_104(3, "AM_TM");
						Function_105(&bVar0);
						Function_80(20, 1, 0);
						Function_131();
						Local_21.f_8 = 3;
						Local_21.f_4 = 0;
						Local_21.f_12 = 0.0f;
						Function_130();
						if (Global_6661 && _GET_AMMO_AMOUNT(&Global_54076, 12, 1) > _GET_MAX_AMMO_AMOUNT(&Global_54076, 12))
						{
							_ADD_AMMO_OF_TYPE(&Global_54076, 12, 5.0f, 1, 1);
						}
						Function_27();
						memcpy(&uVar6, StackVal, StackVal, StackVal, StackVal, StackVal, Function_129(), 4);
						Local_21.f_32 = CREATE_JOURNAL_ENTRY(&uVar6, 3, false, "challenge_01");
					}
					break;
			}
			break;
		
		case 0x00000003:
			switch (StackVal)
			{
				case 0x00000000:
					Function_133();
					(*&Local_21 + 44)[0] = Function_127((50 + 29));
					(*&Local_21 + 44)[1] = GET_CURRENT_GAME_TIME();
					SET_JOURNAL_ENTRY_PROGRESS(Local_21.f_32, 0.0f, true, 0);
					Local_21.f_4 = 1;
					break;
				
				case 0x00000001:
					iVar3 = Function_25(6, &bVar0, 1);
					if (iVar3 >= 0)
					{
						iVar2 = 0;
						while (Function_24(&bVar0, &iVar2, &iVar4))
						{
							if (IS_OBJECT_VALID(&iVar4))
							{
								if (Function_23(&iVar4) == 29)
								{
									if (GET_EVENT_TIME(GET_EVENT_FROM_OBJECT(&iVar4)) < (*&Local_21 + 44)[1])
									{
										(*&Local_21 + 44)[1] = GET_EVENT_TIME(GET_EVENT_FROM_OBJECT(&iVar4));
									}
								}
							}
						}
					}
					Function_105(&bVar0);
					if (Function_127((50 + 29)) > (*&Local_21 + 44)[0])
					{
						if ((GET_CURRENT_GAME_TIME() - (*&Local_21 + 44)[1]) < 1,5f)
						{
							Local_21.f_36 = 0;
							(*&Local_21 + 44)[0] = Function_127((50 + 29));
						}
					}
					else
					{
						(*&Local_21 + 44)[0] = Function_127((50 + 29));
					}
					iVar3 = Function_25(2, &bVar0, 1);
					if (iVar3 >= 0)
					{
						iVar2 = 0;
						while (Function_24(&bVar0, &iVar2, &iVar4))
						{
							if (IS_OBJECT_VALID(&iVar4))
							{
								if (Function_23(&iVar4) == 29)
								{
									uVar1 = GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(GET_EVENT_FROM_OBJECT(&iVar4)));
									if (IS_ACTOR_VALID(&uVar1))
									{
										if (IS_ACTOR_HUMAN(&uVar1))
										{
											Local_21.f_36++;
										}
									}
								}
							}
						}
					}
					Function_105(&bVar0);
					if (Local_21.f_36 > 5)
					{
						Local_21.f_4 = 2;
					}
					else
					{
						fVar5 = Local_21.f_12;
						Local_21.f_12 = (IntToFloat(Local_21.f_36) / 5.0f);
						if (Local_21.f_12 == fVar5)
						{
							SET_JOURNAL_ENTRY_PROGRESS(Local_21.f_32, Local_21.f_12, true, 0);
						}
					}
					break;
				
				case 0x00000002:
					if (Function_106())
					{
						Function_104(4, "AM_TM");
						Function_105(&bVar0);
						Function_80(20, 1, 0);
						Function_131();
						Local_21.f_8 = 4;
						Local_21.f_4 = 0;
						Local_21.f_12 = 0.0f;
						Function_130();
						if (Global_6661 && _GET_AMMO_AMOUNT(&Global_54076, 12, 1) > _GET_MAX_AMMO_AMOUNT(&Global_54076, 12))
						{
							_ADD_AMMO_OF_TYPE(&Global_54076, 12, 5.0f, 1, 1);
						}
						Function_27();
						memcpy(&uVar6, StackVal, StackVal, StackVal, StackVal, StackVal, Function_129(), 4);
						Local_21.f_32 = CREATE_JOURNAL_ENTRY(&uVar6, 3, false, "challenge_01");
					}
					break;
			}
			break;
		
		case 0x00000004:
			switch (StackVal)
			{
				case 0x00000000:
					Function_133();
					Local_21.f_40 = 0;
					Local_21.f_36 = 0;
					SET_JOURNAL_ENTRY_PROGRESS(Local_21.f_32, 0.0f, true, 0);
					if (!Global_6661)
					{
						if (Global_6628 || Function_126(Global_46953) != 2)
						{
							(*&Local_21 + 44)[0] = GET_CURRENT_GAME_TIME();
							Function_125();
							SET_JOURNAL_ENTRY_PROGRESS(Local_21.f_32, 0,5f, true, 0);
						}
					}
					else if (UI_ISACTIVE("ZMeter"))
					{
						(*&Local_21 + 44)[0] = GET_CURRENT_GAME_TIME();
						Function_125();
						SET_JOURNAL_ENTRY_PROGRESS(Local_21.f_32, 0,5f, true, 0);
					}
					Local_21.f_4 = 1;
					break;
				
				case 0x00000001:
					if (Function_11(Local_21.f_40, 2))
					{
						if (Function_11(Local_21.f_40, 1))
						{
							iVar3 = Function_25(2, &bVar0, 1);
							if (iVar3 >= 0)
							{
								iVar2 = 0;
								while (Function_24(&bVar0, &iVar2, &iVar4))
								{
									if (IS_OBJECT_VALID(&iVar4))
									{
										if (Function_23(&iVar4) == 29 && Function_23(&iVar4) == 4294967295)
										{
											if (GET_EVENT_TIME(GET_EVENT_FROM_OBJECT(&iVar4)) < (*&Local_21 + 44)[0])
											{
												SET_JOURNAL_ENTRY_PROGRESS(Local_21.f_32, 0.0f, true, 0);
												Function_31(&Local_21 + 40, 1);
											}
										}
									}
								}
							}
							Function_105(&bVar0);
						}
						if (!Global_6661)
						{
							if (!Global_6628 && !Function_126(Global_46953) != 2)
							{
								if (Function_11(Local_21.f_40, 1))
								{
									if (Function_120())
									{
										Local_21.f_4 = 2;
									}
								}
								Local_21.f_40 = 0;
								Local_21.f_36 = 0;
								SET_JOURNAL_ENTRY_PROGRESS(Local_21.f_32, 0.0f, true, 0);
							}
						}
						else if (!Function_118(Local_21.f_36) || Global_43789 == Local_21.f_36)
						{
							if (Function_11(Local_21.f_40, 1))
							{
								if (Function_120())
								{
									Local_21.f_4 = 2;
								}
							}
							Local_21.f_40 = 0;
							Local_21.f_36 = 0;
							SET_JOURNAL_ENTRY_PROGRESS(Local_21.f_32, 0.0f, true, 0);
						}
						if (((!Global_6661 && !Global_6628) && !Function_126(Global_46953) != 2) || (Global_6661 && (!Function_118(Local_21.f_36) || Global_43789 == Local_21.f_36)))
						{
							if (Function_11(Local_21.f_40, 1))
							{
								if (Function_120())
								{
									Local_21.f_4 = 2;
								}
							}
							Local_21.f_40 = 0;
							Local_21.f_36 = 0;
							SET_JOURNAL_ENTRY_PROGRESS(Local_21.f_32, 0.0f, true, 0);
						}
					}
					else if (!Global_6661 && (Global_6628 || Function_126(Global_46953) != 2))
					{
						(*&Local_21 + 44)[0] = GET_CURRENT_GAME_TIME();
						Function_125();
						SET_JOURNAL_ENTRY_PROGRESS(Local_21.f_32, 0,5f, true, 0);
					}
					else if (Global_6661 && UI_ISACTIVE("ZMeter"))
					{
						(*&Local_21 + 44)[0] = GET_CURRENT_GAME_TIME();
						Function_125();
						SET_JOURNAL_ENTRY_PROGRESS(Local_21.f_32, 0,5f, true, 0);
					}
					break;
				
				case 0x00000002:
					if ((Global_6618 && !Global_99146) && Function_106())
					{
						if (!HAS_ACHIEVEMENT_BEEN_PASSED(40))
						{
							AWARD_ACHIEVEMENT(40);
						}
						Function_104(10, "AM_TM");
						Function_105(&bVar0);
						Function_80(20, 1, 0);
						Function_131();
						Local_21.f_8 = 10;
						Local_21.f_12 = 0.0f;
						Function_130();
						Function_27();
						Local_21.f_8 = 5;
					}
					break;
			}
			break;
		
		case 0x00000005:
			if (!UI_ISACTIVE("SaveGame_DoNotInterruptMe"))
			{
				if (!Global_6661)
				{
					Function_5("AM_TM_RW1_help", 0x41200000, 1, 0, 2, 1, 0);
				}
				else
				{
					Function_5("AM_TM_RW1_helpz", 0x41200000, 1, 0, 2, 1, 0);
				}
				Local_21.f_8 = 10;
				Local_21.f_4 = 3;
				Function_131();
			}
			break;
	}
	return;
}

bool Function_118(int iParam0) //Position: 0x6633 / 26163
{
	var uVar0;
	
	if (StackVal || StackVal != 2 != 1)
	{
		return 0;
	}
	if ((iParam0 != Global_46894[2] || iParam0 != Global_46894[1]) || iParam0 != Global_46838[1])
	{
		return 0;
	}
	uVar0 = Global_43791[iParam0];
	return (((Function_11(uVar0, 0x1000000) || Function_11(uVar0, 0x2000000)) || Function_11(uVar0, 0x4000000)) || Function_119(iParam0));
}

var Function_119(bool bParam0) //Position: 0x66A6 / 26278
{
	var uVar0;
	bool bVar1;
	
	uVar0 = Global_43791[bParam0];
	bVar1 = uVar0 & 268435456 != false;
	return bVar1;
}

bool Function_120() //Position: 0x66C3 / 26307
{
	if (!Global_6661)
	{
		if (Function_11(Local_21.f_40, 4) && Function_122(Global_46948) != 0)
		{
			return 1;
		}
		if (Function_11(Local_21.f_40, 16) && Function_122(Global_46950) != 0)
		{
			return 1;
		}
		if (Function_11(Local_21.f_40, 32) && Function_122(Global_46951) != 0)
		{
			return 1;
		}
		if (Function_11(Local_21.f_40, 64) && Function_122(Global_46952) != 0)
		{
			return 1;
		}
		if (Function_11(Local_21.f_40, 128) && Function_122(Global_46953) != 0)
		{
			if (Function_121(Global_46953) >= Local_21.f_36)
			{
				return 1;
			}
			return 0;
		}
		if (Function_11(Local_21.f_40, 256) && Function_122(Global_46954) != 0)
		{
			return 1;
		}
		if (Function_11(Local_21.f_40, 512) && Function_122(Global_46955) != 0)
		{
			return 1;
		}
		if (Function_11(Local_21.f_40, 8) && Function_122(Global_46949) != 0)
		{
			return 1;
		}
	}
	return !Function_118(Local_21.f_36);
	return 0;
}

int Function_121(int iParam0) //Position: 0x67A8 / 26536
{
	if (!Function_113(iParam0))
	{
		return 4294967295;
	}
	return Global_21684[iParam07].f_12;
}

int Function_122(int iParam0) //Position: 0x67C2 / 26562
{
	if (!Function_123(iParam0))
	{
		return 4294967295;
	}
	return Global_21684[iParam07].f_16;
}

bool Function_123(int iParam0) //Position: 0x67DC / 26588
{
	if (!Function_113(iParam0))
	{
		return 0;
	}
	if (!Function_124(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_124(int iParam0) //Position: 0x6800 / 26624
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

void Function_125() //Position: 0x6815 / 26645
{
	Local_21.f_40 = 0;
	Function_12(&Local_21 + 40, 1);
	Function_12(&Local_21 + 40, 2);
	if (!Global_6661)
	{
		if (Function_126(Global_46948) == 2)
		{
			Function_12(&Local_21 + 40, 4);
		}
		else if (Function_126(Global_46950) == 2)
		{
			Function_12(&Local_21 + 40, 16);
		}
		else if (Function_126(Global_46951) == 2)
		{
			Function_12(&Local_21 + 40, 32);
		}
		else if (Function_126(Global_46952) == 2)
		{
			Function_12(&Local_21 + 40, 64);
		}
		else if (Function_126(Global_46953) == 2)
		{
			Function_12(&Local_21 + 40, 128);
			Local_21.f_36 = Function_121(Global_46953);
		}
		else if (Function_126(Global_46954) == 2)
		{
			Function_12(&Local_21 + 40, 256);
		}
		else if (Function_126(Global_46955) == 2)
		{
			Function_12(&Local_21 + 40, 512);
		}
		else if (Function_126(Global_46949) == 2)
		{
			Function_12(&Local_21 + 40, 8);
		}
	}
	else
	{
		Local_21.f_36 = Global_43789;
	}
	return;
}

int Function_126(int iParam0) //Position: 0x68F9 / 26873
{
	if (!Function_123(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

float Function_127(int iParam0) //Position: 0x6913 / 26899
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
	if (Global_55480[iParam016].f_112 != 0.0f)
	{
		fVar2 = 100.0f;
	}
	else
	{
		fVar2 = Global_55480[iParam016].f_112;
	}
	fVar3 = Global_55480[iParam016].f_108;
	fVar1 = Function_51(iParam0);
	if (Function_50(iParam0) != 19 || Function_50(iParam0) != 17)
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

bool Function_128(bool bParam0) //Position: 0x69F4 / 27124
{
	return DECOR_CHECK_EXIST(&bParam0, "nAM_Flying");
}

struct<24> Function_129() //Position: 0x6A0C / 27148
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Local_21 + 16), 6);
	stradd(&cVar0, "_", 24);
	stradd(&cVar0, INT_TO_STRING(StackVal), 24);
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_130() //Position: 0x6A36 / 27190
{
	iLocal_93 = Function_73(9, 1, 5);
	Global_21684[iLocal_937].f_20 = StackVal;
	Global_21684[iLocal_937].f_28 = Local_21.f_12;
	Global_21684[iLocal_937].f_24 = Local_21.f_36;
	Global_21684[iLocal_937].f_16 = Local_21.f_40;
	return;
}

void Function_131() //Position: 0x6A79 / 27257
{
	struct<6> Var0;
	
	if (Global_6632)
	{
		Global_6662 = 1;
	}
	CLEAR_JOURNAL_ENTRY(Local_21.f_32);
	memcpy(&Var0, StackVal, *(&Local_21 + 16), 6);
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_132() };
	APPEND_JOURNAL_ENTRY_DETAIL(Local_21.f_32, &Var0, 0, 2, false);
	PREPEND_JOURNAL_ENTRY(Local_21.f_32, true);
	SET_JOURNAL_ENTRY_PROGRESS(Local_21.f_32, 1.0f, false, 0);
	return;
}

struct<24> Function_132() //Position: 0x6AC0 / 27328
{
	char* cVar0[24];
	
	memcpy(&cVar0, StackVal, *(&Local_21 + 16), 6);
	stradd(&cVar0, "_", 24);
	stradd(&cVar0, INT_TO_STRING(StackVal), 24);
	stradd(&cVar0, "_des", 24);
	if (Global_6661)
	{
		stradd(&cVar0, "z", 24);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_133() //Position: 0x6B03 / 27395
{
	struct<6> Var0;
	
	CLEAR_JOURNAL_ENTRY(Local_21.f_32);
	PREPEND_JOURNAL_ENTRY(Local_21.f_32, false);
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_129() };
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_132() };
	PREPEND_JOURNAL_ENTRY_DETAIL(Local_21.f_32, &Var0, 0, 2, false);
	return;
}

void Function_134() //Position: 0x6B32 / 27442
{
	var uVar0;
	var uVar4;
	
	strcpy(&Local_57 + 16, "AM_ER", 8);
	Local_57 = 26;
	Local_57.f_140 = 0;
	Function_135();
	memcpy(&uVar0, StackVal, StackVal, StackVal, StackVal, StackVal, Function_26(), 4);
	Local_57.f_32 = CREATE_JOURNAL_ENTRY(&uVar0, 3, false, "challenge_01");
	if ((!Global_6661 && Function_112(41, 0)) || (Global_6661 && Function_111(5)))
	{
		CLEAR_JOURNAL_ENTRY(Local_57.f_32);
		PREPEND_JOURNAL_ENTRY(Local_57.f_32, false);
		SET_JOURNAL_ENTRY_PROGRESS(Local_57.f_32, 0.0f, false, 0);
		SET_JOURNAL_ENTRY_UPDATED(Local_57.f_32, 0);
		Function_110();
	}
	if (StackVal == 10)
	{
		Function_78();
	}
	else
	{
		Local_57.f_4 = 0;
		SET_JOURNAL_ENTRY_PROGRESS(Local_57.f_32, Local_57.f_12, true, 0);
		uVar4 = Function_3();
		if (IS_LAYOUTREF_VALID(&uVar4))
		{
			CREATE_OBJECTSET_IN_LAYOUT("AM_OBJSETER_SP", &uVar4, 4294967295, 0);
		}
	}
	return;
}

void Function_135() //Position: 0x6BF9 / 27641
{
	iLocal_94 = Function_73(10, 1, 5);
	Local_57.f_8 = Global_21684[iLocal_947].f_20;
	Local_57.f_12 = Global_21684[iLocal_947].f_28;
	Local_57.f_36 = Global_21684[iLocal_947].f_24;
	Local_57.f_40 = Global_21684[iLocal_947].f_16;
	return;
}

void Function_136() //Position: 0x6C3C / 27708
{
	var uVar0;
	var uVar4;
	
	strcpy(&Local_21 + 16, "AM_TM", 8);
	Local_21 = 25;
	Local_21.f_140 = 0;
	Function_137();
	memcpy(&uVar0, StackVal, StackVal, StackVal, StackVal, StackVal, Function_129(), 4);
	Local_21.f_32 = CREATE_JOURNAL_ENTRY(&uVar0, 3, false, "challenge_01");
	if ((!Global_6661 && Function_112(41, 0)) || (Global_6661 && Function_111(5)))
	{
		CLEAR_JOURNAL_ENTRY(Local_21.f_32);
		PREPEND_JOURNAL_ENTRY(Local_21.f_32, false);
		SET_JOURNAL_ENTRY_PROGRESS(Local_21.f_32, 0.0f, false, 0);
		SET_JOURNAL_ENTRY_UPDATED(Local_21.f_32, 0);
		Function_133();
	}
	if (StackVal == 10)
	{
		Function_131();
	}
	else
	{
		Local_21.f_4 = 0;
		SET_JOURNAL_ENTRY_PROGRESS(Local_21.f_32, Local_21.f_12, true, 0);
		uVar4 = Function_3();
		if (IS_LAYOUTREF_VALID(&uVar4))
		{
			CREATE_OBJECTSET_IN_LAYOUT("AM_OBJSETTM_SP", &uVar4, 4294967295, 0);
		}
	}
	return;
}

void Function_137() //Position: 0x6D03 / 27907
{
	iLocal_93 = Function_73(9, 1, 5);
	Local_21.f_8 = Global_21684[iLocal_937].f_20;
	Local_21.f_12 = Global_21684[iLocal_937].f_28;
	Local_21.f_36 = Global_21684[iLocal_937].f_24;
	Local_21.f_40 = Global_21684[iLocal_937].f_16;
	return;
}

bool Function_138(int iParam0) //Position: 0x6D46 / 27974
{
	int iVar0;
	
	iVar0 = (Global_39556 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_139(struct<57> Param0) //Position: 0x6D62 / 28002
{
	strcpy(&Param0 + 24, "nACTORROAM", 16);
	Param0 = 32438;
	*(&Param0 + 8) = 28101;
	*(&Param0 + 16) = 28061;
	Param0.f_56 = 1;
	return;
}

void Function_140() //Position: 0x6D9D / 28061
{
	if (IS_OBJECTSET_VALID(&Global_26172))
	{
		DESTROY_OBJECTSET(&Global_26172);
	}
	if (IS_LAYOUTREF_VALID(&Global_10998))
	{
		RELEASE_LAYOUT_REF(&Global_10998);
	}
	return;
}

int Function_141() //Position: 0x6DC5 / 28101
{
	struct<2> Var0;
	struct<2> Var2;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	var uVar8;
	var uVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	var uVar14;
	bool bVar15;
	int iVar16;
	var uVar17;
	
	bVar15 = -1.0f;
	Function_170();
	if (!IS_OBJECTSET_VALID(&Global_26172))
	{
		return 0;
	}
	uVar8 = CREATE_OBJECTSET_IN_LAYOUT("roamRemoveSet", &Global_10998, 4294967295, 0);
	CLEAN_OBJECTSET(&Global_26172);
	iVar16 = GET_OBJECTSET_SIZE(&Global_26172);
	bVar4 = false;
	while (bVar4 < (iVar16 - 1))
	{
		iVar5 = 0;
		iVar11 = GET_ACTOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar4, &Global_26172));
		if (IS_ACTOR_VALID(&iVar11))
		{
			if (GET_OBJECT_TYPE(&iVar11) == 15)
			{
				iVar6 = Function_169(&iVar11);
				iVar7 = Function_168(&iVar11);
				uVar9 = Function_167(&iVar11);
				uVar17 = Function_166(&iVar11);
				iVar13 = Function_165(&iVar11);
				if (IS_OBJECT_VALID(&uVar9))
				{
					iVar10 = GET_OBJECT_TYPE(&uVar9);
				}
				else
				{
					iVar10 = 0;
				}
				GET_POSITION(&iVar11, &Var0);
				switch (iVar6)
				{
					case 0x00000000:
						Function_164(&iVar11);
						Function_163(&iVar11, 1);
						if (iVar7 == 5)
						{
							PRINTSTRING("ActorRoam - ");
							PRINTSTRING(GET_ACTOR_NAME(&iVar11));
							PRINTSTRING(" will ignore ambient restrictions while using gringo");
							SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(&iVar11, 1);
							SET_ACTOR_OBEY_AMBIENT_MOVE_RESTRICTIONS(&iVar11, 0);
						}
					
					case 0x00000001:
						if (IS_ACTOR_VEHICLE(&iVar11))
						{
							Function_163(&iVar11, 8);
						}
						else if (IS_ACTOR_VALID(GET_VEHICLE(&iVar11)))
						{
							SET_ACTOR_ALLOW_WEAPON_REACTIONS(&iVar11, 1);
							TASK_CLEAR(&iVar11);
							TASK_VEHICLE_LEAVE(&iVar11);
							TASK_PRIORITY_SET(&iVar11, 2);
							Function_163(&iVar11, 6);
						}
						else
						{
							SET_ACTOR_ALLOW_WEAPON_REACTIONS(&iVar11, 1);
							switch (iVar7)
							{
								case 0x00000000:
								case 0x00000001:
									if (iVar10 == 9)
									{
										TASK_CLEAR(&iVar11);
										TASK_WANDER_IN_VOLUME(&iVar11, GET_VOLUME_FROM_OBJECT(&uVar9), -1f);
										TASK_PRIORITY_SET(&iVar11, 2);
									}
									else
									{
										TASK_CLEAR(&iVar11);
										TASK_WANDER(&iVar11, 3212836864);
										TASK_PRIORITY_SET(&iVar11, 2);
									}
									Function_163(&iVar11, 5);
									break;
								
								case 0x00000002:
									if (iVar10 != 15)
									{
										uVar9 = GET_OBJECT_FROM_ACTOR(Function_10());
									}
									TASK_CLEAR(&iVar11);
									TASK_FLEE_ACTOR(&iVar11, GET_ACTOR_FROM_OBJECT(&uVar9), -1.0f, -1.0f, 0, 0, 0);
									TASK_PRIORITY_SET(&iVar11, false);
									Function_163(&iVar11, 3);
									break;
								
								case 0x00000003:
									if (iVar10 != 15)
									{
										uVar9 = GET_OBJECT_FROM_ACTOR(Function_10());
									}
									Function_162(&iVar11, &bVar15);
									if (Function_158(&iVar11, &uVar14, &bVar15, 0, 0, 0x40400000))
									{
										RESET_ANIM_SET_FOR_ACTOR(&iVar11, 1);
										TASK_CLEAR(&iVar11);
										TASK_FLEE_ACTOR(&iVar11, GET_ACTOR_FROM_OBJECT(&uVar9), -1.0f, -1.0f, 0, 0, 0);
										TASK_PRIORITY_SET(&iVar11, false);
										Function_163(&iVar11, 3);
									}
									Function_157(&iVar11, bVar15);
									break;
								
								case 0x00000004:
									TASK_CLEAR(&iVar11);
									switch (iVar10)
									{
										case 0x00000000:
											iVar12 = Function_154(StackVal, Var0, 0x42200000, 1);
											if (Function_153(iVar12))
											{
												Function_152(&iVar11, GET_OBJECT_FROM_VOLUME(&Global_44085[iVar129] + 8));
												uVar9 = Function_167(&iVar11);
												iVar10 = GET_OBJECT_TYPE(&uVar9);
												Function_151(&iVar11, GET_VOLUME_FROM_OBJECT(&uVar9), 2, 60.0f, iVar13);
											}
											else
											{
												TASK_CLEAR(&iVar11);
												TASK_FLEE_ACTOR(&iVar11, GET_ACTOR_FROM_OBJECT(Function_10()), -1.0f, -1.0f, 0, 0, 0);
												TASK_PRIORITY_SET(&iVar11, 2);
											}
											break;
										
										case 0x0000000F:
											TASK_FOLLOW_OBJECT_AT_DISTANCE(&iVar11, GET_ACTOR_FROM_OBJECT(&uVar9), 3.0f, iVar13);
											TASK_PRIORITY_SET(&iVar11, 2);
											break;
										
										case 0x00000009:
											Function_151(&iVar11, GET_VOLUME_FROM_OBJECT(&uVar9), 2, 60.0f, iVar13);
											break;
										
										default:
											LOG_ERROR("Invalid Object type passed to ActorRoam");
											break;
									}
									Function_163(&iVar11, 4);
									break;
								
								case 0x00000005:
									Function_162(&iVar11, &bVar15);
									if (Function_158(&iVar11, &uVar14, &bVar15, 0, 0, 0x40400000))
									{
										RESET_ANIM_SET_FOR_ACTOR(&iVar11, 1);
										TASK_CLEAR(&iVar11);
										TASK_FLEE_ACTOR(&iVar11, &Global_54076, -1.0f, -1.0f, 0, 0, 0);
										TASK_PRIORITY_SET(&iVar11, false);
										SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(&iVar11, 0);
										SET_ACTOR_OBEY_AMBIENT_MOVE_RESTRICTIONS(&iVar11, 1);
										Function_163(&iVar11, 3);
									}
									else if (!IS_GRINGO_VALID(GET_CURRENT_GRINGO(&iVar11)))
									{
										if (!(GET_TASK_STATUS(&iVar11, 19) != 1 || GET_TASK_STATUS(&iVar11, 19) != 3))
										{
											if (Function_150(&iVar11))
											{
												PRINTSTRING("ACTORROAM - Actor ");
												PRINTSTRING(GET_ACTOR_NAME(&iVar11));
												PRINTSTRING(" failing on use of gringo ");
												PRINTSTRING(GET_OBJECT_NAME(&uVar9));
												PRINTSTRING("n of type ");
												GET_OBJECT_MODEL_NAME(&uVar9);
												PRINTNL();
												DESTROY_OBJECT(&uVar9);
												SET_ACTOR_EXEMPT_FROM_AMBIENT_RESTRICTIONS(&iVar11, 0);
												SET_ACTOR_OBEY_AMBIENT_MOVE_RESTRICTIONS(&iVar11, 1);
												Function_149(&iVar11, 1);
												Function_163(&iVar11, 0);
											}
										}
									}
									Function_157(&iVar11, bVar15);
									break;
								
								default:
									break;
								}
						}
						break;
					
					case 0x00000006:
						if (GET_TASK_STATUS(&iVar11, 55) != 0 || !IS_ACTOR_VALID(GET_VEHICLE(&iVar11)))
						{
							Function_163(&iVar11, 0);
						}
						break;
					
					case 0x00000003:
						if (GET_TASK_STATUS(&iVar11, 25) == 0)
						{
							Function_163(&iVar11, 7);
						}
						break;
					
					case 0x00000004:
						switch (iVar10)
						{
							case 0x00000000:
							case 0x0000000F:
								if (GET_TASK_STATUS(&iVar11, 67) == 0)
								{
									Function_163(&iVar11, 7);
								}
								break;
							
							case 0x00000009:
								GET_VOLUME_CENTER(GET_VOLUME_FROM_OBJECT(&uVar9), &Var2);
								Function_148(StackVal, StackVal, Var2, Var0, &Var2);
								if (VMAG(Var2) > 20.0f)
								{
									SET_ACTOR_STAY_WITHIN_VOLUME(&iVar11, GET_VOLUME_FROM_OBJECT(&uVar9), 1, 3);
									Function_163(&iVar11, 7);
								}
								break;
							
							default:
								PRINTSTRING("ActorRoam got an invalid object named: ");
								PRINTSTRING(GET_OBJECT_NAME(&uVar9));
								PRINTNL();
								LOG_ERROR("Invalid Object in ActorRoam update");
								break;
						}
						break;
					
					case 0x00000002:
					case 0x00000005:
					case 0x00000007:
						if (GET_TASK_STATUS(&iVar11, 10) == 1 && GET_TASK_STATUS(&iVar11, 10) == 3)
						{
							TASK_CLEAR(&iVar11);
							TASK_WANDER(&iVar11, 3212836864);
							Function_163(&iVar11, 8);
						}
						else if ((GET_TASK_STATUS(&iVar11, 57) == 1 && GET_TASK_STATUS(&iVar11, 57) == 3) && iVar10 != 9)
						{
							TASK_CLEAR(&iVar11);
							TASK_WANDER_IN_VOLUME(&iVar11, GET_VOLUME_FROM_OBJECT(&uVar9), -1f);
							Function_163(&iVar11, 8);
						}
						break;
					
					case 0x00000008:
						break;
					
					default:
						break;
				}
				if (VDIST(Global_54078, Var0) < Function_146(1) && !Function_145(&iVar11, 0x3f800000, 0x42960000, 1, 1, 0))
				{
					iVar5 = 1;
				}
				else if (iVar16 >= 100)
				{
					iVar5 = 1;
				}
				else if (HUD_IS_FADED() && Function_11(uVar17, 1))
				{
					iVar5 = 1;
				}
				if (iVar5 == 1)
				{
					ADD_OBJECT_TO_OBJECTSET(GET_OBJECT_FROM_ACTOR(&iVar11), &uVar8);
					if (iVar7 != 5 && IS_OBJECT_VALID(&uVar9))
					{
						DESTROY_OBJECT(&uVar9);
					}
				}
			}
		}
		bVar4++;
	}
	if (IS_OBJECTSET_VALID(&uVar8))
	{
		iVar16 = GET_OBJECTSET_SIZE(&uVar8);
		bVar4 = false;
		while (bVar4 < (iVar16 - 1))
		{
			iVar11 = GET_ACTOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(false, &uVar8));
			TASK_CLEAR(&iVar11);
			TASK_WANDER(&iVar11, -1.0f);
			Function_143(&iVar11);
			CLEAN_OBJECTSET(&uVar8);
			bVar4++;
		}
		DESTROY_OBJECTSET(&uVar8);
	}
	if (IS_EXITFLAG_SET())
	{
		if (IS_OBJECTSET_VALID(&Global_26172))
		{
			Function_142(&Global_26172);
			DESTROY_OBJECTSET(&Global_26172);
		}
		if (IS_LAYOUTREF_VALID(&Global_10998))
		{
			DESTROY_LAYOUT(&Global_10998);
		}
	}
	return 0;
}

void Function_142(var uParam0) //Position: 0x7530 / 30000
{
	int iVar0;
	
	if (!IS_OBJECTSET_VALID(&uParam0))
	{
		return;
	}
	while (GET_OBJECTSET_SIZE(&uParam0) >= 0)
	{
		iVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, &uParam0);
		if (IS_OBJECT_VALID(&iVar0))
		{
			REMOVE_OBJECT_FROM_OBJECTSET(&iVar0, &uParam0);
		}
		CLEAN_OBJECTSET(&uParam0);
		if (IS_OBJECT_VALID(&iVar0))
		{
			RELEASE_OBJECT_REF(&iVar0);
		}
	}
	return;
}

void Function_143(int iParam0) //Position: 0x757F / 30079
{
	char* cVar0[32];
	
	strcpy(&cVar0, GET_OBJECT_NAME(&iParam0), 32);
	if (STRING_LENGTH(&cVar0) < 0)
	{
		strcpy(&cVar0, "n(Unnamed)", 32);
	}
	Function_144(&iParam0);
	REMOVE_OBJECT_FROM_OBJECTSET(GET_OBJECT_FROM_ACTOR(&iParam0), &Global_26172);
	RELEASE_ACTOR(&iParam0);
	return;
}

void Function_144(bool bParam0) //Position: 0x75C1 / 30145
{
	DEREFERENCE_ACTOR(&bParam0);
	DECOR_REMOVE(GET_OBJECT_FROM_ACTOR(&bParam0), "actorRoam_ref");
	return;
}

bool Function_145(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) //Position: 0x75E7 / 30183
{
	return CAMERA_IS_VISIBLE_OBJECT(GET_GAME_CAMERA(), &uParam0, &uParam1, &uParam2, &uParam3, &uParam4, &uParam5);
}

float Function_146(bool bParam0) //Position: 0x7607 / 30215
{
	var uVar0;
	float fVar1;
	
	if (!&bParam0)
	{
		Function_147(&uVar0, &fVar1);
		if (fVar1 < 60.0f)
		{
			return (fVar1 + 20.0f);
		}
		return (fVar1 + 10.0f);
	}
	return (190.0f + 20.0f);
}

void Function_147(var uParam0, int iParam1) //Position: 0x7643 / 30275
{
	struct<2> Var0;
	
	if (Global_6629 && !Global_6646)
	{
		uParam0 = 65.0f;
		iParam1 = 95.0f;
	}
	else if ((!IS_ACTOR_RIDING(GET_PLAYER_ACTOR(0)) && !IS_ACTOR_RIDING_VEHICLE(GET_PLAYER_ACTOR(0))) && !Global_6646)
	{
		uParam0 = 115.0f;
		iParam1 = 170.0f;
	}
	else
	{
		GET_ACTOR_VELOCITY(GET_PLAYER_ACTOR(0), &Var0);
		if (VMAG(Var0) > 5.0f)
		{
			uParam0 = 130.0f;
			iParam1 = 190.0f;
		}
		else
		{
			uParam0 = 130.0f;
			iParam1 = 190.0f;
		}
	}
	return;
}

void Function_148(var uParam0, float fParam1, float fParam2, float fParam3, var uParam4) //Position: 0x76D4 / 30420
{
	uParam4 = Vector((GET_X(&fParam2) - GET_X(&uParam0)), 0.0f, (GET_Z(&fParam2) - GET_Z(&uParam0)));
}

void Function_149(var uParam0, bool bParam1) //Position: 0x76F8 / 30456
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&uParam0), "actorRoam_behavior", bParam1);
	return;
}

bool Function_150(int iParam0) //Position: 0x771F / 30495
{
	bool bVar0;
	
	if (!DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_gringoFail"))
	{
		DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_gringoFail", false);
	}
	else
	{
		bVar0 = DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_gringoFail");
		if (bVar0 >= 20)
		{
			return 1;
		}
		DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_gringoFail", bVar0 + 1);
	}
	return 0;
}

void Function_151(int iParam0, float fParam1, bool bParam2, float fParam3, int iParam4) //Position: 0x77C2 / 30658
{
	var uVar0;
	var uVar2;
	var uVar4;
	
	if (IS_VOLUME_VALID(&fParam1))
	{
		GET_VOLUME_CENTER(&fParam1, &uVar0);
		if (FIND_GROUND_INTERSECTION(&uVar0, 100.0f, &uVar2, &uVar4))
		{
			TASK_GO_NEAR_COORD(&iParam0, &uVar2, fParam3, iParam4);
		}
		else
		{
			TASK_GO_NEAR_COORD(&iParam0, &uVar0, fParam3, iParam4);
		}
		TASK_PRIORITY_SET(&iParam0, bParam2);
	}
	else
	{
		LOG_ERROR("GO_NEAR_VOLUME - Invalid Volume");
	}
}

void Function_152(var uParam0, int iParam1) //Position: 0x7837 / 30775
{
	DECOR_SET_OBJECT(GET_OBJECT_FROM_ACTOR(&uParam0), "actorRoam_target", &iParam1);
	return;
}

bool Function_153(int iParam0) //Position: 0x785D / 30813
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

var Function_154(struct<2> Param0, float fParam2, int iParam3) //Position: 0x7873 / 30835
{
	int iVar0;
	struct<2> Var1;
	bool bVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = 4294967295;
	bVar3 = 99999.0f;
	iVar4 = 0;
	if (Function_62(StackVal, Param0))
	{
		return 4294967295;
	}
	iVar5 = 0;
	while (iVar5 < 145)
	{
		if ((StackVal && (StackVal || IS_VOLUME_VALID(&Global_44085[iVar59] + 8) != 3 != 4)) && !Function_156(iVar5))
		{
			iVar4 = 0;
			if (&iParam3 == 0)
			{
				iVar4 = 1;
			}
			else if (Function_155(Global_43789) == Global_46722[Global_43787])
			{
				iVar4 = 1;
			}
			if (iVar4 == 1)
			{
				GET_VOLUME_CENTER(&Global_44085[iVar59] + 8, &Var1);
				if (VDIST(Param0, Var1) > bVar3 && VDIST(Param0, Var1) < &fParam2)
				{
					iVar0 = iVar5;
					bVar3 = VDIST(Param0, Var1);
				}
			}
		}
		iVar5++;
	}
	if (Function_153(iVar0))
	{
	}
	else
	{
		iVar0 = 4294967295;
	}
	return iVar0;
}

int Function_155(int iParam0) //Position: 0x7953 / 31059
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_153(iParam0))
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

bool Function_156(int iParam0) //Position: 0x79AB / 31147
{
	if ((((iParam0 != Global_46894[1] || iParam0 != Global_46838[1]) || iParam0 != Global_46816[1]) || iParam0 != Global_46760[4]) || iParam0 != Global_46866[1])
	{
		return 1;
	}
	return 0;
}

void Function_157(int iParam0, bool bParam1) //Position: 0x79EB / 31211
{
	DECOR_SET_FLOAT(GET_OBJECT_FROM_ACTOR(&iParam0), "actorroam_lockon", bParam1);
	return;
}

bool Function_158(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4, float fParam5) //Position: 0x7A10 / 31248
{
	float fVar0;
	
	if (IS_ACTOR_VALID(&iParam0) && !&bParam4)
	{
		if (IS_ACTOR_ON_FOOT(&iParam0))
		{
			AI_SET_PLAYER_PROJECTILE_IMPACT_HEAR_RANGE(&iParam0, &fParam5);
		}
		else
		{
			AI_SET_PLAYER_PROJECTILE_IMPACT_HEAR_RANGE(&iParam0, (&fParam5 + 3.0f));
		}
	}
	if (IS_ACTOR_VALID(&iParam0) && !&bParam4)
	{
		fVar0 = Function_161(&iParam0, &Global_54076);
		if (!Function_11(&iParam3, 8))
		{
			if (GET_LAST_ATTACKER(&iParam0) == &Global_54076)
			{
				uParam1 = 8;
				Function_159(&iParam0);
				return 1;
			}
		}
		if (!Function_11(&iParam3, 2))
		{
			if (AI_HAS_PLAYER_PROJECTILE_IMPACTED_WITHIN(&iParam0, 1.0f))
			{
				uParam1 = 2;
				Function_159(&iParam0);
				return 1;
			}
			if (AI_HAS_PLAYER_PROJECTILE_NEAR_MISSED_WITHIN(&iParam0, 1.0f, 1.0f))
			{
				uParam1 = 2;
				Function_159(&iParam0);
				return 1;
			}
		}
		if (!Function_11(&iParam3, 4))
		{
			if ((IS_ACTOR_HANDSUP(&iParam0) || (((GET_ACTOR_UNDER_RETICLE(&Global_54076, 0) != &iParam0 && IS_PLAYER_WEAPON_ZOOMED(&Global_54076)) && MEMORY_GET_IS_VISIBLE(&iParam0, &Global_54076)) && fVar0 > 20.0f)) || ((GET_ACTOR_MELEE_TARGETED_BY(&Global_54076) != &iParam0 && MEMORY_GET_IS_VISIBLE(&iParam0, &Global_54076)) && fVar0 > 20.0f))
			{
				if (iParam2 > 0.0f)
				{
					uParam1 = 4;
					Function_159(&iParam0);
					return 1;
				}
				if (iParam2 < 0.0f)
				{
					if ((GET_CURRENT_GAME_TIME() - iParam2) < 1,3f)
					{
						uParam1 = 4;
						Function_159(&iParam0);
						return 1;
					}
				}
				iParam2 = GET_CURRENT_GAME_TIME();
			}
		}
		if (!Function_11(&iParam3, 1))
		{
			if (Global_6646 || Global_6647)
			{
				uParam1 = 1;
				Function_159(&iParam0);
				return 1;
			}
		}
		if (!Function_11(&iParam3, 16))
		{
			if (UNK_0x7F454A92(&iParam0) < 0.0f)
			{
				if ((GET_CURRENT_GAME_TIME() - UNK_0x7F454A92(&iParam0)) > 2.0f && fVar0 > 18.0f)
				{
					uParam1 = 16;
					Function_159(&iParam0);
					return 1;
				}
			}
		}
	}
	return 0;
}

void Function_159(int iParam0) //Position: 0x7BD9 / 31705
{
	CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(&iParam0);
	AI_SPEECH_SET_ALLOW_FOR_ACTOR(&iParam0, 1);
	UNK_0x99AFD2D1(&iParam0, 0, 0);
	Function_160(&iParam0);
	MEMORY_CONSIDER_AS(&Global_54076, &iParam0, 2);
	MEMORY_CONSIDER_AS(&iParam0, &Global_54076, 2);
	AI_GOAL_LOOK_CLEAR(&iParam0);
	return;
}

void Function_160(int iParam0) //Position: 0x7C16 / 31766
{
	SAY_SINGLE_LINE_CONTEXT(&iParam0, 60, &Global_54076, 1, 0, 2, 4294967295, 4294967295, 0, 1);
	return;
}

var Function_161(var uParam0, int iParam1) //Position: 0x7C2F / 31791
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (!IS_ACTOR_VALID(&uParam0))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	if (!IS_ACTOR_VALID(&iParam1))
	{
		LOG_ERROR("Attempting to get distance between actors, where at least one is INVALID! Returning 0.0!");
		return 0.0f;
	}
	GET_POSITION(&uParam0, &Var0);
	GET_POSITION(&iParam1, &Var2);
	return VDIST(Var0, Var2);
}

void Function_162(int iParam0, int iParam1) //Position: 0x7D24 / 32036
{
	if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(&iParam0), "actorroam_lockon"))
	{
		iParam1 = DECOR_GET_FLOAT(GET_OBJECT_FROM_ACTOR(&iParam0), "actorroam_lockon");
	}
	else
	{
		iParam1 = 0.0f;
	}
	return;
}

void Function_163(int iParam0, bool bParam1) //Position: 0x7D71 / 32113
{
	DECOR_SET_INT(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_state", bParam1);
	return;
}

void Function_164(int iParam0) //Position: 0x7D95 / 32149
{
	REFERENCE_ACTOR(&iParam0);
	DECOR_SET_BOOL(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_ref", 1);
	return;
}

var Function_165(int iParam0) //Position: 0x7DBC / 32188
{
	return DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_speed");
}

var Function_166(int iParam0) //Position: 0x7DDD / 32221
{
	return DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_options");
}

var Function_167(int iParam0) //Position: 0x7E00 / 32256
{
	return DECOR_GET_OBJECT(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_target");
}

var Function_168(int iParam0) //Position: 0x7E22 / 32290
{
	return DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(&iParam0), "actorRoam_behavior");
}

var Function_169(bool bParam0) //Position: 0x7E46 / 32326
{
	return DECOR_GET_INT(GET_OBJECT_FROM_ACTOR(&bParam0), "actorRoam_state");
}

void Function_170() //Position: 0x7E67 / 32359
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

void Function_171() //Position: 0x7EB6 / 32438
{
	Function_170();
	return;
}

void Function_172(struct<57> Param0) //Position: 0x7EBF / 32447
{
	strcpy(&Param0 + 24, "GPS_MANAGER", 16);
	Param0 = 34358;
	*(&Param0 + 8) = 32763;
	*(&Param0 + 16) = 32508;
	Param0.f_56 = 1;
	return;
}

void Function_173() //Position: 0x7EFC / 32508
{
	if (IS_OBJECTSET_VALID(&Global_42862 + 16))
	{
		Function_174(&Global_42862 + 16);
		DESTROY_OBJECTSET(&Global_42862 + 16);
	}
	if (IS_LAYOUTREF_VALID(&Global_42862 + 8))
	{
		DESTROY_LAYOUT(&Global_42862 + 8);
	}
	if (IS_OBJECTSET_VALID(&Global_42834 + 16))
	{
		Function_174(&Global_42834 + 16);
		DESTROY_OBJECTSET(&Global_42834 + 16);
	}
	if (IS_LAYOUTREF_VALID(&Global_42834 + 8))
	{
		DESTROY_LAYOUT(&Global_42834 + 8);
	}
	if (IS_OBJECTSET_VALID(&Global_42890 + 16))
	{
		Function_174(&Global_42890 + 16);
		DESTROY_OBJECTSET(&Global_42890 + 16);
	}
	if (IS_LAYOUTREF_VALID(&Global_42890 + 8))
	{
		DESTROY_LAYOUT(&Global_42890 + 8);
	}
	if (IS_GAME_RESETTING() && !Global_6638)
	{
		CLEAR_GPS_PATH(0);
	}
	CLEAR_GPS_PATH(1);
	CLEAR_GPS_PATH(2);
	return;
}

void Function_174(var uParam0) //Position: 0x7FB2 / 32690
{
	var uVar0;
	
	if (!IS_OBJECTSET_VALID(&uParam0))
	{
		return;
	}
	while (GET_OBJECTSET_SIZE(&uParam0) >= 0)
	{
		uVar0 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, &uParam0);
		REMOVE_OBJECT_FROM_OBJECTSET(&uVar0, &uParam0);
		CLEAN_OBJECTSET(&uParam0);
		if (IS_OBJECT_VALID(&uVar0))
		{
			RELEASE_CURVE(GET_CURVE_FROM_OBJECT(&uVar0));
		}
	}
	return;
}

int Function_175() //Position: 0x8000 / 32768
{
	if (Function_176(&Global_42862))
	{
		return 1;
	}
	if (Function_176(&Global_42834))
	{
		return 1;
	}
	if (Function_176(&Global_42890))
	{
		return 1;
	}
	return 0;
}

bool Function_176(struct<105> Param0) //Position: 0x802E / 32814
{
	var uVar0;
	var uVar1;
	var uVar2;
	vector3 vVar3;
	
	switch (StackVal)
	{
		case 0x00000000:
			if ((Param0 != 1 || Param0 != 2) || Param0 != 3)
			{
				Param0.f_4 = 1;
			}
			break;
		
		case 0x00000001:
			if (Param0 == 3)
			{
				if (StackVal != 0)
				{
					Param0.f_24 = Global_42834.f_24;
				}
				else
				{
					Param0.f_24 = 393264;
				}
			}
			else if (Param0 == 1)
			{
				Param0.f_24 = 393264;
			}
			if (GET_OBJECTSET_SIZE(&Param0 + 16) >= 0)
			{
				Function_174(&Param0 + 16);
				CLEAN_OBJECTSET(&Param0 + 16);
			}
			if (FIND_TRAFFIC_PATH(&Param0 + 8, &Param0 + 16, &Global_54078, &Param0 + 32, Param0.f_24, &Param0 + 28))
			{
				*(&Param0 + 88) = Global_54078;
				Function_182(StackVal, GET_CURVE_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(false, &Param0 + 16)), *(&Param0 + 32), 0x41200000, 0, 0x3f800000, 1);
				vVar3 = { StackVal, StackVal, Function_182(StackVal, GET_CURVE_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(false, &Param0 + 16)), *(&Param0 + 32), 0x41200000, 0, 0x3f800000, 1) };
				Function_181(&vVar3);
				*(&Param0 + 56) = Function_181(&vVar3);
				Function_180(Param0.f_68, &uVar0, &uVar1, &uVar2);
				if (Param0 == 1)
				{
					SET_GPS_PATH(0, Param0.f_28, &Param0 + 16, uVar0, uVar1, uVar2, 1.0f, &Param0 + 32, 1);
				}
				else if (Param0 == 2)
				{
					SET_GPS_PATH(1, Param0.f_28, &Param0 + 16, uVar0, uVar1, uVar2, 1.0f, &Param0 + 32, Param0.f_100);
				}
				else
				{
					SET_GPS_PATH(2, Param0.f_28, &Param0 + 16, uVar0, uVar1, uVar2, 1.0f, &Param0 + 32, Param0.f_100);
				}
				Param0.f_84 = GET_CURRENT_GAME_TIME();
				Param0.f_4 = 2;
				REGISTER_GPS_CURVE_OBJECTSET(&Param0 + 16);
			}
			else
			{
				LOG_ERROR("Cannot find a path from here to there - check output for locations");
				CLEAR_GPS_PATH(2);
				Param0.f_4 = 3;
			}
		
		case 0x00000002:
			if ((Param0 != 2 || Param0 != 1) || Param0 != 3)
			{
				if (Param0.f_104 || Param0 != 3)
				{
					if (StackVal || Function_67(StackVal, (StackVal || Function_67(StackVal, Function_67(StackVal, StackVal, *(&Param0 + 32), Global_54078) > 15.0f, *(&Param0 + 56), Global_54078) > 15.0f), *(&Param0 + 44), Global_54078) > 15.0f)
					{
						if (Param0 == 1)
						{
							CLEAR_GPS_PATH(0);
						}
						else if (Param0 == 2)
						{
							CLEAR_GPS_PATH(1);
						}
						else
						{
							CLEAR_GPS_PATH(2);
						}
						Param0.f_4 = 3;
						return 0;
					}
				}
				if (Param0 == 1)
				{
					if (IS_GPS_RECOMPUTE(0))
					{
						Param0.f_4 = 1;
						return 0;
					}
				}
				if (Param0 == 2)
				{
					if (IS_GPS_RECOMPUTE(1))
					{
						Param0.f_4 = 1;
						return 0;
					}
				}
				if (IS_GPS_RECOMPUTE(2))
				{
					Param0.f_4 = 1;
					return 0;
				}
			}
			break;
		
		case 0x00000003:
			if (Param0 == 1)
			{
				Function_179();
			}
			else if (Param0 == 2)
			{
				Function_178();
			}
			else
			{
				Function_177();
			}
			if (IS_OBJECTSET_VALID(&Param0 + 16))
			{
				Function_174(&Param0 + 16);
				CLEAN_OBJECTSET(&Param0 + 16);
			}
			Param0.f_4 = 0;
			Param0 = 0;
			break;
	}
	return 0;
}

void Function_177() //Position: 0x8343 / 33603
{
	if (Global_42890 == 3)
	{
		Global_42890.f_4 = 3;
	}
	*(&Global_42890 + 32) = Vector(0.0f, 0.0f, 0.0f);
	*(&Global_42890 + 44) = Vector(0.0f, 0.0f, 0.0f);
	CLEAR_GPS_PATH(2);
	return;
}

void Function_178() //Position: 0x836E / 33646
{
	if (Global_42834 == 2)
	{
		Global_42834.f_4 = 3;
	}
	*(&Global_42834 + 32) = Vector(0.0f, 0.0f, 0.0f);
	*(&Global_42834 + 44) = Vector(0.0f, 0.0f, 0.0f);
	CLEAR_GPS_PATH(1);
	return;
}

void Function_179() //Position: 0x8399 / 33689
{
	if (Global_42862 == 1)
	{
		Global_42862.f_4 = 3;
	}
	*(&Global_42862 + 32) = Vector(0.0f, 0.0f, 0.0f);
	*(&Global_42862 + 44) = Vector(0.0f, 0.0f, 0.0f);
	CLEAR_GPS_PATH(0);
	return;
}

void Function_180(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x83C4 / 33732
{
	switch (iParam0)
	{
		case 0x00000001:
			uParam1 = 0,64f;
			uParam2 = 0,22f;
			uParam3 = 0,26f;
			break;
		
		case 0x00000002:
			uParam1 = 0,34f;
			uParam2 = 0,58f;
			uParam3 = 0,74f;
			break;
		
		case 0x00000000:
			uParam1 = 0,83f;
			uParam2 = 0,65f;
			uParam3 = 0,36f;
			break;
		
		case 0x00000003:
			uParam1 = 0,41f;
			uParam2 = 0,57f;
			uParam3 = 0,23f;
			break;
		
		case 0x00000005:
			uParam1 = Global_42834.f_72;
			uParam2 = Global_42834.f_76;
			uParam3 = Global_42834.f_80;
			break;
		
		case 0x00000004:
			uParam1 = Global_42890.f_72;
			uParam2 = Global_42890.f_76;
			uParam3 = Global_42890.f_80;
			break;
		
		default:
			uParam1 = 0,71f;
			uParam2 = 0,64f;
			uParam3 = 0,57f;
			break;
	}
}

struct<8> Function_181(vector3 vParam0) //Position: 0x84C9 / 33993
{
	struct<2> Var0;
	
	Var0 = vParam0;
	Var0.f_4 = vParam0.y;
	Var0.f_8 = vParam0.z;
	return StackVal, Var0;
}

vector3 Function_182(var uParam0, struct<2> Param1, float fParam3, float fParam4, float fParam5, int iParam6) //Position: 0x84EB / 34027
{
	bool bVar0;
	struct<13> Var1;
	
	if (!&fParam5 <= &fParam4)
	{
		fVar10 = &fParam5;
		fParam5 = &fParam4;
		fParam4 = fVar10;
	}
	GET_CURVE_POINT(&uParam0, &fParam4, &Var1, 0);
	Function_181(&Var1);
	bVar11 = VDIST(Function_181(&Var1), Param1);
	vVar7 = { StackVal, StackVal, Var1 };
	while (Var1.f_12 >= &fParam5 && !bVar0)
	{
		Var4 = { StackVal, StackVal, Var1 };
		UNK_0x19D652F9(&uParam0, FABS(&fParam3), &Var4, &Var1);
		Function_181(&Var1);
		bVar12 = VDIST(Function_181(&Var1), Param1);
		if (bVar12 > bVar11)
		{
			bVar11 = bVar12;
			vVar7 = { StackVal, StackVal, Var1 };
		}
		if (Function_185(&Var1))
		{
			bVar0 = true;
		}
	}
	if (&iParam6 < 1 && &fParam3 < 1.0f)
	{
		UNK_0x19D652F9(&uParam0, (&fParam3 / 2.0f), &vVar7, &Var1);
		UNK_0x19D652F9(&uParam0, (-1.0f * (&fParam3 / 2.0f)), &vVar7, &Var4);
		Function_182(StackVal, &uParam0, Param1, (&fParam3 / 10.0f), Function_184(Var4.f_12, Var1.f_12), Function_183(Var4.f_12, Var1.f_12), (&iParam6 - 1));
		return StackVal, StackVal, Function_182(StackVal, &uParam0, Param1, (&fParam3 / 10.0f), Function_184(Var4.f_12, Var1.f_12), Function_183(Var4.f_12, Var1.f_12), (&iParam6 - 1));
	}
	return StackVal, StackVal, vVar7;
}

var Function_183(int iParam0, int iParam1) //Position: 0x85ED / 34285
{
	if (iParam0 < iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

float Function_184(int iParam0, int iParam1) //Position: 0x8600 / 34304
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

bool Function_185(struct<13> Param0) //Position: 0x8613 / 34323
{
	if (Param0.f_12 > 0,001f || Param0.f_12 < 0,999f)
	{
		return 1;
	}
	return 0;
}

void Function_186() //Position: 0x8636 / 34358
{
	*(&Global_42862 + 8) = CREATE_LAYOUT("UserGPS");
	*(&Global_42862 + 16) = CREATE_OBJECTSET_IN_LAYOUT("UserGPSPath", &Global_42862 + 8, 36, 1);
	*(&Global_42834 + 8) = CREATE_LAYOUT("MissionGPS");
	*(&Global_42834 + 16) = CREATE_OBJECTSET_IN_LAYOUT("MissionGPSPath", &Global_42834 + 8, 36, 1);
	*(&Global_42890 + 8) = CREATE_LAYOUT("PosseGPS");
	*(&Global_42890 + 16) = CREATE_OBJECTSET_IN_LAYOUT("PosseGPSPath", &Global_42890 + 8, 36, 1);
	return;
}

void Function_187(struct<57> Param0) //Position: 0x86DD / 34525
{
	strcpy(&Param0 + 24, "OUTFIT-MANAGER", 16);
	Param0 = 41011;
	*(&Param0 + 8) = 34595;
	*(&Param0 + 16) = 34589;
	Param0.f_56 = 0;
	return;
}

void Function_188() //Position: 0x871D / 34589
{
	return;
}

int Function_189() //Position: 0x8723 / 34595
{
	char* cVar0[32];
	bool bVar8;
	bool bVar9;
	
	if (!IS_ACTOR_VALID(&Global_54076))
	{
		return 0;
	}
	if (!IS_ACTOR_ALIVE(&Global_54076))
	{
		return 0;
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "outfitScrap"))
	{
		if ((((!Global_6623 && !Global_6635) && !Global_6627) && !Function_225()) && Function_224() != 0)
		{
			bVar8 = DECOR_GET_INT(&Global_54076, "outfitScrap");
			strcpy(&cVar0, "OUT_", 32);
			stradd(&cVar0, &Global_42265[bVar89] + 32, 32);
			DECOR_REMOVE(&Global_54076, "outfitScrap");
			PRINT_OBJECTIVE_FORMAT(7,5f, "out_Journal_Edit", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
		}
	}
	if (DECOR_CHECK_EXIST(&Global_54076, "outfitDisc"))
	{
		if ((!Global_6623 && !Function_225()) && Function_224() != 0)
		{
			bVar8 = DECOR_GET_INT(&Global_54076, "outfitDisc");
			strcpy(&cVar0, "OUT_", 32);
			stradd(&cVar0, &Global_42265[bVar89] + 32, 32);
			DECOR_REMOVE(&Global_54076, "outfitDisc");
			PRINT_OBJECTIVE_FORMAT(7,5f, "out_Journal_Add", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
		}
	}
	if (!Global_42826 != Global_42825)
	{
		bVar9 = GET_ACTOR_ENUM(&Global_54076);
		if (!Function_223(Global_42826, 1024))
		{
			STREAMING_REQUEST_ACTOR(bVar9, SHIFT_LEFT(true, Global_42265[Global_428269].f_20), false);
			STREAMING_EVICT_ACTOR(bVar9, SHIFT_LEFT(true, Global_42265[Global_428259].f_20));
			Function_222(Global_42826, 1024);
			Function_221(Global_42825, 1024);
			Function_221(Global_42825, 2048);
			Function_220(Global_42825);
		}
		if (!Function_223(Global_42826, 4096) && HUD_IS_FADED())
		{
			SWITCH_ACTOR_ENUM_VARIATION(&Global_54076, Global_42265[Global_428269].f_20);
			Function_222(Global_42826, 4096);
			Function_221(Global_42825, 4096);
		}
		if (!Function_223(Global_42826, 2048))
		{
			if (STREAMING_IS_ACTOR_LOADED(bVar9, 4294967295))
			{
				Function_222(Global_42826, 2048);
			}
		}
		if (!HUD_IS_FADED())
		{
			if (!HUD_IS_FADING())
			{
				HUD_FADE_OUT(0.0f, 1f, 1);
			}
		}
		if ((HUD_IS_FADED() && Function_223(Global_42826, 2048)) && Function_223(Global_42826, 4096))
		{
			if (Global_42826 != 1 || Global_42825 != 1)
			{
				if (Global_43789 == Global_46914[0])
				{
					Function_214(0, 1, 0);
				}
			}
			Global_42825 = Global_42826;
			Function_211(Global_42826);
			if (Function_223(Global_42826, 8192))
			{
				Function_221(Global_42826, 8192);
				DECOR_SET_BOOL(&Global_54076, "OutfitChanged", 1);
				WAIT(500);
				HUD_FADE_IN(0,25f, 1065353216);
			}
		}
	}
	bVar8 = false;
	while (bVar8 <= Global_42265)
	{
		if (Global_42265[bVar89] != 4294967295)
		{
			Function_202(bVar8);
			if (Function_191(bVar8))
			{
				if (Global_42265[bVar89].f_64 >= 0)
				{
					SET_JOURNAL_ENTRY_DISALLOW_TRACKING(Global_42265[bVar89].f_64, 0);
				}
			}
			else
			{
				if (Global_42265[bVar89].f_64 >= 0)
				{
					SET_JOURNAL_ENTRY_DISALLOW_TRACKING(Global_42265[bVar89].f_64, 1);
				}
				if (Global_42827 == bVar8)
				{
					Function_190();
				}
			}
		}
		bVar8++;
	}
	return 0;
}

void Function_190() //Position: 0x8A3B / 35387
{
	Global_42827 = 4294967295;
	if (IS_BLIP_VALID(&Global_42827 + 8))
	{
		REMOVE_BLIP(&Global_42827 + 8);
	}
	Global_42827.f_16 = 1;
	return;
}

bool Function_191(int iParam0) //Position: 0x8A60 / 35424
{
	int iVar0;
	
	if (Function_201(iParam0))
	{
		if (Function_200(iParam0) && !Function_199(iParam0))
		{
			iVar0 = Function_198(iParam0);
			switch (iParam0)
			{
				case 0x00000004:
					switch (iVar0)
					{
						case 0x00000001:
							return 1;
							break;
						
						case 0x00000002:
							if (Function_112(6, 0) || Function_112(12, 0))
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
							if (Function_111(13))
							{
								if (Function_193(&(Global_99725[1443]), 14, 1, 1) && !Function_192(14))
								{
									return 1;
								}
								return 0;
							}
							if (Function_111(12))
							{
								if ((Function_193(&(Global_99725[1343]), 13, 1, 1) && !Function_192(13)) && !IS_EARLIER_THAN(GET_TIME_OF_DAY(), &Global_99725[1343] + 240))
								{
									return 1;
								}
								return 0;
							}
							if (Function_111(11))
							{
								if ((Function_193(&(Global_99725[1243]), 12, 1, 1) && !Function_192(12)) && !IS_EARLIER_THAN(GET_TIME_OF_DAY(), &Global_99725[1243] + 240))
								{
									return 1;
								}
								return 0;
							}
							if (Function_111(10))
							{
								if ((Function_193(&(Global_99725[1143]), 11, 1, 1) && !Function_192(11)) && !IS_EARLIER_THAN(GET_TIME_OF_DAY(), &Global_99725[1143] + 240))
								{
									return 1;
								}
								return 0;
							}
							if (Function_112(5, 0))
							{
								if (Function_193(&(Global_99725[1043]), 10, 1, 1) && !Function_192(10))
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
							if (Function_111(26))
							{
								if (Function_193(&(Global_99725[2743]), 27, 1, 1) && !Function_192(27))
								{
									return 1;
								}
								return 0;
							}
							if (Function_111(25))
							{
								if (Function_193(&(Global_99725[2643]), 26, 1, 1) && !Function_192(26))
								{
									return 1;
								}
								return 0;
							}
							if (Function_111(24))
							{
								if (Function_193(&(Global_99725[2543]), 25, 1, 1) && !Function_192(25))
								{
									return 1;
								}
								return 0;
							}
							if (Function_111(23))
							{
								if (Function_193(&(Global_99725[2443]), 24, 1, 1) && !Function_192(24))
								{
									return 1;
								}
								return 0;
							}
							if (Function_112(26, 0))
							{
								if (Function_193(&(Global_99725[2343]), 23, 1, 1) && !Function_192(23))
								{
									return 1;
								}
								return 0;
							}
							return 0;
							break;
						
						case 0x00000008:
							if (Function_111(55))
							{
								if ((Function_193(&(Global_99725[5643]), 56, 1, 1) && !Function_192(56)) && !IS_EARLIER_THAN(GET_TIME_OF_DAY(), &Global_99725[5643] + 240))
								{
									return 1;
								}
								return 0;
							}
							if (Function_111(54))
							{
								if ((Function_193(&(Global_99725[5543]), 55, 1, 1) && !Function_192(55)) && !IS_EARLIER_THAN(GET_TIME_OF_DAY(), &Global_99725[5543] + 240))
								{
									return 1;
								}
								return 0;
							}
							if (Function_111(27))
							{
								if (Function_193(&(Global_99725[5443]), 54, 1, 1) && !Function_192(54))
								{
									return 1;
								}
								return 0;
							}
							return 0;
							break;
						
						case 0x00000020:
							if (Function_112(41, 0))
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
							if (Function_111(52))
							{
								if ((Function_193(&(Global_99725[5343]), 53, 1, 1) && !Function_192(53)) && !IS_EARLIER_THAN(GET_TIME_OF_DAY(), &Global_99725[5343] + 240))
								{
									return 1;
								}
								return 0;
							}
							if (Function_111(51))
							{
								if (Function_193(&(Global_99725[5243]), 52, 1, 1) && !Function_192(52))
								{
									return 1;
								}
								return 0;
							}
							if (Function_111(50))
							{
								if (Function_193(&(Global_99725[5143]), 51, 1, 1) && !Function_192(51))
								{
									return 1;
								}
								return 0;
							}
							if (Function_111(49))
							{
								if (Function_193(&(Global_99725[5043]), 50, 1, 1) && !Function_192(50))
								{
									return 1;
								}
								return 0;
							}
							if (Function_112(17, 0))
							{
								if (Function_193(&(Global_99725[4943]), 49, 1, 1) && !Function_192(49))
								{
									return 1;
								}
								return 0;
							}
							return 0;
							break;
						
						case 0x00000020:
							if (Function_112(57, 0))
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
							if (Function_111(19))
							{
								if (Function_193(&(Global_99725[2043]), 20, 1, 1) && !Function_192(20))
								{
									return 1;
								}
								return 0;
							}
							if (Function_111(18))
							{
								if ((Function_193(&(Global_99725[1943]), 19, 1, 1) && !Function_192(19)) && !IS_EARLIER_THAN(GET_TIME_OF_DAY(), &Global_99725[1943] + 240))
								{
									return 1;
								}
								return 0;
							}
							if (Function_111(17))
							{
								if (Function_193(&(Global_99725[1843]), 18, 1, 1) && !Function_192(18))
								{
									return 1;
								}
								return 0;
							}
							if (Function_111(16))
							{
								if ((Function_193(&(Global_99725[1743]), 17, 1, 1) && !Function_192(17)) && !IS_EARLIER_THAN(GET_TIME_OF_DAY(), &Global_99725[1743] + 240))
								{
									return 1;
								}
								return 0;
							}
							if (Function_111(15))
							{
								if (Function_193(&(Global_99725[1643]), 16, 1, 1) && !Function_192(16))
								{
									return 1;
								}
								return 0;
							}
							if (Function_112(8, 0))
							{
								if (Function_193(&(Global_99725[1543]), 15, 1, 1) && !Function_192(15))
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

bool Function_192(int iParam0) //Position: 0x905A / 36954
{
	if (Global_116927[iParam06] == 7)
	{
		return 1;
	}
	return 0;
}

int Function_193(struct<265> Param0) //Position: 0x906F / 36975
{
	if (!Param0.f_260 != 0)
	{
		if (Function_197(&Param0 + 260, 4))
		{
			if (!Function_196(iParam1))
			{
				return 0;
			}
		}
		if (Function_197(&Param0 + 260, 1))
		{
			if (&Global_99725[Param0.f_25643] + 36 != &Global_99725[iParam143] + 36 || iParam3)
			{
				if (!Function_111(Param0.f_256))
				{
					return 0;
				}
			}
		}
		if (Function_197(&Param0 + 260, 2) && Global_6606)
		{
			if (!Function_112(Param0.f_264, 0))
			{
				return 0;
			}
		}
		if (Function_197(&Param0 + 260, 8) && Global_6606)
		{
			if (!Function_195(Param0.f_252, 0))
			{
				return 0;
			}
		}
		if (!&bParam2)
		{
			return 1;
		}
		return Function_194(&Param0);
	}
	return 1;
}

int Function_194(struct<261> Param0) //Position: 0x913B / 37179
{
	if (!Param0.f_260 != 0)
	{
		switch (Global_99472)
		{
			case 0x00000001:
				if (!Function_197(&Param0 + 260, 32))
				{
					return 0;
				}
				break;
			
			case 0x00000002:
				if (!Function_197(&Param0 + 260, 64))
				{
					return 0;
				}
				break;
			
			case 0x00000004:
				if (!Function_197(&Param0 + 260, 128))
				{
					return 0;
				}
				break;
			
			case 0x00000008:
				if (!Function_197(&Param0 + 260, 256))
				{
					return 0;
				}
				break;
			
			case 0x00000010:
				if (!Function_197(&Param0 + 260, 512))
				{
					return 0;
				}
				break;
			
			case 0x00000020:
				if (!Function_197(&Param0 + 260, 1024))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

bool Function_195(int iParam0, bool bParam1) //Position: 0x91F6 / 37366
{
	if (!Function_123(iParam0))
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

bool Function_196(int iParam0) //Position: 0x922D / 37421
{
	return Global_116927[iParam06].f_16;
}

bool Function_197(var uParam0, int iParam1) //Position: 0x923D / 37437
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_198(int iParam0) //Position: 0x925A / 37466
{
	int iVar0;
	int iVar1;
	
	if (!Function_201(iParam0))
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

bool Function_199(int iParam0) //Position: 0x92A9 / 37545
{
	if (!Function_201(iParam0))
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

bool Function_200(int iParam0) //Position: 0x92FA / 37626
{
	if (!Function_201(iParam0))
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

bool Function_201(int iParam0) //Position: 0x934C / 37708
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

void Function_202(int iParam0) //Position: 0x9362 / 37730
{
	int iVar0;
	
	if (!Function_201(iParam0))
	{
		return;
	}
	if (Function_199(iParam0))
	{
		return;
	}
	if (!Function_223(iParam0, 1048576))
	{
		return;
	}
	iVar0 = Function_210(iParam0);
	if (iVar0 >= Global_42265[iParam09].f_24)
	{
		Global_42265[iParam09].f_24 = iVar0;
		if (Global_42265[iParam09].f_24 == Global_42265[iParam09].f_28)
		{
			Function_203(iParam0, 0, 1);
		}
	}
	return;
}

void Function_203(bool bParam0, bool bParam1, bool bParam2) //Position: 0x93C5 / 37829
{
	char* cVar0[32];
	char* cVar8[32];
	
	if (!Function_201(bParam0))
	{
		LOG_ERROR("Attempting to mostly complete an invalid outfit");
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_199(bParam0))
	{
		if (!Function_200(bParam0))
		{
			Function_204(bParam0, 1, 0, 0, 1);
		}
		strcpy(&cVar0, "OUT_", 32);
		strcpy(&cVar8, "out_", 32);
		stradd(&cVar0, &Global_42265[bParam09] + 32, 32);
		stradd(&cVar8, &Global_42265[bParam09] + 32, 32);
		stradd(&cVar8, "_desc", 32);
		if (Global_42265[bParam09].f_64 != 4294967295 || (Global_42265[bParam09].f_64 != 0 && Global_42265[bParam09].f_28 < 0))
		{
			Global_42265[bParam09].f_64 = CREATE_JOURNAL_ENTRY(&cVar0, 4, bParam0, 0);
		}
		if (Global_42265[bParam09].f_64 == 4294967295 && Global_42265[bParam09].f_64 == 0)
		{
			CLEAR_JOURNAL_ENTRY(Global_42265[bParam09].f_64);
			PREPEND_JOURNAL_ENTRY(Global_42265[bParam09].f_64, true);
			PREPEND_JOURNAL_ENTRY_DETAIL(Global_42265[bParam09].f_64, &cVar8, 0, 2, false);
			SET_JOURNAL_ENTRY_PROGRESS(Global_42265[bParam09].f_64, -1.0f, false, 0);
			if (!&bParam1)
			{
				PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Finish", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
			}
		}
		Function_89(457, 1, 0, 0);
		Function_222(bParam0, 6);
		if (bParam0 == 3)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(23))
			{
				AWARD_ACHIEVEMENT(23);
			}
		}
		if (&bParam2)
		{
			if (!Function_71(0, 0, 1, 1))
			{
				Function_30(1);
				Function_29(1, 0);
			}
			else
			{
				Function_28();
			}
		}
	}
	return;
}

void Function_204(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x9566 / 38246
{
	char* cVar0[32];
	
	if (!Function_201(bParam0))
	{
		LOG_ERROR("Attempting to discover invalid outfit");
		return;
	}
	if (!Function_209(3) && !&bParam4)
	{
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_200(bParam0))
	{
		Function_89(456, 1, 0, 0);
		Function_222(bParam0, 2);
		if (&bParam2)
		{
			if (!Function_71(0, 0, 1, 1))
			{
				Function_30(1);
				Function_29(1, 5);
			}
			else
			{
				Function_28();
			}
		}
		Function_205(bParam0);
		strcpy(&cVar0, "OUT_", 32);
		stradd(&cVar0, &Global_42265[bParam09] + 32, 32);
		if ((!Function_225() && !&bParam1) && !Global_6623)
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Add", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (Function_225() || Global_6623)
		{
			if (!DECOR_CHECK_EXIST(&Global_54076, "outfitDisc"))
			{
				DECOR_SET_INT(&Global_54076, "outfitDisc", bParam0);
			}
		}
		if (&bParam3)
		{
			stradd(&cVar0, "_tip", 32);
			Function_5(&cVar0, 10.0f, 1, 0, 0, 1, 0);
		}
		if (!Function_7())
		{
			if (!Function_96(Global_119934, 2))
			{
				Function_91(&Global_54076, 2, 1, 0);
			}
		}
	}
}

void Function_205(bool bParam0) //Position: 0x96C2 / 38594
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
			if (Function_207(bParam0, Function_208(bVar24)))
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
			if (Function_207(bParam0, Function_208(bVar24)))
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
		SET_JOURNAL_ENTRY_PROGRESS(Global_42265[bParam09].f_64, (TO_FLOAT(Function_210(bParam0)) / TO_FLOAT(Global_42265[bParam09].f_28)), false, 0);
		Function_21(Global_42265[bParam09].f_64, 0);
		straddi(&cVar8, Function_206(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_42265[bParam09].f_64, &cVar8, 3);
	}
	return;
}

int Function_206(int iParam0) //Position: 0x9872 / 39026
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_201(iParam0))
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

bool Function_207(bool bParam0, int iParam1) //Position: 0x98C9 / 39113
{
	int iVar0;
	
	if (!Function_201(bParam0))
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

int Function_208(bool bParam0) //Position: 0x9928 / 39208
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_209(int iParam0) //Position: 0x9934 / 39220
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_39290[iParam0];
}

var Function_210(bool bParam0) //Position: 0x9950 / 39248
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_201(bParam0))
	{
		return 4294967295;
	}
	iVar0 = 1;
	iVar1 = 0;
	iVar2 = 0;
	iVar1 = iVar1;
	iVar1 = 0;
	while (iVar1 <= Global_42265[bParam09].f_28)
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

void Function_211(int iParam0) //Position: 0x99A6 / 39334
{
	int iVar0;
	int iVar1;
	
	if (!Function_201(iParam0))
	{
		LOG_ERROR("Attempting to do the SpecialEffects for an invalid outfit");
		return;
	}
	if (Global_42265[iParam09].f_12 & 1 >= 0)
	{
		SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, Global_42265[iParam09].f_16, true);
		iVar0 = GET_ACTOR_FACTION(&Global_54076);
	}
	if (Global_42265[iParam09].f_12 & 2 >= 0)
	{
		Function_212(78, 1, 1);
		if (!Function_96(Global_119935, 64))
		{
			Function_91(&Global_54076, 64, 2, 0);
		}
	}
	if (Global_42265[iParam09].f_12 & 32 >= 0)
	{
		SET_DEADEYE_REGENERATION_RATE_MULTIPLIER(0, 2.0f);
		SET_DEADEYE_POINT_MODIFIER(0, 2.0f);
	}
	if (Global_42265[iParam09].f_12 & 64 >= 0)
	{
		SET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, Global_42265[iParam09].f_16, 3);
		iVar1 = GET_ACTOR_FACTION(&Global_54076);
		DECOR_SET_BOOL(&Global_54076, "zMarston", 1);
		DECOR_SET_BOOL(&Global_54076, "zombie", 1);
		RESET_ACTIONTREE_FOR_ACTOR(&Global_54076);
	}
	if (Global_42265[iParam09].f_12 & 128 >= 0)
	{
		ACTOR_ENABLE_VARIABLE_MESH(&Global_54076, 23, true);
		ACTOR_ENABLE_VARIABLE_MESH(&Global_54076, 25, true);
	}
	return;
}

int Function_212(bool bParam0, bool bParam1, int iParam2) //Position: 0x9ADC / 39644
{
	if (bParam0 >= 4294967295 || bParam0 <= 79)
	{
		return 0;
	}
	if (&bParam1)
	{
		if (GET_ITEM_COUNT(Function_213(bParam0), Function_10()) == 0)
		{
			ADD_ITEM(Function_213(bParam0), Function_10(), &iParam2);
			return 1;
		}
	}
	ADD_ITEM(Function_213(bParam0), Function_10(), &iParam2);
	return 1;
}

var Function_213(bool bParam0) //Position: 0x9B2A / 39722
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

void Function_214(var uParam0, bool bParam1, int iParam2) //Position: 0x9C1E / 39966
{
	int iVar0;
	
	iVar0 = 0;
	if (IS_SCRIPT_VALID(&Global_46717))
	{
		TERMINATE_SCRIPT(&Global_46717);
	}
	if (IS_GAME_RESETTING())
	{
		bParam1 = 0;
	}
	if (&bParam1)
	{
		if (Function_153(Global_43789))
		{
			Function_219(&(Global_43791[Global_43789]), 131072);
			Function_218(&(Global_43791[Global_43789]), 2097152);
			Function_216(Global_43789);
		}
		else
		{
			bParam1 = 0;
		}
	}
	if (!&bParam1)
	{
		if (!HUD_IS_FADED())
		{
		}
		iVar0 = 0;
		while (iVar0 <= 146)
		{
			if (!StackVal != 1)
			{
				if (Function_215(&(Global_43791[iVar0]), 4) || Function_215(&(Global_43791[iVar0]), 1))
				{
					if (IS_SCRIPT_VALID(&Global_44085[iVar09] + 40))
					{
						TERMINATE_SCRIPT(&Global_44085[iVar09] + 40);
					}
					Function_218(&(Global_43791[iVar0]), 2097155);
					Function_219(&(Global_43791[iVar0]), 262144);
				}
			}
			iVar0++;
		}
		Global_6629 = 0;
		Global_6630 = 0;
		if (!IS_EXITFLAG_SET() && iParam2)
		{
			WAIT(false);
		}
		if (uParam0 & 1)
		{
			DESTROY_GC_OBJECTS(0, 1);
		}
		CLEAN_CACHE_ENTRIES();
		ENABLE_AMBIENT_SPAWNING(false);
	}
	return;
}

bool Function_215(var uParam0, int iParam1) //Position: 0x9D2A / 40234
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_216(int iParam0) //Position: 0x9D47 / 40263
{
	if (StackVal || ((StackVal || (StackVal || StackVal != 3 != 5) != 4) != 2 && !Global_6629))
	{
		if (StackVal == 2)
		{
			if (Function_217())
			{
				return;
			}
		}
		if (!Function_215(&(Global_43791[iParam0]), 2048))
		{
			Global_46719 = iParam0;
		}
		Global_43790 = StackVal;
	}
	else if (Global_6629)
	{
	}
	return;
}

bool Function_217() //Position: 0x9DC6 / 40390
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_43791)
	{
		if (StackVal && (StackVal && (StackVal && StackVal == 2 == 1) == 6) == 7)
		{
			if (Function_215(&(Global_43791[iVar0]), 4) || Function_215(&(Global_43791[iVar0]), 1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_218(var uParam0, int iParam1) //Position: 0x9E2F / 40495
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	uParam0 = (uParam0 - iVar0);
	return;
}

void Function_219(var uParam0, int iParam1) //Position: 0x9E49 / 40521
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_220(int iParam0) //Position: 0x9E5A / 40538
{
	if (!Function_201(iParam0))
	{
		LOG_ERROR("Attempting to undo the SpecialEffects for an invalid outfit");
		return;
	}
	if (Global_42265[iParam09].f_12 & 1 >= 0)
	{
		RESET_AMBIENT_FACTIONS_STATUS_TWO_WAY(2, Global_42265[iParam09].f_16);
	}
	if (Global_42265[iParam09].f_12 & 2 >= 0)
	{
	}
	if (Global_42265[iParam09].f_12 & 32 >= 0)
	{
		SET_DEADEYE_REGENERATION_RATE_MULTIPLIER(0, 1.0f);
		SET_DEADEYE_POINT_MODIFIER(0, 1.0f);
	}
	if (Global_42265[iParam09].f_12 & 64 >= 0)
	{
	}
	if (Global_42265[iParam09].f_12 & 128 >= 0)
	{
	}
	return;
}

void Function_221(int iParam0, int iParam1) //Position: 0x9F10 / 40720
{
	int iVar0;
	
	if (!Function_201(iParam0))
	{
		LOG_ERROR("Attempting to unset status on invalid outfit");
		return;
	}
	iVar0 = (StackVal && iParam1);
	Global_42265[iParam09].f_8 = (StackVal - iVar0);
	return;
}

void Function_222(bool bParam0, int iParam1) //Position: 0x9F75 / 40821
{
	if (!Function_201(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_42265[bParam09].f_8 = (StackVal || iParam1);
	return;
}

bool Function_223(int iParam0, int iParam1) //Position: 0x9FCA / 40906
{
	int iVar0;
	
	if (!Function_201(iParam0))
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

int Function_224() //Position: 0x9FF7 / 40951
{
	return Function_11(StackVal, 1);
}

bool Function_225() //Position: 0xA006 / 40966
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_226() //Position: 0xA033 / 41011
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_42265)
	{
		Global_42265[iVar09] = 4294967295;
		iVar0++;
	}
	Function_227(0, "cowboy", 0, 0, 2, 0, 3);
	Function_227(14, "poncho", 1, 17, 2, 0, 1);
	Function_227(13, "duster", 1, 16, 2, 0, 1);
	Function_227(15, "rancher", 1, 10, 2, 0, 1);
	Function_227(9, "military", 1, 9, 8, 1, 0);
	Function_227(18, "zhunter", 5, 24, 2, 2, 1);
	Function_227(19, "apoc", 1, 23, 2, 0, 1);
	Function_227(20, "zombie", 1, 22, 32, 64, 0);
	Function_227(21, "small", 1, 21, 2, 128, 1);
	Function_227(22, "apoc_z", 1, 14, 32, 64, 0);
	Function_227(23, "nzhunter_z", 5, 15, 32, 66, 0);
	if (Function_126(Function_73(0, 4, 1)) == 3 && Function_126(Function_73(0, 4, 1)) == 4)
	{
		Function_204(0, 1, 0, 0, 1);
		Function_203(0, 1, 0);
		Function_204(14, 1, 0, 0, 1);
		Function_203(14, 1, 0);
		Function_204(13, 1, 0, 0, 1);
		Function_203(13, 1, 0);
		Function_204(15, 1, 0, 0, 1);
		Function_203(15, 1, 0);
		Function_204(21, 1, 0, 0, 1);
		Function_203(21, 1, 0);
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
	if (Global_6605)
	{
		Global_42827 = 4294967295;
	}
	(&Global_42827 + 8) = "";
	return;
}

void Function_227(bool bParam0, char* cParam1, int iParam5, int iParam6) //Position: 0xA210 / 41488
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
	Global_42265[bParam09] = bParam0;
	strcpy(&Global_42265[bParam09] + 32, &cParam1, 16);
	if (Global_6605)
	{
		Global_42265[bParam09].f_4 = 0;
		Global_42265[bParam09].f_8 = 1;
	}
	if (&iParam6 == 0)
	{
		Function_222(bParam0, 8);
	}
	Global_42265[bParam09].f_28 = iParam2;
	Global_42265[bParam09].f_16 = iParam4;
	Global_42265[bParam09].f_20 = iParam3;
	Global_42265[bParam09].f_12 = iParam5;
	strcpy(&cVar0, "out_", 32);
	stradd(&cVar0, &Global_42265[bParam09] + 32, 32);
	cVar8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
	stradd(&cVar8, "_desc", 32);
	SATCHEL_CREATE_OUTFIT(&cVar0, &cVar8, &iParam6);
}

void Function_228(struct<57> Param0) //Position: 0xA35A / 41818
{
	strcpy(&Param0 + 24, "AMBIENT-UNLOCK", 16);
	Param0 = 50073;
	*(&Param0 + 8) = 41888;
	*(&Param0 + 16) = 41882;
	Param0.f_56 = 1;
	return;
}

void Function_229() //Position: 0xA39A / 41882
{
	return;
}

int Function_230() //Position: 0xA3A0 / 41888
{
	if (!Global_6607)
	{
		return 0;
	}
	Function_238();
	Function_233(1);
	Function_231();
	if ((Function_225() || HUD_IS_FADED()) || HUD_IS_FADING())
	{
		return 0;
	}
	if (!Function_138(8192))
	{
		return 0;
	}
	if ((((Global_6623 || Global_99146) || Global_6638) || Global_6637) || Global_6639)
	{
		return 0;
	}
	if (Global_39873 + 5.0f) < GET_CURRENT_GAME_TIME()
	{
		return 0;
	}
	return 0;
}

void Function_231() //Position: 0xA3FD / 41981
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_39324)
	{
		if (!Global_39324[iVar0])
		{
			switch (iVar0)
			{
				case 0x00000000:
					if (Function_112(2, 0))
					{
						Global_39324[iVar0] = 1;
						ENABLE_WORLD_SECTOR("ramitaBayaAfter");
						DISABLE_WORLD_SECTOR("ramitaBayaBefore");
						ENABLE_CURVE("rsdROAD_frb_road", true);
						ENABLE_CURVE("rsdROAD_fom_frb_road", true);
						ENABLE_CURVE("rsdGPSTRAIL_curve221", true);
					}
					break;
				
				case 0x00000001:
				case 0x00000002:
					Global_39324[iVar0] = 1;
					break;
				
				case 0x00000003:
					if (Function_112(2, 0))
					{
						Global_39324[iVar0] = 1;
						ENABLE_WORLD_SECTOR("butterBridgeB");
						DISABLE_WORLD_SECTOR("butterBridgeA");
						DISABLE_WORLD_SECTOR("butterBridgeD");
						DISABLE_WORLD_SECTOR("butterBridgeC");
						ENABLE_CURVE("rsdGPSTRAIL_butterBridge_path", true);
						DISABLE_CHILD_SECTOR("dlc_frb_zombie02x");
					}
					break;
				
				case 0x00000004:
					if (Function_111(5))
					{
						Global_39324[iVar0] = 1;
						ENABLE_WORLD_SECTOR("tannersSpanAfter");
						DISABLE_WORLD_SECTOR("tannersSpanBefore");
					}
					break;
				
				case 0x00000005:
					if (Function_111(5))
					{
						Global_39324[iVar0] = 1;
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
					Global_39324[iVar0] = 1;
					break;
				
				case 0x00000008:
					Global_39324[iVar0] = 1;
					break;
				
				case 0x00000009:
					if (Function_232(2) || Function_112(2, 0))
					{
						Global_39324[iVar0] = 1;
						ENABLE_WORLD_SECTOR("fronteraBridgeAfter");
						DISABLE_WORLD_SECTOR("fronteraBridgeBefore");
					}
					break;
				
				case 0x0000000A:
					Global_39324[iVar0] = 1;
					break;
				
				case 0x0000000B:
					Global_39324[iVar0] = 1;
					break;
				
				case 0x0000000C:
					if (Function_111(5))
					{
						Global_39324[iVar0] = 1;
						ENABLE_WORLD_SECTOR("masonBridgeAfter");
						DISABLE_WORLD_SECTOR("masonBridgeBefore");
					}
					break;
				
				case 0x0000000D:
					if (Function_111(5))
					{
						Global_39324[iVar0] = 1;
						ENABLE_CHILD_SECTOR("lmf_troughAfter01x");
						DISABLE_CHILD_SECTOR("lmf_troughBefore01x");
					}
					break;
				
				case 0x0000000E:
					Global_39324[iVar0] = 1;
					break;
				
				case 0x0000000F:
					Global_39324[iVar0] = 1;
					break;
				
				case 0x00000010:
					Global_39324[iVar0] = 1;
					break;
				
				case 0x00000011:
					Global_39324[iVar0] = 1;
					break;
				
				case 0x00000012:
					Global_39324[iVar0] = 1;
					break;
				
				case 0x00000013:
					Global_39324[iVar0] = 1;
					break;
				
				case 0x00000014:
					Global_39324[iVar0] = 1;
					break;
				
				case 0x00000015:
					if (Function_111(24))
					{
						Global_39324[iVar0] = 1;
						ENABLE_CHILD_SECTOR("mp_lsh_ffa01x");
					}
					break;
				
				case 0x00000016:
					Global_39324[iVar0] = 1;
					break;
				
				case 0x00000017:
					if (Function_112(4, 0))
					{
						Global_39324[iVar0] = 1;
						ENABLE_CHILD_SECTOR("beh_grave01x");
					}
					break;
				
				case 0x00000018:
					if (Function_112(2, 0))
					{
						Global_39324[iVar0] = 1;
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
					if (Function_111(8))
					{
						Global_39324[iVar0] = 1;
						ENABLE_CHILD_SECTOR("dlc_fom_ladders01x");
					}
					break;
				
				case 0x0000001A:
					Global_39324[iVar0] = 1;
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

int Function_232(int iParam0) //Position: 0xB767 / 46951
{
	int iVar0;
	
	if (!Function_115(iParam0))
	{
		return 0;
	}
	iVar0 = Function_114(iParam0);
	if (!Function_123(Function_114(iParam0)))
	{
		return 0;
	}
	if (StackVal == 2)
	{
		return 1;
	}
	return 0;
}

void Function_233(bool bParam0) //Position: 0xB79D / 47005
{
	int iVar0;
	bool bVar1;
	
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 <= Global_39290)
	{
		if ((!Global_39290[iVar0] && (!&bParam0 || !Function_225())) && !bVar1)
		{
			switch (iVar0)
			{
				case 0x00000000:
				case 0x00000002:
					Global_39290[iVar0] = 1;
					break;
				
				case 0x00000001:
					Global_39290[iVar0] = 1;
					SET_DISABLE_DEADEYE(0, 0);
					SET_DEADEYE_MULTILOCK_ENABLE(0, true);
					SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
					SET_PLAYER_ENDLESS_READYMODE(0, 1);
					Function_100(390, 3.0f);
					Function_40(390, 3, 0);
					break;
				
				case 0x00000003:
					Global_39290[iVar0] = 1;
					break;
				
				case 0x00000004:
					if (Function_111(2))
					{
						Global_39290[iVar0] = 1;
						Function_237(1);
						ENABLE_AMBIENT_SPAWNING(true);
					}
					break;
				
				case 0x00000005:
					Global_39290[iVar0] = 1;
					break;
				
				case 0x00000009:
					Global_39290[iVar0] = 1;
					break;
				
				case 0x00000006:
					Global_39290[iVar0] = 1;
					break;
				
				case 0x00000007:
					Global_39290[iVar0] = 1;
					break;
				
				case 0x00000008:
					if (Function_111(4))
					{
						Global_39290[iVar0] = 1;
					}
					break;
				
				case 0x0000000A:
					Global_39290[iVar0] = 1;
					break;
				
				case 0x0000000B:
					if (Function_235(0) || !Global_6606)
					{
						Global_39290[iVar0] = 1;
					}
					break;
				
				case 0x0000000C:
					Global_39290[iVar0] = 1;
					Function_234(1);
					break;
				
				case 0x0000000F:
				case 0x0000000D:
				case 0x0000000E:
					Global_39290[iVar0] = 0;
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

void Function_234(bool bParam0) //Position: 0xB953 / 47443
{
	if (DECOR_CHECK_EXIST(&Global_54076, "DISABLE_HORSE_WHISTLE"))
	{
		if (bParam0)
		{
			DECOR_REMOVE(&Global_54076, "DISABLE_HORSE_WHISTLE");
		}
	}
	else if (!bParam0)
	{
		DECOR_SET_BOOL(&Global_54076, "DISABLE_HORSE_WHISTLE", 1);
	}
	return;
}

int Function_235(int iParam0) //Position: 0xB9CA / 47562
{
	if (iParam0 > 0 || iParam0 < 4)
	{
		LOG_ERROR("HAS_GRAVEYARD_EVER_BEEN_COMPLETED: iDeedIndex is out of range!");
		return 0;
	}
	return Global_21684[Function_236(iParam0)7].f_12 < 0;
}

int Function_236(int iParam0) //Position: 0xBA30 / 47664
{
	if (iParam0 > 0 || iParam0 < 4)
	{
		LOG_ERROR("\HAS_GRAVEYARD_EVER_BEEN_COMPLETED: iDeedIndex is out of range, returning gHideoutTwinRocks!");
		return Global_46948;
	}
	switch (iParam0)
	{
		case 0x00000000:
			return Global_46948;
			break;
		
		case 0x00000001:
			return Global_46949;
			break;
		
		case 0x00000004:
			return Global_46950;
			break;
		
		case 0x00000003:
			return Global_46951;
			break;
		
		case 0x00000002:
			return Global_46952;
			break;
	}
	return Global_46948;
}

void Function_237(int iParam0) //Position: 0xBAF2 / 47858
{
	if (Function_11(iParam0, 1) && !Function_11(Global_39556, 1))
	{
	}
	Global_39556 = (Global_39556 || iParam0);
	Global_39556 |= 1073741824;
	return;
}

void Function_238() //Position: 0xBB1F / 47903
{
	float fVar0;
	int iVar1;
	
	fVar0 = 0.0f;
	iVar1 = Function_246();
	fVar0 = (fVar0 + (15.0f * Function_184(1.0f, (IntToFloat(Function_55(9)) / 3.0f))));
	fVar0 = (fVar0 + (20.0f * Function_184(1.0f, (IntToFloat(Function_55(407)) / 10.0f))));
	fVar0 = (fVar0 + (10.0f * Function_184(1.0f, (IntToFloat(Function_55(656)) / 5.0f))));
	fVar0 = (fVar0 + (4.0f * Function_184(1.0f, (IntToFloat(iVar1) / 1.0f))));
	fVar0 = (fVar0 + (15.0f * Function_184(1.0f, (IntToFloat(Function_55(657)) / 15.0f))));
	fVar0 = (fVar0 + (20.0f * Function_184(1.0f, (Function_51(658) / 20.0f))));
	if (Function_245(3) > 10)
	{
		fVar0 = (fVar0 + 4.0f);
	}
	if (Function_245(0) > 10)
	{
		fVar0 = (fVar0 + 4.0f);
	}
	if (Function_245(2) > 10)
	{
		fVar0 = (fVar0 + 4.0f);
	}
	if (Function_245(1) > 10)
	{
		fVar0 = (fVar0 + 4.0f);
	}
	if (Global_47151[7])
	{
		Function_244(iVar1);
	}
	if (fVar0 < Function_51(5))
	{
		Function_243(5, fVar0, 0);
		Function_244(iVar1);
	}
	if (fVar0 <= 100.0f && Global_6662)
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(47))
		{
			AWARD_ACHIEVEMENT(47);
			Function_5("UN_100", 0x41200000, 1, 0, 2, 1, 0);
		}
	}
	Function_239();
	return;
}

void Function_239() //Position: 0xBC57 / 48215
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Function_112(1, 0))
	{
		Function_242(12, 0);
	}
	if (Function_112(2, 0))
	{
		Function_242(12, 1);
	}
	if (Function_112(3, 0))
	{
		Function_242(12, 2);
	}
	if (Function_111(7))
	{
		Function_242(12, 3);
	}
	if (Function_111(10))
	{
		Function_242(12, 4);
	}
	if (Function_111(18))
	{
		Function_242(12, 5);
	}
	if (Function_111(14))
	{
		Function_242(12, 6);
	}
	if (Function_111(1))
	{
		Function_242(12, 7);
	}
	if (Function_111(21))
	{
		Function_242(12, 8);
	}
	if (Function_111(27))
	{
		Function_242(12, 9);
	}
	if (Function_111(23))
	{
		Function_242(12, 10);
	}
	if (Function_111(5))
	{
		Function_242(12, 11);
	}
	if (Function_111(37))
	{
		Function_242(12, 12);
	}
	if (Function_121(Function_236(0)) >= 0)
	{
		Function_242(12, 13);
	}
	if (Function_121(Function_236(4)) >= 0)
	{
		Function_242(12, 14);
	}
	if (Function_121(Function_236(1)) >= 0)
	{
		Function_242(12, 15);
	}
	if (Function_121(Function_236(3)) >= 0)
	{
		Function_242(12, 16);
	}
	if (Function_121(Function_236(2)) >= 0)
	{
		Function_242(12, 17);
	}
	iVar0 = Function_245(1);
	switch (iVar0)
	{
		case 0x0000000A:
			Function_242(12, 22);
		
		case 0x00000005:
			Function_242(12, 21);
		
		case 0x00000004:
			Function_242(12, 20);
		
		case 0x00000003:
			Function_242(12, 19);
		
		case 0x00000002:
			Function_242(12, 18);
			break;
	}
	iVar0 = Function_245(0);
	switch (iVar0)
	{
		case 0x0000000A:
			Function_242(12, 27);
		
		case 0x00000005:
			Function_242(12, 26);
		
		case 0x00000004:
			Function_242(12, 25);
		
		case 0x00000003:
			Function_242(12, 24);
		
		case 0x00000002:
			Function_242(12, 23);
			break;
	}
	iVar0 = Function_245(3);
	switch (iVar0)
	{
		case 0x0000000A:
			Function_242(13, 4);
		
		case 0x00000005:
			Function_242(13, 3);
		
		case 0x00000004:
			Function_242(13, 2);
		
		case 0x00000003:
			Function_242(13, 1);
		
		case 0x00000002:
			Function_242(13, 0);
			break;
	}
	if (Function_241(2, 6, 0) == 0.0f)
	{
		Function_242(13, 5);
	}
	if (Function_241(2, 8, 0) == 0.0f)
	{
		Function_242(13, 6);
	}
	if (Function_241(2, 7, 0) == 0.0f)
	{
		Function_242(13, 7);
	}
	if (Function_241(2, 5, 0) == 0.0f)
	{
		Function_242(13, 8);
	}
	if (Function_245(2) == 10)
	{
		Function_242(13, 9);
	}
	if (Function_207(18, 1))
	{
		Function_242(13, 10);
	}
	if (Function_207(18, 2))
	{
		Function_242(13, 11);
	}
	if (Function_207(18, 4))
	{
		Function_242(13, 12);
	}
	if (Function_207(18, 8))
	{
		Function_242(13, 13);
	}
	if (Function_207(18, 16))
	{
		Function_242(13, 14);
	}
	iVar1 = 4;
	iVar2 = Function_121(Function_240(Global_46838[1]));
	iVar3 = Function_121(Function_240(Global_46894[1]));
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
		Function_242(14, (iVar1 + iVar4));
		iVar4++;
	}
	iVar1 = 13;
	iVar4 = 0;
	while (iVar4 <= iVar3)
	{
		Function_242(14, (iVar1 + iVar4));
		iVar4++;
	}
	return;
}

int Function_240(bool bParam0) //Position: 0xBF71 / 49009
{
	if (Function_153(bParam0))
	{
		return Function_73(bParam0, 0, 2);
	}
	return 4294967295;
}

float Function_241(bool bParam0, bool bParam1, bool bParam2) //Position: 0xBF8B / 49035
{
	char* cVar0[16];
	bool bVar4;
	
	if (&bParam2)
	{
		if (0 | Global_53524.f_44)
		{
			return (*&Global_78078[bParam018] + 44)[bParam1];
		}
		return (*&Global_77932[bParam018] + 44)[bParam1];
	}
	strcpy(&cVar0, INT_TO_STRING(bParam0), 16);
	stradd(&cVar0, "_FLOATSLOT", 16);
	stradd(&cVar0, INT_TO_STRING(bParam1), 16);
	bVar4 = Function_3();
	if (IS_LAYOUTREF_VALID(&bVar4))
	{
		if (DECOR_CHECK_EXIST(&bVar4, &cVar0))
		{
			return DECOR_GET_FLOAT(&bVar4, &cVar0);
		}
		return -1.0f;
	}
	LOG_ERROR("AM_RETRIEVE_FLOAT: failed to retrieve float value from slot");
	return -1.0f;
}

void Function_242(int iParam0, int iParam1) //Position: 0xC054 / 49236
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

int Function_243(int iParam0, bool bParam1, bool bParam2) //Position: 0xC0BE / 49342
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 >= 696)
	{
		LOG_ERROR("STAT_SET_VALUE_NOW: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 5)
	{
		PRINTSTRING("STAT_SET_VALUE_NOW: You cannot set value of this STAT_TYPE_LIFETIME directly: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_NOW: You cannot set value of a STAT_TYPE_LIFETIME directly, use the COLLECTION version instead!");
		return 0;
	}
	if (Global_55480[iParam016].f_96 == 2)
	{
		PRINTSTRING("STAT_SET_VALUE_NOW: You cannot set value of this STAT_TYPE_COLLECTIBLE directly: ");
		PRINTSTRING(&(Global_55480[iParam016]));
		PRINTNL();
		LOG_ERROR("STAT_SET_VALUE_NOW: You cannot set value of a STAT_TYPE_COLLECTIBLE directly, only increase and decrease operations are allowed");
		return 0;
	}
	if (Global_54086[iParam0] > bParam1)
	{
		Function_54(iParam0, bParam1, 0);
	}
	Global_54086[iParam0] = bParam1;
	Function_53(iParam0);
	if (&bParam2)
	{
		Function_41(iParam0, 1, bParam1, 0, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_244(int iParam0) //Position: 0xC32B / 49963
{
	if (Function_245(3) > 10)
	{
	}
	if (Function_245(0) > 10)
	{
	}
	if (Function_245(2) > 10)
	{
	}
	if (Function_245(1) > 10)
	{
	}
	return;
}

int Function_245(int iParam0) //Position: 0xC355 / 50005
{
	if (0 | Global_53524.f_44)
	{
		return StackVal;
	}
	return StackVal;
}

var Function_246() //Position: 0xC37D / 50045
{
	int iVar0;
	
	if (Function_199(18) || Function_199(23))
	{
		iVar0++;
	}
	return iVar0;
}

void Function_247() //Position: 0xC399 / 50073
{
	if (!Global_6606)
	{
		Function_255();
	}
	Function_254();
	Function_248();
	return;
}

void Function_248() //Position: 0xC3AF / 50095
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_39428)
	{
		if (Global_39428[iVar0])
		{
			Function_249(iVar0);
		}
		iVar0++;
	}
	return;
}

void Function_249(int iParam0) //Position: 0xC3D8 / 50136
{
	bool bVar0;
	char* cVar1[16];
	
	bVar0 = true;
	switch (iParam0)
	{
		case 0x00000001:
		case 0x00000004:
			bVar0 = false;
			break;
		
		case 0x00000009:
			if (!Global_39428[iParam0])
			{
				Function_253(992, 0, 1);
				Function_212(52, 1, 0);
			}
			break;
		
		case 0x0000000A:
			break;
		
		case 0x0000000D:
			UI_CHEAT_SET_STATE(4, 1);
			Function_250(4);
			break;
		
		case 0x0000000E:
			UI_CHEAT_SET_STATE(25, 1);
			Function_250(4);
			break;
		
		case 0x0000000F:
			UI_CHEAT_SET_STATE(7, 1);
			Function_250(4);
			break;
		
		case 0x00000010:
			UI_CHEAT_SET_STATE(11, 1);
			Function_250(4);
			break;
		
		case 0x00000011:
			UI_CHEAT_SET_STATE(13, 1);
			Function_250(4);
			break;
		
		case 0x00000012:
			UI_CHEAT_SET_STATE(16, 1);
			Function_250(4);
			break;
		
		case 0x00000013:
			UI_CHEAT_SET_STATE(17, 1);
			Function_250(4);
			break;
		
		case 0x00000014:
			UI_CHEAT_SET_STATE(18, 1);
			Function_250(4);
			break;
		
		case 0x00000015:
			UI_CHEAT_SET_STATE(24, 1);
			Function_250(4);
			break;
		
		case 0x00000016:
			UI_CHEAT_SET_STATE(26, 1);
			Function_250(4);
			break;
		
		case 0x00000017:
			UI_CHEAT_SET_STATE(22, 1);
			Function_250(4);
			break;
		
		case 0x00000018:
			UI_CHEAT_SET_STATE(28, 1);
			Function_250(4);
			break;
		
		case 0x00000019:
			UI_CHEAT_SET_STATE(35, 1);
			Function_250(4);
			break;
		
		case 0x0000001A:
			UI_CHEAT_SET_STATE(36, 1);
			Function_250(4);
			break;
		
		case 0x0000001B:
			UI_CHEAT_SET_STATE(37, 1);
			Function_250(4);
			break;
		
		case 0x0000001C:
			UI_CHEAT_SET_STATE(38, 1);
			Function_250(4);
			break;
		
		case 0x0000001D:
			UI_CHEAT_SET_STATE(39, 1);
			Function_250(4);
			break;
		
		case 0x0000001E:
			UI_CHEAT_SET_STATE(23, 1);
			Function_250(4);
			break;
		
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
	if (!Global_39428[iParam0])
	{
		if (bVar0)
		{
			strcpy(&cVar1, "unlock_help_", 16);
			straddi(&cVar1, iParam0, 16);
			Function_5(&cVar1, 0x41200000, 1, 0, 2, 1, 0);
		}
	}
	Global_39428[iParam0] = 1;
	return;
}

int Function_250(bool bParam0) //Position: 0xC664 / 50788
{
	struct<4> Var0;
	
	if (bParam0 != 4)
	{
		if (Function_252("xmlsave"))
		{
			if (IS_DEV_BUILD())
			{
				SAVE_GAME(SS_GET_STRING(2, bParam0));
			}
		}
	}
	if (bParam0 <= 4)
	{
		if (Function_7())
		{
			Var0 = { StackVal, StackVal, StackVal, Function_251() };
			SAVE_MANAGER_CREATE_SAVE_DISPLAY_NAME(&Var0);
		}
		else
		{
			SAVE_MANAGER_CREATE_SAVE_DISPLAY_NAME(&Global_6667[Global_1096628] + 16);
		}
	}
	if (bParam0 != 4)
	{
		Function_32();
	}
	SAVE_MANAGER_HARD_SAVE(SS_GET_STRING(3, bParam0));
	return 1;
}

struct<16> Function_251() //Position: 0xC6CB / 50891
{
	int iVar0;
	int iVar1;
	
	iVar1 = 4294967295;
	iVar0 = 0;
	while (iVar0 <= 38)
	{
		if (Function_111(iVar0))
		{
			if (iVar1 == 4294967295)
			{
				iVar1 = iVar0;
			}
			else if (Global_116927[iVar06].f_40 < Global_116927[iVar16].f_40)
			{
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar1 == 4294967295)
	{
		return StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16);
	}
	if (Global_21684[Function_114(Global_10966)7].f_32 < Global_116927[iVar16].f_40)
	{
		return StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16);
	}
	return StackVal, StackVal, StackVal, *(&Global_99725[iVar143] + 4);
}

bool Function_252(int iParam0) //Position: 0xC768 / 51048
{
	var uVar0;
	
	uVar0 = _GET_PARAM_VALUE(&iParam0, "blah");
	if (IS_STRING_VALID(&uVar0))
	{
		return 1;
	}
	return 0;
}

void Function_253(var uParam0, bool bParam1, bool bParam2) //Position: 0xC78A / 51082
{
	Global_21473 = uParam0;
	if (&bParam1)
	{
		Function_12(&Global_21369 + 72 + 32, 128);
	}
	if (&bParam2)
	{
		Function_12(&Global_21369 + 72 + 32, 64);
	}
	return;
}

void Function_254() //Position: 0xC7B9 / 51129
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
	if (!Function_252("noZombieFireArt"))
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
	while (iVar0 <= Global_39324)
	{
		Global_39324[iVar0] = !Global_6606;
		switch (iVar0)
		{
			case 0x00000000:
				if (Global_6606)
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
				if (Global_6606)
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
				if (Global_6606)
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
				if (Global_6606)
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
				if (Global_6606)
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
				if (Global_6606)
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
				if (Global_6606)
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
				if (Global_6606)
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
				if (Global_6606)
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
				ENABLE_CURVE("rsdGPSTRAIL_elm_cas_path", !Global_6606);
				ENABLE_CURVE("rsdGPSTRAIL_curve495", !Global_6606);
				ENABLE_CURVE("rsdGPSTRAIL_elm_cas_pathdetachedCurve12", !Global_6606);
				ENABLE_CURVE("rsdGPSTRAIL_elm_cas_pathdetachedCurve13", !Global_6606);
				ENABLE_CURVE("rsdGPSTRAIL_elm_cas_loop1", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_cas_ram_pathdetachedCurve10", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_cas_ram_pathdetachedCurve8", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_cas_ram_pathdetachedCurve6", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_las_nos_pathdetachedCurve2", !Global_6606);
				ENABLE_CURVE("rsdROAD_las_esc_roaddetachedCurve10detachedCurve1", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_curve44", !Global_6606);
				ENABLE_CURVE("rsdROAD_las_esc_roaddetachedCurve18", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_cas_ram_pathdetachedCurve2", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_cas_ram_pathdetachedCurve4detachedCurve2", !Global_6606);
				ENABLE_CURVE("rsdROAD_las_roaddetachedCurve4", !Global_6606);
				ENABLE_CURVE("rsdROAD_las_roaddetachedCurve2", !Global_6606);
				ENABLE_CURVE("rsdROAD_curve69", !Global_6606);
				ENABLE_CURVE("rsdROAD_las_road", !Global_6606);
				ENABLE_CURVE("rsdROAD_frb_road", !Global_6606);
				ENABLE_CURVE("rsdGPSTRAIL_curve98", !Global_6606);
				ENABLE_CURVE("rsdGPSROAD_elm_cas_roaddetachedCurve4detachedCurve2", !Global_6606);
				ENABLE_CURVE("rsdGPSROAD_elm_cas_roaddetachedCurve4", !Global_6606);
				ENABLE_CURVE("rsdGPSTRAIL_elm_loop01_pathdetachedCurve2detachedCurve2", !Global_6606);
				ENABLE_CURVE("rsdGPSTRAIL_curve634", !Global_6606);
				ENABLE_CURVE("rsdGPSTRAIL_curve635", !Global_6606);
				ENABLE_CURVE("rsdGPSTRAIL_curve636", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_curve637", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_curve638", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_cas_loop04_pathdetachedCurve2", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_curve70", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_cas_loop04_path", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_cas_loop05_pathdetachedCurve4", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_cas_loop05_pathdetachedCurve2", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_cas_loop01_pathdetachedCurve2detachedCurve2", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_chu_loop01_pathdetachedCurve2detachedCurve2detachedCurve2detachedCurve2", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_chu_loop01_pathdetachedCurve2detachedCurve2detachedCurve2", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_chu_loop01_pathdetachedCurve2detachedCurve2", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_chu_loop01_pathdetachedCurve2", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_chu_loop01_pathdetachedCurve4", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_elm_cas_pathdetachedCurve10", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_elm_cas_pathdetachedCurve8", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_cas_loop03_path1", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_cas_loop03_path", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_elm_cas_pathdetachedCurve6", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_elm_cas_pathdetachedCurve4", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_elm_cas_pathdetachedCurve2", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_cas_loop02_path", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_cas_loop01_path1", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_cas_loop01_path", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_cas_loop03_path1detachedCurve4", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_cas_loop03_pathdetachedCurve4", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_cas_loop03_pathdetachedCurve2", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_cas_loop03_path1detachedCurve2", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_chu_loop01_path3detachedCurve2", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_chu_loop01_path3", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_cas_loop09_path", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_cas_loop06__path", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_cas_loop01_path1detachedCurve4", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_cas_loop01_pathdetachedCurve4", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_cas_loop01_path1detachedCurve2", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_cas_loop01_path1detachedCurve6", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_cas_loop07_pathdetachedCurve2detachedCurve2", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_cas_loop07_pathdetachedCurve2", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_cas_loop07_path", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_cas_loop02_path1", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_cas_ram_pathdetachedCurve4", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_cas_loop02_path1detachedCurve4", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_cas_loop02_path1detachedCurve2", !Global_6606);
				ENABLE_CURVE("rsdROAD_las_esc_roaddetachedCurve20detachedCurve2", !Global_6606);
				ENABLE_CURVE("rsdROAD_las_esc_roaddetachedCurve16", !Global_6606);
				ENABLE_CURVE("rsdROAD_las_esc_roaddetachedCurve12", !Global_6606);
				ENABLE_CURVE("rsdROAD_las_esc_roaddetachedCurve14", !Global_6606);
				ENABLE_CURVE("rsdGPSTRAIL_curve163", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_curve297", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_curve71", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_curve72", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_cas_ram_path", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_cas_loop04_pathdetachedCurve2detachedCurve2", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_cas_loop05_path", !Global_6606);
				ENABLE_CURVE("rsdTRAIL_cas_loop08_path", !Global_6606);
				ENABLE_CURVE("rsdGPSTRAIL_curve77", !Global_6606);
				ENABLE_CURVE("rsdGPSTRAIL_curve78", !Global_6606);
				ENABLE_CURVE("rsdGPSTRAIL_curve78", !Global_6606);
				ENABLE_CURVE("rsdGPSTRAIL_curve79", !Global_6606);
				ENABLE_CURVE("rsdGPSTRAIL_elm_loop01_pathdetachedCurve2detachedCurve4", !Global_6606);
				ENABLE_CURVE("rsdGPSTRAIL_elm_loop01_pathdetachedCurve2", !Global_6606);
				ENABLE_CURVE("rsdGPSTRAIL_elm_loop01_path", !Global_6606);
				ENABLE_CURVE("rsdGPSTRAIL_elm_loop02_path", !Global_6606);
				ENABLE_CURVE("rsdROAD_elm_cas_roaddetachedCurve8", !Global_6606);
				ENABLE_CURVE("rsdROAD_elm_cas_roaddetachedCurve6", !Global_6606);
				ENABLE_CURVE("rsdROAD_las_esc_roaddetachedCurve20", !Global_6606);
				break;
			
			case 0x00000019:
				ENABLE_CHILD_SECTOR("emt_caveDoor01x");
				DISABLE_CHILD_SECTOR("emt_caveDoor02x");
				if (Global_6606)
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
	if (Global_6606)
	{
		Function_231();
	}
	return;
}

void Function_255() //Position: 0x10A12 / 68114
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_39290)
	{
		Global_39290[iVar0] = !Global_6606;
		switch (iVar0)
		{
			case 0x00000000:
			case 0x00000002:
				Global_39290[iVar0] = 1;
				break;
			
			case 0x00000001:
				if (IS_ACTOR_VALID(&Global_54076))
				{
					SET_DISABLE_DEADEYE(0, 0);
					SET_DEADEYE_MULTILOCK_ENABLE(0, true);
					SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
					SET_PLAYER_ENDLESS_READYMODE(0, 1);
					Function_100(390, 3.0f);
					Function_40(390, 3, 0);
				}
				break;
			
			case 0x00000003:
				Global_39290[iVar0] = 1;
				break;
			
			case 0x00000004:
				if (Function_111(2) || !Global_6606)
				{
					Global_39290[iVar0] = 1;
					Function_237(1);
					ENABLE_AMBIENT_SPAWNING(true);
				}
				else
				{
					Global_39290[iVar0] = 0;
					Function_256(1);
					ENABLE_AMBIENT_SPAWNING(false);
				}
				break;
			
			case 0x00000005:
				Global_39290[iVar0] = 1;
				break;
			
			case 0x00000009:
				Global_39290[iVar0] = 1;
				break;
			
			case 0x00000006:
				Global_39290[iVar0] = 1;
				break;
			
			case 0x00000007:
				Global_39290[iVar0] = 1;
				break;
			
			case 0x00000008:
				if (Function_111(4))
				{
					Global_39290[iVar0] = 1;
				}
				else
				{
					Global_39290[iVar0] = 0;
				}
				break;
			
			case 0x0000000A:
				Global_39290[iVar0] = 1;
				break;
			
			case 0x0000000B:
				if (Function_235(0) || !Global_6606)
				{
					Global_39290[iVar0] = 1;
				}
				break;
			
			case 0x0000000C:
				Function_234(1);
				Global_39290[iVar0] = 1;
				break;
			
			case 0x0000000D:
			case 0x0000000F:
			case 0x0000000E:
				Global_39290[iVar0] = 0;
				break;
			
			default:
				LOG_ERROR("Found a FeatureType that is not enabled for unlocking!");
				break;
		}
		iVar0++;
	}
	if (Global_6606)
	{
		Function_233(0);
	}
	return;
}

void Function_256(int iParam0) //Position: 0x10BE9 / 68585
{
	int iVar0;
	
	if (Function_11(iParam0, 1) && Function_11(Global_39556, 1))
	{
	}
	iVar0 = (Global_39556 && iParam0);
	Global_39556 = (Global_39556 - iVar0);
	Global_39556 |= 1073741824;
	return;
}

void Function_257(struct<57> Param0) //Position: 0x10C1D / 68637
{
	strcpy(&Param0 + 24, "nTUTORIALS", 16);
	Param0 = 76268;
	*(&Param0 + 8) = 68702;
	*(&Param0 + 16) = 68696;
	Param0.f_56 = 1;
	return;
}

void Function_258() //Position: 0x10C58 / 68696
{
	return;
}

int Function_259() //Position: 0x10C5E / 68702
{
	return Function_260(0);
}

int Function_260(bool bParam0) //Position: 0x10C68 / 68712
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	if (!Global_6606)
	{
		return 0;
	}
	if (!IS_OBJECT_VALID(&Global_54076))
	{
		return 0;
	}
	if (!&bParam0 && !Function_138(8192))
	{
		return 0;
	}
	if (!&bParam0 && (((Function_225() || HUD_IS_FADED()) || HUD_IS_FADING()) || UI_ISACTIVE("SG_SaveFile")))
	{
		return 0;
	}
	if (!&bParam0 && (Global_39873 + 5.0f) < GET_CURRENT_GAME_TIME())
	{
		return 0;
	}
	if (!&bParam0 && ((((((((((Global_93258 || Global_6623) || Global_6625) || Global_6608) || Global_99146) || Global_6638) || Global_6637) || Global_6627) || Global_6610) || Global_6639) || !IS_ACTOR_ALIVE(&Global_54076)))
	{
		return 0;
	}
	bVar0 = DECOR_GET_INT(&Global_54076, "tutorial");
	bVar1 = DECOR_GET_INT(&Global_54076, "ntutorial2");
	bVar2 = DECOR_GET_INT(&Global_54076, "ntutorial3");
	switch (iLocal_99)
	{
		case 0x00000000:
			if (!Function_96(Global_119934, 1))
			{
				if (Function_263(bVar0, 1))
				{
					Function_262(&Global_119934, 1);
					Function_261(&Global_54076, 1, 1);
					if (!&bParam0)
					{
						Function_5("tut_zombie_fast", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119934, 2))
			{
				if (Function_263(bVar0, 2))
				{
					Function_262(&Global_119934, 2);
					Function_261(&Global_54076, 2, 1);
					if (!&bParam0)
					{
						Function_5("tut_zombie_bruiser", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119934, 4))
			{
				if (Function_263(bVar0, 4))
				{
					Function_262(&Global_119934, 4);
					Function_261(&Global_54076, 4, 1);
					if (!&bParam0)
					{
						Function_5("tut_zombie_toxic", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119934, 8))
			{
				if (Function_263(bVar0, 8))
				{
					Function_262(&Global_119934, 8);
					Function_261(&Global_54076, 8, 1);
					if (!&bParam0)
					{
						Function_5("tut_weapon_torch", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119934, 16))
			{
				if (Function_263(bVar0, 16))
				{
					Function_262(&Global_119934, 16);
					Function_261(&Global_54076, 16, 1);
					if (!&bParam0)
					{
						Function_5("tut_weapon_holy_water", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119934, 32))
			{
				if (Function_263(bVar0, 32))
				{
					Function_262(&Global_119934, 32);
					Function_261(&Global_54076, 32, 1);
					if (!&bParam0)
					{
						Function_5("tut_weapon_phosphorus", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119934, 64))
			{
				if (Function_263(bVar0, 64))
				{
					Function_262(&Global_119934, 64);
					Function_261(&Global_54076, 64, 1);
					if (!&bParam0)
					{
						Function_5("tut_weapon_blunderbuss", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119934, 128))
			{
				if (Function_263(bVar0, 128))
				{
					Function_262(&Global_119934, 128);
					Function_261(&Global_54076, 128, 1);
					if (!&bParam0)
					{
						Function_5("tut_weapon_zombie_bait", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119934, 256))
			{
				if (Function_263(bVar0, 256))
				{
					Function_262(&Global_119934, 256);
					Function_261(&Global_54076, 256, 1);
					if (!&bParam0)
					{
						Function_5("tut_weapon_boomie_bait", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119934, 512))
			{
				if (Function_263(bVar0, 512))
				{
					Function_262(&Global_119934, 512);
					Function_261(&Global_54076, 512, 1);
					if (!&bParam0)
					{
						Function_5("tut_ambient_use_deadeye", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119934, 1024))
			{
				if (Function_263(bVar0, 1024))
				{
					Function_262(&Global_119934, 1024);
					Function_261(&Global_54076, 1024, 1);
					if (!&bParam0)
					{
						Function_5("tut_ambient_conserve_ammo", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119934, 2048))
			{
				if (Function_263(bVar0, 2048))
				{
					Function_262(&Global_119934, 2048);
					Function_261(&Global_54076, 2048, 1);
					if (!&bParam0)
					{
						Function_5("tut_ambient_dead_horse", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119934, 4096))
			{
				if (Function_263(bVar0, 4096))
				{
					Function_262(&Global_119934, 4096);
					Function_261(&Global_54076, 4096, 1);
					if (!&bParam0)
					{
						Function_5("tut_ambient_zombie_horse", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119934, 8192))
			{
				if (Function_263(bVar0, 8192))
				{
					Function_262(&Global_119934, 8192);
					Function_261(&Global_54076, 8192, 1);
					if (!&bParam0)
					{
						Function_5("tut_ambient_ruined_quest", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119934, 16384))
			{
				if (Function_263(bVar0, 16384))
				{
					Function_262(&Global_119934, 16384);
					Function_261(&Global_54076, 16384, 1);
					if (!&bParam0)
					{
						Function_5("tut_ambient_fast_travel", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119934, 32768))
			{
				if (Function_263(bVar0, 32768))
				{
					Function_262(&Global_119934, 32768);
					Function_261(&Global_54076, 32768, 1);
					return 0;
				}
			}
			if (!Function_96(Global_119934, 65536))
			{
				if (Function_263(bVar0, 65536))
				{
					Function_262(&Global_119934, 65536);
					Function_261(&Global_54076, 65536, 1);
					return 0;
				}
			}
			if (!Function_96(Global_119934, 131072))
			{
				if (Function_263(bVar0, 131072))
				{
					Function_262(&Global_119934, 131072);
					Function_261(&Global_54076, 131072, 1);
					if (!&bParam0)
					{
						Function_5("tut_firsttime_fort_mercer", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119934, 262144))
			{
				if (Function_263(bVar0, 262144))
				{
					Function_262(&Global_119934, 262144);
					Function_261(&Global_54076, 262144, 1);
					if (!&bParam0)
					{
						Function_5("tut_firsttime_el_presidio", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119934, 524288))
			{
				if (Function_263(bVar0, 524288))
				{
					Function_262(&Global_119934, 524288);
					Function_261(&Global_54076, 524288, 1);
					if (!&bParam0)
					{
						Function_5("tut_survivor_bullet_waste", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119934, 1048576))
			{
				if (Function_263(bVar0, 1048576))
				{
					Function_262(&Global_119934, 1048576);
					Function_261(&Global_54076, 1048576, 1);
					if (!&bParam0)
					{
						Function_5("tut_survivor_loot_got_ammo", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119934, 2097152))
			{
				if (Function_263(bVar0, 2097152))
				{
					Function_262(&Global_119934, 2097152);
					Function_261(&Global_54076, 2097152, 1);
					if (!&bParam0)
					{
						Function_5("tut_survivor_loot_got_parts", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119934, 4194304))
			{
				if (Function_263(bVar0, 4194304))
				{
					Function_262(&Global_119934, 4194304);
					Function_261(&Global_54076, 4194304, 1);
					if (!&bParam0)
					{
						Function_5("tut_survivor_lead_no_talk", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119934, 8388608))
			{
				if (Function_263(bVar0, 8388608))
				{
					Function_262(&Global_119934, 8388608);
					Function_261(&Global_54076, 8388608, 1);
					if (!&bParam0)
					{
						Function_5("tut_survivor_talk_no_save", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119934, 0x1000000))
			{
				if (Function_263(bVar0, 0x1000000))
				{
					Function_262(&Global_119934, 0x1000000);
					Function_261(&Global_54076, 0x1000000, 1);
					if (!&bParam0)
					{
						Function_5("tut_survivor_save_rewarded", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119934, 0x2000000))
			{
				if (Function_263(bVar0, 0x2000000))
				{
					Function_262(&Global_119934, 0x2000000);
					Function_261(&Global_54076, 0x2000000, 1);
					if (!&bParam0)
					{
						Function_5("tut_survivor_save_and_leave", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119934, 0x4000000))
			{
				if (Function_263(bVar0, 0x4000000))
				{
					Function_262(&Global_119934, 0x4000000);
					Function_261(&Global_54076, 0x4000000, 1);
					if (!&bParam0)
					{
						Function_5("tut_survivor_town_check_map", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119934, 0x8000000))
			{
				if (Function_263(bVar0, 0x8000000))
				{
					Function_262(&Global_119934, 0x8000000);
					Function_261(&Global_54076, 0x8000000, 1);
					if (!&bParam0)
					{
						Function_5("tut_survivor_town_reattack", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119934, 0x10000000))
			{
				if (Function_263(bVar0, 0x10000000))
				{
					Function_262(&Global_119934, 0x10000000);
					Function_261(&Global_54076, 0x10000000, 1);
					if (!&bParam0)
					{
						Function_5("tut_survivor_town_taken", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119934, 0x20000000))
			{
				if (Function_263(bVar0, 0x20000000))
				{
					Function_262(&Global_119934, 0x20000000);
					Function_261(&Global_54076, 0x20000000, 1);
					if (!&bParam0)
					{
						Function_5("tut_survivor_town_lost_guy", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119934, 0x40000000))
			{
				if (Function_263(bVar0, 0x40000000))
				{
					Function_262(&Global_119934, 0x40000000);
					Function_261(&Global_54076, 0x40000000, 1);
					if (!&bParam0)
					{
						Function_5("tut_survivor_town_lost_forever", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			break;
		
		case 0x00000001:
			if (!Function_96(Global_119935, 2))
			{
				if (Function_263(bVar1, 2))
				{
					Function_262(&Global_119935, 2);
					Function_261(&Global_54076, 2, 2);
					if (!&bParam0)
					{
						Function_5("tut_zombie02_talktosurvivors", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119935, 4))
			{
				if (Function_263(bVar1, 4))
				{
					Function_262(&Global_119935, 4);
					Function_261(&Global_54076, 4, 2);
					if (!&bParam0)
					{
						Function_5("tut_mother4_talktosurvivors", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119935, 16))
			{
				if (Function_263(bVar1, 16))
				{
					Function_262(&Global_119935, 16);
					Function_261(&Global_54076, 16, 2);
					if (!&bParam0)
					{
						Function_5("tut_zombie_john", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119935, 32))
			{
				if (Function_263(bVar1, 32))
				{
					Function_262(&Global_119935, 32);
					Function_261(&Global_54076, 32, 2);
					if (!&bParam0)
					{
						Function_5("tut_zombie_grapple", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119935, 64))
			{
				if (Function_263(bVar1, 64))
				{
					Function_262(&Global_119935, 64);
					Function_261(&Global_54076, 64, 2);
					if (!&bParam0)
					{
						Function_5("tut_weapon_holy_relic", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119935, 128))
			{
				if (Function_263(bVar1, 128))
				{
					Function_262(&Global_119935, 128);
					Function_261(&Global_54076, 128, 2);
					if (!&bParam0)
					{
						Function_5("tut_lowhealth_usemeds", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119935, 256))
			{
				if (Function_263(bVar1, 256))
				{
					Function_262(&Global_119935, 256);
					Function_261(&Global_54076, 256, 2);
					if (!&bParam0)
					{
						Function_5("tut_hogtieonhorse", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119935, 512))
			{
				if (Function_263(bVar1, 512))
				{
					Function_262(&Global_119935, 512);
					Function_261(&Global_54076, 512, 2);
					if (!&bParam0)
					{
						Function_5("tut_navigation_foot_basic", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119935, 1024))
			{
				if (Function_263(bVar1, 1024))
				{
					Function_262(&Global_119935, 1024);
					Function_261(&Global_54076, 1024, 2);
					if (!&bParam0)
					{
						if (IS_USING_KEYBOARD_AND_MOUSE())
						{
							if (UNK_0x968F0317())
							{
								Function_5("intro01_first_tut_2_hold", 0x41200000, 1, 0, 2, 1, 0);
							}
							else
							{
								Function_5("intro01_first_tut_2", 0x41200000, 1, 0, 2, 1, 0);
							}
						}
						else
						{
							Function_5("intro01_first_tut_2", 0x41200000, 1, 0, 2, 1, 0);
						}
						return 0;
					}
				}
			}
			if (!Function_96(Global_119935, 8))
			{
				if (Function_263(bVar1, 8))
				{
					Function_262(&Global_119935, 8);
					Function_261(&Global_54076, 8, 2);
					if (!&bParam0)
					{
						Function_5("tut_horse_whistle", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119935, 2048))
			{
				if (Function_263(bVar1, 2048))
				{
					Function_262(&Global_119935, 2048);
					Function_261(&Global_54076, 2048, 2);
					if (!&bParam0)
					{
						Function_5("tut_navigation_horse_basic", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119935, 4096))
			{
				if (Function_263(bVar1, 4096))
				{
					Function_262(&Global_119935, 4096);
					Function_261(&Global_54076, 4096, 2);
					if (!&bParam0)
					{
						Function_5("tut_navigation_horse_gallop", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119935, 8192))
			{
				if (Function_263(bVar1, 8192))
				{
					Function_262(&Global_119935, 8192);
					Function_261(&Global_54076, 8192, 2);
					if (!&bParam0)
					{
						Function_5("tut_navigation_horse_stamina", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119935, 16384))
			{
				if (Function_263(bVar1, 16384))
				{
					Function_262(&Global_119935, 16384);
					Function_261(&Global_54076, 16384, 2);
					if (!&bParam0)
					{
						Function_5("tut_weapon_reload", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119935, 32768))
			{
				if (Function_263(bVar1, 32768))
				{
					Function_262(&Global_119935, 32768);
					Function_261(&Global_54076, 32768, 2);
					if (!&bParam0)
					{
						Function_5("tut_loot_corpse", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119935, 65536))
			{
				if (Function_263(bVar1, 65536))
				{
					Function_262(&Global_119935, 65536);
					Function_261(&Global_54076, 65536, 2);
					if (!&bParam0)
					{
						Function_5("tut_weapon_new", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119935, 131072))
			{
				if (Function_263(bVar1, 131072))
				{
					Function_262(&Global_119935, 131072);
					Function_261(&Global_54076, 131072, 2);
					if (!&bParam0)
					{
						Function_5("tut_new_weapon_choose", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119935, 1048576))
			{
				if (Function_263(bVar1, 1048576))
				{
					Function_262(&Global_119935, 1048576);
					Function_261(&Global_54076, 1048576, 2);
					if (!&bParam0)
					{
						Function_5("tut_deadeye_activation", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119935, 2097152))
			{
				if (Function_263(bVar1, 2097152))
				{
					Function_262(&Global_119935, 2097152);
					Function_261(&Global_54076, 2097152, 2);
					if (!&bParam0)
					{
						Function_5("tut_deadeye_locks", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119935, 4194304))
			{
				if (Function_263(bVar1, 4194304))
				{
					Function_262(&Global_119935, 4194304);
					Function_261(&Global_54076, 4194304, 2);
					if (!&bParam0)
					{
						Function_5("tut_deadeye_exit", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119935, 8388608))
			{
				if (Function_263(bVar1, 8388608))
				{
					Function_262(&Global_119935, 8388608);
					Function_261(&Global_54076, 8388608, 2);
					if (!&bParam0)
					{
						Function_5("tut_thrown_arc", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119935, 0x1000000))
			{
				if (Function_263(bVar1, 0x1000000))
				{
					Function_262(&Global_119935, 0x1000000);
					Function_261(&Global_54076, 0x1000000, 2);
					if (!&bParam0)
					{
						Function_5("tut_hitch_horse", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119935, 0x2000000))
			{
				if (Function_263(bVar1, 0x2000000))
				{
					Function_262(&Global_119935, 0x2000000);
					Function_261(&Global_54076, 0x2000000, 2);
					if (!&bParam0)
					{
						Function_5("tut_hitch_horse_return", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119935, 0x4000000))
			{
				if (Function_263(bVar1, 0x4000000))
				{
					Function_262(&Global_119935, 0x4000000);
					Function_261(&Global_54076, 0x4000000, 2);
					if (!&bParam0)
					{
						Function_5("tut_house_save", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119935, 0x10000000))
			{
				if (Function_263(bVar1, 0x10000000))
				{
					Function_262(&Global_119935, 0x10000000);
					Function_261(&Global_54076, 0x10000000, 2);
					if (!&bParam0)
					{
						Function_5("tut_satchel_open", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119935, 0x20000000))
			{
				if (Function_263(bVar1, 0x20000000))
				{
					Function_262(&Global_119935, 0x20000000);
					Function_261(&Global_54076, 0x20000000, 2);
					if (!&bParam0)
					{
						Function_5("tut_new_weapon_range", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119935, 0x40000000))
			{
				if (Function_263(bVar1, 0x40000000))
				{
					Function_262(&Global_119935, 0x40000000);
					Function_261(&Global_54076, 0x40000000, 2);
					if (!&bParam0)
					{
						Function_5("tut_melee_lockon", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			break;
		
		case 0x00000002:
			if (!Function_96(Global_119936, 2))
			{
				if (Function_263(bVar2, 2))
				{
					Function_262(&Global_119936, 2);
					Function_261(&Global_54076, 2, 3);
					if (!&bParam0)
					{
						Function_5("tut_health_death", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119936, 4))
			{
				if (Function_263(bVar2, 4))
				{
					Function_262(&Global_119936, 4);
					Function_261(&Global_54076, 4, 3);
					if (!&bParam0)
					{
						Function_5("tut_health_regen", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119936, 8))
			{
				if (Function_263(bVar2, 8))
				{
					Function_262(&Global_119936, 8);
					Function_261(&Global_54076, 8, 3);
					if (!&bParam0)
					{
						Function_5("tut_horse_roads", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119936, 16))
			{
				if (Function_263(bVar2, 16))
				{
					Function_262(&Global_119936, 16);
					Function_261(&Global_54076, 16, 3);
					if (!&bParam0)
					{
						Function_5("tut_ledgeplay_1", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119936, 32))
			{
				if (Function_263(bVar2, 32))
				{
					Function_262(&Global_119936, 32);
					Function_261(&Global_54076, 32, 3);
					if (!&bParam0)
					{
						Function_5("tut_ledgeplay_2", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119936, 64))
			{
				if (Function_263(bVar2, 64))
				{
					Function_262(&Global_119936, 64);
					Function_261(&Global_54076, 64, 3);
					if (!&bParam0)
					{
						Function_5("tut_sniper_zoom", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119936, 256))
			{
				if (Function_263(bVar2, 256))
				{
					Function_262(&Global_119936, 256);
					Function_261(&Global_54076, 256, 3);
					if (!&bParam0)
					{
						if (GET_PLAYER_COMBATMODE() == 1)
						{
							if (IS_USING_KEYBOARD_AND_MOUSE())
							{
								Function_5("tut_weapon_aim_expert_KBM", 0x41200000, 1, 0, 2, 1, 0);
							}
							else
							{
								Function_5("tut_weapon_aim_expert", 0x41200000, 1, 0, 2, 1, 0);
							}
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
			if (!Function_96(Global_119936, 2048))
			{
				if (Function_263(bVar2, 2048))
				{
					Function_262(&Global_119936, 2048);
					Function_261(&Global_54076, 2048, 3);
					if (!&bParam0)
					{
						Function_5("AMZFH_HLP_DEATH", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119936, 4096))
			{
				if (Function_263(bVar2, 4096))
				{
					Function_262(&Global_119936, 4096);
					Function_261(&Global_54076, 4096, 3);
					if (!&bParam0)
					{
						Function_5("AMZFH_HLP_DEATH_2", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119936, 8192))
			{
				if (Function_263(bVar2, 8192))
				{
					Function_262(&Global_119936, 8192);
					Function_261(&Global_54076, 8192, 3);
					if (!&bParam0)
					{
						Function_5("AMZFH_HLP_WAR", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119936, 16384))
			{
				if (Function_263(bVar2, 16384))
				{
					Function_262(&Global_119936, 16384);
					Function_261(&Global_54076, 16384, 3);
					if (!&bParam0)
					{
						Function_5("AMZFH_HLP_WAR_2", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119936, 32768))
			{
				if (Function_263(bVar2, 32768))
				{
					Function_262(&Global_119936, 32768);
					Function_261(&Global_54076, 32768, 3);
					if (!&bParam0)
					{
						Function_5("AMZFH_HLP_PEST", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119936, 65536))
			{
				if (Function_263(bVar2, 65536))
				{
					Function_262(&Global_119936, 65536);
					Function_261(&Global_54076, 65536, 3);
					if (!&bParam0)
					{
						Function_5("AMZFH_HLP_PEST_2", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119936, 131072))
			{
				if (Function_263(bVar2, 131072))
				{
					Function_262(&Global_119936, 131072);
					Function_261(&Global_54076, 131072, 3);
					if (!&bParam0)
					{
						Function_5("AMZFH_HLP_FAM", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119936, 262144))
			{
				if (Function_263(bVar2, 262144))
				{
					Function_262(&Global_119936, 262144);
					Function_261(&Global_54076, 262144, 3);
					if (!&bParam0)
					{
						Function_5("AMZFH_HLP_FAM_2", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119936, 128))
			{
				if (Function_263(bVar2, 128))
				{
					Function_262(&Global_119936, 128);
					Function_261(&Global_54076, 128, 3);
					if (!&bParam0)
					{
						Function_5("tut_horse_mount", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119936, 512))
			{
				if (Function_263(bVar2, 512))
				{
					Function_262(&Global_119936, 512);
					Function_261(&Global_54076, 512, 3);
					if (!&bParam0)
					{
						Function_5("tut_undead_nightmare", 0x41200000, 1, 0, 2, 1, 0);
						return 0;
					}
				}
			}
			if (!Function_96(Global_119936, 1024))
			{
				if (Function_263(bVar2, 1024))
				{
					Function_262(&Global_119936, 1024);
					Function_261(&Global_54076, 1024, 3);
					if (!&bParam0)
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
	iLocal_99++;
	if (iLocal_99 >= 2)
	{
		iLocal_99 = 0;
	}
	return 0;
}

void Function_261(var uParam0, int iParam1, int iParam2) //Position: 0x12971 / 76145
{
	var uVar0;
	char* cVar1[16];
	bool bVar5;
	
	uVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	if (!IS_OBJECT_VALID(&uParam0))
	{
		return;
	}
	Function_92(&cVar1, &iParam2);
	if (!DECOR_CHECK_EXIST(&uParam0, &cVar1))
	{
		return;
	}
	bVar5 = DECOR_GET_INT(&uParam0, &cVar1);
	DECOR_SET_INT(&uParam0, &cVar1, (bVar5 - (bVar5 && uVar0)));
	return;
}

void Function_262(var uParam0, int iParam1) //Position: 0x129C5 / 76229
{
	uParam0 = (uParam0 || iParam1);
	return;
}

bool Function_263(bool bParam0, int iParam1) //Position: 0x129D6 / 76246
{
	var uVar0;
	
	uVar0 = iParam1;
	if ((bParam0 && uVar0) >= 0)
	{
		return 1;
	}
	return 0;
}

void Function_264() //Position: 0x129EC / 76268
{
	return;
}

void Function_265(struct<57> Param0) //Position: 0x129F2 / 76274
{
	strcpy(&Param0 + 24, "AMBIENT-CHALL", 16);
	Param0 = 76344;
	*(&Param0 + 8) = 76337;
	*(&Param0 + 16) = 76344;
	Param0.f_56 = 1;
	return;
}

int Function_266() //Position: 0x12A31 / 76337
{
	return 0;
}

void Function_267() //Position: 0x12A38 / 76344
{
	return;
}

