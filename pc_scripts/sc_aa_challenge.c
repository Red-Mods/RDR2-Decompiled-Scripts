//Decompiled with MagicRDR v1.0
//Function Count : 48
//Statics Count : 33
//Natives Count : 38
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
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() //Position: 0x0 / 0
{
	struct<57> Var0[10];
	var uVar571;
	var uVar572;
	char[] cVar573[4];
	char[] cVar576[4];
	var uVar582;
	float fVar589;
	bool bVar591;
	float fVar592;
	float fVar593;
	bool bVar594;
	int iVar595;
	bool bVar596;
	int iVar597;
	int iVar598;
	int iVar599;
	int iVar600;
	bool bVar601;
	var uVar603;
	var uVar604;
	var uVar605;
	int iVar606;
	bool bVar607;
	int iVar608;
	int iVar609;
	struct<2> Var610;
	int iVar612;
	int iVar613;
	int iVar614;
	int iVar615;
	int iVar616;
	int iVar617;
	int iVar618;
	int iVar619;
	int iVar620;
	
	*(&Var0 + 8 + 8) = 10;
	*(&Var0 + 8 + 96) = 10;
	*(&Var0 + 8 + 184) = 10;
	*(&Var0 + 8 + 272) = 10;
	*(&Var0 + 8 + 360) = 10;
	*(&Var0 + 8 + 456 + 8) = 10;
	*(&Var0 + 8 + 456 + 96) = 10;
	*(&Var0 + 8 + 456 + 184) = 10;
	*(&Var0 + 8 + 456 + 272) = 10;
	*(&Var0 + 8 + 456 + 360) = 10;
	*(&Var0 + 8 + 456 + 456 + 8) = 10;
	*(&Var0 + 8 + 456 + 456 + 96) = 10;
	*(&Var0 + 8 + 456 + 456 + 184) = 10;
	*(&Var0 + 8 + 456 + 456 + 272) = 10;
	*(&Var0 + 8 + 456 + 456 + 360) = 10;
	*(&Var0 + 8 + 456 + 456 + 456 + 8) = 10;
	*(&Var0 + 8 + 456 + 456 + 456 + 96) = 10;
	*(&Var0 + 8 + 456 + 456 + 456 + 184) = 10;
	*(&Var0 + 8 + 456 + 456 + 456 + 272) = 10;
	*(&Var0 + 8 + 456 + 456 + 456 + 360) = 10;
	*(&Var0 + 8 + 456 + 456 + 456 + 456 + 8) = 10;
	*(&Var0 + 8 + 456 + 456 + 456 + 456 + 96) = 10;
	*(&Var0 + 8 + 456 + 456 + 456 + 456 + 184) = 10;
	*(&Var0 + 8 + 456 + 456 + 456 + 456 + 272) = 10;
	*(&Var0 + 8 + 456 + 456 + 456 + 456 + 360) = 10;
	*(&Var0 + 8 + 456 + 456 + 456 + 456 + 456 + 8) = 10;
	*(&Var0 + 8 + 456 + 456 + 456 + 456 + 456 + 96) = 10;
	*(&Var0 + 8 + 456 + 456 + 456 + 456 + 456 + 184) = 10;
	*(&Var0 + 8 + 456 + 456 + 456 + 456 + 456 + 272) = 10;
	*(&Var0 + 8 + 456 + 456 + 456 + 456 + 456 + 360) = 10;
	*(&Var0 + 8 + 456 + 456 + 456 + 456 + 456 + 456 + 8) = 10;
	*(&Var0 + 8 + 456 + 456 + 456 + 456 + 456 + 456 + 96) = 10;
	*(&Var0 + 8 + 456 + 456 + 456 + 456 + 456 + 456 + 184) = 10;
	*(&Var0 + 8 + 456 + 456 + 456 + 456 + 456 + 456 + 272) = 10;
	*(&Var0 + 8 + 456 + 456 + 456 + 456 + 456 + 456 + 360) = 10;
	*(&Var0 + 8 + 456 + 456 + 456 + 456 + 456 + 456 + 456 + 8) = 10;
	*(&Var0 + 8 + 456 + 456 + 456 + 456 + 456 + 456 + 456 + 96) = 10;
	*(&Var0 + 8 + 456 + 456 + 456 + 456 + 456 + 456 + 456 + 184) = 10;
	*(&Var0 + 8 + 456 + 456 + 456 + 456 + 456 + 456 + 456 + 272) = 10;
	*(&Var0 + 8 + 456 + 456 + 456 + 456 + 456 + 456 + 456 + 360) = 10;
	*(&Var0 + 8 + 456 + 456 + 456 + 456 + 456 + 456 + 456 + 456 + 8) = 10;
	*(&Var0 + 8 + 456 + 456 + 456 + 456 + 456 + 456 + 456 + 456 + 96) = 10;
	*(&Var0 + 8 + 456 + 456 + 456 + 456 + 456 + 456 + 456 + 456 + 184) = 10;
	*(&Var0 + 8 + 456 + 456 + 456 + 456 + 456 + 456 + 456 + 456 + 272) = 10;
	*(&Var0 + 8 + 456 + 456 + 456 + 456 + 456 + 456 + 456 + 456 + 360) = 10;
	*(&Var0 + 8 + 456 + 456 + 456 + 456 + 456 + 456 + 456 + 456 + 456 + 8) = 10;
	*(&Var0 + 8 + 456 + 456 + 456 + 456 + 456 + 456 + 456 + 456 + 456 + 96) = 10;
	*(&Var0 + 8 + 456 + 456 + 456 + 456 + 456 + 456 + 456 + 456 + 456 + 184) = 10;
	*(&Var0 + 8 + 456 + 456 + 456 + 456 + 456 + 456 + 456 + 456 + 456 + 272) = 10;
	*(&Var0 + 8 + 456 + 456 + 456 + 456 + 456 + 456 + 456 + 456 + 456 + 360) = 10;
	uVar571 = "n_AA_ID";
	uVar572 = "_StatID";
	cVar573 = "_StatCount";
	fVar589 = 0.0f;
	iVar599 = 0;
	bVar601 = Function_47(&iScriptParam_0);
	iVar606 = 1;
	bVar607 = false;
	iVar608 = 0;
	iVar609 = 4294967295;
	iVar620 = 0;
	while ((!IS_EXITFLAG_SET() && iVar606) && iVar620 != 0)
	{
		switch (iVar600)
		{
			case 0x00000000:
				bVar594 = false;
				while (bVar594 <= 8)
				{
					Var0[bVar59457] = 4294967295;
					bVar594++;
				}
				if (SC_CHALLENGE_IS_VAR_VALID(&iScriptParam_0, "bCommunity"))
				{
					Global_132987[bVar601125].f_120 = SC_CHALLENGE_GET_VAR_BOOL(&iScriptParam_0, "bCommunity");
				}
				else
				{
					Global_132987[bVar601125].f_120 = 0;
				}
				if (SC_CHALLENGE_IS_VAR_VALID(&iScriptParam_0, "bTimeAttack"))
				{
					Global_132987[bVar601125].f_132 = SC_CHALLENGE_GET_VAR_BOOL(&iScriptParam_0, "bTimeAttack");
				}
				else
				{
					Global_132987[bVar601125].f_132 = 0;
				}
				Function_46(bVar601, &Global_132987, I2STR(bVar601), 0);
				if (SC_CHALLENGE_IS_VAR_VALID(&iScriptParam_0, "nLBID"))
				{
					Global_132987[bVar601125].f_140 = SC_CHALLENGE_GET_VAR_INT(&iScriptParam_0, "nLBID");
				}
				if (SC_CHALLENGE_IS_VAR_VALID(&iScriptParam_0, "nBronze"))
				{
					uVar603 = SC_CHALLENGE_GET_VAR_INT(&iScriptParam_0, "nBronze");
				}
				if (SC_CHALLENGE_IS_VAR_VALID(&iScriptParam_0, "nSilver"))
				{
					uVar604 = SC_CHALLENGE_GET_VAR_INT(&iScriptParam_0, "nSilver");
				}
				if (SC_CHALLENGE_IS_VAR_VALID(&iScriptParam_0, "nGold"))
				{
					uVar605 = SC_CHALLENGE_GET_VAR_INT(&iScriptParam_0, "nGold");
				}
				bVar594 = false;
				bVar594 = false;
				while (bVar594 <= 8)
				{
					memcpy(&cVar576, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_45(&uVar571, I2STR(bVar594)), 6);
					if (SC_CHALLENGE_IS_VAR_VALID(&iScriptParam_0, &cVar576))
					{
						Var0[bVar59457] = SC_CHALLENGE_GET_VAR_INT(&iScriptParam_0, &cVar576);
						iVar598++;
						bVar596 = false;
						bVar596 = false;
						while (bVar596 <= 10)
						{
							memcpy(&uVar582, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_44(&cVar576, &uVar572, I2STR(bVar596)), 6);
							if (SC_CHALLENGE_IS_VAR_VALID(&iScriptParam_0, &uVar582))
							{
								(*&Var0[bVar59457] + 96)[bVar596] = SC_CHALLENGE_GET_VAR_INT(&iScriptParam_0, &uVar582);
								Var0[bVar59457].f_4 = StackVal + 1;
								iVar599++;
							}
							memcpy(&uVar582, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_44(&cVar576, &cVar573, I2STR(bVar596)), 6);
							if (SC_CHALLENGE_IS_VAR_VALID(&iScriptParam_0, &uVar582))
							{
								(*&Var0[bVar59457] + 8)[bVar596] = SC_CHALLENGE_GET_VAR_INT(&iScriptParam_0, &uVar582);
							}
							(*&Var0[bVar59457] + 272)[bVar596] = Global_54086[(*&Var0[bVar59457] + 96)[bVar596]];
							bVar596++;
						}
					}
					bVar594++;
				}
				iVar612 = Function_39(0, Global_46816[2], 3);
				iVar613 = Function_39(0, Global_46760[2], 3);
				iVar614 = Function_39(0, Global_46796[2], 3);
				iVar615 = Function_39(0, Global_46796[3], 3);
				iVar616 = Function_39(0, Global_46838[1], 3);
				iVar617 = Function_39(0, Global_46796[0], 3);
				iVar618 = Function_39(0, Global_46850[2], 3);
				iVar619 = Function_39(0, Global_46850[1], 3);
				if (SC_CHALLENGE_IS_VAR_VALID(&iScriptParam_0, "fTime"))
				{
					fVar592 = SC_CHALLENGE_GET_VAR_FLOAT(&iScriptParam_0, "fTime");
				}
				if (fVar592 < 0.0f)
				{
					iVar599++;
				}
				if (&iScriptParam_0 == 2)
				{
					UI_CHALLENGE_CREATE(&iScriptParam_0, "sc_challenge_fom_02", "sc_challenge_fom_02_des");
				}
				else if (&iScriptParam_0 == 3)
				{
					UI_CHALLENGE_CREATE(&iScriptParam_0, "sc_challenge_fom_03", "sc_challenge_fom_03_des");
				}
				UI_CHALLENGE_SET_PROGRESS(&iScriptParam_0, 0.0f, 1.0f, 0.0f, "sc_progress");
				iVar600 = 1;
				break;
			
			case 0x00000001:
				Function_36("SC_CHALLENGE_AVAILABLE_MSG", 4.0f, 1, 0, 2, 1, 0);
				iVar600 = 2;
			
			case 0x00000002:
				bVar594 = false;
				bVar594 = false;
				while (bVar594 <= 8)
				{
					switch (Var0[bVar59457])
					{
						case 0x00000000:
							if (Function_32(iVar616) == 2)
							{
								Var0[bVar59457].f_448 = 1;
								iVar600 = 3;
							}
							break;
						
						case 0x00000001:
							if (Function_32(iVar613) == 2)
							{
								Var0[bVar59457].f_448 = 1;
								iVar600 = 3;
							}
							break;
						
						case 0x00000002:
							if (Function_32(iVar615) == 2)
							{
								Var0[bVar59457].f_448 = 1;
								iVar600 = 3;
							}
							break;
						
						case 0x00000003:
							if (Function_32(iVar612) == 2)
							{
								Var0[bVar59457].f_448 = 1;
								iVar600 = 3;
							}
							break;
						
						case 0x00000004:
							if (Function_32(iVar619) == 2)
							{
								Var0[bVar59457].f_448 = 1;
								iVar600 = 3;
							}
							break;
						
						case 0x00000005:
							if (Function_32(iVar614) == 2)
							{
								Var0[bVar59457].f_448 = 1;
								iVar600 = 3;
							}
							break;
						
						case 0x00000006:
							if (Function_32(iVar618) == 2)
							{
								Var0[bVar59457].f_448 = 1;
								iVar600 = 3;
							}
							break;
						
						case 0x00000007:
							if (Function_32(iVar617) == 2)
							{
								Var0[bVar59457].f_448 = 1;
								iVar600 = 3;
							}
							break;
					}
					bVar594++;
				}
				break;
			
			case 0x00000003:
				Function_36("SC_CHALLENGE_EXAMPLE_START", 4.0f, 1, 0, 2, 1, 0);
				if (Global_132987[bVar601125].f_132)
				{
					while (!Function_31(&Var610, fVar592))
					{
						bVar594 = false;
						while (bVar594 <= iVar598)
						{
							(*&Global_132987[bVar601125] + 24)[bVar594] = CEIL(bVar591);
							bVar594++;
						}
						WAIT(false);
					}
					if (Function_31(&Var610, fVar592))
					{
						Function_30(&Var610);
						bVar607 = true;
						iVar600 = 4;
					}
				}
				else
				{
					if (fVar592 < 0.0f)
					{
						Function_26(&Var610);
					}
					iVar595 = 0;
					while (iVar595 <= iVar598)
					{
						bVar596 = false;
						bVar594 = false;
						bVar594 = false;
						while (bVar594 <= 8)
						{
							if (Var0[bVar59457].f_448)
							{
								bVar596 = false;
								while (bVar596 <= 10)
								{
									(*&Var0[bVar59457] + 360)[bVar596] = (Global_54086[(*&Var0[bVar59457] + 96)[bVar596]] - (*&Var0[bVar59457] + 272)[bVar596]);
									if (((*&Var0[bVar59457] + 360)[bVar596] <= IntToFloat((*&Var0[bVar59457] + 8)[bVar596]) && (*&Var0[bVar59457] + 8)[bVar596] < 0) && !(*&Var0[bVar59457] + 184)[bVar596])
									{
										fVar593 = (fVar593 + (0,5f / IntToFloat(iVar599)));
										UI_CHALLENGE_SET_PROGRESS(&iScriptParam_0, 0.0f, 1.0f, fVar593, "sc_progress");
										(*&Var0[bVar59457] + 184)[bVar596] = 1;
									}
									bVar596++;
								}
							}
							bVar594++;
						}
						iVar597 = 0;
						iVar597 = 0;
						while (iVar597 <= 8)
						{
							switch (Var0[iVar59757])
							{
								case 0x00000000:
									if (Function_32(iVar616) == 3)
									{
										Var0[iVar59757].f_448 = 0;
										iVar595++;
										fVar593 = (fVar593 + (TO_FLOAT((iVar595 / iVar598)) * 0,5f));
										UI_CHALLENGE_SET_PROGRESS(&iScriptParam_0, 0.0f, 1.0f, fVar593, "sc_progress");
									}
									break;
								
								case 0x00000001:
									if (Function_32(iVar613) == 3)
									{
										Var0[iVar59757].f_448 = 0;
										iVar595++;
										fVar593 = (fVar593 + (TO_FLOAT((iVar595 / iVar598)) * 0,5f));
										UI_CHALLENGE_SET_PROGRESS(&iScriptParam_0, 0.0f, 1.0f, fVar593, "sc_progress");
									}
									break;
								
								case 0x00000002:
									if (Function_32(iVar615) == 3)
									{
										Var0[iVar59757].f_448 = 0;
										iVar595++;
										fVar593 = (fVar593 + (TO_FLOAT((iVar595 / iVar598)) * 0,5f));
										UI_CHALLENGE_SET_PROGRESS(&iScriptParam_0, 0.0f, 1.0f, fVar593, "sc_progress");
									}
									break;
								
								case 0x00000003:
									if (Function_32(iVar612) == 3)
									{
										Var0[iVar59757].f_448 = 0;
										iVar595++;
										fVar593 = (fVar593 + (TO_FLOAT((iVar595 / iVar598)) * 0,5f));
										UI_CHALLENGE_SET_PROGRESS(&iScriptParam_0, 0.0f, 1.0f, fVar593, "sc_progress");
									}
									break;
								
								case 0x00000004:
									if (Function_32(iVar618) == 3)
									{
										Var0[iVar59757].f_448 = 0;
										iVar595++;
										fVar593 = (fVar593 + (TO_FLOAT((iVar595 / iVar598)) * 0,5f));
										UI_CHALLENGE_SET_PROGRESS(&iScriptParam_0, 0.0f, 1.0f, fVar593, "sc_progress");
									}
									break;
								
								case 0x00000005:
									if (Function_32(iVar614) == 3)
									{
										Var0[iVar59757].f_448 = 0;
										iVar595++;
										fVar593 = (fVar593 + (TO_FLOAT((iVar595 / iVar598)) * 0,5f));
										UI_CHALLENGE_SET_PROGRESS(&iScriptParam_0, 0.0f, 1.0f, fVar593, "sc_progress");
									}
									break;
								
								case 0x00000006:
									if (Function_32(iVar618) == 3)
									{
										Var0[iVar59757].f_448 = 0;
										iVar595++;
										fVar593 = (fVar593 + (TO_FLOAT((iVar595 / iVar598)) * 0,5f));
										UI_CHALLENGE_SET_PROGRESS(&iScriptParam_0, 0.0f, 1.0f, fVar593, "sc_progress");
									}
									break;
								
								case 0x00000007:
									if (Function_32(iVar617) == 3)
									{
										Var0[iVar59757].f_448 = 0;
										iVar595++;
										fVar593 = (fVar593 + (TO_FLOAT((iVar595 / iVar598)) * 0,5f));
										UI_CHALLENGE_SET_PROGRESS(&iScriptParam_0, 0.0f, 1.0f, fVar593, "sc_progress");
									}
									break;
							}
							WAIT(false);
							iVar597++;
						}
						WAIT(false);
					}
					if (iVar595 > iVar598)
					{
						if (fVar592 < 0.0f)
						{
							Function_30(&Var610);
						}
						bVar607 = true;
						iVar600 = 4;
					}
				}
				if (SC_CHALLENGE_GET_EXPIRATION_STATE(&iScriptParam_0) == 3)
				{
					bVar607 = false;
					iVar600 = 4;
				}
				break;
			
			case 0x00000004:
				SC_CHALLENGE_PROCESS_EXPIRATION(&iScriptParam_0);
				iVar609 = 0;
				if (bVar607)
				{
					Function_36("SC_CHALLENGE_EXAMPLE_SUCCESS", 4.0f, 1, 0, 2, 1, 0);
					Function_1(StackVal, &Var0, &iScriptParam_0, Var610, fVar589, fVar593, iVar599, fVar592);
				}
				Global_132987[bVar601125].f_116 = 0;
				iVar600 = 5;
			
			case 0x00000005:
				if (iVar609 == 0)
				{
					iVar609 = SC_CHALLENGE_GET_EXPIRATION_STATE(&iScriptParam_0);
				}
				else if (iVar609 == 3)
				{
					Function_36("SC_CHALLENGE_EXAMPLE_EXPIRED", 4.0f, 1, 0, 2, 1, 0);
					iVar606 = 0;
				}
				break;
		}
		WAIT(100);
	}
	SC_CHALLENGE_RELEASE(&iScriptParam_0);
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1(struct<57>[] Param0, var uParam1, int iParam2, var uParam3, float fParam4, float fParam5, int iParam6, float fParam7) //Position: 0xCAF / 3247
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	
	iVar1 = 0;
	fVar5 = 0.0f;
	if (SC_CHALLENGE_IS_VAR_VALID(&uParam1, "fScoreScale"))
	{
		fVar2 = SC_CHALLENGE_GET_VAR_FLOAT(&uParam1, "fScoreScale");
	}
	if (SC_CHALLENGE_IS_VAR_VALID(&uParam1, "nfXPReward"))
	{
		fParam4 = SC_CHALLENGE_GET_VAR_FLOAT(&uParam1, "nfXPReward");
	}
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		if (Param0[iVar057] >= 4294967295)
		{
			iVar1 = 0;
			while (iVar1 <= 10)
			{
				if (((*&Param0[iVar057] + 360)[iVar1] - IntToFloat((*&Param0[iVar057] + 8)[iVar1])) < -1.0f)
				{
					fVar3 = (fVar3 + (((*&Param0[iVar057] + 360)[iVar1] - IntToFloat((*&Param0[iVar057] + 8)[iVar1])) * fVar2));
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	if (&fParam7 < 0.0f)
	{
		fVar4 = (&fParam7 - Function_22(&iParam2));
		if (fVar4 < -1.0f)
		{
			fVar5 = (fParam4 + (fParam4 * Function_21(0.0f, (fVar4 / &fParam7))));
			fParam5 = (fParam5 + (0,5f / IntToFloat(iParam6)));
			UI_CHALLENGE_SET_PROGRESS(&uParam1, 0.0f, 1.0f, fParam5, "sc_progress");
		}
	}
	else
	{
		fVar5 = fParam4;
	}
	fVar5 = (fVar5 + fVar3);
	UI_SET_TEXT("time_remaining", F2STR(&fParam7, 2, 2));
	Function_2(0, fVar5);
}

int Function_2(var uParam0, bool bParam1) //Position: 0xE0E / 3598
{
	bool bVar0;
	int iVar1;
	
	Function_7(uParam0, bParam1, 0);
	bVar0 = uParam0;
	if (bVar0 >= 696)
	{
		LOG_ERROR("STAT_INCREASE: Attempting to use a Stat out of bounds.");
		return 0;
	}
	if (bParam1 > 0.0f)
	{
		LOG_ERROR("STAT_INCREASE: fIncreaseValue < 0 - I am turning this into a positive number for you!");
		bParam1 = FABS(bParam1);
	}
	iVar1 = Function_6(uParam0, 4294967295);
	if (iVar1 > 0)
	{
		if (Global_77766[iVar116].f_120 != 0 || Global_77766[iVar116].f_120 != 1)
		{
			Global_77754[iVar1] = (Global_77754[iVar1] + bParam1);
			strcpy(&Global_77766[iVar116] + 16, "QME+", 8);
			strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
			Global_77766[iVar116].f_96 = 26;
			Global_77766[iVar116].f_116 = uParam0;
			Global_77766[iVar116].f_120 = 0;
			return 1;
		}
	}
	iVar1 = Function_3();
	Global_77754[iVar1] = bParam1;
	strcpy(&Global_77766[iVar116] + 16, "QME+", 8);
	strcpy(&(Global_77766[iVar116]), INT_TO_STRING(bVar0), 8);
	Global_77766[iVar116].f_96 = 26;
	Global_77766[iVar116].f_116 = uParam0;
	Global_77766[iVar116].f_120 = 0;
	return 1;
}

int Function_3() //Position: 0xFA9 / 4009
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
	Function_4();
	return 0;
}

void Function_4() //Position: 0x104A / 4170
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
		Function_5(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_5(int iParam0) //Position: 0x1108 / 4360
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

var Function_6(int iParam0, int iParam1) //Position: 0x116E / 4462
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

int Function_7(int iParam0, bool bParam1, bool bParam2) //Position: 0x11B3 / 4531
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
	Function_20(iParam0, bParam1, 1);
	Function_19(iParam0);
	if (bParam2 && bParam1 == 0.0f)
	{
		Function_8(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

void Function_8(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, var uParam5, bool bParam6, var uParam7) //Position: 0x13BF / 5055
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
				stradd(&Global_55480[iParam016] + 32, INT_TO_STRING(FLOOR(Function_18(390))), 32);
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
					bVar19 = (Function_17(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_17(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_15(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &uParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, 0, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_131807.f_1316 <= 49)
						{
							Function_12(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(&uParam7))
							{
								uParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_11(Global_131807.f_1316, Global_132499.f_1412, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(&uParam7), &Global_55480[iParam016] + 32, Function_10(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_131807.f_1316 + 1, Function_9(), &Var9);
						}
						break;
						break;
						if (iParam0 == 0)
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &uParam5, "", 2, 4294967295, 0, iVar2, 0, 1, false, 0, 0);
						}
						else
						{
							SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_55480[iParam016])), &Global_55480[iParam016] + 32, &uParam5, "", 2, 4294967295, 0, iVar2, 0, 0, false, 0, 0);
						}
						break;
					}
			}
	}
}

var Function_9() //Position: 0x19FD / 6653
{
	int iVar0;
	
	return &iVar0;
}

var Function_10(int iParam0) //Position: 0x1A06 / 6662
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_11(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x1A17 / 6679
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

void Function_12(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x1B0E / 6926
{
	float fVar0;
	
	fVar0 = (Global_131807[Global_131807.f_1316 + 13] - Global_131807[Global_131807.f_13163]);
	uParam2 = Function_14(100, FLOOR((((fParam0 - Global_131807[Global_131807.f_13163]) / fVar0) * 100.0f)));
	uParam3 = Function_13(Function_14(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_13(int iParam0, int iParam1) //Position: 0x1B75 / 7029
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_14(int iParam0, bool bParam1) //Position: 0x1B87 / 7047
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_15(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x1B99 / 7065
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
	if (((Function_16(iParam0) != 19 || Function_16(iParam0) != 17) || Function_16(iParam0) != 10) || Function_16(iParam0) != 9)
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

int Function_16(int iParam0) //Position: 0x1CCD / 7373
{
	return Global_55480[iParam016].f_96;
}

float Function_17(int iParam0) //Position: 0x1CDC / 7388
{
	if (!iParam0 != 4294967295)
	{
		return Global_54086[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

var Function_18(int iParam0) //Position: 0x1D15 / 7445
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_55480[iParam016].f_112;
}

void Function_19(int iParam0) //Position: 0x1D52 / 7506
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

int Function_20(int iParam0, float fParam1, bool bParam2) //Position: 0x1EEC / 7916
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

float Function_21(int iParam0, int iParam1) //Position: 0x2130 / 8496
{
	if (iParam0 < iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

float Function_22(vector3 vParam0) //Position: 0x2143 / 8515
{
	if (Function_25(&vParam0))
	{
		if (Function_23(&vParam0))
		{
			return vParam0.z;
		}
		return (GET_CURRENT_GAME_TIME() - vParam0.y);
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return vParam0.y;
}

bool Function_23(int iParam0) //Position: 0x2210 / 8720
{
	return Function_24(iParam0, 2);
}

bool Function_24(var uParam0, int iParam1) //Position: 0x221E / 8734
{
	return (uParam0 && iParam1) == 0;
}

bool Function_25(int iParam0) //Position: 0x222B / 8747
{
	return Function_24(iParam0, 1);
}

void Function_26(int iParam0) //Position: 0x2239 / 8761
{
	Function_27(&iParam0, 0.0f);
	return;
}

void Function_27(vector3 vParam0) //Position: 0x2246 / 8774
{
	vParam0.f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_29(&vParam0, 1);
	Function_28(&vParam0, 2);
	vParam0.f_8 = 0.0f;
	return;
}

void Function_28(var uParam0, int iParam1) //Position: 0x226B / 8811
{
	uParam0 = (uParam0 - (uParam0 && iParam1));
	return;
}

void Function_29(var uParam0, int iParam1) //Position: 0x2281 / 8833
{
	uParam0 = (uParam0 || iParam1);
	return;
}

void Function_30(vector3 vParam0) //Position: 0x2292 / 8850
{
	if (Function_25(&vParam0))
	{
		if (!Function_23(&vParam0))
		{
			vParam0.f_8 = (GET_CURRENT_GAME_TIME() - vParam0.y);
			Function_29(&vParam0, 2);
		}
	}
	else
	{
		LOG_ERROR("ERROR: Trying to PAUSE a TIMER that has not been started!");
		PRINTSTRING("WARNING: Trying to PAUSE a TIMER that has not been started! IGNORING COMMAND.\n");
	}
	return;
}

bool Function_31(var uParam0, float fParam1) //Position: 0x2356 / 9046
{
	if (Function_25(&uParam0))
	{
		if (Function_22(&uParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

int Function_32(int iParam0) //Position: 0x2374 / 9076
{
	if (!Function_33(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_33(int iParam0) //Position: 0x238E / 9102
{
	if (!Function_35(iParam0))
	{
		return 0;
	}
	if (!Function_34(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_34(int iParam0) //Position: 0x23B2 / 9138
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

bool Function_35(int iParam0) //Position: 0x23C7 / 9159
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

void Function_36(var uParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x23DE / 9182
{
	struct<4> Var0;
	var uVar4;
	
	if (Global_6623 != 1 && Global_10966 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_6667[Global_1096628] + 16) };
		if (((Global_10966 != 11 || Global_10966 != 16) || Global_10966 != 15) || Global_10966 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_37(Global_10966) };
		}
		PRINT_HELP_B(&uParam0, &fParam1, &iParam2, &iParam3, &iParam4, &iParam5, &Var0, &iParam6);
	}
	else
	{
		uVar4 = "";
		PRINT_HELP_B(&uParam0, &fParam1, &iParam2, &iParam3, &iParam4, &iParam5, &uVar4, &iParam6);
	}
}

struct<16> Function_37(int iParam0) //Position: 0x2469 / 9321
{
	char* cVar0[16];
	
	if (!Function_38())
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

bool Function_38() //Position: 0x24A8 / 9384
{
	if (Function_24(Global_131807.f_1304, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

int Function_39(bool bParam0, bool bParam1, bool bParam2) //Position: 0x24C3 / 9411
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_43(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_21684[iVar07] == iVar1)
		{
			return iVar0;
		}
		if (Global_21684[iVar07] != 0 && iVar0 < 0)
		{
			return Function_40(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_40(bParam0, bParam1, bParam2, 4294967295);
}

int Function_40(bool bParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x2521 / 9505
{
	var uVar0;
	
	if (!Function_42(bParam2))
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
	uVar0 = Function_43(bParam0, bParam1, bParam2);
	if (&iParam3 != 4294967295 || &iParam3 <= 275)
	{
		iParam3 = Function_41(uVar0);
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

var Function_41(int iParam0) //Position: 0x2685 / 9861
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

bool Function_42(int iParam0) //Position: 0x26C3 / 9923
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_43(int iParam0, int iParam1, int iParam2) //Position: 0x26D8 / 9944
{
	return ((iParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

struct<32> Function_44(char* cParam0) //Position: 0x26F8 / 9976
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	stradd(&cVar0, &cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_45(char* cParam0) //Position: 0x271A / 10010
{
	char* cVar0[32];
	
	strcpy(&cVar0, &cParam0, 32);
	stradd(&cVar0, &cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_46(int iParam0, struct<125>[] Param1, char* cParam2) //Position: 0x2735 / 10037
{
	int iVar0;
	
	strcpy(&Param1[iParam0125] + 8, &cParam2, 8);
	Param1[iParam0125] = iParam0;
	Param1[iParam0125].f_112 = &uParam3;
	while (iVar0 <= 10)
	{
		if (!Global_132987[iParam0125].f_116)
		{
			(*&Global_132987[iParam0125] + 24)[iVar0] = 0;
		}
		iVar0++;
	}
}

var Function_47(int iParam0) //Position: 0x278D / 10125
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

