//Decompiled with MagicRDR v1.0
//Function Count : 180
//Statics Count : 37
//Natives Count : 165
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
	var uLocal_23 = 0;
	int iLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	int iLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	int iLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	int iLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
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
	iVar168 = Function_179(&iScriptParam_0);
	iVar171 = 1;
	iVar172 = 0;
	iVar173 = 0;
	iVar175 = 4294967295;
	if (iVar168 == 4294967295)
	{
		iVar168 = Function_178(&iScriptParam_0);
		Function_174(&iScriptParam_0, iVar168);
	}
	Global_84611[iVar168140].f_72 = 1;
	Var0.f_12 = SC_CHALLENGE_GET_LEADERBOARD_ID(iScriptParam_0, 0);
	uVar170 = Var0.f_12;
	Global_84611[iVar168140].f_88 = uVar170;
	while (((((!IS_EXITFLAG_SET() && iVar171) && !Function_173()) && Global_88795) && Function_169(iScriptParam_0)) && !UI_HAS_CHEATED())
	{
		switch (iVar167)
		{
			case 0x00000000:
				Function_168(&Var0);
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
						(&Var0 + 360[015])->f_20 = (((Function_167((183 + 15)) + Function_167((183 + 16))) + Function_167((183 + 17))) + Function_167((183 + 18)));
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
						(&Var0 + 360[015])->f_20 = Function_167(45);
						(&Var0 + 360[115])->f_20 = (Function_167((183 + 22)) + Function_167((183 + 25)));
						(&Var0 + 360[215])->f_20 = Function_167(46);
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
						(&Var0 + 360[215])->f_20 = Function_167(89);
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
						(&Var0 + 360[115])->f_20 = Function_167((183 + 25));
						(&Var0 + 360[215])->f_20 = Global_34581[467];
						break;
					
					case 0x00000007:
						(&Var0 + 360[015])->f_20 = (Function_167((183 + 22)) + Function_167((183 + 25)));
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
				Function_174(&iScriptParam_0, iVar168);
				iVar167 = 1;
				break;
			
			case 0x00000001:
				iVar167 = 3;
			
			case 0x00000003:
				switch (Var0.f_288)
				{
					case 0x00000000:
						if (Function_159(Function_162(0, Global_30679[1], 3)) == 2)
						{
							Var0.f_256 = 1;
							iVar167 = 3;
						}
						if (Var0.f_256)
						{
							Function_153(&Var0, iScriptParam_0, &Var0 + 316);
							iVar167 = 3;
						}
						break;
					
					case 0x00000001:
						if (Function_159(Function_162(0, Global_30640[2], 3)) == 2)
						{
							Var0.f_256 = 1;
							iVar167 = 3;
						}
						if (Var0.f_256)
						{
							Function_149(&Var0, iScriptParam_0, &Var0 + 316);
							iVar167 = 3;
						}
						break;
					
					case 0x00000002:
						if (Function_159(Function_162(0, Global_30658[3], 3)) == 2)
						{
							Var0.f_256 = 1;
							iVar167 = 3;
						}
						if (Var0.f_256)
						{
							Function_145(&Var0, iScriptParam_0, &Var0 + 316);
							iVar167 = 3;
						}
						break;
					
					case 0x00000003:
						if (Function_159(Function_162(0, Global_30668[2], 3)) == 2)
						{
							Var0.f_256 = 1;
							iVar167 = 3;
						}
						if (Var0.f_256)
						{
							Function_141(&Var0, iScriptParam_0, &Var0 + 316);
							iVar167 = 3;
						}
						break;
					
					case 0x00000004:
						if (Function_159(Function_162(0, Global_30685[1], 3)) == 2)
						{
							Var0.f_256 = 1;
							iVar167 = 3;
						}
						if (Var0.f_256)
						{
							Function_137(&Var0, iScriptParam_0, &Var0 + 316);
							iVar167 = 3;
						}
						break;
					
					case 0x00000005:
						if (Function_159(Function_162(0, Global_30658[2], 3)) == 2)
						{
							Var0.f_256 = 1;
							iVar167 = 3;
						}
						if (Var0.f_256)
						{
							Function_133(&Var0, iScriptParam_0, &Var0 + 316);
							iVar167 = 3;
						}
						break;
					
					case 0x00000006:
						if (Function_159(Function_162(0, Global_30685[2], 3)) == 2)
						{
							Var0.f_256 = 1;
							iVar167 = 3;
						}
						if (Var0.f_256)
						{
							Function_128(&Var0, iScriptParam_0, &Var0 + 316);
							iVar167 = 3;
						}
						break;
					
					case 0x00000007:
						if (Function_159(Function_162(0, Global_30658[0], 3)) == 2)
						{
							Var0.f_256 = 1;
							iVar167 = 3;
						}
						if (Var0.f_256)
						{
							Function_124(&Var0, iScriptParam_0, &Var0 + 316);
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
							Function_119(&Var0, iScriptParam_0, &Var0 + 316);
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
							Function_110(&Var0, iScriptParam_0, &Var0 + 316);
							iVar167 = 3;
						}
						break;
				}
				if ((*&Global_84611[iVar168140] + 144)[412] < 3300.0f)
				{
					Var0.f_256 = 0;
					Var0.f_260 = 1;
					iVar167 = 4;
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
						if ((*&Global_84611[iVar168140] + 144)[412] < 0.0f)
						{
							Function_108(iScriptParam_0, &Var0);
						}
						Var0.f_284 = 1;
					}
					if (!Function_107(&iLocal_30) && !Var0.f_280)
					{
						Function_105(&iLocal_30);
					}
					if ((Function_102(&iLocal_30, 7.0f) && !Global_63096) && !Var0.f_280)
					{
						Function_99(StackVal, iScriptParam_0);
						(*&Global_84611[iVar168140] + 144)[312] = (*&Global_84611[iVar168140] + 144)[412];
						Function_98(&iLocal_30);
						Var0.f_280 = 1;
					}
					if ((!Function_107(&iLocal_27) && !Function_107(&iLocal_30)) && !Var0.f_276)
					{
						Function_105(&iLocal_27);
					}
					if (Function_102(&iLocal_27, 7.0f) && !Var0.f_276)
					{
						if (StackVal > 2)
						{
							Function_49(iScriptParam_0);
						}
						Function_98(&iLocal_27);
						Var0.f_276 = 1;
						if (!Function_48(0, 0, 1, 1))
						{
							Function_6(1);
						}
						iVar167 = 5;
					}
					else
					{
						iVar167 = 4;
					}
				}
				else if (Var0.f_260 && NET_MAILBOX_IS_SIGNED_INTO_SC())
				{
					Function_5(iScriptParam_0);
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
		Function_5(iScriptParam_0);
		Function_1("SC_CHALLENGE_FAIL_MSG", 6.0f, 1, 0, 2, 1, 0);
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0xB7C / 2940
{
	struct<4> Var0;
	int iVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_2(Global_6269) };
		}
		PRINT_HELP_B(bParam0, iParam1, iParam2, iParam3, iParam4, iParam5, &Var0, iParam6);
	}
	else
	{
		iVar4 = "";
		PRINT_HELP_B(bParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iVar4, iParam6);
	}
}

struct<16> Function_2(int iParam0) //Position: 0xBF7 / 3063
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

