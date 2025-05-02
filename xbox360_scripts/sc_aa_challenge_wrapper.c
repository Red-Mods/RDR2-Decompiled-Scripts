//Decompiled with MagicRDR v1.0
//Function Count : 174
//Statics Count : 36
//Natives Count : 161
//Parameters Count : 1

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
	int iLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	int iLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	int iLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	int iLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iScriptParam_0 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	struct<553> Var0;
	
	*(&Var0 + 16) = 10;
	*(&Var0 + 60) = 10;
	*(&Var0 + 104) = 10;
	*(&Var0 + 148) = 10;
	*(&Var0 + 192) = 10;
	*(&Var0 + 240) = 3;
	*(&Var0 + 360) = 3;
	*(&Var0 + 360 + 4 + 36) = 5;
	*(&Var0 + 360 + 4 + 60 + 36) = 5;
	*(&Var0 + 360 + 4 + 60 + 60 + 36) = 5;
	uVar139 = "fObjBaseScore";
	uVar140 = "fObjBonusScale";
	uVar141 = "_StatCount";
	fVar157 = 0.0f;
	iVar166 = 0;
	iVar168 = Function_173(&iScriptParam_0);
	iVar171 = 1;
	iVar172 = 0;
	iVar173 = 0;
	iVar175 = 4294967295;
	if (iVar168 == 4294967295)
	{
		iVar168 = Function_172(&iScriptParam_0);
		Function_168(&iScriptParam_0, iVar168);
	}
	Global_84611[iVar168140].f_72 = 1;
	Var0.f_12 = SC_CHALLENGE_GET_LEADERBOARD_ID(iScriptParam_0, 0);
	uVar170 = Var0.f_12;
	Global_84611[iVar168140].f_88 = uVar170;
	while (((((!IS_EXITFLAG_SET() && iVar171) && !Function_167()) && Global_88795) && Function_163(iScriptParam_0)) && !UI_HAS_CHEATED())
	{
		switch (iVar167)
		{
			case 0x00000000:
				Function_162(&Var0);
				Var0.f_316 = 0;
				if (SC_CHALLENGE_IS_VAR_VALID(iScriptParam_0, "nAAID"))
				{
					Var0.f_288 = SC_CHALLENGE_GET_VAR_INT(iScriptParam_0, "nAAID");
				}
				if (SC_CHALLENGE_IS_VAR_VALID(iScriptParam_0, "fTime"))
				{
					Var0.f_300 = SC_CHALLENGE_GET_VAR_FLOAT(iScriptParam_0, "fTime");
				}
				if (SC_CHALLENGE_IS_VAR_VALID(iScriptParam_0, "nfObjTime1"))
				{
					Var0.f_304 = SC_CHALLENGE_GET_VAR_FLOAT(iScriptParam_0, "nfObjTime1");
				}
				if (SC_CHALLENGE_IS_VAR_VALID(iScriptParam_0, "nfObjTime2"))
				{
					Var0.f_308 = SC_CHALLENGE_GET_VAR_FLOAT(iScriptParam_0, "nfObjTime2");
				}
				if (SC_CHALLENGE_IS_VAR_VALID(iScriptParam_0, "nnObjGoal1"))
				{
					Var0.f_324 = SC_CHALLENGE_GET_VAR_INT(iScriptParam_0, "nnObjGoal1");
				}
				if (SC_CHALLENGE_IS_VAR_VALID(iScriptParam_0, "nnObjGoal2"))
				{
					Var0.f_328 = SC_CHALLENGE_GET_VAR_INT(iScriptParam_0, "nnObjGoal2");
				}
				if (SC_CHALLENGE_IS_VAR_VALID(iScriptParam_0, "nnObjGoal3"))
				{
					Var0.f_332 = SC_CHALLENGE_GET_VAR_INT(iScriptParam_0, "nnObjGoal3");
				}
				switch (Var0.f_288)
				{
					case 0x00000000:
						(&Var0 + 360[015])->f_20 = (((Function_161((183 + 15)) + Function_161((183 + 16))) + Function_161((183 + 17))) + Function_161((183 + 18)));
						Var0.f_552 = FIND_NAMED_LAYOUT("sc_fom_layout");
						if (IS_LAYOUTREF_VALID(Var0.f_552))
						{
							DESTROY_LAYOUT(Var0.f_552);
						}
						Var0.f_552 = CREATE_LAYOUT("sc_fom_layout");
						Var0.f_544 = CREATE_EVENT_TRAP("BanditoLeaderDisarm", 11, Var0.f_552);
						Var0.f_548 = CREATE_EVENT_TRAP("ProstituteHog", 50, Var0.f_552);
						EVENT_TRAP_STORE_EVENTS(Var0.f_544, 1);
						EVENT_TRAP_STORE_EVENTS(Var0.f_548, 1);
						break;
					
					case 0x00000001:
						(&Var0 + 360[015])->f_20 = Function_161(45);
						(&Var0 + 360[115])->f_20 = (Function_161((183 + 22)) + Function_161((183 + 25)));
						(&Var0 + 360[215])->f_20 = Function_161(46);
						break;
					
					case 0x00000002:
						Var0.f_552 = FIND_NAMED_LAYOUT("sc_gap_layout");
						if (IS_LAYOUTREF_VALID(Var0.f_552))
						{
							DESTROY_LAYOUT(Var0.f_552);
						}
						Var0.f_552 = CREATE_LAYOUT("sc_gap_layout");
						Var0.f_544 = CREATE_EVENT_TRAP("death", 6, Var0.f_552);
						Var0.f_548 = CREATE_EVENT_TRAP("headshot", 10, Var0.f_552);
						EVENT_TRAP_STORE_EVENTS(Var0.f_544, 1);
						EVENT_TRAP_STORE_EVENTS(Var0.f_548, 1);
						(&Var0 + 360[015])->f_20 = Global_34581[0];
						(&Var0 + 360[115])->f_20 = Global_34581[264];
						break;
					
					case 0x00000003:
						(&Var0 + 360[115])->f_20 = Global_34581[389];
						(&Var0 + 360[215])->f_28 = 1.0f;
						Var0.f_552 = FIND_NAMED_LAYOUT("sc_pik_layout");
						if (IS_LAYOUTREF_VALID(Var0.f_552))
						{
							DESTROY_LAYOUT(Var0.f_552);
						}
						Var0.f_552 = CREATE_LAYOUT("sc_pik_layout");
						Var0.f_544 = CREATE_EVENT_TRAP("HorseBackKills", 2, Var0.f_552);
						EVENT_TRAP_STORE_EVENTS(Var0.f_544, 1);
						break;
					
					case 0x00000004:
						(&Var0 + 360[115])->f_20 = Global_34581[467];
						(&Var0 + 360[215])->f_20 = Global_34581[46];
						Var0.f_552 = FIND_NAMED_LAYOUT("sc_nos_layout");
						if (IS_LAYOUTREF_VALID(Var0.f_552))
						{
							DESTROY_LAYOUT(Var0.f_552);
						}
						Var0.f_552 = CREATE_LAYOUT("sc_nos_layout");
						Var0.f_544 = CREATE_EVENT_TRAP("EnemiesFireBombed", 2, Var0.f_552);
						EVENT_TRAP_STORE_EVENTS(Var0.f_544, 1);
						break;
					
					case 0x00000005:
						Var0.f_552 = FIND_NAMED_LAYOUT("sc_sol_layout");
						if (IS_LAYOUTREF_VALID(Var0.f_552))
						{
							DESTROY_LAYOUT(Var0.f_552);
						}
						Var0.f_552 = CREATE_LAYOUT("sc_sol_layout");
						Var0.f_544 = CREATE_EVENT_TRAP("WagonHeadShots", 10, Var0.f_552);
						EVENT_TRAP_STORE_EVENTS(Var0.f_544, 1);
						(&Var0 + 360[215])->f_20 = Function_161(89);
						break;
					
					case 0x00000006:
						Var0.f_552 = FIND_NAMED_LAYOUT("sc_tes_layout");
						if (IS_LAYOUTREF_VALID(Var0.f_552))
						{
							DESTROY_LAYOUT(Var0.f_552);
						}
						Var0.f_552 = CREATE_LAYOUT("sc_tes_layout");
						Var0.f_544 = CREATE_EVENT_TRAP("eDeath", 2, Var0.f_552);
						EVENT_TRAP_STORE_EVENTS(Var0.f_544, 1);
						(&Var0 + 360[115])->f_20 = Function_161((183 + 25));
						(&Var0 + 360[215])->f_20 = Global_34581[467];
						break;
					
					case 0x00000007:
						(&Var0 + 360[015])->f_20 = (Function_161((183 + 22)) + Function_161((183 + 25)));
						(&Var0 + 360[115])->f_20 = Global_34581[467];
						(&Var0 + 360[215])->f_20 = Global_34581[44];
						break;
					
					case 0x00000008:
						(&Var0 + 360[015])->f_20 = Global_34581[424];
						(&Var0 + 360[115])->f_20 = Global_34581[0];
						break;
					
					case 0x00000009:
						(&Var0 + 360[015])->f_20 = (Global_34581[138] + Global_34581[27]);
						(&Var0 + 360[115])->f_28 = 1.0f;
						(&Var0 + 360[215])->f_20 = (&Var0 + 360[015])->f_20;
						break;
				}
				Function_168(&iScriptParam_0, iVar168);
				iVar167 = 1;
				break;
			
			case 0x00000001:
				iVar167 = 3;
			
			case 0x00000003:
				switch (Var0.f_288)
				{
					case 0x00000000:
						if (Function_153(Function_156(0, Global_30679[1], 3)) == 2)
						{
							Var0.f_256 = 1;
							iVar167 = 3;
						}
						if (Var0.f_256)
						{
							Function_147(&Var0, iScriptParam_0, &Var0 + 316);
							iVar167 = 3;
						}
						break;
					
					case 0x00000001:
						if (Function_153(Function_156(0, Global_30640[2], 3)) == 2)
						{
							Var0.f_256 = 1;
							iVar167 = 3;
						}
						if (Var0.f_256)
						{
							Function_143(&Var0, iScriptParam_0, &Var0 + 316);
							iVar167 = 3;
						}
						break;
					
					case 0x00000002:
						if (Function_153(Function_156(0, Global_30658[3], 3)) == 2)
						{
							Var0.f_256 = 1;
							iVar167 = 3;
						}
						if (Var0.f_256)
						{
							Function_139(&Var0, iScriptParam_0, &Var0 + 316);
							iVar167 = 3;
						}
						break;
					
					case 0x00000003:
						if (Function_153(Function_156(0, Global_30668[2], 3)) == 2)
						{
							Var0.f_256 = 1;
							iVar167 = 3;
						}
						if (Var0.f_256)
						{
							Function_135(&Var0, iScriptParam_0, &Var0 + 316);
							iVar167 = 3;
						}
						break;
					
					case 0x00000004:
						if (Function_153(Function_156(0, Global_30685[1], 3)) == 2)
						{
							Var0.f_256 = 1;
							iVar167 = 3;
						}
						if (Var0.f_256)
						{
							Function_131(&Var0, iScriptParam_0, &Var0 + 316);
							iVar167 = 3;
						}
						break;
					
					case 0x00000005:
						if (Function_153(Function_156(0, Global_30658[2], 3)) == 2)
						{
							Var0.f_256 = 1;
							iVar167 = 3;
						}
						if (Var0.f_256)
						{
							Function_127(&Var0, iScriptParam_0, &Var0 + 316);
							iVar167 = 3;
						}
						break;
					
					case 0x00000006:
						if (Function_153(Function_156(0, Global_30685[2], 3)) == 2)
						{
							Var0.f_256 = 1;
							iVar167 = 3;
						}
						if (Var0.f_256)
						{
							Function_122(&Var0, iScriptParam_0, &Var0 + 316);
							iVar167 = 3;
						}
						break;
					
					case 0x00000007:
						if (Function_153(Function_156(0, Global_30658[0], 3)) == 2)
						{
							Var0.f_256 = 1;
							iVar167 = 3;
						}
						if (Var0.f_256)
						{
							Function_118(&Var0, iScriptParam_0, &Var0 + 316);
							iVar167 = 3;
						}
						break;
					
					case 0x00000008:
						if (DECOR_CHECK_EXIST(Global_34573, "scInPokerBlk"))
						{
							Var0.f_256 = 1;
							iVar167 = 3;
						}
						if (Var0.f_256)
						{
							Function_113(&Var0, iScriptParam_0, &Var0 + 316);
							iVar167 = 3;
						}
						break;
					
					case 0x00000009:
						if (IS_ACTOR_ON_TRAIN(Global_34573, 1))
						{
							Var0.f_256 = 1;
							iVar167 = 3;
						}
						if (Var0.f_256)
						{
							Function_104(&Var0, iScriptParam_0, &Var0 + 316);
							iVar167 = 3;
						}
						break;
				}
				if (SC_CHALLENGE_GET_EXPIRATION_STATE(iScriptParam_0) == 3)
				{
					Var0.f_256 = 0;
					Var0.f_260 = 1;
					iVar167 = 4;
				}
				if (Var0.f_264)
				{
					Var0.f_256 = 0;
					iVar167 = 4;
				}
				break;
			
			case 0x00000004:
				if (Var0.f_272 && NET_MAILBOX_IS_SIGNED_INTO_SC())
				{
					if (!Var0.f_284)
					{
						Function_102(iScriptParam_0, &Var0);
						Var0.f_284 = 1;
					}
					if (!Function_101(&iLocal_29) && !Var0.f_280)
					{
						Function_99(&iLocal_29);
					}
					if ((Function_96(&iLocal_29, 7.0f) && !Global_63096) && !Var0.f_280)
					{
						Function_93(StackVal, iScriptParam_0);
						(*&Global_84611[iVar168140] + 144)[312] = (*&Global_84611[iVar168140] + 144)[412];
						Function_92(&iLocal_29);
						Var0.f_280 = 1;
					}
					if ((!Function_101(&iLocal_26) && !Function_101(&iLocal_29)) && !Var0.f_276)
					{
						Function_99(&iLocal_26);
					}
					if (Function_96(&iLocal_26, 7.0f) && !Var0.f_276)
					{
						if (StackVal > 2)
						{
							Function_3(iScriptParam_0);
						}
						Function_92(&iLocal_26);
						Var0.f_276 = 1;
						iVar167 = 5;
					}
					else
					{
						iVar167 = 4;
					}
				}
				else if (Var0.f_260 && NET_MAILBOX_IS_SIGNED_INTO_SC())
				{
					Function_2(iScriptParam_0);
					Function_1("SC_CHALLENGE_FAIL_MSG", 6.0f, 1, 0, 2, 1, 0);
					iVar167 = 5;
				}
				Global_84611[iVar168140].f_64 = 0;
				break;
			
			case 0x00000005:
				if (iVar175 == 0)
				{
					iVar175 = SC_CHALLENGE_GET_EXPIRATION_STATE(iScriptParam_0);
				}
				else
				{
					iVar171 = 0;
				}
				break;
		}
		WAIT(100);
	}
	if (IS_OBJECT_VALID(Var0.f_544))
	{
		DESTROY_OBJECT(Var0.f_544);
	}
	if (IS_OBJECT_VALID(Var0.f_548))
	{
		DESTROY_OBJECT(Var0.f_548);
	}
	SC_CHALLENGE_CLEAN_UP(iScriptParam_0);
	if (Global_84611[iVar168140].f_64 == 1)
	{
		Global_84611[iVar168140].f_64 = 0;
		Function_2(iScriptParam_0);
		Function_1("SC_CHALLENGE_FAIL_MSG", 6.0f, 1, 0, 2, 1, 0);
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(bool bParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0xB36 / 2870
{
	int iVar0;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		PRINT_HELP_B(bParam0, fParam1, iParam2, iParam3, iParam4, iParam5, &Global_3422[Global_626940] + 12, iParam6);
	}
	else
	{
		iVar0 = "";
		PRINT_HELP_B(bParam0, fParam1, iParam2, iParam3, iParam4, iParam5, iVar0, iParam6);
	}
}

void Function_2(int iParam0) //Position: 0xB81 / 2945
{
	int iVar0;
	int iVar1;
	
	iVar0 = Function_173(&iParam0);
	(*&Global_84611[iVar0140] + 144)[412] = (*&Global_84611[iVar0140] + 144)[312];
	(&Global_84611[iVar0140] + 144[412])->f_4 = StackVal;
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		(*&Global_84611[iVar0140] + 144[412] + 32)[iVar1] = (*&Global_84611[iVar0140] + 144[312] + 32)[iVar1];
		iVar1++;
	}
	return;
}

