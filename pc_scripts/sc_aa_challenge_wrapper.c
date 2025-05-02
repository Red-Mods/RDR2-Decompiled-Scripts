//Decompiled with MagicRDR v1.0
//Function Count : 178
//Statics Count : 49
//Natives Count : 161
//Parameters Count : 2

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
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	int iLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	struct<569> Var0;
	
	*(&Var0 + 16) = 10;
	*(&Var0 + 104) = 10;
	*(&Var0 + 192) = 10;
	*(&Var0 + 280) = 10;
	*(&Var0 + 368) = 10;
	*(&Var0 + 460) = 3;
	*(&Var0 + 596) = 3;
	*(&Var0 + 596 + 8 + 36) = 5;
	*(&Var0 + 596 + 8 + 88 + 36) = 5;
	*(&Var0 + 596 + 8 + 88 + 88 + 36) = 5;
	uVar112 = "fObjBaseScore";
	uVar113 = "fObjBonusScale";
	uVar114 = "_StatCount";
	fVar130 = 0.0f;
	iVar139 = 0;
	iVar141 = Function_177(&iScriptParam_0);
	iVar144 = 1;
	iVar145 = 0;
	iVar146 = 0;
	iVar148 = 4294967295;
	if (iVar141 == 4294967295)
	{
		iVar141 = Function_176(&iScriptParam_0);
		Function_172(&iScriptParam_0, iVar141);
	}
	Global_132987[iVar141125].f_124 = 1;
	Var0.f_12 = SC_CHALLENGE_GET_LEADERBOARD_ID(&iScriptParam_0, 0);
	uVar143 = Var0.f_12;
	Global_132987[iVar141125].f_140 = uVar143;
	while (((((!IS_EXITFLAG_SET() && iVar144) && 1) && Global_140633) && Function_168(&iScriptParam_0)) && !UI_HAS_CHEATED())
	{
		switch (iVar140)
		{
			case 0x00000000:
				Function_167(&Var0);
				Var0.f_552 = 0;
				if (SC_CHALLENGE_IS_VAR_VALID(&iScriptParam_0, "nAAID"))
				{
					Var0.f_524 = SC_CHALLENGE_GET_VAR_INT(&iScriptParam_0, "nAAID");
				}
				if (SC_CHALLENGE_IS_VAR_VALID(&iScriptParam_0, "fTime"))
				{
					Var0.f_536 = SC_CHALLENGE_GET_VAR_FLOAT(&iScriptParam_0, "fTime");
				}
				if (SC_CHALLENGE_IS_VAR_VALID(&iScriptParam_0, "nfObjTime1"))
				{
					Var0.f_540 = SC_CHALLENGE_GET_VAR_FLOAT(&iScriptParam_0, "nfObjTime1");
				}
				if (SC_CHALLENGE_IS_VAR_VALID(&iScriptParam_0, "nfObjTime2"))
				{
					Var0.f_544 = SC_CHALLENGE_GET_VAR_FLOAT(&iScriptParam_0, "nfObjTime2");
				}
				if (SC_CHALLENGE_IS_VAR_VALID(&iScriptParam_0, "nnObjGoal1"))
				{
					Var0.f_560 = SC_CHALLENGE_GET_VAR_INT(&iScriptParam_0, "nnObjGoal1");
				}
				if (SC_CHALLENGE_IS_VAR_VALID(&iScriptParam_0, "nnObjGoal2"))
				{
					Var0.f_564 = SC_CHALLENGE_GET_VAR_INT(&iScriptParam_0, "nnObjGoal2");
				}
				if (SC_CHALLENGE_IS_VAR_VALID(&iScriptParam_0, "nnObjGoal3"))
				{
					Var0.f_568 = SC_CHALLENGE_GET_VAR_INT(&iScriptParam_0, "nnObjGoal3");
				}
				switch (Var0.f_524)
				{
					case 0x00000000:
						(&Var0 + 596[011])->f_20 = (((Function_166((183 + 15)) + Function_166((183 + 16))) + Function_166((183 + 17))) + Function_166((183 + 18)));
						*(&Var0 + 888) = FIND_NAMED_LAYOUT("sc_fom_layout");
						if (IS_LAYOUTREF_VALID(&Var0 + 888))
						{
							DESTROY_LAYOUT(&Var0 + 888);
						}
						*(&Var0 + 888) = CREATE_LAYOUT("sc_fom_layout");
						*(&Var0 + 872) = CREATE_EVENT_TRAP("BanditoLeaderDisarm", 11, &Var0 + 888);
						*(&Var0 + 880) = CREATE_EVENT_TRAP("ProstituteHog", 50, &Var0 + 888);
						EVENT_TRAP_STORE_EVENTS(&Var0 + 872, 1);
						EVENT_TRAP_STORE_EVENTS(&Var0 + 880, 1);
						break;
					
					case 0x00000001:
						(&Var0 + 596[011])->f_20 = Function_166(45);
						(&Var0 + 596[111])->f_20 = (Function_166((183 + 22)) + Function_166((183 + 25)));
						(&Var0 + 596[211])->f_20 = Function_166(46);
						break;
					
					case 0x00000002:
						*(&Var0 + 888) = FIND_NAMED_LAYOUT("sc_gap_layout");
						if (IS_LAYOUTREF_VALID(&Var0 + 888))
						{
							DESTROY_LAYOUT(&Var0 + 888);
						}
						*(&Var0 + 888) = CREATE_LAYOUT("sc_gap_layout");
						*(&Var0 + 872) = CREATE_EVENT_TRAP("death", 6, &Var0 + 888);
						*(&Var0 + 880) = CREATE_EVENT_TRAP("headshot", 10, &Var0 + 888);
						EVENT_TRAP_STORE_EVENTS(&Var0 + 872, 1);
						EVENT_TRAP_STORE_EVENTS(&Var0 + 880, 1);
						(&Var0 + 596[011])->f_20 = Global_54086[0];
						(&Var0 + 596[111])->f_20 = Global_54086[264];
						break;
					
					case 0x00000003:
						(&Var0 + 596[111])->f_20 = Global_54086[389];
						(&Var0 + 596[211])->f_28 = 1.0f;
						*(&Var0 + 888) = FIND_NAMED_LAYOUT("sc_pik_layout");
						if (IS_LAYOUTREF_VALID(&Var0 + 888))
						{
							DESTROY_LAYOUT(&Var0 + 888);
						}
						*(&Var0 + 888) = CREATE_LAYOUT("sc_pik_layout");
						*(&Var0 + 872) = CREATE_EVENT_TRAP("HorseBackKills", 2, &Var0 + 888);
						EVENT_TRAP_STORE_EVENTS(&Var0 + 872, 1);
						break;
					
					case 0x00000004:
						(&Var0 + 596[111])->f_20 = Global_54086[467];
						(&Var0 + 596[211])->f_20 = Global_54086[46];
						*(&Var0 + 888) = FIND_NAMED_LAYOUT("sc_nos_layout");
						if (IS_LAYOUTREF_VALID(&Var0 + 888))
						{
							DESTROY_LAYOUT(&Var0 + 888);
						}
						*(&Var0 + 888) = CREATE_LAYOUT("sc_nos_layout");
						*(&Var0 + 872) = CREATE_EVENT_TRAP("EnemiesFireBombed", 2, &Var0 + 888);
						EVENT_TRAP_STORE_EVENTS(&Var0 + 872, 1);
						break;
					
					case 0x00000005:
						*(&Var0 + 888) = FIND_NAMED_LAYOUT("sc_sol_layout");
						if (IS_LAYOUTREF_VALID(&Var0 + 888))
						{
							DESTROY_LAYOUT(&Var0 + 888);
						}
						*(&Var0 + 888) = CREATE_LAYOUT("sc_sol_layout");
						*(&Var0 + 872) = CREATE_EVENT_TRAP("WagonHeadShots", 10, &Var0 + 888);
						EVENT_TRAP_STORE_EVENTS(&Var0 + 872, 1);
						(&Var0 + 596[211])->f_20 = Function_166(89);
						break;
					
					case 0x00000006:
						*(&Var0 + 888) = FIND_NAMED_LAYOUT("sc_tes_layout");
						if (IS_LAYOUTREF_VALID(&Var0 + 888))
						{
							DESTROY_LAYOUT(&Var0 + 888);
						}
						*(&Var0 + 888) = CREATE_LAYOUT("sc_tes_layout");
						*(&Var0 + 872) = CREATE_EVENT_TRAP("eDeath", 2, &Var0 + 888);
						EVENT_TRAP_STORE_EVENTS(&Var0 + 872, 1);
						(&Var0 + 596[111])->f_20 = Function_166((183 + 25));
						(&Var0 + 596[211])->f_20 = Global_54086[467];
						break;
					
					case 0x00000007:
						(&Var0 + 596[011])->f_20 = (Function_166((183 + 22)) + Function_166((183 + 25)));
						(&Var0 + 596[111])->f_20 = Global_54086[467];
						(&Var0 + 596[211])->f_20 = Global_54086[44];
						break;
					
					case 0x00000008:
						(&Var0 + 596[011])->f_20 = Global_54086[424];
						(&Var0 + 596[111])->f_20 = Global_54086[0];
						break;
					
					case 0x00000009:
						(&Var0 + 596[011])->f_20 = (Global_54086[138] + Global_54086[27]);
						(&Var0 + 596[111])->f_28 = 1.0f;
						(&Var0 + 596[211])->f_20 = (&Var0 + 596[011])->f_20;
						break;
				}
				Function_172(&iScriptParam_0, iVar141);
				iVar140 = 1;
				break;
			
			case 0x00000001:
				iVar140 = 3;
			
			case 0x00000003:
				switch (Var0.f_524)
				{
					case 0x00000000:
						if (Function_158(Function_161(0, Global_46838[1], 3)) == 2)
						{
							Var0.f_492 = 1;
							iVar140 = 3;
						}
						if (Var0.f_492)
						{
							Function_152(&Var0, &iScriptParam_0, &Var0 + 552);
							iVar140 = 3;
						}
						break;
					
					case 0x00000001:
						if (Function_158(Function_161(0, Global_46760[2], 3)) == 2)
						{
							Var0.f_492 = 1;
							iVar140 = 3;
						}
						if (Var0.f_492)
						{
							Function_148(&Var0, &iScriptParam_0, &Var0 + 552);
							iVar140 = 3;
						}
						break;
					
					case 0x00000002:
						if (Function_158(Function_161(0, Global_46796[3], 3)) == 2)
						{
							Var0.f_492 = 1;
							iVar140 = 3;
						}
						if (Var0.f_492)
						{
							Function_144(&Var0, &iScriptParam_0, &Var0 + 552);
							iVar140 = 3;
						}
						break;
					
					case 0x00000003:
						if (Function_158(Function_161(0, Global_46816[2], 3)) == 2)
						{
							Var0.f_492 = 1;
							iVar140 = 3;
						}
						if (Var0.f_492)
						{
							Function_140(&Var0, &iScriptParam_0, &Var0 + 552);
							iVar140 = 3;
						}
						break;
					
					case 0x00000004:
						if (Function_158(Function_161(0, Global_46850[1], 3)) == 2)
						{
							Var0.f_492 = 1;
							iVar140 = 3;
						}
						if (Var0.f_492)
						{
							Function_136(&Var0, &iScriptParam_0, &Var0 + 552);
							iVar140 = 3;
						}
						break;
					
					case 0x00000005:
						if (Function_158(Function_161(0, Global_46796[2], 3)) == 2)
						{
							Var0.f_492 = 1;
							iVar140 = 3;
						}
						if (Var0.f_492)
						{
							Function_132(&Var0, &iScriptParam_0, &Var0 + 552);
							iVar140 = 3;
						}
						break;
					
					case 0x00000006:
						if (Function_158(Function_161(0, Global_46850[2], 3)) == 2)
						{
							Var0.f_492 = 1;
							iVar140 = 3;
						}
						if (Var0.f_492)
						{
							Function_127(&Var0, &iScriptParam_0, &Var0 + 552);
							iVar140 = 3;
						}
						break;
					
					case 0x00000007:
						if (Function_158(Function_161(0, Global_46796[0], 3)) == 2)
						{
							Var0.f_492 = 1;
							iVar140 = 3;
						}
						if (Var0.f_492)
						{
							Function_123(&Var0, &iScriptParam_0, &Var0 + 552);
							iVar140 = 3;
						}
						break;
					
					case 0x00000008:
						if (DECOR_CHECK_EXIST(&Global_54076, "scInPokerBlk"))
						{
							Var0.f_492 = 1;
							iVar140 = 3;
						}
						if (Var0.f_492)
						{
							Function_118(&Var0, &iScriptParam_0, &Var0 + 552);
							iVar140 = 3;
						}
						break;
					
					case 0x00000009:
						if (IS_ACTOR_ON_TRAIN(&Global_54076, 1))
						{
							Var0.f_492 = 1;
							iVar140 = 3;
						}
						if (Var0.f_492)
						{
							Function_109(&Var0, &iScriptParam_0, &Var0 + 552);
							iVar140 = 3;
						}
						break;
				}
				if ((*&Global_132987[iVar141125] + 212)[411] < 3300.0f)
				{
					Var0.f_492 = 0;
					Var0.f_496 = 1;
					iVar140 = 4;
				}
				if (SC_CHALLENGE_GET_EXPIRATION_STATE(&iScriptParam_0) == 3)
				{
					Var0.f_492 = 0;
					Var0.f_496 = 1;
					iVar140 = 4;
				}
				if (Var0.f_500)
				{
					Var0.f_492 = 0;
					iVar140 = 4;
				}
				break;
			
			case 0x00000004:
				if (Var0.f_508 && NET_MAILBOX_IS_SIGNED_INTO_SC())
				{
					if (!Var0.f_520)
					{
						if ((*&Global_132987[iVar141125] + 212)[411] < 0.0f)
						{
							Function_107(&iScriptParam_0, &Var0);
							if (!Function_106(0, 0, 1, 1))
							{
								Function_96(1);
								Function_95(1, 10);
							}
						}
						Var0.f_520 = 1;
					}
					if (!Function_94(&iLocal_39) && !Var0.f_516)
					{
						Function_92(&iLocal_39);
					}
					if ((Function_89(&iLocal_39, 7.0f) && !Global_99146) && !Var0.f_516)
					{
						Function_86(StackVal, &iScriptParam_0);
						(*&Global_132987[iVar141125] + 212)[311] = (*&Global_132987[iVar141125] + 212)[411];
						Function_85(&iLocal_39);
						Var0.f_516 = 1;
					}
					if ((!Function_94(&iLocal_35) && !Function_94(&iLocal_39)) && !Var0.f_512)
					{
						Function_92(&iLocal_35);
					}
					if (Function_89(&iLocal_35, 7.0f) && !Var0.f_512)
					{
						if (StackVal > 2)
						{
							Function_6(&iScriptParam_0);
						}
						Function_85(&iLocal_35);
						Var0.f_512 = 1;
						iVar140 = 5;
					}
					else
					{
						iVar140 = 4;
					}
				}
				else if (Var0.f_496 && NET_MAILBOX_IS_SIGNED_INTO_SC())
				{
					Function_5(&iScriptParam_0);
					Function_1("SC_CHALLENGE_FAIL_MSG", 6.0f, 1, 0, 2, 1, 0);
					iVar140 = 5;
				}
				Global_132987[iVar141125].f_116 = 0;
				break;
			
			case 0x00000005:
				if (iVar148 == 0)
				{
					iVar148 = SC_CHALLENGE_GET_EXPIRATION_STATE(&iScriptParam_0);
				}
				else
				{
					iVar144 = 0;
				}
				break;
		}
		WAIT(100);
	}
	if (IS_OBJECT_VALID(&Var0 + 872))
	{
		DESTROY_OBJECT(&Var0 + 872);
	}
	if (IS_OBJECT_VALID(&Var0 + 880))
	{
		DESTROY_OBJECT(&Var0 + 880);
	}
	SC_CHALLENGE_CLEAN_UP(&iScriptParam_0);
	if (Global_132987[iVar141125].f_116 == 1)
	{
		Global_132987[iVar141125].f_116 = 0;
		Function_5(&iScriptParam_0);
		Function_1("SC_CHALLENGE_FAIL_MSG", 6.0f, 1, 0, 2, 1, 0);
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(char* cParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0xBDE / 3038
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_2(Global_10966) };
		}
		PRINT_HELP_B(&cParam0, &fParam1, &iParam2, &iParam3, &iParam4, &iParam5, &Var0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(&cParam0, &fParam1, &iParam2, &iParam3, &iParam4, &iParam5, &uVar4, &iParam6);
	}
}