bool Function_3() //Position: 0xC36 / 3126
{
	if (Function_4(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

bool Function_4(bool bParam0, int iParam1) //Position: 0xC51 / 3153
{
	return (bParam0 && iParam1) == 0;
}

void Function_5(int iParam0) //Position: 0xC5E / 3166
{
	int iVar0;
	int iVar1;
	
	iVar0 = Function_179(&iParam0);
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

void Function_6(bool bParam0) //Position: 0xCDB / 3291
{
	if ((Global_3395 || Global_3381) || Global_3396)
	{
		return;
	}
	Global_34165.f_24 = 4294967295;
	Function_37();
	Global_34165.f_28 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_8();
	SAVE_SOFT_SAVE(0);
	if (bParam0)
	{
		Function_7(&Global_63095, 1);
		Function_7(&Global_63095, 2);
	}
	Global_88793 = 1;
	return;
}

void Function_7(int iParam0, int iParam1) //Position: 0xD2C / 3372
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
	return;
}

void Function_8() //Position: 0xD3F / 3391
{
	Function_35();
	Function_34();
	Function_34();
	Function_33();
	Function_33();
	Function_32();
	Function_32();
	Function_16(0);
	Function_16(0);
	if (!Function_173())
	{
		Function_13();
		Function_12();
		Function_11();
		Function_10();
		if (Global_74542[19910].f_16 != 1 || UI_HAS_CHEATED())
		{
			Global_74542[19910].f_16 = 1;
		}
	}
	Function_9();
	return;
}

void Function_9() //Position: 0xD91 / 3473
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

void Function_10() //Position: 0xE97 / 3735
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

void Function_11() //Position: 0xECA / 3786
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

void Function_12() //Position: 0x1058 / 4184
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

void Function_13() //Position: 0x120C / 4620
{
	Function_14(&Global_28260, 1, 0);
	return;
}

void Function_14(int iParam0, bool bParam1, var uParam2) //Position: 0x121A / 4634
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
	
	bVar0 = Function_15();
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

var Function_15() //Position: 0x140B / 5131
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

struct<8> Function_16(int iParam0) //Position: 0x1420 / 5152
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
					iVar2 = ((Function_31((50 + iVar4)) + Function_31((183 + iVar4))) + Function_31((90 + iVar4)));
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
	Function_17(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_17(int iParam0, bool bParam1, bool bParam2) //Position: 0x14C6 / 5318
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
		Function_30(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_29(iParam0);
	if (bParam2)
	{
		Function_18(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_18(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7) //Position: 0x1761 / 5985
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_28(390))), 32);
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
					bVar19 = (Function_167(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_167(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_26(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, false, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_23(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_21(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_20(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_19(), &Var9);
						}
						break;
						break;
						if (iParam0 == 0)
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, bParam5, "", 2, 4294967295, 0, iVar2, 0, 1, false, false, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, bParam5, "", 2, 4294967295, 0, iVar2, 0, 0, false, false, 0);
						}
						break;
					}
			}
	}
}

var Function_19() //Position: 0x1D8E / 7566
{
	int iVar0;
	
	return iVar0;
}

var Function_20(int iParam0) //Position: 0x1D96 / 7574
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_21(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x1DA7 / 7591
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_22("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_22("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_22("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_22(char* cParam0, bool bParam1) //Position: 0x1E9C / 7836
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_23(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x1EB5 / 7861
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_25(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_24(Function_25(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_24(int iParam0, int iParam1) //Position: 0x1F1A / 7962
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_25(int iParam0, bool bParam1) //Position: 0x1F2C / 7980
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_26(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x1F3E / 7998
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
	if (((Function_27(iParam0) != 19 || Function_27(iParam0) != 17) || Function_27(iParam0) != 10) || Function_27(iParam0) != 9)
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

int Function_27(int iParam0) //Position: 0x206E / 8302
{
	return Global_35278[iParam020].f_48;
}

var Function_28(int iParam0) //Position: 0x207D / 8317
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_29(int iParam0) //Position: 0x20BA / 8378
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

int Function_30(int iParam0, bool bParam1, bool bParam2) //Position: 0x2254 / 8788
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

int Function_31(bool bParam0) //Position: 0x2498 / 9368
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

struct<8> Function_32() //Position: 0x24D9 / 9433
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
		iVar2 = ((Function_31((50 + iVar3) + 15) + Function_31((183 + iVar3) + 15)) + Function_31((90 + iVar3) + 15));
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
	Function_17(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_33() //Position: 0x2562 / 9570
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
			iVar2 = ((Function_31((50 + iVar3) + 8) + Function_31((183 + iVar3) + 8)) + Function_31((90 + iVar3) + 8));
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
	Function_17(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_34() //Position: 0x25F9 / 9721
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
		iVar2 = ((Function_31((50 + iVar3)) + Function_31((183 + iVar3))) + Function_31((90 + iVar3)));
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
	Function_17(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_35() //Position: 0x2678 / 9848
{
	if (Global_49308 > 0.1f)
	{
		Global_49308 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_36(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_17(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_36(int iParam0, bool bParam1, int iParam2) //Position: 0x26B1 / 9905
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
	Function_30(iParam0, bParam1, 1);
	Function_29(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_18(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

void Function_37() //Position: 0x28BB / 10427
{
	vector3 vVar0;
	var uVar3;
	
	Global_34165.f_24 = 4294967295;
	if (Function_3())
	{
		Function_45(&Global_34165 + 12, &Global_34165 + 16);
		vVar0 = { StackVal, StackVal, Function_45(&Global_34165 + 12, &Global_34165 + 16) };
	}
	else
	{
		Function_39(&Global_34165 + 12, &Global_34165 + 16, 0, 0);
		vVar0 = { StackVal, StackVal, Function_39(&Global_34165 + 12, &Global_34165 + 16, 0, 0) };
	}
	if (Function_38(StackVal, StackVal, vVar0))
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

bool Function_38(vector3 vParam0) //Position: 0x2976 / 10614
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_39(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x298E / 10638
{
	int iVar0;
	
	iVar0 = Function_43(uParam2, uParam3);
	if (Function_42(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_34165.f_24 = Global_29005;
			Function_41(&Global_63095, 1);
			Function_7(&Global_63095, 2);
			Global_63084 = { StackVal, StackVal, Global_16537[iVar021] };
			*uParam1 = 0;
		}
		else
		{
			Function_41(&Global_63095, 2);
			Function_7(&Global_63095, 1);
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
		Function_41(&Global_63095, 2);
		Function_7(&Global_63095, 1);
		*uParam1 = 1;
		*uParam0 = 290.0f;
		return -2833.843f, 50.332f, 2418.003f;
	}
	Function_40();
	return StackVal, StackVal, Function_40();
}

vector3 Function_40() //Position: 0x2A75 / 10869
{
	return 0.0f, 0.0f, 0.0f;
}

void Function_41(int iParam0, int iParam1) //Position: 0x2A7E / 10878
{
	*iParam0 = (*iParam0 || iParam1);
	return;
}

bool Function_42(int iParam0) //Position: 0x2A8D / 10893
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_43(bool bParam0, bool bParam1) //Position: 0x2AA3 / 10915
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
				fVar2 = Function_44(StackVal, StackVal, StackVal, StackVal, Global_34574, Global_16537[iVar321]);
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
		fVar2 = Function_44(StackVal, StackVal, Global_34574, -2833.843f, 50.332f, 2418.003f);
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_42(bVar0) && !bParam1)
	{
		bVar0 = Function_43(bParam0, 1);
	}
	return bVar0;
}

float Function_44(vector3 vParam0, vector3 vParam3) //Position: 0x2B6A / 11114
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

vector3 Function_45(var uParam0, int iParam1) //Position: 0x2B87 / 11143
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	bool bVar10;
	
	*uParam0 = *uParam0;
	bVar0 = 99999.99f;
	vVar1 = { 0.0f, 0.0f, 0.0f };
	Function_47(Global_34573, &vVar4);
	if (!Function_46(Global_30640[0]))
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
	if (!Function_46(Global_30640[2]))
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
	if (!Function_46(Global_30640[1]))
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
	if (!Function_46(Global_30658[1]))
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
	if (!Function_46(Global_30658[3]))
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
	if (!Function_46(Global_30658[2]))
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
	if (!Function_46(Global_30658[4]))
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
	if (!Function_46(Global_30668[0]))
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
	if (!Function_46(Global_30668[1]))
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
	if (!Function_46(Global_30668[2]))
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
	if (!Function_46(Global_30679[0]))
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
	if (!Function_46(Global_30685[0]))
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
	if (!Function_46(Global_30685[1]))
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
	if (!Function_46(Global_30685[2]))
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
	if (!Function_46(Global_30693[0]))
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
	if (!Function_46(Global_30693[1]))
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
	if (!Function_46(Global_30693[2]))
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
	if (!Function_46(Global_30707[2]))
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
	if (!Function_46(Global_30707[3]))
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
	if (!Function_46(Global_30707[0]))
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
	if (!Function_46(Global_30717[0]))
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
	if (!Function_46(Global_30723[2]))
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
	if (!Function_46(Global_30723[1]))
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
	if (!Function_46(Global_30723[0]))
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
	if (!Function_46(Global_30679[1]))
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
	if (!Function_46(Global_30707[1]))
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
	Function_41(&Global_63095, 2);
	Function_7(&Global_63095, 1);
	*iParam1 = 0;
	if (Function_38(StackVal, StackVal, vVar1))
	{
		vVar1 = { -63.861f, 116.861f, 1414.684f };
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(vVar1);
	PRINTNL();
	return StackVal, StackVal, vVar1;
}

bool Function_46(int iParam0) //Position: 0x33AC / 13228
{
	var uVar0;
	
	uVar0 = Global_29008[iParam0];
	return (((Function_4(uVar0, 0x1000000) || Function_4(uVar0, 0x2000000)) || Function_4(uVar0, 0x4000000)) || !Function_4(uVar0, 0x10000000));
}

void Function_47(bool bParam0, bool bParam1) //Position: 0x33E7 / 13287
{
	GET_POSITION(bParam0, bParam1);
	return;
}

bool Function_48(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x33F4 / 13300
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

void Function_49(char* cParam0) //Position: 0x3498 / 13464
{
	int iVar0;
	
	if (SC_CHALLENGE_IS_VAR_VALID(cParam0, "nAAID"))
	{
		iVar0 = SC_CHALLENGE_GET_VAR_INT(cParam0, "nAAID");
		switch (iVar0)
		{
			case 0x00000000:
				Function_50(29);
				break;
			
			case 0x00000001:
				Function_50(17);
				break;
			
			case 0x00000002:
				Function_50(18);
				break;
			
			case 0x00000003:
				Function_50(24);
				break;
			
			case 0x00000004:
				Function_50(26);
				break;
			
			case 0x00000005:
				Function_50(13);
				break;
			
			case 0x00000006:
				Function_50(25);
				break;
			
			case 0x00000007:
				Function_50(19);
				break;
			
			case 0x00000008:
				Function_50(20);
				break;
			
			case 0x00000009:
				Function_50(14);
				break;
			}
	}
	return;
}

void Function_50(int iParam0) //Position: 0x3550 / 13648
{
	bool bVar0;
	struct<4> Var1;
	
	if (!Function_97(iParam0) && (NET_IS_IN_SESSION() || Function_173()))
	{
		return;
	}
	bVar0 = true;
	switch (iParam0)
	{
		case 0x00000001:
			if (Function_96(3))
			{
				if (!Function_95(1))
				{
					if (!Function_94(2, 0))
					{
						return;
					}
					Function_93(1, 0, 0);
				}
			}
			break;
		
		case 0x00000004:
			if (Function_96(3))
			{
				if (!Function_95(2) && !Function_92(2))
				{
					Function_91(2, 0, 1, 1, 1);
					Function_63(2, 1);
					bVar0 = false;
				}
			}
			break;
		
		case 0x00000009:
			if (!Global_26055[iParam0])
			{
				Function_62(992, 0, 1);
				Function_60(52, 1, 0);
			}
			break;
		
		case 0x0000000A:
			SET_WEAPON_GOLD(Global_34573, 4, 1);
			SET_WEAPON_GOLD(Global_34573, 8, 1);
			break;
		
		case 0x0000000D:
			UI_CHEAT_SET_STATE(4, 1);
			Function_54(4);
			break;
		
		case 0x0000000E:
			UI_CHEAT_SET_STATE(25, 1);
			Function_54(4);
			break;
		
		case 0x0000000F:
			UI_CHEAT_SET_STATE(7, 1);
			Function_54(4);
			break;
		
		case 0x00000010:
			UI_CHEAT_SET_STATE(11, 1);
			Function_54(4);
			break;
		
		case 0x00000011:
			UI_CHEAT_SET_STATE(13, 1);
			Function_54(4);
			break;
		
		case 0x00000012:
			UI_CHEAT_SET_STATE(16, 1);
			Function_54(4);
			break;
		
		case 0x00000013:
			UI_CHEAT_SET_STATE(17, 1);
			Function_54(4);
			break;
		
		case 0x00000014:
			UI_CHEAT_SET_STATE(18, 1);
			Function_54(4);
			break;
		
		case 0x00000015:
			UI_CHEAT_SET_STATE(24, 1);
			Function_54(4);
			break;
		
		case 0x00000016:
			UI_CHEAT_SET_STATE(26, 1);
			Function_54(4);
			break;
		
		case 0x00000017:
			UI_CHEAT_SET_STATE(22, 1);
			Function_54(4);
			break;
		
		case 0x00000018:
			UI_CHEAT_SET_STATE(28, 1);
			Function_54(4);
			break;
		
		case 0x00000019:
			UI_CHEAT_SET_STATE(35, 1);
			Function_54(4);
			break;
		
		case 0x0000001A:
			UI_CHEAT_SET_STATE(36, 1);
			Function_54(4);
			break;
		
		case 0x0000001B:
			UI_CHEAT_SET_STATE(37, 1);
			Function_54(4);
			break;
		
		case 0x0000001C:
			UI_CHEAT_SET_STATE(38, 1);
			Function_54(4);
			break;
		
		case 0x0000001D:
			UI_CHEAT_SET_STATE(39, 1);
			Function_54(4);
			break;
		
		case 0x0000001E:
			UI_CHEAT_SET_STATE(23, 1);
			Function_54(4);
			break;
		
		case 0x00000023:
			if (Function_48(0, 0, 1, 1))
			{
				return;
			}
			if (NET_IS_IN_SESSION())
			{
				Function_52(8);
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
			if (!Function_94(2, 0))
			{
				return;
			}
			Function_51(11);
			break;
		
		case 0x00000000:
			if (!Function_94(2, 0))
			{
				return;
			}
			Function_51(6);
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

void Function_51(int iParam0) //Position: 0x3898 / 14488
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

void Function_52(int iParam0) //Position: 0x38CF / 14543
{
	Function_53(&Global_83864 + 1252, iParam0);
	return;
}

void Function_53(int iParam0, int iParam1) //Position: 0x38E1 / 14561
{
	Function_41(iParam0, iParam1);
	return;
}

int Function_54(bool bParam0) //Position: 0x38EE / 14574
{
	struct<4> Var0;
	
	if (bParam0 != 4)
	{
		if (Function_59("xmlsave"))
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
			Var0 = { StackVal, StackVal, StackVal, Function_55() };
			SAVE_MANAGER_CREATE_SAVE_DISPLAY_NAME(&Var0);
		}
		else
		{
			SAVE_MANAGER_CREATE_SAVE_DISPLAY_NAME(&Global_3422[Global_626940] + 12);
		}
	}
	if (bParam0 != 4)
	{
		Function_8();
	}
	SAVE_MANAGER_HARD_SAVE(SS_GET_STRING(3, bParam0));
	return 1;
}

struct<16> Function_55() //Position: 0x3955 / 14677
{
	int iVar0;
	int iVar1;
	
	iVar1 = 4294967295;
	iVar0 = 0;
	while (iVar0 <= 38)
	{
		if (Function_58(iVar0))
		{
			if (iVar1 == 4294967295)
			{
				iVar1 = iVar0;
			}
			else if (Global_74542[iVar010].f_32 < Global_74542[iVar110].f_32)
			{
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar1 == 4294967295)
	{
		return StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12);
	}
	if (Global_13172[Function_56(Global_6269)11].f_32 < Global_74542[iVar110].f_32)
	{
		return StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12);
	}
	return StackVal, StackVal, StackVal, *(&Global_63541[iVar155] + 4);
}

int Function_56(int iParam0) //Position: 0x39F1 / 14833
{
	if (!Function_57(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_57(int iParam0) //Position: 0x3A0B / 14859
{
	if (iParam0 >= 0 || iParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

bool Function_58(int iParam0) //Position: 0x3A21 / 14881
{
	if (Global_74542[iParam010] == 6)
	{
		return 1;
	}
	return 0;
}

bool Function_59(bool bParam0) //Position: 0x3A36 / 14902
{
	bool bVar0;
	
	bVar0 = _GET_PARAM_VALUE(cParam0, "blah");
	if (IS_STRING_VALID(bVar0))
	{
		return 1;
	}
	return 0;
}

int Function_60(bool bParam0, bool bParam1, int iParam2) //Position: 0x3A55 / 14933
{
	if (bParam0 >= 4294967295 || bParam0 <= 79)
	{
		return 0;
	}
	if (bParam1)
	{
		if (GET_ITEM_COUNT(Function_61(bParam0), Function_15()) == 0)
		{
			ADD_ITEM(Function_61(bParam0), Function_15(), iParam2);
			return 1;
		}
	}
	ADD_ITEM(Function_61(bParam0), Function_15(), iParam2);
	return 1;
}

var Function_61(bool bParam0) //Position: 0x3AA0 / 15008
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

void Function_62(var uParam0, bool bParam1, bool bParam2) //Position: 0x3B91 / 15249
{
	Global_13038 = uParam0;
	if (bParam1)
	{
		Function_41(&Global_12976 + 36 + 20, 128);
	}
	if (bParam2)
	{
		Function_41(&Global_12976 + 36 + 20, 64);
	}
	return;
}

void Function_63(bool bParam0, bool bParam1) //Position: 0x3BBE / 15294
{
	int iVar0;
	int iVar1;
	
	if (Function_58(20))
	{
		Function_66(bParam0, 16, 1, 0, bParam1);
	}
	iVar0 = Function_162(0, Global_30640[2], 3);
	iVar1 = Function_64(iVar0);
	if (iVar1 >= 0)
	{
		Function_66(bParam0, 2, 1, 0, bParam1);
	}
	return;
}

var Function_64(int iParam0) //Position: 0x3BFB / 15355
{
	if (!Function_65(iParam0))
	{
		return 4294967295;
	}
	return Global_13172[iParam011].f_12;
}

bool Function_65(int iParam0) //Position: 0x3C15 / 15381
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

void Function_66(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x3C2C / 15404
{
	char* cVar0[32];
	struct<8> Var8;
	
	strcpy(&cVar0, "OUT_", 32);
	stradd(&cVar0, &Global_27774[bParam013] + 32, 32);
	if (!Function_90(bParam0))
	{
		LOG_ERROR("Attempting to add scrap to invalid outfit");
		return;
	}
	if (!Function_96(3) || iParam3)
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_89(bParam0, 2))
	{
		Function_88(456, 1, 0, 0);
		Function_87(bParam0, 2);
		if (!bParam2)
		{
			Var8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
			stradd(&Var8, "_tip", 32);
			Function_1(&Var8, 10.0f, 1, 0, 0, 1, 0);
		}
	}
	bParam2 = bParam2;
	if (!Function_86(bParam0, bParam1))
	{
		Global_27774[bParam013].f_4 = (StackVal || bParam1);
		Function_87(bParam0, 1048576);
		if (bParam4)
		{
			if (!Function_48(0, 0, 1, 1))
			{
				Function_6(1);
				Function_85(1, 0);
			}
			else
			{
				Function_84();
			}
		}
		Function_79(bParam0);
		if (StackVal && !Function_4(((((!Function_78() && !Global_3380) && !Global_3392) && !Global_3384) && !bParam2), 1))
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Edit", &cVar0, false, false, false, 0, 2, 0, 0, 0);
		}
		else if (StackVal || Function_4((((Function_78() || Global_3380) || Global_3392) || Global_3384), 1))
		{
			if (!DECOR_CHECK_EXIST(Global_34573, "outfitScrap"))
			{
				DECOR_SET_INT(Global_34573, "outfitScrap", bParam0);
			}
		}
		if (!Function_3())
		{
			if (!Function_77(Global_76846, 2))
			{
				Function_72(Global_34573, 2, 1, 0);
			}
		}
		if (Global_28180 == bParam0)
		{
			Global_28180.f_12 = 1;
			Function_69();
		}
		Global_28180.f_12 = 1;
		switch (bParam0)
		{
			case 0x00000004:
				Function_68(3, bParam1);
				break;
			
			case 0x00000005:
				Function_68(3, SHIFT_LEFT(bParam1, 6));
				break;
			
			case 0x00000006:
				Function_68(3, SHIFT_LEFT(bParam1, 12));
				break;
			
			case 0x00000007:
				Function_68(3, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x00000008:
				Function_68(3, SHIFT_LEFT(bParam1, 24));
				break;
			
			case 0x00000009:
				Function_68(2, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x0000000A:
				Function_67(2, 24);
				break;
			
			case 0x00000003:
				Function_67(2, 25);
				break;
			
			case 0x0000000F:
				Function_67(2, 26);
				break;
			
			case 0x0000000D:
				Function_67(2, 27);
				break;
			
			case 0x0000000E:
				Function_67(2, 28);
				break;
			}
	}
}

void Function_67(int iParam0, bool bParam1) //Position: 0x3EC2 / 16066
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

void Function_68(int iParam0, bool bParam1) //Position: 0x3F29 / 16169
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

void Function_69() //Position: 0x3F94 / 16276
{
	if (Function_90(Global_28180))
	{
		if (Global_28180.f_12)
		{
			if (IS_BLIP_VALID(StackVal))
			{
				REMOVE_BLIP(StackVal);
			}
			Global_28180.f_4 = Function_71(Global_28180);
			Global_28180.f_8 = Function_70(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
		else if (!IS_BLIP_VALID(StackVal))
		{
			Global_28180.f_4 = Function_71(Global_28180);
			Global_28180.f_8 = Function_70(Global_28180, *((&Global_28180 + 4)));
			Global_28180.f_12 = 0;
		}
	}
	return;
}

var Function_70(int iParam0, int iParam1) //Position: 0x4011 / 16401
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
					if (Function_94(6, 0) || Function_94(12, 0))
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
					if (Function_58(13) && iVar16)
					{
						bVar6 = StackVal;
						iVar16 = 0;
					}
					else if (iVar16 && Function_94(5, 0))
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
					if (Function_58(26) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_58(25) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_58(24) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_58(23) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (iVar17 && Function_94(26, 0))
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
					if (Function_58(55) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_58(54) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_58(27) && iVar18)
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
					if (Function_58(52) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_58(51) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_58(50) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_58(49) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_94(17, 0) && iVar15)
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
					if (Function_58(19) && iVar19)
					{
						vVar0 = { -1708.36f, 46.18f, 2175.89f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_94(6, 0) && Function_58(18)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_58(17) && iVar19)
					{
						vVar0 = { -1687.208f, 53.208f, 2140.491f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_94(9, 0) && Function_58(16)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_58(15) && iVar19)
					{
						vVar0 = { -1709.084f, 55.216f, 2104.631f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if (Function_94(8, 0) && iVar19)
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
	if (Function_38(StackVal, StackVal, vVar0))
	{
		if (IS_OBJECT_VALID(bVar6))
		{
			GET_OBJECT_POSITION(bVar6, &vVar0);
			if (Function_38(StackVal, StackVal, vVar3))
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
	if (!Function_38(StackVal, StackVal, vVar3))
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

int Function_71(int iParam0) //Position: 0x4C02 / 19458
{
	int iVar0;
	int iVar1;
	
	if (!Function_90(iParam0))
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

void Function_72(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x4C51 / 19537
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_74(bParam0, iParam1, iParam2) && !bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_73(&cVar1, iParam2);
	if (!DECOR_CHECK_EXIST(bParam0, &cVar1))
	{
		DECOR_SET_INT(bParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(bParam0, &cVar1, (DECOR_GET_INT(bParam0, &cVar1) || bVar0));
	}
}

void Function_73(char* cParam0, int iParam1) //Position: 0x4CBD / 19645
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

bool Function_74(bool bParam0, var uParam1, int iParam2) //Position: 0x4CF4 / 19700
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
		if (Function_76(DECOR_GET_INT(bParam0, &cVar1)) > 3)
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
		switch (Function_75(uVar0))
		{
			case 0x00000002:
				if (!Function_77(Global_76847, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_75(char* cParam0) //Position: 0x4D6C / 19820
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

int Function_76(int iParam0) //Position: 0x4E0D / 19981
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_7(&iVar1, 2147483648);
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

bool Function_77(int iParam0, int iParam1) //Position: 0x4E4A / 20042
{
	if ((iParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

bool Function_78() //Position: 0x4E5D / 20061
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

void Function_79(bool bParam0) //Position: 0x4E8A / 20106
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
			if (Function_86(bParam0, Function_83(bVar24)))
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
			if (Function_86(bParam0, Function_83(bVar24)))
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
		SET_JOURNAL_ENTRY_PROGRESS(Global_27774[bParam013].f_48, (TO_FLOAT(Function_82(bParam0)) / TO_FLOAT(Global_27774[bParam013].f_28)), false, 0);
		Function_81(Global_27774[bParam013].f_48, 0);
		straddi(&cVar8, Function_80(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_27774[bParam013].f_48, &cVar8, 3);
	}
	return;
}

int Function_80(int iParam0) //Position: 0x503A / 20538
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_90(iParam0))
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

void Function_81(bool bParam0, bool bParam1) //Position: 0x5091 / 20625
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

var Function_82(int iParam0) //Position: 0x50B6 / 20662
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_90(iParam0))
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

int Function_83(bool bParam0) //Position: 0x510C / 20748
{
	return SHIFT_LEFT(true, bParam0);
}

void Function_84() //Position: 0x5118 / 20760
{
	return;
}

void Function_85(int iParam0, int iParam1) //Position: 0x511E / 20766
{
	if (Global_3381)
	{
		return;
	}
	Global_3412 = iParam0;
	Global_3416 = iParam1;
	if (!Global_3365 && !Function_173())
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", true);
	return;
}

bool Function_86(bool bParam0, int iParam1) //Position: 0x5160 / 20832
{
	int iVar0;
	
	if (!Function_90(bParam0))
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

void Function_87(bool bParam0, int iParam1) //Position: 0x51BF / 20927
{
	if (!Function_90(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_27774[bParam013].f_8 = (StackVal || iParam1);
	return;
}

int Function_88(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x5214 / 21012
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
	Function_30(iParam0, TO_FLOAT(bParam1), 1);
	Function_29(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_18(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, iParam3);
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

bool Function_89(int iParam0, int iParam1) //Position: 0x5434 / 21556
{
	int iVar0;
	
	if (!Function_90(iParam0))
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

bool Function_90(int iParam0) //Position: 0x5461 / 21601
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

void Function_91(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x5477 / 21623
{
	struct<8> Var0;
	
	if (!Function_90(bParam0))
	{
		LOG_ERROR("Attempting to discover invalid outfit");
		return;
	}
	if (!Function_96(3) && !bParam4)
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_92(bParam0))
	{
		Function_88(456, 1, 0, 0);
		Function_87(bParam0, 2);
		if (bParam2)
		{
			if (!Function_48(0, 0, 1, 1))
			{
				Function_6(1);
				Function_85(1, 5);
			}
			else
			{
				Function_84();
			}
		}
		Function_79(bParam0);
		strcpy(&Var0, "OUT_", 32);
		stradd(&Var0, &Global_27774[bParam013] + 32, 32);
		if ((!Function_78() && !bParam1) && !Global_3380)
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Add", &Var0, false, false, false, 0, 2, 0, 0, 0);
		}
		else if (Function_78() || Global_3380)
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
		if (!Function_3())
		{
			if (!Function_77(Global_76846, 2))
			{
				Function_72(Global_34573, 2, 1, 0);
			}
		}
	}
}

bool Function_92(int iParam0) //Position: 0x55CC / 21964
{
	if (!Function_90(iParam0))
	{
		LOG_ERROR("Attempting to check discovery of invalid outfit");
		return 0;
	}
	if (Function_89(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

void Function_93(bool bParam0, bool bParam1, bool bParam2) //Position: 0x561E / 22046
{
	char* cVar0[32];
	char* cVar8[32];
	
	if (!Function_90(bParam0))
	{
		LOG_ERROR("Attempting to mostly complete an invalid outfit");
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_95(bParam0))
	{
		if (!Function_92(bParam0))
		{
			Function_91(bParam0, 1, 0, 0, 1);
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
		Function_88(457, 1, 0, 0);
		Function_87(bParam0, 6);
		if (bParam0 == 3)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(23))
			{
				AWARD_ACHIEVEMENT(23);
			}
		}
		if (bParam2)
		{
			if (!Function_48(0, 0, 1, 1))
			{
				Function_6(1);
				Function_85(1, 0);
			}
			else
			{
				Function_84();
			}
		}
	}
	return;
}

bool Function_94(int iParam0, bool bParam1) //Position: 0x57BD / 22461
{
	int iVar0;
	
	iVar0 = Function_56(iParam0);
	if (!Function_65(iVar0))
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

bool Function_95(int iParam0) //Position: 0x57FA / 22522
{
	if (!Function_90(iParam0))
	{
		LOG_ERROR("Attempting to check wearable on invalid outfit");
		return 0;
	}
	if (Function_89(iParam0, 4))
	{
		return 1;
	}
	return 0;
}

bool Function_96(int iParam0) //Position: 0x584B / 22603
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_25986[iParam0];
}

bool Function_97(int iParam0) //Position: 0x5867 / 22631
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

void Function_98(int iParam0) //Position: 0x588B / 22667
{
	iParam0->f_4 = 0.0f;
	iParam0->f_8 = 0.0f;
	*iParam0 = 0;
	return;
}

void Function_99(int iParam0, int iParam1) //Position: 0x589F / 22687
{
	int iVar0;
	char* cVar1[32];
	
	iVar0 = Function_179(&iParam0);
	cVar1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_100((*&Global_84611[iVar0140] + 144)[212]) };
	UI_SET_STRING("SC_UI_BEST_TIME", &cVar1);
	strcpy(&cVar1, "nSC_TROPHY", 32);
	stradd(&cVar1, I2STR(StackVal), 32);
	UI_SET_STRING("SC_UI_BEST_TROPHY", UI_GET_STRING(&cVar1));
	cVar1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_100((*&Global_84611[iVar0140] + 144)[312]) };
	UI_SET_STRING("SC_UI_LAST_TIME", &cVar1);
	strcpy(&cVar1, "nSC_TROPHY", 32);
	stradd(&cVar1, I2STR(StackVal), 32);
	UI_SET_STRING("SC_UI_LAST_TROPHY", UI_GET_STRING(&cVar1));
	cVar1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_100((*&Global_84611[iVar0140] + 144)[412]) };
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

struct<32> Function_100(var uParam0) //Position: 0x5A44 / 23108
{
	char* cVar0[32];
	int iVar8;
	int iVar9;
	bool bVar10;
	struct<13> Var11;
	
	Var11 = { StackVal, StackVal, StackVal, Function_101(uParam0) };
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

struct<16> Function_101(var uParam0) //Position: 0x5AC4 / 23236
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

int Function_102(int iParam0, float fParam1) //Position: 0x5B35 / 23349
{
	if (Function_107(iParam0))
	{
		if (Function_103(iParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float Function_103(int iParam0) //Position: 0x5B51 / 23377
{
	if (Function_107(iParam0))
	{
		if (Function_104(iParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_104(int iParam0) //Position: 0x5C19 / 23577
{
	return Function_4(*iParam0, 2);
}

void Function_105(int iParam0) //Position: 0x5C26 / 23590
{
	Function_106(iParam0, 0.0f);
	return;
}

void Function_106(var uParam0, float fParam1) //Position: 0x5C32 / 23602
{
	uParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_41(uParam0, 1);
	Function_7(uParam0, 2);
	uParam0->f_8 = 0.0f;
	return;
}

bool Function_107(int iParam0) //Position: 0x5C53 / 23635
{
	return Function_4(*iParam0, 1);
}

void Function_108(int iParam0, int iParam1) //Position: 0x5C60 / 23648
{
	int iVar0;
	
	iVar0 = Function_179(&iParam0);
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
		Function_109(Global_84611[iVar0140].f_88, iVar0, 4294967295, 0);
		(*&Global_84611[iVar0140] + 144)[212] = iParam1->f_320;
		(&Global_84611[iVar0140] + 144[212])->f_4 = iParam1->f_292;
		(*&Global_84611[iVar0140] + 144[212] + 32)[0] = StackVal;
		(*&Global_84611[iVar0140] + 144[212] + 32)[1] = StackVal;
		(*&Global_84611[iVar0140] + 144[212] + 32)[2] = StackVal;
	}
	return;
}

void Function_109(int iParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x5E36 / 24118
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

void Function_110(var uParam0, int iParam1, int iParam2) //Position: 0x5F4F / 24399
{
	int iVar0;
	
	iVar0 = Function_179(&iParam1);
	switch (*iParam2)
	{
		case 0x00000000:
			if (!uParam0->f_268)
			{
				Function_118(iParam1);
				Function_117(iParam1);
				uParam0->f_268 = 1;
			}
			if (!Function_107(&iLocal_24))
			{
				Function_105(&iLocal_24);
			}
			*iParam2 = 1;
			break;
		
		case 0x00000001:
			Function_116(uParam0, iParam1);
			Function_115(uParam0, iParam1);
			Function_113(uParam0, iParam1);
			if (Function_107(&iLocal_24))
			{
				(*&Global_84611[iVar0140] + 144)[412] = Function_103(&iLocal_24);
			}
			if (!Function_112())
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
			if (!Function_112())
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
			if (Function_107(&iLocal_24))
			{
				Function_111(&iLocal_24);
				(*&Global_84611[iVar0140] + 144)[412] = Function_103(&iLocal_24);
				Function_98(&iLocal_24);
			}
			uParam0->f_264 = 1;
			break;
	}
	return;
}

void Function_111(int iParam0) //Position: 0x6045 / 24645
{
	if (Function_107(iParam0))
	{
		if (!Function_104(iParam0))
		{
			iParam0->f_8 = (StackVal - GET_CURRENT_GAME_TIME());
			Function_41(iParam0, 2);
		}
	}
	else
	{
		LOG_ERROR("ERROR: Trying to PAUSE a TIMER that has not been started!");
		PRINTSTRING("WARNING: Trying to PAUSE a TIMER that has not been started! IGNORING COMMAND.\n");
	}
	return;
}

bool Function_112() //Position: 0x6104 / 24836
{
	return IS_ACTOR_ON_TRAIN(Global_34573, 1);
}

void Function_113(int iParam0, int iParam1) //Position: 0x6111 / 24849
{
	if (!StackVal)
	{
		(iParam0 + 360[215])->f_32 = ((Global_34581[138] + Global_34581[27]) - (iParam0 + 360[215])->f_20);
		if (GET_PLAYER_COMBATMODE() == 1 && (iParam0 + 360[215])->f_32 < 0.0f)
		{
			(iParam0 + 360[215])->f_28 = 1.0f;
		}
		if (!Function_112())
		{
			if ((iParam0 + 360[215])->f_28 == 1.0f && (iParam0 + 360[215])->f_32 < 0.0f)
			{
				(iParam0 + 360[215])->f_4 = 1;
				iParam0->f_292++;
			}
		}
	}
	Function_114(iParam1, iParam0, 2);
	return;
}

void Function_114(int iParam0, int iParam1, int iParam2) //Position: 0x61AB / 25003
{
	char* cVar0[24];
	char* cVar6[24];
	
	if (StackVal && !(StackVal && NET_MAILBOX_IS_SIGNED_INTO_SC()))
	{
		(*&Global_84611[Function_179(&iParam0)140] + 144[412] + 32)[iParam2] = 1;
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

void Function_115(int iParam0, int iParam1) //Position: 0x6389 / 25481
{
	if (!StackVal)
	{
		if (IS_PLAYER_DEADEYE(false) && !(iParam0 + 360[115])->f_12)
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
	Function_114(iParam1, iParam0, 1);
	return;
}

void Function_116(int iParam0, int iParam1) //Position: 0x640B / 25611
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
	Function_114(iParam1, iParam0, 0);
	return;
}

void Function_117(int iParam0) //Position: 0x6476 / 25718
{
	bool bVar0;
	struct<8> Var1;
	struct<8> Var9;
	char* cVar17[32];
	int iVar25;
	bool bVar26;
	
	iVar25 = Function_179(&iParam0);
	strcpy(&Var1, "SC_AA", 32);
	if (SC_CHALLENGE_IS_VAR_VALID(iParam0, "bMP"))
	{
		if (SC_CHALLENGE_GET_VAR_BOOL(iParam0, "bMP"))
		{
			Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_22(&Var1, "_MP") };
		}
	}
	else
	{
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_22(&Var1, "_SP") };
	}
	if (SC_CHALLENGE_IS_VAR_VALID(iParam0, "nAAID"))
	{
		bVar0 = SC_CHALLENGE_GET_VAR_INT(iParam0, "nAAID");
	}
	Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_22(&Var1, "_") };
	Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_22(&Var1, I2STR(bVar0)) };
	Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_22(&Var1, "_title") };
	UI_SET_STRING("SC_Challenge_Title", UI_GET_STRING(&Var9));
	if (StackVal && (*&Global_84611[iVar25140] + 144)[212] < 0.0f < 0)
	{
		cVar17 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_100((*&Global_84611[iVar25140] + 144)[212]) };
		UI_SET_STRING("SC_UI_BEST_TIME", &cVar17);
		strcpy(&cVar17, "nSC_TROPHY", 32);
		stradd(&cVar17, I2STR(StackVal), 32);
		UI_SET_STRING("SC_UI_BEST_TROPHY", UI_GET_STRING(&cVar17));
		UI_CHALLENGE_SET_TROPHY_TYPE(StackVal, (iParam0 - (4 - 1)));
		bVar26 = true;
	}
	else if (StackVal && (*&Global_84611[iVar25140] + 144)[312] < 0.0f < 0)
	{
		cVar17 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_100((*&Global_84611[iVar25140] + 144)[312]) };
		UI_SET_STRING("SC_UI_BEST_TIME", &cVar17);
		strcpy(&cVar17, "nSC_TROPHY", 32);
		stradd(&cVar17, I2STR(StackVal), 32);
		UI_SET_STRING("SC_UI_BEST_TROPHY", UI_GET_STRING(&cVar17));
		UI_CHALLENGE_SET_TROPHY_TYPE(StackVal, (iParam0 - (4 - 1)));
		bVar26 = true;
	}
	cVar17 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_100((*&Global_84611[iVar25140] + 144)[512]) };
	UI_SET_STRING("SC_UI_GHOST_TIME", &cVar17);
	strcpy(&cVar17, "nSC_TROPHY", 32);
	stradd(&cVar17, I2STR(StackVal), 32);
	UI_SET_STRING("SC_UI_GHOST_TROPHY", UI_GET_STRING(&cVar17));
	UI_CHALLENGE_SET_TROPHY_TYPE(StackVal, (iParam0 - (4 - 1)));
	UI_SET_STRING("SC_UI_GHOST_GAMERTAG", &Global_84611[iVar25140] + 144[512] + 8);
	cVar17 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_100((*&Global_84611[iVar25140] + 144)[312]) };
	UI_SET_STRING("SC_UI_LAST_TIME", &cVar17);
	strcpy(&cVar17, "nSC_TROPHY", 32);
	stradd(&cVar17, I2STR(StackVal), 32);
	UI_SET_STRING("SC_UI_LAST_TROPHY", UI_GET_STRING(&cVar17));
	if (NET_MAILBOX_IS_SIGNED_INTO_SC())
	{
		if (StackVal && (StackVal || (StackVal != StackVal < (StackVal && (*&Global_84611[iVar25140] + 144)[512] < 0.0f < 0) && (*&Global_84611[iVar25140] + 144)[512] >= (*&Global_84611[iVar25140] + 144)[212])))
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

void Function_118(int iParam0) //Position: 0x6924 / 26916
{
	int iVar0;
	int iVar1;
	
	iVar0 = Function_179(&iParam0);
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

void Function_119(int iParam0, int iParam1, int iParam2) //Position: 0x69D6 / 27094
{
	int iVar0;
	
	iVar0 = Function_179(&iParam1);
	switch (*iParam2)
	{
		case 0x00000000:
			if (!Function_107(&iLocal_24))
			{
				Function_105(&iLocal_24);
			}
			if (!iParam0->f_352)
			{
				Function_118(iParam1);
				iParam0->f_352 = 1;
			}
			if (!iParam0->f_268 && Function_123(iParam0, &iLocal_33))
			{
				Function_117(iParam1);
				iParam0->f_268 = 1;
				*iParam2 = 1;
			}
			break;
		
		case 0x00000001:
			(*&Global_84611[iVar0140] + 144)[412] = Function_103(&iLocal_24);
			Function_122(iParam0, iParam1);
			Function_121(iParam0, iParam1);
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
			if (Function_107(&iLocal_24))
			{
				Function_111(&iLocal_24);
				(*&Global_84611[iVar0140] + 144)[412] = Function_103(&iLocal_24);
				Function_98(&iLocal_24);
			}
			if (Global_34581[0] < (iParam0 + 360[115])->f_20)
			{
				iParam0->f_272 = 1;
				Function_120(iParam0, iParam1);
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

void Function_120(int iParam0, int iParam1) //Position: 0x6B27 / 27431
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
	Function_114(iParam1, iParam0, 2);
	return;
}

void Function_121(int iParam0, int iParam1) //Position: 0x6BBD / 27581
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
	Function_114(iParam1, iParam0, 1);
	return;
}

void Function_122(int iParam0, int iParam1) //Position: 0x6C4C / 27724
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
	Function_114(iParam1, iParam0, 0);
	return;
}

int Function_123(var uParam0, int iParam1) //Position: 0x6CB0 / 27824
{
	if (((((uParam0->f_288 != 1 || uParam0->f_288 != 3) || uParam0->f_288 != 2) || uParam0->f_288 != 6) || uParam0->f_288 != 7) || uParam0->f_288 != 8)
	{
		return 1;
	}
	if (!uParam0->f_356)
	{
		if (!Function_107(iParam1))
		{
			Function_105(iParam1);
		}
		else
		{
			Function_102(iParam1, 7.0f);
			uParam0->f_356 = 1;
			Function_98(iParam1);
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

void Function_124(var uParam0, int iParam1, int iParam2) //Position: 0x6D33 / 27955
{
	switch (*iParam2)
	{
		case 0x00000000:
			if (!Function_107(&iLocal_24))
			{
				Function_105(&iLocal_24);
			}
			if (!uParam0->f_352)
			{
				Function_118(iParam1);
				uParam0->f_352 = 1;
			}
			if (!uParam0->f_268 && Function_123(uParam0, &iLocal_33))
			{
				Function_117(iParam1);
				uParam0->f_268 = 1;
				*iParam2 = 1;
			}
			break;
		
		case 0x00000001:
			Function_127(uParam0, iParam1);
			Function_126(uParam0, iParam1);
			Function_125(uParam0, iParam1);
			if (Function_159(Function_162(0, Global_30658[0], 3)) == 3)
			{
				uParam0->f_272 = 1;
			}
			if (Function_159(Function_162(0, Global_30658[0], 3)) != 3 || Function_159(Function_162(0, Global_30658[0], 3)) != 0)
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
			if (Function_107(&iLocal_24))
			{
				Function_111(&iLocal_24);
				uParam0->f_320 = Function_103(&iLocal_24);
				Function_98(&iLocal_24);
			}
			if (Function_159(Function_162(0, Global_30658[0], 3)) == 0)
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

void Function_125(int iParam0, int iParam1) //Position: 0x6E4E / 28238
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
	Function_114(iParam1, iParam0, 2);
	return;
}

void Function_126(int iParam0, int iParam1) //Position: 0x6EB1 / 28337
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
	Function_114(iParam1, iParam0, 1);
	return;
}

void Function_127(int iParam0, int iParam1) //Position: 0x6F15 / 28437
{
	if (!StackVal)
	{
		(iParam0 + 360[015])->f_28 = ((Function_167((183 + 22)) + Function_167((183 + 25))) - (iParam0 + 360[015])->f_20);
		if (iParam0 + 360[015])->f_28 <= IntToFloat(iParam0->f_324)
		{
			(iParam0 + 360[015])->f_4 = 1;
			iParam0->f_292++;
		}
	}
	Function_114(iParam1, iParam0, 0);
	return;
}

void Function_128(var uParam0, int iParam1, int iParam2) //Position: 0x6F80 / 28544
{
	switch (*iParam2)
	{
		case 0x00000000:
			if (!Function_107(&iLocal_24))
			{
				Function_105(&iLocal_24);
			}
			if (!uParam0->f_352)
			{
				Function_118(iParam1);
				uParam0->f_352 = 1;
			}
			if (!uParam0->f_268 && Function_123(uParam0, &iLocal_33))
			{
				Function_117(iParam1);
				uParam0->f_268 = 1;
				*iParam2 = 1;
			}
			break;
		
		case 0x00000001:
			Function_131(uParam0, iParam1);
			Function_130(uParam0, iParam1);
			Function_129(uParam0, iParam1);
			if (Function_159(Function_162(0, Global_30685[2], 3)) == 3)
			{
				uParam0->f_272 = 1;
			}
			if (Function_159(Function_162(0, Global_30685[2], 3)) != 3 || Function_159(Function_162(0, Global_30685[2], 3)) != 0)
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
			if (Function_107(&iLocal_24))
			{
				Function_111(&iLocal_24);
				uParam0->f_320 = Function_103(&iLocal_24);
				Function_98(&iLocal_24);
			}
			if (Function_159(Function_162(0, Global_30685[2], 3)) == 0)
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

void Function_129(int iParam0, int iParam1) //Position: 0x709B / 28827
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
	Function_114(iParam1, iParam0, 2);
	return;
}

void Function_130(int iParam0, int iParam1) //Position: 0x70FF / 28927
{
	if (!StackVal)
	{
		(iParam0 + 360[115])->f_28 = (Function_167((183 + 25)) - (iParam0 + 360[115])->f_20);
		if (iParam0 + 360[115])->f_28 <= IntToFloat(iParam0->f_328)
		{
			(iParam0 + 360[115])->f_4 = 1;
			iParam0->f_292++;
		}
	}
	Function_114(iParam1, iParam0, 1);
	return;
}

void Function_131(int iParam0, int iParam1) //Position: 0x7162 / 29026
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	if (!StackVal)
	{
		if (IS_PLAYER_DEADEYE(false) && !(iParam0 + 360[015])->f_12)
		{
			(iParam0 + 360[015])->f_12 = 1;
			(iParam0 + 360[015])->f_20 = 0.0f;
		}
		if ((iParam0 + 360[015])->f_12)
		{
			if (!IS_PLAYER_DEADEYE(false))
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
							if ((IS_ACTOR_LOCAL_PLAYER(bVar5) && !Function_132(GET_LAST_HIT_FLAGS(bVar4), 262144)) && !IS_PLAYER_DEADEYE(false))
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
	Function_114(iParam1, iParam0, 0);
	return;
}

bool Function_132(var uParam0, int iParam1) //Position: 0x72D6 / 29398
{
	return (uParam0 && iParam1) == 0;
}

void Function_133(var uParam0, int iParam1, int iParam2) //Position: 0x72E3 / 29411
{
	switch (*iParam2)
	{
		case 0x00000000:
			if (!Function_107(&iLocal_24))
			{
				Function_105(&iLocal_24);
			}
			if (!uParam0->f_352)
			{
				Function_118(iParam1);
				uParam0->f_352 = 1;
			}
			if (!uParam0->f_268 && Function_123(uParam0, &iLocal_33))
			{
				Function_117(iParam1);
				uParam0->f_268 = 1;
				*iParam2 = 1;
			}
			break;
		
		case 0x00000001:
			Function_136(uParam0, iParam1);
			Function_135(uParam0, iParam1);
			Function_134(uParam0, iParam1);
			if (Function_159(Function_162(0, Global_30658[2], 3)) == 3)
			{
				uParam0->f_272 = 1;
			}
			if (Function_159(Function_162(0, Global_30658[2], 3)) != 3 || Function_159(Function_162(0, Global_30658[2], 3)) != 0)
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
			if (Function_107(&iLocal_24))
			{
				Function_111(&iLocal_24);
				uParam0->f_320 = Function_103(&iLocal_24);
				Function_98(&iLocal_24);
			}
			if (Function_159(Function_162(0, Global_30658[2], 3)) == 0)
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

void Function_134(int iParam0, int iParam1) //Position: 0x73FE / 29694
{
	if (!StackVal)
	{
		(iParam0 + 360[215])->f_28 = (Function_167(89) - (iParam0 + 360[215])->f_20);
		if (Function_159(Function_162(0, Global_30658[2], 3)) == 3)
		{
			if (iParam0 + 360[215])->f_28 >= IntToFloat(iParam0->f_332)
			{
				(iParam0 + 360[215])->f_4 = 1;
				iParam0->f_292++;
			}
		}
	}
	Function_114(iParam1, iParam0, 2);
	return;
}

void Function_135(int iParam0, int iParam1) //Position: 0x7471 / 29809
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
	Function_114(iParam1, iParam0, 1);
	return;
}

void Function_136(int iParam0, int iParam1) //Position: 0x754B / 30027
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
	Function_114(iParam1, iParam0, 0);
	return;
}

void Function_137(var uParam0, int iParam1, int iParam2) //Position: 0x75C5 / 30149
{
	switch (*iParam2)
	{
		case 0x00000000:
			if (!Function_107(&iLocal_24))
			{
				Function_105(&iLocal_24);
			}
			if (!uParam0->f_352)
			{
				Function_118(iParam1);
				uParam0->f_352 = 1;
			}
			if (!uParam0->f_268 && Function_123(uParam0, &iLocal_33))
			{
				Function_117(iParam1);
				uParam0->f_268 = 1;
				*iParam2 = 1;
			}
			break;
		
		case 0x00000001:
			Function_140(uParam0, iParam1);
			Function_139(uParam0, iParam1);
			Function_138(uParam0, iParam1);
			if (Function_159(Function_162(0, Global_30685[1], 3)) == 3)
			{
				uParam0->f_272 = 1;
			}
			if (Function_159(Function_162(0, Global_30685[1], 3)) != 3 || Function_159(Function_162(0, Global_30685[1], 3)) != 0)
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
			if (Function_107(&iLocal_24))
			{
				Function_111(&iLocal_24);
				uParam0->f_320 = Function_103(&iLocal_24);
				Function_98(&iLocal_24);
			}
			if (Function_159(Function_162(0, Global_30685[1], 3)) == 0)
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

void Function_138(int iParam0, int iParam1) //Position: 0x76E0 / 30432
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
	Function_114(iParam1, iParam0, 2);
	return;
}

void Function_139(int iParam0, int iParam1) //Position: 0x7743 / 30531
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
	Function_114(iParam1, iParam0, 1);
	return;
}

void Function_140(int iParam0, int iParam1) //Position: 0x77A7 / 30631
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
	Function_114(iParam1, iParam0, 0);
	return;
}

void Function_141(var uParam0, int iParam1, int iParam2) //Position: 0x7883 / 30851
{
	switch (*iParam2)
	{
		case 0x00000000:
			if (!Function_107(&iLocal_24))
			{
				Function_105(&iLocal_24);
			}
			if (!uParam0->f_352)
			{
				Function_118(iParam1);
				uParam0->f_352 = 1;
			}
			if (!uParam0->f_268 && Function_123(uParam0, &iLocal_33))
			{
				Function_117(iParam1);
				uParam0->f_268 = 1;
				*iParam2 = 1;
			}
			break;
		
		case 0x00000001:
			Function_144(uParam0, iParam1);
			Function_143(uParam0, iParam1);
			Function_142(uParam0, iParam1);
			if (Function_159(Function_162(0, Global_30668[2], 3)) == 3)
			{
				uParam0->f_272 = 1;
			}
			if (Function_159(Function_162(0, Global_30668[2], 3)) != 3 || Function_159(Function_162(0, Global_30668[2], 3)) != 0)
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
			if (Function_107(&iLocal_24))
			{
				Function_111(&iLocal_24);
				uParam0->f_320 = Function_103(&iLocal_24);
				Function_98(&iLocal_24);
			}
			if (Function_159(Function_162(0, Global_30668[2], 3)) == 0)
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

void Function_142(int iParam0, int iParam1) //Position: 0x799E / 31134
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
		if (Function_159(Function_162(0, Global_30668[2], 3)) == 3)
		{
			if ((iParam0 + 360[215])->f_28 != 1.0f)
			{
				(iParam0 + 360[215])->f_4 = 1;
				iParam0->f_292++;
			}
		}
	}
	Function_114(iParam1, iParam0, 2);
	return;
}

void Function_143(int iParam0, int iParam1) //Position: 0x7A77 / 31351
{
	if (!StackVal)
	{
		(iParam0 + 360[115])->f_28 = (Global_34581[389] - (iParam0 + 360[115])->f_20);
		if (iParam0 + 360[115])->f_28 <= (TO_FLOAT(iParam0->f_328) / 3.281f)
		{
			(iParam0 + 360[115])->f_4 = 1;
			iParam0->f_292++;
		}
	}
	Function_114(iParam1, iParam0, 1);
	return;
}

void Function_144(int iParam0, int iParam1) //Position: 0x7AE3 / 31459
{
	if (!StackVal)
	{
		if (IS_PLAYER_DEADEYE(false) && !(iParam0 + 360[015])->f_12)
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
	Function_114(iParam1, iParam0, 0);
	return;
}

void Function_145(var uParam0, int iParam1, int iParam2) //Position: 0x7B65 / 31589
{
	switch (*iParam2)
	{
		case 0x00000000:
			if (!Function_107(&iLocal_24))
			{
				Function_105(&iLocal_24);
			}
			if (!uParam0->f_352)
			{
				Function_118(iParam1);
				uParam0->f_352 = 1;
			}
			if (!uParam0->f_268 && Function_123(uParam0, &iLocal_33))
			{
				Function_117(iParam1);
				uParam0->f_268 = 1;
				*iParam2 = 1;
			}
			break;
		
		case 0x00000001:
			Function_148(uParam0, iParam1);
			Function_147(uParam0, iParam1);
			Function_146(uParam0, iParam1);
			if (Function_159(Function_162(0, Global_30658[3], 3)) == 3)
			{
				uParam0->f_272 = 1;
			}
			if (Function_159(Function_162(0, Global_30658[3], 3)) != 3 || Function_159(Function_162(0, Global_30658[3], 3)) != 0)
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
			if (Function_107(&iLocal_24))
			{
				Function_111(&iLocal_24);
				uParam0->f_320 = Function_103(&iLocal_24);
				Function_98(&iLocal_24);
			}
			if (Function_159(Function_162(0, Global_30658[3], 3)) == 0)
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

void Function_146(int iParam0, int iParam1) //Position: 0x7C80 / 31872
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
	Function_114(iParam1, iParam0, 2);
	return;
}

void Function_147(int iParam0, int iParam1) //Position: 0x7DD3 / 32211
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
	Function_114(iParam1, iParam0, 1);
	return;
}

void Function_148(int iParam0, int iParam1) //Position: 0x7E37 / 32311
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
	Function_114(iParam1, iParam0, 0);
	return;
}

void Function_149(var uParam0, int iParam1, int iParam2) //Position: 0x7E99 / 32409
{
	switch (*iParam2)
	{
		case 0x00000000:
			if (!Function_107(&iLocal_24))
			{
				Function_105(&iLocal_24);
			}
			if (!uParam0->f_352)
			{
				Function_118(iParam1);
				uParam0->f_352 = 1;
			}
			if (!uParam0->f_268 && Function_123(uParam0, &iLocal_33))
			{
				Function_117(iParam1);
				uParam0->f_268 = 1;
				*iParam2 = 1;
			}
			break;
		
		case 0x00000001:
			Function_152(uParam0, iParam1);
			Function_151(uParam0, iParam1);
			Function_150(uParam0, iParam1);
			if (Function_159(Function_162(0, Global_30640[2], 3)) == 3)
			{
				uParam0->f_272 = 1;
			}
			if (Function_159(Function_162(0, Global_30640[2], 3)) != 3 || Function_159(Function_162(0, Global_30640[2], 3)) != 0)
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
			if (Function_107(&iLocal_24))
			{
				Function_111(&iLocal_24);
				uParam0->f_320 = Function_103(&iLocal_24);
				Function_98(&iLocal_24);
			}
			if (Function_159(Function_162(0, Global_30640[2], 3)) == 0)
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

void Function_150(int iParam0, int iParam1) //Position: 0x7FB4 / 32692
{
	if (!StackVal)
	{
		(iParam0 + 360[215])->f_28 = (Function_167(46) - (iParam0 + 360[215])->f_20);
		if (iParam0 + 360[215])->f_28 <= IntToFloat(iParam0->f_332)
		{
			*((iParam0 + 360[215] + 4)) = 1;
			iParam0->f_292++;
		}
	}
	Function_114(iParam1, iParam0, 2);
	return;
}

void Function_151(int iParam0, int iParam1) //Position: 0x8017 / 32791
{
	if (!StackVal)
	{
		(iParam0 + 360[115])->f_28 = ((Function_167((183 + 22)) + Function_167((183 + 25))) - (iParam0 + 360[115])->f_20);
		if (iParam0 + 360[115])->f_28 <= IntToFloat(iParam0->f_328)
		{
			(iParam0 + 360[115])->f_4 = 1;
			iParam0->f_292++;
		}
	}
	Function_114(iParam1, iParam0, 1);
	return;
}

void Function_152(int iParam0, int iParam1) //Position: 0x8082 / 32898
{
	if (!StackVal)
	{
		(iParam0 + 360[015])->f_28 = (Function_167(45) - (iParam0 + 360[015])->f_20);
		if (iParam0 + 360[015])->f_28 <= IntToFloat(iParam0->f_324)
		{
			(iParam0 + 360[015])->f_4 = 1;
			iParam0->f_292++;
		}
	}
	Function_114(iParam1, iParam0, 0);
	return;
}

void Function_153(var uParam0, var uParam1, int iParam2) //Position: 0x80E3 / 32995
{
	switch (*iParam2)
	{
		case 0x00000000:
			if (!Function_107(&iLocal_24))
			{
				Function_105(&iLocal_24);
			}
			if (!uParam0->f_352)
			{
				Function_118(uParam1);
				uParam0->f_352 = 1;
			}
			if (!uParam0->f_268 && Function_123(uParam0, &iLocal_33))
			{
				Function_117(uParam1);
				uParam0->f_268 = 1;
				*iParam2 = 1;
			}
			break;
		
		case 0x00000001:
			Function_158(uParam0, uParam1);
			Function_155(uParam0, uParam1);
			Function_154(uParam0, uParam1);
			if (Function_159(Function_162(0, Global_30679[1], 3)) == 3)
			{
				uParam0->f_272 = 1;
			}
			if (Function_159(Function_162(0, Global_30679[1], 3)) != 3 || Function_159(Function_162(0, Global_30679[1], 3)) != 0)
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
			if (Function_107(&iLocal_24))
			{
				Function_111(&iLocal_24);
				uParam0->f_320 = Function_103(&iLocal_24);
				Function_98(&iLocal_24);
			}
			if (Function_159(Function_162(0, Global_30679[1], 3)) == 0)
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

void Function_154(int iParam0, int iParam1) //Position: 0x81FE / 33278
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
	Function_114(iParam1, iParam0, 2);
	return;
}

void Function_155(int iParam0, int iParam1) //Position: 0x82DB / 33499
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
						if (STRING_CONTAINS_STRING(&cVar1, &cVar17) && !Function_157(iParam0, 1, bVar36))
						{
							(iParam0 + 360[115])->f_28 = ((iParam0 + 360[115])->f_28 + 1.0f);
							Function_156(iParam0, 1, bVar36);
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
	Function_114(iParam1, iParam0, 1);
	return;
}

void Function_156(int iParam0, int iParam1, int iParam2) //Position: 0x83F7 / 33783
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

bool Function_157(int iParam0, int iParam1, int iParam2) //Position: 0x8438 / 33848
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

void Function_158(int iParam0, int iParam1) //Position: 0x846A / 33898
{
	if (!StackVal)
	{
		(iParam0 + 360[015])->f_28 = ((((Function_167((183 + 15)) + Function_167((183 + 16))) + Function_167((183 + 17))) + Function_167((183 + 18))) - (iParam0 + 360[015])->f_20);
		if (iParam0 + 360[015])->f_28 <= IntToFloat(iParam0->f_324)
		{
			(iParam0 + 360[015])->f_4 = 1;
			iParam0->f_292++;
		}
	}
	Function_114(iParam1, iParam0, 0);
	return;
}

int Function_159(int iParam0) //Position: 0x84E5 / 34021
{
	if (!Function_160(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_160(int iParam0) //Position: 0x84FF / 34047
{
	if (!Function_65(iParam0))
	{
		return 0;
	}
	if (!Function_161(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_161(int iParam0) //Position: 0x8523 / 34083
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

int Function_162(bool bParam0, bool bParam1, bool bParam2) //Position: 0x8538 / 34104
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_166(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_13172[iVar011] == iVar1)
		{
			return iVar0;
		}
		if (Global_13172[iVar011] != 0 && iVar0 < 0)
		{
			return Function_163(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_163(bParam0, bParam1, bParam2, 4294967295);
}

int Function_163(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x8596 / 34198
{
	var uVar0;
	
	if (!Function_165(bParam2))
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
	uVar0 = Function_166(bParam0, bParam1, bParam2);
	if (bParam3 != 4294967295 || bParam3 <= 275)
	{
		bParam3 = Function_164(uVar0);
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

int Function_164(int iParam0) //Position: 0x86EB / 34539
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

bool Function_165(int iParam0) //Position: 0x8729 / 34601
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_166(int iParam0, int iParam1, int iParam2) //Position: 0x873E / 34622
{
	return ((iParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

float Function_167(int iParam0) //Position: 0x875E / 34654
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

void Function_168(int iParam0) //Position: 0x8797 / 34711
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

bool Function_169(char* cParam0) //Position: 0x889E / 34974
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
			return Function_167(464) < 0.0f;
			break;
		
		case 0x00000001:
			return Function_167(459) < 0.0f;
			break;
		
		case 0x00000002:
			return Function_167(463) < 0.0f;
			break;
		
		case 0x00000003:
			return Function_167(462) < 0.0f;
			break;
		
		case 0x00000004:
			return Function_167(466) < 0.0f;
			break;
		
		case 0x00000005:
			return Function_167(460) < 0.0f;
			break;
		
		case 0x00000006:
			return Function_167(465) < 0.0f;
			break;
		
		case 0x00000007:
			return Function_167(461) < 0.0f;
			break;
		
		case 0x00000008:
			return Function_170(Global_30717[0]);
			break;
		
		case 0x00000009:
			return StackVal < 3;
			break;
	}
	return iVar1;
}

int Function_170(int iParam0) //Position: 0x8986 / 35206
{
	if (!Function_172(iParam0))
	{
		return 0;
	}
	return Function_171(&(Global_29008[iParam0]), 4096);
}

int Function_171(var uParam0, int iParam1) //Position: 0x89A4 / 35236
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_172(int iParam0) //Position: 0x89C0 / 35264
{
	if (iParam0 > 0 || iParam0 < 145)
	{
		return 0;
	}
	return 1;
}

bool Function_173() //Position: 0x89D6 / 35286
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_174(char* cParam0, int iParam1) //Position: 0x89DF / 35295
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
		Var2 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_22(&Var2, "_SP") };
		if (SC_CHALLENGE_IS_VAR_VALID(*cParam0, "nAAID"))
		{
			bVar0 = SC_CHALLENGE_GET_VAR_INT(*cParam0, "nAAID");
		}
		strcpy(&cVar50, "SC_AA_ICON_", 32);
		straddi(&cVar50, bVar0, 32);
		Var2 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_22(&Var2, "_") };
		Var2 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_22(&Var2, I2STR(bVar0)) };
		Var10 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_22(&Var2, "_title") };
		Var18 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_22(&Var2, "_des") };
		Var26 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_22(&Var2, "_obj1") };
		Var34 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_22(&Var2, "_obj2") };
		Var42 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_22(&Var2, "_obj3") };
		Var58 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_22(&Var2, "_goal1") };
		Var66 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_22(&Var2, "_goal2") };
		Var74 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_22(&Var2, "_goal3") };
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
		UI_CHALLENGE_SET_TROPHY_TYPE(*cParam0, Function_177(*cParam0));
		if (!Function_169(*cParam0))
		{
			UI_CHALLENGE_SET_TROPHY_TYPE(*cParam0, 8);
		}
		UI_CHALLENGE_SET_TITLE_TEXTURE(*cParam0, &cVar50);
		UI_CHALLENGE_SET_OBJECTIVE(*cParam0, 0, &Var26);
		UI_CHALLENGE_SET_OBJECTIVE(*cParam0, 1, &Var34);
		UI_CHALLENGE_SET_OBJECTIVE(*cParam0, 2, &Var42);
		Function_175(*cParam0, 0.0f, (*&Global_84611[iParam1140] + 144)[312], (*&Global_84611[iParam1140] + 144)[212]);
		UI_CHALLENGE_MAKE_CURRENT(*cParam0);
	}
	return;
}

void Function_175(char* cParam0, var uParam1, var uParam2, var uParam3) //Position: 0x8BF6 / 35830
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
	
	iVar81 = Function_179(&cParam0);
	strcpy(&Var1, "SC_AA", 32);
	Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_22(&Var1, "_SP") };
	if (SC_CHALLENGE_IS_VAR_VALID(cParam0, "nAAID"))
	{
		bVar0 = SC_CHALLENGE_GET_VAR_INT(cParam0, "nAAID");
	}
	Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_22(&Var1, "_") };
	Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_22(&Var1, I2STR(bVar0)) };
	Var41 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_22(&Var1, "_locked") };
	Var49 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_176(&Var1, "_NotSignedDes", "") };
	Var57 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_176(&Var1, "_LockedNotInSP", "") };
	Var65 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_22(&Var1, "_des") };
	Var73 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_22(&Var1, "_unlock") };
	Var17 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_22(&Var1, "n_currTime") };
	Var25 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_22(&Var1, "n_lastTime") };
	Var33 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_22(&Var1, "n_bestTime") };
	Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_100(uParam1) };
	UI_SET_STRING(&Var17, &Var9);
	Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_100(uParam2) };
	UI_SET_STRING(&Var25, &Var9);
	Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_100(uParam3) };
	UI_SET_STRING(&Var33, &Var9);
	if (!NET_MAILBOX_IS_SIGNED_INTO_SC())
	{
		UI_CHALLENGE_SET_DESCRIPTION(cParam0, &Var49);
	}
	else if (Function_173())
	{
		UI_CHALLENGE_SET_DESCRIPTION(cParam0, &Var57);
	}
	else if (Function_169(cParam0))
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

struct<32> Function_176(char* cParam0, char* cParam1, bool bParam2) //Position: 0x8DA0 / 36256
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	stradd(&cVar0, bParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

int Function_177(int iParam0) //Position: 0x8DBF / 36287
{
	int iVar0;
	
	iVar0 = Function_179(&iParam0);
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

int Function_178(int iParam0) //Position: 0x8E26 / 36390
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

int Function_179(int iParam0) //Position: 0x8E5A / 36442
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