void Function_3(char* cParam0) //Position: 0xBFE / 3070
{
	int iVar0;
	
	if (SC_CHALLENGE_IS_VAR_VALID(cParam0, "nAAID"))
	{
		iVar0 = SC_CHALLENGE_GET_VAR_INT(cParam0, "nAAID");
		switch (iVar0)
		{
			case 0x00000000:
				Function_4(29);
				break;
			
			case 0x00000001:
				Function_4(17);
				break;
			
			case 0x00000002:
				Function_4(18);
				break;
			
			case 0x00000003:
				Function_4(24);
				break;
			
			case 0x00000004:
				Function_4(26);
				break;
			
			case 0x00000005:
				Function_4(13);
				break;
			
			case 0x00000006:
				Function_4(25);
				break;
			
			case 0x00000007:
				Function_4(19);
				break;
			
			case 0x00000008:
				Function_4(20);
				break;
			
			case 0x00000009:
				Function_4(14);
				break;
			}
	}
	return;
}

void Function_4(int iParam0) //Position: 0xCB6 / 3254
{
	bool bVar0;
	struct<4> Var1;
	
	if (!Function_91(iParam0) && NET_IS_IN_SESSION())
	{
		return;
	}
	bVar0 = true;
	switch (iParam0)
	{
		case 0x00000001:
			if (Function_90(3))
			{
				if (!Function_89(1))
				{
					if (!Function_86(2, 0))
					{
						return;
					}
					Function_85(1, 0, 0);
				}
			}
			break;
		
		case 0x00000004:
			if (Function_90(3))
			{
				if (!Function_89(2) && !Function_84(2))
				{
					Function_83(2, 0, 1, 1);
					Function_44(2);
					bVar0 = false;
				}
			}
			break;
		
		case 0x00000009:
			if (!Global_26055[iParam0])
			{
				Function_43(992, 0, 1);
				Function_41(52, 1, 0);
			}
			break;
		
		case 0x0000000A:
			SET_WEAPON_GOLD(Global_34573, 4, true);
			SET_WEAPON_GOLD(Global_34573, 8, true);
			break;
		
		case 0x0000000D:
			UI_CHEAT_SET_STATE(4, 1);
			Function_10(4);
			break;
		
		case 0x0000000E:
			UI_CHEAT_SET_STATE(25, 1);
			Function_10(4);
			break;
		
		case 0x0000000F:
			UI_CHEAT_SET_STATE(7, 1);
			Function_10(4);
			break;
		
		case 0x00000010:
			UI_CHEAT_SET_STATE(11, 1);
			Function_10(4);
			break;
		
		case 0x00000011:
			UI_CHEAT_SET_STATE(13, 1);
			Function_10(4);
			break;
		
		case 0x00000012:
			UI_CHEAT_SET_STATE(16, 1);
			Function_10(4);
			break;
		
		case 0x00000013:
			UI_CHEAT_SET_STATE(17, 1);
			Function_10(4);
			break;
		
		case 0x00000014:
			UI_CHEAT_SET_STATE(18, 1);
			Function_10(4);
			break;
		
		case 0x00000015:
			UI_CHEAT_SET_STATE(24, 1);
			Function_10(4);
			break;
		
		case 0x00000016:
			UI_CHEAT_SET_STATE(26, 1);
			Function_10(4);
			break;
		
		case 0x00000017:
			UI_CHEAT_SET_STATE(22, 1);
			Function_10(4);
			break;
		
		case 0x00000018:
			UI_CHEAT_SET_STATE(28, 1);
			Function_10(4);
			break;
		
		case 0x00000019:
			UI_CHEAT_SET_STATE(35, 1);
			Function_10(4);
			break;
		
		case 0x0000001A:
			UI_CHEAT_SET_STATE(36, 1);
			Function_10(4);
			break;
		
		case 0x0000001B:
			UI_CHEAT_SET_STATE(37, 1);
			Function_10(4);
			break;
		
		case 0x0000001C:
			UI_CHEAT_SET_STATE(38, 1);
			Function_10(4);
			break;
		
		case 0x0000001D:
			UI_CHEAT_SET_STATE(39, 1);
			Function_10(4);
			break;
		
		case 0x0000001E:
			UI_CHEAT_SET_STATE(23, 1);
			Function_10(4);
			break;
		
		case 0x00000023:
			if (Function_9(0, 0, 1, 1))
			{
				return;
			}
			if (NET_IS_IN_SESSION())
			{
				Function_6(8);
				bVar0 = false;
			}
			break;
		
		case 0x00000028:
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(48))
			{
				AWARD_ACHIEVEMENT(48);
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
			if (!Function_86(2, 0))
			{
				return;
			}
			Function_5(11);
			break;
		
		case 0x00000000:
			if (!Function_86(2, 0))
			{
				return;
			}
			Function_5(6);
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
			Function_1(&Var1, 0x41200000, 1, 0, 2, 1, 0);
		}
	}
	Global_26055[iParam0] = 1;
	return;
}

void Function_5(int iParam0) //Position: 0xFCA / 4042
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

void Function_6(int iParam0) //Position: 0x1001 / 4097
{
	Function_7(&Global_83864 + 1252, iParam0);
	return;
}

void Function_7(int iParam0, int iParam1) //Position: 0x1013 / 4115
{
	Function_8(iParam0, iParam1);
	return;
}

void Function_8(int iParam0, int iParam1) //Position: 0x1020 / 4128
{
	*iParam0 = (*iParam0 || iParam1);
	return;
}