struct<16> Function_2(int iParam0) //Position: 0xC69 / 3177
{
	char* cVar0[16];
	
	if (!Function_3())
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

bool Function_3() //Position: 0xCA8 / 3240
{
	if (Function_4(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_4(bool bParam0, int iParam1) //Position: 0xCC3 / 3267
{
	return (bParam0 && iParam1) == 0;
}

void Function_5(int iParam0) //Position: 0xCD0 / 3280
{
	int iVar0;
	int iVar1;
	
	iVar0 = Function_177(&iParam0);
	(*&Global_132987[iVar0125] + 212)[411] = (*&Global_132987[iVar0125] + 212)[311];
	(&Global_132987[iVar0125] + 212[411])->f_4 = StackVal;
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		(*&Global_132987[iVar0125] + 212[411] + 56)[iVar1] = (*&Global_132987[iVar0125] + 212[311] + 56)[iVar1];
		iVar1++;
	}
	return;
}

void Function_6(int iParam0) //Position: 0xD4D / 3405
{
	int iVar0;
	
	if (SC_CHALLENGE_IS_VAR_VALID(&iParam0, "nAAID"))
	{
		iVar0 = SC_CHALLENGE_GET_VAR_INT(&iParam0, "nAAID");
		switch (iVar0)
		{
			case 0x00000000:
				Function_7(29);
				break;
			
			case 0x00000001:
				Function_7(17);
				break;
			
			case 0x00000002:
				Function_7(18);
				break;
			
			case 0x00000003:
				Function_7(24);
				break;
			
			case 0x00000004:
				Function_7(26);
				break;
			
			case 0x00000005:
				Function_7(13);
				break;
			
			case 0x00000006:
				Function_7(25);
				break;
			
			case 0x00000007:
				Function_7(19);
				break;
			
			case 0x00000008:
				Function_7(20);
				break;
			
			case 0x00000009:
				Function_7(14);
				break;
			}
	}
	return;
}

void Function_7(int iParam0) //Position: 0xE07 / 3591
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_84(iParam0) && 0)
	{
		return;
	}
	bVar0 = true;
	switch (iParam0)
	{
		case 0x00000001:
			if (Function_83(3))
			{
				if (!Function_82(1))
				{
					if (!Function_81(2, 0))
					{
						return;
					}
					Function_80(1, 0, 0);
				}
			}
			break;
		
		case 0x00000004:
			if (Function_83(3))
			{
				if (!Function_82(2) && !Function_79(2))
				{
					Function_78(2, 0, 1, 1, 1);
					Function_48(2, 1);
					bVar0 = false;
				}
			}
			break;
		
		case 0x00000009:
			if (!Global_39428[iParam0])
			{
				Function_46(992, 0, 1);
				Function_44(52, 1, 0);
			}
			break;
		
		case 0x0000000A:
			break;
		
		case 0x0000000D:
			UI_CHEAT_SET_STATE(4, 1);
			Function_9(4);
			break;
		
		case 0x0000000E:
			UI_CHEAT_SET_STATE(25, 1);
			Function_9(4);
			break;
		
		case 0x0000000F:
			UI_CHEAT_SET_STATE(7, 1);
			Function_9(4);
			break;
		
		case 0x00000010:
			UI_CHEAT_SET_STATE(11, 1);
			Function_9(4);
			break;
		
		case 0x00000011:
			UI_CHEAT_SET_STATE(13, 1);
			Function_9(4);
			break;
		
		case 0x00000012:
			UI_CHEAT_SET_STATE(16, 1);
			Function_9(4);
			break;
		
		case 0x00000013:
			UI_CHEAT_SET_STATE(17, 1);
			Function_9(4);
			break;
		
		case 0x00000014:
			UI_CHEAT_SET_STATE(18, 1);
			Function_9(4);
			break;
		
		case 0x00000015:
			UI_CHEAT_SET_STATE(24, 1);
			Function_9(4);
			break;
		
		case 0x00000016:
			UI_CHEAT_SET_STATE(26, 1);
			Function_9(4);
			break;
		
		case 0x00000017:
			UI_CHEAT_SET_STATE(22, 1);
			Function_9(4);
			break;
		
		case 0x00000018:
			UI_CHEAT_SET_STATE(28, 1);
			Function_9(4);
			break;
		
		case 0x00000019:
			UI_CHEAT_SET_STATE(35, 1);
			Function_9(4);
			break;
		
		case 0x0000001A:
			UI_CHEAT_SET_STATE(36, 1);
			Function_9(4);
			break;
		
		case 0x0000001B:
			UI_CHEAT_SET_STATE(37, 1);
			Function_9(4);
			break;
		
		case 0x0000001C:
			UI_CHEAT_SET_STATE(38, 1);
			Function_9(4);
			break;
		
		case 0x0000001D:
			UI_CHEAT_SET_STATE(39, 1);
			Function_9(4);
			break;
		
		case 0x0000001E:
			UI_CHEAT_SET_STATE(23, 1);
			Function_9(4);
			break;
		
		case 0x00000023:
			if (Function_106(0, 0, 1, 1))
			{
				return;
			}
			break;
		
		case 0x00000028:
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(60))
			{
				AWARD_ACHIEVEMENT(60);
			}
			break;
		
		case 0x00000002:
		case 0x00000003:
		case 0x00000005:
		case 0x00000006:
		case 0x00000007:
			bVar0 = false;
			break;
		
		case 0x00000008:
			if (!Function_81(2, 0))
			{
				return;
			}
			Function_8(11);
			break;
		
		case 0x00000000:
			if (!Function_81(2, 0))
			{
				return;
			}
			Function_8(6);
			break;
		
		case 0x0000000B:
		case 0x0000000C:
		case 0x00000029:
		case 0x0000002A:
		case 0x0000002B:
		case 0x0000002C:
		case 0x0000002D:
			return;
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
			Function_1(&cVar1, 0x41200000, 1, 0, 2, 1, 0);
		}
	}
	Global_39428[iParam0] = 1;
	return;
}

void Function_8(int iParam0) //Position: 0x112A / 4394
{
	if (AWARD_AVATAR(iParam0))
	{
		if (IS_PS3())
		{
			Function_1("avunlock_help", 0x41200000, 1, 0, 2, 1, 0);
		}
	}
	return;
}

int Function_9(bool bParam0) //Position: 0x1161 / 4449
{
	struct<4> Var0;
	
	if (bParam0 != 4)
	{
		if (Function_43("xmlsave"))
		{
			if (IS_DEV_BUILD())
			{
				SAVE_GAME(SS_GET_STRING(2, bParam0));
			}
		}
	}
	if (bParam0 <= 4)
	{
		if (Function_3())
		{
			Var0 = { StackVal, StackVal, StackVal, Function_39() };
			SAVE_MANAGER_CREATE_SAVE_DISPLAY_NAME(&Var0);
		}
		else
		{
			SAVE_MANAGER_CREATE_SAVE_DISPLAY_NAME(&Global_6667[Global_1096628] + 16);
		}
	}
	if (bParam0 != 4)
	{
		Function_10();
	}
	SAVE_MANAGER_HARD_SAVE(SS_GET_STRING(3, bParam0));
	return 1;
}

void Function_10() //Position: 0x11C8 / 4552
{
	Function_37();
	Function_36();
	Function_36();
	Function_35();
	Function_35();
	Function_34();
	Function_34();
	Function_18(0);
	Function_18(0);
	Function_15();
	Function_14();
	Function_13();
	Function_12();
	if (Global_116927[1996].f_24 != 1 || UI_HAS_CHEATED())
	{
		Global_116927[1996].f_24 = 1;
	}
	Function_11();
	return;
}

void Function_11() //Position: 0x1213 / 4627
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

void Function_12() //Position: 0x1319 / 4889
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

void Function_13() //Position: 0x134C / 4940
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
					Global_119632[iVar23] = bVar3;
					(&Global_119632[iVar23] + 8) = GET_JOURNAL_ENTRY_MISC_FLAG(bVar3);
					*(&Global_119632[iVar23] + 16) = IS_JOURNAL_ENTRY_UPDATED(bVar3);
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

void Function_14() //Position: 0x14DF / 5343
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
					Global_119329[iVar23] = bVar3;
					*(&Global_119329[iVar23] + 8) = GET_JOURNAL_ENTRY_MISC_FLAG(bVar3);
					*(&Global_119329[iVar23] + 16) = IS_JOURNAL_ENTRY_UPDATED(bVar3);
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

void Function_15() //Position: 0x1698 / 5784
{
	Function_16(&Global_42918, 1, 0);
	return;
}