bool Function_9(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x102F / 4143
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

int Function_10(bool bParam0) //Position: 0x10D3 / 4307
{
	if (bParam0 != 4)
	{
		if (Function_40("xmlsave"))
		{
			if (IS_DEV_BUILD())
			{
				SAVE_GAME(SS_GET_STRING(2, bParam0));
			}
		}
	}
	if (bParam0 <= 4)
	{
		SAVE_MANAGER_CREATE_SAVE_DISPLAY_NAME(&Global_3422[Global_626940] + 12);
	}
	Function_11();
	SAVE_MANAGER_HARD_SAVE(SS_GET_STRING(3, bParam0));
	return 1;
}

void Function_11() //Position: 0x111F / 4383
{
	Function_38();
	Function_37();
	Function_37();
	Function_36();
	Function_36();
	Function_35();
	Function_35();
	Function_19();
	Function_19();
	if (!Function_167())
	{
		Function_16();
		Function_15();
		Function_14();
		Function_13();
	}
	Function_12();
	return;
}

void Function_12() //Position: 0x1152 / 4434
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

void Function_13() //Position: 0x1258 / 4696
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

void Function_14() //Position: 0x128B / 4747
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

void Function_15() //Position: 0x1419 / 5145
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

void Function_16() //Position: 0x15CD / 5581
{
	Function_17(&Global_28260, 1, 0);
	return;
}

void Function_17(int iParam0, bool bParam1, var uParam2) //Position: 0x15DB / 5595
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
	void fVar11;
	bool bVar12;
	void fVar13;
	
	bVar0 = Function_18();
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
			fVar11 = ACTOR_GET_COLLECTABLE_CRC_AT_INDEX(iVar1, bVar0);
			(*iParam0 + 1132)[iVar12] = fVar11;
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
		fVar13 = ACTOR_GET_CURRENT_EQUIP_SLOT(bVar0);
		if (fVar13 != 4294967295)
		{
			iParam0->f_1128 = GET_WEAPON_EQUIPPED(bVar0, fVar13);
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

var Function_18() //Position: 0x17CC / 6092
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

struct<8> Function_19() //Position: 0x17E1 / 6113
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
				iVar2 = ((Function_34((50 + iVar4)) + Function_34((183 + iVar4))) + Function_34((90 + iVar4)));
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
	Function_20(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_20(int iParam0, bool bParam1, bool bParam2) //Position: 0x187C / 6268
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
		Function_33(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_32(iParam0);
	if (bParam2)
	{
		Function_21(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_21(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x1B17 / 6935
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_31(390))), 32);
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
					bVar19 = (Function_161(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_161(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_29(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, false, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_26(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_24(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_23(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_22(), &Var9);
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

var Function_22() //Position: 0x2144 / 8516
{
	int iVar0;
	
	return iVar0;
}

var Function_23(int iParam0) //Position: 0x214C / 8524
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_24(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x215D / 8541
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_25("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_25("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_25("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_25(char* cParam0, char* cParam1) //Position: 0x2252 / 8786
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_26(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x226B / 8811
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_28(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_27(Function_28(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_27(int iParam0, int iParam1) //Position: 0x22D0 / 8912
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_28(int iParam0, bool bParam1) //Position: 0x22E2 / 8930
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_29(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x22F4 / 8948
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
	if (((Function_30(iParam0) != 19 || Function_30(iParam0) != 17) || Function_30(iParam0) != 10) || Function_30(iParam0) != 9)
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

int Function_30(int iParam0) //Position: 0x2424 / 9252
{
	return Global_35278[iParam020].f_48;
}

var Function_31(int iParam0) //Position: 0x2433 / 9267
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_32(int iParam0) //Position: 0x2470 / 9328
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

int Function_33(int iParam0, bool bParam1, bool bParam2) //Position: 0x260A / 9738
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

int Function_34(bool bParam0) //Position: 0x2824 / 10276
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

struct<8> Function_35() //Position: 0x2865 / 10341
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
		iVar2 = ((Function_34((50 + iVar3) + 15) + Function_34((183 + iVar3) + 15)) + Function_34((90 + iVar3) + 15));
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
	Function_20(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_36() //Position: 0x28EE / 10478
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
			iVar2 = ((Function_34((50 + iVar3) + 8) + Function_34((183 + iVar3) + 8)) + Function_34((90 + iVar3) + 8));
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
	Function_20(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_37() //Position: 0x2985 / 10629
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
		iVar2 = ((Function_34((50 + iVar3)) + Function_34((183 + iVar3))) + Function_34((90 + iVar3)));
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
	Function_20(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_38() //Position: 0x2A04 / 10756
{
	Function_39(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_20(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_39(int iParam0, bool bParam1, int iParam2) //Position: 0x2A2A / 10794
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
	Function_33(iParam0, bParam1, 1);
	Function_32(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_21(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

bool Function_40(bool bParam0) //Position: 0x2C34 / 11316
{
	bool bVar0;
	
	bVar0 = _GET_PARAM_VALUE(cParam0, "blah");
	if (IS_STRING_VALID(bVar0))
	{
		return 1;
	}
	return 0;
}

int Function_41(bool bParam0, bool bParam1, bool bParam2) //Position: 0x2C53 / 11347
{
	if (bParam0 >= 4294967295 || bParam0 <= 79)
	{
		return 0;
	}
	if (bParam1)
	{
		if (GET_ITEM_COUNT(Function_42(bParam0), Function_18()) == 0)
		{
			ADD_ITEM(Function_42(bParam0), Function_18(), bParam2);
			return 1;
		}
	}
	ADD_ITEM(Function_42(bParam0), Function_18(), bParam2);
	return 1;
}

var Function_42(bool bParam0) //Position: 0x2C9E / 11422
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

void Function_43(var uParam0, bool bParam1, bool bParam2) //Position: 0x2D8F / 11663
{
	Global_13038 = uParam0;
	if (bParam1)
	{
		Function_8(&Global_12976 + 36 + 20, 128);
	}
	if (bParam2)
	{
		Function_8(&Global_12976 + 36 + 20, 64);
	}
	return;
}

void Function_44(bool bParam0) //Position: 0x2DBC / 11708
{
	int iVar0;
	int iVar1;
	
	if (Function_82(20))
	{
		Function_47(bParam0, 16, 1, 0, 1);
	}
	iVar0 = Function_156(0, Global_30640[2], 3);
	iVar1 = Function_45(iVar0);
	if (iVar1 >= 0)
	{
		Function_47(bParam0, 2, 1, 0, 1);
	}
	return;
}

var Function_45(int iParam0) //Position: 0x2DF7 / 11767
{
	if (!Function_46(iParam0))
	{
		return 4294967295;
	}
	return Global_13172[iParam011].f_12;
}

bool Function_46(int iParam0) //Position: 0x2E11 / 11793
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

void Function_47(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x2E28 / 11816
{
	char* cVar0[32];
	struct<8> Var8;
	
	strcpy(&cVar0, "OUT_", 32);
	stradd(&cVar0, &Global_27774[bParam013] + 32, 32);
	if (!Function_81(bParam0))
	{
		LOG_ERROR("Attempting to add scrap to invalid outfit");
		return;
	}
	if (!Function_90(3) || iParam3)
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_80(bParam0, 2))
	{
		Function_79(456, 1, 0, 0);
		Function_78(bParam0, 2);
		if (!bParam2)
		{
			Var8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
			stradd(&Var8, "_tip", 32);
			Function_1(&Var8, 10.0f, 1, 0, 0, 1, 0);
		}
	}
	bParam2 = bParam2;
	if (!Function_77(bParam0, bParam1))
	{
		Global_27774[bParam013].f_4 = (StackVal || bParam1);
		Function_78(bParam0, 1048576);
		if (bParam4)
		{
			if (!Function_9(0, 0, 1, 1))
			{
				Function_70(1);
				Function_69(1, 0);
			}
			else
			{
				Function_68();
			}
		}
		Function_63(bParam0);
		if (StackVal && !Function_61(((((!Function_62() && !Global_3380) && !Global_3392) && !Global_3384) && !bParam2), 1))
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Edit", &cVar0, false, false, 0, 0, 2, 0, 0, 0);
		}
		else if (StackVal || Function_61((((Function_62() || Global_3380) || Global_3392) || Global_3384), 1))
		{
			if (!DECOR_CHECK_EXIST(Global_34573, "outfitScrap"))
			{
				DECOR_SET_INT(Global_34573, "outfitScrap", bParam0);
			}
		}
		if (!Function_60(Global_76846, 2))
		{
			Function_54(Global_34573, 2, 1, 0);
		}
		if (Global_28180 == bParam0)
		{
			Global_28180.f_12 = 1;
			Function_50();
		}
		Global_28180.f_12 = 1;
		switch (bParam0)
		{
			case 0x00000004:
				Function_49(3, bParam1);
				break;
			
			case 0x00000005:
				Function_49(3, SHIFT_LEFT(bParam1, 6));
				break;
			
			case 0x00000006:
				Function_49(3, SHIFT_LEFT(bParam1, 12));
				break;
			
			case 0x00000007:
				Function_49(3, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x00000008:
				Function_49(3, SHIFT_LEFT(bParam1, 24));
				break;
			
			case 0x00000009:
				Function_49(2, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x0000000A:
				Function_48(2, 24);
				break;
			
			case 0x00000003:
				Function_48(2, 25);
				break;
			
			case 0x0000000F:
				Function_48(2, 26);
				break;
			
			case 0x0000000D:
				Function_48(2, 27);
				break;
			
			case 0x0000000E:
				Function_48(2, 28);
				break;
			}
	}
}

void Function_48(int iParam0, bool bParam1) //Position: 0x30B7 / 12471
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

void Function_49(int iParam0, bool bParam1) //Position: 0x311E / 12574
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

void Function_50() //Position: 0x317D / 12669
{
	if (Function_81(Global_28180))
	{
		if (Global_28180.f_12)
		{
			if (IS_BLIP_VALID(StackVal))
			{
				REMOVE_BLIP(StackVal);
			}
			Global_28180.f_4 = Function_53(Global_28180);
			Global_28180.f_8 = Function_51(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
		else if (!IS_BLIP_VALID(StackVal))
		{
			Global_28180.f_4 = Function_53(Global_28180);
			Global_28180.f_8 = Function_51(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
	}
	return;
}

var Function_51(int iParam0, int iParam1) //Position: 0x31F8 / 12792
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
					if (Function_86(6, 0) || Function_86(12, 0))
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
					if (Function_82(13) && iVar16)
					{
						bVar6 = StackVal;
						iVar16 = 0;
					}
					else if (iVar16 && Function_86(5, 0))
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
					if (Function_82(26) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_82(25) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_82(24) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_82(23) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (iVar17 && Function_86(26, 0))
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
					if (Function_82(55) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_82(54) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_82(27) && iVar18)
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
					if (Function_82(52) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_82(51) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_82(50) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_82(49) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_86(17, 0) && iVar15)
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
					if (Function_82(19) && iVar19)
					{
						vVar0 = { -1708,36f, 46,18f, 2175,89f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_86(6, 0) && Function_82(18)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_82(17) && iVar19)
					{
						vVar0 = { -1687,208f, 53,208f, 2140,491f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_86(9, 0) && Function_82(16)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_82(15) && iVar19)
					{
						vVar0 = { -1709,084f, 55,216f, 2104,631f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if (Function_86(8, 0) && iVar19)
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
	if (Function_52(StackVal, StackVal, vVar0))
	{
		if (IS_OBJECT_VALID(bVar6))
		{
			GET_OBJECT_POSITION(bVar6, &vVar0);
			if (Function_52(StackVal, StackVal, vVar3))
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
	if (!Function_52(StackVal, StackVal, vVar3))
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

bool Function_52(vector3 vParam0) //Position: 0x3DE9 / 15849
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

int Function_53(int iParam0) //Position: 0x3E01 / 15873
{
	int iVar0;
	int iVar1;
	
	if (!Function_81(iParam0))
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

void Function_54(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x3E50 / 15952
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_56(bParam0, iParam1, iParam2) && !bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_55(&cVar1, iParam2);
	if (!DECOR_CHECK_EXIST(bParam0, &cVar1))
	{
		DECOR_SET_INT(bParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(bParam0, &cVar1, (DECOR_GET_INT(bParam0, &cVar1) || bVar0));
	}
}

void Function_55(char* cParam0, int iParam1) //Position: 0x3EBC / 16060
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

bool Function_56(bool bParam0, var uParam1, int iParam2) //Position: 0x3EF3 / 16115
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
		if (Function_58(DECOR_GET_INT(bParam0, &cVar1)) > 3)
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
		switch (Function_57(uVar0))
		{
			case 0x00000002:
				if (!Function_60(Global_76847, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_57(char* cParam0) //Position: 0x3F6B / 16235
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

int Function_58(int iParam0) //Position: 0x400C / 16396
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_59(&iVar1, 2147483648);
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

void Function_59(int iParam0, int iParam1) //Position: 0x4049 / 16457
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
	return;
}

bool Function_60(var uParam0, int iParam1) //Position: 0x405C / 16476
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

bool Function_61(bool bParam0, bool bParam1) //Position: 0x406F / 16495
{
	return (bParam0 && bParam1) == 0;
}

bool Function_62() //Position: 0x407C / 16508
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_63(bool bParam0) //Position: 0x40A9 / 16553
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
			if (Function_77(bParam0, Function_67(bVar24)))
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
			if (Function_77(bParam0, Function_67(bVar24)))
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
		SET_JOURNAL_ENTRY_PROGRESS(Global_27774[bParam013].f_48, (TO_FLOAT(Function_66(bParam0)) / TO_FLOAT(Global_27774[bParam013].f_28)), false, 0);
		Function_65(Global_27774[bParam013].f_48, 0);
		straddi(&cVar8, Function_64(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_27774[bParam013].f_48, &cVar8, 3);
	}
	return;
}

int Function_64(int iParam0) //Position: 0x4259 / 16985
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_81(iParam0))
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

void Function_65(bool bParam0, bool bParam1) //Position: 0x42B0 / 17072
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

var Function_66(int iParam0) //Position: 0x42D5 / 17109
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_81(iParam0))
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

int Function_67(bool bParam0) //Position: 0x432B / 17195
{
	return SHIFT_LEFT(true, bParam0);
}

void Function_68() //Position: 0x4337 / 17207
{
	return;
}

void Function_69(int iParam0, int iParam1) //Position: 0x433D / 17213
{
	if (Global_3381)
	{
		return;
	}
	Global_3412 = iParam0;
	Global_3416 = iParam1;
	if (!Global_3365 && !Function_167())
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", true);
	return;
}

void Function_70(bool bParam0) //Position: 0x437F / 17279
{
	if ((Global_3395 || Global_3381) || Global_3396)
	{
		return;
	}
	Global_34165.f_24 = 4294967295;
	Function_71();
	Global_34165.f_28 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_11();
	SAVE_SOFT_SAVE(0);
	if (bParam0)
	{
		Function_59(&Global_63095, 1);
		Function_59(&Global_63095, 2);
	}
	Global_88793 = 1;
	return;
}

void Function_71() //Position: 0x43D0 / 17360
{
	vector3 vVar0;
	var uVar3;
	
	Global_34165.f_24 = 4294967295;
	Function_72(&Global_34165 + 12, &Global_34165 + 16, 0, 0);
	vVar0 = { StackVal, StackVal, Function_72(&Global_34165 + 12, &Global_34165 + 16, 0, 0) };
	if (Function_52(StackVal, StackVal, vVar0))
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

vector3 Function_72(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x4471 / 17521
{
	int iVar0;
	
	iVar0 = Function_75(uParam2, uParam3);
	if (Function_74(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_34165.f_24 = Global_29005;
			Function_8(&Global_63095, 1);
			Function_59(&Global_63095, 2);
			Global_63084 = { StackVal, StackVal, Global_16537[iVar021] };
			*uParam1 = 0;
		}
		else
		{
			Function_8(&Global_63095, 2);
			Function_59(&Global_63095, 1);
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
		Function_8(&Global_63095, 2);
		Function_59(&Global_63095, 1);
		*uParam1 = 1;
		*uParam0 = 290.0f;
		return -2833,843f, 50,332f, 2418,003f;
	}
	Function_73();
	return StackVal, StackVal, Function_73();
}

vector3 Function_73() //Position: 0x4558 / 17752
{
	return 0.0f, 0.0f, 0.0f;
}

bool Function_74(int iParam0) //Position: 0x4561 / 17761
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_75(bool bParam0, bool bParam1) //Position: 0x4577 / 17783
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
				fVar2 = Function_76(StackVal, StackVal, StackVal, StackVal, Global_34574, Global_16537[iVar321]);
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
		fVar2 = Function_76(StackVal, StackVal, Global_34574, -2833,843f, 50,332f, 2418,003f);
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_74(bVar0) && !bParam1)
	{
		bVar0 = Function_75(bParam0, 1);
	}
	return bVar0;
}

float Function_76(vector3 vParam0, vector3 vParam3) //Position: 0x463E / 17982
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

bool Function_77(bool bParam0, int iParam1) //Position: 0x465B / 18011
{
	int iVar0;
	
	if (!Function_81(bParam0))
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

void Function_78(bool bParam0, int iParam1) //Position: 0x46BA / 18106
{
	if (!Function_81(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_27774[bParam013].f_8 = (StackVal || iParam1);
	return;
}

int Function_79(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x470F / 18191
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
	Function_33(iParam0, TO_FLOAT(bParam1), 1);
	Function_32(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_21(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, iParam3);
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

bool Function_80(int iParam0, int iParam1) //Position: 0x492F / 18735
{
	int iVar0;
	
	if (!Function_81(iParam0))
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

bool Function_81(int iParam0) //Position: 0x495C / 18780
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

bool Function_82(int iParam0) //Position: 0x4972 / 18802
{
	if (Global_74542[iParam010] == 6)
	{
		return 1;
	}
	return 0;
}

void Function_83(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x4987 / 18823
{
	struct<8> Var0;
	
	if (!Function_81(bParam0))
	{
		LOG_ERROR("Attempting to discover invalid outfit");
		return;
	}
	if (!Function_90(3))
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_84(bParam0))
	{
		Function_79(456, 1, 0, 0);
		Function_78(bParam0, 2);
		if (bParam2)
		{
			if (!Function_9(0, 0, 1, 1))
			{
				Function_70(1);
				Function_69(1, 5);
			}
			else
			{
				Function_68();
			}
		}
		Function_63(bParam0);
		strcpy(&Var0, "OUT_", 32);
		stradd(&Var0, &Global_27774[bParam013] + 32, 32);
		if ((!Function_62() && !bParam1) && !Global_3380)
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Add", &Var0, false, false, 0, 0, 2, 0, 0, 0);
		}
		else if (Function_62() || Global_3380)
		{
			if (!DECOR_CHECK_EXIST(Global_34573, "outfitDisc"))
			{
				DECOR_SET_INT(Global_34573, "outfitDisc", bParam0);
			}
		}
		if (bParam3)
		{
			stradd(&Var0, "_tip", 32);
			Function_1(&Var0, 10.0f, 1, 0, 0, 1, 0);
		}
		if (!Function_60(Global_76846, 2))
		{
			Function_54(Global_34573, 2, 1, 0);
		}
	}
}

bool Function_84(int iParam0) //Position: 0x4AD1 / 19153
{
	if (!Function_81(iParam0))
	{
		LOG_ERROR("Attempting to check discovery of invalid outfit");
		return 0;
	}
	if (Function_80(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

void Function_85(bool bParam0, bool bParam1, bool bParam2) //Position: 0x4B23 / 19235
{
	char* cVar0[32];
	char* cVar8[32];
	
	if (!Function_81(bParam0))
	{
		LOG_ERROR("Attempting to mostly complete an invalid outfit");
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_89(bParam0))
	{
		if (!Function_84(bParam0))
		{
			Function_83(bParam0, 1, 0, 0);
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
				PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Finish", &cVar0, false, false, 0, 0, 2, 0, 0, 0);
			}
		}
		Function_79(457, 1, 0, 0);
		Function_78(bParam0, 6);
		if (bParam0 == 3)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(23))
			{
				AWARD_ACHIEVEMENT(23);
			}
		}
		if (bParam2)
		{
			if (!Function_9(0, 0, 1, 1))
			{
				Function_70(1);
				Function_69(1, 0);
			}
			else
			{
				Function_68();
			}
		}
	}
	return;
}

bool Function_86(int iParam0, bool bParam1) //Position: 0x4CC1 / 19649
{
	int iVar0;
	
	iVar0 = Function_87(iParam0);
	if (!Function_46(iVar0))
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

var Function_87(int iParam0) //Position: 0x4CFE / 19710
{
	if (!Function_88(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_88(int iParam0) //Position: 0x4D18 / 19736
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

bool Function_89(int iParam0) //Position: 0x4D2E / 19758
{
	if (!Function_81(iParam0))
	{
		LOG_ERROR("Attempting to check wearable on invalid outfit");
		return 0;
	}
	if (Function_80(iParam0, 4))
	{
		return 1;
	}
	return 0;
}

bool Function_90(int iParam0) //Position: 0x4D7F / 19839
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_25986[iParam0];
}

bool Function_91(int iParam0) //Position: 0x4D9B / 19867
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

void Function_92(int iParam0) //Position: 0x4DBF / 19903
{
	iParam0->f_4 = 0.0f;
	iParam0->f_8 = 0.0f;
	*iParam0 = 0;
	return;
}

void Function_93(int iParam0, int iParam1) //Position: 0x4DD3 / 19923
{
	int iVar0;
	char* cVar1[32];
	
	iVar0 = Function_173(&iParam0);
	cVar1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_94((*&Global_84611[iVar0140] + 144)[212]) };
	UI_SET_STRING("SC_UI_BEST_TIME", &cVar1);
	strcpy(&cVar1, "nSC_TROPHY", 32);
	stradd(&cVar1, I2STR(StackVal), 32);
	UI_SET_STRING("SC_UI_BEST_TROPHY", UI_GET_STRING(&cVar1));
	cVar1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_94((*&Global_84611[iVar0140] + 144)[312]) };
	UI_SET_STRING("SC_UI_LAST_TIME", &cVar1);
	strcpy(&cVar1, "nSC_TROPHY", 32);
	stradd(&cVar1, I2STR(StackVal), 32);
	UI_SET_STRING("SC_UI_LAST_TROPHY", UI_GET_STRING(&cVar1));
	cVar1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_94((*&Global_84611[iVar0140] + 144)[412]) };
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

struct<32> Function_94(var uParam0) //Position: 0x4F78 / 20344
{
	char* cVar0[32];
	int iVar8;
	int iVar9;
	bool bVar10;
	struct<13> Var11;
	
	Var11 = { StackVal, StackVal, StackVal, Function_95(uParam0) };
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

struct<16> Function_95(var uParam0) //Position: 0x4FF8 / 20472
{
	struct<4> Var0;
	bool bVar4;
	
	bVar4 = uParam0;
	Var0 = FLOOR((bVar4 / 3600.0f));
	while (bVar4 <= 3600.0f)
	{
		bVar4 = (bVar4 - 3600.0f);
	}
	Var0.f_4 = FLOOR((bVar4 / 60.0f));
	while (bVar4 <= 60.0f)
	{
		bVar4 = (bVar4 - 60.0f);
	}
	Var0.f_8 = FLOOR(bVar4);
	Var0.f_12 = (StackVal - IntToFloat(bVar4));
	return StackVal, StackVal, StackVal, Var0;
}

int Function_96(int iParam0, float fParam1) //Position: 0x5069 / 20585
{
	if (Function_101(iParam0))
	{
		if (Function_97(iParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float Function_97(int iParam0) //Position: 0x5085 / 20613
{
	if (Function_101(iParam0))
	{
		if (Function_98(iParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_98(int iParam0) //Position: 0x514D / 20813
{
	return Function_61(*iParam0, 2);
}

void Function_99(int iParam0) //Position: 0x515A / 20826
{
	Function_100(iParam0, 0.0f);
	return;
}

void Function_100(var uParam0, float fParam1) //Position: 0x5166 / 20838
{
	uParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_8(uParam0, 1);
	Function_59(uParam0, 2);
	uParam0->f_8 = 0.0f;
	return;
}

bool Function_101(int iParam0) //Position: 0x5187 / 20871
{
	return Function_61(*iParam0, 1);
}

void Function_102(int iParam0, int iParam1) //Position: 0x5194 / 20884
{
	int iVar0;
	
	iVar0 = Function_173(&iParam0);
	iParam1->f_320 = (*&Global_84611[iVar0140] + 144)[412];
	(*&Global_84611[iVar0140] + 144)[412] = iParam1->f_320;
	(&Global_84611[iVar0140] + 144[412])->f_4 = iParam1->f_292;
	(*&Global_84611[iVar0140] + 144[412] + 32)[0] = StackVal;
	(*&Global_84611[iVar0140] + 144[412] + 32)[1] = StackVal;
	(*&Global_84611[iVar0140] + 144[412] + 32)[2] = StackVal;
	if (StackVal || ((StackVal || ((StackVal < iParam1->f_292 != iParam1->f_292 && (*&Global_84611[iVar0140] + 144)[212] <= iParam1->f_320) && iParam1->f_292 < 0)) && (*&Global_84611[iVar0140] + 144)[212] != 0.0f < 0))
	{
		Global_84611[iVar0140].f_124 = (TO_FLOAT((StackVal * 100000)) - (*&Global_84611[iVar0140] + 144)[412]);
		Global_87412[iVar069].f_20 = ROUND(Global_84611[iVar0140].f_124);
		Function_103(Global_84611[iVar0140].f_88, iVar0, 4294967295, 0);
		(*&Global_84611[iVar0140] + 144)[212] = iParam1->f_320;
		(&Global_84611[iVar0140] + 144[212])->f_4 = iParam1->f_292;
		(*&Global_84611[iVar0140] + 144[212] + 32)[0] = StackVal;
		(*&Global_84611[iVar0140] + 144[212] + 32)[1] = StackVal;
		(*&Global_84611[iVar0140] + 144[212] + 32)[2] = StackVal;
	}
	return;
}

void Function_103(int iParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x536A / 21354
{
	int iVar0[67];
	int iVar68;
	int iVar69;
	int iVar70;
	int iVar71;
	
	if (iParam0 < 0 && Global_87412[iParam169].f_20 < 0)
	{
		NET_START_LB_UPDATE(bParam3);
		if (bParam3)
		{
			iVar0[1] = Global_87412[iParam169].f_20;
			iVar68 = 41;
			iVar69 = 0;
			iVar70 = 5;
			iVar71 = (30 - iVar70);
			iVar69 = 0;
			while (iVar69 <= iVar71)
			{
				iVar0[iVar68] = (*&Global_87412[iParam169] + 28)[iVar69];
				iVar68++;
				iVar69++;
			}
		}
		else
		{
			iVar0[0] = Global_87412[iParam169].f_20;
			iVar0[66] = ROUND((*&Global_84611[iParam1140] + 144)[412]);
			if ((*&Global_84611[iParam1140] + 144[412] + 32)[0])
			{
				iVar0[2] = 1;
			}
			if ((*&Global_84611[iParam1140] + 144[412] + 32)[1])
			{
				iVar0[3] = 1;
			}
			if ((*&Global_84611[iParam1140] + 144[412] + 32)[2])
			{
				iVar0[4] = 1;
			}
			iVar0[40] = StackVal;
		}
		NET_UPDATE_LEADERBOARD(4294967295, iParam0, iParam2, &iVar0);
		NET_END_LB_UPDATE();
	}
}

void Function_104(var uParam0, int iParam1, int iParam2) //Position: 0x5483 / 21635
{
	int iVar0;
	
	iVar0 = Function_173(&iParam1);
	switch (*iParam2)
	{
		case 0x00000000:
			if (!uParam0->f_268)
			{
				Function_112(iParam1);
				Function_111(iParam1);
				uParam0->f_268 = 1;
			}
			if (!Function_101(&iLocal_23))
			{
				Function_99(&iLocal_23);
			}
			*iParam2 = 1;
			break;
		
		case 0x00000001:
			Function_110(uParam0, iParam1);
			Function_109(uParam0, iParam1);
			Function_107(uParam0, iParam1);
			if (Function_101(&iLocal_23))
			{
				(*&Global_84611[iVar0140] + 144)[412] = Function_97(&iLocal_23);
			}
			if (!Function_106())
			{
				if (uParam0->f_292 >= 0)
				{
					uParam0->f_272 = 1;
				}
				else
				{
					uParam0->f_260 = 1;
				}
			}
			if (!Function_106())
			{
				uParam0->f_8 = StackVal + 1;
				if (StackVal >= 10)
				{
					uParam0->f_8 = 0;
					*iParam2 = 2;
				}
			}
			break;
		
		case 0x00000002:
			if (Function_101(&iLocal_23))
			{
				Function_105(&iLocal_23);
				(*&Global_84611[iVar0140] + 144)[412] = Function_97(&iLocal_23);
				Function_92(&iLocal_23);
			}
			uParam0->f_264 = 1;
			break;
	}
	return;
}

void Function_105(int iParam0) //Position: 0x5579 / 21881
{
	if (Function_101(iParam0))
	{
		if (!Function_98(iParam0))
		{
			iParam0->f_8 = (StackVal - GET_CURRENT_GAME_TIME());
			Function_8(iParam0, 2);
		}
	}
	else
	{
		LOG_ERROR("ERROR: Trying to PAUSE a TIMER that has not been started!");
		PRINTSTRING("WARNING: Trying to PAUSE a TIMER that has not been started! IGNORING COMMAND.\n");
	}
	return;
}

bool Function_106() //Position: 0x5638 / 22072
{
	return IS_ACTOR_ON_TRAIN(Global_34573, 1);
}

void Function_107(int iParam0, int iParam1) //Position: 0x5645 / 22085
{
	if (!StackVal)
	{
		(iParam0 + 360[215])->f_32 = ((Global_34581[138] + Global_34581[27]) - (iParam0 + 360[215])->f_20);
		if (GET_PLAYER_COMBATMODE() == 1 && (iParam0 + 360[215])->f_32 < 0.0f)
		{
			(iParam0 + 360[215])->f_28 = 1.0f;
		}
		if (!Function_106())
		{
			if ((iParam0 + 360[215])->f_28 == 1.0f && (iParam0 + 360[215])->f_32 < 0.0f)
			{
				(iParam0 + 360[215])->f_4 = 1;
				iParam0->f_292++;
			}
		}
	}
	Function_108(iParam1, iParam0, 2);
	return;
}

void Function_108(int iParam0, int iParam1, int iParam2) //Position: 0x56DF / 22239
{
	char* cVar0[24];
	char* cVar6[24];
	
	if (StackVal && !(StackVal && NET_MAILBOX_IS_SIGNED_INTO_SC()))
	{
		(*&Global_84611[Function_173(&iParam0)140] + 144[412] + 32)[iParam2] = 1;
		if (iParam1->f_292 != 1 && !iParam1->f_340)
		{
			strcpy(&cVar0, I2STR((3 - iParam1->f_292)), 24);
			strcpy(&cVar6, "nSC_TROPHY", 24);
			stradd(&cVar6, I2STR(iParam1->f_292), 24);
			UI_SET_STRING("SC_UI_CURR_TROPHY", UI_GET_STRING(&cVar6));
			UI_SET_STRING("SC_Objectives_Left", &cVar0);
			Function_1("SC_OBJECTIVE_COMPLETE_MSG", 4.0f, 1, 0, 2, 1, 0);
			iParam1->f_340 = 1;
		}
		else if (iParam1->f_292 != 2 && !iParam1->f_344)
		{
			strcpy(&cVar6, "nSC_TROPHY", 24);
			stradd(&cVar6, I2STR(iParam1->f_292), 24);
			UI_SET_STRING("SC_UI_CURR_TROPHY", UI_GET_STRING(&cVar6));
			Function_1("SC_OBJECTIVE_COMPLETE_SILVER_MSG", 4.0f, 1, 0, 2, 1, 0);
			iParam1->f_344 = 1;
		}
		else if (iParam1->f_292 != 3 && !iParam1->f_348)
		{
			strcpy(&cVar6, "nSC_TROPHY", 24);
			stradd(&cVar6, I2STR(iParam1->f_292), 24);
			UI_SET_STRING("SC_UI_CURR_TROPHY", UI_GET_STRING(&cVar6));
			Function_1("SC_OBJECTIVE_COMPLETE_GOLD_MSG", 4.0f, 1, 0, 2, 1, 0);
			iParam1->f_348 = 1;
		}
		(iParam1 + 360[iParam215])->f_8 = 1;
	}
	return;
}

void Function_109(int iParam0, int iParam1) //Position: 0x58BD / 22717
{
	if (!StackVal)
	{
		if (IS_PLAYER_DEADEYE(0) && !(iParam0 + 360[115])->f_12)
		{
			(iParam0 + 360[115])->f_12 = 1;
		}
		if ((iParam0 + 360[115])->f_12)
		{
			(iParam0 + 360[115])->f_28 = TO_FLOAT(GET_NUM_KILLS_LAST_DEADEYE());
		}
		if (iParam0 + 360[115])->f_28 <= IntToFloat(iParam0->f_328)
		{
			(iParam0 + 360[115])->f_4 = 1;
			iParam0->f_292++;
		}
	}
	Function_108(iParam1, iParam0, 1);
	return;
}

void Function_110(int iParam0, int iParam1) //Position: 0x593F / 22847
{
	if (!StackVal)
	{
		(iParam0 + 360[015])->f_28 = ((Global_34581[138] + Global_34581[27]) - (iParam0 + 360[015])->f_20);
		if (iParam0 + 360[015])->f_28 <= IntToFloat(iParam0->f_324)
		{
			(iParam0 + 360[015])->f_4 = 1;
			iParam0->f_292++;
		}
	}
	Function_108(iParam1, iParam0, 0);
	return;
}

void Function_111(int iParam0) //Position: 0x59AA / 22954
{
	bool bVar0;
	struct<8> Var1;
	struct<8> Var9;
	char* cVar17[32];
	int iVar25;
	bool bVar26;
	
	iVar25 = Function_173(&iParam0);
	strcpy(&Var1, "SC_AA", 32);
	if (SC_CHALLENGE_IS_VAR_VALID(iParam0, "bMP"))
	{
		if (SC_CHALLENGE_GET_VAR_BOOL(iParam0, "bMP"))
		{
			Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_25(&Var1, "_MP") };
		}
	}
	else
	{
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_25(&Var1, "_SP") };
	}
	if (SC_CHALLENGE_IS_VAR_VALID(iParam0, "nAAID"))
	{
		bVar0 = SC_CHALLENGE_GET_VAR_INT(iParam0, "nAAID");
	}
	Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_25(&Var1, "_") };
	Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_25(&Var1, I2STR(bVar0)) };
	Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_25(&Var1, "_title") };
	UI_SET_STRING("SC_Challenge_Title", UI_GET_STRING(&Var9));
	if (StackVal && (*&Global_84611[iVar25140] + 144)[212] < 0.0f < 0)
	{
		cVar17 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_94((*&Global_84611[iVar25140] + 144)[212]) };
		UI_SET_STRING("SC_UI_BEST_TIME", &cVar17);
		strcpy(&cVar17, "nSC_TROPHY", 32);
		stradd(&cVar17, I2STR(StackVal), 32);
		UI_SET_STRING("SC_UI_BEST_TROPHY", UI_GET_STRING(&cVar17));
		UI_CHALLENGE_SET_TROPHY_TYPE(StackVal, (iParam0 - (4 - 1)));
		bVar26 = true;
	}
	else if (StackVal && (*&Global_84611[iVar25140] + 144)[312] < 0.0f < 0)
	{
		cVar17 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_94((*&Global_84611[iVar25140] + 144)[312]) };
		UI_SET_STRING("SC_UI_BEST_TIME", &cVar17);
		strcpy(&cVar17, "nSC_TROPHY", 32);
		stradd(&cVar17, I2STR(StackVal), 32);
		UI_SET_STRING("SC_UI_BEST_TROPHY", UI_GET_STRING(&cVar17));
		UI_CHALLENGE_SET_TROPHY_TYPE(StackVal, (iParam0 - (4 - 1)));
		bVar26 = true;
	}
	cVar17 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_94((*&Global_84611[iVar25140] + 144)[512]) };
	UI_SET_STRING("SC_UI_GHOST_TIME", &cVar17);
	strcpy(&cVar17, "nSC_TROPHY", 32);
	stradd(&cVar17, I2STR(StackVal), 32);
	UI_SET_STRING("SC_UI_GHOST_TROPHY", UI_GET_STRING(&cVar17));
	UI_CHALLENGE_SET_TROPHY_TYPE(StackVal, (iParam0 - (4 - 1)));
	UI_SET_STRING("SC_UI_GHOST_GAMERTAG", &Global_84611[iVar25140] + 144[512] + 8);
	cVar17 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_94((*&Global_84611[iVar25140] + 144)[312]) };
	UI_SET_STRING("SC_UI_LAST_TIME", &cVar17);
	strcpy(&cVar17, "nSC_TROPHY", 32);
	stradd(&cVar17, I2STR(StackVal), 32);
	UI_SET_STRING("SC_UI_LAST_TROPHY", UI_GET_STRING(&cVar17));
	if (NET_MAILBOX_IS_SIGNED_INTO_SC())
	{
		if (StackVal && (*&Global_84611[iVar25140] + 144)[512] < 0.0f < 0)
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

void Function_112(int iParam0) //Position: 0x5DFC / 24060
{
	int iVar0;
	int iVar1;
	
	iVar0 = Function_173(&iParam0);
	Global_84611[iVar0140].f_64 = 1;
	Global_84611[iVar0140].f_96++;
	(*&Global_84611[iVar0140] + 144)[312] = (*&Global_84611[iVar0140] + 144)[412];
	(&Global_84611[iVar0140] + 144[312])->f_4 = StackVal;
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		(*&Global_84611[iVar0140] + 144[312] + 32)[iVar1] = (*&Global_84611[iVar0140] + 144[412] + 32)[iVar1];
		(*&Global_84611[iVar0140] + 144[412] + 32)[iVar1] = 0;
		iVar1++;
	}
	return;
}

void Function_113(int iParam0, int iParam1, int iParam2) //Position: 0x5EAE / 24238
{
	int iVar0;
	
	iVar0 = Function_173(&iParam1);
	switch (*iParam2)
	{
		case 0x00000000:
			if (!Function_101(&iLocal_23))
			{
				Function_99(&iLocal_23);
			}
			if (!iParam0->f_352)
			{
				Function_112(iParam1);
				iParam0->f_352 = 1;
			}
			if (!iParam0->f_268 && Function_117(iParam0, &iLocal_32))
			{
				Function_111(iParam1);
				iParam0->f_268 = 1;
				*iParam2 = 1;
			}
			break;
		
		case 0x00000001:
			(*&Global_84611[iVar0140] + 144)[412] = Function_97(&iLocal_23);
			Function_116(iParam0, iParam1);
			Function_115(iParam0, iParam1);
			if (DECOR_CHECK_EXIST(Global_34573, "sc_poker_obj3_fail") && (iParam0 + 360[215])->f_28 == -1.0f)
			{
				(iParam0 + 360[215])->f_28 = -1.0f;
			}
			if (!DECOR_CHECK_EXIST(Global_34573, "scInPokerBlk"))
			{
				iParam0->f_8 = StackVal + 1;
				if (StackVal >= 10)
				{
					iParam0->f_8 = 0;
					*iParam2 = 2;
				}
			}
			break;
		
		case 0x00000002:
			if (Function_101(&iLocal_23))
			{
				Function_105(&iLocal_23);
				(*&Global_84611[iVar0140] + 144)[412] = Function_97(&iLocal_23);
				Function_92(&iLocal_23);
			}
			if (Global_34581[0] < (iParam0 + 360[115])->f_20)
			{
				iParam0->f_272 = 1;
				Function_114(iParam0, iParam1);
			}
			else
			{
				iParam0->f_260 = 1;
			}
			iParam0->f_264 = 1;
			break;
	}
	return;
}

void Function_114(int iParam0, int iParam1) //Position: 0x5FFF / 24575
{
	if (!StackVal)
	{
		if (DECOR_CHECK_EXIST(Global_34573, "sc_poker_obj3_fail"))
		{
			(iParam0 + 360[215])->f_28 = -1.0f;
		}
		if (!DECOR_CHECK_EXIST(Global_34573, "scInPokerBlk"))
		{
			if ((iParam0 + 360[215])->f_28 == -1.0f && Global_34581[0] < (iParam0 + 360[115])->f_20)
			{
				(iParam0 + 360[215])->f_4 = 1;
				iParam0->f_292++;
			}
		}
	}
	Function_108(iParam1, iParam0, 2);
	return;
}

void Function_115(int iParam0, int iParam1) //Position: 0x6095 / 24725
{
	if (!StackVal)
	{
		if (DECOR_CHECK_EXIST(Global_34573, "sc_poker_obj2_playerWon") && DECOR_CHECK_EXIST(Global_34573, "sc_poker_obj2_npcBust"))
		{
			(iParam0 + 360[115])->f_28 = 1.0f;
		}
		if ((iParam0 + 360[115])->f_28 != 1.0f)
		{
			(iParam0 + 360[115])->f_4 = 1;
			iParam0->f_292++;
		}
	}
	Function_108(iParam1, iParam0, 1);
	return;
}

void Function_116(int iParam0, int iParam1) //Position: 0x6124 / 24868
{
	if (!StackVal)
	{
		(iParam0 + 360[015])->f_28 = (Global_34581[424] - (iParam0 + 360[015])->f_20);
		if (iParam0 + 360[015])->f_28 <= IntToFloat(iParam0->f_324)
		{
			(iParam0 + 360[015])->f_4 = 1;
			iParam0->f_292++;
		}
	}
	Function_108(iParam1, iParam0, 0);
	return;
}

int Function_117(var uParam0, int iParam1) //Position: 0x6188 / 24968
{
	if (((((uParam0->f_288 != 1 || uParam0->f_288 != 3) || uParam0->f_288 != 2) || uParam0->f_288 != 6) || uParam0->f_288 != 7) || uParam0->f_288 != 8)
	{
		return 1;
	}
	if (!uParam0->f_356)
	{
		if (!Function_101(iParam1))
		{
			Function_99(iParam1);
		}
		else
		{
			Function_96(iParam1, 7.0f);
			uParam0->f_356 = 1;
			Function_92(iParam1);
		}
		if (Global_63096)
		{
			uParam0->f_356 = 1;
		}
	}
	if (!Global_63096 && uParam0->f_356)
	{
		return 1;
	}
	return 0;
}

void Function_118(var uParam0, int iParam1, int iParam2) //Position: 0x620B / 25099
{
	switch (*iParam2)
	{
		case 0x00000000:
			if (!Function_101(&iLocal_23))
			{
				Function_99(&iLocal_23);
			}
			if (!uParam0->f_352)
			{
				Function_112(iParam1);
				uParam0->f_352 = 1;
			}
			if (!uParam0->f_268 && Function_117(uParam0, &iLocal_32))
			{
				Function_111(iParam1);
				uParam0->f_268 = 1;
				*iParam2 = 1;
			}
			break;
		
		case 0x00000001:
			Function_121(uParam0, iParam1);
			Function_120(uParam0, iParam1);
			Function_119(uParam0, iParam1);
			if (Function_153(Function_156(0, Global_30658[0], 3)) == 3)
			{
				uParam0->f_272 = 1;
			}
			if (Function_153(Function_156(0, Global_30658[0], 3)) != 3 || Function_153(Function_156(0, Global_30658[0], 3)) != 0)
			{
				uParam0->f_8 = StackVal + 1;
				if (StackVal >= 10)
				{
					uParam0->f_8 = 0;
					*iParam2 = 2;
				}
			}
			break;
		
		case 0x00000002:
			if (Function_101(&iLocal_23))
			{
				Function_105(&iLocal_23);
				uParam0->f_320 = Function_97(&iLocal_23);
				Function_92(&iLocal_23);
			}
			if (Function_153(Function_156(0, Global_30658[0], 3)) == 0)
			{
				if (!uParam0->f_272)
				{
					uParam0->f_260 = 1;
				}
			}
			uParam0->f_264 = 1;
			break;
	}
	return;
}

void Function_119(int iParam0, int iParam1) //Position: 0x6326 / 25382
{
	if (!StackVal)
	{
		(iParam0 + 360[215])->f_28 = (Global_34581[44] - (iParam0 + 360[215])->f_20);
		if (iParam0 + 360[215])->f_28 <= IntToFloat(iParam0->f_332)
		{
			(iParam0 + 360[215])->f_4 = 1;
			iParam0->f_292++;
		}
	}
	Function_108(iParam1, iParam0, 2);
	return;
}

void Function_120(int iParam0, int iParam1) //Position: 0x6389 / 25481
{
	if (!StackVal)
	{
		(iParam0 + 360[115])->f_28 = (Global_34581[467] - (iParam0 + 360[115])->f_20);
		if (iParam0 + 360[115])->f_28 <= IntToFloat(iParam0->f_328)
		{
			(iParam0 + 360[115])->f_4 = 1;
			iParam0->f_292++;
		}
	}
	Function_108(iParam1, iParam0, 1);
	return;
}

void Function_121(int iParam0, int iParam1) //Position: 0x63ED / 25581
{
	if (!StackVal)
	{
		(iParam0 + 360[015])->f_28 = ((Function_161((183 + 22)) + Function_161((183 + 25))) - (iParam0 + 360[015])->f_20);
		if (iParam0 + 360[015])->f_28 <= IntToFloat(iParam0->f_324)
		{
			(iParam0 + 360[015])->f_4 = 1;
			iParam0->f_292++;
		}
	}
	Function_108(iParam1, iParam0, 0);
	return;
}

void Function_122(var uParam0, int iParam1, int iParam2) //Position: 0x6458 / 25688
{
	switch (*iParam2)
	{
		case 0x00000000:
			if (!Function_101(&iLocal_23))
			{
				Function_99(&iLocal_23);
			}
			if (!uParam0->f_352)
			{
				Function_112(iParam1);
				uParam0->f_352 = 1;
			}
			if (!uParam0->f_268 && Function_117(uParam0, &iLocal_32))
			{
				Function_111(iParam1);
				uParam0->f_268 = 1;
				*iParam2 = 1;
			}
			break;
		
		case 0x00000001:
			Function_125(uParam0, iParam1);
			Function_124(uParam0, iParam1);
			Function_123(uParam0, iParam1);
			if (Function_153(Function_156(0, Global_30685[2], 3)) == 3)
			{
				uParam0->f_272 = 1;
			}
			if (Function_153(Function_156(0, Global_30685[2], 3)) != 3 || Function_153(Function_156(0, Global_30685[2], 3)) != 0)
			{
				uParam0->f_8 = StackVal + 1;
				if (StackVal >= 10)
				{
					uParam0->f_8 = 0;
					*iParam2 = 2;
				}
			}
			break;
		
		case 0x00000002:
			if (Function_101(&iLocal_23))
			{
				Function_105(&iLocal_23);
				uParam0->f_320 = Function_97(&iLocal_23);
				Function_92(&iLocal_23);
			}
			if (Function_153(Function_156(0, Global_30685[2], 3)) == 0)
			{
				if (!uParam0->f_272)
				{
					uParam0->f_260 = 1;
				}
			}
			uParam0->f_264 = 1;
			break;
	}
	return;
}

void Function_123(int iParam0, int iParam1) //Position: 0x6573 / 25971
{
	if (!StackVal)
	{
		(iParam0 + 360[215])->f_28 = (Global_34581[467] - (iParam0 + 360[215])->f_20);
		if (iParam0 + 360[215])->f_28 <= IntToFloat(iParam0->f_332)
		{
			(iParam0 + 360[215])->f_4 = 1;
			iParam0->f_292++;
		}
	}
	Function_108(iParam1, iParam0, 2);
	return;
}

void Function_124(int iParam0, int iParam1) //Position: 0x65D7 / 26071
{
	if (!StackVal)
	{
		(iParam0 + 360[115])->f_28 = (Function_161((183 + 25)) - (iParam0 + 360[115])->f_20);
		if (iParam0 + 360[115])->f_28 <= IntToFloat(iParam0->f_328)
		{
			(iParam0 + 360[115])->f_4 = 1;
			iParam0->f_292++;
		}
	}
	Function_108(iParam1, iParam0, 1);
	return;
}

void Function_125(int iParam0, int iParam1) //Position: 0x663A / 26170
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	if (!StackVal)
	{
		if (IS_PLAYER_DEADEYE(0) && !(iParam0 + 360[015])->f_12)
		{
			(iParam0 + 360[015])->f_12 = 1;
			(iParam0 + 360[015])->f_20 = 0.0f;
		}
		if ((iParam0 + 360[015])->f_12)
		{
			if (!IS_PLAYER_DEADEYE(0))
			{
				(iParam0 + 360[015])->f_20 = GET_CURRENT_GAME_TIME();
				(iParam0 + 360[015])->f_12 = 0;
			}
		}
		if (EVENT_TRAP_SUCCESSFUL_TRAP(iParam0->f_544))
		{
			bVar1 = CREATE_OBJECT_ITERATOR(iParam0->f_552);
			ITERATE_IN_EVENT_TRAP(bVar1, iParam0->f_544);
			bVar2 = START_OBJECT_ITERATOR(bVar1);
			if (IS_OBJECT_VALID(bVar2))
			{
				bVar3 = GET_EVENT_FROM_OBJECT(bVar2);
				bVar4 = GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(bVar3));
				bVar5 = GET_ACTOR_FROM_OBJECT(GET_EVENT_PERPETRATOR(bVar3));
				if (IS_ACTOR_VALID(bVar4))
				{
					bVar0 = GET_ACTOR_ENUM(bVar4);
					if (bVar0 == 412)
					{
						if (IS_ACTOR_VALID(bVar5))
						{
							if ((IS_ACTOR_LOCAL_PLAYER(bVar5) && !Function_126(GET_LAST_HIT_FLAGS(bVar4), 262144)) && !IS_PLAYER_DEADEYE(0))
							{
								if (((iParam0 + 360[015])->f_20 < 0.0f && (GET_CURRENT_GAME_TIME() - (iParam0 + 360[015])->f_20) < 2.0f) || (iParam0 + 360[015])->f_20 != 0.0f)
								{
									(iParam0 + 360[015])->f_28 = ((iParam0 + 360[015])->f_28 + 1.0f);
								}
							}
						}
					}
				}
			}
			DESTROY_ITERATOR(bVar1);
			EVENT_TRAP_CLEAR_TRAP_FLAG(iParam0->f_544);
			EVENT_TRAP_CLEAR_EVENTS(iParam0->f_544);
		}
		if ((iParam0 + 360[015])->f_28 <= 1.0f)
		{
			(iParam0 + 360[015])->f_4 = 1;
			iParam0->f_292++;
		}
	}
	Function_108(iParam1, iParam0, 0);
	return;
}

bool Function_126(var uParam0, int iParam1) //Position: 0x67AE / 26542
{
	return (uParam0 && iParam1) == 0;
}

void Function_127(var uParam0, int iParam1, int iParam2) //Position: 0x67BB / 26555
{
	switch (*iParam2)
	{
		case 0x00000000:
			if (!Function_101(&iLocal_23))
			{
				Function_99(&iLocal_23);
			}
			if (!uParam0->f_352)
			{
				Function_112(iParam1);
				uParam0->f_352 = 1;
			}
			if (!uParam0->f_268 && Function_117(uParam0, &iLocal_32))
			{
				Function_111(iParam1);
				uParam0->f_268 = 1;
				*iParam2 = 1;
			}
			break;
		
		case 0x00000001:
			Function_130(uParam0, iParam1);
			Function_129(uParam0, iParam1);
			Function_128(uParam0, iParam1);
			if (Function_153(Function_156(0, Global_30658[2], 3)) == 3)
			{
				uParam0->f_272 = 1;
			}
			if (Function_153(Function_156(0, Global_30658[2], 3)) != 3 || Function_153(Function_156(0, Global_30658[2], 3)) != 0)
			{
				uParam0->f_8 = StackVal + 1;
				if (StackVal >= 10)
				{
					uParam0->f_8 = 0;
					*iParam2 = 2;
				}
			}
			break;
		
		case 0x00000002:
			if (Function_101(&iLocal_23))
			{
				Function_105(&iLocal_23);
				uParam0->f_320 = Function_97(&iLocal_23);
				Function_92(&iLocal_23);
			}
			if (Function_153(Function_156(0, Global_30658[2], 3)) == 0)
			{
				if (!uParam0->f_272)
				{
					uParam0->f_260 = 1;
				}
			}
			uParam0->f_264 = 1;
			break;
	}
	return;
}

void Function_128(int iParam0, int iParam1) //Position: 0x68D6 / 26838
{
	if (!StackVal)
	{
		(iParam0 + 360[215])->f_28 = (Function_161(89) - (iParam0 + 360[215])->f_20);
		if (Function_153(Function_156(0, Global_30658[2], 3)) == 3)
		{
			if (iParam0 + 360[215])->f_28 >= IntToFloat(iParam0->f_332)
			{
				(iParam0 + 360[215])->f_4 = 1;
				iParam0->f_292++;
			}
		}
	}
	Function_108(iParam1, iParam0, 2);
	return;
}

void Function_129(int iParam0, int iParam1) //Position: 0x6949 / 26953
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	
	if (!StackVal)
	{
		if (EVENT_TRAP_SUCCESSFUL_TRAP(iParam0->f_544))
		{
			bVar0 = CREATE_OBJECT_ITERATOR(iParam0->f_552);
			ITERATE_IN_EVENT_TRAP(bVar0, iParam0->f_544);
			bVar1 = START_OBJECT_ITERATOR(bVar0);
			if (IS_OBJECT_VALID(bVar1))
			{
				bVar2 = GET_EVENT_FROM_OBJECT(bVar1);
				bVar3 = GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(bVar2));
				bVar4 = GET_ACTOR_FROM_OBJECT(GET_EVENT_PERPETRATOR(bVar2));
				if (IS_ACTOR_VALID(bVar3) && IS_ACTOR_LOCAL_PLAYER(bVar4))
				{
					if (GET_ACTOR_FACTION(bVar3) != 19 && IS_ACTOR_RIDING_VEHICLE(bVar4))
					{
						(iParam0 + 360[115])->f_28 = ((iParam0 + 360[115])->f_28 + 1.0f);
					}
				}
			}
			DESTROY_ITERATOR(bVar0);
			EVENT_TRAP_CLEAR_TRAP_FLAG(iParam0->f_544);
			EVENT_TRAP_CLEAR_EVENTS(iParam0->f_544);
		}
		if (iParam0 + 360[115])->f_28 <= IntToFloat(iParam0->f_328)
		{
			(iParam0 + 360[115])->f_4 = 1;
			iParam0->f_292++;
		}
	}
	Function_108(iParam1, iParam0, 1);
	return;
}

void Function_130(int iParam0, int iParam1) //Position: 0x6A23 / 27171
{
	if (!StackVal)
	{
		if (DECOR_CHECK_EXIST(Global_34573, "iLockerFail"))
		{
			(iParam0 + 360[015])->f_28 = 1.0f;
		}
		if (DECOR_CHECK_EXIST(Global_34573, "SOL_UsedSafe") && (iParam0 + 360[015])->f_28 == 1.0f)
		{
			(iParam0 + 360[015])->f_4 = 1;
			iParam0->f_292++;
		}
	}
	Function_108(iParam1, iParam0, 0);
	return;
}

void Function_131(var uParam0, int iParam1, int iParam2) //Position: 0x6A9D / 27293
{
	switch (*iParam2)
	{
		case 0x00000000:
			if (!Function_101(&iLocal_23))
			{
				Function_99(&iLocal_23);
			}
			if (!uParam0->f_352)
			{
				Function_112(iParam1);
				uParam0->f_352 = 1;
			}
			if (!uParam0->f_268 && Function_117(uParam0, &iLocal_32))
			{
				Function_111(iParam1);
				uParam0->f_268 = 1;
				*iParam2 = 1;
			}
			break;
		
		case 0x00000001:
			Function_134(uParam0, iParam1);
			Function_133(uParam0, iParam1);
			Function_132(uParam0, iParam1);
			if (Function_153(Function_156(0, Global_30685[1], 3)) == 3)
			{
				uParam0->f_272 = 1;
			}
			if (Function_153(Function_156(0, Global_30685[1], 3)) != 3 || Function_153(Function_156(0, Global_30685[1], 3)) != 0)
			{
				uParam0->f_8 = StackVal + 1;
				if (StackVal >= 10)
				{
					uParam0->f_8 = 0;
					*iParam2 = 2;
				}
			}
			break;
		
		case 0x00000002:
			if (Function_101(&iLocal_23))
			{
				Function_105(&iLocal_23);
				uParam0->f_320 = Function_97(&iLocal_23);
				Function_92(&iLocal_23);
			}
			if (Function_153(Function_156(0, Global_30685[1], 3)) == 0)
			{
				if (!uParam0->f_272)
				{
					uParam0->f_260 = 1;
				}
			}
			uParam0->f_264 = 1;
			break;
	}
	return;
}

void Function_132(int iParam0, int iParam1) //Position: 0x6BB8 / 27576
{
	if (!StackVal)
	{
		(iParam0 + 360[215])->f_28 = (Global_34581[46] - (iParam0 + 360[215])->f_20);
		if (iParam0 + 360[215])->f_28 <= IntToFloat(iParam0->f_332)
		{
			(iParam0 + 360[215])->f_4 = 1;
			iParam0->f_292++;
		}
	}
	Function_108(iParam1, iParam0, 2);
	return;
}

void Function_133(int iParam0, int iParam1) //Position: 0x6C1B / 27675
{
	if (!StackVal)
	{
		(iParam0 + 360[115])->f_28 = (Global_34581[467] - (iParam0 + 360[115])->f_20);
		if (iParam0 + 360[115])->f_28 <= IntToFloat(iParam0->f_328)
		{
			(iParam0 + 360[115])->f_4 = 1;
			iParam0->f_292++;
		}
	}
	Function_108(iParam1, iParam0, 1);
	return;
}

void Function_134(int iParam0, int iParam1) //Position: 0x6C7F / 27775
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	
	if (!StackVal)
	{
		if (EVENT_TRAP_SUCCESSFUL_TRAP(iParam0->f_544))
		{
			bVar0 = CREATE_OBJECT_ITERATOR(iParam0->f_552);
			ITERATE_IN_EVENT_TRAP(bVar0, iParam0->f_544);
			bVar1 = START_OBJECT_ITERATOR(bVar0);
			if (IS_OBJECT_VALID(bVar1))
			{
				bVar2 = GET_EVENT_FROM_OBJECT(bVar1);
				bVar3 = GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(bVar2));
				bVar4 = GET_ACTOR_FROM_OBJECT(GET_EVENT_PERPETRATOR(bVar2));
				if (IS_ACTOR_LOCAL_PLAYER(bVar4))
				{
					if (IS_ACTOR_VALID(bVar3))
					{
						if (GET_LAST_HIT_WEAPON(bVar3) != 23 && FIRE_IS_ACTOR_ON_FIRE(bVar3))
						{
							(iParam0 + 360[015])->f_28 = ((iParam0 + 360[015])->f_28 + 1.0f);
						}
					}
				}
			}
			DESTROY_ITERATOR(bVar0);
			EVENT_TRAP_CLEAR_TRAP_FLAG(iParam0->f_544);
			EVENT_TRAP_CLEAR_EVENTS(iParam0->f_544);
		}
		if (iParam0 + 360[015])->f_28 <= IntToFloat(iParam0->f_324)
		{
			(iParam0 + 360[015])->f_4 = 1;
			iParam0->f_292++;
		}
	}
	Function_108(iParam1, iParam0, 0);
	return;
}

void Function_135(var uParam0, int iParam1, int iParam2) //Position: 0x6D5B / 27995
{
	switch (*iParam2)
	{
		case 0x00000000:
			if (!Function_101(&iLocal_23))
			{
				Function_99(&iLocal_23);
			}
			if (!uParam0->f_352)
			{
				Function_112(iParam1);
				uParam0->f_352 = 1;
			}
			if (!uParam0->f_268 && Function_117(uParam0, &iLocal_32))
			{
				Function_111(iParam1);
				uParam0->f_268 = 1;
				*iParam2 = 1;
			}
			break;
		
		case 0x00000001:
			Function_138(uParam0, iParam1);
			Function_137(uParam0, iParam1);
			Function_136(uParam0, iParam1);
			if (Function_153(Function_156(0, Global_30668[2], 3)) == 3)
			{
				uParam0->f_272 = 1;
			}
			if (Function_153(Function_156(0, Global_30668[2], 3)) != 3 || Function_153(Function_156(0, Global_30668[2], 3)) != 0)
			{
				uParam0->f_8 = StackVal + 1;
				if (StackVal >= 10)
				{
					uParam0->f_8 = 0;
					*iParam2 = 2;
				}
			}
			break;
		
		case 0x00000002:
			if (Function_101(&iLocal_23))
			{
				Function_105(&iLocal_23);
				uParam0->f_320 = Function_97(&iLocal_23);
				Function_92(&iLocal_23);
			}
			if (Function_153(Function_156(0, Global_30668[2], 3)) == 0)
			{
				if (!uParam0->f_272)
				{
					uParam0->f_260 = 1;
				}
			}
			uParam0->f_264 = 1;
			break;
	}
	return;
}

void Function_136(int iParam0, int iParam1) //Position: 0x6E76 / 28278
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	
	if (!StackVal)
	{
		if (EVENT_TRAP_SUCCESSFUL_TRAP(iParam0->f_544))
		{
			bVar0 = CREATE_OBJECT_ITERATOR(iParam0->f_552);
			ITERATE_IN_EVENT_TRAP(bVar0, iParam0->f_544);
			bVar1 = START_OBJECT_ITERATOR(bVar0);
			if (IS_OBJECT_VALID(bVar1))
			{
				bVar2 = GET_EVENT_FROM_OBJECT(bVar1);
				bVar3 = GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(bVar2));
				bVar4 = GET_ACTOR_FROM_OBJECT(GET_EVENT_PERPETRATOR(bVar2));
				if (IS_ACTOR_VALID(bVar4))
				{
					if (IS_ACTOR_LOCAL_PLAYER(bVar4))
					{
						if (!IS_ACTOR_RIDING(bVar4))
						{
							(iParam0 + 360[215])->f_28 = 0.0f;
						}
					}
				}
			}
			DESTROY_ITERATOR(bVar0);
			EVENT_TRAP_CLEAR_TRAP_FLAG(iParam0->f_544);
			EVENT_TRAP_CLEAR_EVENTS(iParam0->f_544);
		}
		if (Function_153(Function_156(0, Global_30668[2], 3)) == 3)
		{
			if ((iParam0 + 360[215])->f_28 != 1.0f)
			{
				(iParam0 + 360[215])->f_4 = 1;
				iParam0->f_292++;
			}
		}
	}
	Function_108(iParam1, iParam0, 2);
	return;
}

void Function_137(int iParam0, int iParam1) //Position: 0x6F4F / 28495
{
	if (!StackVal)
	{
		(iParam0 + 360[115])->f_28 = (Global_34581[389] - (iParam0 + 360[115])->f_20);
		if (iParam0 + 360[115])->f_28 <= (TO_FLOAT(iParam0->f_328) / 3,281f)
		{
			(iParam0 + 360[115])->f_4 = 1;
			iParam0->f_292++;
		}
	}
	Function_108(iParam1, iParam0, 1);
	return;
}

void Function_138(int iParam0, int iParam1) //Position: 0x6FBB / 28603
{
	if (!StackVal)
	{
		if (IS_PLAYER_DEADEYE(0) && !(iParam0 + 360[015])->f_12)
		{
			(iParam0 + 360[015])->f_12 = 1;
		}
		if ((iParam0 + 360[015])->f_12)
		{
			(iParam0 + 360[015])->f_28 = TO_FLOAT(GET_NUM_KILLS_LAST_DEADEYE());
		}
		if (iParam0 + 360[015])->f_28 <= IntToFloat(iParam0->f_324)
		{
			(iParam0 + 360[015])->f_4 = 1;
			iParam0->f_292++;
		}
	}
	Function_108(iParam1, iParam0, 0);
	return;
}

void Function_139(var uParam0, int iParam1, int iParam2) //Position: 0x703D / 28733
{
	switch (*iParam2)
	{
		case 0x00000000:
			if (!Function_101(&iLocal_23))
			{
				Function_99(&iLocal_23);
			}
			if (!uParam0->f_352)
			{
				Function_112(iParam1);
				uParam0->f_352 = 1;
			}
			if (!uParam0->f_268 && Function_117(uParam0, &iLocal_32))
			{
				Function_111(iParam1);
				uParam0->f_268 = 1;
				*iParam2 = 1;
			}
			break;
		
		case 0x00000001:
			Function_142(uParam0, iParam1);
			Function_141(uParam0, iParam1);
			Function_140(uParam0, iParam1);
			if (Function_153(Function_156(0, Global_30658[3], 3)) == 3)
			{
				uParam0->f_272 = 1;
			}
			if (Function_153(Function_156(0, Global_30658[3], 3)) != 3 || Function_153(Function_156(0, Global_30658[3], 3)) != 0)
			{
				uParam0->f_8 = StackVal + 1;
				if (StackVal >= 10)
				{
					uParam0->f_8 = 0;
					*iParam2 = 2;
				}
			}
			break;
		
		case 0x00000002:
			if (Function_101(&iLocal_23))
			{
				Function_105(&iLocal_23);
				uParam0->f_320 = Function_97(&iLocal_23);
				Function_92(&iLocal_23);
			}
			if (Function_153(Function_156(0, Global_30658[3], 3)) == 0)
			{
				if (!uParam0->f_272)
				{
					uParam0->f_260 = 1;
				}
			}
			uParam0->f_264 = 1;
			break;
	}
	return;
}

void Function_140(int iParam0, int iParam1) //Position: 0x7158 / 29016
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	
	if (!StackVal)
	{
		if (EVENT_TRAP_SUCCESSFUL_TRAP(iParam0->f_544))
		{
			bVar0 = CREATE_OBJECT_ITERATOR(iParam0->f_552);
			ITERATE_IN_EVENT_TRAP(bVar0, iParam0->f_544);
			bVar1 = START_OBJECT_ITERATOR(bVar0);
			if (IS_OBJECT_VALID(bVar1))
			{
				bVar2 = GET_EVENT_FROM_OBJECT(bVar1);
				bVar3 = GET_ACTOR_FROM_OBJECT(GET_EVENT_PERPETRATOR(bVar2));
				if (IS_ACTOR_VALID(bVar3))
				{
					if (IS_ACTOR_LOCAL_PLAYER(bVar3))
					{
						if (EVENT_TRAP_SUCCESSFUL_TRAP(iParam0->f_548))
						{
							bVar4 = CREATE_OBJECT_ITERATOR(iParam0->f_552);
							ITERATE_IN_EVENT_TRAP(bVar4, iParam0->f_548);
							bVar5 = START_OBJECT_ITERATOR(bVar4);
							if (IS_OBJECT_VALID(bVar5))
							{
								bVar6 = GET_EVENT_FROM_OBJECT(bVar5);
								bVar7 = GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(bVar6));
								bVar8 = GET_ACTOR_FROM_OBJECT(GET_EVENT_PERPETRATOR(bVar6));
								if (IS_ACTOR_VALID(bVar7) && IS_ACTOR_VALID(bVar8))
								{
									if (IS_ACTOR_LOCAL_PLAYER(bVar8))
									{
										(iParam0 + 360[215])->f_28 = ((iParam0 + 360[215])->f_28 + 1.0f);
									}
								}
							}
							DESTROY_ITERATOR(bVar4);
							EVENT_TRAP_CLEAR_TRAP_FLAG(iParam0->f_548);
							EVENT_TRAP_CLEAR_EVENTS(iParam0->f_548);
						}
						else
						{
							(iParam0 + 360[215])->f_28 = 0.0f;
							EVENT_TRAP_CLEAR_TRAP_FLAG(iParam0->f_548);
							EVENT_TRAP_CLEAR_EVENTS(iParam0->f_548);
						}
					}
				}
			}
			DESTROY_ITERATOR(bVar0);
			EVENT_TRAP_CLEAR_TRAP_FLAG(iParam0->f_544);
			EVENT_TRAP_CLEAR_EVENTS(iParam0->f_544);
		}
		if (iParam0 + 360[215])->f_28 <= IntToFloat(iParam0->f_332)
		{
			(iParam0 + 360[215])->f_4 = 1;
			iParam0->f_292++;
		}
	}
	Function_108(iParam1, iParam0, 2);
	return;
}

void Function_141(int iParam0, int iParam1) //Position: 0x72AB / 29355
{
	if (!StackVal)
	{
		(iParam0 + 360[115])->f_28 = (Global_34581[264] - (iParam0 + 360[115])->f_20);
		if (iParam0 + 360[115])->f_28 <= IntToFloat(iParam0->f_328)
		{
			(iParam0 + 360[115])->f_4 = 1;
			iParam0->f_292++;
		}
	}
	Function_108(iParam1, iParam0, 1);
	return;
}

void Function_142(int iParam0, int iParam1) //Position: 0x730F / 29455
{
	if (!StackVal)
	{
		(iParam0 + 360[015])->f_28 = (Global_34581[0] - (iParam0 + 360[015])->f_20);
		if (iParam0 + 360[015])->f_28 <= IntToFloat(iParam0->f_324)
		{
			(iParam0 + 360[015])->f_4 = 1;
			iParam0->f_292++;
		}
	}
	Function_108(iParam1, iParam0, 0);
	return;
}

void Function_143(var uParam0, int iParam1, int iParam2) //Position: 0x7371 / 29553
{
	switch (*iParam2)
	{
		case 0x00000000:
			if (!Function_101(&iLocal_23))
			{
				Function_99(&iLocal_23);
			}
			if (!uParam0->f_352)
			{
				Function_112(iParam1);
				uParam0->f_352 = 1;
			}
			if (!uParam0->f_268 && Function_117(uParam0, &iLocal_32))
			{
				Function_111(iParam1);
				uParam0->f_268 = 1;
				*iParam2 = 1;
			}
			break;
		
		case 0x00000001:
			Function_146(uParam0, iParam1);
			Function_145(uParam0, iParam1);
			Function_144(uParam0, iParam1);
			if (Function_153(Function_156(0, Global_30640[2], 3)) == 3)
			{
				uParam0->f_272 = 1;
			}
			if (Function_153(Function_156(0, Global_30640[2], 3)) != 3 || Function_153(Function_156(0, Global_30640[2], 3)) != 0)
			{
				uParam0->f_8 = StackVal + 1;
				if (StackVal >= 10)
				{
					uParam0->f_8 = 0;
					*iParam2 = 2;
				}
			}
			break;
		
		case 0x00000002:
			if (Function_101(&iLocal_23))
			{
				Function_105(&iLocal_23);
				uParam0->f_320 = Function_97(&iLocal_23);
				Function_92(&iLocal_23);
			}
			if (Function_153(Function_156(0, Global_30640[2], 3)) == 0)
			{
				if (!uParam0->f_272)
				{
					uParam0->f_260 = 1;
				}
			}
			uParam0->f_264 = 1;
			break;
	}
	return;
}

void Function_144(int iParam0, int iParam1) //Position: 0x748C / 29836
{
	if (!StackVal)
	{
		(iParam0 + 360[215])->f_28 = (Function_161(46) - (iParam0 + 360[215])->f_20);
		if (iParam0 + 360[215])->f_28 <= IntToFloat(iParam0->f_332)
		{
			(iParam0 + 360[215])->f_4 = 1;
			iParam0->f_292++;
		}
	}
	Function_108(iParam1, iParam0, 2);
	return;
}

void Function_145(int iParam0, int iParam1) //Position: 0x74ED / 29933
{
	if (!StackVal)
	{
		(iParam0 + 360[115])->f_28 = ((Function_161((183 + 22)) + Function_161((183 + 25))) - (iParam0 + 360[115])->f_20);
		if (iParam0 + 360[115])->f_28 <= IntToFloat(iParam0->f_328)
		{
			(iParam0 + 360[115])->f_4 = 1;
			iParam0->f_292++;
		}
	}
	Function_108(iParam1, iParam0, 1);
	return;
}

void Function_146(int iParam0, int iParam1) //Position: 0x7558 / 30040
{
	if (!StackVal)
	{
		(iParam0 + 360[015])->f_28 = (Function_161(45) - (iParam0 + 360[015])->f_20);
		if (iParam0 + 360[015])->f_28 <= IntToFloat(iParam0->f_324)
		{
			(iParam0 + 360[015])->f_4 = 1;
			iParam0->f_292++;
		}
	}
	Function_108(iParam1, iParam0, 0);
	return;
}

void Function_147(var uParam0, var uParam1, int iParam2) //Position: 0x75B9 / 30137
{
	switch (*iParam2)
	{
		case 0x00000000:
			if (!Function_101(&iLocal_23))
			{
				Function_99(&iLocal_23);
			}
			if (!uParam0->f_352)
			{
				Function_112(uParam1);
				uParam0->f_352 = 1;
			}
			if (!uParam0->f_268 && Function_117(uParam0, &iLocal_32))
			{
				Function_111(uParam1);
				uParam0->f_268 = 1;
				*iParam2 = 1;
			}
			break;
		
		case 0x00000001:
			Function_152(uParam0, uParam1);
			Function_149(uParam0, uParam1);
			Function_148(uParam0, uParam1);
			if (Function_153(Function_156(0, Global_30679[1], 3)) == 3)
			{
				uParam0->f_272 = 1;
			}
			if (Function_153(Function_156(0, Global_30679[1], 3)) != 3 || Function_153(Function_156(0, Global_30679[1], 3)) != 0)
			{
				uParam0->f_8 = StackVal + 1;
				if (StackVal >= 10)
				{
					uParam0->f_8 = 0;
					*iParam2 = 2;
				}
			}
			break;
		
		case 0x00000002:
			if (Function_101(&iLocal_23))
			{
				Function_105(&iLocal_23);
				uParam0->f_320 = Function_97(&iLocal_23);
				Function_92(&iLocal_23);
			}
			if (Function_153(Function_156(0, Global_30679[1], 3)) == 0)
			{
				if (!uParam0->f_272)
				{
					uParam0->f_260 = 1;
				}
			}
			uParam0->f_264 = 1;
			break;
	}
	return;
}

void Function_148(int iParam0, int iParam1) //Position: 0x76D4 / 30420
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	
	iParam0->f_332 = 3;
	if (!StackVal)
	{
		if (EVENT_TRAP_SUCCESSFUL_TRAP(iParam0->f_544))
		{
			bVar1 = CREATE_OBJECT_ITERATOR(iParam0->f_552);
			ITERATE_IN_EVENT_TRAP(bVar1, iParam0->f_544);
			bVar2 = START_OBJECT_ITERATOR(bVar1);
			if (IS_OBJECT_VALID(bVar2))
			{
				bVar3 = GET_EVENT_FROM_OBJECT(bVar2);
				bVar4 = GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(bVar3));
				if (IS_ACTOR_VALID(bVar4))
				{
					bVar0 = GET_ACTOR_ENUM(bVar4);
					if ((bVar0 != 502 || bVar0 != 503) || bVar0 != 504)
					{
						(iParam0 + 360[215])->f_28 = ((iParam0 + 360[215])->f_28 + 1.0f);
					}
				}
			}
			DESTROY_ITERATOR(bVar1);
			EVENT_TRAP_CLEAR_TRAP_FLAG(iParam0->f_544);
			EVENT_TRAP_CLEAR_EVENTS(iParam0->f_544);
		}
		if (iParam0 + 360[215])->f_28 <= IntToFloat(iParam0->f_332)
		{
			(iParam0 + 360[215])->f_4 = 1;
			iParam0->f_292++;
		}
	}
	Function_108(iParam1, iParam0, 2);
	return;
}

void Function_149(int iParam0, int iParam1) //Position: 0x77B1 / 30641
{
	char* cVar0;
	char* cVar1[64];
	char* cVar17[64];
	bool bVar33;
	bool bVar34;
	bool bVar35;
	bool bVar36;
	bool bVar37;
	bool bVar38;
	
	if (!StackVal)
	{
		if (EVENT_TRAP_SUCCESSFUL_TRAP(iParam0->f_548))
		{
			bVar33 = CREATE_OBJECT_ITERATOR(iParam0->f_552);
			ITERATE_IN_EVENT_TRAP(bVar33, iParam0->f_548);
			bVar34 = START_OBJECT_ITERATOR(bVar33);
			if (IS_OBJECT_VALID(bVar34))
			{
				bVar35 = GET_EVENT_FROM_OBJECT(bVar34);
				bVar36 = GET_EVENT_TARGET_AS_OBJECT(bVar35);
				bVar37 = GET_ACTOR_FROM_OBJECT(bVar36);
				bVar38 = GET_ACTOR_FROM_OBJECT(GET_EVENT_PERPETRATOR(bVar35));
				if (IS_ACTOR_LOCAL_PLAYER(bVar38))
				{
					if (IS_ACTOR_VALID(bVar37))
					{
						cVar0 = GET_ACTOR_ENUM_STRING(bVar37);
						strcpy(&cVar1, cVar0, 64);
						STRING_LOWER(&cVar1);
						strcpy(&cVar17, "female_prostitute", 64);
						STRING_LOWER(&cVar17);
						if (STRING_CONTAINS_STRING(&cVar1, &cVar17) && !Function_151(iParam0, 1, bVar36))
						{
							(iParam0 + 360[115])->f_28 = ((iParam0 + 360[115])->f_28 + 1.0f);
							Function_150(iParam0, 1, bVar36);
						}
					}
				}
			}
			DESTROY_ITERATOR(bVar33);
			EVENT_TRAP_CLEAR_TRAP_FLAG(iParam0->f_548);
			EVENT_TRAP_CLEAR_EVENTS(iParam0->f_548);
		}
		if (iParam0 + 360[115])->f_28 <= IntToFloat(iParam0->f_328)
		{
			(iParam0 + 360[115])->f_4 = 1;
			iParam0->f_292++;
		}
	}
	Function_108(iParam1, iParam0, 1);
	return;
}

void Function_150(int iParam0, int iParam1, int iParam2) //Position: 0x78CD / 30925
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if ((*iParam0 + 360[iParam115] + 36)[iVar0] == "")
		{
			(*iParam0 + 360[iParam115] + 36)[iVar0] = iParam2;
			return;
		}
		iVar0++;
	}
	return;
}

bool Function_151(int iParam0, int iParam1, int iParam2) //Position: 0x790E / 30990
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if ((*iParam0 + 360[iParam115] + 36)[iVar0] == iParam2)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void Function_152(int iParam0, int iParam1) //Position: 0x7940 / 31040
{
	if (!StackVal)
	{
		(iParam0 + 360[015])->f_28 = ((((Function_161((183 + 15)) + Function_161((183 + 16))) + Function_161((183 + 17))) + Function_161((183 + 18))) - (iParam0 + 360[015])->f_20);
		if (iParam0 + 360[015])->f_28 <= IntToFloat(iParam0->f_324)
		{
			(iParam0 + 360[015])->f_4 = 1;
			iParam0->f_292++;
		}
	}
	Function_108(iParam1, iParam0, 0);
	return;
}

int Function_153(int iParam0) //Position: 0x79BB / 31163
{
	if (!Function_154(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_154(int iParam0) //Position: 0x79D5 / 31189
{
	if (!Function_46(iParam0))
	{
		return 0;
	}
	if (!Function_155(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_155(int iParam0) //Position: 0x79F9 / 31225
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

int Function_156(bool bParam0, bool bParam1, bool bParam2) //Position: 0x7A0E / 31246
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_160(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_13172[iVar011] == iVar1)
		{
			return iVar0;
		}
		if (Global_13172[iVar011] != 0 && iVar0 < 0)
		{
			return Function_157(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_157(bParam0, bParam1, bParam2, 4294967295);
}

int Function_157(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x7A6C / 31340
{
	var uVar0;
	
	if (!Function_159(bParam2))
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
	uVar0 = Function_160(bParam0, bParam1, bParam2);
	if (bParam3 != 4294967295 || bParam3 <= 275)
	{
		bParam3 = Function_158(uVar0);
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

int Function_158(int iParam0) //Position: 0x7BC1 / 31681
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

bool Function_159(int iParam0) //Position: 0x7BFF / 31743
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_160(int iParam0, int iParam1, int iParam2) //Position: 0x7C14 / 31764
{
	return ((iParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

float Function_161(int iParam0) //Position: 0x7C34 / 31796
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

void Function_162(int iParam0) //Position: 0x7C6D / 31853
{
	int iVar0;
	int iVar1;
	
	iParam0->f_352 = 0;
	iParam0->f_356 = 0;
	iParam0->f_256 = 0;
	iParam0->f_272 = 0;
	iParam0->f_260 = 0;
	iParam0->f_264 = 0;
	iParam0->f_288 = 4294967295;
	iParam0->f_8 = 0;
	iParam0->f_300 = 0.0f;
	iParam0->f_304 = 0.0f;
	iParam0->f_308 = 0.0f;
	iParam0->f_296 = 0;
	iParam0->f_292 = 0;
	iParam0->f_316 = 0;
	iParam0->f_276 = 0;
	iParam0->f_280 = 0;
	iParam0->f_320 = 0.0f;
	iParam0->f_268 = 0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		(*iParam0 + 360)[iVar015] = 0;
		(iParam0 + 360[iVar015])->f_4 = 0;
		(iParam0 + 360[iVar015])->f_12 = 0;
		(iParam0 + 360[iVar015])->f_16 = 0.0f;
		(iParam0 + 360[iVar015])->f_28 = 0.0f;
		(iParam0 + 360[iVar015])->f_32 = 0.0f;
		(iParam0 + 360[iVar015])->f_20 = 0.0f;
		(iParam0 + 360[iVar015])->f_24 = 0.0f;
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 <= 5)
		{
			(*iParam0 + 360[iVar015] + 36)[iVar1] = "";
			iVar1++;
		}
		iVar0++;
	}
	return;
}

bool Function_163(char* cParam0) //Position: 0x7D74 / 32116
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	if (SC_CHALLENGE_IS_VAR_VALID(cParam0, "nAAID"))
	{
		iVar0 = SC_CHALLENGE_GET_VAR_INT(cParam0, "nAAID");
	}
	switch (iVar0)
	{
		case 0x00000000:
			return Function_161(464) < 0.0f;
			break;
		
		case 0x00000001:
			return Function_161(459) < 0.0f;
			break;
		
		case 0x00000002:
			return Function_161(463) < 0.0f;
			break;
		
		case 0x00000003:
			return Function_161(462) < 0.0f;
			break;
		
		case 0x00000004:
			return Function_161(466) < 0.0f;
			break;
		
		case 0x00000005:
			return Function_161(460) < 0.0f;
			break;
		
		case 0x00000006:
			return Function_161(465) < 0.0f;
			break;
		
		case 0x00000007:
			return Function_161(461) < 0.0f;
			break;
		
		case 0x00000008:
			return Function_164(Global_30717[0]);
			break;
		
		case 0x00000009:
			return StackVal < 3;
			break;
	}
	return iVar1;
}

int Function_164(int iParam0) //Position: 0x7E5C / 32348
{
	if (!Function_166(iParam0))
	{
		return 0;
	}
	return Function_165(&(Global_29008[iParam0]), 4096);
}

int Function_165(var uParam0, int iParam1) //Position: 0x7E7A / 32378
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_166(int iParam0) //Position: 0x7E96 / 32406
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

bool Function_167() //Position: 0x7EAC / 32428
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_168(char* cParam0, int iParam1) //Position: 0x7EB5 / 32437
{
	bool bVar0;
	struct<8> Var2;
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
		strcpy(&Var2, "SC_AA", 32);
		Var2 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_25(&Var2, "_SP") };
		if (SC_CHALLENGE_IS_VAR_VALID(*cParam0, "nAAID"))
		{
			bVar0 = SC_CHALLENGE_GET_VAR_INT(*cParam0, "nAAID");
		}
		strcpy(&cVar50, "SC_AA_ICON_", 32);
		straddi(&cVar50, bVar0, 32);
		Var2 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_25(&Var2, "_") };
		Var2 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_25(&Var2, I2STR(bVar0)) };
		Var10 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_25(&Var2, "_title") };
		Var18 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_25(&Var2, "_des") };
		Var26 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_25(&Var2, "_obj1") };
		Var34 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_25(&Var2, "_obj2") };
		Var42 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_25(&Var2, "_obj3") };
		Var58 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_25(&Var2, "_goal1") };
		Var66 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_25(&Var2, "_goal2") };
		Var74 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_25(&Var2, "_goal3") };
		if (SC_CHALLENGE_IS_VAR_VALID(*cParam0, "nnObjGoal1"))
		{
			UI_SET_STRING(&Var58, I2STR(SC_CHALLENGE_GET_VAR_INT(*cParam0, "nnObjGoal1")));
		}
		if (SC_CHALLENGE_IS_VAR_VALID(*cParam0, "nnObjGoal2"))
		{
			UI_SET_STRING(&Var66, I2STR(SC_CHALLENGE_GET_VAR_INT(*cParam0, "nnObjGoal2")));
		}
		if (SC_CHALLENGE_IS_VAR_VALID(*cParam0, "nnObjGoal3"))
		{
			UI_SET_STRING(&Var74, I2STR(SC_CHALLENGE_GET_VAR_INT(*cParam0, "nnObjGoal3")));
		}
		UI_CHALLENGE_CREATE(*cParam0, &Var10, &Var18);
		UI_CHALLENGE_SET_TROPHY_TYPE(*cParam0, Function_171(*cParam0));
		if (!Function_163(*cParam0))
		{
			UI_CHALLENGE_SET_TROPHY_TYPE(*cParam0, 8);
		}
		UI_CHALLENGE_SET_TITLE_TEXTURE(*cParam0, &cVar50);
		UI_CHALLENGE_SET_OBJECTIVE(*cParam0, 0, &Var26);
		UI_CHALLENGE_SET_OBJECTIVE(*cParam0, 1, &Var34);
		UI_CHALLENGE_SET_OBJECTIVE(*cParam0, 2, &Var42);
		Function_169(*cParam0, 0.0f, (*&Global_84611[iParam1140] + 144)[312], (*&Global_84611[iParam1140] + 144)[212]);
		UI_CHALLENGE_MAKE_CURRENT(*cParam0);
	}
	return;
}

void Function_169(char* cParam0, var uParam1, var uParam2, var uParam3) //Position: 0x80CE / 32974
{
	bool bVar0;
	struct<8> Var1;
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
	
	iVar81 = Function_173(&cParam0);
	strcpy(&Var1, "SC_AA", 32);
	Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_25(&Var1, "_SP") };
	if (SC_CHALLENGE_IS_VAR_VALID(cParam0, "nAAID"))
	{
		bVar0 = SC_CHALLENGE_GET_VAR_INT(cParam0, "nAAID");
	}
	Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_25(&Var1, "_") };
	Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_25(&Var1, I2STR(bVar0)) };
	Var41 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_25(&Var1, "_locked") };
	Var49 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_170(&Var1, "_NotSignedDes", "") };
	Var57 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_170(&Var1, "_LockedNotInSP", "") };
	Var65 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_25(&Var1, "_des") };
	Var73 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_25(&Var1, "_unlock") };
	Var17 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_25(&Var1, "n_currTime") };
	Var25 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_25(&Var1, "n_lastTime") };
	Var33 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_25(&Var1, "n_bestTime") };
	Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_94(uParam1) };
	UI_SET_STRING(&Var17, &Var9);
	Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_94(uParam2) };
	UI_SET_STRING(&Var25, &Var9);
	Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_94(uParam3) };
	UI_SET_STRING(&Var33, &Var9);
	if (!NET_MAILBOX_IS_SIGNED_INTO_SC())
	{
		UI_CHALLENGE_SET_DESCRIPTION(cParam0, &Var49);
	}
	else if (Function_167())
	{
		UI_CHALLENGE_SET_DESCRIPTION(cParam0, &Var57);
	}
	else if (Function_163(cParam0))
	{
		UI_CHALLENGE_SET_DESCRIPTION(cParam0, &Var65);
	}
	else
	{
		UI_CHALLENGE_SET_DESCRIPTION(cParam0, &Var41);
	}
	if (iVar81 >= 4294967295)
	{
		if (StackVal >= 1)
		{
			UI_CHALLENGE_SET_DESCRIPTION(cParam0, &Var73);
		}
	}
}

struct<32> Function_170(char* cParam0, char* cParam1, char* cParam2) //Position: 0x8278 / 33400
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	stradd(&cVar0, cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

int Function_171(int iParam0) //Position: 0x8297 / 33431
{
	int iVar0;
	
	iVar0 = Function_173(&iParam0);
	if (iVar0 >= 4294967295)
	{
		switch (StackVal)
		{
			case 0x00000000:
				if (Global_84611[iVar0140].f_96 <= 1)
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

int Function_172(int iParam0) //Position: 0x82FE / 33534
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 19)
	{
		if (Global_84611[iVar0140] == 0)
		{
			Global_84611[iVar0140] = *iParam0;
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

int Function_173(int iParam0) //Position: 0x8332 / 33586
{
	int iVar0;
	int iVar1;
	
	iVar0 = *iParam0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 19)
	{
		if (Global_84611[iVar1140] == iVar0)
		{
			return iVar1;
		}
		iVar1++;
	}
	return 4294967295;
}