void Function_16(struct<2317> Param0) //Position: 0x16A6 / 5798
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
	
	uVar0 = Function_17();
	if (IS_ACTOR_VALID(&uVar0))
	{
		Param0.f_1060 = GET_NUM_WEAPONS_IN_INVENTORY(&uVar0);
		iVar7 = 4294967294;
		bVar8 = GET_WEAPON_IN_HAND(&uVar0);
		if (bVar8 != 4294967295)
		{
			if (GET_WEAPON_IS_EXTERNALLY_CREATED(&uVar0, bVar8) || uParam2)
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

var Function_17() //Position: 0x18C3 / 6339
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

struct<8> Function_18(int iParam0) //Position: 0x18D8 / 6360
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
					iVar2 = ((Function_33((50 + iVar4)) + Function_33((183 + iVar4))) + Function_33((90 + iVar4)));
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
	Function_19(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_19(int iParam0, bool bParam1, bool bParam2) //Position: 0x197F / 6527
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
		Function_32(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_54086[iParam0] = TO_FLOAT(bParam1);
	Function_31(iParam0);
	if (&bParam2)
	{
		Function_20(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_20(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, int iParam7) //Position: 0x1C1B / 7195
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
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(Function_30(390))), 32);
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
					bVar19 = (Function_166(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_166(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_28(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &iParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_131807.f_1316 <= 49)
						{
							Function_25(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(&iParam7))
							{
								iParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_23(Global_131807.f_1316, Global_132499.f_1412, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(&iParam7), &Global_55480[iParam016] + 32, Function_22(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_131807.f_1316 + 1, Function_21(), &Var9);
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

var Function_21() //Position: 0x2259 / 8793
{
	int iVar0;
	
	return &iVar0;
}

var Function_22(int iParam0) //Position: 0x2262 / 8802
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_23(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x2273 / 8819
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_24("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_24("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_24("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (&bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_24(char* cParam0) //Position: 0x236A / 9066
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_25(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x2385 / 9093
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_27(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_26(Function_27(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_26(int iParam0, int iParam1) //Position: 0x23EC / 9196
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_27(int iParam0, bool bParam1) //Position: 0x23FE / 9214
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_28(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x2410 / 9232
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
	if (((Function_29(iParam0) != 19 || Function_29(iParam0) != 17) || Function_29(iParam0) != 10) || Function_29(iParam0) != 9)
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

int Function_29(int iParam0) //Position: 0x2544 / 9540
{
	return Global_55480[iParam016].f_96;
}

var Function_30(int iParam0) //Position: 0x2553 / 9555
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

void Function_31(int iParam0) //Position: 0x2590 / 9616
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

int Function_32(int iParam0, bool bParam1, bool bParam2) //Position: 0x272A / 10026
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

int Function_33(bool bParam0) //Position: 0x296E / 10606
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_54086[bParam0]);
}

struct<8> Function_34() //Position: 0x29AF / 10671
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
		iVar2 = ((Function_33((50 + iVar3) + 15) + Function_33((183 + iVar3) + 15)) + Function_33((90 + iVar3) + 15));
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
	Function_19(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_35() //Position: 0x2A38 / 10808
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
			iVar2 = ((Function_33((50 + iVar3) + 8) + Function_33((183 + iVar3) + 8)) + Function_33((90 + iVar3) + 8));
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
	Function_19(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_36() //Position: 0x2ACF / 10959
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
		iVar2 = ((Function_33((50 + iVar3)) + Function_33((183 + iVar3))) + Function_33((90 + iVar3)));
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
	Function_19(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_37() //Position: 0x2B4E / 11086
{
	if (Global_77930 > 0,1f)
	{
		Global_77930 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_38(7, (GET_CURRENT_GAME_TIME() - Global_77930), 0);
	Global_77930 = GET_CURRENT_GAME_TIME();
	Function_19(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_38(int iParam0, bool bParam1, int iParam2) //Position: 0x2B8B / 11147
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
	Function_32(iParam0, bParam1, 1);
	Function_31(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_20(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

struct<16> Function_39() //Position: 0x2D97 / 11671
{
	int iVar0;
	int iVar1;
	
	iVar1 = 4294967295;
	iVar0 = 0;
	while (iVar0 <= 38)
	{
		if (Function_42(iVar0))
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
		return StackVal, StackVal, StackVal, (&Global_6667[Global_1096628] + 16);
	}
	if (Global_21684[Function_40(Global_10966)7].f_32 < Global_116927[iVar16].f_40)
	{
		return StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16);
	}
	return StackVal, StackVal, StackVal, *(&Global_99725[iVar143] + 4);
}

int Function_40(int iParam0) //Position: 0x2E34 / 11828
{
	if (!Function_41(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_41(int iParam0) //Position: 0x2E4E / 11854
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

bool Function_42(int iParam0) //Position: 0x2E64 / 11876
{
	if (Global_116927[iParam06] == 6)
	{
		return 1;
	}
	return 0;
}

bool Function_43(int iParam0) //Position: 0x2E79 / 11897
{
	var uVar0;
	
	uVar0 = _GET_PARAM_VALUE(&iParam0, "blah");
	if (IS_STRING_VALID(&uVar0))
	{
		return 1;
	}
	return 0;
}

int Function_44(bool bParam0, bool bParam1, int iParam2) //Position: 0x2E9B / 11931
{
	if (bParam0 >= 4294967295 || bParam0 <= 79)
	{
		return 0;
	}
	if (&bParam1)
	{
		if (GET_ITEM_COUNT(Function_45(bParam0), Function_17()) == 0)
		{
			ADD_ITEM(Function_45(bParam0), Function_17(), &iParam2);
			return 1;
		}
	}
	ADD_ITEM(Function_45(bParam0), Function_17(), &iParam2);
	return 1;
}

var Function_45(bool bParam0) //Position: 0x2EE9 / 12009
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

void Function_46(var uParam0, bool bParam1, bool bParam2) //Position: 0x2FDD / 12253
{
	Global_21473 = uParam0;
	if (&bParam1)
	{
		Function_47(&Global_21369 + 72 + 32, 128);
	}
	if (&bParam2)
	{
		Function_47(&Global_21369 + 72 + 32, 64);
	}
	return;
}

void Function_47(var uParam0, int iParam1) //Position: 0x300C / 12300
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_48(bool bParam0, bool bParam1) //Position: 0x301D / 12317
{
	int iVar0;
	int iVar1;
	
	if (Function_42(20))
	{
		Function_51(bParam0, 16, 1, 0, &bParam1);
	}
	iVar0 = Function_161(0, Global_46760[2], 3);
	iVar1 = Function_49(iVar0);
	if (iVar1 >= 0)
	{
		Function_51(bParam0, 2, 1, 0, &bParam1);
	}
	return;
}

var Function_49(int iParam0) //Position: 0x305C / 12380
{
	if (!Function_50(iParam0))
	{
		return 4294967295;
	}
	return Global_21684[iParam07].f_12;
}

bool Function_50(int iParam0) //Position: 0x3076 / 12406
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

void Function_51(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x308D / 12429
{
	char* cVar0[32];
	char* cVar8[32];
	
	strcpy(&cVar0, "OUT_", 32);
	stradd(&cVar0, &Global_42265[bParam09] + 32, 32);
	if (!Function_77(bParam0))
	{
		LOG_ERROR("Attempting to add scrap to invalid outfit");
		return;
	}
	if (!Function_83(3) || iParam3)
	{
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_76(bParam0, 2))
	{
		Function_74(456, 1, 0, 0);
		Function_73(bParam0, 2);
		if (!&bParam2)
		{
			cVar8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
			stradd(&cVar8, "_tip", 32);
			Function_1(&cVar8, 10.0f, 1, 0, 0, 1, 0);
		}
	}
	bParam2 = &bParam2;
	if (!Function_72(bParam0, bParam1))
	{
		Global_42265[bParam09].f_4 = (StackVal || bParam1);
		Function_73(bParam0, 1048576);
		if (&bParam4)
		{
			if (!Function_106(0, 0, 1, 1))
			{
				Function_96(1);
				Function_95(1, 0);
			}
			else
			{
				Function_71();
			}
		}
		Function_66(bParam0);
		if (StackVal && !Function_4(((((!Function_65() && !Global_6623) && !Global_6635) && !Global_6627) && !&bParam2), 1))
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Edit", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (StackVal || Function_4((((Function_65() || Global_6623) || Global_6635) || Global_6627), 1))
		{
			if (!DECOR_CHECK_EXIST(&Global_54076, "outfitScrap"))
			{
				DECOR_SET_INT(&Global_54076, "outfitScrap", bParam0);
			}
		}
		if (!Function_3())
		{
			if (!Function_64(Global_119934, 2))
			{
				Function_58(&Global_54076, 2, 1, 0);
			}
		}
		if (Global_42827 == bParam0)
		{
			Global_42827.f_16 = 1;
			Function_54();
		}
		Global_42827.f_16 = 1;
		switch (bParam0)
		{
			case 0x00000004:
				Function_53(3, bParam1);
				break;
			
			case 0x00000005:
				Function_53(3, SHIFT_LEFT(bParam1, 6));
				break;
			
			case 0x00000006:
				Function_53(3, SHIFT_LEFT(bParam1, 12));
				break;
			
			case 0x00000007:
				Function_53(3, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x00000008:
				Function_53(3, SHIFT_LEFT(bParam1, 24));
				break;
			
			case 0x00000009:
				Function_53(2, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x0000000A:
				Function_52(2, 24);
				break;
			
			case 0x00000003:
				Function_52(2, 25);
				break;
			
			case 0x0000000F:
				Function_52(2, 26);
				break;
			
			case 0x0000000D:
				Function_52(2, 27);
				break;
			
			case 0x0000000E:
				Function_52(2, 28);
				break;
			}
	}
}

void Function_52(int iParam0, int iParam1) //Position: 0x332C / 13100
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

void Function_53(int iParam0, bool bParam1) //Position: 0x3396 / 13206
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

void Function_54() //Position: 0x3405 / 13317
{
	if (Function_77(Global_42827))
	{
		if (Global_42827.f_16)
		{
			if (IS_BLIP_VALID(&Global_42827 + 8))
			{
				REMOVE_BLIP(&Global_42827 + 8);
			}
			Global_42827.f_4 = Function_57(Global_42827);
			*(&Global_42827 + 8) = Function_55(StackVal, Global_42827);
			Global_42827.f_16 = 0;
		}
		else if (!IS_BLIP_VALID(&Global_42827 + 8))
		{
			Global_42827.f_4 = Function_57(Global_42827);
			*(&Global_42827 + 8) = Function_55(StackVal, Global_42827);
			Global_42827.f_16 = 0;
		}
	}
	return;
}

int Function_55(int iParam0, int iParam1) //Position: 0x3485 / 13445
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
					if (Function_81(6, 0) || Function_81(12, 0))
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
					if (Function_42(13) && iVar14)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar14 = 0;
					}
					else if (iVar14 && Function_81(5, 0))
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
					if (Function_42(26) && iVar15)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_42(25) && iVar15)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_42(24) && iVar15)
					{
						cVar4 = &Global_44085[Global_46894[0]9] + 8;
						iVar15 = 0;
					}
					else if (Function_42(23) && iVar15)
					{
						cVar4 = &Global_44085[Global_46850[1]9] + 8;
						iVar15 = 0;
					}
					else if (iVar15 && Function_81(26, 0))
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
					if (Function_42(55) && iVar16)
					{
						cVar4 = &Global_44085[Global_46866[0]9] + 8;
						iVar16 = 0;
					}
					else if (Function_42(54) && iVar16)
					{
						cVar4 = &Global_44085[Global_46894[0]9] + 8;
						iVar16 = 0;
					}
					else if (Function_42(27) && iVar16)
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
					if (Function_42(52) && iVar13)
					{
						cVar4 = &Global_44085[Global_46926[2]9] + 8;
						iVar13 = 0;
					}
					else if (Function_42(51) && iVar13)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar13 = 0;
					}
					else if (Function_42(50) && iVar13)
					{
						cVar4 = &Global_44085[Global_46796[4]9] + 8;
						iVar13 = 0;
					}
					else if (Function_42(49) && iVar13)
					{
						cVar4 = &Global_44085[Global_46816[1]9] + 8;
						iVar13 = 0;
					}
					else if (Function_81(17, 0) && iVar13)
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
					if (Function_42(19) && iVar17)
					{
						Var0 = Vector(-1708,36f, 46,18f, 2175,89f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if ((Function_81(6, 0) && Function_42(18)) && iVar17)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar17 = 0;
					}
					else if (Function_42(17) && iVar17)
					{
						Var0 = Vector(-1687,208f, 53,208f, 2140,491f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if ((Function_81(9, 0) && Function_42(16)) && iVar17)
					{
						cVar4 = &Global_44085[Global_46760[0]9] + 8;
						iVar17 = 0;
					}
					else if (Function_42(15) && iVar17)
					{
						Var0 = Vector(-1709,084f, 55,216f, 2104,631f);
						vVar2 = Vector(125.0f, 125.0f, 125.0f);
						iVar17 = 0;
					}
					else if (Function_81(8, 0) && iVar17)
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
	if (Function_56(StackVal, Var0))
	{
		if (IS_OBJECT_VALID(&cVar4))
		{
			GET_OBJECT_POSITION(&cVar4, &Var0);
			if (Function_56(StackVal, vVar2))
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
	if (!Function_56(StackVal, vVar2))
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

bool Function_56(char* cParam0) //Position: 0x40E9 / 16617
{
	return (StackVal && (StackVal && cParam0 != 0.0f != 0.0f) != 0.0f);
}

int Function_57(int iParam0) //Position: 0x4101 / 16641
{
	int iVar0;
	int iVar1;
	
	if (!Function_77(iParam0))
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

void Function_58(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x4150 / 16720
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_60(&uParam0, iParam1, &iParam2) && !&bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(&uParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_59(&cVar1, &iParam2);
	if (!DECOR_CHECK_EXIST(&uParam0, &cVar1))
	{
		DECOR_SET_INT(&uParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(&uParam0, &cVar1, (DECOR_GET_INT(&uParam0, &cVar1) || bVar0));
	}
}

void Function_59(char* cParam0) //Position: 0x41C5 / 16837
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

bool Function_60(int iParam0, var uParam1, int iParam2) //Position: 0x41FF / 16895
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
		if (Function_62(DECOR_GET_INT(&iParam0, &cVar1)) > 3)
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
		switch (Function_61(uVar0))
		{
			case 0x00000002:
				if (!Function_64(Global_119935, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_61(char* cParam0) //Position: 0x427B / 17019
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

int Function_62(int iParam0) //Position: 0x431C / 17180
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_63(&iVar1, 2147483648);
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

void Function_63(int iParam0, int iParam1) //Position: 0x4359 / 17241
{
	iParam0 = (iParam0 - (iParam0 && iParam1));
	return;
}

bool Function_64(int iParam0, int iParam1) //Position: 0x436F / 17263
{
	if ((iParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

bool Function_65() //Position: 0x4382 / 17282
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_66(bool bParam0) //Position: 0x43AF / 17327
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
			if (Function_72(bParam0, Function_70(bVar24)))
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
			if (Function_72(bParam0, Function_70(bVar24)))
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
		SET_JOURNAL_ENTRY_PROGRESS(Global_42265[bParam09].f_64, (TO_FLOAT(Function_69(bParam0)) / TO_FLOAT(Global_42265[bParam09].f_28)), false, 0);
		Function_68(Global_42265[bParam09].f_64, 0);
		straddi(&cVar8, Function_67(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_42265[bParam09].f_64, &cVar8, 3);
	}
	return;
}

int Function_67(int iParam0) //Position: 0x455F / 17759
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_77(iParam0))
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

void Function_68(bool bParam0, bool bParam1) //Position: 0x45B6 / 17846
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

var Function_69(int iParam0) //Position: 0x45DB / 17883
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_77(iParam0))
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

int Function_70(bool bParam0) //Position: 0x4631 / 17969
{
	return SHIFT_LEFT(true, bParam0);
}

void Function_71() //Position: 0x463D / 17981
{
	return;
}

bool Function_72(bool bParam0, int iParam1) //Position: 0x4643 / 17987
{
	int iVar0;
	
	if (!Function_77(bParam0))
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

void Function_73(bool bParam0, int iParam1) //Position: 0x46A2 / 18082
{
	if (!Function_77(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_42265[bParam09].f_8 = (StackVal || iParam1);
	return;
}

int Function_74(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x46F7 / 18167
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
	Function_32(iParam0, TO_FLOAT(bParam1), 1);
	Function_31(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_20(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, &iParam3);
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
	Function_75(iParam0);
	return 1;
}

void Function_75(int iParam0) //Position: 0x491F / 18719
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

bool Function_76(int iParam0, int iParam1) //Position: 0x49BD / 18877
{
	int iVar0;
	
	if (!Function_77(iParam0))
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

bool Function_77(int iParam0) //Position: 0x49EA / 18922
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

void Function_78(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x4A00 / 18944
{
	char* cVar0[32];
	
	if (!Function_77(bParam0))
	{
		LOG_ERROR("Attempting to discover invalid outfit");
		return;
	}
	if (!Function_83(3) && !&bParam4)
	{
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_79(bParam0))
	{
		Function_74(456, 1, 0, 0);
		Function_73(bParam0, 2);
		if (&bParam2)
		{
			if (!Function_106(0, 0, 1, 1))
			{
				Function_96(1);
				Function_95(1, 5);
			}
			else
			{
				Function_71();
			}
		}
		Function_66(bParam0);
		strcpy(&cVar0, "OUT_", 32);
		stradd(&cVar0, &Global_42265[bParam09] + 32, 32);
		if ((!Function_65() && !&bParam1) && !Global_6623)
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Add", &cVar0, 0, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (Function_65() || Global_6623)
		{
			if (!DECOR_CHECK_EXIST(&Global_54076, "outfitDisc"))
			{
				DECOR_SET_INT(&Global_54076, "outfitDisc", bParam0);
			}
		}
		if (&bParam3)
		{
			stradd(&cVar0, "_tip", 32);
			Function_1(&cVar0, 10.0f, 1, 0, 0, 1, 0);
		}
		if (!Function_3())
		{
			if (!Function_64(Global_119934, 2))
			{
				Function_58(&Global_54076, 2, 1, 0);
			}
		}
	}
}

bool Function_79(int iParam0) //Position: 0x4B5C / 19292
{
	if (!Function_77(iParam0))
	{
		LOG_ERROR("Attempting to check discovery of invalid outfit");
		return 0;
	}
	if (Function_76(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

void Function_80(bool bParam0, bool bParam1, bool bParam2) //Position: 0x4BAE / 19374
{
	char* cVar0[32];
	char* cVar8[32];
	
	if (!Function_77(bParam0))
	{
		LOG_ERROR("Attempting to mostly complete an invalid outfit");
		return;
	}
	if (Global_6624)
	{
		return;
	}
	if (!Function_82(bParam0))
	{
		if (!Function_79(bParam0))
		{
			Function_78(bParam0, 1, 0, 0, 1);
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
		Function_74(457, 1, 0, 0);
		Function_73(bParam0, 6);
		if (bParam0 == 3)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(23))
			{
				AWARD_ACHIEVEMENT(23);
			}
		}
		if (&bParam2)
		{
			if (!Function_106(0, 0, 1, 1))
			{
				Function_96(1);
				Function_95(1, 0);
			}
			else
			{
				Function_71();
			}
		}
	}
	return;
}

bool Function_81(int iParam0, bool bParam1) //Position: 0x4D4F / 19791
{
	int iVar0;
	
	iVar0 = Function_40(iParam0);
	if (!Function_50(iVar0))
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

bool Function_82(int iParam0) //Position: 0x4D8D / 19853
{
	if (!Function_77(iParam0))
	{
		LOG_ERROR("Attempting to check wearable on invalid outfit");
		return 0;
	}
	if (Function_76(iParam0, 4))
	{
		return 1;
	}
	return 0;
}

bool Function_83(int iParam0) //Position: 0x4DDE / 19934
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_39290[iParam0];
}

bool Function_84(int iParam0) //Position: 0x4DFA / 19962
{
	switch (iParam0)
	{
		case 0x00000028:
			return 1;
			break;
		
		case 0x00000023:
			return 1;
			break;
	}
	return 0;
}

void Function_85(vector3 vParam0) //Position: 0x4E1E / 19998
{
	vParam0.f_4 = 0.0f;
	vParam0.f_8 = 0.0f;
	vParam0 = 0;
	return;
}

void Function_86(int iParam0, int iParam1) //Position: 0x4E35 / 20021
{
	int iVar0;
	char* cVar1[32];
	
	iVar0 = Function_177(&iParam0);
	cVar1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_87((*&Global_132987[iVar0125] + 212)[211]) };
	UI_SET_STRING("SC_UI_BEST_TIME", &cVar1);
	strcpy(&cVar1, "nSC_TROPHY", 32);
	stradd(&cVar1, I2STR(StackVal), 32);
	UI_SET_STRING("SC_UI_BEST_TROPHY", UI_GET_STRING(&cVar1));
	cVar1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_87((*&Global_132987[iVar0125] + 212)[311]) };
	UI_SET_STRING("SC_UI_LAST_TIME", &cVar1);
	strcpy(&cVar1, "nSC_TROPHY", 32);
	stradd(&cVar1, I2STR(StackVal), 32);
	UI_SET_STRING("SC_UI_LAST_TROPHY", UI_GET_STRING(&cVar1));
	cVar1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_87((*&Global_132987[iVar0125] + 212)[411]) };
	UI_SET_STRING("SC_UI_CURR_TIME", &cVar1);
	strcpy(&cVar1, "nSC_TROPHY", 32);
	stradd(&cVar1, I2STR(StackVal), 32);
	UI_SET_STRING("SC_UI_CURR_TROPHY", UI_GET_STRING(&cVar1));
	if (iParam1 <= 3)
	{
		Function_1("SC_CHALLENGE_END", 10.0f, 1, 0, 2, 1, 0);
	}
	else
	{
		Function_1("SC_CHALLENGE_END_GOLD", 10.0f, 1, 0, 2, 1, 0);
	}
	return;
}

struct<32> Function_87(var uParam0) //Position: 0x4FDA / 20442
{
	char* cVar0[32];
	int iVar8;
	int iVar9;
	bool bVar10;
	struct<13> Var11;
	
	Function_88(uParam0);
	Var11 = { StackVal, Function_88(uParam0) };
	iVar8 = StackVal;
	iVar9 = StackVal;
	bVar10 = FLOOR((Var11.f_12 * 100.0f));
	if (iVar8 <= 10)
	{
		stradd(&cVar0, "0", 32);
	}
	straddi(&cVar0, iVar8, 32);
	stradd(&cVar0, ":", 32);
	if (iVar9 <= 10)
	{
		stradd(&cVar0, "0", 32);
	}
	straddi(&cVar0, iVar9, 32);
	stradd(&cVar0, ".", 32);
	if (bVar10 <= 10)
	{
		stradd(&cVar0, "0", 32);
	}
	straddi(&cVar0, bVar10, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<8> Function_88(int iParam0) //Position: 0x505A / 20570
{
	struct<2> Var0;
	bool bVar2;
	
	bVar2 = iParam0;
	Var0 = FLOOR((bVar2 / 3600.0f));
	while (bVar2 <= 3600.0f)
	{
		bVar2 = (bVar2 - 3600.0f);
	}
	Var0.f_4 = FLOOR((bVar2 / 60.0f));
	while (bVar2 <= 60.0f)
	{
		bVar2 = (bVar2 - 60.0f);
	}
	Var0.f_8 = FLOOR(bVar2);
	Var0.f_12 = (StackVal - IntToFloat(bVar2));
	return StackVal, Var0;
}

int Function_89(int iParam0, float fParam1) //Position: 0x50C9 / 20681
{
	if (Function_94(&iParam0))
	{
		if (Function_90(&iParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float Function_90(vector3 vParam0) //Position: 0x50E7 / 20711
{
	if (Function_94(&vParam0))
	{
		if (Function_91(&vParam0))
		{
			return vParam0.z;
		}
		return (GET_CURRENT_GAME_TIME() - vParam0.y);
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return vParam0.y;
}

bool Function_91(int iParam0) //Position: 0x51B4 / 20916
{
	return Function_4(iParam0, 2);
}

void Function_92(int iParam0) //Position: 0x51C2 / 20930
{
	Function_93(&iParam0, 0.0f);
	return;
}

void Function_93(vector3 vParam0) //Position: 0x51CF / 20943
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_47(&vParam0, 1);
	Function_63(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

bool Function_94(int iParam0) //Position: 0x51F4 / 20980
{
	return Function_4(iParam0, 1);
}

void Function_95(int iParam0, int iParam1) //Position: 0x5202 / 20994
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
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", true);
	return;
}

void Function_96(bool bParam0) //Position: 0x5241 / 21057
{
	if ((Global_6638 || Global_6624) || Global_6639)
	{
		return;
	}
	Global_53524.f_24 = 4294967295;
	Function_97();
	Global_53524.f_28 = 0;
	Global_53524.f_32 = 1;
	(&Global_53524 + 56) = GET_TIME_OF_DAY();
	Function_10();
	SAVE_SOFT_SAVE(0);
	if (&bParam0)
	{
		Function_63(&Global_99144, 1);
		Function_63(&Global_99144, 2);
	}
	Global_140631 = 1;
	return;
}

void Function_97() //Position: 0x5296 / 21142
{
	struct<2> Var0;
	var uVar2;
	
	Global_53524.f_24 = 4294967295;
	if (Function_3())
	{
		Function_103(&Global_53524 + 12, &Global_53524 + 16);
		Var0 = Function_103(&Global_53524 + 12, &Global_53524 + 16);
	}
	else
	{
		Function_98(&Global_53524 + 12, &Global_53524 + 16, 0, 0);
		Var0 = Function_98(&Global_53524 + 12, &Global_53524 + 16, 0, 0);
	}
	if (Function_56(StackVal, Var0))
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

struct<8> Function_98(var uParam0, var uParam1, var uParam2, float fParam3) //Position: 0x534D / 21325
{
	int iVar0;
	
	iVar0 = Function_101(&uParam2, &fParam3);
	if (Function_100(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_53524.f_24 = Global_43788;
			Function_47(&Global_99144, 1);
			Function_63(&Global_99144, 2);
			Global_99130 = Global_26200[iVar014];
			uParam1 = 0;
		}
		else
		{
			Function_47(&Global_99144, 2);
			Function_63(&Global_99144, 1);
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
		Function_47(&Global_99144, 2);
		Function_63(&Global_99144, 1);
		uParam1 = 1;
		uParam0 = 290.0f;
		return StackVal, Vector(-2833,843f, 50,332f, 2418,003f);
	}
	Function_99();
	return StackVal, Function_99();
}

struct<8> Function_99() //Position: 0x5445 / 21573
{
	return StackVal, Vector(0.0f, 0.0f, 0.0f);
}

bool Function_100(int iParam0) //Position: 0x544F / 21583
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_101(bool bParam0, bool bParam1) //Position: 0x5465 / 21605
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
				fVar2 = Function_102(StackVal, StackVal, Global_54078, Global_26200[iVar314]);
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
		fVar2 = Function_102(StackVal, StackVal, Global_54078, Vector(-2833,843f, 50,332f, 2418,003f));
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_100(iVar0) && !&bParam1)
	{
		iVar0 = Function_101(&bParam0, 1);
	}
	return iVar0;
}

float Function_102(struct<2> Param0, struct<2> Param2) //Position: 0x5531 / 21809
{
	Param0.f_4 = 0.0f;
	Param2.f_4 = 0.0f;
	return VDIST(Param0, Param2);
}

struct<8> Function_103(float fParam0, int iParam1) //Position: 0x554E / 21838
{
	bool bVar0;
	struct<2> Var1;
	struct<2> Var3;
	struct<2> Var5;
	bool bVar7;
	
	fParam0 = fParam0;
	bVar0 = 99999,99f;
	Var1 = Vector(0.0f, 0.0f, 0.0f);
	Function_105(&Global_54076, &Var3);
	if (!Function_104(Global_46760[0]))
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
	if (!Function_104(Global_46760[2]))
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
	if (!Function_104(Global_46760[1]))
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
	if (!Function_104(Global_46796[1]))
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
	if (!Function_104(Global_46796[3]))
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
	if (!Function_104(Global_46796[2]))
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
	if (!Function_104(Global_46796[4]))
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
	if (!Function_104(Global_46816[0]))
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
	if (!Function_104(Global_46816[1]))
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
	if (!Function_104(Global_46816[2]))
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
	if (!Function_104(Global_46838[0]))
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
	if (!Function_104(Global_46850[0]))
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
	if (!Function_104(Global_46850[1]))
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
	if (!Function_104(Global_46850[2]))
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
	if (!Function_104(Global_46866[0]))
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
	if (!Function_104(Global_46866[1]))
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
	if (!Function_104(Global_46866[2]))
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
	if (!Function_104(Global_46894[2]))
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
	if (!Function_104(Global_46894[3]))
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
	if (!Function_104(Global_46894[0]))
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
	if (!Function_104(Global_46914[0]))
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
	if (!Function_104(Global_46926[2]))
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
	if (!Function_104(Global_46926[1]))
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
	if (!Function_104(Global_46926[0]))
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
	if (!Function_104(Global_46838[1]))
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
	if (!Function_104(Global_46894[1]))
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
	Function_47(&Global_99144, 2);
	Function_63(&Global_99144, 1);
	iParam1 = 0;
	if (Function_56(StackVal, Var1))
	{
		Var1 = Vector(-63,861f, 116,861f, 1414,684f);
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(Var1);
	PRINTNL();
	return StackVal, Var1;
}

bool Function_104(int iParam0) //Position: 0x5D7A / 23930
{
	var uVar0;
	
	uVar0 = Global_43791[iParam0];
	return (((Function_4(uVar0, 0x1000000) || Function_4(uVar0, 0x2000000)) || Function_4(uVar0, 0x4000000)) || !Function_4(uVar0, 0x10000000));
}

void Function_105(var uParam0, int iParam1) //Position: 0x5DB5 / 23989
{
	GET_POSITION(&uParam0, &iParam1);
	return;
}

bool Function_106(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x5DC4 / 24004
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

void Function_107(int iParam0, struct<557> Param1) //Position: 0x5E73 / 24179
{
	int iVar0;
	
	iVar0 = Function_177(&iParam0);
	Param1.f_556 = (*&Global_132987[iVar0125] + 212)[411];
	(*&Global_132987[iVar0125] + 212)[411] = Param1.f_556;
	(&Global_132987[iVar0125] + 212[411])->f_4 = Param1.f_528;
	(*&Global_132987[iVar0125] + 212[411] + 56)[0] = StackVal;
	(*&Global_132987[iVar0125] + 212[411] + 56)[1] = StackVal;
	(*&Global_132987[iVar0125] + 212[411] + 56)[2] = StackVal;
	if (StackVal || ((StackVal || ((StackVal < Param1.f_528 != Param1.f_528 && (*&Global_132987[iVar0125] + 212)[211] <= Param1.f_556) && Param1.f_528 < 0)) && (*&Global_132987[iVar0125] + 212)[211] != 0.0f < 0))
	{
		Global_132987[iVar0125].f_176 = (TO_FLOAT((StackVal * 100000)) - (*&Global_132987[iVar0125] + 212)[411]);
		Global_137989[iVar066].f_20 = ROUND(Global_132987[iVar0125].f_176);
		Function_108(Global_132987[iVar0125].f_140, iVar0, 4294967295, 0);
		(*&Global_132987[iVar0125] + 212)[211] = Param1.f_556;
		(&Global_132987[iVar0125] + 212[211])->f_4 = Param1.f_528;
		(*&Global_132987[iVar0125] + 212[211] + 56)[0] = StackVal;
		(*&Global_132987[iVar0125] + 212[211] + 56)[1] = StackVal;
		(*&Global_132987[iVar0125] + 212[211] + 56)[2] = StackVal;
	}
	return;
}

void Function_108(int iParam0, int iParam1, var uParam2, bool bParam3) //Position: 0x6058 / 24664
{
	int iVar0[67];
	int iVar68;
	int iVar69;
	int iVar70;
	int iVar71;
	
	if (iParam0 < 0 && Global_137989[iParam166].f_20 < 0)
	{
		NET_START_LB_UPDATE(&bParam3);
		if (&bParam3)
		{
			iVar0[1] = Global_137989[iParam166].f_20;
			iVar68 = 41;
			iVar69 = 0;
			iVar70 = 5;
			iVar71 = (30 - iVar70);
			iVar69 = 0;
			while (iVar69 <= iVar71)
			{
				iVar0[iVar68] = (*&Global_137989[iParam166] + 28)[iVar69];
				iVar68++;
				iVar69++;
			}
		}
		else
		{
			iVar0[0] = Global_137989[iParam166].f_20;
			iVar0[66] = ROUND((*&Global_132987[iParam1125] + 212)[411]);
			if ((*&Global_132987[iParam1125] + 212[411] + 56)[0])
			{
				iVar0[2] = 1;
			}
			if ((*&Global_132987[iParam1125] + 212[411] + 56)[1])
			{
				iVar0[3] = 1;
			}
			if ((*&Global_132987[iParam1125] + 212[411] + 56)[2])
			{
				iVar0[4] = 1;
			}
			iVar0[40] = StackVal;
		}
		NET_UPDATE_LEADERBOARD(4294967295, iParam0, &uParam2, &iVar0);
		NET_END_LB_UPDATE();
	}
}

void Function_109(struct<529> Param0) //Position: 0x6174 / 24948
{
	int iVar0;
	
	iVar0 = Function_177(&iParam1);
	switch (iParam2)
	{
		case 0x00000000:
			if (!Param0.f_504)
			{
				Function_117(&iParam1);
				Function_116(&iParam1);
				Param0.f_504 = 1;
			}
			if (!Function_94(&iLocal_31))
			{
				Function_92(&iLocal_31);
			}
			iParam2 = 1;
			break;
		
		case 0x00000001:
			Function_115(&Param0, &iParam1);
			Function_114(&Param0, &iParam1);
			Function_112(&Param0, &iParam1);
			if (Function_94(&iLocal_31))
			{
				(*&Global_132987[iVar0125] + 212)[411] = Function_90(&iLocal_31);
			}
			if (!Function_111())
			{
				if (Param0.f_528 >= 0)
				{
					Param0.f_508 = 1;
				}
				else
				{
					Param0.f_496 = 1;
				}
			}
			if (!Function_111())
			{
				Param0.f_8 = StackVal + 1;
				if (StackVal >= 10)
				{
					Param0.f_8 = 0;
					iParam2 = 2;
				}
			}
			break;
		
		case 0x00000002:
			if (Function_94(&iLocal_31))
			{
				Function_110(&iLocal_31);
				(*&Global_132987[iVar0125] + 212)[411] = Function_90(&iLocal_31);
				Function_85(&iLocal_31);
			}
			Param0.f_500 = 1;
			break;
	}
	return;
}

void Function_110(vector3 vParam0) //Position: 0x627F / 25215
{
	if (Function_94(&vParam0))
	{
		if (!Function_91(&vParam0))
		{
			vParam0.f_8 = (GET_CURRENT_GAME_TIME() - vParam0.y);
			Function_47(&vParam0, 2);
		}
	}
	else
	{
		LOG_ERROR("ERROR: Trying to PAUSE a TIMER that has not been started!");
		PRINTSTRING("WARNING: Trying to PAUSE a TIMER that has not been started! IGNORING COMMAND.\n");
	}
	return;
}

bool Function_111() //Position: 0x6343 / 25411
{
	return IS_ACTOR_ON_TRAIN(&Global_54076, 1);
}

void Function_112(struct<529> Param0) //Position: 0x6351 / 25425
{
	if (!StackVal)
	{
		(&Param0 + 596[211])->f_32 = ((Global_54086[138] + Global_54086[27]) - (&Param0 + 596[211])->f_20);
		if (GET_PLAYER_COMBATMODE() == 1 && (&Param0 + 596[211])->f_32 < 0.0f)
		{
			(&Param0 + 596[211])->f_28 = 1.0f;
		}
		if (!Function_111())
		{
			if ((&Param0 + 596[211])->f_28 == 1.0f && (&Param0 + 596[211])->f_32 < 0.0f)
			{
				(&Param0 + 596[211])->f_4 = 1;
				Param0.f_528++;
			}
		}
	}
	Function_113(&iParam1, &Param0, 2);
	return;
}

void Function_113(int iParam0, struct<585> Param1) //Position: 0x63F7 / 25591
{
	char* cVar0[24];
	char* cVar6[24];
	
	if (StackVal && !(StackVal && NET_MAILBOX_IS_SIGNED_INTO_SC()))
	{
		(*&Global_132987[Function_177(&iParam0)125] + 212[411] + 56)[iParam2] = 1;
		if (Param1.f_528 != 1 && !Param1.f_576)
		{
			strcpy(&cVar0, I2STR((3 - Param1.f_528)), 24);
			strcpy(&cVar6, "nSC_TROPHY", 24);
			stradd(&cVar6, I2STR(Param1.f_528), 24);
			UI_SET_STRING("SC_UI_CURR_TROPHY", UI_GET_STRING(&cVar6));
			UI_SET_STRING("SC_Objectives_Left", &cVar0);
			Function_1("SC_OBJECTIVE_COMPLETE_MSG", 4.0f, 1, 0, 2, 1, 0);
			Param1.f_576 = 1;
		}
		else if (Param1.f_528 != 2 && !Param1.f_580)
		{
			strcpy(&cVar6, "nSC_TROPHY", 24);
			stradd(&cVar6, I2STR(Param1.f_528), 24);
			UI_SET_STRING("SC_UI_CURR_TROPHY", UI_GET_STRING(&cVar6));
			Function_1("SC_OBJECTIVE_COMPLETE_SILVER_MSG", 4.0f, 1, 0, 2, 1, 0);
			Param1.f_580 = 1;
		}
		else if (Param1.f_528 != 3 && !Param1.f_584)
		{
			strcpy(&cVar6, "nSC_TROPHY", 24);
			stradd(&cVar6, I2STR(Param1.f_528), 24);
			UI_SET_STRING("SC_UI_CURR_TROPHY", UI_GET_STRING(&cVar6));
			Function_1("SC_OBJECTIVE_COMPLETE_GOLD_MSG", 4.0f, 1, 0, 2, 1, 0);
			Param1.f_584 = 1;
		}
		(&Param1 + 596[iParam211])->f_8 = 1;
	}
	return;
}

void Function_114(struct<565> Param0) //Position: 0x65E5 / 26085
{
	if (!StackVal)
	{
		if (IS_PLAYER_DEADEYE(0) && !(&Param0 + 596[111])->f_12)
		{
			(&Param0 + 596[111])->f_12 = 1;
		}
		if ((&Param0 + 596[111])->f_12)
		{
			(&Param0 + 596[111])->f_28 = TO_FLOAT(GET_NUM_KILLS_LAST_DEADEYE());
		}
		if (&Param0 + 596[111])->f_28 <= IntToFloat(Param0.f_564)
		{
			(&Param0 + 596[111])->f_4 = 1;
			Param0.f_528++;
		}
	}
	Function_113(&iParam1, &Param0, 1);
	return;
}

void Function_115(struct<561> Param0) //Position: 0x6673 / 26227
{
	if (!StackVal)
	{
		(&Param0 + 596[011])->f_28 = ((Global_54086[138] + Global_54086[27]) - (&Param0 + 596[011])->f_20);
		if (&Param0 + 596[011])->f_28 <= IntToFloat(Param0.f_560)
		{
			(&Param0 + 596[011])->f_4 = 1;
			Param0.f_528++;
		}
	}
	Function_113(&iParam1, &Param0, 0);
	return;
}

void Function_116(int iParam0) //Position: 0x66E8 / 26344
{
	bool bVar0;
	char* cVar1[32];
	struct<8> Var9;
	char* cVar17[32];
	int iVar25;
	bool bVar26;
	
	iVar25 = Function_177(&iParam0);
	strcpy(&cVar1, "SC_AA", 32);
	if (SC_CHALLENGE_IS_VAR_VALID(&iParam0, "bMP"))
	{
		if (SC_CHALLENGE_GET_VAR_BOOL(&iParam0, "bMP"))
		{
			cVar1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_24(&cVar1, "_MP") };
		}
	}
	else
	{
		cVar1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_24(&cVar1, "_SP") };
	}
	if (SC_CHALLENGE_IS_VAR_VALID(&iParam0, "nAAID"))
	{
		bVar0 = SC_CHALLENGE_GET_VAR_INT(&iParam0, "nAAID");
	}
	cVar1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_24(&cVar1, "_") };
	cVar1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_24(&cVar1, I2STR(bVar0)) };
	Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_24(&cVar1, "_title") };
	UI_SET_STRING("SC_Challenge_Title", UI_GET_STRING(&Var9));
	if (StackVal && (*&Global_132987[iVar25125] + 212)[211] < 0.0f < 0)
	{
		cVar17 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_87((*&Global_132987[iVar25125] + 212)[211]) };
		UI_SET_STRING("SC_UI_BEST_TIME", &cVar17);
		strcpy(&cVar17, "nSC_TROPHY", 32);
		stradd(&cVar17, I2STR(StackVal), 32);
		UI_SET_STRING("SC_UI_BEST_TROPHY", UI_GET_STRING(&cVar17));
		UI_CHALLENGE_SET_TROPHY_TYPE(StackVal, (&iParam0 - (4 - 1)));
		bVar26 = true;
	}
	else if (StackVal && (*&Global_132987[iVar25125] + 212)[311] < 0.0f < 0)
	{
		cVar17 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_87((*&Global_132987[iVar25125] + 212)[311]) };
		UI_SET_STRING("SC_UI_BEST_TIME", &cVar17);
		strcpy(&cVar17, "nSC_TROPHY", 32);
		stradd(&cVar17, I2STR(StackVal), 32);
		UI_SET_STRING("SC_UI_BEST_TROPHY", UI_GET_STRING(&cVar17));
		UI_CHALLENGE_SET_TROPHY_TYPE(StackVal, (&iParam0 - (4 - 1)));
		bVar26 = true;
	}
	cVar17 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_87((*&Global_132987[iVar25125] + 212)[511]) };
	UI_SET_STRING("SC_UI_GHOST_TIME", &cVar17);
	strcpy(&cVar17, "nSC_TROPHY", 32);
	stradd(&cVar17, I2STR(StackVal), 32);
	UI_SET_STRING("SC_UI_GHOST_TROPHY", UI_GET_STRING(&cVar17));
	UI_CHALLENGE_SET_TROPHY_TYPE(StackVal, (&iParam0 - (4 - 1)));
	UI_SET_STRING("SC_UI_GHOST_GAMERTAG", &Global_132987[iVar25125] + 212[511] + 8);
	cVar17 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_87((*&Global_132987[iVar25125] + 212)[311]) };
	UI_SET_STRING("SC_UI_LAST_TIME", &cVar17);
	strcpy(&cVar17, "nSC_TROPHY", 32);
	stradd(&cVar17, I2STR(StackVal), 32);
	UI_SET_STRING("SC_UI_LAST_TROPHY", UI_GET_STRING(&cVar17));
	if (NET_MAILBOX_IS_SIGNED_INTO_SC())
	{
		if (StackVal && (StackVal || (StackVal != StackVal < (StackVal && (*&Global_132987[iVar25125] + 212)[511] < 0.0f < 0) && (*&Global_132987[iVar25125] + 212)[511] >= (*&Global_132987[iVar25125] + 212)[211])))
		{
			Function_1("SC_CHALLENGE_START", 10.0f, 1, 0, 2, 1, 0);
			Function_1("SC_CHALLENGE_START_GHOST", 10.0f, 1, 0, 2, 1, 0);
		}
		else if (bVar26)
		{
			Function_1("SC_CHALLENGE_START", 10.0f, 1, 0, 2, 1, 0);
			Function_1("SC_CHALLENGE_START2", 10.0f, 1, 0, 2, 1, 0);
		}
		else
		{
			Function_1("SC_CHALLENGE_START", 10.0f, 1, 0, 2, 1, 0);
		}
	}
	else
	{
		Function_1("SC_CHALLENGE_START_NOT_SIGNED", 6.0f, 1, 0, 2, 1, 0);
	}
	return;
}

void Function_117(int iParam0) //Position: 0x6B9D / 27549
{
	int iVar0;
	int iVar1;
	
	iVar0 = Function_177(&iParam0);
	Global_132987[iVar0125].f_116 = 1;
	Global_132987[iVar0125].f_148++;
	(*&Global_132987[iVar0125] + 212)[311] = (*&Global_132987[iVar0125] + 212)[411];
	(&Global_132987[iVar0125] + 212[311])->f_4 = StackVal;
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		(*&Global_132987[iVar0125] + 212[311] + 56)[iVar1] = (*&Global_132987[iVar0125] + 212[411] + 56)[iVar1];
		(*&Global_132987[iVar0125] + 212[411] + 56)[iVar1] = 0;
		iVar1++;
	}
	return;
}

void Function_118(struct<589> Param0) //Position: 0x6C4F / 27727
{
	int iVar0;
	
	iVar0 = Function_177(&iParam1);
	switch (iParam2)
	{
		case 0x00000000:
			if (!Function_94(&iLocal_31))
			{
				Function_92(&iLocal_31);
			}
			if (!Param0.f_588)
			{
				Function_117(&iParam1);
				Param0.f_588 = 1;
			}
			if (!Param0.f_504 && Function_122(&Param0, &iLocal_43))
			{
				Function_116(&iParam1);
				Param0.f_504 = 1;
				iParam2 = 1;
			}
			break;
		
		case 0x00000001:
			(*&Global_132987[iVar0125] + 212)[411] = Function_90(&iLocal_31);
			Function_121(&Param0, &iParam1);
			Function_120(&Param0, &iParam1);
			if (DECOR_CHECK_EXIST(&Global_54076, "sc_poker_obj3_fail") && (&Param0 + 596[211])->f_28 == -1.0f)
			{
				(&Param0 + 596[211])->f_28 = -1.0f;
			}
			if (!DECOR_CHECK_EXIST(&Global_54076, "scInPokerBlk"))
			{
				Param0.f_8 = StackVal + 1;
				if (StackVal >= 10)
				{
					Param0.f_8 = 0;
					iParam2 = 2;
				}
			}
			break;
		
		case 0x00000002:
			if (Function_94(&iLocal_31))
			{
				Function_110(&iLocal_31);
				(*&Global_132987[iVar0125] + 212)[411] = Function_90(&iLocal_31);
				Function_85(&iLocal_31);
			}
			if (Global_54086[0] < (&Param0 + 596[111])->f_20)
			{
				Param0.f_508 = 1;
				Function_119(&Param0, &iParam1);
			}
			else
			{
				Param0.f_496 = 1;
			}
			Param0.f_500 = 1;
			break;
	}
	return;
}

void Function_119(struct<529> Param0) //Position: 0x6DBC / 28092
{
	if (!StackVal)
	{
		if (DECOR_CHECK_EXIST(&Global_54076, "sc_poker_obj3_fail"))
		{
			(&Param0 + 596[211])->f_28 = -1.0f;
		}
		if (!DECOR_CHECK_EXIST(&Global_54076, "scInPokerBlk"))
		{
			if ((&Param0 + 596[211])->f_28 == -1.0f && Global_54086[0] < (&Param0 + 596[111])->f_20)
			{
				(&Param0 + 596[211])->f_4 = 1;
				Param0.f_528++;
			}
		}
	}
	Function_113(&iParam1, &Param0, 2);
	return;
}

void Function_120(struct<529> Param0) //Position: 0x6E5D / 28253
{
	if (!StackVal)
	{
		if (DECOR_CHECK_EXIST(&Global_54076, "sc_poker_obj2_playerWon") && DECOR_CHECK_EXIST(&Global_54076, "sc_poker_obj2_npcBust"))
		{
			(&Param0 + 596[111])->f_28 = 1.0f;
		}
		if ((&Param0 + 596[111])->f_28 != 1.0f)
		{
			(&Param0 + 596[111])->f_4 = 1;
			Param0.f_528++;
		}
	}
	Function_113(&iParam1, &Param0, 1);
	return;
}

void Function_121(struct<561> Param0) //Position: 0x6EF6 / 28406
{
	if (!StackVal)
	{
		(&Param0 + 596[011])->f_28 = (Global_54086[424] - (&Param0 + 596[011])->f_20);
		if (&Param0 + 596[011])->f_28 <= IntToFloat(Param0.f_560)
		{
			(&Param0 + 596[011])->f_4 = 1;
			Param0.f_528++;
		}
	}
	Function_113(&iParam1, &Param0, 0);
	return;
}

int Function_122(struct<593> Param0) //Position: 0x6F64 / 28516
{
	if (((((Param0.f_524 != 1 || Param0.f_524 != 3) || Param0.f_524 != 2) || Param0.f_524 != 6) || Param0.f_524 != 7) || Param0.f_524 != 8)
	{
		return 1;
	}
	if (!Param0.f_592)
	{
		if (!Function_94(&iParam1))
		{
			Function_92(&iParam1);
		}
		else
		{
			Function_89(&iParam1, 7.0f);
			Param0.f_592 = 1;
			Function_85(&iParam1);
		}
		if (Global_99146)
		{
			Param0.f_592 = 1;
		}
	}
	if (!Global_99146 && Param0.f_592)
	{
		return 1;
	}
	return 0;
}

void Function_123(struct<589> Param0) //Position: 0x6FF7 / 28663
{
	switch (iParam2)
	{
		case 0x00000000:
			if (!Function_94(&iLocal_31))
			{
				Function_92(&iLocal_31);
			}
			if (!Param0.f_588)
			{
				Function_117(&iParam1);
				Param0.f_588 = 1;
			}
			if (!Param0.f_504 && Function_122(&Param0, &iLocal_43))
			{
				Function_116(&iParam1);
				Param0.f_504 = 1;
				iParam2 = 1;
			}
			break;
		
		case 0x00000001:
			Function_126(&Param0, &iParam1);
			Function_125(&Param0, &iParam1);
			Function_124(&Param0, &iParam1);
			if (Function_158(Function_161(0, Global_46796[0], 3)) == 3)
			{
				Param0.f_508 = 1;
			}
			if (Function_158(Function_161(0, Global_46796[0], 3)) != 3 || Function_158(Function_161(0, Global_46796[0], 3)) != 0)
			{
				Param0.f_8 = StackVal + 1;
				if (StackVal >= 10)
				{
					Param0.f_8 = 0;
					iParam2 = 2;
				}
			}
			break;
		
		case 0x00000002:
			if (Function_94(&iLocal_31))
			{
				Function_110(&iLocal_31);
				Param0.f_556 = Function_90(&iLocal_31);
				Function_85(&iLocal_31);
			}
			if (Function_158(Function_161(0, Global_46796[0], 3)) == 0)
			{
				if (!Param0.f_508)
				{
					Param0.f_496 = 1;
				}
			}
			Param0.f_500 = 1;
			break;
	}
	return;
}

void Function_124(struct<569> Param0) //Position: 0x712B / 28971
{
	if (!StackVal)
	{
		(&Param0 + 596[211])->f_28 = (Global_54086[44] - (&Param0 + 596[211])->f_20);
		if (&Param0 + 596[211])->f_28 <= IntToFloat(Param0.f_568)
		{
			(&Param0 + 596[211])->f_4 = 1;
			Param0.f_528++;
		}
	}
	Function_113(&iParam1, &Param0, 2);
	return;
}

void Function_125(struct<565> Param0) //Position: 0x7198 / 29080
{
	if (!StackVal)
	{
		(&Param0 + 596[111])->f_28 = (Global_54086[467] - (&Param0 + 596[111])->f_20);
		if (&Param0 + 596[111])->f_28 <= IntToFloat(Param0.f_564)
		{
			(&Param0 + 596[111])->f_4 = 1;
			Param0.f_528++;
		}
	}
	Function_113(&iParam1, &Param0, 1);
	return;
}

void Function_126(struct<561> Param0) //Position: 0x7206 / 29190
{
	if (!StackVal)
	{
		(&Param0 + 596[011])->f_28 = ((Function_166((183 + 22)) + Function_166((183 + 25))) - (&Param0 + 596[011])->f_20);
		if (&Param0 + 596[011])->f_28 <= IntToFloat(Param0.f_560)
		{
			(&Param0 + 596[011])->f_4 = 1;
			Param0.f_528++;
		}
	}
	Function_113(&iParam1, &Param0, 0);
	return;
}

void Function_127(struct<589> Param0) //Position: 0x727B / 29307
{
	switch (iParam2)
	{
		case 0x00000000:
			if (!Function_94(&iLocal_31))
			{
				Function_92(&iLocal_31);
			}
			if (!Param0.f_588)
			{
				Function_117(&iParam1);
				Param0.f_588 = 1;
			}
			if (!Param0.f_504 && Function_122(&Param0, &iLocal_43))
			{
				Function_116(&iParam1);
				Param0.f_504 = 1;
				iParam2 = 1;
			}
			break;
		
		case 0x00000001:
			Function_130(&Param0, &iParam1);
			Function_129(&Param0, &iParam1);
			Function_128(&Param0, &iParam1);
			if (Function_158(Function_161(0, Global_46850[2], 3)) == 3)
			{
				Param0.f_508 = 1;
			}
			if (Function_158(Function_161(0, Global_46850[2], 3)) != 3 || Function_158(Function_161(0, Global_46850[2], 3)) != 0)
			{
				Param0.f_8 = StackVal + 1;
				if (StackVal >= 10)
				{
					Param0.f_8 = 0;
					iParam2 = 2;
				}
			}
			break;
		
		case 0x00000002:
			if (Function_94(&iLocal_31))
			{
				Function_110(&iLocal_31);
				Param0.f_556 = Function_90(&iLocal_31);
				Function_85(&iLocal_31);
			}
			if (Function_158(Function_161(0, Global_46850[2], 3)) == 0)
			{
				if (!Param0.f_508)
				{
					Param0.f_496 = 1;
				}
			}
			Param0.f_500 = 1;
			break;
	}
	return;
}

void Function_128(struct<569> Param0) //Position: 0x73AF / 29615
{
	if (!StackVal)
	{
		(&Param0 + 596[211])->f_28 = (Global_54086[467] - (&Param0 + 596[211])->f_20);
		if (&Param0 + 596[211])->f_28 <= IntToFloat(Param0.f_568)
		{
			(&Param0 + 596[211])->f_4 = 1;
			Param0.f_528++;
		}
	}
	Function_113(&iParam1, &Param0, 2);
	return;
}

void Function_129(struct<565> Param0) //Position: 0x741D / 29725
{
	if (!StackVal)
	{
		(&Param0 + 596[111])->f_28 = (Function_166((183 + 25)) - (&Param0 + 596[111])->f_20);
		if (&Param0 + 596[111])->f_28 <= IntToFloat(Param0.f_564)
		{
			(&Param0 + 596[111])->f_4 = 1;
			Param0.f_528++;
		}
	}
	Function_113(&iParam1, &Param0, 1);
	return;
}

void Function_130(struct<529> Param0) //Position: 0x748A / 29834
{
	bool bVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	if (!StackVal)
	{
		if (IS_PLAYER_DEADEYE(0) && !(&Param0 + 596[011])->f_12)
		{
			(&Param0 + 596[011])->f_12 = 1;
			(&Param0 + 596[011])->f_20 = 0.0f;
		}
		if ((&Param0 + 596[011])->f_12)
		{
			if (!IS_PLAYER_DEADEYE(0))
			{
				(&Param0 + 596[011])->f_20 = GET_CURRENT_GAME_TIME();
				(&Param0 + 596[011])->f_12 = 0;
			}
		}
		if (EVENT_TRAP_SUCCESSFUL_TRAP(&Param0 + 872))
		{
			uVar1 = CREATE_OBJECT_ITERATOR(&Param0 + 888);
			ITERATE_IN_EVENT_TRAP(&uVar1, &Param0 + 872);
			uVar2 = START_OBJECT_ITERATOR(&uVar1);
			if (IS_OBJECT_VALID(&uVar2))
			{
				uVar3 = GET_EVENT_FROM_OBJECT(&uVar2);
				uVar4 = GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(&uVar3));
				uVar5 = GET_ACTOR_FROM_OBJECT(GET_EVENT_PERPETRATOR(&uVar3));
				if (IS_ACTOR_VALID(&uVar4))
				{
					bVar0 = GET_ACTOR_ENUM(&uVar4);
					if (bVar0 == 412)
					{
						if (IS_ACTOR_VALID(&uVar5))
						{
							if ((IS_ACTOR_LOCAL_PLAYER(&uVar5) && !Function_131(GET_LAST_HIT_FLAGS(&uVar4), 262144)) && !IS_PLAYER_DEADEYE(0))
							{
								if (((&Param0 + 596[011])->f_20 < 0.0f && (GET_CURRENT_GAME_TIME() - (&Param0 + 596[011])->f_20) < 2.0f) || (&Param0 + 596[011])->f_20 != 0.0f)
								{
									(&Param0 + 596[011])->f_28 = ((&Param0 + 596[011])->f_28 + 1.0f);
								}
							}
						}
					}
				}
			}
			DESTROY_ITERATOR(&uVar1);
			EVENT_TRAP_CLEAR_TRAP_FLAG(&Param0 + 872);
			EVENT_TRAP_CLEAR_EVENTS(&Param0 + 872);
		}
		if ((&Param0 + 596[011])->f_28 <= 1.0f)
		{
			(&Param0 + 596[011])->f_4 = 1;
			Param0.f_528++;
		}
	}
	Function_113(&iParam1, &Param0, 0);
	return;
}

bool Function_131(var uParam0, int iParam1) //Position: 0x762B / 30251
{
	return (uParam0 && iParam1) == 0;
}

void Function_132(struct<589> Param0) //Position: 0x7638 / 30264
{
	switch (iParam2)
	{
		case 0x00000000:
			if (!Function_94(&iLocal_31))
			{
				Function_92(&iLocal_31);
			}
			if (!Param0.f_588)
			{
				Function_117(&iParam1);
				Param0.f_588 = 1;
			}
			if (!Param0.f_504 && Function_122(&Param0, &iLocal_43))
			{
				Function_116(&iParam1);
				Param0.f_504 = 1;
				iParam2 = 1;
			}
			break;
		
		case 0x00000001:
			Function_135(&Param0, &iParam1);
			Function_134(&Param0, &iParam1);
			Function_133(&Param0, &iParam1);
			if (Function_158(Function_161(0, Global_46796[2], 3)) == 3)
			{
				Param0.f_508 = 1;
			}
			if (Function_158(Function_161(0, Global_46796[2], 3)) != 3 || Function_158(Function_161(0, Global_46796[2], 3)) != 0)
			{
				Param0.f_8 = StackVal + 1;
				if (StackVal >= 10)
				{
					Param0.f_8 = 0;
					iParam2 = 2;
				}
			}
			break;
		
		case 0x00000002:
			if (Function_94(&iLocal_31))
			{
				Function_110(&iLocal_31);
				Param0.f_556 = Function_90(&iLocal_31);
				Function_85(&iLocal_31);
			}
			if (Function_158(Function_161(0, Global_46796[2], 3)) == 0)
			{
				if (!Param0.f_508)
				{
					Param0.f_496 = 1;
				}
			}
			Param0.f_500 = 1;
			break;
	}
	return;
}

void Function_133(struct<569> Param0) //Position: 0x776C / 30572
{
	if (!StackVal)
	{
		(&Param0 + 596[211])->f_28 = (Function_166(89) - (&Param0 + 596[211])->f_20);
		if (Function_158(Function_161(0, Global_46796[2], 3)) == 3)
		{
			if (&Param0 + 596[211])->f_28 >= IntToFloat(Param0.f_568)
			{
				(&Param0 + 596[211])->f_4 = 1;
				Param0.f_528++;
			}
		}
	}
	Function_113(&iParam1, &Param0, 2);
	return;
}

void Function_134(struct<565> Param0) //Position: 0x77E9 / 30697
{
	var uVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	
	if (!StackVal)
	{
		if (EVENT_TRAP_SUCCESSFUL_TRAP(&Param0 + 872))
		{
			uVar0 = CREATE_OBJECT_ITERATOR(&Param0 + 888);
			ITERATE_IN_EVENT_TRAP(&uVar0, &Param0 + 872);
			uVar1 = START_OBJECT_ITERATOR(&uVar0);
			if (IS_OBJECT_VALID(&uVar1))
			{
				uVar2 = GET_EVENT_FROM_OBJECT(&uVar1);
				iVar3 = GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(&uVar2));
				iVar4 = GET_ACTOR_FROM_OBJECT(GET_EVENT_PERPETRATOR(&uVar2));
				if (IS_ACTOR_VALID(&iVar3) && IS_ACTOR_LOCAL_PLAYER(&iVar4))
				{
					if (GET_ACTOR_FACTION(&iVar3) != 19 && IS_ACTOR_RIDING_VEHICLE(&iVar4))
					{
						(&Param0 + 596[111])->f_28 = ((&Param0 + 596[111])->f_28 + 1.0f);
					}
				}
			}
			DESTROY_ITERATOR(&uVar0);
			EVENT_TRAP_CLEAR_TRAP_FLAG(&Param0 + 872);
			EVENT_TRAP_CLEAR_EVENTS(&Param0 + 872);
		}
		if (&Param0 + 596[111])->f_28 <= IntToFloat(Param0.f_564)
		{
			(&Param0 + 596[111])->f_4 = 1;
			Param0.f_528++;
		}
	}
	Function_113(&iParam1, &Param0, 1);
	return;
}

void Function_135(struct<529> Param0) //Position: 0x78E7 / 30951
{
	if (!StackVal)
	{
		if (DECOR_CHECK_EXIST(&Global_54076, "iLockerFail"))
		{
			(&Param0 + 596[011])->f_28 = 1.0f;
		}
		if (DECOR_CHECK_EXIST(&Global_54076, "SOL_UsedSafe") && (&Param0 + 596[011])->f_28 == 1.0f)
		{
			(&Param0 + 596[011])->f_4 = 1;
			Param0.f_528++;
		}
	}
	Function_113(&iParam1, &Param0, 0);
	return;
}

void Function_136(struct<589> Param0) //Position: 0x796B / 31083
{
	switch (iParam2)
	{
		case 0x00000000:
			if (!Function_94(&iLocal_31))
			{
				Function_92(&iLocal_31);
			}
			if (!Param0.f_588)
			{
				Function_117(&iParam1);
				Param0.f_588 = 1;
			}
			if (!Param0.f_504 && Function_122(&Param0, &iLocal_43))
			{
				Function_116(&iParam1);
				Param0.f_504 = 1;
				iParam2 = 1;
			}
			break;
		
		case 0x00000001:
			Function_139(&Param0, &iParam1);
			Function_138(&Param0, &iParam1);
			Function_137(&Param0, &iParam1);
			if (Function_158(Function_161(0, Global_46850[1], 3)) == 3)
			{
				Param0.f_508 = 1;
			}
			if (Function_158(Function_161(0, Global_46850[1], 3)) != 3 || Function_158(Function_161(0, Global_46850[1], 3)) != 0)
			{
				Param0.f_8 = StackVal + 1;
				if (StackVal >= 10)
				{
					Param0.f_8 = 0;
					iParam2 = 2;
				}
			}
			break;
		
		case 0x00000002:
			if (Function_94(&iLocal_31))
			{
				Function_110(&iLocal_31);
				Param0.f_556 = Function_90(&iLocal_31);
				Function_85(&iLocal_31);
			}
			if (Function_158(Function_161(0, Global_46850[1], 3)) == 0)
			{
				if (!Param0.f_508)
				{
					Param0.f_496 = 1;
				}
			}
			Param0.f_500 = 1;
			break;
	}
	return;
}

void Function_137(struct<569> Param0) //Position: 0x7A9F / 31391
{
	if (!StackVal)
	{
		(&Param0 + 596[211])->f_28 = (Global_54086[46] - (&Param0 + 596[211])->f_20);
		if (&Param0 + 596[211])->f_28 <= IntToFloat(Param0.f_568)
		{
			(&Param0 + 596[211])->f_4 = 1;
			Param0.f_528++;
		}
	}
	Function_113(&iParam1, &Param0, 2);
	return;
}

void Function_138(struct<565> Param0) //Position: 0x7B0C / 31500
{
	if (!StackVal)
	{
		(&Param0 + 596[111])->f_28 = (Global_54086[467] - (&Param0 + 596[111])->f_20);
		if (&Param0 + 596[111])->f_28 <= IntToFloat(Param0.f_564)
		{
			(&Param0 + 596[111])->f_4 = 1;
			Param0.f_528++;
		}
	}
	Function_113(&iParam1, &Param0, 1);
	return;
}

void Function_139(struct<561> Param0) //Position: 0x7B7A / 31610
{
	var uVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	
	if (!StackVal)
	{
		if (EVENT_TRAP_SUCCESSFUL_TRAP(&Param0 + 872))
		{
			uVar0 = CREATE_OBJECT_ITERATOR(&Param0 + 888);
			ITERATE_IN_EVENT_TRAP(&uVar0, &Param0 + 872);
			uVar1 = START_OBJECT_ITERATOR(&uVar0);
			if (IS_OBJECT_VALID(&uVar1))
			{
				uVar2 = GET_EVENT_FROM_OBJECT(&uVar1);
				iVar3 = GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(&uVar2));
				iVar4 = GET_ACTOR_FROM_OBJECT(GET_EVENT_PERPETRATOR(&uVar2));
				if (IS_ACTOR_LOCAL_PLAYER(&iVar4))
				{
					if (IS_ACTOR_VALID(&iVar3))
					{
						if (GET_LAST_HIT_WEAPON(&iVar3) != 23 && FIRE_IS_ACTOR_ON_FIRE(&iVar3))
						{
							(&Param0 + 596[011])->f_28 = ((&Param0 + 596[011])->f_28 + 1.0f);
						}
					}
				}
			}
			DESTROY_ITERATOR(&uVar0);
			EVENT_TRAP_CLEAR_TRAP_FLAG(&Param0 + 872);
			EVENT_TRAP_CLEAR_EVENTS(&Param0 + 872);
		}
		if (&Param0 + 596[011])->f_28 <= IntToFloat(Param0.f_560)
		{
			(&Param0 + 596[011])->f_4 = 1;
			Param0.f_528++;
		}
	}
	Function_113(&iParam1, &Param0, 0);
	return;
}

void Function_140(struct<589> Param0) //Position: 0x7C7A / 31866
{
	switch (uParam2)
	{
		case 0x00000000:
			if (!Function_94(&iLocal_31))
			{
				Function_92(&iLocal_31);
			}
			if (!Param0.f_588)
			{
				Function_117(&iParam1);
				Param0.f_588 = 1;
			}
			if (!Param0.f_504 && Function_122(&Param0, &iLocal_43))
			{
				Function_116(&iParam1);
				Param0.f_504 = 1;
				uParam2 = 1;
			}
			break;
		
		case 0x00000001:
			Function_143(&Param0, &iParam1);
			Function_142(&Param0, &iParam1);
			Function_141(&Param0, &iParam1);
			if (Function_158(Function_161(0, Global_46816[2], 3)) == 3)
			{
				Param0.f_508 = 1;
			}
			if (Function_158(Function_161(0, Global_46816[2], 3)) != 3 || Function_158(Function_161(0, Global_46816[2], 3)) != 0)
			{
				Param0.f_8 = StackVal + 1;
				if (StackVal >= 10)
				{
					Param0.f_8 = 0;
					uParam2 = 2;
				}
			}
			break;
		
		case 0x00000002:
			if (Function_94(&iLocal_31))
			{
				Function_110(&iLocal_31);
				Param0.f_556 = Function_90(&iLocal_31);
				Function_85(&iLocal_31);
			}
			if (Function_158(Function_161(0, Global_46816[2], 3)) == 0)
			{
				if (!Param0.f_508)
				{
					Param0.f_496 = 1;
				}
			}
			Param0.f_500 = 1;
			break;
	}
	return;
}

void Function_141(struct<529> Param0) //Position: 0x7DAE / 32174
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!StackVal)
	{
		if (EVENT_TRAP_SUCCESSFUL_TRAP(&Param0 + 872))
		{
			uVar0 = CREATE_OBJECT_ITERATOR(&Param0 + 888);
			ITERATE_IN_EVENT_TRAP(&uVar0, &Param0 + 872);
			iVar1 = START_OBJECT_ITERATOR(&uVar0);
			if (IS_OBJECT_VALID(&iVar1))
			{
				iVar2 = GET_EVENT_FROM_OBJECT(&iVar1);
				iVar3 = GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(&iVar2));
				iVar4 = GET_ACTOR_FROM_OBJECT(GET_EVENT_PERPETRATOR(&iVar2));
				if (IS_ACTOR_VALID(&iVar4))
				{
					if (IS_ACTOR_LOCAL_PLAYER(&iVar4))
					{
						if (!IS_ACTOR_RIDING(&iVar4))
						{
							(&Param0 + 596[211])->f_28 = 0.0f;
						}
					}
				}
			}
			DESTROY_ITERATOR(&uVar0);
			EVENT_TRAP_CLEAR_TRAP_FLAG(&Param0 + 872);
			EVENT_TRAP_CLEAR_EVENTS(&Param0 + 872);
		}
		if (Function_158(Function_161(0, Global_46816[2], 3)) == 3)
		{
			if ((&Param0 + 596[211])->f_28 != 1.0f)
			{
				(&Param0 + 596[211])->f_4 = 1;
				Param0.f_528++;
			}
		}
	}
	Function_113(&iParam1, &Param0, 2);
	return;
}

void Function_142(struct<565> Param0) //Position: 0x7EA8 / 32424
{
	if (!StackVal)
	{
		(&Param0 + 596[111])->f_28 = (Global_54086[389] - (&Param0 + 596[111])->f_20);
		if (&Param0 + 596[111])->f_28 <= (TO_FLOAT(Param0.f_564) / 3,281f)
		{
			(&Param0 + 596[111])->f_4 = 1;
			Param0.f_528++;
		}
	}
	Function_113(&iParam1, &Param0, 1);
	return;
}

void Function_143(struct<561> Param0) //Position: 0x7F1E / 32542
{
	if (!StackVal)
	{
		if (IS_PLAYER_DEADEYE(0) && !(&Param0 + 596[011])->f_12)
		{
			(&Param0 + 596[011])->f_12 = 1;
		}
		if ((&Param0 + 596[011])->f_12)
		{
			(&Param0 + 596[011])->f_28 = TO_FLOAT(GET_NUM_KILLS_LAST_DEADEYE());
		}
		if (&Param0 + 596[011])->f_28 <= IntToFloat(Param0.f_560)
		{
			(&Param0 + 596[011])->f_4 = 1;
			Param0.f_528++;
		}
	}
	Function_113(&iParam1, &Param0, 0);
	return;
}

void Function_144(struct<589> Param0) //Position: 0x7FAC / 32684
{
	switch (uParam2)
	{
		case 0x00000000:
			if (!Function_94(&iLocal_31))
			{
				Function_92(&iLocal_31);
			}
			if (!Param0.f_588)
			{
				Function_117(&iParam1);
				Param0.f_588 = 1;
			}
			if (!Param0.f_504 && Function_122(&Param0, &iLocal_43))
			{
				Function_116(&iParam1);
				Param0.f_504 = 1;
				uParam2 = 1;
			}
			break;
		
		case 0x00000001:
			Function_147(&Param0, &iParam1);
			Function_146(&Param0, &iParam1);
			Function_145(&Param0, &iParam1);
			if (Function_158(Function_161(0, Global_46796[3], 3)) == 3)
			{
				Param0.f_508 = 1;
			}
			if (Function_158(Function_161(0, Global_46796[3], 3)) != 3 || Function_158(Function_161(0, Global_46796[3], 3)) != 0)
			{
				Param0.f_8 = StackVal + 1;
				if (StackVal >= 10)
				{
					Param0.f_8 = 0;
					uParam2 = 2;
				}
			}
			break;
		
		case 0x00000002:
			if (Function_94(&iLocal_31))
			{
				Function_110(&iLocal_31);
				Param0.f_556 = Function_90(&iLocal_31);
				Function_85(&iLocal_31);
			}
			if (Function_158(Function_161(0, Global_46796[3], 3)) == 0)
			{
				if (!Param0.f_508)
				{
					Param0.f_496 = 1;
				}
			}
			Param0.f_500 = 1;
			break;
	}
	return;
}

void Function_145(struct<569> Param0) //Position: 0x80E0 / 32992
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	if (!StackVal)
	{
		if (EVENT_TRAP_SUCCESSFUL_TRAP(&Param0 + 872))
		{
			uVar0 = CREATE_OBJECT_ITERATOR(&Param0 + 888);
			ITERATE_IN_EVENT_TRAP(&uVar0, &Param0 + 872);
			uVar1 = START_OBJECT_ITERATOR(&uVar0);
			if (IS_OBJECT_VALID(&uVar1))
			{
				uVar2 = GET_EVENT_FROM_OBJECT(&uVar1);
				uVar3 = GET_ACTOR_FROM_OBJECT(GET_EVENT_PERPETRATOR(&uVar2));
				if (IS_ACTOR_VALID(&uVar3))
				{
					if (IS_ACTOR_LOCAL_PLAYER(&uVar3))
					{
						if (EVENT_TRAP_SUCCESSFUL_TRAP(&Param0 + 880))
						{
							uVar4 = CREATE_OBJECT_ITERATOR(&Param0 + 888);
							ITERATE_IN_EVENT_TRAP(&uVar4, &Param0 + 880);
							iVar5 = START_OBJECT_ITERATOR(&uVar4);
							if (IS_OBJECT_VALID(&iVar5))
							{
								iVar6 = GET_EVENT_FROM_OBJECT(&iVar5);
								iVar7 = GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(&iVar6));
								iVar8 = GET_ACTOR_FROM_OBJECT(GET_EVENT_PERPETRATOR(&iVar6));
								if (IS_ACTOR_VALID(&iVar7) && IS_ACTOR_VALID(&iVar8))
								{
									if (IS_ACTOR_LOCAL_PLAYER(&iVar8))
									{
										(&Param0 + 596[211])->f_28 = ((&Param0 + 596[211])->f_28 + 1.0f);
									}
								}
							}
							DESTROY_ITERATOR(&uVar4);
							EVENT_TRAP_CLEAR_TRAP_FLAG(&Param0 + 880);
							EVENT_TRAP_CLEAR_EVENTS(&Param0 + 880);
						}
						else
						{
							(&Param0 + 596[211])->f_28 = 0.0f;
							EVENT_TRAP_CLEAR_TRAP_FLAG(&Param0 + 880);
							EVENT_TRAP_CLEAR_EVENTS(&Param0 + 880);
						}
					}
				}
			}
			DESTROY_ITERATOR(&uVar0);
			EVENT_TRAP_CLEAR_TRAP_FLAG(&Param0 + 872);
			EVENT_TRAP_CLEAR_EVENTS(&Param0 + 872);
		}
		if (&Param0 + 596[211])->f_28 <= IntToFloat(Param0.f_568)
		{
			(&Param0 + 596[211])->f_4 = 1;
			Param0.f_528++;
		}
	}
	Function_113(&iParam1, &Param0, 2);
	return;
}

void Function_146(struct<565> Param0) //Position: 0x8271 / 33393
{
	if (!StackVal)
	{
		(&Param0 + 596[111])->f_28 = (Global_54086[264] - (&Param0 + 596[111])->f_20);
		if (&Param0 + 596[111])->f_28 <= IntToFloat(Param0.f_564)
		{
			(&Param0 + 596[111])->f_4 = 1;
			Param0.f_528++;
		}
	}
	Function_113(&iParam1, &Param0, 1);
	return;
}

void Function_147(struct<561> Param0) //Position: 0x82DF / 33503
{
	if (!StackVal)
	{
		(&Param0 + 596[011])->f_28 = (Global_54086[0] - (&Param0 + 596[011])->f_20);
		if (&Param0 + 596[011])->f_28 <= IntToFloat(Param0.f_560)
		{
			(&Param0 + 596[011])->f_4 = 1;
			Param0.f_528++;
		}
	}
	Function_113(&iParam1, &Param0, 0);
	return;
}

void Function_148(struct<589> Param0) //Position: 0x834B / 33611
{
	switch (iParam2)
	{
		case 0x00000000:
			if (!Function_94(&iLocal_31))
			{
				Function_92(&iLocal_31);
			}
			if (!Param0.f_588)
			{
				Function_117(&iParam1);
				Param0.f_588 = 1;
			}
			if (!Param0.f_504 && Function_122(&Param0, &iLocal_43))
			{
				Function_116(&iParam1);
				Param0.f_504 = 1;
				iParam2 = 1;
			}
			break;
		
		case 0x00000001:
			Function_151(&Param0, &iParam1);
			Function_150(&Param0, &iParam1);
			Function_149(&Param0, &iParam1);
			if (Function_158(Function_161(0, Global_46760[2], 3)) == 3)
			{
				Param0.f_508 = 1;
			}
			if (Function_158(Function_161(0, Global_46760[2], 3)) != 3 || Function_158(Function_161(0, Global_46760[2], 3)) != 0)
			{
				Param0.f_8 = StackVal + 1;
				if (StackVal >= 10)
				{
					Param0.f_8 = 0;
					iParam2 = 2;
				}
			}
			break;
		
		case 0x00000002:
			if (Function_94(&iLocal_31))
			{
				Function_110(&iLocal_31);
				Param0.f_556 = Function_90(&iLocal_31);
				Function_85(&iLocal_31);
			}
			if (Function_158(Function_161(0, Global_46760[2], 3)) == 0)
			{
				if (!Param0.f_508)
				{
					Param0.f_496 = 1;
				}
			}
			Param0.f_500 = 1;
			break;
	}
	return;
}

void Function_149(struct<569> Param0) //Position: 0x847F / 33919
{
	if (!StackVal)
	{
		(&Param0 + 596[211])->f_28 = (Function_166(46) - (&Param0 + 596[211])->f_20);
		if (&Param0 + 596[211])->f_28 <= IntToFloat(Param0.f_568)
		{
			(&Param0 + 596[211])->f_4 = 1;
			Param0.f_528++;
		}
	}
	Function_113(&iParam1, &Param0, 2);
	return;
}

void Function_150(struct<565> Param0) //Position: 0x84EA / 34026
{
	if (!StackVal)
	{
		(&Param0 + 596[111])->f_28 = ((Function_166((183 + 22)) + Function_166((183 + 25))) - (&Param0 + 596[111])->f_20);
		if (&Param0 + 596[111])->f_28 <= IntToFloat(Param0.f_564)
		{
			(&Param0 + 596[111])->f_4 = 1;
			Param0.f_528++;
		}
	}
	Function_113(&iParam1, &Param0, 1);
	return;
}

void Function_151(struct<561> Param0) //Position: 0x855F / 34143
{
	if (!StackVal)
	{
		(&Param0 + 596[011])->f_28 = (Function_166(45) - (&Param0 + 596[011])->f_20);
		if (&Param0 + 596[011])->f_28 <= IntToFloat(Param0.f_560)
		{
			(&Param0 + 596[011])->f_4 = 1;
			Param0.f_528++;
		}
	}
	Function_113(&iParam1, &Param0, 0);
	return;
}

void Function_152(struct<589> Param0) //Position: 0x85CA / 34250
{
	switch (iParam2)
	{
		case 0x00000000:
			if (!Function_94(&iLocal_31))
			{
				Function_92(&iLocal_31);
			}
			if (!Param0.f_588)
			{
				Function_117(&uParam1);
				Param0.f_588 = 1;
			}
			if (!Param0.f_504 && Function_122(&Param0, &iLocal_43))
			{
				Function_116(&uParam1);
				Param0.f_504 = 1;
				iParam2 = 1;
			}
			break;
		
		case 0x00000001:
			Function_157(&Param0, &uParam1);
			Function_154(&Param0, &uParam1);
			Function_153(&Param0, &uParam1);
			if (Function_158(Function_161(0, Global_46838[1], 3)) == 3)
			{
				Param0.f_508 = 1;
			}
			if (Function_158(Function_161(0, Global_46838[1], 3)) != 3 || Function_158(Function_161(0, Global_46838[1], 3)) != 0)
			{
				Param0.f_8 = StackVal + 1;
				if (StackVal >= 10)
				{
					Param0.f_8 = 0;
					iParam2 = 2;
				}
			}
			break;
		
		case 0x00000002:
			if (Function_94(&iLocal_31))
			{
				Function_110(&iLocal_31);
				Param0.f_556 = Function_90(&iLocal_31);
				Function_85(&iLocal_31);
			}
			if (Function_158(Function_161(0, Global_46838[1], 3)) == 0)
			{
				if (!Param0.f_508)
				{
					Param0.f_496 = 1;
				}
			}
			Param0.f_500 = 1;
			break;
	}
	return;
}

void Function_153(struct<569> Param0) //Position: 0x86FE / 34558
{
	bool bVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	
	Param0.f_568 = 3;
	if (!StackVal)
	{
		if (EVENT_TRAP_SUCCESSFUL_TRAP(&Param0 + 872))
		{
			uVar1 = CREATE_OBJECT_ITERATOR(&Param0 + 888);
			ITERATE_IN_EVENT_TRAP(&uVar1, &Param0 + 872);
			iVar2 = START_OBJECT_ITERATOR(&uVar1);
			if (IS_OBJECT_VALID(&iVar2))
			{
				iVar3 = GET_EVENT_FROM_OBJECT(&iVar2);
				uVar4 = GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(&iVar3));
				if (IS_ACTOR_VALID(&uVar4))
				{
					bVar0 = GET_ACTOR_ENUM(&uVar4);
					if ((bVar0 != 502 || bVar0 != 503) || bVar0 != 504)
					{
						(&Param0 + 596[211])->f_28 = ((&Param0 + 596[211])->f_28 + 1.0f);
					}
				}
			}
			DESTROY_ITERATOR(&uVar1);
			EVENT_TRAP_CLEAR_TRAP_FLAG(&Param0 + 872);
			EVENT_TRAP_CLEAR_EVENTS(&Param0 + 872);
		}
		if (&Param0 + 596[211])->f_28 <= IntToFloat(Param0.f_568)
		{
			(&Param0 + 596[211])->f_4 = 1;
			Param0.f_528++;
		}
	}
	Function_113(&iParam1, &Param0, 2);
	return;
}

void Function_154(struct<565> Param0) //Position: 0x87FC / 34812
{
	char* cVar0[64];
	char* cVar17[64];
	var uVar33;
	var uVar34;
	var uVar35;
	var uVar36;
	var uVar37;
	var uVar38;
	
	if (!StackVal)
	{
		if (EVENT_TRAP_SUCCESSFUL_TRAP(&Param0 + 880))
		{
			uVar33 = CREATE_OBJECT_ITERATOR(&Param0 + 888);
			ITERATE_IN_EVENT_TRAP(&uVar33, &Param0 + 880);
			uVar34 = START_OBJECT_ITERATOR(&uVar33);
			if (IS_OBJECT_VALID(&uVar34))
			{
				uVar35 = GET_EVENT_FROM_OBJECT(&uVar34);
				uVar36 = GET_EVENT_TARGET_AS_OBJECT(&uVar35);
				uVar37 = GET_ACTOR_FROM_OBJECT(&uVar36);
				uVar38 = GET_ACTOR_FROM_OBJECT(GET_EVENT_PERPETRATOR(&uVar35));
				if (IS_ACTOR_LOCAL_PLAYER(&uVar38))
				{
					if (IS_ACTOR_VALID(&uVar37))
					{
						cVar0 = GET_ACTOR_ENUM_STRING(&uVar37);
						strcpy(&cVar1, &cVar0, 64);
						STRING_LOWER(&cVar1);
						strcpy(&cVar17, "female_prostitute", 64);
						STRING_LOWER(&cVar17);
						if (STRING_CONTAINS_STRING(&cVar1, &cVar17) && !Function_156(&Param0, 1, &uVar36))
						{
							(&Param0 + 596[111])->f_28 = ((&Param0 + 596[111])->f_28 + 1.0f);
							Function_155(&Param0, 1, &uVar36);
						}
					}
				}
			}
			DESTROY_ITERATOR(&uVar33);
			EVENT_TRAP_CLEAR_TRAP_FLAG(&Param0 + 880);
			EVENT_TRAP_CLEAR_EVENTS(&Param0 + 880);
		}
		if (&Param0 + 596[111])->f_28 <= IntToFloat(Param0.f_564)
		{
			(&Param0 + 596[111])->f_4 = 1;
			Param0.f_528++;
		}
	}
	Function_113(&iParam1, &Param0, 1);
	return;
}

void Function_155(int iParam0, int iParam1, int iParam2) //Position: 0x8943 / 35139
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (&iParam0 + 596[iParam111] + 36[iVar0] == "")
		{
			(&iParam0 + 596[iParam111] + 36[iVar0]) = &iParam2;
			return;
		}
		iVar0++;
	}
	return;
}

bool Function_156(int iParam0, int iParam1, int iParam2) //Position: 0x8989 / 35209
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (&iParam0 + 596[iParam111] + 36[iVar0] == &iParam2)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void Function_157(struct<561> Param0) //Position: 0x89BE / 35262
{
	if (!StackVal)
	{
		(&Param0 + 596[011])->f_28 = ((((Function_166((183 + 15)) + Function_166((183 + 16))) + Function_166((183 + 17))) + Function_166((183 + 18))) - (&Param0 + 596[011])->f_20);
		if (&Param0 + 596[011])->f_28 <= IntToFloat(Param0.f_560)
		{
			(&Param0 + 596[011])->f_4 = 1;
			Param0.f_528++;
		}
	}
	Function_113(&iParam1, &Param0, 0);
	return;
}

int Function_158(int iParam0) //Position: 0x8A43 / 35395
{
	if (!Function_159(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_159(int iParam0) //Position: 0x8A5D / 35421
{
	if (!Function_50(iParam0))
	{
		return 0;
	}
	if (!Function_160(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_160(int iParam0) //Position: 0x8A81 / 35457
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

int Function_161(bool bParam0, bool bParam1, bool bParam2) //Position: 0x8A96 / 35478
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_165(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_21684[iVar07] == iVar1)
		{
			return iVar0;
		}
		if (Global_21684[iVar07] != 0 && iVar0 < 0)
		{
			return Function_162(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_162(bParam0, bParam1, bParam2, 4294967295);
}

int Function_162(bool bParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x8AF4 / 35572
{
	var uVar0;
	
	if (!Function_164(bParam2))
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
	uVar0 = Function_165(bParam0, bParam1, bParam2);
	if (&iParam3 != 4294967295 || &iParam3 <= 275)
	{
		iParam3 = Function_163(uVar0);
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

var Function_163(int iParam0) //Position: 0x8C58 / 35928
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

bool Function_164(int iParam0) //Position: 0x8C96 / 35990
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_165(int iParam0, int iParam1, int iParam2) //Position: 0x8CAB / 36011
{
	return ((iParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

float Function_166(int iParam0) //Position: 0x8CCB / 36043
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

void Function_167(struct<593> Param0) //Position: 0x8D04 / 36100
{
	int iVar0;
	int iVar1;
	
	Param0.f_588 = 0;
	Param0.f_592 = 0;
	Param0.f_492 = 0;
	Param0.f_508 = 0;
	Param0.f_496 = 0;
	Param0.f_500 = 0;
	Param0.f_524 = 4294967295;
	Param0.f_8 = 0;
	Param0.f_536 = 0.0f;
	Param0.f_540 = 0.0f;
	Param0.f_544 = 0.0f;
	Param0.f_532 = 0;
	Param0.f_528 = 0;
	Param0.f_552 = 0;
	Param0.f_512 = 0;
	Param0.f_516 = 0;
	Param0.f_556 = 0.0f;
	Param0.f_504 = 0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		(*&Param0 + 596)[iVar011] = 0;
		(&Param0 + 596[iVar011])->f_4 = 0;
		(&Param0 + 596[iVar011])->f_12 = 0;
		(&Param0 + 596[iVar011])->f_16 = 0.0f;
		(&Param0 + 596[iVar011])->f_28 = 0.0f;
		(&Param0 + 596[iVar011])->f_32 = 0.0f;
		(&Param0 + 596[iVar011])->f_20 = 0.0f;
		(&Param0 + 596[iVar011])->f_24 = 0.0f;
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 <= 5)
		{
			(&Param0 + 596[iVar011] + 36[iVar1]) = "";
			iVar1++;
		}
		iVar0++;
	}
	return;
}

bool Function_168(int iParam0) //Position: 0x8E27 / 36391
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	if (SC_CHALLENGE_IS_VAR_VALID(&iParam0, "nAAID"))
	{
		iVar0 = SC_CHALLENGE_GET_VAR_INT(&iParam0, "nAAID");
	}
	switch (iVar0)
	{
		case 0x00000000:
			return Function_166(464) < 0.0f;
			break;
		
		case 0x00000001:
			return Function_166(459) < 0.0f;
			break;
		
		case 0x00000002:
			return Function_166(463) < 0.0f;
			break;
		
		case 0x00000003:
			return Function_166(462) < 0.0f;
			break;
		
		case 0x00000004:
			return Function_166(466) < 0.0f;
			break;
		
		case 0x00000005:
			return Function_166(460) < 0.0f;
			break;
		
		case 0x00000006:
			return Function_166(465) < 0.0f;
			break;
		
		case 0x00000007:
			return Function_166(461) < 0.0f;
			break;
		
		case 0x00000008:
			return Function_169(Global_46914[0]);
			break;
		
		case 0x00000009:
			return StackVal < 3;
			break;
	}
	return iVar1;
}

int Function_169(int iParam0) //Position: 0x8F12 / 36626
{
	if (!Function_171(iParam0))
	{
		return 0;
	}
	return Function_170(&(Global_43791[iParam0]), 4096);
}

int Function_170(var uParam0, int iParam1) //Position: 0x8F30 / 36656
{
	int iVar0;
	
	iVar0 = (uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_171(int iParam0) //Position: 0x8F4D / 36685
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_172(int iParam0, int iParam1) //Position: 0x8F63 / 36707
{
	bool bVar0;
	char* cVar2[32];
	struct<8> Var10;
	struct<8> Var18;
	struct<8> Var26;
	struct<8> Var34;
	struct<8> Var42;
	char* cVar50[32];
	struct<8> Var58;
	struct<8> Var66;
	struct<8> Var74;
	
	if (iParam1 < 4294967295 && iParam1 > 20)
	{
		strcpy(&cVar2, "SC_AA", 32);
		cVar2 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_24(&cVar2, "_SP") };
		if (SC_CHALLENGE_IS_VAR_VALID(&iParam0, "nAAID"))
		{
			bVar0 = SC_CHALLENGE_GET_VAR_INT(&iParam0, "nAAID");
		}
		strcpy(&cVar50, "SC_AA_ICON_", 32);
		straddi(&cVar50, bVar0, 32);
		cVar2 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_24(&cVar2, "_") };
		cVar2 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_24(&cVar2, I2STR(bVar0)) };
		Var10 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_24(&cVar2, "_title") };
		Var18 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_24(&cVar2, "_des") };
		Var26 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_24(&cVar2, "_obj1") };
		Var34 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_24(&cVar2, "_obj2") };
		Var42 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_24(&cVar2, "_obj3") };
		Var58 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_24(&cVar2, "_goal1") };
		Var66 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_24(&cVar2, "_goal2") };
		Var74 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_24(&cVar2, "_goal3") };
		if (SC_CHALLENGE_IS_VAR_VALID(&iParam0, "nnObjGoal1"))
		{
			UI_SET_STRING(&Var58, I2STR(SC_CHALLENGE_GET_VAR_INT(&iParam0, "nnObjGoal1")));
		}
		if (SC_CHALLENGE_IS_VAR_VALID(&iParam0, "nnObjGoal2"))
		{
			UI_SET_STRING(&Var66, I2STR(SC_CHALLENGE_GET_VAR_INT(&iParam0, "nnObjGoal2")));
		}
		if (SC_CHALLENGE_IS_VAR_VALID(&iParam0, "nnObjGoal3"))
		{
			UI_SET_STRING(&Var74, I2STR(SC_CHALLENGE_GET_VAR_INT(&iParam0, "nnObjGoal3")));
		}
		UI_CHALLENGE_CREATE(&iParam0, &Var10, &Var18);
		UI_CHALLENGE_SET_TROPHY_TYPE(&iParam0, Function_175(&iParam0));
		if (!Function_168(&iParam0))
		{
			UI_CHALLENGE_SET_TROPHY_TYPE(&iParam0, 8);
		}
		UI_CHALLENGE_SET_TITLE_TEXTURE(&iParam0, &cVar50);
		UI_CHALLENGE_SET_OBJECTIVE(&iParam0, 0, &Var26);
		UI_CHALLENGE_SET_OBJECTIVE(&iParam0, 1, &Var34);
		UI_CHALLENGE_SET_OBJECTIVE(&iParam0, 2, &Var42);
		Function_173(&iParam0, 0.0f, (*&Global_132987[iParam1125] + 212)[311], (*&Global_132987[iParam1125] + 212)[211]);
	}
	return;
}

void Function_173(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0x9186 / 37254
{
	bool bVar0;
	char* cVar1[32];
	struct<8> Var9;
	struct<8> Var17;
	struct<8> Var25;
	struct<8> Var33;
	struct<8> Var41;
	struct<8> Var49;
	struct<8> Var57;
	struct<8> Var65;
	struct<8> Var73;
	int iVar81;
	
	iVar81 = Function_177(&iParam0);
	strcpy(&cVar1, "SC_AA", 32);
	cVar1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_24(&cVar1, "_SP") };
	if (SC_CHALLENGE_IS_VAR_VALID(&iParam0, "nAAID"))
	{
		bVar0 = SC_CHALLENGE_GET_VAR_INT(&iParam0, "nAAID");
	}
	cVar1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_24(&cVar1, "_") };
	cVar1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_24(&cVar1, I2STR(bVar0)) };
	Var41 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_24(&cVar1, "_locked") };
	Var49 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_174(&cVar1, "_NotSignedDes", "") };
	Var57 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_174(&cVar1, "_LockedNotInSP", "") };
	Var65 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_24(&cVar1, "_des") };
	Var73 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_24(&cVar1, "_unlock") };
	Var17 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_24(&cVar1, "n_currTime") };
	Var25 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_24(&cVar1, "n_lastTime") };
	Var33 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_24(&cVar1, "n_bestTime") };
	Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_87(uParam1) };
	UI_SET_STRING(&Var17, &Var9);
	Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_87(uParam2) };
	UI_SET_STRING(&Var25, &Var9);
	Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_87(uParam3) };
	UI_SET_STRING(&Var33, &Var9);
	if (!NET_MAILBOX_IS_SIGNED_INTO_SC())
	{
		UI_CHALLENGE_SET_DESCRIPTION(&iParam0, &Var49);
	}
	else if (Function_168(&iParam0))
	{
		UI_CHALLENGE_SET_DESCRIPTION(&iParam0, &Var65);
	}
	else
	{
		UI_CHALLENGE_SET_DESCRIPTION(&iParam0, &Var41);
	}
	if (iVar81 >= 4294967295)
	{
		if (StackVal >= 1)
		{
			UI_CHALLENGE_SET_DESCRIPTION(&iParam0, &Var73);
		}
	}
}

struct<32> Function_174(char* cParam0) //Position: 0x9327 / 37671
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	stradd(&cVar0, &cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

int Function_175(int iParam0) //Position: 0x9349 / 37705
{
	int iVar0;
	
	iVar0 = Function_177(&iParam0);
	if (iVar0 >= 4294967295)
	{
		switch (StackVal)
		{
			case 0x00000000:
				if (Global_132987[iVar0125].f_148 <= 1)
				{
					return 4;
				}
				return 0;
				break;
			
			case 0x00000001:
				return 3;
				break;
			
			case 0x00000002:
				return 2;
				break;
			
			case 0x00000003:
				return 1;
				break;
			}
	}
	return 0;
}

int Function_176(int iParam0) //Position: 0x93B0 / 37808
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 19)
	{
		if (Global_132987[iVar0125] == 0)
		{
			Global_132987[iVar0125] = &iParam0;
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

int Function_177(int iParam0) //Position: 0x93E5 / 37861
{
	int iVar0;
	int iVar1;
	
	iVar0 = &iParam0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 19)
	{
		if (Global_132987[iVar1125] == iVar0)
		{
			return iVar1;
		}
		iVar1++;
	}
	return 4294967295;
}

