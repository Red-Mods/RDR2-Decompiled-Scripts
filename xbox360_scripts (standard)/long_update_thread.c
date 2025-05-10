//Decompiled with MagicRDR v1.0
//Function Count : 899
//Statics Count : 766
//Natives Count : 757
//Parameters Count : 0

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	float fLocal_3 = 0.0f;
	var uLocal_4 = 0;
	bool bLocal_5 = false;
	bool bLocal_6 = false;
	bool bLocal_7 = false;
	int iLocal_8 = 0;
	bool bLocal_9 = false;
	bool bLocal_10 = false;
	struct<48> Local_11[10];
	bool bLocal_492 = false;
	bool bLocal_493 = false;
	bool bLocal_494 = false;
	bool bLocal_495 = false;
	bool bLocal_496 = false;
	bool bLocal_497 = false;
	bool bLocal_498 = false;
	var uLocal_499 = 0;
	var uLocal_500 = 0;
	var uLocal_501 = 0;
	var uLocal_502 = 0;
	var uLocal_503 = 0;
	var uLocal_504 = 0;
	var uLocal_505 = 0;
	var uLocal_506 = 0;
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	bool bLocal_510 = false;
	bool bLocal_511 = false;
	int iLocal_512 = 0;
	int iLocal_513 = 0;
	int iLocal_514 = 0;
	int iLocal_515 = 0;
	int iLocal_516 = 0;
	var uLocal_517 = 0;
	var uLocal_518 = 0;
	var uLocal_519 = 0;
	var uLocal_520 = 0;
	var uLocal_521 = 0;
	var uLocal_522 = 0;
	var uLocal_523 = 0;
	var uLocal_524 = 0;
	var uLocal_525 = 0;
	var uLocal_526 = 0;
	int iLocal_527 = 0;
	var uLocal_528 = 0;
	var uLocal_529 = 0;
	int iLocal_530 = 0;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
	int iLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	int iLocal_536 = 0;
	var uLocal_537 = 0;
	var uLocal_538 = 0;
	int iLocal_539 = 0;
	int iLocal_540 = 0;
	vector3 vLocal_541[4] = {{ 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } };
	bool bLocal_554[6] = { false, false, false, false, false, false };
	int iLocal_561 = 0;
	int iLocal_562 = 0;
	bool bLocal_563 = false;
	vector3 vLocal_564 = { 0.0f, 0.0f, 0.0f };
	var uLocal_567 = 0;
	bool bLocal_568 = false;
	bool bLocal_569 = false;
	bool bLocal_570 = false;
	int iLocal_571 = 0;
	vector3 vLocal_572 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_575 = { 0.0f, 0.0f, 0.0f };
	bool bLocal_578 = false;
	bool bLocal_579 = false;
	bool bLocal_580 = false;
	bool bLocal_581 = false;
	struct<9> Local_582[20];
	bool bLocal_763 = false;
	bool bLocal_764 = false;
	float fLocal_765 = 0.0f;
#endregion

void main() //Position: 0x0 / 0
{
	int iVar0;
	
	iLocal_0 = 31;
	iLocal_1 = 33;
	iLocal_2 = 1;
	fLocal_3 = 2.0f;
	bLocal_10 = false;
	bLocal_492 = false;
	bLocal_493 = false;
	bLocal_494 = false;
	bLocal_511 = true;
	iLocal_512 = 0;
	iLocal_513 = 1;
	iLocal_514 = 1;
	iLocal_515 = 0;
	iLocal_516 = 0;
	iLocal_561 = 0;
	iLocal_562 = 0;
	bLocal_568 = false;
	bLocal_569 = false;
	iLocal_571 = 0;
	Function_787(&(vLocal_582[49]));
	Function_743(&(vLocal_582[69]));
	Function_619(&(vLocal_582[59]));
	Function_596(&(vLocal_582[79]));
	Function_573(&(vLocal_582[89]));
	Function_553(&(vLocal_582[99]));
	Function_545(&(vLocal_582[109]));
	Function_541(&(vLocal_582[119]));
	Function_512(&(vLocal_582[129]));
	Function_482(&(vLocal_582[139]));
	Function_459(&(vLocal_582[149]));
	Function_454(&(vLocal_582[159]));
	Function_450(&(vLocal_582[169]));
	Function_419(&(vLocal_582[199]));
	Function_363(&(vLocal_582[09]));
	Function_170(&(vLocal_582[19]));
	Function_102(&(vLocal_582[29]));
	Function_68(&(vLocal_582[39]));
	Function_30(&(vLocal_582[179]));
	Function_6(&(vLocal_582[189]));
	iVar0 = 0;
	while (iVar0 <= vLocal_582)
	{
		if (!IS_EXITFLAG_SET())
		{
			if (vLocal_582[iVar09].f_28 || !Global_34165.f_44)
			{
				Call_Loc(vLocal_582[iVar09]);
				vLocal_582[iVar09].f_32 = 1;
				if (UNK_0x26884138() <= 50000)
				{
					WAIT(false);
				}
			}
			else
			{
				vLocal_582[iVar09].f_32 = 0;
			}
		}
		iVar0++;
	}
	while (!Function_5(256) && !IS_EXITFLAG_SET())
	{
		WAIT(false);
	}
	if (!Global_3364)
	{
		Function_2();
	}
	while (!IS_EXITFLAG_SET())
	{
		bLocal_763 = 1000;
		SET_DEBUG_DRAW((((((Global_30900[0] || Global_30900[1]) || Global_30900[2]) || Global_30900[3]) || Global_30900[17]) || Global_30900[4]));
		if (GET_DEBUG_DRAW_STATE())
		{
			bLocal_763 = false;
		}
		iVar0 = 0;
		while (iVar0 <= vLocal_582)
		{
			if (vLocal_582[iVar09].f_28 || !Function_1())
			{
				if (bLocal_764)
				{
					PRINTSTRING("Time for Exec ");
					PRINTSTRING(&vLocal_582[iVar09] + 12);
					PRINTSTRING(": ");
					fLocal_765 = GET_PROFILE_TIME();
				}
				Call_Loc(vLocal_582[iVar09].y);
				if (StackVal)
				{
					bLocal_763 = false;
				}
				if (bLocal_764)
				{
					PRINTFLOAT((GET_PROFILE_TIME() - fLocal_765));
					PRINTNL();
				}
				if (!IS_EXITFLAG_SET() && !bLocal_763 != 0)
				{
					bLocal_763 = (bLocal_763 - 33);
					WAIT(false);
				}
			}
			iVar0++;
		}
		if (!IS_EXITFLAG_SET())
		{
			WAIT(bLocal_763);
		}
	}
	iVar0 = 0;
	while (iVar0 <= vLocal_582)
	{
		if (vLocal_582[iVar09].f_32)
		{
			Call_Loc(vLocal_582[iVar09].z);
		}
		iVar0++;
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

bool Function_1() //Position: 0x2A3 / 675
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_2() //Position: 0x2AC / 684
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_13172)
	{
		if (StackVal == 2)
		{
			if (Function_3(iVar0) == 1)
			{
				Global_13172[iVar011].f_4 = 0;
			}
			else
			{
				Global_13172[iVar011].f_4 = 0;
			}
		}
		iVar0++;
	}
	return;
}

int Function_3(bool bParam0) //Position: 0x2F3 / 755
{
	if (!Function_4(bParam0))
	{
		return 0;
	}
	return Global_13172[bParam011] & 15;
}

bool Function_4(int iParam0) //Position: 0x30E / 782
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

bool Function_5(int iParam0) //Position: 0x325 / 805
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_6(int iParam0) //Position: 0x341 / 833
{
	strcpy(iParam0 + 12, "SOCIALCLUB", 16);
	*iParam0 = 4003;
	iParam0->f_4 = 892;
	iParam0->f_8 = 886;
	iParam0->f_28 = 1;
	return;
}

void Function_7() //Position: 0x376 / 886
{
	return;
}

int Function_8() //Position: 0x37C / 892
{
	int iVar0;
	
	Function_24();
	Function_19();
	if (Function_14(&iLocal_536, 60.0f))
	{
		if (!(((((((((Global_3380 || Global_3382) || Global_3367) || Global_63096) || Global_3395) || Global_3394) || Global_3384) || Global_3369) || Global_3396) || !IS_ACTOR_ALIVE(Global_34573)))
		{
			iVar0 = NET_MAILBOX_GET_NUM_CHALLENGES();
			if (iVar0 >= 0)
			{
				if (!Global_84611[19140].f_84 && NET_MAILBOX_IS_SIGNED_INTO_SC())
				{
					Function_13("SC_CHALLENGE_AVAILABLE_MSG", 6.0f, 1, 0, 2, 1, 0);
					Global_84611[19140].f_84 = 1;
				}
			}
		}
		Function_9(&iLocal_536);
	}
	return 0;
}

void Function_9(int iParam0) //Position: 0x41A / 1050
{
	Function_10(iParam0, 0.0f);
	return;
}

void Function_10(bool bParam0, float fParam1) //Position: 0x426 / 1062
{
	bParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_12(bParam0, 1);
	Function_11(bParam0, 2);
	bParam0->f_8 = 0.0f;
	return;
}

void Function_11(int iParam0, int iParam1) //Position: 0x447 / 1095
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
	return;
}

void Function_12(var uParam0, int iParam1) //Position: 0x45A / 1114
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_13(bool bParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x469 / 1129
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

bool Function_14(var uParam0, float fParam1) //Position: 0x4B4 / 1204
{
	if (Function_18(uParam0))
	{
		if (Function_15(uParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float Function_15(bool bParam0) //Position: 0x4D0 / 1232
{
	if (Function_18(bParam0))
	{
		if (Function_16(bParam0))
		{
			return StackVal;
		}
		return (StackVal - GET_CURRENT_GAME_TIME());
	}
	LOG_ERROR("ERROR: Trying to get value of TIMER that has not been started!");
	PRINTSTRING("WARNING: Trying to get value of TIMER that has not been started! Returning 0.0 \n");
	return StackVal;
}

bool Function_16(int iParam0) //Position: 0x598 / 1432
{
	return Function_17(*iParam0, 2);
}

bool Function_17(bool bParam0, int iParam1) //Position: 0x5A5 / 1445
{
	return (bParam0 && iParam1) == 0;
}

bool Function_18(bool bParam0) //Position: 0x5B2 / 1458
{
	return Function_17(*bParam0, 1);
}

void Function_19() //Position: 0x5BF / 1471
{
	if (Global_88794)
	{
		if ((GET_CURRENT_GAME_TIME() - Global_88817) < IntToFloat(SC_CHALLENGE_GET_MIN_LB_REFRESH_DELAY_SECS()) || Global_88817 != 0.0f)
		{
			if (GET_CURRENT_GAME_TIME() - Global_88817) < IntToFloat(SC_CHALLENGE_GET_MIN_LB_REFRESH_DELAY_SECS())
			{
			}
			else if (Global_88817 != 0.0f)
			{
			}
			Function_20();
		}
		else
		{
			Global_88794 = 0;
		}
	}
	return;
}

void Function_20() //Position: 0x60A / 1546
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_23();
	iVar0 = 0;
	while (iVar0 <= 20)
	{
		iVar1 = Global_84611[iVar0140].f_88;
		if (iVar1 >= 0)
		{
			if (!Global_84611[iVar0140].f_76)
			{
				if (Global_84611[iVar0140].f_68)
				{
					if (Function_22(iVar1, iVar0))
					{
						Global_84611[iVar0140].f_76 = 1;
					}
				}
				else if (Function_21(iVar1, iVar0))
				{
					Global_84611[iVar0140].f_76 = 1;
				}
				return;
			}
		}
		iVar0++;
	}
	return;
}

bool Function_21(int iParam0, int iParam1) //Position: 0x684 / 1668
{
	var uVar0[67];
	var uVar68[67];
	var uVar136[67];
	var uVar204[67];
	
	if (!StackVal)
	{
		if (!NET_CHALLENGE_LB_DOES_READER_EXIST())
		{
			if (NET_CHALLENGE_LB_CREATE_READER(iParam0, 0))
			{
				Global_87412[iParam169].f_8 = 1;
				iLocal_539 = 0;
				iLocal_540 = 0;
			}
			else
			{
				LOG_ERROR("YP Failed to create GAC reader");
			}
		}
		else
		{
			NET_CHALLENGE_LB_DESTROY_READER();
		}
	}
	if (StackVal)
	{
		if (NET_CHALLENGE_LB_DOES_READER_EXIST())
		{
			if (NET_CHALLENGE_LB_IS_READ_COMPLETE())
			{
				if (NET_CHALLENGE_LB_IS_TOP_FRIEND_INFO_VALID())
				{
					if (NET_CHALLENGE_LB_GET_TOP_FRIEND_STATS(&uVar0))
					{
						(*&Global_84611[iParam1140] + 144)[112] = TO_FLOAT(uVar0[66]);
						(*&Global_84611[iParam1140] + 144[112] + 32)[0] = uVar0[2] != 1;
						(*&Global_84611[iParam1140] + 144[112] + 32)[1] = uVar0[3] != 1;
						(*&Global_84611[iParam1140] + 144[112] + 32)[2] = uVar0[4] != 1;
						(&Global_84611[iParam1140] + 144[112])->f_4 = uVar0[40];
						strcpy(&Global_84611[iParam1140] + 144[112] + 8, NET_CHALLENGE_LB_GET_TOP_FRIEND_NAME(), 24);
					}
				}
				if (NET_CHALLENGE_LB_IS_TOP_SCORER_INFO_VALID())
				{
					if (NET_CHALLENGE_LB_GET_TOP_SCORER_STATS(&uVar68))
					{
						(*&Global_84611[iParam1140] + 144)[012] = TO_FLOAT(uVar68[66]);
						(*&Global_84611[iParam1140] + 144[012] + 32)[0] = uVar68[2] != 1;
						(*&Global_84611[iParam1140] + 144[012] + 32)[1] = uVar68[3] != 1;
						(*&Global_84611[iParam1140] + 144[012] + 32)[2] = uVar68[4] != 1;
						(&Global_84611[iParam1140] + 144[012])->f_4 = uVar68[40];
						strcpy(&Global_84611[iParam1140] + 144[012] + 8, NET_CHALLENGE_LB_GET_TOP_SCORER_NAME(), 24);
					}
				}
				if (NET_CHALLENGE_LB_IS_LOCAL_GAMER_INFO_VALID())
				{
					if (NET_CHALLENGE_LB_GET_LOCAL_GAMER_STATS(&uVar204))
					{
						if (StackVal || (StackVal > uVar204[40] != uVar204[40] && (*&Global_84611[iParam1140] + 144)[212] < TO_FLOAT(uVar204[66])))
						{
							(*&Global_84611[iParam1140] + 144)[212] = TO_FLOAT(uVar204[66]);
							(*&Global_84611[iParam1140] + 144[212] + 32)[0] = uVar204[2] != 1;
							(*&Global_84611[iParam1140] + 144[212] + 32)[1] = uVar204[3] != 1;
							(*&Global_84611[iParam1140] + 144[212] + 32)[2] = uVar204[4] != 1;
							(&Global_84611[iParam1140] + 144[212])->f_4 = uVar204[40];
						}
						strcpy(&Global_84611[iParam1140] + 144[212] + 8, NET_CHALLENGE_LB_GET_LOCAL_GAMER_NAME(), 24);
					}
				}
				if (NET_CHALLENGE_LB_IS_SCORER_ABOVE_PLAYER_INFO_VALID())
				{
					if (NET_CHALLENGE_LB_GET_SCORER_ABOVE_PLAYER_STATS(&uVar136))
					{
						(*&Global_84611[iParam1140] + 144)[512] = TO_FLOAT(uVar136[66]);
						(*&Global_84611[iParam1140] + 144[512] + 32)[0] = uVar136[2] != 1;
						(*&Global_84611[iParam1140] + 144[512] + 32)[1] = uVar136[3] != 1;
						(*&Global_84611[iParam1140] + 144[512] + 32)[2] = uVar136[4] != 1;
						(&Global_84611[iParam1140] + 144[512])->f_4 = uVar136[40];
						strcpy(&Global_84611[iParam1140] + 144[512] + 8, NET_CHALLENGE_LB_GET_SCORER_ABOVE_PLAYER_NAME(), 24);
					}
				}
				Global_87412[iParam169].f_8 = 0;
				NET_CHALLENGE_LB_DESTROY_READER();
				return 1;
			}
			if (iLocal_539 <= 30)
			{
				iLocal_539++;
			}
			else
			{
				Global_87412[iParam169].f_8 = 0;
				NET_CHALLENGE_LB_DESTROY_READER();
				return 1;
			}
		}
		if (iLocal_540 <= 30)
		{
			iLocal_540++;
		}
		else
		{
			Global_87412[iParam169].f_8 = 0;
			return 1;
		}
	}
	return 0;
}

bool Function_22(int iParam0, int iParam1) //Position: 0xA2C / 2604
{
	var uVar0[67];
	var uVar68[67];
	var uVar136[67];
	
	if (Function_17(Global_88819[iParam1], 2))
	{
		return 1;
	}
	if (!StackVal)
	{
		if (!NET_CHALLENGE_LB_DOES_READER_EXIST())
		{
			if (NET_CHALLENGE_LB_CREATE_READER(iParam0, 1))
			{
				Global_87412[iParam169].f_8 = 1;
				iLocal_539 = 0;
				iLocal_540 = 0;
			}
			else
			{
				LOG_ERROR("YP Failed to create GS reader");
			}
		}
		else
		{
			NET_CHALLENGE_LB_DESTROY_READER();
		}
	}
	if (StackVal)
	{
		if (NET_CHALLENGE_LB_DOES_READER_EXIST())
		{
			if (NET_CHALLENGE_LB_IS_READ_COMPLETE())
			{
				if (NET_CHALLENGE_LB_IS_TOP_FRIEND_INFO_VALID())
				{
					if (NET_CHALLENGE_LB_GET_TOP_FRIEND_STATS(&uVar0))
					{
						(*&Global_84611[iParam1140] + 144)[112] = TO_FLOAT(uVar0[1]);
						strcpy(&Global_84611[iParam1140] + 144[112] + 8, NET_CHALLENGE_LB_GET_TOP_FRIEND_NAME(), 24);
					}
				}
				if (NET_CHALLENGE_LB_IS_TOP_SCORER_INFO_VALID())
				{
					if (NET_CHALLENGE_LB_GET_TOP_SCORER_STATS(&uVar68))
					{
						(*&Global_84611[iParam1140] + 144)[012] = TO_FLOAT(uVar68[1]);
						strcpy(&Global_84611[iParam1140] + 144[012] + 8, NET_CHALLENGE_LB_GET_TOP_SCORER_NAME(), 24);
					}
				}
				if (NET_CHALLENGE_LB_IS_SCORER_ABOVE_PLAYER_INFO_VALID())
				{
					if (NET_CHALLENGE_LB_GET_SCORER_ABOVE_PLAYER_STATS(&uVar136))
					{
						(*&Global_84611[iParam1140] + 144)[512] = TO_FLOAT(uVar136[1]);
						strcpy(&Global_84611[iParam1140] + 144[512] + 8, NET_CHALLENGE_LB_GET_SCORER_ABOVE_PLAYER_NAME(), 24);
					}
				}
				Global_87412[iParam169].f_8 = 0;
				NET_CHALLENGE_LB_DESTROY_READER();
				if (Function_17(Global_88819[iParam1], 1))
				{
					if (!Function_17(Global_88819[iParam1], 2))
					{
						Function_12(&(Global_88819[iParam1]), 2);
					}
				}
				return 1;
			}
			if (iLocal_539 <= 30)
			{
				iLocal_539++;
			}
			else
			{
				Global_87412[iParam169].f_8 = 0;
				NET_CHALLENGE_LB_DESTROY_READER();
				return 1;
			}
		}
		if (iLocal_540 <= 30)
		{
			iLocal_540++;
		}
		else
		{
			Global_87412[iParam169].f_8 = 0;
			return 1;
		}
	}
	return 0;
}

void Function_23() //Position: 0xC04 / 3076
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<173> Var3;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 <= 20)
	{
		if (Global_84611[iVar0140].f_88 >= 0)
		{
			iVar2++;
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 20)
	{
		if (Global_84611[iVar0140].f_76)
		{
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	if (iVar1 == iVar2)
	{
		iVar0 = 0;
		while (iVar0 <= 20)
		{
			Global_84611[iVar0140].f_76 = 0;
			iVar0++;
		}
		Global_88794 = 0;
		Global_88817 = GET_CURRENT_GAME_TIME();
		*(&Var3 + 80) = 3;
		RETRIEVE_GAME_STATE(&Var3, 44, 1);
		Var3.f_172 = Global_88817;
		STORE_GAME_STATE(&Var3, 44, 1);
	}
	return;
}

void Function_24() //Position: 0xCB8 / 3256
{
	if (Global_88793)
	{
		if ((GET_CURRENT_GAME_TIME() - Global_88818) < IntToFloat(SC_CHALLENGE_GET_MIN_SUBMIT_DELAY_SECS()) && Global_88818 < 0.0f)
		{
			Function_25(1);
			Global_88818 = GET_CURRENT_GAME_TIME();
			Global_88793 = 0;
		}
		else if (Global_88818 != 0.0f)
		{
			Global_88818 = GET_CURRENT_GAME_TIME();
			Global_88793 = 0;
		}
		else
		{
			Global_88793 = 0;
		}
	}
	return;
}

void Function_25(var uParam0) //Position: 0xD0C / 3340
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 20)
	{
		iVar1 = Global_84611[iVar0140].f_88;
		if (iVar1 >= 0)
		{
			if (Global_84611[iVar0140].f_72)
			{
				if (Global_84611[iVar0140].f_68 && uParam0)
				{
					Global_87412[iVar069].f_20 = (ROUND((*&Global_84611[iVar0140] + 144)[412]) - Global_87412[iVar069].f_24);
					iVar2 = 0;
					while (iVar2 <= 30)
					{
						(*&Global_87412[iVar069] + 28)[iVar2] = ((*&Global_84611[iVar0140] + 436)[iVar2] - (*&Global_87412[iVar069] + 152)[iVar2]);
						iVar2++;
					}
					if (Global_87412[iVar069].f_20 >= 0)
					{
						Function_28(iVar1, iVar0, 4294967295, Global_84611[iVar0140].f_68);
					}
					Global_87412[iVar069].f_24 = ROUND((*&Global_84611[iVar0140] + 144)[412]);
					Global_87412[iVar069].f_20 = 0;
					iVar2 = 0;
					while (iVar2 <= 30)
					{
						(*&Global_87412[iVar069] + 152)[iVar2] = (*&Global_84611[iVar0140] + 436)[iVar2];
						(*&Global_87412[iVar069] + 28)[iVar2] = 0;
						iVar2++;
					}
				}
			}
			Function_26();
		}
		iVar0++;
	}
	return;
}

void Function_26() //Position: 0xE42 / 3650
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 20)
	{
		Function_27(iVar0);
		iVar0++;
	}
	return;
}

void Function_27(int iParam0) //Position: 0xE60 / 3680
{
	if (!Global_84611[iParam0140].f_72)
	{
		Global_87412[iParam069].f_24 = 0;
		Global_87412[iParam069].f_20 = 0;
	}
	return;
}

void Function_28(int iParam0, int iParam1, int iParam2, bool bParam3) //Position: 0xE8A / 3722
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

void Function_29() //Position: 0xFA3 / 4003
{
	Function_9(&iLocal_527);
	Function_9(&iLocal_530);
	Function_9(&iLocal_533);
	Function_9(&iLocal_536);
	return;
}

void Function_30(int iParam0) //Position: 0xFC1 / 4033
{
	strcpy(iParam0 + 12, "ITEMEFFECTS", 16);
	*iParam0 = 10407;
	iParam0->f_4 = 4108;
	iParam0->f_8 = 4087;
	iParam0->f_28 = 1;
	return;
}

void Function_31() //Position: 0xFF7 / 4087
{
	if (IS_OBJECT_VALID(bLocal_581))
	{
		DESTROY_OBJECT(bLocal_581);
	}
	return;
}

var Function_32() //Position: 0x100C / 4108
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = 0;
	iVar2 = 0;
	bVar0 = false;
	while (bVar0 <= vLocal_541)
	{
		switch (bVar0)
		{
			case 0x00000000:
				if (vLocal_541[bVar03].z)
				{
					if (vLocal_541[bVar03].y + vLocal_541[bVar03]) > GET_CURRENT_GAME_TIME()
					{
						SET_INFINITE_DEADEYE(0, 0);
						SET_DEADEYE_BLINK(0.0f);
						DECOR_REMOVE(Global_34573, "nmoonshine");
						vLocal_541[bVar03].f_8 = 0;
					}
				}
				else if (DECOR_CHECK_EXIST(Global_34573, "nmoonshine"))
				{
					vLocal_541[bVar03] = DECOR_GET_FLOAT(Global_34573, "nmoonshine");
					vLocal_541[bVar03].f_4 = GET_CURRENT_GAME_TIME();
					vLocal_541[bVar03].f_8 = 1;
					SET_INFINITE_DEADEYE(0, 1);
					SET_DEADEYE_BLINK(10.0f);
				}
				break;
			
			case 0x00000001:
				if (vLocal_541[bVar03].z)
				{
					if (vLocal_541[bVar03].y + vLocal_541[bVar03]) > GET_CURRENT_GAME_TIME()
					{
						if (IS_ACTOR_VALID(bLocal_580) && DECOR_CHECK_EXIST(bLocal_580, "horse_pills_effect"))
						{
							if (HORSE_UNLOCK_FRESHNESS(bLocal_580))
							{
								DECOR_REMOVE(bLocal_580, "horse_pills_effect");
								vLocal_541[bVar03].f_8 = 0;
							}
						}
						else
						{
							vLocal_541[bVar03].f_8 = 0;
						}
					}
				}
				else if (DECOR_CHECK_EXIST(Global_34573, "horse_pills"))
				{
					vLocal_541[bVar03] = DECOR_GET_FLOAT(Global_34573, "horse_pills");
					vLocal_541[bVar03].f_4 = GET_CURRENT_GAME_TIME();
					vLocal_541[bVar03].f_8 = 1;
					bLocal_580 = GET_MOUNT(Global_34573);
					if (IS_ACTOR_VALID(bLocal_580))
					{
						HORSE_SET_CURR_FRESHNESS(bLocal_580, 1.0f);
						HORSE_LOCK_FRESHNESS(bLocal_580);
						DECOR_SET_BOOL(bLocal_580, "horse_pills_effect", true);
					}
					DECOR_REMOVE(Global_34573, "horse_pills");
				}
				break;
			
			case 0x00000002:
				if (vLocal_541[bVar03].z)
				{
					if (DECOR_CHECK_EXIST(Global_34573, "CreateDecal"))
					{
						Function_66();
						if (!DECOR_CHECK_EXIST(Global_34573, "fakeBait"))
						{
							bLocal_563 = ADD_BLIP_FOR_COORD(&vLocal_564, 335, 0, 2, 0);
						}
						DECOR_REMOVE(Global_34573, "CreateDecal");
					}
					if (Function_64(StackVal, StackVal, Global_34573, vLocal_564) > 5.0f && !HUD_IS_SHOWING_HELP_TEXT())
					{
						Function_13("item_bait_move", 10.0f, 1, 0, 0, 0, 0);
					}
					if (!iLocal_571)
					{
						if (Function_61(StackVal, StackVal, vLocal_572))
						{
						}
						else
						{
							if (IS_BLIP_VALID(bLocal_563))
							{
								REMOVE_BLIP(bLocal_563);
							}
							DECOR_REMOVE(Global_34573, "bait");
							DECOR_REMOVE(Global_34573, "baitSafePos");
							vLocal_541[bVar03].f_8 = 0;
						}
					}
					else if (iLocal_571)
					{
						iVar3 = 1;
						iVar2 = 0;
						while (iVar2 <= bLocal_554)
						{
							if (IS_ACTOR_VALID(bLocal_554[iVar2]))
							{
								iVar3 = 0;
								if (Function_64(StackVal, StackVal, bLocal_554[iVar1], vLocal_564) > 4.0f)
								{
									TASK_PRIORITY_SET(bLocal_554[iVar2], 2);
									SET_ACTOR_UPDATE_PRIORITY(bLocal_554[iVar2], false);
								}
							}
							iVar2++;
						}
					}
					if ((vLocal_541[bVar03].y + vLocal_541[bVar03]) > GET_CURRENT_GAME_TIME() || iVar3)
					{
						if (IS_BLIP_VALID(bLocal_563))
						{
							REMOVE_BLIP(bLocal_563);
						}
						iVar1 = 0;
						while (iVar1 <= bLocal_554)
						{
							if (IS_OBJECT_VALID(bLocal_554[iVar1]))
							{
								RELEASE_ACTOR_AS_AMBIENT(bLocal_554[iVar1]);
							}
							iVar1++;
						}
						iLocal_571 = 0;
						DECOR_REMOVE(Global_34573, "bait");
						DECOR_REMOVE(Global_34573, "baitSafePos");
						vLocal_541[bVar03].f_8 = 0;
					}
					else if (StackVal && Function_64(StackVal, !Function_60(StackVal, StackVal, vLocal_564), Global_34573, vLocal_564) < 200.0f)
					{
						if (IS_BLIP_VALID(bLocal_563))
						{
							REMOVE_BLIP(bLocal_563);
						}
						iVar1 = 0;
						while (iVar1 <= bLocal_554)
						{
							if (IS_OBJECT_VALID(bLocal_554[iVar1]))
							{
								RELEASE_ACTOR_AS_AMBIENT(bLocal_554[iVar1]);
							}
							iVar1++;
						}
						iLocal_571 = 0;
						DECOR_REMOVE(Global_34573, "bait");
						DECOR_REMOVE(Global_34573, "baitSafePos");
						vLocal_541[bVar03].f_8 = 0;
					}
				}
				else if (DECOR_CHECK_EXIST(Global_34573, "bait"))
				{
					if (DECOR_CHECK_EXIST(Global_34573, "CreateDecal"))
					{
						Function_66();
						bLocal_563 = ADD_BLIP_FOR_COORD(&vLocal_564, 335, 0, 2, 0);
						DECOR_REMOVE(Global_34573, "CreateDecal");
					}
					if (iLocal_562 == 0)
					{
						Function_36(bVar0);
					}
					if (iLocal_562 <= 5)
					{
						if (Function_35(&vLocal_572))
						{
							if (Function_34(StackVal, StackVal, vLocal_572))
							{
								bLocal_568 = true;
							}
						}
					}
					else if (iLocal_562 <= 10)
					{
						if (Function_33(&vLocal_572))
						{
							if (Function_34(StackVal, StackVal, vLocal_572))
							{
								bLocal_568 = true;
							}
						}
					}
					iLocal_562++;
					if (bLocal_568)
					{
						if (IS_OBJECT_VALID(bLocal_570))
						{
							if (NAV_QUERY_IS_DONE(bLocal_570))
							{
								NAV_QUERY_RECEIVE_CAN_PATH_TO_POINT(bLocal_570, &bLocal_569);
								NAV_QUERY_STOP(bLocal_570);
								DESTROY_OBJECT(bLocal_570);
							}
							else
							{
								break;
							}
						}
						if (bLocal_569)
						{
							vLocal_572 = { StackVal, StackVal, vLocal_575 };
						}
						else
						{
							bLocal_570 = CREATE_NAV_QUERY(Global_30616, "item_bait_navquery");
							vLocal_575 = { StackVal, StackVal, vLocal_572 };
						}
					}
				}
			}
		}
	}
}
}

bool Function_33(int iParam0) //Position: 0x1724 / 5924
{
	AMBIENT_RESET_FILTER(1);
	AMBIENT_SET_ONESHOT_QUERIES(1);
	AMBIENT_SET_RANDOM_SEARCH_ORDER(1);
	AMBIENT_SET_MATERIAL_IN_AREA_EXCLUDES_FILTER(1664, 4.0f, 0);
	AMBIENT_SET_MATERIAL_IN_AREA_INCLUDES_FILTER(1, 4.0f, 0);
	AMBIENT_SET_MATERIAL_IN_AREA_INCLUDES_FILTER(2, 0.0f, 1);
	AMBIENT_SET_MATERIAL_IN_AREA_EXCLUDES_FILTER(64, 8.0f, 1);
	AMBIENT_SET_ELEVATION_FILTER(-10.0f, 10.0f);
	AMBIENT_ENABLE_OFFSCREEN_FILTER(1);
	AMBIENT_SET_SEARCH_CENTER_PLAYER();
	AMBIENT_SET_DISTANCE_FILTER(50.0f, 120.0f);
	AMBIENT_SET_SLOPE_FILTER_PRECISE(0.0f, 19,9f, 4.0f);
	AMBIENT_SET_BUMP_FILTER(0.0f, 0,6f, 4.0f);
	return AMBIENT_GET_POINT(iParam0, 0);
}

bool Function_34(vector3 vParam0) //Position: 0x1790 / 6032
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

bool Function_35(int iParam0) //Position: 0x1801 / 6145
{
	AMBIENT_RESET_FILTER(1);
	AMBIENT_SET_ONESHOT_QUERIES(1);
	AMBIENT_SET_RANDOM_SEARCH_ORDER(1);
	AMBIENT_SET_MATERIAL_IN_AREA_EXCLUDES_FILTER(1664, 8.0f, 0);
	AMBIENT_SET_MATERIAL_IN_AREA_INCLUDES_FILTER(1, 4.0f, 0);
	AMBIENT_SET_MATERIAL_IN_AREA_INCLUDES_FILTER(4, -4.0f, 1);
	AMBIENT_SET_MATERIAL_IN_AREA_EXCLUDES_FILTER(64, 12.0f, 1);
	AMBIENT_SET_ELEVATION_FILTER(-6.0f, 6.0f);
	AMBIENT_ENABLE_OFFSCREEN_FILTER(1);
	AMBIENT_SET_SEARCH_CENTER_PLAYER();
	AMBIENT_SET_DISTANCE_FILTER(50.0f, 100.0f);
	AMBIENT_SET_SLOPE_FILTER_PRECISE(0.0f, 9,9f, 4.0f);
	AMBIENT_SET_BUMP_FILTER(0.0f, 0,4f, 4.0f);
	return AMBIENT_GET_POINT(iParam0, 0);
}

void Function_36(int iParam0) //Position: 0x1871 / 6257
{
	iLocal_571 = 0;
	bLocal_568 = false;
	bLocal_569 = false;
	vLocal_572 = { 0.0f, 0.0f, 0.0f };
	vLocal_575 = { 0.0f, 0.0f, 0.0f };
	vLocal_564 = { StackVal, StackVal, Global_34574 };
	uLocal_567 = Function_59(Global_34573);
	Function_48(&bLocal_578);
	if (IS_OBJECT_VALID(bLocal_570))
	{
		NAV_QUERY_STOP(bLocal_570);
		DESTROY_OBJECT(bLocal_570);
	}
	if (IS_BLIP_VALID(bLocal_563))
	{
		REMOVE_BLIP(bLocal_563);
	}
	if (!Function_44(Global_34573, 0, 0))
	{
		if (IS_OBJECT_VALID(bLocal_581))
		{
			DESTROY_OBJECT(bLocal_581);
		}
		if (IS_LAYOUTREF_VALID(Global_30616))
		{
			bLocal_581 = CREATE_GRINGO_IN_LAYOUT(Global_30616, "nitem_bait", "nitem_bait", vLocal_564, 0.0f, uLocal_567, 0.0f);
			SNAP_ACTOR_TO_GRINGO(Global_34573, bLocal_581, "UseCase1", false, 0, 0);
			TASK_USE_GRINGO(Global_34573, GET_GRINGO_FROM_OBJECT(bLocal_581), "UseCase1", true, 1);
			if (DECOR_CHECK_EXIST(Global_34573, "CreateDecal"))
			{
				Function_66();
				bLocal_563 = ADD_BLIP_FOR_COORD(&vLocal_564, 335, 0, 2, 0);
				DECOR_REMOVE(Global_34573, "CreateDecal");
			}
		}
		else
		{
			Function_66();
			bLocal_563 = ADD_BLIP_FOR_COORD(&vLocal_564, 335, 0, 2, 0);
		}
		if (!Function_43(Global_76849, 32))
		{
			HUD_CLEAR_HELP();
			Function_38(Global_34573, 32, 4, 0);
		}
	}
	else
	{
		Function_13("item_bait_disabled", 0x41200000, 1, 0, 2, 1, 0);
		DECOR_REMOVE(Global_34573, "bait");
		DECOR_REMOVE(Global_34573, "baitSafePos");
		ADD_ITEM(Function_37(6), Global_34573, 0);
		vLocal_541[iParam03].f_8 = 0;
	}
	return;
}

var Function_37(bool bParam0) //Position: 0x1A1B / 6683
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

void Function_38(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x1B0C / 6924
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_40(bParam0, iParam1, iParam2) && !bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_39(&cVar1, iParam2);
	if (!DECOR_CHECK_EXIST(bParam0, &cVar1))
	{
		DECOR_SET_INT(bParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(bParam0, &cVar1, (DECOR_GET_INT(bParam0, &cVar1) || bVar0));
	}
}

void Function_39(char* cParam0, int iParam1) //Position: 0x1B78 / 7032
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

bool Function_40(bool bParam0, var uParam1, int iParam2) //Position: 0x1BAF / 7087
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
		if (Function_42(DECOR_GET_INT(bParam0, &cVar1)) > 3)
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
		switch (Function_41(uVar0))
		{
			case 0x00000002:
				if (!Function_43(Global_76847, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_41(char* cParam0) //Position: 0x1C27 / 7207
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

int Function_42(int iParam0) //Position: 0x1CC8 / 7368
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_11(&iVar1, 2147483648);
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

bool Function_43(var uParam0, int iParam1) //Position: 0x1D05 / 7429
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

bool Function_44(bool bParam0, bool bParam1, bool bParam2) //Position: 0x1D18 / 7448
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
	if (IS_ACTOR_BEING_DRAGGED(bParam0, 0,3f))
	{
		return 1;
	}
	if (Function_47(bParam0))
	{
		return 1;
	}
	if (Function_46(bParam0))
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
	if (Function_45())
	{
		return 1;
	}
	return 0;
}

bool Function_45() //Position: 0x1DCE / 7630
{
	return ((Global_34578 != 0 || Global_34578 != 2) || Global_34578 != 3);
}

bool Function_46(bool bParam0) //Position: 0x1DE5 / 7653
{
	return IS_ACTOR_IN_HOGTIE(bParam0);
}

bool Function_47(bool bParam0) //Position: 0x1DF0 / 7664
{
	return IS_ACTOR_VALID(GET_LASSO_USER(bParam0));
}

void Function_48(int iParam0) //Position: 0x1DFE / 7678
{
	if (Function_58(Global_30750[10], 0, 4294967295, 0))
	{
		if (Function_57(Global_30750[10], 0, 0, 0) == 4294967295 && Function_57(Global_30750[10], 0, 0, 0) == 0)
		{
			if (DECOR_CHECK_EXIST(Global_34573, "fakeBait"))
			{
				*iParam0 = DECOR_GET_INT(Global_34573, "fakeBait");
			}
			else
			{
				*iParam0 = Function_50(Global_30750[10], 0, 0, 4294967295, 0);
			}
		}
		else
		{
			Function_13("item_bait_no_animals", 0x41200000, 1, 0, 2, 1, 0);
			return;
		}
	}
	Function_13("item_bait_no_animals", 0x41200000, 1, 0, 2, 1, 0);
	return;
	if (Function_49(*iParam0))
	{
		bLocal_579 = GET_ACTOR_ENUM_STRING_FROM_ENUM(*iParam0);
		if ((STRING_CONTAINS_STRING(bLocal_579, "Cougar") || STRING_CONTAINS_STRING(bLocal_579, "Bobcat")) || STRING_CONTAINS_STRING(bLocal_579, "Bear"))
		{
			iLocal_561 = 1;
			if (DECOR_CHECK_EXIST(Global_34573, "fakeBait"))
			{
				if (STRING_CONTAINS_STRING(bLocal_579, "Bobcat"))
				{
					iLocal_561 = 3;
				}
			}
		}
		else if (STRING_CONTAINS_STRING(bLocal_579, "Wolf") || STRING_CONTAINS_STRING(bLocal_579, "Coyote"))
		{
			iLocal_561 = RAND_INT_RANGE(2, 4);
			if (DECOR_CHECK_EXIST(Global_34573, "fakeBait"))
			{
				iLocal_561 = 4;
			}
		}
		else if (STRING_CONTAINS_STRING(bLocal_579, "Buck") || STRING_CONTAINS_STRING(bLocal_579, "Fox"))
		{
			iLocal_561 = RAND_INT_RANGE(true, 2);
			if (DECOR_CHECK_EXIST(Global_34573, "fakeBait"))
			{
				iLocal_561 = 3;
			}
		}
		else if (STRING_CONTAINS_STRING(bLocal_579, "Deer"))
		{
			iLocal_561 = RAND_INT_RANGE(3, 5);
		}
		else if (STRING_CONTAINS_STRING(bLocal_579, "Boar"))
		{
			iLocal_561 = RAND_INT_RANGE(true, 3);
			if (DECOR_CHECK_EXIST(Global_34573, "fakeBait"))
			{
				iLocal_561 = 2;
			}
		}
		else
		{
			iLocal_561 = RAND_INT_RANGE(3, 6);
			if (DECOR_CHECK_EXIST(Global_34573, "fakeBait"))
			{
				iLocal_561 = 4;
			}
		}
	}
	return;
}

bool Function_49(bool bParam0) //Position: 0x2026 / 8230
{
	if (bParam0 > 0 || bParam0 <= 1204)
	{
		return 0;
	}
	return 1;
}

var Function_50(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x203D / 8253
{
	return Function_51(uParam0, uParam1, uParam2, uParam3, uParam4, 0, 0.0f, 0.0f, 0.0f);
}

var Function_51(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, vector3 vParam6) //Position: 0x2056 / 8278
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
		Function_56();
	}
	bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, bParam4, fParam5, vParam6);
	if (!Function_49(bVar1))
	{
		if (!Global_30837 && !Global_30838)
		{
			Function_55(bParam0, bParam1, bParam2, bParam3, bParam4);
			LOG_ERROR("Did a random on popset, and got back a -1");
		}
		Function_55(bParam0, bParam1, bParam2, bParam3, bParam4);
		LOG_ERROR("Did a random on popset, and got back a -1");
		return 4294967295;
	}
	bVar0 = bVar1;
	if (bParam1 || (!bParam3 != 4294967295 && !bParam3 != GET_ACTORENUM_SPECIES(bVar1)))
	{
		if (bParam1 && bParam3 != 4294967295)
		{
			while (Function_54(bVar0) && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, false, fParam5, vParam6);
				if (Function_49(bVar1))
				{
					bVar0 = bVar1;
				}
				iVar2++;
			}
			if (bParam1)
			{
				if (Function_54(bVar0))
				{
					Function_53();
				}
				Function_52(bVar0);
			}
		}
		else if (!bParam3 != 4294967295)
		{
			while (!GET_ACTORENUM_SPECIES(bVar1) != bParam3 && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, false, fParam5, vParam6);
				if (Function_49(bVar1))
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

void Function_52(int iParam0) //Position: 0x2349 / 9033
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

void Function_53() //Position: 0x23FD / 9213
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

bool Function_54(bool bParam0) //Position: 0x2437 / 9271
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

void Function_55(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x2464 / 9316
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

void Function_56() //Position: 0x25B5 / 9653
{
	int iVar0;
	
	if (Global_3402)
	{
		if (StackVal || !Global_30742 != GET_THIS_SCRIPT_ID() < GET_CURRENT_GAME_TIME())
		{
			Function_53();
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
	Function_53();
	return;
}

int Function_57(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x2600 / 9728
{
	return GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam1, bParam2, bParam3, 0f, 0.0f, 0.0f, 0.0f);
}

bool Function_58(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x2617 / 9751
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

var Function_59(bool bParam0) //Position: 0x263E / 9790
{
	return GET_HEADING(bParam0);
}

bool Function_60(vector3 vParam0) //Position: 0x2649 / 9801
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

bool Function_61(vector3 vParam0) //Position: 0x2661 / 9825
{
	int iVar0;
	struct<8> Var1;
	
	if (Function_49(bLocal_578))
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 <= iLocal_561)
		{
			Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_62("BAIT_ANIMAL") };
			vLocal_572.f_8 = (vLocal_572.z + 0,25f);
			bLocal_554[iVar0] = CREATE_ACTOR_IN_LAYOUT(Global_30616, &Var1, bLocal_578, vParam0, 0.0f, 0.0f, 0.0f);
			TASK_GO_NEAR_COORD(bLocal_554[iVar0], &vLocal_564, 1.0f, 4);
			TASK_PRIORITY_SET(bLocal_554[iVar0], false);
			SET_ACTOR_UPDATE_PRIORITY(bLocal_554[iVar0], false);
			iVar0++;
		}
		iLocal_571 = 1;
		return 1;
	}
	return 0;
}

struct<32> Function_62(bool bParam0) //Position: 0x26F5 / 9973
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_63("0", &cVar8, ""), 4);
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

struct<32> Function_63(char* cParam0, char* cParam1, char* cParam2) //Position: 0x275F / 10079
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	stradd(&cVar0, cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

float Function_64(bool bParam0, vector3 vParam1) //Position: 0x277E / 10110
{
	vector3 vVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_65(bParam0);
		vVar0 = { StackVal, StackVal, Function_65(bParam0) };
		return VDIST(vVar0, vParam1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

vector3 Function_65(bool bParam0) //Position: 0x27F8 / 10232
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

void Function_66() //Position: 0x2862 / 10338
{
	vector3 vVar0;
	vector3 vVar3;
	
	vVar0 = { StackVal, StackVal, vLocal_564 };
	UNK_0x44986367(&vVar3, Function_59(Global_34573));
	VNORMALIZE(&vVar3);
	VSCALE(&vVar3, 0,4f);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar3, vVar0, StackVal) };
	CREATE_DECAL(2, vVar0, 0,8f, 0, 0);
	return;
}

void Function_67() //Position: 0x28A7 / 10407
{
	return;
}

void Function_68(int iParam0) //Position: 0x28AD / 10413
{
	strcpy(iParam0 + 12, "PLAYER HORSE", 16);
	*iParam0 = 15826;
	iParam0->f_4 = 10536;
	iParam0->f_8 = 10468;
	iParam0->f_28 = 1;
	return;
}

void Function_69() //Position: 0x28E4 / 10468
{
	Function_11(&Global_12976 + 36 + 20, 1);
	Function_11(&Global_12976 + 36 + 20, 32);
	Function_11(&Global_12976 + 36 + 20, 0x40000000);
	Function_11(&Global_12976 + 36 + 20, 128);
	Function_11(&Global_12976 + 36 + 20, 64);
	return;
}

int Function_70() //Position: 0x2928 / 10536
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	bool bVar5;
	vector3 vVar6;
	vector3 vVar9;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	char* cVar18[16];
	bool bVar22;
	vector3 vVar23;
	bool bVar26;
	bool bVar27;
	
	if (Global_3365 && !Function_100(2, 0))
	{
		return 0;
	}
	if (IS_ACTOR_VALID(GET_MOUNT(Global_34573)))
	{
		if (IS_ACTOR_MULE(GET_MOUNT(Global_34573)) && IS_ACTOR_RIDING_AND_IN_SADDLE(Global_34573))
		{
			if (!Function_43(Global_76846, 0x8000000))
			{
				Function_38(Global_34573, 0x8000000, 1, 0);
			}
		}
		if (DECOR_CHECK_EXIST(GET_MOUNT(Global_34573), "HorseLeash"))
		{
			DESTROY_OBJECT(DECOR_GET_OBJECT(GET_MOUNT(Global_34573), "HorseLeash"));
			DECOR_REMOVE(GET_MOUNT(Global_34573), "HorseLeash");
		}
	}
	if (IS_ACTOR_VALID(Global_12976.f_36))
	{
		if (!Function_99(Global_12976.f_36))
		{
			Function_98(Global_12976.f_36);
		}
		if (!IS_ACTOR_ALIVE(Global_34573))
		{
			if (HUD_IS_FADED() || !Function_97(Global_12976.f_36))
			{
				(&Global_12976 + 36)->f_24 = 4294967294;
				RELEASE_ACTOR(Global_12976.f_36);
				Global_12976.f_36 = "";
			}
			return 0;
		}
		Function_96(Global_12976.f_36);
		if ((((((!STREAMING_ARE_BOUNDS_LOADED(Function_96(Global_12976.f_36), 5.0f) && !Global_3379) && !Global_3380) && !HUD_IS_FADED()) && !HUD_IS_FADING()) && !GET_RIDER(Global_12976.f_36) != Global_34573) && Function_64(Global_12976.f_36, 0.0f, 0.0f, 0.0f) < 75.0f)
		{
			DESTROY_ACTOR(Global_12976.f_36);
			(&Global_12976 + 36)->f_24 = 4294967294;
			Global_12976.f_36 = "";
			return 0;
		}
		if (IS_ACTOR_MOUNTED(Global_12976.f_36))
		{
			if (IS_BLIP_VALID(Global_12976.f_240))
			{
				REMOVE_BLIP(Global_12976.f_240);
			}
			if (GET_TASK_STATUS(Global_12976.f_36, 86) != 2)
			{
				TASK_CLEAR(Global_12976.f_36);
			}
			bVar0 = GET_RIDER(Global_12976.f_36);
			if (bVar0 != Global_34573)
			{
				bVar1 = true;
				if (GET_ACTOR_FACTION(bVar0) == 20)
				{
					bVar1 = false;
				}
				if (bVar1)
				{
					if (DECOR_CHECK_EXIST(Global_12976.f_36, "NextNuRiderPollTime"))
					{
						if (!(GET_CURRENT_GAME_TIME() - DECOR_GET_FLOAT(Global_12976.f_36, "NextNuRiderPollTime")) < 0.0f)
						{
							bVar1 = false;
						}
					}
				}
				if (bVar1)
				{
					if (!(NET_IS_IN_SESSION() || Function_1()) && !DECOR_CHECK_EXIST(Global_34573, "HorseStolen"))
					{
						DECOR_SET_OBJECT(Global_34573, "HorseStolen", Global_12976.f_36);
						DECOR_REMOVE(Global_12976.f_36, "NextNuRiderPollTime");
					}
					else
					{
						(&Global_12976 + 36)->f_28 = 0;
						if (IS_BLIP_VALID(Global_12976.f_240))
						{
							REMOVE_BLIP(Global_12976.f_240);
						}
						TASK_CLEAR(Global_12976.f_36);
					}
					Global_12976.f_36 = "";
					Global_12976.f_72 = "";
					Global_12976.f_236 = 0;
				}
			}
			else
			{
				if (DECOR_CHECK_EXIST(Global_34573, "HorseStolen"))
				{
					DECOR_REMOVE(Global_34573, "HorseStolen");
				}
				if (DECOR_CHECK_EXIST(Global_12976.f_36, "WhistleResponse_WipeMe"))
				{
					DECOR_REMOVE(Global_12976.f_36, "WhistleResponse_WipeMe");
				}
				if (!(NET_IS_IN_SESSION() || Function_1()))
				{
					uVar3 = Function_91(7, 0, 5);
					iVar4 = Function_91(8, 0, 5);
					iVar2 = ((ROUND(GET_CURRENT_GAME_TIME()) - Function_90(uVar3)) + Function_90(iVar4));
					if (!Global_3381)
					{
						if (iVar2 == 3600)
						{
							SET_STAMINA_BLINK(3.0f);
							SET_ACTOR_MAX_FRESHNESS(Global_12976.f_36, 100.0f);
							Function_13("mount_bond_stage3", 0x41200000, 1, 0, 2, 1, 0);
						}
						else if (iVar2 == 900)
						{
							SET_STAMINA_BLINK(3.0f);
							SET_ACTOR_MAX_FRESHNESS(Global_12976.f_36, 85.0f);
							Function_13("mount_bond_stage2", 0x41200000, 1, 0, 2, 1, 0);
						}
					}
					if (!Global_3380 && GET_TASK_STATUS(Global_12976.f_36, 19) != 1)
					{
						TASK_CLEAR(Global_12976.f_36);
					}
				}
			}
		}
		if (IS_ACTOR_VALID(Global_12976.f_36))
		{
			if (IS_ACTOR_DEAD(Global_12976.f_36))
			{
				if (!DECOR_CHECK_EXIST(Global_34573, "PlayerHorse_DeathTime"))
				{
					DECOR_SET_FLOAT(Global_34573, "PlayerHorse_DeathTime", GET_CURRENT_GAME_TIME());
				}
			}
		}
	}
	if (IS_ACTOR_VALID(GET_MOUNT(Global_34573)))
	{
		Global_12976.f_236 = 0;
		return 0;
	}
	if (Function_1() || NET_IS_IN_SESSION())
	{
		return 0;
	}
	if (!IS_LAYOUTREF_VALID(Global_30616))
	{
		return 0;
	}
	if (!Function_89())
	{
		return 0;
	}
	if (((&Global_12976 + 36)->f_24 == Global_29006 || (&Global_12976 + 36)->f_24 != 4294967294) && !DECOR_CHECK_EXIST(Global_34573, "TempDisableRespawn"))
	{
		if (StackVal && (Function_88() < 1 && !DECOR_CHECK_EXIST(Global_34573, "PlayerHorse_DontResetHorseEnum")) + 976 != 993)
		{
			Function_87(StackVal, 0, 1);
		}
		bVar5 = FIND_OBJECT_IN_LAYOUT(Global_30616, "f_playerHorse");
		if (!IS_OBJECT_VALID(bVar5))
		{
			return 0;
		}
		if (DECOR_CHECK_EXIST(bVar5, "PlayerHouse_NoHorse") && !DECOR_CHECK_EXIST(Global_34573, "OnLoad_ForceSpawnPlayerHorse"))
		{
			return 0;
		}
		Function_86(bVar5);
		vVar6 = { StackVal, StackVal, Function_86(bVar5) };
		Function_85(bVar5);
		vVar9 = { StackVal, StackVal, Function_85(bVar5) };
		if (StackVal && Function_64(StackVal, (!IS_ACTOR_VALID(Global_12976.f_36) && STREAMING_ARE_BOUNDS_LOADED(vVar6, 5.0f)), Global_34573, vVar6) > 60.0f)
		{
			bVar14 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/simpleGringo/HitchingPost", &vVar6, 6.0f, 0);
			if (IS_GRINGO_VALID(bVar14))
			{
				GET_OBJECT_POSITION(GET_OBJECT_FROM_GRINGO(bVar14), &vVar6);
				Function_84(StackVal, StackVal, vVar6, &bVar12, &bVar13);
				bVar14 = "";
				if (!IS_OBJECT_VALID(Function_83(bVar12, "UseCase1")))
				{
					bVar14 = bVar12;
				}
				if (!IS_GRINGO_VALID(bVar14))
				{
					if (!IS_OBJECT_VALID(Function_83(bVar13, "UseCase1")))
					{
						bVar14 = bVar13;
					}
				}
				if (IS_GRINGO_VALID(bVar14))
				{
					Function_73(1, 0, 0, 0, 0, 0, 1, 0);
					bVar15 = Global_12976.f_36;
					if (IS_ACTOR_VALID(bVar15))
					{
						SNAP_ACTOR_TO_GRINGO(bVar15, GET_OBJECT_FROM_GRINGO(bVar14), "UseCase1", true, 0, 0);
						TASK_PRIORITY_SET(bVar15, true);
						TASK_USE_GRINGO(bVar15, bVar14, "UseCase1", 4294967295, 1);
						if (DECOR_CHECK_EXIST(bVar5, "PlayerHouse_NoHorse") && DECOR_CHECK_EXIST(Global_34573, "OnLoad_ForceSpawnPlayerHorse"))
						{
							DECOR_REMOVE(Global_34573, "OnLoad_ForceSpawnPlayerHorse");
						}
						(&Global_12976 + 36)->f_24 = Global_29006;
						return 0;
					}
				}
				return 0;
			}
			return 0;
		}
		if (IS_ACTOR_VALID(Global_12976.f_36))
		{
			(&Global_12976 + 36)->f_24 = Global_29006;
		}
		else if (StackVal && Function_64(StackVal, (!IS_ACTOR_VALID(Global_12976.f_36) && STREAMING_ARE_BOUNDS_LOADED(vVar6, 5.0f)), Global_34573, vVar6) > 60.0f)
		{
			bVar16 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/simpleGringo/horseHitch", &vVar6, 6.0f, 0);
			if (IS_GRINGO_VALID(bVar16))
			{
				Function_73(1, 0, 0, 0, 0, 0, 1, 0);
				bVar17 = Global_12976.f_36;
				if (IS_ACTOR_VALID(bVar17))
				{
					SNAP_ACTOR_TO_GRINGO(bVar17, GET_OBJECT_FROM_GRINGO(bVar16), "UseCase1", true, 0, 0);
					TASK_PRIORITY_SET(bVar17, true);
					TASK_USE_GRINGO(bVar17, bVar16, "UseCase1", 4294967295, 1);
					if (DECOR_CHECK_EXIST(bVar5, "PlayerHouse_NoHorse") && DECOR_CHECK_EXIST(Global_34573, "OnLoad_ForceSpawnPlayerHorse"))
					{
						DECOR_REMOVE(Global_34573, "OnLoad_ForceSpawnPlayerHorse");
					}
					(&Global_12976 + 36)->f_24 = Global_29006;
					return 0;
				}
			}
		}
	}
	if (!IS_ACTOR_VALID(Global_12976.f_36))
	{
		return 0;
	}
	if (((!Global_3380 && !Global_3392) && GET_TASK_STATUS(Global_12976.f_244, 86) != 2) && Global_3391)
	{
		if (Function_72(Global_12976.f_36, Global_34573) < 20.0f)
		{
			memcpy(&cVar18, Global_29155[Global_2900610].f_20, 4);
			stradd(&cVar18, "_playerHorse", 16);
			bVar22 = FIND_OBJECT_IN_LAYOUT(Global_30616, &cVar18);
			if (!IS_OBJECT_VALID(bVar22))
			{
				return 0;
			}
			if (DECOR_CHECK_EXIST(bVar22, "PlayerHouse_NoHorse"))
			{
				return 0;
			}
			Function_86(bVar22);
			vVar23 = { StackVal, StackVal, Function_86(bVar22) };
			if (Function_72(Global_12976.f_36, Global_34573) < 60.0f && !Function_71(Global_12976.f_36, 0x3f800000, 0x42960000, 1, 1, 0))
			{
				bVar26 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/simpleGringo/horseHitch", &vVar23, 6.0f, 0);
				if (IS_GRINGO_VALID(bVar26))
				{
					SNAP_ACTOR_TO_GRINGO(Global_12976.f_36, GET_OBJECT_FROM_GRINGO(bVar26), "UseCase1", true, 0, 0);
					TASK_PRIORITY_SET(Global_12976.f_36, true);
					TASK_USE_GRINGO(Global_12976.f_36, bVar26, "UseCase1", 4294967295, 1);
				}
				if (!DOES_HORSE_HAVE_ACCESSORY(Global_12976.f_36, 4))
				{
					ACCESSORIZE_HORSE(Global_12976.f_36, 4);
				}
			}
			else if (Function_72(Global_12976.f_36, Global_34573) < 60.0f)
			{
				bVar27 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/simpleGringo/horseHitch", &vVar23, 6.0f, 0);
				if (IS_GRINGO_VALID(bVar27))
				{
					TASK_PRIORITY_SET(Global_12976.f_36, true);
					TASK_USE_GRINGO(Global_12976.f_36, bVar27, "UseCase1", 4294967295, 1);
				}
			}
		}
	}
	return 0;
}

bool Function_71(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x335C / 13148
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), bParam0, iParam1, iParam2, iParam3, iParam4, iParam5);
}

float Function_72(bool bParam0, bool bParam1) //Position: 0x3376 / 13174
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

var Function_73(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, int iParam6, bool bParam7) //Position: 0x3467 / 13415
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	vector3 vVar5;
	int iVar8;
	int iVar9;
	vector3 vVar10;
	
	if (!IS_ACTOR_VALID(Global_34573))
	{
		return "";
	}
	if (!IS_ACTOR_ALIVE(Global_34573))
	{
		return "";
	}
	bVar0 = (StackVal + 976);
	if (Global_3381 || Function_78(1))
	{
		Function_87(976, 0, 1);
	}
	bParam7 = bParam7;
	if (!bParam7)
	{
		if (!Function_89())
		{
			return "";
		}
	}
	if (!Function_77())
	{
		return "";
	}
	bVar1 = false;
	if (IS_ACTOR_VALID(Global_12976.f_36))
	{
		bVar1 = IS_ACTOR_ALIVE(Global_12976.f_36);
	}
	if ((bVar1 && iParam6) && iParam0)
	{
		Function_86(GET_OBJECT_FROM_ACTOR(Global_12976.f_36));
		vVar2 = { StackVal, StackVal, Function_86(GET_OBJECT_FROM_ACTOR(Global_12976.f_36)) };
		Function_86(GET_OBJECT_FROM_ACTOR(Global_34573));
		vVar5 = { StackVal, StackVal, Function_86(GET_OBJECT_FROM_ACTOR(Global_34573)) };
		iVar8 = Function_76(StackVal, StackVal, vVar2, 0, 1, 1);
		if (iVar8 != 4294967294 || iVar8 != 4294967295)
		{
		}
		else
		{
			iVar9 = Function_76(StackVal, StackVal, vVar5, 0, 1, 1);
			if (iVar8 != iVar9)
			{
				if (Function_1() || NET_IS_IN_SESSION())
				{
					RELEASE_ACTOR(Global_12976.f_36);
					Global_12976.f_36 = "";
					CLEAR_ACTORS_HORSE(Global_34573);
				}
				else
				{
					RELEASE_ACTOR(Global_12976.f_36);
					if (!bParam7)
					{
					}
				}
			}
		}
	}
}

void Function_74(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6) //Position: 0x37BF / 14271
{
	if (IS_ACTOR_VALID(bParam0))
	{
		SET_ACTOR_CAN_BE_TARGETED(bParam0, bParam1);
		SET_ACTOR_CAN_BE_HARDLOCKED(bParam0, iParam2);
		SET_ACTOR_CAN_BE_SOFTLOCKED(bParam0, iParam6);
		SET_ACTOR_CAN_BE_BUMPTARGETED(bParam0, bParam3);
		SET_ACTOR_ONLY_HARDLOCK_IF_HOSTILE(bParam0, iParam5);
		SET_ACTOR_USE_FULLSCREEN_ACQUISITION(bParam0, iParam4);
	}
}

bool Function_75() //Position: 0x37FC / 14332
{
	bool bVar0;
	
	return bVar0;
}

int Function_76(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5) //Position: 0x3804 / 14340
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = false;
	iVar1 = 145;
	iVar2 = 4294967295;
	while (iVar1 <= 0 && !bVar0)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
			if (IS_POINT_IN_VOLUME(StackVal, vParam0))
			{
				switch (StackVal)
				{
					case 0x00000002:
						if (!bParam3)
						{
							iVar2 = iVar1;
							bVar0 = true;
						}
						break;
					
					case 0x00000006:
						if (!bParam4)
						{
							iVar2 = iVar1;
							bVar0 = true;
						}
						break;
					
					default:
						iVar2 = iVar1;
						bVar0 = true;
						break;
					}
				}
		}
		iVar1 = (iVar1 - 1);
	}
	if (bParam5)
	{
		if (bVar0)
		{
		}
	}
	return iVar2;
}

bool Function_77() //Position: 0x389F / 14495
{
	if (Function_88() >= 1)
	{
		return 0;
	}
	return STREAMING_IS_ACTOR_LOADED(993, 4294967295);
}

bool Function_78(int iParam0) //Position: 0x38B5 / 14517
{
	int iVar0;
	
	if (!Function_82(iParam0))
	{
		return 0;
	}
	iVar0 = Function_81(iParam0);
	if (!Function_79(Function_81(iParam0)))
	{
		return 0;
	}
	if (StackVal == 2)
	{
		return 1;
	}
	return 0;
}

bool Function_79(int iParam0) //Position: 0x38EB / 14571
{
	if (!Function_4(iParam0))
	{
		return 0;
	}
	if (!Function_80(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_80(int iParam0) //Position: 0x390F / 14607
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

int Function_81(int iParam0) //Position: 0x3924 / 14628
{
	if (!Function_82(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_82(bool bParam0) //Position: 0x393E / 14654
{
	if (bParam0 >= 0 || bParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

var Function_83(bool bParam0, bool bParam1) //Position: 0x3954 / 14676
{
	return GRINGO_QUERY_NAMED_COMPONENT_USER(bParam0, bParam1);
}

void Function_84(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x3961 / 14689
{
	bool bVar0;
	
	bVar0 = LOCATE_GRINGO_OF_TYPE("hitchingPost", &uParam0, 2.0f, 1);
	GET_OBJECT_POSITION(GET_OBJECT_FROM_GRINGO(bVar0), &uParam0);
	*uParam4 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/simpleGringo/horseHitch", &uParam0, 2.0f, 0);
	*uParam3 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/simpleGringo/horseHitch2", &uParam0, 2.0f, 0);
}

vector3 Function_85(bool bParam0) //Position: 0x3A0B / 14859
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	if (!IS_OBJECT_VALID(bParam0))
	{
		return StackVal, StackVal, vVar0;
	}
	GET_OBJECT_ORIENTATION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

vector3 Function_86(bool bParam0) //Position: 0x3A32 / 14898
{
	vector3 vVar0;
	
	vVar0 = { 0.0f, 0.0f, 0.0f };
	if (!IS_OBJECT_VALID(bParam0))
	{
		return StackVal, StackVal, vVar0;
	}
	GET_OBJECT_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

void Function_87(int iParam0, bool bParam1, bool bParam2) //Position: 0x3A59 / 14937
{
	Global_13038 = iParam0;
	if (bParam1)
	{
		Function_12(&Global_12976 + 36 + 20, 128);
	}
	if (bParam2)
	{
		Function_12(&Global_12976 + 36 + 20, 64);
	}
	return;
}

int Function_88() //Position: 0x3A86 / 14982
{
	return Global_12976.f_152;
}

bool Function_89() //Position: 0x3A91 / 14993
{
	bool bVar0;
	
	bVar0 = STREAMING_IS_ACTOR_LOADED(StackVal + 976, 4294967295);
	if (bVar0)
	{
	}
	return bVar0;
}

int Function_90(int iParam0) //Position: 0x3AB1 / 15025
{
	if (!Function_79(iParam0))
	{
		return 4294967295;
	}
	return Global_13172[iParam011].f_16;
}

int Function_91(bool bParam0, bool bParam1, bool bParam2) //Position: 0x3ACB / 15051
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_95(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_13172[iVar011] == iVar1)
		{
			return iVar0;
		}
		if (Global_13172[iVar011] != 0 && iVar0 < 0)
		{
			return Function_92(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_92(bParam0, bParam1, bParam2, 4294967295);
}

int Function_92(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x3B29 / 15145
{
	var uVar0;
	
	if (!Function_94(bParam2))
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
	uVar0 = Function_95(bParam0, bParam1, bParam2);
	if (bParam3 != 4294967295 || bParam3 <= 275)
	{
		bParam3 = Function_93(uVar0);
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

int Function_93(int iParam0) //Position: 0x3C7E / 15486
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

bool Function_94(int iParam0) //Position: 0x3CBC / 15548
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_95(int iParam0, int iParam1, int iParam2) //Position: 0x3CD1 / 15569
{
	return ((iParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

vector3 Function_96(bool bParam0) //Position: 0x3CF1 / 15601
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

bool Function_97(bool bParam0) //Position: 0x3D02 / 15618
{
	var uVar0;
	bool bVar3;
	
	if (!IS_ACTOR_VALID(bParam0))
	{
		return 0;
	}
	bVar3 = GET_ACTOR_ENUM(bParam0);
	GET_POSITION(bParam0, &uVar0);
	return WOULD_ACTOR_BE_VISIBLE(bVar3, &uVar0, 3212836864);
}

void Function_98(bool bParam0) //Position: 0x3D2D / 15661
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

bool Function_99(bool bParam0) //Position: 0x3D61 / 15713
{
	if (!IS_OBJECT_VALID(bParam0))
	{
		return 0;
	}
	if (DECOR_CHECK_EXIST(bParam0, "nocrime"))
	{
		return DECOR_GET_BOOL(bParam0, "nocrime");
	}
	return 0;
}

bool Function_100(bool bParam0, bool bParam1) //Position: 0x3D95 / 15765
{
	int iVar0;
	
	iVar0 = Function_81(bParam0);
	if (!Function_4(iVar0))
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

void Function_101() //Position: 0x3DD2 / 15826
{
	Global_12976.f_240 = "";
	Global_12976.f_244 = "";
	Global_12976.f_72 = "";
	if (IS_ACTOR_VALID(Global_12976.f_36))
	{
		DESTROY_ACTOR(Global_12976.f_36);
	}
	Function_12(&Global_12976 + 36 + 20, 0x40000000);
	(&Global_12976 + 36)->f_24 = 4294967294;
	return;
}

void Function_102(int iParam0) //Position: 0x3E19 / 15897
{
	strcpy(iParam0 + 12, "QUESTMANAGER", 16);
	*iParam0 = 34514;
	iParam0->f_4 = 17083;
	iParam0->f_8 = 15952;
	iParam0->f_28 = 0;
	return;
}

void Function_103() //Position: 0x3E50 / 15952
{
	Function_104(&Global_63541);
	DESTROY_LAYOUT(Global_63535);
	if (Global_63535.f_12 != 4294967295)
	{
		if (STRINGS_ARE_EQUAL(GET_ASSET_NAME(Global_63541[Global_63535.f_1255].f_68, 9), CUTSCENE_MANAGER_GET_LOADED_CUTFILE()))
		{
			CUTSCENE_MANAGER_STOP_CUTSCENE(2, 2);
		}
	}
	Global_63535.f_12 = 4294967295;
	Global_63535.f_16 = 999.0f;
	return;
}

void Function_104(int iParam0) //Position: 0x3E9A / 16026
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= *iParam0)
	{
		Function_105(iParam0[iVar055], iVar0, 0, 1, 1);
		iVar0++;
	}
	return;
}

void Function_105(int iParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x3EC2 / 16066
{
	if (IS_BLIP_VALID(iParam0->f_184))
	{
		if (((!bParam2 || Function_112(bParam1)) || Function_111(bParam1)) || bParam1 != iParam0->f_20)
		{
			REMOVE_BLIP(iParam0->f_184);
			REMOVE_BLIP(iParam0->f_188);
		}
	}
	else if (bParam2)
	{
		if (Function_17(Global_63541[bParam155].f_144, 64) && bParam1 == iParam0->f_20)
		{
			Function_107(iParam0, bParam1);
		}
		if (!(Function_112(bParam1) || Function_111(bParam1)))
		{
			DEACTIVATE_JOURNAL_ENTRY(iParam0->f_140, 0);
			SET_JOURNAL_ENTRY_PROGRESS(iParam0->f_140, -1.0f, true, 0);
		}
	}
	if (IS_OBJECT_VALID(iParam0->f_192))
	{
		DESTROY_OBJECT(iParam0->f_192);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(iParam0->f_200))
	{
		RELEASE_SCRIPT_USE_CONTEXT(iParam0->f_200);
	}
	if (IS_GRINGO_VALID(iParam0->f_208))
	{
		if (!Function_17(iParam0->f_144, 32))
		{
			DESTROY_OBJECT(GET_OBJECT_FROM_GRINGO(iParam0->f_208));
		}
		else
		{
			iParam0->f_208 = "";
		}
		Function_11(iParam0 + 144, 32);
	}
	if (IS_OBJECT_VALID(iParam0->f_212))
	{
		RELEASE_OBJECT_REF(iParam0->f_212);
	}
	if (IS_VOLUME_VALID(iParam0->f_216))
	{
		DESTROY_VOLUME(iParam0->f_216);
	}
	if (bParam4)
	{
		Function_106(iParam0);
	}
	Function_11(iParam0 + 144, 256);
	switch (Global_74542[bParam110])
	{
		case 0x00000002:
		case 0x00000005:
		case 0x00000003:
			Global_74542[bParam110] = 1;
			break;
		
		default:
			break;
	}
	if (IS_SCRIPT_VALID(iParam0->f_196) && iParam3)
	{
		TERMINATE_SCRIPT(iParam0->f_196);
	}
	switch (*iParam0)
	{
		case 0x00000001:
			if (IS_ACTOR_VALID(iParam0->f_204))
			{
				AI_CLEAR_DONT_HARM_ACTOR(iParam0->f_204);
				AI_CONVERSE_ENABLE(iParam0->f_204);
				SET_ACTOR_OBEY_AMBIENT_MOVE_RESTRICTIONS(iParam0->f_204, 1);
				SET_ACTOR_ALLOW_BUMP_REACTIONS(iParam0->f_204, 1);
				if (SQUAD_IS_VALID(SQUAD_GET(iParam0->f_204)))
				{
					DESTROY_OBJECT(SQUAD_GET(iParam0->f_204));
				}
				RELEASE_ACTOR(iParam0->f_204);
			}
			break;
		
		default:
			break;
	}
}

void Function_106(int iParam0) //Position: 0x406D / 16493
{
	if (Function_17(iParam0->f_144, 1))
	{
		STREAMING_EVICT_ACTOR(iParam0->f_136, 4294967295);
		Function_11(iParam0 + 144, 1);
	}
	if (Function_17(iParam0->f_144, 8))
	{
		REMOVE_STRING_TABLE("RandomCharMissions");
		Function_11(iParam0 + 144, 8);
	}
	if (Function_17(iParam0->f_144, 2))
	{
		STREAMING_EVICT_GRINGO(iParam0->f_60);
		Function_11(iParam0 + 144, 2);
	}
	if (Function_17(iParam0->f_144, 4))
	{
		STREAMING_EVICT_PROP(iParam0->f_64);
		Function_11(iParam0 + 144, 4);
	}
	return;
}

void Function_107(int iParam0, int iParam1) //Position: 0x40EF / 16623
{
	vector3 vVar0;
	float fVar3;
	float fVar4;
	struct<9> Var5;
	
	vVar0 = { StackVal, StackVal, *(iParam0 + 112) };
	vVar0.f_4 = (vVar0.y + 0,5f);
	fVar3 = 1.0f;
	fVar4 = 50.0f;
	if (((StackVal && Function_109(StackVal, Function_110(iParam1), vVar0, 0x3f800000, 0x42960000, 1, 1, 0)) || Function_108(iParam1)) || Global_74542[iParam110].f_12 != 1)
	{
		iParam0->f_184 = ADD_BLIP_FOR_COORD(iParam0 + 112, iParam0->f_80, 0.0f, 2, 7);
		SET_BLIP_MAX_DISTANCE(iParam0->f_184, 1,25f);
		iParam0->f_188 = ADD_BLIP_FOR_COORD(iParam0 + 112, iParam0->f_80, 0.0f, 2, 7);
		SET_BLIP_NAME(iParam0->f_188, iParam0 + 4);
		UNK_0xFF3DB575(iParam0->f_188, 1);
		SET_BLIP_PRIORITY(iParam0->f_188, true);
		SET_BLIP_COLOR(iParam0->f_188, 0,58f, 0,35f, 0,72f, fVar3);
		Global_74542[iParam110].f_12 = 1;
	}
	else
	{
		fVar3 = 0,5f;
		vVar5 = { StackVal, StackVal, *(iParam0 + 112) };
		vVar5 = (vVar5.x + RAND_FLOAT_RANGE(10.0f, 20.0f));
		vVar5.f_8 = (vVar5.z + RAND_FLOAT_RANGE(10.0f, 20.0f));
		iParam0->f_184 = ADD_BLIP_FOR_COORD(&vVar5, 440, 0.0f, 2, 7);
		SET_BLIP_SCALE(iParam0->f_184, fVar4);
	}
	SET_BLIP_NAME(iParam0->f_184, iParam0 + 4);
	SET_BLIP_COLOR(iParam0->f_184, 0,58f, 0,35f, 0,72f, fVar3);
	SET_BLIP_PRIORITY(iParam0->f_184, 3);
	return;
}

bool Function_108(bool bParam0) //Position: 0x4234 / 16948
{
	if ((Global_74542[bParam010] != 3 || Global_74542[bParam010] != 4) || Global_74542[bParam010] != 5)
	{
		return 1;
	}
	return 0;
}

bool Function_109(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7) //Position: 0x4260 / 16992
{
}

bool Function_110(int iParam0) //Position: 0x427C / 17020
{
	if (Global_74542[iParam010] == 2)
	{
		return 1;
	}
	return 0;
}

bool Function_111(bool bParam0) //Position: 0x4291 / 17041
{
	if (Global_74542[bParam010] == 7)
	{
		return 1;
	}
	return 0;
}

bool Function_112(bool bParam0) //Position: 0x42A6 / 17062
{
	if (Global_74542[bParam010] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_113() //Position: 0x42BB / 17083
{
	if (!Global_3366)
	{
		return 0;
	}
	if (!Function_168(10) && !Function_5(1048576))
	{
		return 0;
	}
	if (Function_114(&Global_63541) >= 0)
	{
		return 0;
	}
	return 1;
}

int Function_114(int iParam0) //Position: 0x42EB / 17131
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar1 = 1000;
	fVar2 = GET_PROFILE_TIME();
	if (Function_1())
	{
		iVar0 = StackVal;
		while (iVar0 < (77 - 1))
		{
			if ((GET_PROFILE_TIME() - fVar2) < 1000.0f && !Global_30842[30])
			{
				Global_63535.f_8 = iVar0;
				return iVar1;
			}
			Function_105(iParam0[iVar055], iVar0, 0, 1, 1);
			iVar0++;
		}
		Global_63535.f_8 = 0;
		return iVar1;
	}
	iVar0 = StackVal;
	while (iVar0 < (77 - 1))
	{
		if ((GET_PROFILE_TIME() - fVar2) < 1000.0f && !Global_30842[30])
		{
			Global_63535.f_8 = iVar0;
			return iVar1;
		}
		Function_115(iParam0[iVar055], iVar0);
		iVar0++;
	}
	Global_63535.f_8 = 0;
	return iVar1;
}

void Function_115(int iParam0, bool bParam1) //Position: 0x43A1 / 17313
{
	char* cVar0[64];
	bool bVar16;
	
	if (Function_167(bParam1))
	{
		Function_11(iParam0 + 144, 64);
		Function_105(iParam0, bParam1, 0, 0, 1);
		return;
	}
	memcpy(&cVar0, StackVal, StackVal, StackVal, *(iParam0 + 4), 16);
	stradd(&cVar0, ": ", 64);
	if (!IS_ACTOR_VALID(Global_34573))
	{
		stradd(&cVar0, "DA: Player invalid.", 64);
		Function_105(iParam0, bParam1, 0, 0, 1);
		return;
	}
	if (IS_ACTOR_VALID(iParam0->f_204))
	{
		if (!Function_43(Global_76848, 4194304))
		{
			if (CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), iParam0->f_204, 1.0f, 20.0f, 1, 1, 0))
			{
				Function_38(Global_34573, 4194304, 3, 0);
			}
		}
	}
	if (Function_60(StackVal, StackVal, *(iParam0 + 100)))
	{
		PRINTSTRING("QUEST INDEX: ");
		PRINTINT(bParam1);
		PRINTNL();
		LOG_ERROR("Invalid quest position given. Check TTY for quest index.");
		return;
	}
	if (Function_112(bParam1))
	{
		Function_11(iParam0 + 144, 64);
		if (CONVERT_TIME_OF_DAY_TO_INT(iParam0->f_88) >= 0)
		{
			Function_166(iParam0, bParam1);
		}
		if (!Function_17(iParam0->f_144, 256))
		{
			stradd(&cVar0, "DA: Quest already completed.", 64);
			Function_105(iParam0, bParam1, 0, 0, 1);
			return;
		}
	}
	if (Function_111(bParam1))
	{
		stradd(&cVar0, "DA: Quest failed.", 64);
		Function_11(iParam0 + 144, 64);
		Function_105(iParam0, bParam1, 0, 0, 1);
		if (CONVERT_TIME_OF_DAY_TO_INT(iParam0->f_84) >= 0)
		{
			Function_166(iParam0, bParam1);
		}
		return;
	}
	if (!Function_112(bParam1))
	{
		if (!Function_108(bParam1))
		{
			if (!Function_164(iParam0, bParam1, 0, 1))
			{
				stradd(&cVar0, "DA: Quest conditions not met.", 64);
				Function_11(iParam0 + 144, 64);
				Function_105(iParam0, bParam1, 0, 0, 1);
				return;
			}
		}
	}
	if (iParam0->f_160)
	{
		if (IS_EARLIER_THAN(GET_TIME_OF_DAY(), iParam0->f_156))
		{
			stradd(&cVar0, "DA: Not time for quest to start yet.", 64);
			Function_105(iParam0, bParam1, 0, 0, 1);
			Function_11(iParam0 + 144, 64);
			return;
		}
		iParam0->f_160 = 0;
	}
	if ((((Global_3380 || Global_3382) || Global_3392) || Global_34165.f_28) && bParam1 == iParam0->f_20)
	{
		stradd(&cVar0, "DA: Story or proc mission running.", 64);
		Function_11(iParam0 + 144, 64);
		Function_105(iParam0, bParam1, 0, 1, 1);
		return;
	}
	if (!Function_112(bParam1))
	{
		Function_12(iParam0 + 144, 64);
		if (!Function_163(6))
		{
			if (Function_161(6))
			{
				if (STRING_CONTAINS_STRING(iParam0 + 4, "CALIFORNIA"))
				{
					Function_150(Global_27774[613].f_48);
				}
			}
		}
		if (!Function_163(2))
		{
			if (Function_161(2))
			{
				if (STRING_CONTAINS_STRING(iParam0 + 4, "CANNIBAL"))
				{
					Function_150(Global_27774[213].f_48);
				}
			}
		}
		if (!Function_163(8))
		{
			if (Function_161(8))
			{
				if (STRING_CONTAINS_STRING(iParam0 + 4, "DEALER") || STRING_CONTAINS_STRING(iParam0 + 4, "OPIATE"))
				{
					Function_150(Global_27774[813].f_48);
				}
			}
		}
		if (!Function_163(9))
		{
			if (Function_161(9))
			{
				if (STRING_CONTAINS_STRING(iParam0 + 4, "LIGHTS"))
				{
					Function_150(Global_27774[913].f_48);
				}
			}
		}
	}
	if (Function_149(iParam0->f_132))
	{
		if (Function_148(&(Global_29008[iParam0->f_132]), 256))
		{
			stradd(&cVar0, "DA: Quest region has pers chars disabled.", 64);
			Function_105(iParam0, bParam1, 0, 1, 1);
			return;
		}
	}
	if (IS_ACTOR_VALID(iParam0->f_204))
	{
		if (!Function_145(iParam0, bParam1, 1))
		{
			return;
		}
	}
	if (Function_144(bParam1))
	{
		stradd(&cVar0, "DA: Quests should deactivate.", 64);
		Function_105(iParam0, bParam1, 0, 0, 1);
		return;
	}
	if (!Function_112(bParam1))
	{
		if (!(Function_108(bParam1) || Function_142(iParam0)))
		{
			if (IS_JOURNAL_ENTRY_IN_LIST(iParam0->f_140, 0))
			{
				if (VDIST(*(iParam0 + 100), Global_34574) > 15.0f)
				{
					if (!Function_17(iParam0->f_144, 8192))
					{
						Function_139(iParam0);
						Function_12(iParam0 + 144, 8192);
					}
				}
				else
				{
					Function_11(iParam0 + 144, 8192);
				}
			}
			stradd(&cVar0, "DA: Quest time conditions not met.", 64);
			Function_105(iParam0, bParam1, 1, 0, 1);
			return;
		}
	}
	bVar16 = VDIST(*(iParam0 + 100), Global_34574);
	if (bVar16 < iParam0->f_76)
	{
		stradd(&cVar0, "DA: Quest too far.", 64);
		Function_105(iParam0, bParam1, 1, 1, 1);
		return;
	}
	if (bVar16 < iParam0->f_72)
	{
		return;
	}
	if (Function_112(bParam1))
	{
		stradd(&cVar0, "DA: Quest already completed.", 64);
		return;
	}
	Function_116(iParam0, bParam1);
	return;
}

void Function_116(int iParam0, bool bParam1) //Position: 0x48FD / 18685
{
	bool bVar0;
	char* cVar1[64];
	int iVar17;
	vector3 vVar18;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	bool bVar25;
	bool bVar26;
	bool bVar27;
	
	if (bParam1 == 28)
	{
		if (!Function_112(51))
		{
			if (Function_164(&(Global_63541[5155]), 51, 1, 1))
			{
				return;
			}
		}
	}
	if (bParam1 == 55)
	{
		if (IS_OBJECT_VALID(Global_63541[5455].f_212))
		{
			return;
		}
	}
	Function_138(iParam0);
	bVar0 = false;
	switch (Global_74542[bParam110])
	{
		case 0x00000001:
			Global_74542[bParam110] = 2;
			bVar0 = true;
			break;
		
		case 0x00000004:
			Global_74542[bParam110] = 3;
			bVar0 = true;
			break;
		
		case 0x00000005:
			if (!IS_SCRIPT_VALID(iParam0->f_196))
			{
				Global_74542[bParam110] = 2;
				bVar0 = true;
			}
			break;
	}
	DEACTIVATE_JOURNAL_ENTRY(iParam0->f_140, 0);
	SET_JOURNAL_ENTRY_PROGRESS(iParam0->f_140, -1.0f, true, 0);
	Function_133(iParam0);
	iVar17 = 1;
	switch (*iParam0)
	{
		case 0x00000001:
			if (!IS_ACTOR_VALID(iParam0->f_204))
			{
				if (!Function_17(iParam0->f_144, 512))
				{
					if (STREAMING_IS_ACTOR_LOADED(iParam0->f_136, 4294967295))
					{
						memcpy(&cVar1, StackVal, StackVal, StackVal, *(iParam0 + 4), 16);
						stradd(&cVar1, INT_TO_STRING(bParam1), 64);
						iParam0->f_204 = CREATE_ACTOR_IN_LAYOUT(Global_63535, &cVar1, iParam0->f_136, *(iParam0 + 100), 0.0f, iParam0->f_124, 0.0f);
						Function_124(iParam0, bParam1);
						Function_118(iParam0, bParam1, 1);
					}
				}
			}
			else
			{
				IS_ACTOR_VALID(iParam0->f_204);
				if (bVar0)
				{
					Function_118(iParam0, bParam1, 0);
				}
				Function_96(iParam0->f_204);
				if (VDIST(Function_96(iParam0->f_204), *(iParam0 + 100)) > 2.0f)
				{
					Function_124(iParam0, bParam1);
				}
			}
			if (!IS_GRINGO_VALID(iParam0->f_208))
			{
				if (UNK_0x214AFB8C(iParam0->f_60))
				{
					if (Function_149(iParam0->f_132))
					{
						if (Function_17(iParam0->f_144, 65536) && !Function_148(&(Global_29008[iParam0->f_132]), 32))
						{
							iVar17 = 0;
						}
					}
					if (STREAMING_IS_GRINGO_LOADED(iParam0->f_60) && iVar17)
					{
						iParam0->f_208 = LOCATE_GRINGO_OF_TYPE_BY_ID(iParam0->f_60, iParam0 + 100, 2.0f);
						if (bParam1 != 1 || bParam1 != 2)
						{
							vVar18 = { -2168,42f, 17,017f, 2592,003f };
							if (IS_LAYOUTREF_VALID(Global_30616))
							{
								iParam0->f_208 = GET_GRINGO_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(Global_30616, "Abandoned_Musician"));
								if (IS_GRINGO_VALID(iParam0->f_208))
								{
									GIVE_OBJECT_TO_LAYOUT(GET_OBJECT_FROM_GRINGO(iParam0->f_208), Global_63535);
								}
								else
								{
									bVar21 = CREATE_VOLUME_IN_LAYOUT(Global_63535, "abandoned_prop_vol", 2, *(&Global_63541[bParam155] + 100), 0.0f, 0.0f, 0.0f, 10.0f, 10.0f, 10.0f);
									RESET_PROPS_IN_VOLUME(bVar21, 1);
									bVar22 = LOCATE_PHYSINST_OF_TYPE(vVar18, 0,7f, "p_gen_chair05x", 1);
									bVar23 = GET_OBJECT_FROM_GRINGO(LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/chair_sit_table_attach", &vVar18, 0,7f, 0));
									if (IS_OBJECT_VALID(bVar23))
									{
										DESTROY_OBJECT(bVar23);
									}
									if (IS_PHYSINST_VALID(bVar22))
									{
										if (!IS_GRINGO_VALID(iParam0->f_208))
										{
											iParam0->f_208 = GET_GRINGO_FROM_OBJECT(CREATE_GRINGO_ON_OBJECT(bVar22, "Abandoned_Musician", "$/content/scripting/gringo/SimpleGringo/RCM_04_CS03_Musician", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f));
										}
									}
									else
									{
										LOG_ERROR("Could not find the the musician's chair!");
									}
									if (IS_VOLUME_VALID(bVar21))
									{
										DESTROY_VOLUME(bVar21);
									}
									GIVE_OBJECT_TO_LAYOUT(GET_OBJECT_FROM_GRINGO(iParam0->f_208), Global_63535);
								}
							}
						}
						else if (bParam1 != 17 || bParam1 != 19)
						{
							if (bParam1 == 17)
							{
								iParam0->f_208 = GET_GRINGO_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(Global_63535, "Cannibal3_Gringo"));
							}
							else if (bParam1 == 19)
							{
								iParam0->f_208 = GET_GRINGO_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(Global_63535, "Cannibal5_Gringo"));
							}
							if (IS_GRINGO_VALID(iParam0->f_208))
							{
								GIVE_OBJECT_TO_LAYOUT(GET_OBJECT_FROM_GRINGO(iParam0->f_208), Global_63535);
								Function_12(iParam0 + 144, 32);
							}
							else
							{
								bVar24 = CREATE_VOLUME_IN_LAYOUT(Global_63535, "cannibal_prop_vol", 2, *(&Global_63541[bParam155] + 100), 0.0f, 0.0f, 0.0f, 10.0f, 10.0f, 10.0f);
								if (bParam1 == 17)
								{
									bVar25 = LOCATE_PHYSINST_OF_TYPE(*(&Global_63541[bParam155] + 100), 1,7f, "p_gen_chair01x", 1);
								}
								else if (bParam1 == 19)
								{
									bVar25 = LOCATE_PHYSINST_OF_TYPE(*(&Global_63541[bParam155] + 100), 1,7f, "p_gen_chair05x", 1);
								}
								bVar26 = GET_OBJECT_FROM_GRINGO(LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/chair_sit_attach", &Global_63541[bParam155] + 100, 1,5f, 0));
								if (IS_OBJECT_VALID(bVar26))
								{
									DESTROY_OBJECT(bVar26);
								}
								if (IS_PHYSINST_VALID(bVar25))
								{
									if (!IS_GRINGO_VALID(iParam0->f_208))
									{
										if (bParam1 == 17)
										{
											iParam0->f_208 = GET_GRINGO_FROM_OBJECT(CREATE_GRINGO_ON_OBJECT(bVar25, "Cannibal3_Gringo", "$/content/scripting/gringo/SimpleGringo/sit_headinhands_n_any", 0,22f, 0.0f, 0,25f, 0.0f, 180.0f, 0.0f));
										}
										else
										{
											iParam0->f_208 = GET_GRINGO_FROM_OBJECT(CREATE_GRINGO_ON_OBJECT(bVar25, "Cannibal5_Gringo", "$/content/scripting/gringo/SimpleGringo/RCM_05_CS03_CryingIdle", 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f));
										}
									}
								}
								else
								{
									LOG_ERROR("Could not find the chair!");
								}
								if (IS_VOLUME_VALID(bVar24))
								{
									DESTROY_VOLUME(bVar24);
								}
								Function_12(iParam0 + 144, 32);
								GIVE_OBJECT_TO_LAYOUT(GET_OBJECT_FROM_GRINGO(iParam0->f_208), Global_63535);
							}
						}
						else
						{
							if (bParam1 == 51)
							{
								bVar27 = GET_OBJECT_FROM_GRINGO(LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/lean_fence_l_talking", &Global_63541[bParam155] + 100, 1,5f, 0));
								if (IS_OBJECT_VALID(bVar27))
								{
									DESTROY_OBJECT(bVar27);
								}
							}
							else if (bParam1 == 64)
							{
								bVar27 = GET_OBJECT_FROM_GRINGO(LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/lean_rail", &Global_63541[bParam155] + 100, 1,5f, 0));
								if (IS_OBJECT_VALID(bVar27))
								{
									DESTROY_OBJECT(bVar27);
								}
							}
							if (IS_GRINGO_VALID(iParam0->f_208))
							{
								Function_12(iParam0 + 144, 32);
							}
							else
							{
								iParam0->f_208 = GET_GRINGO_FROM_OBJECT(CREATE_GRINGO_IN_LAYOUT_BY_ID(Global_63535, Function_75(), iParam0->f_60, *(iParam0 + 100), 0.0f, iParam0->f_124, 0.0f));
								Function_11(iParam0 + 144, 32);
							}
						}
						Function_117(iParam0, 0);
					}
					else
					{
						return;
					}
				}
			}
			break;
		
		case 0x00000002:
			if (!IS_OBJECT_VALID(iParam0->f_212))
			{
				if (STREAMING_IS_PROP_LOADED(iParam0->f_64))
				{
					iParam0->f_212 = CREATE_PROP_IN_LAYOUT_BY_ID(Global_63535, Function_75(), iParam0->f_64, *(iParam0 + 100), 0.0f, iParam0->f_124, 0.0f, 1);
					Function_124(iParam0, bParam1);
				}
				else
				{
					return;
				}
			}
			break;
		
		case 0x00000003:
			Function_124(iParam0, bParam1);
			break;
	}
	return;
}

void Function_117(int iParam0, bool bParam1) //Position: 0x50CB / 20683
{
	bool bVar0;
	var uVar1;
	var uVar4;
	bool bVar7;
	bool bVar8;
	
	if (IS_ACTOR_VALID(iParam0->f_204) && IS_GRINGO_VALID(iParam0->f_208))
	{
		DECOR_SET_BOOL(GET_OBJECT_FROM_GRINGO(iParam0->f_208), "ForceMusicGringoUse", true);
		DECOR_SET_BOOL(GET_OBJECT_FROM_GRINGO(iParam0->f_208), "ForceAllowSun", true);
		DECOR_SET_BOOL(GET_OBJECT_FROM_GRINGO(iParam0->f_208), "ForceAllowRain", true);
		TASK_CLEAR(iParam0->f_204);
		TASK_PRIORITY_SET(iParam0->f_204, 2);
		if (!Function_17(iParam0->f_144, 16384))
		{
			bVar0 = true;
			if (!bParam1)
			{
				if (GET_CURRENT_GRINGO(iParam0->f_204) == iParam0->f_208)
				{
					bVar0 = false;
				}
				else
				{
					GET_OBJECT_POSITION(GET_OBJECT_FROM_GRINGO(iParam0->f_208), &uVar1);
					GET_OBJECT_POSITION(iParam0->f_204, &uVar4);
					bVar7 = WOULD_ACTOR_BE_VISIBLE(GET_ACTOR_ENUM(iParam0->f_204), &uVar1, 3212836864);
					bVar8 = WOULD_ACTOR_BE_VISIBLE(GET_ACTOR_ENUM(iParam0->f_204), &uVar4, 3212836864);
					if (bVar8 || bVar7)
					{
						bVar0 = false;
					}
				}
			}
			if (bVar0)
			{
				SNAP_ACTOR_TO_GRINGO(iParam0->f_204, GET_OBJECT_FROM_GRINGO(iParam0->f_208), "UseCase1", true, 0, 0);
			}
		}
		TASK_USE_GRINGO(iParam0->f_204, iParam0->f_208, "UseCase1", 4294967295, 1);
	}
	return;
}

void Function_118(int iParam0, bool bParam1, int iParam2) //Position: 0x51FA / 20986
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	var uVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	
	AI_DONT_HARM_ACTOR(iParam0->f_204);
	AI_CONVERSE_DISABLE(iParam0->f_204);
	AI_IGNORE_ACTOR(iParam0->f_204);
	SET_ACTOR_CAN_PLAY_GESTURES(iParam0->f_204, false);
	SET_ACTOR_OBEY_AMBIENT_MOVE_RESTRICTIONS(iParam0->f_204, 0);
	DECOR_SET_BOOL(iParam0->f_204, "CannotPush", true);
	SET_ACTOR_ALLOW_BUMP_REACTIONS(iParam0->f_204, 0);
	Function_96(iParam0->f_204);
	vVar0 = { StackVal, StackVal, Function_96(iParam0->f_204) };
	bVar3 = WOULD_ACTOR_BE_VISIBLE(GET_ACTOR_ENUM(iParam0->f_204), &vVar0, 3212836864);
	bVar4 = Function_109(StackVal, StackVal, *(iParam0 + 100), 0x3f800000, 0x42960000, 1, 1, 0);
	if (!UNK_0x214AFB8C(iParam0->f_60))
	{
		if (!Function_17(iParam0->f_144, 16384))
		{
			if (!(bVar3 || bVar4))
			{
				TELEPORT_ACTOR(iParam0->f_204, iParam0 + 100, 1, 1, 1);
			}
		}
		Function_123(iParam0);
	}
	else if (!IS_GRINGO_VALID(iParam0->f_208))
	{
		if (!Function_17(iParam0->f_144, 16384))
		{
			if (!(bVar3 || bVar4))
			{
				TELEPORT_ACTOR(iParam0->f_204, iParam0 + 100, 1, 1, 1);
			}
		}
		TASK_PRIORITY_SET(iParam0->f_204, 2);
		if (((bParam1 == 1 && bParam1 == 2) && bParam1 == 70) && bParam1 == 27)
		{
			TASK_STAND_STILL(iParam0->f_204, -1.0f, 0, 0);
		}
	}
	else
	{
		Function_117(iParam0, iParam2);
	}
	bVar5 = GET_OBJECT_OWNER(iParam0->f_204);
	if (GET_OBJECT_TYPE(bVar5) == 1)
	{
		if (GET_LAYOUT_FROM_OBJECT(bVar5) == GET_GC_LAYOUT())
		{
			GIVE_OBJECT_TO_LAYOUT(iParam0->f_204, Global_63535);
		}
	}
	MEMORY_ATTACK_ON_SIGHT(iParam0->f_204, 0);
	COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(iParam0->f_204, 4, 10.0f);
	if (!SQUAD_IS_VALID(SQUAD_GET(iParam0->f_204)))
	{
		SQUAD_JOIN(iParam0->f_204, GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Global_63535, Function_75())));
		SQUAD_GOAL_ADD_RESTRICT_INVESTIGATION_DISTANCE_FROM_SQUAD(SQUAD_GET(iParam0->f_204), 0, 10.0f);
	}
	HUD_SET_SHOOT_BLIP_ENABLED_FOR_ACTOR(iParam0->f_204, true);
	HUD_SET_SHOOT_BLIP_ICON_FOR_ACTOR(iParam0->f_204, 322);
	if (iParam0->f_136 == 349)
	{
		SET_ACTOR_ALLOW_WEAPON_REACTIONS(iParam0->f_204, false);
	}
	else
	{
		SET_ACTOR_ALLOW_WEAPON_REACTIONS(iParam0->f_204, true);
	}
	if (iParam0->f_136 == 332)
	{
		SET_ACTOR_MAX_SPEED(iParam0->f_204, 2);
	}
	if (iParam0->f_136 == 358)
	{
		SET_ACTOR_FACTION(iParam0->f_204, 20);
		SET_ACTOR_IS_COMPANION(iParam0->f_204, 1);
		SET_ALLOW_EXECUTE(iParam0->f_204, 0);
		SET_ACTOR_INVULNERABILITY(iParam0->f_204, true);
	}
	if (bParam1 == 8)
	{
		AUDIO_ADD_ALTERNATE_CONTEXT(iParam0->f_204, "RCM_CALL_OVER", "RCM_CALL_OVER_PRE3");
	}
	if (bParam1 == 9)
	{
		AUDIO_ADD_ALTERNATE_CONTEXT(iParam0->f_204, "RCM_CALL_OVER", "RCM_CALL_OVER_PRE4");
	}
	if (bParam1 == 52)
	{
		AUDIO_ADD_ALTERNATE_CONTEXT(iParam0->f_204, "RCM_CALL_OVER", "RCM_CALL_OVER_PREDEED");
	}
	if (bParam1 == 53)
	{
		AUDIO_ADD_ALTERNATE_CONTEXT(iParam0->f_204, "RCM_CALL_OVER", "RCM_CALL_OVER_PRE3");
	}
	if (bParam1 == 25)
	{
		AUDIO_ADD_ALTERNATE_CONTEXT(iParam0->f_204, "RCM_STILL_HERE", "RCM_STILL_HERE_RCM2");
	}
	if (bParam1 == 55)
	{
		AUDIO_ADD_ALTERNATE_CONTEXT(iParam0->f_204, "RCM_STILL_HERE", "RCM_STILL_HERE_RCM14");
	}
	if (bParam1 == 46)
	{
		AUDIO_ADD_ALTERNATE_CONTEXT(iParam0->f_204, "RCM_CALL_OVER", "KILLERPIMP_WAITINGFORPAY");
	}
	if ((iParam0->f_136 != 340 || iParam0->f_136 != 341) || iParam0->f_136 != 342)
	{
		SET_AMBIENT_VOICE_NAME(iParam0->f_204, "RCM_SAM");
	}
	if (iParam0->f_136 == 633)
	{
		SET_AMBIENT_VOICE_NAME(iParam0->f_204, "MISC_Jenny");
	}
	if (iParam0->f_136 == 368)
	{
		SET_AMBIENT_VOICE_NAME(iParam0->f_204, "COMPANION_FBI");
	}
	AI_SET_ENABLE_DEAD_BODY_REACTIONS(iParam0->f_204, 0);
	uVar6 = Function_121(iParam0);
	SET_RCM_WAS_JOHN_NOW_JACK(iParam0->f_204, uVar6);
	Function_120(bParam1, &iVar7, &iVar8, &iVar9, &iVar10, &iVar11, &iVar12);
	iVar13 = Function_119(bParam1);
	switch (iVar13)
	{
		case 0x00000001:
			SET_RCM_ACTOR_CALL_OVER_ENABLE(iParam0->f_204, 1, 0, true, iVar7, iVar8, iVar9, iVar10, iVar11, iVar12);
			break;
		
		case 0x00000000:
			SET_RCM_ACTOR_CALL_OVER_ENABLE(iParam0->f_204, 1, 0, false, iVar7, iVar8, iVar9, iVar10, iVar11, iVar12);
			break;
		
		case 0x00000002:
		case 0xFFFFFFFF:
		default:
			SET_RCM_ACTOR_CALL_OVER_ENABLE(iParam0->f_204, 0, 0, false, 1, 0, 2, 1101004800, 1088421888, 1);
			break;
	}
	if (bParam1 == 2)
	{
		SET_RCM_ACTOR_CALL_OVER_ENABLE(iParam0->f_204, 1, 1, false, 1, 0, 2, 1101004800, 1088421888, 1);
	}
	if (bParam1 == 70)
	{
		SET_RCM_ACTOR_CALL_OVER_ENABLE(iParam0->f_204, 1, 1, false, 1, 0, 2, 1101004800, 1088421888, 1);
	}
	if (bParam1 == 27)
	{
		SET_RCM_ACTOR_CALL_OVER_ENABLE(iParam0->f_204, 0, 0, false, 1, 0, 2, 1101004800, 1088421888, 1);
	}
	if (bParam1 == 55)
	{
		SET_RCM_ACTOR_CALL_OVER_ENABLE(iParam0->f_204, 0, 0, false, 1, 0, 2, 1101004800, 1088421888, 1);
	}
	AI_GOAL_LOOK_AT_PLAYER_WHEN_WITHIN(iParam0->f_204, 15.0f);
	MEMORY_CLEAR_EVENTS(iParam0->f_204, 1);
	return;
}

int Function_119(int iParam0) //Position: 0x56FC / 22268
{
	switch (iParam0)
	{
		case 0x00000000:
			return 1;
		
		case 0x00000001:
			return 1;
		
		case 0x00000002:
			return 0;
		
		case 0x00000003:
			return 2;
		
		case 0x00000004:
			return 1;
		
		case 0x00000005:
			return 2;
		
		case 0x00000006:
			return 2;
		
		case 0x00000007:
			return 2;
		
		case 0x00000008:
			return 0;
		
		case 0x00000009:
			return 0;
		
		case 0x0000000A:
			return 2;
		
		case 0x0000000B:
			return 0;
		
		case 0x0000000C:
			return 0;
		
		case 0x0000000D:
			return 2;
		
		case 0x0000000E:
			return 2;
		
		case 0x0000000F:
			return 1;
		
		case 0x00000010:
			return 2;
		
		case 0x00000011:
			return 1;
		
		case 0x00000012:
			return 2;
		
		case 0x00000013:
			return 1;
		
		case 0x00000014:
			return 1;
		
		case 0x00000015:
			return 1;
		
		case 0x00000016:
			return 0;
		
		case 0x00000017:
			return 1;
		
		case 0x00000018:
			return 2;
		
		case 0x00000019:
			return 1;
		
		case 0x0000001A:
			return 0;
		
		case 0x0000001B:
			return 0;
		
		case 0x0000001C:
			return 1;
		
		case 0x0000001D:
			return 0;
		
		case 0x0000001E:
			return 0;
		
		case 0x0000001F:
			return 0;
		
		case 0x00000020:
			return 1;
		
		case 0x00000021:
			return 1;
		
		case 0x00000022:
			return 0;
		
		case 0x00000023:
			return 1;
		
		case 0x00000024:
			return 0;
		
		case 0x00000025:
			return 2;
		
		case 0x00000026:
			return 1;
		
		case 0x00000027:
			return 1;
		
		case 0x00000028:
			return 0;
		
		case 0x00000029:
			return 1;
		
		case 0x0000002A:
			return 0;
		
		case 0x0000002B:
			return 1;
		
		case 0x0000002C:
			return 0;
		
		case 0x0000002D:
			return 1;
		
		case 0x0000002E:
			return 0;
		
		case 0x0000002F:
			return 1;
		
		case 0x00000030:
			return 0;
		
		case 0x00000031:
			return 1;
		
		case 0x00000032:
			return 2;
		
		case 0x00000033:
			return 1;
		
		case 0x00000034:
			return 0;
		
		case 0x00000035:
			return 0;
		
		case 0x00000036:
			return 1;
		
		case 0x00000037:
			return 0;
		
		case 0x00000038:
			return 0;
		
		case 0x00000039:
			return 1;
		
		case 0x0000003A:
			return 1;
		
		case 0x0000003B:
			return 0;
		
		case 0x0000003C:
			return 1;
		
		case 0x0000003D:
			return 1;
		
		case 0x0000003E:
			return 0;
		
		case 0x0000003F:
			return 0;
		
		case 0x00000040:
			return 1;
		
		case 0x00000041:
			return 1;
		
		case 0x00000042:
			return 1;
		
		case 0x00000043:
			return 1;
		
		case 0x00000044:
			return 1;
		
		case 0x00000045:
			return 1;
		
		case 0x00000046:
			return 0;
		
		case 0x00000047:
			return 0;
		
		case 0x00000048:
			return 1;
		
		case 0x00000049:
			return 1;
		
		case 0x0000004A:
			return 0;
		
		case 0x0000004B:
			return 0;
		
		case 0x0000004C:
			return 1;
		
		default:
	}
	return 4294967295;
}

void Function_120(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x5972 / 22898
{
	*uParam3 = 2;
	*uParam4 = 20.0f;
	*uParam5 = 7.0f;
	*uParam6 = 1;
	switch (iParam0)
	{
		case 0x00000000:
			*uParam1 = 0;
			*uParam2 = 1;
			break;
		
		case 0x00000004:
			*uParam1 = 1;
			*uParam2 = 1;
			break;
		
		case 0x0000000F:
			*uParam1 = 0;
			*uParam2 = 1;
			*uParam3 = 3;
			*uParam5 = 2,5f;
			*uParam4 = 8.0f;
			break;
		
		case 0x00000013:
			*uParam1 = 0;
			*uParam2 = 1;
			*uParam3 = 3;
			*uParam5 = 2,5f;
			*uParam4 = 8.0f;
			break;
		
		case 0x00000015:
			*uParam1 = 0;
			*uParam2 = 1;
			break;
		
		case 0x00000017:
			*uParam1 = 0;
			*uParam2 = 1;
			break;
		
		case 0x0000001C:
			*uParam1 = 0;
			*uParam2 = 1;
			break;
		
		case 0x00000020:
			*uParam1 = 0;
			*uParam2 = 1;
			*uParam5 = 3.0f;
			*uParam4 = 8.0f;
			break;
		
		case 0x00000023:
			*uParam1 = 0;
			*uParam2 = 1;
			break;
		
		case 0x00000026:
			*uParam1 = 0;
			*uParam2 = 1;
			break;
		
		case 0x00000027:
			*uParam1 = 0;
			*uParam2 = 1;
			break;
		
		case 0x0000002B:
			*uParam1 = 0;
			*uParam2 = 1;
			break;
		
		case 0x00000031:
			*uParam1 = 0;
			*uParam2 = 1;
			break;
		
		case 0x00000036:
			*uParam1 = 0;
			*uParam2 = 1;
			break;
		
		case 0x00000039:
			*uParam1 = 0;
			*uParam2 = 1;
			break;
		
		case 0x0000003C:
			*uParam1 = 0;
			*uParam2 = 1;
			*uParam3 = 3;
			*uParam5 = 3.0f;
			*uParam4 = 8.0f;
			break;
		
		case 0x0000003D:
			*uParam1 = 1;
			*uParam2 = 1;
			break;
		
		case 0x00000040:
			*uParam1 = 1;
			*uParam2 = 1;
			break;
		
		case 0x00000044:
			*uParam1 = 1;
			*uParam2 = 1;
			break;
		
		case 0x00000048:
			*uParam1 = 0;
			*uParam2 = 1;
			break;
		
		case 0x0000004B:
			*uParam1 = 1;
			*uParam2 = 1;
			break;
		
		default:
			*uParam1 = 0;
			*uParam2 = 1;
			break;
	}
}

int Function_121(int iParam0) //Position: 0x5B49 / 23369
{
	var uVar0;
	int iVar1;
	
	if (GET_ACTOR_ENUM(Global_34573) != 1)
	{
		return 0;
	}
	uVar0 = iParam0->f_136;
	iVar1 = iParam0->f_168;
	while (iVar1 != 4294967295)
	{
		if (Global_74542[iVar110].f_28 != TO_FLOAT(false))
		{
			return 1;
		}
		if (Function_122(Global_63541[iVar155].f_136, uVar0))
		{
			return 0;
		}
		iVar1 = Global_63541[iVar155].f_168;
	}
	return 0;
}

bool Function_122(int iParam0, int iParam1) //Position: 0x5BA3 / 23459
{
	if (iParam0 == iParam1)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 0x00000154:
		case 0x00000155:
		case 0x00000156:
			if ((iParam1 != 340 || iParam1 != 341) || iParam1 != 342)
			{
				return 1;
			}
			break;
		
		default:
			return 0;
			break;
	}
	return 0;
}

void Function_123(int iParam0) //Position: 0x5BED / 23533
{
	if (IS_ACTOR_VALID(iParam0->f_204))
	{
		TASK_CLEAR(iParam0->f_204);
		TASK_PRIORITY_SET(iParam0->f_204, 2);
		TASK_GO_TO_COORD_AND_STAY(iParam0->f_204, iParam0 + 100, 1, iParam0->f_124);
	}
	return;
}

void Function_124(int iParam0, bool bParam1) //Position: 0x5C1C / 23580
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	vector3 vVar3;
	
	if (Function_17(iParam0->f_144, 2048))
	{
		return;
	}
	bVar0 = (((Global_3380 || Global_3382) || Global_3392) || Global_34165.f_28);
	bVar1 = IS_OBJECT_VALID(iParam0->f_192);
	if (!bVar1 && !bVar0)
	{
		iVar2 = 6;
		if (GET_TARGETED_JOURNAL_ENTRY() == iParam0->f_140)
		{
			iVar2 = 7;
		}
		Function_132(iParam0, iVar2);
	}
	else if (bVar0 && bVar1)
	{
		DESTROY_OBJECT(iParam0->f_192);
	}
	if (IS_BLIP_VALID(iParam0->f_184))
	{
		if (GET_BLIP_ICON(iParam0->f_184) == 440)
		{
			vVar3 = { StackVal, StackVal, *(iParam0 + 100) };
			vVar3.f_4 = (vVar3.y + 0,5f);
			if (!Function_109(StackVal, StackVal, vVar3, 0x3f800000, 0x42960000, 1, 1, 0) && VDIST(Global_34574, *(iParam0 + 100)) < 42.0f)
			{
				return;
			}
			Global_74542[bParam110].f_12 = 1;
			REMOVE_BLIP(iParam0->f_184);
		}
		else if (bVar0)
		{
			REMOVE_BLIP(iParam0->f_184);
			REMOVE_BLIP(iParam0->f_188);
		}
	}
	if (!IS_BLIP_VALID(iParam0->f_184))
	{
		if (bVar0)
		{
			if (bParam1 == iParam0->f_20)
			{
				if (Function_149(iParam0->f_132))
				{
					Function_129(StackVal, StackVal, iParam0->f_132, 23, *(iParam0 + 100), 63);
				}
				else
				{
					Function_129(StackVal, StackVal, Global_29006, 23, *(iParam0 + 100), 63);
				}
			}
		}
		else
		{
			if (bParam1 == iParam0->f_20)
			{
				if (Function_149(iParam0->f_132))
				{
					Function_125(StackVal, iParam0->f_132, 23, iParam0->f_100);
				}
				else
				{
					Function_125(StackVal, Global_29006, 23, iParam0->f_100);
				}
				Function_11(iParam0 + 144, 4096);
			}
			if (bParam1 == 2)
			{
				*(iParam0 + 100) = { -2168,505f, 16,879f, 2590,258f };
			}
			if (bParam1 == 33)
			{
				*(iParam0 + 100) = { -3951,709f, 25,098f, 2868,928f };
			}
			iParam0->f_184 = ADD_BLIP_FOR_COORD(iParam0 + 100, iParam0->f_80, 0.0f, 2, 7);
			SET_BLIP_NAME(iParam0->f_184, iParam0 + 4);
			iParam0->f_188 = ADD_BLIP_FOR_COORD(iParam0 + 100, iParam0->f_80, 0.0f, 2, 7);
			SET_BLIP_NAME(iParam0->f_188, iParam0 + 4);
			UNK_0xFF3DB575(iParam0->f_188, 1);
			SET_BLIP_PRIORITY(iParam0->f_188, true);
			if (iParam0->f_20 != bParam1)
			{
				SET_BLIP_COLOR(iParam0->f_184, 0,58f, 0,35f, 0,72f, 1.0f);
				SET_BLIP_COLOR(iParam0->f_188, 0,58f, 0,35f, 0,72f, 1.0f);
			}
			SET_BLIP_MAX_DISTANCE(iParam0->f_184, 1,25f);
		}
	}
	return;
}

void Function_125(int iParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x5E59 / 24153
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	
	if (iParam1 == 23 && iParam1 == 24)
	{
		iVar0 = 0;
		while (iVar0 <= Global_9724)
		{
			if (StackVal && Global_8723[iVar04] != iParam0 != iParam1)
			{
				Global_8723[iVar04] = 4294967294;
				Global_8723[iVar04].f_4 = 0;
				Global_8723[iVar04].f_8 = 0;
				if (IS_BLIP_VALID(Global_9724[iVar0]))
				{
					REMOVE_BLIP(Global_9724[iVar0]);
				}
				return;
			}
			iVar0++;
		}
	}
	else
	{
		Function_127(Function_128(iParam2, 0.0f, bParam3));
		vVar4 = { StackVal, StackVal, Function_127(Function_128(iParam2, 0.0f, bParam3)) };
		iVar0 = 0;
		while (iVar0 <= Global_9724)
		{
			if (StackVal == iParam1)
			{
				Function_127(StackVal);
				vVar1 = { StackVal, StackVal, Function_127(StackVal) };
				if (Function_126(StackVal, StackVal, StackVal, StackVal, vVar1, vVar4))
				{
					Global_8723[iVar04] = 4294967294;
					Global_8723[iVar04].f_4 = 0;
					Global_8723[iVar04].f_8 = 0;
					if (IS_BLIP_VALID(Global_9724[iVar0]))
					{
						REMOVE_BLIP(Global_9724[iVar0]);
					}
					return;
				}
			}
			iVar0++;
		}
	}
}

bool Function_126(vector3 vParam0, vector3 vParam3) //Position: 0x5F5F / 24415
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vParam0, vParam3, StackVal) };
	if (VMAG(vVar0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

vector3 Function_127(int iParam0) //Position: 0x5F8C / 24460
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	
	bVar3 = iParam0 & 32767;
	bVar4 = SHIFT_RIGHT(iParam0, 15) & 32767;
	vVar0.x = TO_FLOAT(bVar3);
	vVar0.f_8 = TO_FLOAT(bVar4);
	if (iParam0 & 1073741824 == 0)
	{
		vVar0.x = (vVar0.x * -1.0f);
	}
	if ((iParam0 && 2147483648) == 0)
	{
		vVar0.f_8 = (vVar0.z * -1.0f);
	}
	return StackVal, StackVal, vVar0;
}

int Function_128(vector3 vParam0) //Position: 0x5FE3 / 24547
{
	bool bVar0;
	
	bVar0 = ((ROUND(FABS(vParam0.x)) && 32767) || SHIFT_LEFT((ROUND(FABS(vParam0.z)) && 32767), 15));
	if (vParam0.x < 0.0f)
	{
		bVar0 = (bVar0 || 1073741824);
	}
	if (vParam0.z < 0.0f)
	{
		bVar0 = (bVar0 || 2147483648);
	}
	return bVar0;
}

int Function_129(int iParam0, int iParam1, vector3 vParam2, int iParam5) //Position: 0x6031 / 24625
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	vector3 vVar4;
	vector3 vVar7;
	
	if (!Function_149(iParam0))
	{
		return 0;
	}
	if (iParam1 == 0)
	{
		return 0;
	}
	if (Function_60(StackVal, StackVal, vParam2))
	{
		return 0;
	}
	iVar2 = Function_131(iParam1);
	iVar1 = 4294967295;
	uVar3 = Function_128(StackVal, StackVal, vParam2);
	if (iParam1 == 23 && iParam1 == 24)
	{
		iVar0 = 0;
		while (iVar0 <= Global_9724)
		{
			if (StackVal != 0 && iVar1 != 4294967295)
			{
				iVar1 = iVar0;
			}
			else if (StackVal != iParam1 && Global_8723[iVar04] != iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	else
	{
		Function_127(uVar3);
		vVar7 = { StackVal, StackVal, Function_127(uVar3) };
		iVar0 = 0;
		while (iVar0 <= Global_9724)
		{
			if (StackVal != 0 && iVar1 != 4294967295)
			{
				iVar1 = iVar0;
			}
			else if (StackVal == iParam1)
			{
				Function_127(StackVal);
				vVar4 = { StackVal, StackVal, Function_127(StackVal) };
				if (Function_126(StackVal, StackVal, StackVal, StackVal, vVar4, vVar7))
				{
					return iVar0;
				}
			}
			iVar0++;
		}
	}
	if (iVar1 != 4294967295)
	{
		Global_8723[iVar14] = iParam0;
		Global_8723[iVar14].f_4 = iParam1;
		Global_8723[iVar14].f_8 = uVar3;
		Global_8723[iVar14].f_12 = iParam5;
		Global_9724[iVar1] = ADD_BLIP_FOR_COORD(&vParam2, Function_130(iParam1), 0.0f, 2, iVar2);
		if (iParam1 == 23)
		{
			SET_BLIP_COLOR(Global_9724[iVar1], 1.0f, 1.0f, 1.0f, 0,5f);
			SET_BLIP_NAME(Global_9724[iVar1], "BLIP_CHANCE");
		}
		else if (iParam1 == 11)
		{
			SET_BLIP_NAME(Global_9724[iVar1], "BLIP_HORSEBREAKING");
		}
		else if (iParam1 == 24)
		{
			SET_BLIP_NAME(Global_9724[iVar1], "BLIP_CHANCE");
		}
		UNK_0xFF3DB575(Global_9724[iVar1], 1);
		SET_BLIP_PRIORITY(Global_9724[iVar1], true);
		return iVar1;
	}
	return 0;
}

int Function_130(int iParam0) //Position: 0x6214 / 25108
{
	switch (iParam0)
	{
		case 0x00000001:
		case 0x00000002:
			return 433;
			break;
		
		case 0x00000003:
			return 349;
			break;
		
		case 0x00000004:
			return 327;
			break;
		
		case 0x00000005:
			return 351;
			break;
		
		case 0x00000006:
			return 350;
			break;
		
		case 0x00000008:
			return 426;
			break;
		
		case 0x00000009:
			return 353;
			break;
		
		case 0x0000000A:
			return 341;
			break;
		
		case 0x0000000B:
			return 327;
			break;
		
		case 0x0000000C:
			return 397;
			break;
		
		case 0x0000000D:
			return 399;
			break;
		
		case 0x0000000E:
			return 398;
			break;
		
		case 0x0000000F:
			return 520;
			break;
		
		case 0x00000010:
			return 326;
			break;
		
		case 0x00000011:
			return 420;
			break;
		
		case 0x00000012:
			return 421;
			break;
		
		case 0x00000013:
			return 346;
			break;
		
		case 0x00000014:
			return 354;
			break;
		
		case 0x00000015:
			return 525;
			break;
		
		case 0x00000016:
			return 383;
			break;
		
		case 0x00000017:
			return 411;
			break;
		
		case 0x00000018:
			return 411;
			break;
		
		default:
			break;
	}
	return 327;
}

int Function_131(int iParam0) //Position: 0x634B / 25419
{
	switch (iParam0)
	{
		case 0x00000001:
		case 0x00000002:
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
		case 0x00000006:
		case 0x00000008:
		case 0x00000009:
			return 1;
			break;
		
		case 0x0000000A:
		case 0x0000000B:
		case 0x00000017:
			return 2;
			break;
		
		case 0x0000000C:
		case 0x0000000D:
		case 0x0000000E:
		case 0x0000000F:
		case 0x00000015:
			return 3;
			break;
		
		case 0x00000010:
		case 0x00000011:
		case 0x00000012:
			return 6;
			break;
		
		case 0x00000016:
			return 0;
			break;
		
		case 0x00000013:
			return 5;
			break;
		
		case 0x00000014:
			return 4;
			break;
		
		default:
			break;
	}
	return 0;
}

void Function_132(int iParam0, int iParam1) //Position: 0x6403 / 25603
{
	int iVar0;
	bool bVar1;
	
	if (IS_OBJECT_VALID(iParam0->f_192))
	{
		LOG_ERROR("Called CREATE_QUEST_GATEWAY with an already valid gateway");
		return;
	}
	if ((((Function_17(iParam0->f_144, 2048) || Global_3380) || Global_3382) || Global_3392) || Global_34165.f_28)
	{
		return;
	}
	iVar0 = iParam0->f_96;
	iParam0->f_192 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(Global_63535, Function_75(), *(iParam0 + 112), 0.0f, 0.0f, 0.0f, iVar0, iVar0, iVar0, 0, Global_34573, iParam1, iParam0->f_92, 0, 1, 1);
	Function_133(iParam0);
	bVar1 = GATEWAY_GET_MARKER(iParam0->f_192);
	if (IS_OBJECT_VALID(bVar1))
	{
		DESTROY_OBJECT(bVar1);
	}
	return;
}

void Function_133(int iParam0) //Position: 0x64BD / 25789
{
	float fVar0;
	bool bVar1;
	
	if (IS_VOLUME_VALID(iParam0->f_216))
	{
		return;
	}
	iParam0->f_216 = CREATE_VOLUME_IN_LAYOUT(Global_63535, Function_75(), 2, *(iParam0 + 112), 0.0f, 0.0f, 0.0f, 2.0f, 2.0f, 2.0f);
	ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(iParam0->f_216);
	ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(iParam0->f_216);
	fVar0 = 20.0f;
	if (Function_149(iParam0->f_132))
	{
		if (StackVal || StackVal != 3 != 4)
		{
			fVar0 = 5.0f;
		}
	}
}

int Function_134(var uParam0, int iParam1) //Position: 0x655F / 25951
{
	int iVar0;
	var uVar1;
	
	if (!IS_VOLUME_VALID(*uParam0))
	{
		LOG_ERROR("Passed an invalid volume into ADD_AMBIENT_VOLUME_RESTRICTION");
	}
	if (DECOR_CHECK_EXIST(*uParam0, "script"))
	{
		if (!IS_SCRIPT_VALID(DECOR_GET_INT(*uParam0, "script")))
		{
			LOG_ERROR("Passed an invalid script ID into ADD_AMBIENT_VOLUME_RESTRICTION");
		}
	}
	GET_VOLUME_CENTER(*uParam0, &uVar1);
	Function_136(DECOR_GET_INT(*uParam0, "script"));
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
		}
		else
		{
			Function_135(iVar0, uParam0, &uVar1, iParam1);
			return 1;
		}
		iVar0++;
	}
	LOG_ERROR("No room to add another volume... this really shouldn't happen tell steve");
	RELEASE_VOLUME(*uParam0);
	return 0;
}

void Function_135(int iParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x66C0 / 26304
{
	struct<8> Var0;
	
	Global_26155[iParam05].f_8 = *uParam1;
	Global_26155[iParam05].f_16 = GET_CURRENT_GAME_TIME();
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_62("stayout") };
	Global_26155[iParam05].f_12 = CREATE_VOLUME_IN_LAYOUT(Global_26150, &Var0, 3, *iParam2, 0.0f, 0.0f, 0.0f, 12.0f, 5.0f, 12.0f);
	ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(Global_26155[iParam05].f_12, 0);
	ADD_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(Global_26155[iParam05].f_12);
	if (bParam3)
	{
		Global_26155[iParam05].f_4 = ADD_BLIP_FOR_COORD(iParam2, 403, 0, 2, 0);
		SET_BLIP_BLINK(StackVal, 1, 1, 20.0f);
	}
}

int Function_136(bool bParam0) //Position: 0x675B / 26459
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
						Function_137(iVar0);
					}
					else if (Global_3386)
					{
						if (Function_64(StackVal, StackVal, Global_34573, vVar1) < 25.0f)
						{
							Function_137(iVar0);
						}
					}
					else if (Function_64(StackVal, StackVal, Global_34573, vVar1) < 55.0f)
					{
						Function_137(iVar0);
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
			Function_137(iVar0);
		}
		iVar0++;
	}
	return 0;
}

void Function_137(int iParam0) //Position: 0x68BC / 26812
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

void Function_138(int iParam0) //Position: 0x691D / 26909
{
	if (!Function_17(iParam0->f_144, 1))
	{
		if (iParam0->f_136 != 4294967295)
		{
			STREAMING_REQUEST_ACTOR(iParam0->f_136, true, true);
			Function_12(iParam0 + 144, 1);
		}
	}
	if (!Function_17(iParam0->f_144, 8))
	{
		REQUEST_STRING_TABLE("RandomCharMissions");
		Function_12(iParam0 + 144, 8);
	}
	if (!Function_17(iParam0->f_144, 2))
	{
		if (UNK_0x214AFB8C(iParam0->f_60))
		{
			STREAMING_REQUEST_GRINGO(iParam0->f_60);
			Function_12(iParam0 + 144, 2);
		}
	}
	if (!Function_17(iParam0->f_144, 4))
	{
		if (UNK_0x214AFB8C(iParam0->f_64))
		{
			STREAMING_REQUEST_PROP(iParam0->f_64, false);
			Function_12(iParam0 + 144, 4);
		}
	}
	return;
}

void Function_139(int iParam0) //Position: 0x69C2 / 27074
{
	int iVar0;
	int iVar1;
	char* cVar2[8];
	char* cVar4[8];
	
	if (!iParam0->f_172 != 0)
	{
		if (HUD_IS_SHOWING_HELP_TEXT())
		{
			HUD_CLEAR_HELP();
		}
		iVar0 = Function_141(iParam0->f_172);
		iVar1 = Function_140(iParam0->f_172);
		if (iVar0 > 12 || iVar0 != 24)
		{
			if (iVar0 >= 12)
			{
				iVar0 = (iVar0 - 12);
			}
			straddi(&cVar2, iVar0, 8);
			stradd(&cVar2, "AM", 8);
		}
		else
		{
			if (iVar0 >= 12)
			{
				iVar0 = (iVar0 - 12);
			}
			straddi(&cVar2, iVar0, 8);
			stradd(&cVar2, "PM", 8);
		}
		if (iVar1 > 12 || iVar1 != 24)
		{
			if (iVar1 >= 12)
			{
				iVar1 = (iVar1 - 12);
			}
			straddi(&cVar4, iVar1, 8);
			stradd(&cVar4, "AM", 8);
		}
		else
		{
			if (iVar1 >= 12)
			{
				iVar1 = (iVar1 - 12);
			}
			straddi(&cVar4, iVar1, 8);
			stradd(&cVar4, "PM", 8);
		}
		UI_SET_STRING("dynamic_entry_for_time", &cVar2);
		UI_SET_STRING("dynamic_entry_for_time_later", &cVar4);
		PRINT_HELP_FORMAT(7.0f, "mission_later_specific", "dynamic_entry_for_time", "dynamic_entry_for_time_later", "", "", 0, 0, 0);
		return;
	}
	return;
}

int Function_140(int iParam0) //Position: 0x6B24 / 27428
{
	if (iParam0 & 1056 == 1024)
	{
		return 5;
	}
	if (iParam0 & 96 == 32)
	{
		return 7;
	}
	if (iParam0 & 192 == 64)
	{
		return 11;
	}
	if (iParam0 & 384 == 128)
	{
		return 14;
	}
	if (iParam0 & 768 == 256)
	{
		return 18;
	}
	if (iParam0 & 1536 == 512)
	{
		return 22;
	}
	return 0;
}

int Function_141(int iParam0) //Position: 0x6B8D / 27533
{
	if (iParam0 & 1056 == 32)
	{
		return 5;
	}
	if (iParam0 & 96 == 64)
	{
		return 7;
	}
	if (iParam0 & 192 == 128)
	{
		return 11;
	}
	if (iParam0 & 384 == 256)
	{
		return 14;
	}
	if (iParam0 & 768 == 512)
	{
		return 18;
	}
	if (iParam0 & 1536 == 1024)
	{
		return 22;
	}
	return 0;
}

int Function_142(int iParam0) //Position: 0x6BF6 / 27638
{
	if (!iParam0->f_172 != 0)
	{
		switch (Global_63399)
		{
			case 0x00000001:
				if (!Function_143(iParam0 + 172, 32))
				{
					return 0;
				}
				break;
			
			case 0x00000002:
				if (!Function_143(iParam0 + 172, 64))
				{
					return 0;
				}
				break;
			
			case 0x00000004:
				if (!Function_143(iParam0 + 172, 128))
				{
					return 0;
				}
				break;
			
			case 0x00000008:
				if (!Function_143(iParam0 + 172, 256))
				{
					return 0;
				}
				break;
			
			case 0x00000010:
				if (!Function_143(iParam0 + 172, 512))
				{
					return 0;
				}
				break;
			
			case 0x00000020:
				if (!Function_143(iParam0 + 172, 1024))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

bool Function_143(var uParam0, int iParam1) //Position: 0x6CA2 / 27810
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_144(bool bParam0) //Position: 0x6CBE / 27838
{
	if (!Function_5(1048576) || Global_3381)
	{
		return 1;
	}
	if (!Function_17(Global_63541[bParam055].f_144, 32768))
	{
		if ((Global_3403 || Global_3405) || Global_3404)
		{
			if (!Function_43(Global_76847, 0x8000000))
			{
				Function_38(Global_34573, 0x8000000, 2, 0);
			}
			return 1;
		}
	}
	return 0;
}

bool Function_145(int iParam0, bool bParam1, bool bParam2) //Position: 0x6D17 / 27927
{
	char* cVar0[64];
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	
	if (!((((Global_63096 || Global_3384) || Global_3369) || iParam0->f_152) || GET_ACTOR_INVULNERABILITY(iParam0->f_204)))
	{
		memcpy(&cVar0, StackVal, StackVal, StackVal, *(iParam0 + 4), 16);
		if (!Function_147(iParam0))
		{
			stradd(&cVar0, ": DA: Quest helper now hostile with player.", 64);
			TASK_CLEAR(iParam0->f_204);
			Function_105(iParam0, bParam1, 0, 0, bParam2);
			bVar16 = IS_JOURNAL_ENTRY_IN_LIST(Global_63541[bParam155].f_140, 1);
			if (!bVar16)
			{
				bVar17 = IS_JOURNAL_ENTRY_IN_LIST(Global_63541[bParam155].f_140, 0);
				if (bVar17)
				{
					Function_146(bParam1);
				}
				else
				{
					Function_13("RCM_NPC_Attack_Fail", 10.0f, 1, 0, 0, 1, 0);
					Global_74542[bParam110] = 7;
					Global_74542[bParam110].f_4 = GET_TIME_OF_DAY();
					ADD_TIME_USING_TIME_OF_DAY(&Global_74542[bParam110] + 4, Global_63541[bParam155].f_84);
				}
			}
			return 0;
		}
		if (IS_AI_ACTOR_ENGAGED_IN_COMBAT(iParam0->f_204) && GET_ACTOR_UNDER_RETICLE(Global_34573, 0) == iParam0->f_204)
		{
			stradd(&cVar0, ": DA: Quest helper is now in combat.", 64);
			TASK_CLEAR(iParam0->f_204);
			Function_105(iParam0, bParam1, 0, 0, bParam2);
			return 0;
		}
		if (FIRE_IS_ACTOR_ON_FIRE(iParam0->f_204))
		{
			stradd(&cVar0, "DA: Quest helper is ablaze.", 64);
			TASK_CLEAR(iParam0->f_204);
			Function_105(iParam0, bParam1, 0, 0, bParam2);
			return 0;
		}
		if (IS_ACTOR_DEAD(iParam0->f_204))
		{
			stradd(&cVar0, "DA: Quest helper is dead.", 64);
			TASK_CLEAR(iParam0->f_204);
			Function_105(iParam0, bParam1, 0, 0, bParam2);
			bVar18 = false;
			bVar19 = GET_LAST_ATTACKER(iParam0->f_204);
			if (IS_ACTOR_VALID(bVar19))
			{
				if (IS_ACTOR_LOCAL_PLAYER(bVar19))
				{
					bVar18 = true;
				}
			}
			bVar20 = IS_JOURNAL_ENTRY_IN_LIST(Global_63541[bParam155].f_140, 1);
			if (!bVar20)
			{
				bVar21 = IS_JOURNAL_ENTRY_IN_LIST(Global_63541[bParam155].f_140, 0);
				if (bVar18)
				{
					if (bVar21)
					{
						Function_146(bParam1);
					}
					else
					{
						stradd(&cVar0, "DA: Printing help message RCM_NPC_Attack_Fail", 64);
						Function_13("RCM_NPC_Attack_Fail", 10.0f, 1, 0, 0, 1, 0);
						Global_74542[bParam110] = 7;
						Global_74542[bParam110].f_4 = GET_TIME_OF_DAY();
						ADD_TIME_USING_TIME_OF_DAY(&Global_74542[bParam110] + 4, Global_63541[bParam155].f_84);
					}
				}
				else
				{
					Function_13("RCM_NPC_Dead", 10.0f, 1, 0, 0, 1, 0);
					Global_74542[bParam110] = 7;
					Global_74542[bParam110].f_4 = GET_TIME_OF_DAY();
					ADD_TIME_USING_TIME_OF_DAY(&Global_74542[bParam110] + 4, Global_63541[bParam155].f_84);
				}
			}
			return 0;
		}
		if (AI_HAS_ACTOR_BUMPED_INTO_ME(iParam0->f_204, Global_34573, 5.0f) && AI_WAS_PUSHED_OVER(iParam0->f_204, 5.0f))
		{
			stradd(&cVar0, "DA: Quest helper has been bumped.", 64);
			Function_105(iParam0, bParam1, 0, 0, bParam2);
			TASK_CLEAR(iParam0->f_204);
			TASK_PRIORITY_SET(iParam0->f_204, 2);
			TASK_FLEE_ACTOR(iParam0->f_204, Global_34573, -1.0f, -1.0f, 0, 0, 0);
			TASK_OVERRIDE_SET_MOVETYPE(iParam0->f_204, true);
			if (IS_JOURNAL_ENTRY_IN_LIST(Global_63541[bParam155].f_140, 0))
			{
				PRINT_OBJECTIVE_FORMAT(7,5f, "RCM_Quest_Disabled", iParam0 + 4, "", "", "", 0, 2, 0, 0, 0);
				DEACTIVATE_JOURNAL_ENTRY(iParam0->f_140, 1);
				SET_JOURNAL_ENTRY_PROGRESS(iParam0->f_140, -1.0f, false, "RCM_InactiveJournal");
			}
			Global_74542[bParam110] = 7;
			Global_74542[bParam110].f_4 = GET_TIME_OF_DAY();
			ADD_TIME_USING_TIME_OF_DAY(&Global_74542[bParam110] + 4, Global_63541[bParam155].f_84);
		}
	}
	return 1;
}

void Function_146(bool bParam0) //Position: 0x711A / 28954
{
	char* cVar0[32];
	
	Global_74542[bParam010] = 7;
	Global_74542[bParam010].f_4 = GET_TIME_OF_DAY();
	ADD_TIME_USING_TIME_OF_DAY(&Global_74542[bParam010] + 4, Global_63541[bParam055].f_84);
	PRINT_OBJECTIVE_FORMAT(7,5f, "RCM_Quest_Fail", &Global_63541[bParam055] + 4, "", "", "", 0, 2, 0, 0, 0);
	switch (Global_29004)
	{
		case 0x00000000:
			strcpy(&cVar0, "FTR", 32);
			break;
		
		case 0x00000001:
			strcpy(&cVar0, "MEX", 32);
			break;
		
		case 0x00000002:
			strcpy(&cVar0, "NOR", 32);
			break;
		
		default:
			PRINTSTRING("Unknown territory");
			PRINTINT(Global_29004);
			LOG_ERROR("Unknown geographic territory in MARK_QUEST_AS_FAILED");
			break;
	}
	stradd(&cVar0, "_RCM_FAIL_SONG_01", 32);
	AUDIO_MUSIC_ONE_SHOT(&cVar0, 0, 0, 0, 0, 0);
	SAY_SINGLE_LINE_CONTEXT(Global_34573, 394, false, 0, 0, 0, 4294967295, 4294967295, 0, 1);
	if (IS_JOURNAL_ENTRY_IN_LIST(Global_63541[bParam055].f_140, 0))
	{
		SET_JOURNAL_ENTRY_PROGRESS(Global_63541[bParam055].f_140, -1.0f, false, "RCM_FailedJournal");
	}
	return;
}

bool Function_147(int iParam0) //Position: 0x727C / 29308
{
	if (!iParam0->f_152)
	{
		if ((((AI_IS_AGGROING(iParam0->f_204, Global_34573) || AI_IS_HOSTILE_OR_ENEMY(iParam0->f_204, Global_34573)) || GET_LAST_ATTACKER(iParam0->f_204) != Global_34573) || IS_ACTOR_HANDSUP(iParam0->f_204)) || IS_PLAYER_TARGETTING_ACTOR(false, iParam0->f_204, 1))
		{
			return 0;
		}
	}
	return 1;
}

bool Function_148(var uParam0, int iParam1) //Position: 0x72C3 / 29379
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_149(bool bParam0) //Position: 0x72DF / 29407
{
	if (bParam0 > 0 || bParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_150(bool bParam0) //Position: 0x72F5 / 29429
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	
	if (bParam0 != 4294967295 || bParam0 != 0)
	{
		return;
	}
	if (Function_1())
	{
		return;
	}
	bVar0 = GET_JOURNAL_ENTRY_TYPE(bParam0);
	if (bVar0 == 4)
	{
		if (bParam0 != GET_TARGETED_JOURNAL_ENTRY())
		{
			return;
		}
	}
	Function_160(GET_TARGETED_JOURNAL_ENTRY());
	iVar1 = GET_JOURNAL_ENTRY_MISC_FLAG(bParam0);
	switch (bVar0)
	{
		case 0x00000004:
			if (Global_28184)
			{
				return;
			}
			iVar6 = 0;
			while (iVar6 <= Global_27774)
			{
				if (Function_161(iVar6) && !Function_163(iVar6))
				{
					if (bParam0 == Global_27774[iVar613].f_48)
					{
						iVar5 = iVar6;
						bVar4 = true;
					}
				}
				iVar6++;
			}
			if (!bVar4)
			{
				Function_159();
			}
			else if (iVar5 != Global_28180)
			{
				if (!GET_JOURNAL_ENTRY_DISALLOW_TRACKING(bParam0))
				{
					Function_158(iVar5);
				}
			}
			else
			{
				return;
			}
			if (!GET_JOURNAL_ENTRY_DISALLOW_TRACKING(bParam0))
			{
				Function_154();
				TARGET_JOURNAL_ENTRY(bParam0);
			}
			break;
		
		case 0x00000002:
			iVar2 = iVar1;
			while (Global_63541[iVar155].f_20 == iVar2)
			{
				if (IS_BLIP_VALID(Global_63541[iVar155].f_184))
				{
					REMOVE_BLIP(Global_63541[iVar155].f_184);
				}
				if (IS_BLIP_VALID(Global_63541[iVar155].f_188))
				{
					REMOVE_BLIP(Global_63541[iVar155].f_188);
				}
				if (!Function_17(Global_63541[iVar155].f_144, 2048))
				{
					iVar3 = iVar1;
					if (Function_151(&(Global_63541[iVar155]), iVar3))
					{
						Function_12(&Global_63541[iVar155] + 144, 64);
						Function_107(&(Global_63541[iVar155]), iVar3);
						if (IS_OBJECT_VALID(Global_63541[iVar155].f_192))
						{
							DESTROY_OBJECT(Global_63541[iVar155].f_192);
							Function_132(&(Global_63541[iVar155]), 7);
						}
					}
				}
				else if (IS_OBJECT_VALID(Global_63541[iVar155].f_192))
				{
					DESTROY_OBJECT(Global_63541[iVar155].f_192);
				}
				iVar1++;
			}
			break;
	}
	return;
}

bool Function_151(int iParam0, bool bParam1) //Position: 0x7497 / 29847
{
	if (Function_17(Global_63541[bParam155].f_144, 64))
	{
		return 1;
	}
	if (Function_110(bParam1))
	{
		Function_12(&Global_63541[bParam155] + 144, 64);
		return 1;
	}
	if ((Function_167(bParam1) || Function_112(bParam1)) || Function_111(bParam1))
	{
		return 0;
	}
	if (iParam0->f_160)
	{
		if (IS_EARLIER_THAN(GET_TIME_OF_DAY(), iParam0->f_156))
		{
			return 0;
		}
	}
	if (((Global_3380 || Global_3382) || Global_3392) || Global_34165.f_28)
	{
		return 0;
	}
	if (Function_149(iParam0->f_132))
	{
		if (Function_148(&(Global_29008[iParam0->f_132]), 256))
		{
			return 0;
		}
	}
	if (Function_144(bParam1))
	{
		return 0;
	}
	if (IS_ACTOR_VALID(iParam0->f_204))
	{
		if (!((((Global_63096 || Global_3384) || Global_3369) || iParam0->f_152) || GET_ACTOR_INVULNERABILITY(iParam0->f_204)))
		{
			if (!Function_147(iParam0))
			{
				return 0;
			}
			if (IS_AI_ACTOR_ENGAGED_IN_COMBAT(iParam0->f_204))
			{
				return 0;
			}
			if (FIRE_IS_ACTOR_ON_FIRE(iParam0->f_204))
			{
				return 0;
			}
			if (IS_ACTOR_DEAD(iParam0->f_204))
			{
				return 0;
			}
		}
	}
	if (!Function_152(iParam0, bParam1))
	{
		return 0;
	}
	Function_12(&Global_63541[bParam155] + 144, 64);
	return 1;
}

bool Function_152(int iParam0, int iParam1) //Position: 0x75AC / 30124
{
	int iVar0;
	
	if (!iParam0->f_172 != 0)
	{
		if (Function_143(iParam0 + 172, 4))
		{
			if (!Function_153(iParam1))
			{
				return 0;
			}
		}
		if (Function_143(iParam0 + 172, 1))
		{
			if (!Function_112(iParam0->f_168))
			{
				return 0;
			}
		}
		if (Function_143(iParam0 + 172, 2) && Global_3365)
		{
			iVar0 = Function_81(iParam0->f_176);
			if (Function_79(iVar0))
			{
				if (StackVal && StackVal == 3 == 4)
				{
					return 0;
				}
			}
		}
		if (Function_143(iParam0 + 172, 8) && Global_3365)
		{
			if (Function_79(iParam0->f_164))
			{
				if (StackVal != 3)
				{
					return 0;
				}
			}
		}
		switch (Global_63399)
		{
			case 0x00000001:
				if (!Function_143(iParam0 + 172, 32))
				{
					return 0;
				}
				break;
			
			case 0x00000002:
				if (!Function_143(iParam0 + 172, 64))
				{
					return 0;
				}
				break;
			
			case 0x00000004:
				if (!Function_143(iParam0 + 172, 128))
				{
					return 0;
				}
				break;
			
			case 0x00000008:
				if (!Function_143(iParam0 + 172, 256))
				{
					return 0;
				}
				break;
			
			case 0x00000010:
				if (!Function_143(iParam0 + 172, 512))
				{
					return 0;
				}
				break;
			
			case 0x00000020:
				if (!Function_143(iParam0 + 172, 1024))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

bool Function_153(int iParam0) //Position: 0x76F0 / 30448
{
	return StackVal;
}

void Function_154() //Position: 0x7700 / 30464
{
	if (Function_157(Global_28180))
	{
		if (Global_28180.f_12)
		{
			if (IS_BLIP_VALID(StackVal))
			{
				REMOVE_BLIP(StackVal);
			}
			Global_28180.f_4 = Function_156(Global_28180);
			Global_28180.f_8 = Function_155(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
		else if (!IS_BLIP_VALID(StackVal))
		{
			Global_28180.f_4 = Function_156(Global_28180);
			Global_28180.f_8 = Function_155(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
	}
	return;
}

var Function_155(int iParam0, int iParam1) //Position: 0x777B / 30587
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
					if (Function_100(6, 0) || Function_100(12, 0))
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
					if (Function_112(13) && iVar16)
					{
						bVar6 = StackVal;
						iVar16 = 0;
					}
					else if (iVar16 && Function_100(5, 0))
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
					if (Function_112(26) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_112(25) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_112(24) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_112(23) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (iVar17 && Function_100(26, 0))
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
					if (Function_112(55) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_112(54) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_112(27) && iVar18)
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
					if (Function_112(52) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_112(51) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_112(50) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_112(49) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_100(17, 0) && iVar15)
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
					if (Function_112(19) && iVar19)
					{
						vVar0 = { -1708,36f, 46,18f, 2175,89f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_100(6, 0) && Function_112(18)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_112(17) && iVar19)
					{
						vVar0 = { -1687,208f, 53,208f, 2140,491f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_100(9, 0) && Function_112(16)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_112(15) && iVar19)
					{
						vVar0 = { -1709,084f, 55,216f, 2104,631f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if (Function_100(8, 0) && iVar19)
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
	if (Function_60(StackVal, StackVal, vVar0))
	{
		if (IS_OBJECT_VALID(bVar6))
		{
			GET_OBJECT_POSITION(bVar6, &vVar0);
			if (Function_60(StackVal, StackVal, vVar3))
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
	if (!Function_60(StackVal, StackVal, vVar3))
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

int Function_156(int iParam0) //Position: 0x836C / 33644
{
	int iVar0;
	int iVar1;
	
	if (!Function_157(iParam0))
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

bool Function_157(int iParam0) //Position: 0x83BB / 33723
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

int Function_158(int iParam0) //Position: 0x83D1 / 33745
{
	if (Global_28180 == iParam0)
	{
		return 1;
	}
	if (!Function_157(iParam0))
	{
		LOG_ERROR("Attempting to hunt to an invalid outfit");
		return 0;
	}
	if (Function_163(iParam0))
	{
		return 0;
	}
	if (!Function_161(iParam0))
	{
		return 0;
	}
	Global_28180 = iParam0;
	Global_28180.f_12 = 1;
	return 1;
}

void Function_159() //Position: 0x843A / 33850
{
	Global_28180 = 4294967295;
	if (IS_BLIP_VALID(StackVal))
	{
		REMOVE_BLIP(StackVal);
	}
	Global_28180.f_12 = 1;
	return;
}

void Function_160(bool bParam0) //Position: 0x845D / 33885
{
	bool bVar0;
	
	if (bParam0 != 4294967295 || bParam0 != 0)
	{
		return;
	}
	bVar0 = GET_JOURNAL_ENTRY_TYPE(bParam0);
	switch (bVar0)
	{
		case 0x00000004:
			Function_159();
			break;
		
		case 0x00000002:
			break;
	}
	TARGET_JOURNAL_ENTRY(4294967295);
	return;
}

bool Function_161(int iParam0) //Position: 0x8497 / 33943
{
	if (!Function_157(iParam0))
	{
		LOG_ERROR("Attempting to check discovery of invalid outfit");
		return 0;
	}
	if (Function_162(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

bool Function_162(int iParam0, int iParam1) //Position: 0x84E9 / 34025
{
	int iVar0;
	
	if (!Function_157(iParam0))
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

bool Function_163(int iParam0) //Position: 0x8516 / 34070
{
	if (!Function_157(iParam0))
	{
		LOG_ERROR("Attempting to check wearable on invalid outfit");
		return 0;
	}
	if (Function_162(iParam0, 4))
	{
		return 1;
	}
	return 0;
}

bool Function_164(int iParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x8567 / 34151
{
	if (!iParam0->f_172 != 0)
	{
		if (Function_143(iParam0 + 172, 4))
		{
			if (!Function_153(iParam1))
			{
				return 0;
			}
		}
		if (Function_143(iParam0 + 172, 1))
		{
			if (Global_63541[iParam0->f_16855].f_20 != Global_63541[iParam155].f_20 || iParam3)
			{
				if (!Function_112(iParam0->f_168))
				{
					return 0;
				}
			}
		}
		if (Function_143(iParam0 + 172, 2) && Global_3365)
		{
			if (!Function_100(iParam0->f_176, 0))
			{
				return 0;
			}
		}
		if (Function_143(iParam0 + 172, 8) && Global_3365)
		{
			if (!Function_165(iParam0->f_164, 0))
			{
				return 0;
			}
		}
		if (!bParam2)
		{
			return 1;
		}
		return Function_142(iParam0);
	}
	return 1;
}

bool Function_165(int iParam0, bool bParam1) //Position: 0x861B / 34331
{
	if (!Function_79(iParam0))
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

void Function_166(int iParam0, bool bParam1) //Position: 0x8651 / 34385
{
	if (IS_LATER_THAN(StackVal, GET_TIME_OF_DAY()))
	{
		if (IS_ACTOR_VALID(Global_34573))
		{
			if (VDIST(*(iParam0 + 100), Global_34574) < iParam0->f_76)
			{
				Global_74542[bParam110] = 1;
				SET_JOURNAL_ENTRY_PROGRESS(Global_63541[bParam155].f_140, -1.0f, false, 0);
			}
		}
	}
	return;
}

bool Function_167(int iParam0) //Position: 0x86A1 / 34465
{
	if (Global_74542[iParam010] == 0)
	{
		return 1;
	}
	return 0;
}

bool Function_168(int iParam0) //Position: 0x86B6 / 34486
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_25986[iParam0];
}

void Function_169() //Position: 0x86D2 / 34514
{
	Global_63535 = CREATE_LAYOUT("QuestLayout");
	return;
}

void Function_170(int iParam0) //Position: 0x86EC / 34540
{
	strcpy(iParam0 + 12, "nMINIGAMES", 16);
	*iParam0 = 78857;
	iParam0->f_4 = 34592;
	iParam0->f_8 = 78857;
	iParam0->f_28 = 0;
	return;
}

int Function_171() //Position: 0x8720 / 34592
{
	if (Function_172(&Global_62527, 0) >= 0)
	{
		return 0;
	}
	return 1;
}

int Function_172(var uParam0, bool bParam1) //Position: 0x8734 / 34612
{
	int iVar0;
	bool bVar1;
	int iVar2;
	struct<105> Var3;
	
	bVar1 = 1000;
	if (Global_62478)
	{
		if (!DECOR_CHECK_EXIST(GET_PLAYER_ACTOR(0), "launchedmissiontester"))
		{
			if (Global_62482 >= 4294967295)
			{
				LOG_ERROR("launching mission tester");
				Function_354();
			}
			else if (Global_62481 == 4294967294)
			{
				Function_353();
			}
			DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "launchedmissiontester", true);
			return bVar1;
		}
	}
	if (!Global_30923 != 0)
	{
		iVar0 = 0;
		while (iVar0 < (*uParam0 - 1))
		{
			if (IS_SCRIPT_VALID(uParam0[iVar040]->f_108))
			{
				TERMINATE_SCRIPT(uParam0[iVar040]->f_108);
			}
			iVar0++;
		}
		Global_30923 = 0;
	}
	if (Function_1())
	{
		Function_352(uParam0);
		return bVar1;
	}
	Function_351(uParam0);
	if (((Global_3403 || Global_3407) || Global_3404) || Function_350(2048))
	{
		Function_352(uParam0);
		return bVar1;
	}
	if (Global_3382)
	{
		Function_352(uParam0);
		return bVar1;
	}
	if (Global_3392)
	{
		Function_352(uParam0);
		return bVar1;
	}
	if (Global_3384)
	{
		Function_352(uParam0);
		if (Global_3383)
		{
			Global_3383 = 0;
		}
		return bVar1;
	}
	if (Global_3380)
	{
		Function_352(uParam0);
		if (Global_3379)
		{
			Global_3379 = 0;
		}
		return bVar1;
	}
	if (Global_3395 || Global_3396)
	{
		return bVar1;
	}
	if (!Global_3374 && bParam1)
	{
		return bVar1;
	}
	if (!bParam1 && Function_349(Global_29006))
	{
		Function_352(uParam0);
		return bVar1;
	}
	if (Global_3379)
	{
		Function_352(uParam0);
		Global_3380 = 1;
		Function_347(1, 0);
		return bVar1;
	}
	if (Global_3383)
	{
		Function_352(uParam0);
		Global_3384 = 1;
		Function_347(0, 0);
		return bVar1;
	}
	if (Global_63096 && !Function_345(&Global_63084))
	{
		Function_352(uParam0);
		return bVar1;
	}
	if ((Function_344(1, 0, 0, 5) && !Global_3384) && !Global_3380)
	{
		Function_352(uParam0);
		return bVar1;
	}
	if (bParam1)
	{
		if (!Global_30938 != 0)
		{
			iVar2 = Function_91(StackVal, StackVal, Global_30938);
			if (Function_79(iVar2))
			{
				Var3 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_343(uParam0, iVar2) };
				if (!Var3.f_104 != 0)
				{
					Function_235(&Var3, 0, 0, 0);
				}
			}
			Global_30938 = 0;
		}
	}
	if (Global_34165.f_36 && Global_3366)
	{
		if (Function_82(Global_34165.f_20))
		{
			if (!Global_3422[Global_34165.f_2040].f_104 != 0)
			{
				Function_235(&(Global_3422[Global_34165.f_2040]), 0, 1, 1);
				Global_34165.f_36 = 0;
			}
		}
	}
	iVar0 = 0;
	while (iVar0 <= *uParam0)
	{
		if ((*uParam0)[iVar040] != Global_29003 || !bParam1)
		{
			Function_173(uParam0[iVar040], iVar0, bParam1);
		}
		iVar0++;
	}
	if ((Global_26281 + 5.0f) - 1.0f) > GET_CURRENT_GAME_TIME()
	{
		Global_3406 = 0;
	}
	return bVar1;
}

void Function_173(bool bParam0, int iParam1, bool bParam2) //Position: 0x89D9 / 35289
{
	int iVar0;
	char* cVar1[32];
	bool bVar9;
	bool bVar10;
	vector3 vVar11;
	float fVar14;
	int iVar15;
	bool bVar16;
	int iVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	
	if (bParam0->f_104 == 0)
	{
		return;
	}
	if (!bParam2)
	{
		if (!Global_29006 != bParam0->f_72)
		{
			Function_234(bParam0, iParam1);
			return;
		}
	}
	if (Function_100(iParam1, 0) && !bParam0->f_104 != 2)
	{
		Function_234(bParam0, iParam1);
		return;
	}
	iVar0 = Function_233(StackVal);
	if (iVar0 != 1)
	{
		if (!Function_232(bParam0))
		{
			Function_234(bParam0, iParam1);
			return;
		}
	}
	if (IS_SCRIPT_VALID(bParam0->f_108))
	{
		Function_234(bParam0, iParam1);
		return;
	}
	bParam0->f_124 = 0;
	bParam0->f_92 = 1;
	switch (bParam0->f_104)
	{
		case 0x00000001:
			bParam0->f_124 = 1;
			break;
		
		case 0x00000003:
			if (IS_ACTOR_VALID(Global_34573))
			{
				if ((Global_26281 + 5.0f) - 1.0f) > GET_CURRENT_GAME_TIME()
				{
					if (!Function_231(bParam0))
					{
						bParam0->f_124 = 0;
						Function_230(bParam0->f_100, 0, bParam0->f_128);
						if ((IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(bParam0->f_40)) && iParam1 == 11) && iParam1 == 54)
						{
							if (GRINGO_IS_ACTIVATION_ALLOWED(GET_GRINGO_FROM_OBJECT(bParam0->f_40)))
							{
								GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(bParam0->f_40), false);
							}
						}
					}
					else if (Function_225(bParam0))
					{
						bVar10 = true;
						if (IS_OBJECT_VALID(bParam0->f_44))
						{
							if (Global_3414)
							{
								bVar10 = false;
							}
						}
						if (bVar10)
						{
							bParam0->f_124 = 0;
							Function_230(bParam0->f_100, 0, bParam0->f_128);
							if (GET_OBJECT_TYPE(bParam0->f_40) == 12)
							{
								if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(bParam0->f_40)))
								{
									if (GRINGO_IS_ACTIVATION_ALLOWED(GET_GRINGO_FROM_OBJECT(bParam0->f_40)))
									{
										GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(bParam0->f_40), false);
									}
								}
							}
						}
					}
					else
					{
						if (GET_OBJECT_TYPE(bParam0->f_40) == 12)
						{
							if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(bParam0->f_40)))
							{
								if (!GRINGO_IS_ACTIVATION_ALLOWED(GET_GRINGO_FROM_OBJECT(bParam0->f_40)))
								{
									GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(bParam0->f_40), true);
								}
							}
						}
						bParam0->f_124 = 1;
						Function_230(bParam0->f_100, 1, bParam0->f_128);
						if (Function_143(bParam0 + 128, 4096))
						{
							Function_224(bParam0 + 128, 4096);
						}
					}
					fVar14 = Function_223(StackVal, StackVal, StackVal, StackVal, Global_34574, *(bParam0 + 52));
					if (!bParam0->f_112 && !bParam0->f_152)
					{
						if (!IS_OBJECT_VALID(bParam0->f_40) && UNK_0x214AFB8C(bParam0->f_28))
						{
							if (!STREAMING_IS_GRINGO_LOADED(bParam0->f_28))
							{
								if (!bParam0->f_32)
								{
									STREAMING_REQUEST_GRINGO(bParam0->f_28);
									bParam0->f_32 = 1;
								}
							}
							else if (IS_LAYOUTREF_VALID(Global_6287))
							{
								vVar11 = { StackVal, StackVal, *(bParam0 + 80) };
								bParam0->f_40 = CREATE_GRINGO_IN_LAYOUT_BY_ID(Global_6287, Function_75(), bParam0->f_28, vVar11, 0.0f, 0.0f, 0.0f);
								if (fVar14 > 175.0f)
								{
									Function_224(bParam0 + 128, 8388608);
								}
								else
								{
									Function_222(bParam0 + 128, 8388608);
								}
							}
						}
					}
					if ((((!IS_OBJECT_VALID(bParam0->f_44) && (!bParam0->f_116 || bParam0->f_124)) && ((!iParam1 != 14 || fVar14 < 100.0f) || Global_3406)) && ((fVar14 < 7,5f || (bParam0->f_116 && bParam0->f_124)) || Global_3406)) && (!Function_143(bParam0 + 128, 1048576) || bParam0->f_124))
					{
						Function_215(bParam0);
						if (bParam0->f_128 & 524288 >= 0)
						{
							Function_214(4194304);
						}
						if (bParam0->f_124)
						{
							if (IS_BLIP_VALID(bParam0->f_100))
							{
								REMOVE_BLIP(bParam0->f_100);
							}
							bParam0->f_44 = Function_213(StackVal, StackVal, Global_6287, bParam0 + 12, *(bParam0 + 52), 0.0f, 0.0f, 0.0f, Global_34573, bParam0->f_64, 0, 3, bParam0->f_96, 3, 1, 3212836864, 3212836864, 1);
							bParam0->f_100 = GET_BLIP_ON_OBJECT(bParam0->f_44);
						}
						else if (!IS_BLIP_VALID(bParam0->f_100))
						{
							bParam0->f_100 = ADD_BLIP_FOR_COORD(bParam0 + 52, bParam0->f_96, 0, 2, 0);
						}
						SET_BLIP_PRIORITY(bParam0->f_100, 3);
						Function_230(bParam0->f_100, bParam0->f_124, bParam0->f_128);
					}
					else if (!bParam0->f_124 && IS_OBJECT_VALID(bParam0->f_44))
					{
						if (IS_BLIP_VALID(bParam0->f_100))
						{
							REMOVE_BLIP(bParam0->f_100);
						}
						Function_212(bParam0->f_44);
						bParam0->f_100 = ADD_BLIP_FOR_COORD(bParam0 + 52, bParam0->f_96, 0, 2, 0);
						SET_BLIP_PRIORITY(bParam0->f_100, 3);
						Function_230(bParam0->f_100, bParam0->f_124, bParam0->f_128);
					}
					else if (!bParam0->f_124 && !IS_BLIP_VALID(bParam0->f_100))
					{
						bParam0->f_100 = ADD_BLIP_FOR_COORD(bParam0 + 52, bParam0->f_96, 0, 2, 0);
						SET_BLIP_PRIORITY(bParam0->f_100, 3);
						Function_230(bParam0->f_100, bParam0->f_124, bParam0->f_128);
					}
					if ((!bParam0->f_112 && !bParam0->f_124) && iVar0 == 1)
					{
						if (fVar14 > 5.0f)
						{
							if (!bParam0->f_116)
							{
								Function_210(bParam0);
								if (IS_OBJECT_VALID(bParam0->f_44))
								{
									Function_212(bParam0->f_44);
									bParam0->f_100 = ADD_BLIP_FOR_COORD(bParam0 + 52, bParam0->f_96, 0, 2, 0);
									SET_BLIP_PRIORITY(bParam0->f_100, 3);
									Function_230(bParam0->f_100, bParam0->f_124, bParam0->f_128);
								}
								bParam0->f_116 = 1;
							}
						}
						else if (bParam0->f_116)
						{
							bParam0->f_116 = 0;
						}
					}
					else if ((Function_143(bParam0 + 128, 4194304) && !bParam0->f_112) && bParam0->f_124)
					{
						if (fVar14 > 5.0f && !Function_143(bParam0 + 128, 8388608))
						{
							Function_13("mission_later_family", 0x41200000, 1, 0, 2, 1, 0);
						}
					}
					if ((!bParam0->f_112 && bParam0->f_124) && iVar0 == 1)
					{
						if ((!bParam0->f_120 && IS_OBJECT_VALID(bParam0->f_44)) && fVar14 > 5.0f)
						{
							if (IS_ACTOR_DRIVING_VEHICLE(Global_34573))
							{
								Function_13("mission_no_vehicle", 0x41200000, 1, 0, 2, 1, 0);
								bParam0->f_120 = 1;
							}
						}
					}
				}
				else
				{
					bParam0->f_124 = 0;
				}
			}
			else
			{
				bParam0->f_124 = 0;
			}
			break;
		
		case 0x00000004:
			if (!IS_ACTOR_VALID(Global_34573))
			{
				bParam0->f_124 = 0;
				return;
			}
			if ((Global_26281 + 5.0f) - 1.0f) < GET_CURRENT_GAME_TIME()
			{
				bParam0->f_124 = 0;
				return;
			}
			if (!IS_VOLUME_VALID(bParam0->f_48))
			{
				bParam0->f_124 = 0;
				return;
			}
			if (!Function_231(bParam0))
			{
				bParam0->f_124 = 0;
				Function_230(bParam0->f_100, 0, bParam0->f_128);
				if (GET_OBJECT_TYPE(bParam0->f_40) == 12)
				{
					if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(bParam0->f_40)))
					{
						if (GRINGO_IS_ACTIVATION_ALLOWED(GET_GRINGO_FROM_OBJECT(bParam0->f_40)))
						{
							GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(bParam0->f_40), false);
						}
					}
				}
			}
			else if (Function_225(bParam0))
			{
				bVar10 = true;
				if (IS_OBJECT_VALID(bParam0->f_48))
				{
					if (Global_3414)
					{
						bVar10 = false;
					}
				}
				if (bVar10)
				{
					bParam0->f_124 = 0;
					Function_230(bParam0->f_100, 0, bParam0->f_128);
					if (GET_OBJECT_TYPE(bParam0->f_40) == 12)
					{
						if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(bParam0->f_40)))
						{
							if (GRINGO_IS_ACTIVATION_ALLOWED(GET_GRINGO_FROM_OBJECT(bParam0->f_40)))
							{
								GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(bParam0->f_40), false);
							}
						}
					}
				}
			}
			else
			{
				if (GET_OBJECT_TYPE(bParam0->f_40) == 12)
				{
					if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(bParam0->f_40)))
					{
						if (!GRINGO_IS_ACTIVATION_ALLOWED(GET_GRINGO_FROM_OBJECT(bParam0->f_40)))
						{
							GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(bParam0->f_40), true);
						}
					}
				}
				bParam0->f_124 = 1;
				Function_230(bParam0->f_100, 1, bParam0->f_128);
				if (Function_143(bParam0 + 128, 4096))
				{
					Function_224(bParam0 + 128, 4096);
				}
			}
			fVar14 = Function_223(StackVal, StackVal, StackVal, StackVal, Global_34574, *(bParam0 + 52));
			bVar9 = IS_ACTOR_IN_VOLUME(Global_34573, bParam0->f_48);
			if (!bParam0->f_112 && !bParam0->f_152)
			{
				if (!IS_OBJECT_VALID(bParam0->f_40) && UNK_0x214AFB8C(bParam0->f_28))
				{
					if (!STREAMING_IS_GRINGO_LOADED(bParam0->f_28))
					{
						if (!bParam0->f_32)
						{
							STREAMING_REQUEST_GRINGO(bParam0->f_28);
							bParam0->f_32 = 1;
						}
					}
					else if (IS_LAYOUTREF_VALID(Global_6287))
					{
						vVar11 = { StackVal, StackVal, *(bParam0 + 80) };
						bParam0->f_40 = CREATE_GRINGO_IN_LAYOUT_BY_ID(Global_6287, Function_75(), bParam0->f_28, vVar11, 0.0f, 0.0f, 0.0f);
						if (fVar14 > 175.0f)
						{
							Function_224(bParam0 + 128, 8388608);
						}
						else
						{
							Function_222(bParam0 + 128, 8388608);
						}
					}
				}
			}
			if (((!bParam0->f_116 && !IS_BLIP_VALID(bParam0->f_100)) && !bVar9) && (!Function_143(bParam0 + 128, 1048576) || bParam0->f_124))
			{
				Function_215(bParam0);
				if (bParam0->f_128 & 524288 >= 0)
				{
					Function_214(4194304);
				}
				bParam0->f_100 = ADD_BLIP_FOR_COORD(bParam0 + 52, bParam0->f_96, 0, 2, 0);
				SET_BLIP_PRIORITY(bParam0->f_100, 3);
				Function_230(bParam0->f_100, bParam0->f_124, bParam0->f_128);
			}
			if (((!IS_OBJECT_VALID(bParam0->f_44) && !bVar9) && bParam0->f_124) && (!Function_143(bParam0 + 128, 4194304) || Function_143(bParam0 + 128, 8388608)))
			{
				bParam0->f_44 = Function_213(StackVal, StackVal, Global_6287, bParam0 + 12, *(bParam0 + 52), 0.0f, 0.0f, 0.0f, Global_34573, 2,5f, 0, 3, 4294967295, 3, 1, 3212836864, 3212836864, 1);
			}
			if (!bParam0->f_112 && !bParam0->f_124)
			{
				if (IS_OBJECT_VALID(bParam0->f_44))
				{
					Function_212(bParam0->f_44);
				}
				if (bVar9)
				{
					if (!bParam0->f_116)
					{
						bParam0->f_116 = 1;
						Function_210(bParam0);
					}
				}
				else if (bParam0->f_116)
				{
					bParam0->f_116 = 0;
				}
			}
			else if ((Function_143(bParam0 + 128, 4194304) && !bParam0->f_112) && bParam0->f_124)
			{
				if (bVar9 && !Function_143(bParam0 + 128, 8388608))
				{
					Function_13("mission_later_family", 0x41200000, 1, 0, 2, 1, 0);
				}
			}
			if ((!bParam0->f_112 && bParam0->f_124) && iVar0 == 1)
			{
				if ((!bParam0->f_120 && IS_OBJECT_VALID(bParam0->f_44)) && bVar9)
				{
					if (IS_ACTOR_DRIVING_VEHICLE(Global_34573))
					{
						Function_13("mission_no_vehicle", 0x41200000, 1, 0, 2, 1, 0);
						bParam0->f_120 = 1;
					}
				}
			}
			break;
		
		case 0x00000005:
			iVar15 = iParam1;
			if (!Function_231(bParam0) || Global_3403)
			{
				bParam0->f_124 = 0;
			}
			else
			{
				bParam0->f_124 = 1;
			}
			iVar17 = Function_209();
			if (iVar17 != 3 || iVar17 != 4)
			{
				if (bParam0->f_128 & 2097152 >= 0)
				{
					bVar16 = true;
				}
			}
			switch (iVar15)
			{
				case 0x00000000:
					bVar18 = Function_208(bParam0->f_72, &bVar19, &(Global_62968[iVar15]), 0);
					break;
				
				case 0x00000001:
					bVar18 = Function_208(bParam0->f_72, &bVar19, &(Global_62968[iVar15]), 1);
					break;
				
				case 0x00000007:
					bVar18 = Function_207(bParam0->f_72, &bVar19, &(Global_62968[iVar15]));
					break;
				
				case 0x00000002:
					bVar18 = Function_205(bParam0->f_72, &bVar19, &(Global_62968[iVar15]));
					break;
				
				case 0x00000008:
					bVar18 = Function_203(bParam0->f_72, &bVar19, &(Global_62968[iVar15]));
					break;
				
				case 0x00000004:
					bVar18 = Function_200(bParam0->f_72, &bVar19, &(Global_62968[iVar15]));
					break;
				
				case 0x00000005:
					bVar18 = Function_199(bParam0->f_72, &bVar19, &(Global_62968[iVar15]));
					break;
			}
			if (iVar15 == 1)
			{
				if (Global_28178 != 1)
				{
					bVar20 = true;
				}
			}
			if (((IS_ACTOR_VALID(Global_34573) && Function_198(iParam1)) && !bVar16) && !bVar20)
			{
				if (!bParam0->f_112 && ((Global_26281 + 5.0f) - 1.0f) > GET_CURRENT_GAME_TIME())
				{
					if (!IS_OBJECT_VALID(bParam0->f_40) && IS_LAYOUTREF_VALID(Global_30616))
					{
						bParam0->f_40 = CREATE_POINT_IN_LAYOUT(Global_30616, Function_75(), *(bParam0 + 52), 0.0f, 0.0f, 0.0f);
					}
				}
				if ((IS_OBJECT_VALID(bParam0->f_40) && !bParam0->f_96 != 4294967295) && !bVar16)
				{
					if (!IS_BLIP_VALID(bParam0->f_100))
					{
						bParam0->f_100 = ADD_BLIP_FOR_OBJECT(bParam0->f_40, bParam0->f_96, 0.0f, 2, 0);
						UNK_0x1E98AFEC(bParam0->f_100, 1);
						SET_BLIP_MAX_DISTANCE(bParam0->f_100, 1,25f);
						SET_BLIP_PRIORITY(bParam0->f_100, true);
					}
				}
				if (IS_BLIP_VALID(bParam0->f_100))
				{
					if (bParam0->f_124)
					{
						if (bVar18)
						{
							SET_BLIP_COLOR(bParam0->f_100, 1.0f, 1.0f, 1.0f, 1.0f);
						}
						else
						{
							SET_BLIP_COLOR(bParam0->f_100, 1.0f, 1.0f, 1.0f, 0,3f);
						}
					}
					else
					{
						SET_BLIP_COLOR(bParam0->f_100, 1.0f, 1.0f, 1.0f, 0,75f);
					}
					if (bParam0->f_124)
					{
						if (!Function_197(iParam1))
						{
							if (Function_196(StackVal, StackVal, *(bParam0 + 52), 1,25f))
							{
								if (Function_193(iParam1, 1))
								{
									Function_129(StackVal, StackVal, bParam0->f_72, (1 + iParam1), *(bParam0 + 52), Function_192(bParam0->f_128));
									SET_BLIP_BLINK(bParam0->f_100, 1, 0, 10.0f);
								}
							}
						}
					}
				}
				if (!bParam0->f_112)
				{
					if (IS_VOLUME_VALID(bParam0->f_48))
					{
						if (IS_POINT_IN_VOLUME(Global_34574, bParam0->f_48))
						{
							bVar21 = true;
						}
					}
					else if (VDIST(Global_34574, *(bParam0 + 52)) > bParam0->f_64)
					{
						bVar21 = true;
					}
					if ((bVar19 && bVar16) && !Function_43(Global_76848, 8388608))
					{
						Function_38(Global_34573, 8388608, 1, 1);
					}
					if (bVar21)
					{
						switch (iVar15)
						{
							case 0x00000000:
								Function_189(bParam0->f_72, bParam0 + 28, 0);
								break;
							
							case 0x00000001:
								Function_189(bParam0->f_72, bParam0 + 28, 1);
								break;
							
							case 0x00000007:
								Function_187(bParam0->f_72, bParam0 + 28);
								break;
							
							case 0x00000002:
								Function_183(bParam0->f_72, bParam0 + 28);
								break;
							
							case 0x00000008:
								Function_181(bParam0->f_72, bParam0 + 28);
								break;
							
							case 0x00000004:
								Function_179(bParam0->f_72, bParam0 + 28);
								break;
							
							case 0x00000005:
								Function_177(bParam0->f_72, bParam0 + 28);
								break;
							}
					}
					if (bVar19)
					{
						if (bVar18)
						{
							if (!bVar16)
							{
								if (!Function_44(Function_176(), 0, 0))
								{
									if (GET_PLAYER_ZOOM_STATE(0) == 0)
									{
										if (FABS((StackVal - StackVal)) > 1.0f)
										{
											if (!AI_GLOBAL_IS_DANGER(Global_34573, 10.0f))
											{
												if (!IS_ACTOR_RIDING_VEHICLE(Global_34573))
												{
													if (!IS_ACTOR_RIDING(Global_34573))
													{
														bVar22 = true;
													}
												}
											}
										}
									}
								}
							}
						}
					}
					if (bVar22)
					{
						if (!IS_SCRIPT_USE_CONTEXT_VALID(bParam0->f_68))
						{
							if (Function_143(bParam0 + 128, 8192))
							{
								if (Function_174() <= bParam0->f_140)
								{
									stradd(&cVar1, "NO_", 32);
								}
							}
							stradd(&cVar1, "LAUNCH_", 32);
							stradd(&cVar1, bParam0 + 12, 32);
							bParam0->f_68 = ADD_SCRIPT_USE_CONTEXT(&cVar1, 40, 5, false, 0, 0, 0, 4294967295, 0);
						}
					}
					else if (IS_SCRIPT_USE_CONTEXT_VALID(bParam0->f_68))
					{
						RELEASE_SCRIPT_USE_CONTEXT(bParam0->f_68);
					}
				}
			}
			else
			{
				if (IS_BLIP_VALID(bParam0->f_100))
				{
					REMOVE_BLIP(bParam0->f_100);
				}
				if (IS_SCRIPT_USE_CONTEXT_VALID(bParam0->f_68))
				{
					RELEASE_SCRIPT_USE_CONTEXT(bParam0->f_68);
				}
			}
			break;
	}
	return;
}

int Function_174() //Position: 0x970D / 38669
{
	return Function_175(0);
}

int Function_175(bool bParam0) //Position: 0x9717 / 38679
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

bool Function_176() //Position: 0x9758 / 38744
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_177(int iParam0, int iParam1) //Position: 0x976D / 38765
{
	bool bVar0;
	int iVar1;
	vector3 vVar2;
	bool bVar5;
	
	if (!Global_3384)
	{
		if (FLOOR(GET_CURRENT_GAME_TIME()) - *iParam1) >= RAND_INT_RANGE(25, 35)
		{
			Function_178(iParam0, 0);
			Function_178(iParam0, 1);
			if (StackVal > Function_223(StackVal, StackVal, StackVal, Function_223(StackVal, StackVal, StackVal, StackVal, Global_34574, Function_178(iParam0, 0)), Global_34574, Function_178(iParam0, 1)))
			{
				iVar1 = 0;
			}
			else
			{
				iVar1 = 1;
			}
			Function_178(iParam0, iVar1);
			vVar2 = { StackVal, StackVal, Function_178(iParam0, iVar1) };
			bVar0 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fake_horseshoe", &vVar2, 1.0f, 0);
			if (IS_GRINGO_VALID(bVar0))
			{
				bVar5 = GET_ACTOR_FROM_OBJECT(GRINGO_QUERY_NAMED_COMPONENT_USER(bVar0, "UseCase1"));
				if (IS_ACTOR_VALID(bVar5))
				{
					SAY_SINGLE_LINE_CONTEXT(bVar5, 268, Global_34573, 0, 0, 0, 4294967295, 4294967295, 0, 1);
					*iParam1 = FLOOR(GET_CURRENT_GAME_TIME());
				}
			}
		}
	}
	else
	{
		*iParam1 = FLOOR(GET_CURRENT_GAME_TIME());
	}
	return;
}

vector3 Function_178(int iParam0, int iParam1) //Position: 0x984F / 38991
{
	if (iParam0 == Global_30668[0])
	{
		if (iParam1 == 0)
		{
			return -814,7646f, 92,42929f, 2350,04f;
		}
		return -826,37f, 92,361f, 2350,054f;
	}
	if (iParam0 == Global_30658[1])
	{
		if (iParam1 == 0)
		{
			return -3657,917f, 42,30736f, 2131,19f;
		}
		return -3666,223f, 42,223f, 2139,29f;
	}
	if (iParam0 == Global_30693[1])
	{
		if (iParam1 == 0)
		{
			return -1709,76f, 8,09067f, 4259,935f;
		}
		return -1721,364f, 8,09067f, 4259,787f;
	}
	if (iParam0 == Global_30717[1])
	{
		LOG_ERROR("Horseshoes beecher's hope has been cut");
	}
	LOG_ERROR("Returning invalid five finger fillet AI seat");
	return 0.0f, 0.0f, 0.0f;
}

void Function_179(int iParam0, int iParam1) //Position: 0x9966 / 39270
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	bool bVar5;
	
	if (!Global_3384)
	{
		if (FLOOR(GET_CURRENT_GAME_TIME()) - *iParam1) >= RAND_INT_RANGE(25, 35)
		{
			bVar1 = RAND_INT_RANGE(false, 6);
			Function_180(iParam0);
			vVar2 = { StackVal, StackVal, Function_180(iParam0) };
			bVar0 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fake_arm_wrestling", &vVar2, 1.0f, 0);
			if (IS_GRINGO_VALID(bVar0))
			{
				bVar5 = GET_ACTOR_FROM_OBJECT(GRINGO_QUERY_NAMED_COMPONENT_USER(bVar0, "UseCase1"));
				if (IS_ACTOR_VALID(bVar5))
				{
					SAY_SINGLE_LINE_CONTEXT(bVar5, 232, Global_34573, 0, 0, 0, 4294967295, 4294967295, 0, 1);
					*iParam1 = FLOOR(GET_CURRENT_GAME_TIME());
				}
			}
		}
	}
	else
	{
		*iParam1 = FLOOR(GET_CURRENT_GAME_TIME());
	}
	return;
}

vector3 Function_180(int iParam0) //Position: 0x9A27 / 39463
{
	if (iParam0 == Global_30693[2])
	{
		return -1471,104f, 16,52992f, 3948,271f;
	}
	if (iParam0 == Global_30679[0])
	{
		return -3143,721f, 43,17878f, 3720,842f;
	}
	if (iParam0 == Global_30707[0])
	{
		return -466,5623f, 20,97986f, 3882,657f;
	}
	if (iParam0 == Global_30723[2])
	{
		return -262,932f, 85,11941f, 2119,438f;
	}
	LOG_ERROR("Returning invalid arm wrestling AI seat");
	return 0.0f, 0.0f, 0.0f;
}

void Function_181(int iParam0, int iParam1) //Position: 0x9AD2 / 39634
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	bool bVar5;
	
	if (!Global_3384)
	{
		if (FLOOR(GET_CURRENT_GAME_TIME()) - *iParam1) >= RAND_INT_RANGE(25, 35)
		{
			bVar1 = RAND_INT_RANGE(false, 6);
			Function_182(iParam0);
			vVar2 = { StackVal, StackVal, Function_182(iParam0) };
			bVar0 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fake_FiveFingerFillet", &vVar2, 1.0f, 0);
			if (IS_GRINGO_VALID(bVar0))
			{
				bVar5 = GET_ACTOR_FROM_OBJECT(GRINGO_QUERY_NAMED_COMPONENT_USER(bVar0, "UseCase1"));
				if (IS_ACTOR_VALID(bVar5))
				{
					SAY_SINGLE_LINE_CONTEXT(bVar5, 261, Global_34573, 0, 0, 0, 4294967295, 4294967295, 0, 1);
					*iParam1 = FLOOR(GET_CURRENT_GAME_TIME());
				}
			}
		}
	}
	else
	{
		*iParam1 = FLOOR(GET_CURRENT_GAME_TIME());
	}
	return;
}

vector3 Function_182(int iParam0) //Position: 0x9B97 / 39831
{
	if (iParam0 == Global_30640[0])
	{
		return -2194,388f, 16,57687f, 2592,54f;
	}
	if (iParam0 == Global_30668[1])
	{
		return 161,1002f, 73,83751f, 2294,133f;
	}
	if (iParam0 == Global_30685[0])
	{
		return -4274,772f, 18,07059f, 4453,844f;
	}
	if (iParam0 == Global_30707[3])
	{
		return 354,5946f, 76,28807f, 3448,024f;
	}
	if (iParam0 == Global_30723[1])
	{
		return -464,3469f, 152,3559f, 1596,59f;
	}
	LOG_ERROR("Returning invalid five finger fillet AI seat");
	return 0.0f, 0.0f, 0.0f;
}

void Function_183(int iParam0, int iParam1) //Position: 0x9C65 / 40037
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	bool bVar5;
	
	if (!Global_3384)
	{
		if (FLOOR(GET_CURRENT_GAME_TIME()) - *iParam1) >= RAND_INT_RANGE(25, 35)
		{
			bVar1 = RAND_INT_RANGE(false, 6);
			Function_186(iParam0);
			vVar2 = { StackVal, StackVal, Function_186(iParam0) };
			bVar0 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fake_blackjack_dealer", &vVar2, 1.0f, 0);
			if (IS_GRINGO_VALID(bVar0))
			{
				bVar5 = GET_ACTOR_FROM_OBJECT(GRINGO_QUERY_NAMED_COMPONENT_USER(bVar0, "UseCase1"));
				if (IS_ACTOR_VALID(bVar5))
				{
					if (Function_184(GET_OBJECT_FROM_ACTOR(bVar5), GET_OBJECT_FROM_ACTOR(Global_34573)))
					{
						SET_ACTION_NODE_FOR_ACTOR(bVar5, "blackjack/Fake/Dealer/invite/front");
					}
					else
					{
						SET_ACTION_NODE_FOR_ACTOR(bVar5, "blackjack/Fake/Dealer/invite/back");
					}
					SAY_SINGLE_LINE_CONTEXT(bVar5, 242, Global_34573, 0, 0, 0, 4294967295, 4294967295, 0, 1);
					*iParam1 = FLOOR(GET_CURRENT_GAME_TIME());
				}
			}
		}
	}
	else
	{
		*iParam1 = FLOOR(GET_CURRENT_GAME_TIME());
	}
	return;
}

bool Function_184(var uParam0, bool bParam1) //Position: 0x9D92 / 40338
{
	vector3 vVar0;
	
	GET_OBJECT_POSITION(GET_ACTOR_FROM_OBJECT(bParam1), &vVar0);
	return Function_185(StackVal, StackVal, uParam0, vVar0);
}

int Function_185(bool bParam0, vector3 vParam1) //Position: 0x9DAC / 40364
{
	vector3 vVar0;
	vector3 vVar3;
	var uVar6;
	float fVar9;
	
	GET_OBJECT_POSITION(GET_ACTOR_FROM_OBJECT(bParam0), &vVar0);
	vVar3 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar0, vParam1, StackVal) };
	GET_OBJECT_AXIS(bParam0, &uVar6, 2);
	fVar9 = VDOT(&vVar3, &uVar6);
	if (fVar9 > 0.0f)
	{
		return 1;
	}
	return 0;
}

vector3 Function_186(int iParam0) //Position: 0x9DED / 40429
{
	if (iParam0 == Global_30693[0])
	{
		return -2685,988f, 31,35322f, 4283,588f;
	}
	if (iParam0 == Global_30658[1])
	{
		return -3640,397f, 42,77086f, 2104,753f;
	}
	if (iParam0 == Global_30717[0])
	{
		return 719,2065f, 78,4736f, 1312,102f;
	}
	if (iParam0 == Global_30668[1])
	{
		return 171,4703f, 73,74976f, 2224,109f;
	}
	LOG_ERROR("Returning invalid coordinate");
	return 0.0f, 0.0f, 0.0f;
}

void Function_187(int iParam0, int iParam1) //Position: 0x9E8D / 40589
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	
	if (!Global_3384)
	{
		if (FLOOR(GET_CURRENT_GAME_TIME()) - *iParam1) >= RAND_INT_RANGE(25, 35)
		{
			bVar4 = RAND_INT_RANGE(false, 6);
			bVar6 = bVar4;
			while (bVar6 < 6)
			{
				if (!bVar5)
				{
					Function_188(iParam0, bVar6);
					vVar0 = { StackVal, StackVal, Function_188(iParam0, bVar6) };
					bVar3 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fake_liars_dice", &vVar0, 1.0f, 0);
					if (IS_GRINGO_VALID(bVar3))
					{
						bVar7 = GET_ACTOR_FROM_OBJECT(GRINGO_QUERY_NAMED_COMPONENT_USER(bVar3, "UseCase1"));
						if (IS_ACTOR_VALID(bVar7))
						{
							SAY_SINGLE_LINE_CONTEXT(bVar7, 274, Global_34573, 0, 0, 0, 4294967295, 4294967295, 0, 1);
							*iParam1 = FLOOR(GET_CURRENT_GAME_TIME());
							bVar5 = true;
						}
					}
				}
				bVar6++;
			}
			if (!bVar5)
			{
				bVar6 = false;
				while (bVar6 < (bVar4 - 1))
				{
					Function_188(iParam0, bVar6);
					vVar0 = { StackVal, StackVal, Function_188(iParam0, bVar6) };
					bVar3 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fake_liars_dice", &vVar0, 1.0f, 0);
					if (IS_GRINGO_VALID(bVar3))
					{
						bVar8 = GET_ACTOR_FROM_OBJECT(GRINGO_QUERY_NAMED_COMPONENT_USER(bVar3, "UseCase1"));
						if (IS_ACTOR_VALID(bVar8))
						{
							SAY_SINGLE_LINE_CONTEXT(bVar8, 274, Global_34573, 0, 0, 0, 4294967295, 4294967295, 0, 1);
							*iParam1 = FLOOR(GET_CURRENT_GAME_TIME());
						}
					}
					bVar6++;
				}
			}
		}
	}
	else
	{
		*iParam1 = FLOOR(GET_CURRENT_GAME_TIME());
	}
	return;
}

vector3 Function_188(int iParam0, bool bParam1) //Position: 0xA013 / 40979
{
	if (iParam0 == Global_30685[0])
	{
		switch (bParam1)
		{
			case 0x00000000:
				return -4288,696f, 26,72937f, 4381,383f;
				break;
			
			case 0x00000001:
				return -4289,277f, 26,72937f, 4381,477f;
				break;
			
			case 0x00000002:
				return -4289,651f, 26,72937f, 4381,039f;
				break;
			
			case 0x00000003:
				return -4289,435f, 26,72937f, 4380,51f;
				break;
			
			case 0x00000004:
				return -4288,878f, 26,72937f, 4380,39f;
				break;
			
			case 0x00000005:
				return -4288,485f, 26,72937f, 4380,807f;
				break;
		}
	}
	else if (iParam0 == Global_30668[1])
	{
		switch (bParam1)
		{
			case 0x00000000:
				return 167,5964f, 73,74156f, 2222,775f;
				break;
			
			case 0x00000001:
				return 167,958f, 73,74529f, 2222,327f;
				break;
			
			case 0x00000002:
				return 168,5496f, 73,74591f, 2222,387f;
				break;
			
			case 0x00000003:
				return 168,7889f, 73,74529f, 2222,935f;
				break;
			
			case 0x00000004:
				return 168,4313f, 73,74976f, 2223,425f;
				break;
			
			case 0x00000005:
				return 167,8298f, 73,74976f, 2223,35f;
				break;
		}
	}
	else if (iParam0 == Global_30707[2])
	{
		switch (bParam1)
		{
			case 0x00000000:
				return -788,6586f, 13,16462f, 3698,422f;
				break;
			
			case 0x00000001:
				return -788,4316f, 13,16762f, 3698,957f;
				break;
			
			case 0x00000002:
				return -788,7964f, 13,165f, 3699,425f;
				break;
			
			case 0x00000003:
				return -789,389f, 13,165f, 3699,35f;
				break;
			
			case 0x00000004:
				return -789,6095f, 13,165f, 3698,805f;
				break;
			
			case 0x00000005:
				return -789,2333f, 13,165f, 3698,335f;
				break;
		}
	}
	else if (iParam0 == Global_30717[0])
	{
		switch (bParam1)
		{
			case 0x00000000:
				return 856,9058f, 77,51558f, 1278,093f;
				break;
			
			case 0x00000001:
				return 856,6888f, 77,51558f, 1277,556f;
				break;
			
			case 0x00000002:
				return 857,0518f, 77,51558f, 1277,099f;
				break;
			
			case 0x00000003:
				return 857,629f, 77,51558f, 1277,148f;
				break;
			
			case 0x00000004:
				return 857,8614f, 77,51558f, 1277,699f;
				break;
			
			case 0x00000005:
				return 857,4864f, 77,51558f, 1278,173f;
				break;
			}
	}
	LOG_ERROR("Returning invalid coordinate");
	return 0.0f, 0.0f, 0.0f;
}

void Function_189(int iParam0, var uParam1, bool bParam2) //Position: 0xA2E7 / 41703
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	if (!Global_3384)
	{
		if (FLOOR(GET_CURRENT_GAME_TIME()) - *uParam1) >= RAND_INT_RANGE(25, 35)
		{
			bVar1 = RAND_INT_RANGE(false, 6);
			bVar3 = bVar1;
			while (bVar3 < 6)
			{
				if (!bVar2)
				{
					Function_191(iParam0, bVar3, bParam2);
					bVar0 = Function_190(StackVal, StackVal, Function_191(iParam0, bVar3, bParam2));
					if (IS_GRINGO_VALID(bVar0))
					{
						bVar4 = GET_ACTOR_FROM_OBJECT(GRINGO_QUERY_NAMED_COMPONENT_USER(bVar0, "UseCase1"));
						if (IS_ACTOR_VALID(bVar4))
						{
							if (IS_ACTION_NODE_PLAYING_PARTIAL(bVar4, "ncard_idle") || IS_ACTION_NODE_PLAYING_PARTIAL(bVar4, "look_at_cards"))
							{
								SET_ACTION_NODE_FOR_ACTOR(bVar4, "sit_poker/Fake/look_up");
								SAY_SINGLE_LINE_CONTEXT(bVar4, 280, Global_34573, 0, 0, 0, 4294967295, 4294967295, 0, 1);
								*uParam1 = FLOOR(GET_CURRENT_GAME_TIME());
								bVar2 = true;
							}
						}
					}
				}
				bVar3++;
			}
			if (!bVar2)
			{
				bVar3 = false;
				while (bVar3 < (bVar1 - 1))
				{
					Function_191(iParam0, bVar3, bParam2);
					bVar0 = Function_190(StackVal, StackVal, Function_191(iParam0, bVar3, bParam2));
					if (IS_GRINGO_VALID(bVar0))
					{
						bVar5 = GET_ACTOR_FROM_OBJECT(GRINGO_QUERY_NAMED_COMPONENT_USER(bVar0, "UseCase1"));
						if (IS_ACTOR_VALID(bVar5))
						{
							if (IS_ACTION_NODE_PLAYING_PARTIAL(bVar5, "ncard_idle") || IS_ACTION_NODE_PLAYING_PARTIAL(bVar5, "look_at_cards"))
							{
								SET_ACTION_NODE_FOR_ACTOR(bVar5, "sit_poker/Fake/look_up");
								SAY_SINGLE_LINE_CONTEXT(bVar5, 280, Global_34573, 0, 0, 0, 4294967295, 4294967295, 0, 1);
								*uParam1 = FLOOR(GET_CURRENT_GAME_TIME());
							}
						}
					}
					bVar3++;
				}
			}
		}
	}
	return;
}

bool Function_190(var uParam0, var uParam1, int iParam2) //Position: 0xA473 / 42099
{
	return LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fake_poker", &uParam0, 1.0f, 0);
}

vector3 Function_191(int iParam0, bool bParam1, bool bParam2) //Position: 0xA4B5 / 42165
{
	if (iParam0 == Global_30668[0])
	{
		switch (bParam1)
		{
			case 0x00000000:
				return -801,0966f, 92,75807f, 2375,792f;
				break;
			
			case 0x00000001:
				return -801,4974f, 92,75435f, 2375,295f;
				break;
			
			case 0x00000002:
				return -801,2829f, 92,75435f, 2374,737f;
				break;
			
			case 0x00000003:
				return -800,724f, 92,76255f, 2374,656f;
				break;
			
			case 0x00000004:
				return -800,3233f, 92,75678f, 2375,122f;
				break;
			
			case 0x00000005:
				return -800,5463f, 92,75435f, 2375,677f;
				break;
		}
	}
	else if (iParam0 == Global_30668[1])
	{
		switch (bParam1)
		{
			case 0x00000000:
				return 164,353f, 73,75671f, 2230,925f;
				break;
			
			case 0x00000001:
				return 164,5807f, 73,82056f, 2231,472f;
				break;
			
			case 0x00000002:
				return 164,2043f, 73,75299f, 2231,971f;
				break;
			
			case 0x00000003:
				return 163,6548f, 73,76118f, 2231,889f;
				break;
			
			case 0x00000004:
				return 163,4103f, 73,76118f, 2231,366f;
				break;
			
			case 0x00000005:
				return 163,7511f, 73,75671f, 2230,869f;
				break;
		}
	}
	else if (iParam0 == Global_30640[0])
	{
		switch (bParam1)
		{
			case 0x00000000:
				return -2157,424f, 16,88292f, 2596,033f;
				break;
			
			case 0x00000001:
				return -2158,012f, 16,94059f, 2595,997f;
				break;
			
			case 0x00000002:
				return -2158,228f, 16,87845f, 2595,416f;
				break;
			
			case 0x00000003:
				return -2157,847f, 16,87845f, 2594,96f;
				break;
			
			case 0x00000004:
				return -2157,261f, 16,87845f, 2595,042f;
				break;
			
			case 0x00000005:
				return -2157,04f, 16,87845f, 2595,596f;
				break;
		}
	}
	else if (iParam0 == Global_30717[0])
	{
		if (bParam2)
		{
			switch (bParam1)
			{
				case 0x00000000:
					return 748,5359f, 82,6927f, 1267,343f;
					break;
				
				case 0x00000001:
					return 749,138f, 82,6927f, 1266,645f;
					break;
				
				case 0x00000002:
					return 750,045f, 82,6927f, 1266,796f;
					break;
				
				case 0x00000003:
					return 750,0344f, 82,6917f, 1267,552f;
					break;
				
				case 0x00000004:
					return 749,7606f, 82,6927f, 1268,372f;
					break;
				
				case 0x00000005:
					return 748,8501f, 82,6927f, 1268,207f;
					break;
			}
		}
		else
		{
			switch (bParam1)
			{
				case 0x00000000:
					return 717,6248f, 78,47099f, 1325,972f;
					break;
				
				case 0x00000001:
					return 717,0453f, 78,47099f, 1325,919f;
					break;
				
				case 0x00000002:
					return 716,8008f, 78,47099f, 1325,396f;
					break;
				
				case 0x00000003:
					return 717,1418f, 78,47099f, 1324,928f;
					break;
				
				case 0x00000004:
					return 717,7181f, 78,47099f, 1324,969f;
					break;
				
				case 0x00000005:
					return 717,9684f, 78,47099f, 1325,495f;
					break;
				}
		}
	}
	else if (iParam0 == Global_30717[1])
	{
		switch (bParam1)
		{
			case 0x00000000:
				return -138,6693f, 119,2419f, 1344,049f;
				break;
			
			case 0x00000001:
				return -139,2573f, 119,2419f, 1343,961f;
				break;
			
			case 0x00000002:
				return -139,4945f, 119,2419f, 1343,419f;
				break;
			
			case 0x00000003:
				return -139,1212f, 119,2419f, 1342,946f;
				break;
			
			case 0x00000004:
				return -138,5368f, 119,2419f, 1343,024f;
				break;
			
			case 0x00000005:
				return -138,2953f, 119,2419f, 1343,58f;
				break;
		}
	}
	else if (iParam0 == Global_30693[0])
	{
		switch (bParam1)
		{
			case 0x00000000:
				return -2701,487f, 31,151f, 4278,554f;
				break;
			
			case 0x00000001:
				return -2701,713f, 31,151f, 4277,994f;
				break;
			
			case 0x00000002:
				return -2701,347f, 31,151f, 4277,538f;
				break;
			
			case 0x00000003:
				return -2700,726f, 31,151f, 4277,604f;
				break;
			
			case 0x00000004:
				return -2700,508f, 31,151f, 4278,2f;
				break;
			
			case 0x00000005:
				return -2700,919f, 31,151f, 4278,653f;
				break;
		}
	}
	else if (iParam0 == Global_30707[2])
	{
		switch (bParam1)
		{
			case 0x00000000:
				return -795,5794f, 13,16767f, 3699,937f;
				break;
			
			case 0x00000001:
				return -795,8744f, 13,16057f, 3699,083f;
				break;
			
			case 0x00000002:
				return -794,9905f, 13,16057f, 3698,687f;
				break;
			
			case 0x00000003:
				return -794,196f, 13,16057f, 3699,235f;
				break;
			
			case 0x00000004:
				return -794,2787f, 13,16057f, 3700,203f;
				break;
			
			case 0x00000005:
				return -795,169f, 13,16057f, 3700,608f;
				break;
			}
	}
	LOG_ERROR("Returning invalid coordinate");
	return 0.0f, 0.0f, 0.0f;
}

int Function_192(int iParam0) //Position: 0xAA2F / 43567
{
	int iVar0;
	
	if (iParam0 & 64 == 0)
	{
		iVar0 |= 2;
	}
	if (iParam0 & 128 == 0)
	{
		iVar0 |= 4;
	}
	if (iParam0 & 256 == 0)
	{
		iVar0 |= 8;
	}
	if (iParam0 & 512 == 0)
	{
		iVar0 |= 16;
	}
	if (iParam0 & 1024 == 0)
	{
		iVar0 |= 32;
	}
	if (iParam0 & 32 == 0)
	{
		iVar0 |= 1;
	}
	return iVar0;
}

bool Function_193(int iParam0, int iParam1) //Position: 0xAA97 / 43671
{
	int iVar0;
	
	iVar0 = (1 + iParam0);
	return Function_194(iVar0, iParam1);
}

int Function_194(int iParam0, bool bParam1) //Position: 0xAAAA / 43690
{
	bool bVar0;
	struct<8> Var1;
	
	if ((!Global_26031[iParam0] && (!bParam1 || !Function_195())) && !bVar0)
	{
		switch (iParam0)
		{
			case 0x00000002:
				Global_26031[iParam0] = 1;
				break;
			
			case 0x00000001:
				bVar0 = true;
				Global_26031[iParam0] = 1;
				strcpy(&Var1, "poker", 32);
				break;
			
			case 0x00000003:
				bVar0 = true;
				Global_26031[iParam0] = 1;
				strcpy(&Var1, "nblackjack", 32);
				break;
			
			case 0x00000004:
				Global_26031[iParam0] = 1;
				break;
			
			case 0x00000005:
				bVar0 = true;
				Global_26031[iParam0] = 1;
				strcpy(&Var1, "armwrestle", 32);
				break;
			
			case 0x00000006:
				bVar0 = true;
				Global_26031[iParam0] = 1;
				strcpy(&Var1, "horseshoes", 32);
				break;
			
			case 0x00000007:
				Global_26031[iParam0] = 1;
				break;
			
			case 0x00000008:
				bVar0 = true;
				Global_26031[iParam0] = 1;
				strcpy(&Var1, "nliarsdice", 32);
				break;
			
			case 0x00000009:
				bVar0 = true;
				Global_26031[iParam0] = 1;
				strcpy(&Var1, "fivefinger", 32);
				break;
			
			case 0x0000000A:
				bVar0 = true;
				Global_26031[iParam0] = 1;
				strcpy(&Var1, "nightwatch", 32);
				break;
			
			case 0x0000000B:
				bVar0 = true;
				Global_26031[iParam0] = 1;
				strcpy(&Var1, "horsebreak", 32);
				break;
			
			case 0x0000000C:
				break;
			
			case 0x0000000D:
				break;
			
			case 0x0000000E:
				break;
			
			case 0x0000000F:
				break;
			
			case 0x00000010:
				break;
			
			case 0x00000011:
				break;
			
			case 0x00000012:
				break;
			
			case 0x00000013:
				break;
			
			case 0x00000014:
				break;
			
			case 0x00000016:
				break;
			
			default:
				LOG_ERROR("Found a REGION_BLIP_TYPE that is not enabled for unlocking");
				break;
		}
		if (bVar0 && !bParam1)
		{
			bVar0 = false;
		}
	}
	if (bVar0 && bParam1)
	{
		stradd(&Var1, "_help", 32);
		Function_13(&Var1, 0x41200000, 1, 0, 2, 1, 0);
		return 1;
	}
	return 0;
}

bool Function_195() //Position: 0xACF2 / 44274
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

bool Function_196(vector3 vParam0, float fParam3) //Position: 0xAD1F / 44319
{
	return VDIST(vParam0, Global_34574) > (GET_RADAR_RADIUS() * fParam3);
}

bool Function_197(int iParam0) //Position: 0xAD3A / 44346
{
	int iVar0;
	
	iVar0 = (1 + iParam0);
	if (iVar0 > 0 || iVar0 <= Global_26031)
	{
		return 1;
	}
	return Global_26031[iVar0];
}

int Function_198(int iParam0) //Position: 0xAD5D / 44381
{
	if (iParam0 >= 4294967295 && iParam0 <= 11)
	{
		return 0;
	}
	return Global_25974[iParam0];
}

int Function_199(int iParam0, var uParam1, int iParam2) //Position: 0xAD79 / 44409
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	float fVar6;
	bool bVar7;
	
	if (!IS_OBJECTSET_VALID(*iParam2))
	{
		*iParam2 = CREATE_OBJECTSET_IN_LAYOUT(Function_75(), GET_AMBIENT_LAYOUT(), 12, 0);
	}
	Function_178(iParam0, 0);
	vVar0 = { StackVal, StackVal, Function_178(iParam0, 0) };
	if (GET_OBJECTSET_SIZE(*iParam2) > 2)
	{
		bVar3 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, *iParam2);
	}
	if (IS_OBJECT_VALID(bVar3))
	{
		bVar4 = GET_GRINGO_FROM_OBJECT(bVar3);
	}
	else
	{
		bVar4 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fake_horseshoe", &vVar0, 1.0f, 0);
	}
	Function_178(iParam0, 1);
	vVar0 = { StackVal, StackVal, Function_178(iParam0, 1) };
	if (GET_OBJECTSET_SIZE(*iParam2) > 2)
	{
		bVar3 = GET_INDEXED_OBJECT_IN_OBJECTSET(true, *iParam2);
	}
	if (IS_OBJECT_VALID(bVar3))
	{
		bVar5 = GET_GRINGO_FROM_OBJECT(bVar3);
	}
	else
	{
		bVar5 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fake_horseshoe", &vVar0, 1.0f, 0);
	}
	if (IS_GRINGO_VALID(bVar4) && IS_GRINGO_VALID(bVar5))
	{
		if (IS_GRINGO_VALID(bVar4))
		{
			if (!IS_OBJECT_IN_OBJECTSET(GET_OBJECT_FROM_GRINGO(bVar4), *iParam2))
			{
				ADD_OBJECT_TO_OBJECTSET(GET_OBJECT_FROM_GRINGO(bVar4), *iParam2);
			}
		}
		if (IS_GRINGO_VALID(bVar5))
		{
			if (!IS_OBJECT_IN_OBJECTSET(GET_OBJECT_FROM_GRINGO(bVar5), *iParam2))
			{
				ADD_OBJECT_TO_OBJECTSET(GET_OBJECT_FROM_GRINGO(bVar5), *iParam2);
			}
		}
	}
	if (IS_GRINGO_VALID(bVar4))
	{
		if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(GRINGO_QUERY_NAMED_COMPONENT_USER(bVar4, "UseCase1"))))
		{
			bVar7 = bVar4;
			Function_178(iParam0, 0);
			fVar6 = Function_223(StackVal, StackVal, StackVal, StackVal, Global_34574, Function_178(iParam0, 0));
		}
	}
	if (IS_GRINGO_VALID(bVar5))
	{
		if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(GRINGO_QUERY_NAMED_COMPONENT_USER(bVar5, "UseCase1"))))
		{
			bVar7 = bVar5;
			Function_178(iParam0, 1);
			fVar6 = Function_223(StackVal, StackVal, StackVal, StackVal, Global_34574, Function_178(iParam0, 1));
		}
	}
	if (!IS_GRINGO_VALID(bVar7))
	{
		return 0;
	}
	if (fVar6 > 2.0f)
	{
		if (!Function_44(Global_34573, 1, 1))
		{
			*uParam1 = 1;
		}
	}
	return 1;
}

int Function_200(float fParam0, float fParam1, int iParam2) //Position: 0xAF5E / 44894
{
	bool bVar0;
	bool bVar1[4];
	vector3 vVar6;
	bool bVar9;
	float fVar10;
	int iVar11;
	bool bVar12;
	
	bVar0 = true;
	if (!IS_OBJECTSET_VALID(*iParam2))
	{
		*iParam2 = CREATE_OBJECTSET_IN_LAYOUT(Function_75(), GET_AMBIENT_LAYOUT(), 12, 0);
	}
	Function_180(fParam0);
	vVar6 = { StackVal, StackVal, Function_180(fParam0) };
	if (GET_OBJECTSET_SIZE(*iParam2) > 1)
	{
		bVar9 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, *iParam2);
	}
	if (IS_OBJECT_VALID(bVar9))
	{
		bVar1[0] = GET_GRINGO_FROM_OBJECT(bVar9);
		bVar0 = false;
	}
	else
	{
		bVar1[0] = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fake_arm_wrestling", &vVar6, 1.0f, 0);
	}
	if (IS_GRINGO_VALID(bVar1[0]))
	{
		if (!IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(GRINGO_QUERY_NAMED_COMPONENT_USER(bVar1[0], "UseCase1"))))
		{
			return 0;
		}
	}
	return 0;
	Function_202(fParam0);
	vVar6 = { StackVal, StackVal, Function_202(fParam0) };
	bVar1[1] = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/Player_FiveFingerFillet", &vVar6, 1.0f, 0);
	if (GET_OBJECTSET_SIZE(*iParam2) > 2)
	{
		bVar9 = GET_INDEXED_OBJECT_IN_OBJECTSET(true, *iParam2);
	}
	if (IS_OBJECT_VALID(bVar9))
	{
		bVar1[1] = GET_GRINGO_FROM_OBJECT(bVar9);
		bVar0 = false;
	}
	else
	{
		bVar1[1] = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/player_arm_wrestling", &vVar6, 1.0f, 0);
	}
	if (IS_GRINGO_VALID(bVar1[1]))
	{
		if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(GRINGO_QUERY_NAMED_COMPONENT_USER(bVar1[1], "UseCase1"))))
		{
			return 0;
		}
		GET_OBJECT_POSITION(GET_OBJECT_FROM_GRINGO(bVar1[1]), &vVar6);
		fVar10 = Function_223(StackVal, StackVal, StackVal, StackVal, Global_34574, vVar6);
		if (fVar10 > 2.0f && !Function_44(Global_34573, 1, 1))
		{
			*fParam1 = 1;
		}
	}
	else
	{
		bVar0 = false;
		return 0;
	}
	iVar11 = 0;
	while (iVar11 <= 2)
	{
		Function_201(fParam0, iVar11);
		vVar6 = { StackVal, StackVal, Function_201(fParam0, iVar11) };
		if (GET_OBJECTSET_SIZE(*iParam2) > 1)
		{
			bVar9 = GET_INDEXED_OBJECT_IN_OBJECTSET((2 + iVar11), *iParam2);
		}
		if (IS_OBJECT_VALID(bVar9))
		{
			bVar1[(2 + iVar11)] = GET_GRINGO_FROM_OBJECT(bVar9);
			bVar0 = false;
		}
		else
		{
			bVar1[(2 + iVar11)] = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/arm_wrestling_spectate", &vVar6, 0,1f, 0);
			if (!IS_GRINGO_VALID(bVar1[(2 + iVar11)]))
			{
				bVar1[(2 + iVar11)] = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fivefingerfillet_spectate", &vVar6, 0,1f, 0);
			}
			if (!IS_GRINGO_VALID(bVar1[(2 + iVar11)]))
			{
				bVar1[(2 + iVar11)] = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fivefingerfillet_spectate_B", &vVar6, 0,1f, 0);
			}
			if (!IS_GRINGO_VALID(bVar1[(2 + iVar11)]))
			{
				bVar1[(2 + iVar11)] = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fivefingerfillet_spectate_C", &vVar6, 0,1f, 0);
			}
		}
		if (IS_GRINGO_VALID(bVar1[(2 + iVar11)]))
		{
			bVar12 = GET_ACTOR_FROM_OBJECT(GRINGO_QUERY_NAMED_COMPONENT_USER(bVar1[(2 + iVar11)], "UseCase1"));
			if (IS_ACTOR_VALID(bVar12))
			{
				SET_ACTOR_ALLOW_PLAYER_GREET_RESPONSES(bVar12, 0);
			}
		}
		iVar11++;
	}
	if (bVar0)
	{
		iVar11 = 0;
		while (iVar11 <= 4)
		{
			if (!IS_OBJECT_IN_OBJECTSET(GET_OBJECT_FROM_GRINGO(bVar1[iVar11]), *iParam2))
			{
				ADD_OBJECT_TO_OBJECTSET(GET_OBJECT_FROM_GRINGO(bVar1[iVar11]), *iParam2);
			}
			iVar11++;
		}
	}
	return 1;
}

vector3 Function_201(int iParam0, int iParam1) //Position: 0xB3B0 / 46000
{
	if (iParam0 == Global_30693[2])
	{
		if (iParam1 == 0)
		{
			return -1470,917f, 16,54662f, 3950,254f;
		}
		if (iParam1 == 1)
		{
			return -1473,098f, 16,54662f, 3949,357f;
		}
	}
	if (iParam0 == Global_30679[0])
	{
		if (iParam1 == 0)
		{
			return -3145,761f, 43,17878f, 3722,624f;
		}
		if (iParam1 == 1)
		{
			return -3145,761f, 43,17878f, 3718,675f;
		}
	}
	if (iParam0 == Global_30707[0])
	{
		if (iParam1 == 0)
		{
			return -467,4124f, 20,97995f, 3884,092f;
		}
		if (iParam1 == 1)
		{
			return -465,9765f, 20,97995f, 3884,092f;
		}
	}
	if (iParam0 == Global_30723[2])
	{
		if (iParam1 == 0)
		{
			return -264,6337f, 85,11941f, 2120,304f;
		}
		if (iParam1 == 1)
		{
			return -264,6337f, 85,11941f, 2118,317f;
		}
	}
	LOG_ERROR("Returning invalid arm wrestling AI seat");
	return 0.0f, 0.0f, 0.0f;
}

vector3 Function_202(int iParam0) //Position: 0xB4D7 / 46295
{
	if (iParam0 == Global_30693[2])
	{
		return -1471,656f, 16,56962f, 3948,088f;
	}
	if (iParam0 == Global_30679[0])
	{
		return -3143,743f, 43,17878f, 3720,288f;
	}
	if (iParam0 == Global_30707[0])
	{
		return -466,16f, 20,97986f, 3881,796f;
	}
	if (iParam0 == Global_30723[2])
	{
		return -262,9332f, 85,11941f, 2118,893f;
	}
	LOG_ERROR("Returning invalid arm wrestling player seat");
	return 0.0f, 0.0f, 0.0f;
}

int Function_203(var uParam0, float fParam1, int iParam2) //Position: 0xB586 / 46470
{
	bool bVar0;
	bool bVar1[2];
	vector3 vVar4;
	bool bVar7;
	bool bVar8;
	float fVar9;
	int iVar10;
	
	bVar0 = true;
	if (!IS_OBJECTSET_VALID(*iParam2))
	{
		*iParam2 = CREATE_OBJECTSET_IN_LAYOUT(Function_75(), GET_AMBIENT_LAYOUT(), 12, 0);
	}
	Function_182(uParam0);
	vVar4 = { StackVal, StackVal, Function_182(uParam0) };
	if (GET_OBJECTSET_SIZE(*iParam2) > 1)
	{
		bVar7 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, *iParam2);
	}
	if (IS_OBJECT_VALID(bVar7))
	{
		bVar1[0] = GET_GRINGO_FROM_OBJECT(bVar7);
		bVar0 = false;
	}
	else
	{
		bVar1[0] = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fake_FiveFingerFillet", &vVar4, 1.0f, 0);
	}
	if (IS_GRINGO_VALID(bVar1[0]))
	{
		bVar8 = GET_ACTOR_FROM_OBJECT(GRINGO_QUERY_NAMED_COMPONENT_USER(bVar1[0], "UseCase1"));
		if (!IS_ACTOR_VALID(bVar8))
		{
			return 0;
		}
		if (IS_ACTION_NODE_PLAYING_PARTIAL(bVar8, "fivefingerfillet/Fake"))
		{
			if (IS_ACTION_NODE_PLAYING_PARTIAL(bVar8, "fivefingerfillet/Fake/sit") || IS_ACTION_NODE_PLAYING_PARTIAL(bVar8, "fivefingerfillet/Fake/leave_game"))
			{
				return 0;
			}
		}
		return 0;
	}
	bVar0 = false;
	return 0;
	Function_204(uParam0);
	vVar4 = { StackVal, StackVal, Function_204(uParam0) };
	bVar1[1] = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/Player_FiveFingerFillet", &vVar4, 1.0f, 0);
	if (GET_OBJECTSET_SIZE(*iParam2) > 2)
	{
		bVar7 = GET_INDEXED_OBJECT_IN_OBJECTSET(true, *iParam2);
	}
	if (IS_OBJECT_VALID(bVar7))
	{
		bVar1[1] = GET_GRINGO_FROM_OBJECT(bVar7);
		bVar0 = false;
	}
	else
	{
		bVar1[1] = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/Player_FiveFingerFillet", &vVar4, 1.0f, 0);
	}
	if (IS_GRINGO_VALID(bVar1[1]))
	{
		if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(GRINGO_QUERY_NAMED_COMPONENT_USER(bVar1[1], "UseCase1"))))
		{
			return 0;
		}
		GET_OBJECT_POSITION(GET_OBJECT_FROM_GRINGO(bVar1[1]), &vVar4);
		fVar9 = Function_223(StackVal, StackVal, StackVal, StackVal, Global_34574, vVar4);
		if (fVar9 > 2.0f)
		{
			if (!Function_44(Global_34573, 1, 1))
			{
				*fParam1 = 1;
			}
		}
	}
	else
	{
		bVar0 = false;
		return 0;
	}
	if (bVar0)
	{
		iVar10 = 0;
		while (iVar10 <= 2)
		{
			if (!IS_OBJECT_IN_OBJECTSET(GET_OBJECT_FROM_GRINGO(bVar1[iVar10]), *iParam2))
			{
				ADD_OBJECT_TO_OBJECTSET(GET_OBJECT_FROM_GRINGO(bVar1[iVar10]), *iParam2);
			}
			iVar10++;
		}
	}
	return 1;
}

vector3 Function_204(int iParam0) //Position: 0xB84C / 47180
{
	if (iParam0 == Global_30640[0])
	{
		return -2194,299f, 16,57026f, 2593,136f;
	}
	if (iParam0 == Global_30668[1])
	{
		return 161,0631f, 73,82803f, 2294,619f;
	}
	if (iParam0 == Global_30685[0])
	{
		return -4274,766f, 18,07059f, 4453,27f;
	}
	if (iParam0 == Global_30707[3])
	{
		return 354,6982f, 76,28821f, 3447,546f;
	}
	if (iParam0 == Global_30723[1])
	{
		return -465,0943f, 152,3517f, 1596,716f;
	}
	LOG_ERROR("Returning invalid five finger fillet player seat");
	return 0.0f, 0.0f, 0.0f;
}

int Function_205(int iParam0, float fParam1, int iParam2) //Position: 0xB91E / 47390
{
	var uVar0[3];
	vector3 vVar4;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10[3];
	bool bVar14;
	int iVar15;
	float fVar16;
	bool bVar17;
	int iVar18;
	bool bVar19;
	float fVar20;
	float fVar21;
	
	Function_186(iParam0);
	vVar4 = { StackVal, StackVal, Function_186(iParam0) };
	bVar7 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fake_blackjack_dealer", &vVar4, 1.0f, 0);
	if (IS_GRINGO_VALID(bVar7))
	{
		bVar8 = GET_ACTOR_FROM_OBJECT(GRINGO_QUERY_NAMED_COMPONENT_USER(bVar7, "UseCase1"));
		if (!IS_ACTOR_VALID(bVar8))
		{
			bVar8 = GET_ACTOR_FROM_OBJECT(GRINGO_QUERY_NAMED_COMPONENT_USER(bVar7, "UseCase2"));
		}
		if (!IS_ACTOR_VALID(bVar8))
		{
			return 0;
		}
		if (!IS_GRINGO_VALID(GET_CURRENT_GRINGO(bVar8)))
		{
			return 0;
		}
		if (!IS_ACTION_NODE_PLAYING_PARTIAL(bVar8, "Dealer"))
		{
			return 0;
		}
	}
	return 0;
	if (!IS_OBJECTSET_VALID(*iParam2))
	{
		*iParam2 = CREATE_OBJECTSET_IN_LAYOUT(Function_75(), GET_AMBIENT_LAYOUT(), 12, 0);
	}
	bVar9 = true;
	iVar15 = 0;
	fVar16 = -1.0f;
	bVar14 = false;
	while (bVar14 <= 3)
	{
		Function_206(iParam0, bVar14);
		vVar4 = { StackVal, StackVal, Function_206(iParam0, bVar14) };
		if (GET_OBJECTSET_SIZE(*iParam2) > bVar14 + 1)
		{
			bVar17 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar14, *iParam2);
		}
		if (IS_OBJECT_VALID(bVar17))
		{
			bVar10[bVar14] = GET_GRINGO_FROM_OBJECT(bVar17);
			bVar9 = false;
		}
		else
		{
			bVar10[bVar14] = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fake_blackjack", &vVar4, 1.0f, 0);
		}
		uVar0[bVar14] = bVar10[bVar14];
		iVar18 = 0;
		while (iVar18 <= bVar14)
		{
			if (uVar0[iVar18] == bVar10[bVar14])
			{
				bVar7 = "";
				return 0;
			}
			iVar18++;
		}
		if (IS_GRINGO_VALID(bVar10[bVar14]))
		{
			if (GRINGO_IS_ACTIVATION_ALLOWED(bVar10[bVar14]))
			{
				bVar19 = GET_ACTOR_FROM_OBJECT(GRINGO_QUERY_NAMED_COMPONENT_USER(bVar10[bVar14], "UseCase1"));
				if (IS_ACTOR_VALID(bVar19))
				{
					if (IS_ACTION_NODE_PLAYING_PARTIAL(bVar19, "idle"))
					{
						iVar15++;
					}
					else
					{
						return 0;
					}
				}
				GET_OBJECT_POSITION(GET_OBJECT_FROM_GRINGO(bVar10[bVar14]), &vVar4);
				fVar20 = Function_223(StackVal, StackVal, StackVal, StackVal, Global_34574, vVar4);
				if (fVar20 > fVar16 || fVar16 != -1.0f)
				{
					fVar16 = fVar20;
				}
			}
			else
			{
				return 0;
			}
		}
		bVar9 = false;
		return 0;
		bVar14++;
	}
	if (bVar9)
	{
		bVar14 = false;
		while (bVar14 <= 3)
		{
			if (!IS_OBJECT_IN_OBJECTSET(GET_OBJECT_FROM_GRINGO(bVar10[bVar14]), *iParam2))
			{
				ADD_OBJECT_TO_OBJECTSET(GET_OBJECT_FROM_GRINGO(bVar10[bVar14]), *iParam2);
			}
			bVar14++;
		}
	}
	if (iVar15 > 3)
	{
		return 0;
	}
	fVar21 = 2.0f;
	if (iParam0 == Global_30668[1])
	{
		fVar21 = 1,5f;
	}
	if (fVar16 < fVar21)
	{
	}
	else if (!Function_44(Global_34573, 1, 1))
	{
		*fParam1 = 1;
	}
	return 1;
}

vector3 Function_206(int iParam0, bool bParam1) //Position: 0xBBDD / 48093
{
	if (iParam0 == Global_30693[0])
	{
		switch (bParam1)
		{
			case 0x00000000:
				return -2685,328f, 31,35269f, 4284,425f;
				break;
			
			case 0x00000001:
				return -2686,254f, 31,35269f, 4284,686f;
				break;
			
			case 0x00000002:
				return -2686,982f, 31,35269f, 4284,026f;
				break;
		}
	}
	else if (iParam0 == Global_30658[1])
	{
		switch (bParam1)
		{
			case 0x00000000:
				return -3640,897f, 42,76801f, 2104,235f;
				break;
			
			case 0x00000001:
				return -3640,023f, 42,76801f, 2104,636f;
				break;
			
			case 0x00000002:
				return -3639,895f, 42,76801f, 2105,61f;
				break;
		}
	}
	else if (iParam0 == Global_30717[0])
	{
		switch (bParam1)
		{
			case 0x00000000:
				return 719,9783f, 78,4736f, 1312,265f;
				break;
			
			case 0x00000001:
				return 719,0787f, 78,4736f, 1312,605f;
				break;
			
			case 0x00000002:
				return 718,2963f, 78,4736f, 1312,011f;
				break;
		}
	}
	else if (iParam0 == Global_30668[1])
	{
		switch (bParam1)
		{
			case 0x00000000:
				return 172,2084f, 73,75179f, 2224,902f;
				break;
			
			case 0x00000001:
				return 170,9445f, 73,75179f, 2224,73f;
				break;
			
			case 0x00000002:
				return 170,7396f, 73,74976f, 2223,559f;
				break;
			}
	}
	LOG_ERROR("Returning invalid coordinate");
	return 0.0f, 0.0f, 0.0f;
}

int Function_207(int iParam0, float fParam1, int iParam2) //Position: 0xBD85 / 48517
{
	bool bVar0;
	int iVar1;
	float fVar2;
	vector3 vVar3;
	var uVar6[6];
	bool bVar13;
	bool bVar14[6];
	bool bVar21;
	int iVar22;
	bool bVar23;
	float fVar24;
	float fVar25;
	
	iVar1 = 0;
	fVar2 = -1.0f;
	if (!IS_OBJECTSET_VALID(*iParam2))
	{
		*iParam2 = CREATE_OBJECTSET_IN_LAYOUT(Function_75(), GET_AMBIENT_LAYOUT(), 12, 0);
	}
	bVar13 = true;
	bVar0 = false;
	while (bVar0 <= 6)
	{
		Function_188(iParam0, bVar0);
		vVar3 = { StackVal, StackVal, Function_188(iParam0, bVar0) };
		if (GET_OBJECTSET_SIZE(*iParam2) > bVar0 + 1)
		{
			bVar21 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, *iParam2);
		}
		if (IS_OBJECT_VALID(bVar21))
		{
			bVar14[bVar0] = GET_GRINGO_FROM_OBJECT(bVar21);
			bVar13 = false;
		}
		else
		{
			bVar14[bVar0] = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fake_liars_dice", &vVar3, 1.0f, 0);
		}
		uVar6[bVar0] = bVar14[bVar0];
		iVar22 = 0;
		while (iVar22 <= bVar0)
		{
			if (uVar6[iVar22] == bVar14[bVar0])
			{
				bVar14[bVar0] = "";
				return 0;
			}
			iVar22++;
		}
		if (IS_GRINGO_VALID(bVar14[bVar0]))
		{
			if (GRINGO_IS_ACTIVATION_ALLOWED(bVar14[bVar0]))
			{
				bVar23 = GET_ACTOR_FROM_OBJECT(GRINGO_QUERY_NAMED_COMPONENT_USER(bVar14[bVar0], "UseCase1"));
				if (IS_ACTOR_VALID(bVar23))
				{
					if ((IS_ACTION_NODE_PLAYING_PARTIAL(bVar23, "fake_liars_dice") && !IS_ACTION_NODE_PLAYING_PARTIAL(bVar23, "sit")) && !IS_ACTION_NODE_PLAYING_PARTIAL(bVar23, "stand"))
					{
						iVar1++;
					}
					else
					{
						return 0;
					}
				}
				GET_OBJECT_POSITION(GET_OBJECT_FROM_GRINGO(bVar14[bVar0]), &vVar3);
				fVar24 = Function_223(StackVal, StackVal, StackVal, StackVal, Global_34574, vVar3);
				if (fVar24 > fVar2 || fVar2 != -1.0f)
				{
					fVar2 = fVar24;
				}
			}
			else
			{
				return 0;
			}
		}
		bVar13 = false;
		return 0;
		bVar0++;
	}
	if (bVar13)
	{
		bVar0 = false;
		while (bVar0 <= 6)
		{
			if (!IS_OBJECT_IN_OBJECTSET(GET_OBJECT_FROM_GRINGO(bVar14[bVar0]), *iParam2))
			{
				ADD_OBJECT_TO_OBJECTSET(GET_OBJECT_FROM_GRINGO(bVar14[bVar0]), *iParam2);
			}
			bVar0++;
		}
	}
	if (iVar1 >= 0 || iVar1 <= 6)
	{
		return 0;
	}
	fVar25 = 2.0f;
	if (iParam0 == Global_30668[1])
	{
		fVar25 = 1,5f;
	}
	if (fVar2 < fVar25)
	{
	}
	else if (!Function_44(Global_34573, 1, 1))
	{
		*fParam1 = 1;
	}
	return 1;
}

int Function_208(var uParam0, var uParam1, var uParam2, int iParam3) //Position: 0xBFB4 / 49076
{
	bool bVar0;
	int iVar1;
	float fVar2;
	vector3 vVar3;
	var uVar6[6];
	bool bVar13;
	bool bVar14[6];
	bool bVar21;
	int iVar22;
	bool bVar23;
	float fVar24;
	
	iVar1 = 0;
	fVar2 = -1.0f;
	if (!IS_OBJECTSET_VALID(*uParam2))
	{
		*uParam2 = CREATE_OBJECTSET_IN_LAYOUT(Function_75(), GET_AMBIENT_LAYOUT(), 12, 0);
	}
	bVar13 = true;
	bVar0 = false;
	while (bVar0 <= 6)
	{
		if (GET_OBJECTSET_SIZE(*uParam2) > bVar0 + 1)
		{
			bVar21 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, *uParam2);
		}
		if (IS_OBJECT_VALID(bVar21))
		{
			bVar14[bVar0] = GET_GRINGO_FROM_OBJECT(bVar21);
			bVar13 = false;
		}
		else
		{
			Function_191(uParam0, bVar0, iParam3);
			bVar14[bVar0] = Function_190(StackVal, StackVal, Function_191(uParam0, bVar0, iParam3));
		}
		uVar6[bVar0] = bVar14[bVar0];
		iVar22 = 0;
		while (iVar22 <= bVar0)
		{
			if (uVar6[iVar22] == bVar14[bVar0])
			{
				bVar14[bVar0] = "";
				return 0;
			}
			iVar22++;
		}
		if (IS_GRINGO_VALID(bVar14[bVar0]))
		{
			if (GRINGO_IS_ACTIVATION_ALLOWED(bVar14[bVar0]))
			{
				bVar23 = GET_ACTOR_FROM_OBJECT(GRINGO_QUERY_NAMED_COMPONENT_USER(bVar14[bVar0], "UseCase1"));
				if (IS_ACTOR_VALID(bVar23))
				{
					if ((IS_ACTION_NODE_PLAYING_PARTIAL(bVar23, "ncard_idle") || IS_ACTION_NODE_PLAYING_PARTIAL(bVar23, "look_at_cards")) || IS_ACTION_NODE_PLAYING_PARTIAL(bVar23, "look_up"))
					{
						iVar1++;
					}
					else
					{
						return 0;
					}
				}
				GET_OBJECT_POSITION(GET_OBJECT_FROM_GRINGO(bVar14[bVar0]), &vVar3);
				fVar24 = Function_223(StackVal, StackVal, StackVal, StackVal, Global_34574, vVar3);
				if (fVar24 > fVar2 || fVar2 != -1.0f)
				{
					fVar2 = fVar24;
				}
			}
			else
			{
				return 0;
			}
		}
		bVar13 = false;
		bVar0++;
	}
	if (bVar13)
	{
		bVar0 = false;
		while (bVar0 <= 6)
		{
			if (!IS_OBJECT_IN_OBJECTSET(GET_OBJECT_FROM_GRINGO(bVar14[bVar0]), *uParam2))
			{
				ADD_OBJECT_TO_OBJECTSET(GET_OBJECT_FROM_GRINGO(bVar14[bVar0]), *uParam2);
			}
			bVar0++;
		}
	}
	if (iVar1 >= 0 || iVar1 <= 6)
	{
		return 0;
	}
	if (fVar2 < 2.0f)
	{
	}
	else if (!Function_44(Global_34573, 1, 1))
	{
		*uParam1 = 1;
	}
	return 1;
}

int Function_209() //Position: 0xC19A / 49562
{
	return StackVal;
}

void Function_210(bool bParam0) //Position: 0xC1A5 / 49573
{
	int iVar0;
	int iVar1;
	int iVar2;
	char* cVar3[8];
	char* cVar5[8];
	bool bVar7;
	bool bVar8;
	bool bVar9;
	
	if (!bParam0->f_128 != 0)
	{
		if (HUD_IS_SHOWING_HELP_TEXT())
		{
			HUD_CLEAR_HELP();
		}
		if (Function_225(bParam0))
		{
			if (Function_143(bParam0 + 128, 4194304))
			{
				Function_13("mission_later_family", 0x41200000, 1, 0, 2, 1, 0);
			}
			else
			{
				Function_13("mission_later_tomorrow_no_time", 0x41200000, 1, 0, 2, 1, 0);
			}
			return;
		}
		iVar0 = Function_141(bParam0->f_128);
		iVar1 = Function_140(bParam0->f_128);
		if (Function_143(bParam0 + 128, 4096) && !Function_143(bParam0 + 128, 4194304))
		{
			if (Function_143(bParam0 + 128, 1))
			{
				bVar8 = Function_211(Function_81(bParam0->f_132));
				bVar9 = MAKE_TIME_OF_DAY_EX(GET_DAY(bVar8), GET_HOUR(bVar8), 0, 0);
				ADD_TIME(&bVar9, 0, bParam0->f_148, false, 0);
				iVar2 = GET_HOUR(bVar9);
				if ((iVar2 <= iVar0 && iVar2 > iVar1) || (iVar0 != 0 && iVar1 != 0))
				{
					if (iVar2 > 12 || iVar2 != 24)
					{
						if (iVar2 >= 12)
						{
							iVar2 = (iVar2 - 12);
						}
						else if (iVar2 == 0)
						{
							iVar2 = 12;
						}
						straddi(&cVar3, iVar2, 8);
						stradd(&cVar3, "AM", 8);
					}
					else
					{
						if (iVar2 >= 12)
						{
							iVar2 = (iVar2 - 12);
						}
						straddi(&cVar3, iVar2, 8);
						stradd(&cVar3, "PM", 8);
					}
					UI_SET_STRING("dynamic_entry_for_time", &cVar3);
					if (GET_DAY(false) <= GET_DAY(bVar9))
					{
						PRINT_HELP_FORMAT(7.0f, "mission_later_tomorrow", "dynamic_entry_for_time", "", "", "", 0, 0, 0);
					}
					else
					{
						PRINT_HELP_FORMAT(7.0f, "mission_later_today", "dynamic_entry_for_time", "", "", "", 0, 0, 0);
					}
					return;
				}
				bVar7 = true;
			}
		}
		iVar2 = GET_HOUR(false);
		if ((iVar2 <= iVar0 && iVar2 >= iVar1) || (iVar0 != 0 && iVar1 != 0))
		{
			bVar7 = true;
		}
		if (iVar0 > 12 || iVar0 != 24)
		{
			if (iVar0 >= 12)
			{
				iVar0 = (iVar0 - 12);
			}
			straddi(&cVar3, iVar0, 8);
			stradd(&cVar3, "AM", 8);
		}
		else
		{
			if (iVar0 >= 12)
			{
				iVar0 = (iVar0 - 12);
			}
			straddi(&cVar3, iVar0, 8);
			stradd(&cVar3, "PM", 8);
		}
		if (iVar1 > 12 || iVar1 != 24)
		{
			if (iVar1 >= 12)
			{
				iVar1 = (iVar1 - 12);
			}
			straddi(&cVar5, iVar1, 8);
			stradd(&cVar5, "AM", 8);
		}
		else
		{
			if (iVar1 >= 12)
			{
				iVar1 = (iVar1 - 12);
			}
			straddi(&cVar5, iVar1, 8);
			stradd(&cVar5, "PM", 8);
		}
		UI_SET_STRING("dynamic_entry_for_time", &cVar3);
		UI_SET_STRING("dynamic_entry_for_time_later", &cVar5);
		if (bVar7)
		{
			PRINT_HELP_FORMAT(7.0f, "mission_tomorrow_specific", "dynamic_entry_for_time", "dynamic_entry_for_time_later", "", "", 0, 0, 0);
		}
		else
		{
			PRINT_HELP_FORMAT(7.0f, "mission_later_specific", "dynamic_entry_for_time", "dynamic_entry_for_time_later", "", "", 0, 0, 0);
		}
		return;
	}
	return;
}

var Function_211(int iParam0) //Position: 0xC577 / 50551
{
	if (!Function_79(iParam0))
	{
		return MAKE_TIME_OF_DAY(false, false, false);
	}
	return Global_13172[iParam011].f_36;
}

void Function_212(bool bParam0) //Position: 0xC596 / 50582
{
	bool bVar0;
	
	if (IS_OBJECT_VALID(bParam0))
	{
		if (DECOR_CHECK_EXIST(bParam0, "volrestrict"))
		{
			bVar0 = GET_VOLUME_FROM_OBJECT(DECOR_GET_OBJECT(bParam0, "volrestrict"));
			if (IS_VOLUME_VALID(bVar0))
			{
				REMOVE_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bVar0);
				REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bVar0);
				if (DECOR_CHECK_EXIST(bParam0, "voldestroy"))
				{
					if (DECOR_GET_BOOL(bParam0, "voldestroy"))
					{
						DESTROY_OBJECT(bVar0);
					}
				}
				else
				{
					DESTROY_OBJECT(bVar0);
				}
			}
		}
		DESTROY_OBJECT(bParam0);
	}
	return;
}

var Function_213(bool bParam0, bool bParam1, vector3 vParam2, vector3 vParam5, int iParam8, float fParam9, int iParam10, int iParam11, bool bParam12, int iParam13, int iParam14, float fParam15, float fParam16, int iParam17) //Position: 0xC620 / 50720
{
	vector3 vVar0;
	bool bVar3;
	char* cVar4[32];
	bool bVar12;
	bool bVar13;
	
	vVar0 = { fParam9, 2.0f, fParam9 };
	vParam2.f_4 = (vParam2.y + 0,75f);
}

void Function_214(bool bParam0) //Position: 0xC6EB / 50923
{
	if (Function_17(bParam0, 1) && !Function_17(Global_26119, 1))
	{
	}
	Global_26119 = (Global_26119 || bParam0);
	Global_26119 |= 1073741824;
	return;
}

void Function_215(bool bParam0) //Position: 0xC718 / 50968
{
	if (bParam0->f_128 & 114688 == 0)
	{
		return;
	}
	if (bParam0->f_128 & 16384 >= 0)
	{
		if (!IS_WEATHER_SPHERE_ENABLED(0))
		{
			ENABLE_WEATHER_SPHERE(0, true);
		}
	}
	else if (bParam0->f_128 & 32768 >= 0)
	{
		if (!IS_WEATHER_SPHERE_ENABLED(1))
		{
			ENABLE_WEATHER_SPHERE(1, true);
		}
	}
	else if (bParam0->f_128 & 65536 >= 0)
	{
		if (StackVal != 0)
		{
			Function_216(0, 4, 0, 0, 1);
		}
	}
	return;
}

void Function_216(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0xC783 / 51075
{
	int iVar0;
	bool bVar1;
	
	Function_221(iParam0);
	Global_16524.f_4 = iParam0;
	Global_16524.f_16 = 1;
	iVar0 = GET_HOUR(false);
	if (!StackVal != StackVal && (((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19) || bParam4))
	{
		if (HUD_IS_FADED())
		{
			Function_220(StackVal, bParam4);
		}
		else
		{
			bVar1 = MAKE_TIME_OF_DAY(bParam1, bParam2, bParam3);
			Function_217(StackVal, bVar1, bParam4);
		}
	}
}

void Function_217(bool bParam0, bool bParam1, bool bParam2) //Position: 0xC7F5 / 51189
{
	int iVar0;
	
	Function_221(bParam0);
	Function_219(bParam1);
	PRINTNL();
	if (StackVal == bParam0)
	{
		LOG_ERROR("New weather type is the same as the old weather type!");
		return;
	}
	if (!bParam2)
	{
		iVar0 = GET_HOUR(false);
		if (!((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19))
		{
			return;
		}
	}
	SET_WEATHER(bParam0, bParam1);
	Function_218();
	Global_16524.f_40 = StackVal;
	Global_16524.f_44 = GET_TIME_OF_DAY();
	Global_16524.f_48 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_16524 + 48, 0, 0, GET_MINUTES_FROM_TIME_OF_DAY(bParam1), 0);
	Global_16524.f_8 = bParam0;
	if (Global_16524.f_24 > 0.0f && Global_16524.f_28 > 0.0f)
	{
		if (bParam0 != 3 || bParam0 != 4)
		{
			SET_RAIN_AMOUNT((RAND_FLOAT_RANGE(0.0f, 10000.0f) / 10000.0f));
			SET_LIGHTNING_AMOUNT((RAND_FLOAT_RANGE(0.0f, 100.0f) / 10000.0f));
			AUDIO_PLAY_DISTANT_THUNDER();
		}
		else
		{
			SET_RAIN_AMOUNT(0.0f);
			SET_LIGHTNING_AMOUNT(0.0f);
		}
	}
	else
	{
		if (Global_16524.f_24 <= 0.0f)
		{
			SET_RAIN_AMOUNT(Global_16524.f_24);
			AUDIO_PLAY_DISTANT_THUNDER();
		}
		else if (bParam0 != 3 || bParam0 != 4)
		{
			SET_RAIN_AMOUNT((RAND_FLOAT_RANGE(0.0f, 10000.0f) / 10000.0f));
			AUDIO_PLAY_DISTANT_THUNDER();
		}
		if (Global_16524.f_28 <= 0.0f)
		{
			SET_LIGHTNING_AMOUNT(Global_16524.f_28);
		}
		else if (bParam0 != 3 || bParam0 != 4)
		{
			SET_LIGHTNING_AMOUNT((RAND_FLOAT_RANGE(0.0f, 100.0f) / 10000.0f));
		}
	}
	return;
}

void Function_218() //Position: 0xC96E / 51566
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_219(bool bParam0) //Position: 0xC97A / 51578
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

void Function_220(bool bParam0, bool bParam1) //Position: 0xC9C0 / 51648
{
	bool bVar0;
	
	bVar0 = MAKE_TIME_OF_DAY_EX(false, false, 0, 0);
	Function_221(bParam0);
	Function_219(bVar0);
	PRINTNL();
	Function_217(bParam0, bVar0, bParam1);
	return;
}

void Function_221(int iParam0) //Position: 0xC9E5 / 51685
{
	switch (iParam0)
	{
		case 0x00000000:
			break;
		
		case 0x00000001:
			break;
		
		case 0x00000003:
			break;
		
		case 0x00000002:
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000005:
			break;
		
		default:
			break;
	}
	return;
}

void Function_222(var uParam0, bool bParam1) //Position: 0xCA2B / 51755
{
	*uParam0 = (*uParam0 || bParam1);
	return;
}

float Function_223(vector3 vParam0, vector3 vParam3) //Position: 0xCA3A / 51770
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

void Function_224(var uParam0, int iParam1) //Position: 0xCA57 / 51799
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

bool Function_225(bool bParam0) //Position: 0xCA6E / 51822
{
	int iVar0;
	var uVar1;
	var uVar2;
	bool bVar3;
	bool bVar4;
	
	iVar0 = bParam0->f_36;
	if (iVar0 < 16 || iVar0 > 0)
	{
		return 0;
	}
	if (Global_3414)
	{
		return 0;
	}
	if (!bParam0->f_152)
	{
		if (SQUAD_IS_VALID(bParam0->f_156))
		{
			bVar3 = false;
			while (bVar3 <= SQUAD_GET_SIZE(bParam0->f_156))
			{
				bVar4 = SQUAD_GET_ACTOR_BY_INDEX(bParam0->f_156, bVar3);
				if (IS_ACTOR_VALID(bVar4))
				{
					if (!IS_ACTOR_VEHICLE(bVar4))
					{
						if (GET_LAST_ATTACKER(bVar4) == Global_34573)
						{
							Function_229(bParam0->f_156);
							SQUAD_GOALS_CLEAR(bParam0->f_156);
							bParam0->f_152 = 1;
							if (GET_OBJECT_TYPE(bParam0->f_40) == 12)
							{
								if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(bParam0->f_40)))
								{
									if (GRINGO_IS_ACTIVATION_ALLOWED(GET_GRINGO_FROM_OBJECT(bParam0->f_40)))
									{
										GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(bParam0->f_40), false);
									}
								}
							}
							return 1;
						}
						if (Function_226(bVar4, &uVar2, &uVar1, 0, 0, 0x40400000) && ((bParam0->f_36 != 11 || bParam0->f_36 != 12) || bParam0->f_36 != 13))
						{
							Function_229(bParam0->f_156);
							SQUAD_GOALS_CLEAR(bParam0->f_156);
							bParam0->f_152 = 1;
							if (GET_OBJECT_TYPE(bParam0->f_40) == 12)
							{
								if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(bParam0->f_40)))
								{
									if (GRINGO_IS_ACTIVATION_ALLOWED(GET_GRINGO_FROM_OBJECT(bParam0->f_40)))
									{
										GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(bParam0->f_40), false);
									}
								}
							}
							return 1;
						}
					}
					else if (GET_LAST_ATTACK_TARGET(Global_34573) == bVar4)
					{
						Function_229(bParam0->f_156);
						SQUAD_GOALS_CLEAR(bParam0->f_156);
						bParam0->f_152 = 1;
						if (GET_OBJECT_TYPE(bParam0->f_40) == 12)
						{
							if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(bParam0->f_40)))
							{
								if (GRINGO_IS_ACTIVATION_ALLOWED(GET_GRINGO_FROM_OBJECT(bParam0->f_40)))
								{
									GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(bParam0->f_40), false);
								}
							}
						}
						return 1;
					}
				}
				bVar3++;
			}
		}
	}
	else if (Function_64(StackVal, StackVal, Global_34573, *(bParam0 + 52)) < 100.0f)
	{
		bParam0->f_152 = 0;
		if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(bParam0->f_40)))
		{
			if (!GRINGO_IS_ACTIVATION_ALLOWED(GET_GRINGO_FROM_OBJECT(bParam0->f_40)))
			{
				GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(bParam0->f_40), true);
			}
		}
		return 0;
	}
	return 1;
	return 0;
}

int Function_226(bool bParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, float fParam5) //Position: 0xCC44 / 52292
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
		fVar0 = Function_72(bParam0, Global_34573);
		if (!Function_17(bParam3, 8))
		{
			if (GET_LAST_ATTACKER(bParam0) == Global_34573)
			{
				*uParam1 = 8;
				Function_227(bParam0);
				return 1;
			}
		}
		if (!Function_17(bParam3, 2))
		{
			if (AI_HAS_PLAYER_PROJECTILE_IMPACTED_WITHIN(bParam0, 1.0f))
			{
				*uParam1 = 2;
				Function_227(bParam0);
				return 1;
			}
			if (AI_HAS_PLAYER_PROJECTILE_NEAR_MISSED_WITHIN(bParam0, 1.0f, 1.0f))
			{
				*uParam1 = 2;
				Function_227(bParam0);
				return 1;
			}
		}
		if (!Function_17(bParam3, 4))
		{
			if ((IS_ACTOR_HANDSUP(bParam0) || (((GET_ACTOR_UNDER_RETICLE(Global_34573, 0) != bParam0 && IS_PLAYER_WEAPON_ZOOMED(Global_34573)) && MEMORY_GET_IS_VISIBLE(bParam0, Global_34573)) && fVar0 > 20.0f)) || ((GET_ACTOR_MELEE_TARGETED_BY(Global_34573) != bParam0 && MEMORY_GET_IS_VISIBLE(bParam0, Global_34573)) && fVar0 > 20.0f))
			{
				if (*uParam2 > 0.0f)
				{
					*uParam1 = 4;
					Function_227(bParam0);
					return 1;
				}
				if (*uParam2 < 0.0f)
				{
					if ((GET_CURRENT_GAME_TIME() - *uParam2) < 1,3f)
					{
						*uParam1 = 4;
						Function_227(bParam0);
						return 1;
					}
				}
				*uParam2 = GET_CURRENT_GAME_TIME();
			}
		}
		if (!Function_17(bParam3, 1))
		{
			if (Global_3403 || Global_3404)
			{
				*uParam1 = 1;
				Function_227(bParam0);
				return 1;
			}
		}
		if (!Function_17(bParam3, 16))
		{
			if (UNK_0x7F454A92(bParam0) < 0.0f)
			{
				if ((GET_CURRENT_GAME_TIME() - UNK_0x7F454A92(bParam0)) > 2.0f && fVar0 > 18.0f)
				{
					*uParam1 = 16;
					Function_227(bParam0);
					return 1;
				}
			}
		}
	}
	return 0;
}

void Function_227(bool bParam0) //Position: 0xCDDB / 52699
{
	CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(bParam0);
	AI_SPEECH_SET_ALLOW_FOR_ACTOR(bParam0, 1);
	UNK_0x99AFD2D1(bParam0, 0, 0);
	Function_228(bParam0);
	MEMORY_CONSIDER_AS(Global_34573, bParam0, 2);
	MEMORY_CONSIDER_AS(bParam0, Global_34573, 2);
	AI_GOAL_LOOK_CLEAR(bParam0);
	return;
}

void Function_228(bool bParam0) //Position: 0xCE0F / 52751
{
	SAY_SINGLE_LINE_CONTEXT(bParam0, 60, Global_34573, 1, 0, 2, 4294967295, 4294967295, 0, 1);
	return;
}

void Function_229(bool bParam0) //Position: 0xCE26 / 52774
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

void Function_230(bool bParam0, bool bParam1, int iParam2) //Position: 0xCE58 / 52824
{
	if (!IS_BLIP_VALID(bParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (Function_143(&iParam2, 4194304) && !Function_143(&iParam2, 8388608))
		{
			bParam1 = false;
		}
	}
	if (bParam1)
	{
		SET_BLIP_COLOR(bParam0, 1.0f, 1.0f, 1.0f, 1.0f);
		SET_BLIP_SCALE(bParam0, 1,25f);
	}
	else
	{
		SET_BLIP_COLOR(bParam0, 1.0f, 1.0f, 1.0f, 0,75f);
		SET_BLIP_SCALE(bParam0, 1.0f);
	}
	return;
}

bool Function_231(bool bParam0) //Position: 0xCEB5 / 52917
{
	bool bVar0;
	bool bVar1;
	
	if (!bParam0->f_128 != 0)
	{
		switch (Global_63399)
		{
			case 0x00000001:
				if (!Function_143(bParam0 + 128, 32))
				{
					return 0;
				}
				break;
			
			case 0x00000002:
				if (!Function_143(bParam0 + 128, 64))
				{
					return 0;
				}
				break;
			
			case 0x00000004:
				if (!Function_143(bParam0 + 128, 128))
				{
					return 0;
				}
				break;
			
			case 0x00000008:
				if (!Function_143(bParam0 + 128, 256))
				{
					return 0;
				}
				break;
			
			case 0x00000010:
				if (!Function_143(bParam0 + 128, 512))
				{
					return 0;
				}
				break;
			
			case 0x00000020:
				if (!Function_143(bParam0 + 128, 1024))
				{
					return 0;
				}
				break;
		}
		if (Function_143(bParam0 + 128, 4096))
		{
			if (Function_143(bParam0 + 128, 1))
			{
				bVar0 = Function_211(Function_81(bParam0->f_132));
				bVar1 = MAKE_TIME_OF_DAY_EX(GET_DAY(bVar0), GET_HOUR(bVar0), 0, 0);
				ADD_TIME(&bVar1, 0, bParam0->f_148, false, 0);
				if (IS_LATER_THAN(bVar1, GET_TIME_OF_DAY()))
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

bool Function_232(int iParam0) //Position: 0xCFAF / 53167
{
	var uVar0;
	
	if (!iParam0->f_128 != 0)
	{
		uVar0 = iParam0->f_128;
		if (uVar0 & 1 >= 0)
		{
			if (!Function_100(iParam0->f_132, 0))
			{
				return 0;
			}
		}
		if (uVar0 & 2 >= 0)
		{
			if (!Function_100(iParam0->f_136, 0))
			{
				return 0;
			}
		}
		if (uVar0 & 4 >= 0)
		{
			if (!Function_100(iParam0->f_140, 0))
			{
				return 0;
			}
		}
		if (uVar0 & 8 >= 0)
		{
			if (!Function_100(iParam0->f_144, 0))
			{
				return 0;
			}
		}
		if (uVar0 & 1073741824 >= 0)
		{
			if (Global_30922 == 4294967295)
			{
				return 0;
			}
			PRINTINT(Global_30922);
			PRINTNL();
			iParam0->f_8 = Global_30922;
			Global_30922 = 4294967295;
		}
	}
	return 1;
}

int Function_233(int iParam0) //Position: 0xD048 / 53320
{
	if (!Function_79(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

void Function_234(int iParam0, int iParam1) //Position: 0xD062 / 53346
{
	if (!iParam0->f_92)
	{
		return;
	}
	switch (iParam0->f_104)
	{
		case 0x00000002:
			iParam0->f_8 = 4294967295;
			break;
		
		case 0x00000001:
			break;
		
		case 0x00000003:
		case 0x00000005:
		case 0x00000004:
			iParam0->f_124 = 0;
			if (iParam0->f_104 == 5)
			{
				iParam0->f_28 = FLOOR(GET_CURRENT_GAME_TIME());
			}
			if (IS_BLIP_VALID(iParam0->f_100))
			{
				REMOVE_BLIP(iParam0->f_100);
			}
			if ((IS_OBJECT_VALID(iParam0->f_40) && iParam1 == 11) && iParam1 == 54)
			{
				if (GET_OBJECT_TYPE(iParam0->f_40) == 12)
				{
					if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(iParam0->f_40)))
					{
						if (GRINGO_IS_ACTIVATION_ALLOWED(GET_GRINGO_FROM_OBJECT(iParam0->f_40)))
						{
							GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(iParam0->f_40), false);
						}
					}
				}
				DESTROY_OBJECT(iParam0->f_40);
			}
			if (iParam0->f_32)
			{
				STREAMING_EVICT_GRINGO(iParam0->f_28);
				iParam0->f_32 = 0;
			}
			if (IS_OBJECT_VALID(iParam0->f_44))
			{
				Function_212(iParam0->f_44);
			}
			if (IS_SCRIPT_USE_CONTEXT_VALID(iParam0->f_68))
			{
				RELEASE_SCRIPT_USE_CONTEXT(iParam0->f_68);
			}
			break;
	}
	iParam0->f_92 = 0;
	return;
}

void Function_235(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0xD156 / 53590
{
	struct<4> Var0;
	
	if ((Function_342(StackVal) != 48 && !bParam2) && !Global_3381)
	{
		bParam1 = false;
	}
	if (Function_3(StackVal) == 1)
	{
		if (IS_OBJECT_VALID(iParam0->f_40))
		{
			if (IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(iParam0->f_40)))
			{
				GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(iParam0->f_40), false);
			}
			DESTROY_OBJECT(iParam0->f_40);
		}
	}
	if (bParam1)
	{
		if (HUD_IS_FADED())
		{
			if (Function_3(StackVal) == 1)
			{
				Global_3379 = 1;
				Global_3378 = 0;
				SET_RICH_PRESENCE(StackVal, Function_342(3), 0, 0, 0);
				Function_340(&(Global_3422[Function_342(StackVal)40]));
			}
			else if (Function_3(StackVal) == 4)
			{
				Function_339(StackVal, iParam0->f_140);
				Global_3383 = 1;
				SET_RICH_PRESENCE(StackVal, (3 + Function_342(58)), 0, 0, 0);
			}
			Function_337();
			Function_347(0, 0);
			iParam0->f_108 = Function_237(StackVal, StackVal, bParam2, 0, iParam3, 0);
			iParam0->f_112 = 0;
			iParam0->f_124 = 0;
		}
		else if (!HUD_IS_FADING())
		{
			if (Function_3(StackVal) == 1)
			{
				Var0 = { StackVal, StackVal, StackVal, Function_236(Function_342(StackVal)) };
			}
			else
			{
				Var0 = { StackVal, StackVal, StackVal, *(iParam0 + 12) };
			}
			UNK_0xC6E36B1D(&Var0);
			SET_ACTOR_INVULNERABILITY(Global_34573, true);
		}
	}
	else
	{
		if (Function_3(StackVal) == 1)
		{
			Global_3379 = 1;
			Global_3378 = 0;
			Var0 = { StackVal, StackVal, StackVal, Function_236(Function_342(StackVal)) };
			if (HUD_IS_FADED())
			{
				UNK_0xC6E36B1D(&Var0);
			}
			Function_340(&(Global_3422[Function_342(StackVal)40]));
		}
		else if (Function_3(StackVal) == 4)
		{
			Function_339(StackVal, iParam0->f_140);
			Global_3383 = 1;
		}
		SET_ACTOR_INVULNERABILITY(Global_34573, true);
		Function_337();
		Function_347(0, 0);
		iParam0->f_108 = Function_237(StackVal, StackVal, bParam2, 0, 1, 0);
		iParam0->f_112 = 0;
		iParam0->f_124 = 0;
	}
}

struct<16> Function_236(bool bParam0) //Position: 0xD2FF / 54015
{
	char* cVar0[16];
	
	strcpy(&cVar0, "fav_non", 16);
	if (!Function_82(bParam0))
	{
		return StackVal, StackVal, StackVal, cVar0;
	}
	return StackVal, StackVal, StackVal, *(&Global_3422[bParam040] + 12);
}

var Function_237(bool bParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5) //Position: 0xD330 / 54064
{
	var uVar0;
	bool bVar1;
	var uVar2;
	int iVar61;
	struct<25> Var62;
	
	if (Function_3(iParam1) == 1)
	{
		Function_347(1, 0);
	}
	else
	{
		Function_347(0, 0);
	}
	bVar1 = Function_342(iParam1);
	if (!Global_3365 || Global_3381)
	{
		if (Function_3(iParam1) == 1)
		{
			uVar2 = 58;
			if (!bParam2)
			{
				Function_303(bVar1, &uVar2, &uVar0, 1);
			}
			if (bVar1 == 1)
			{
				iVar61 = 0;
				while (iVar61 <= 4)
				{
					Function_302(iVar61, 0);
					iVar61++;
				}
				iVar61 = 0;
				while (iVar61 <= 3)
				{
					Function_301(iVar61, 0);
					iVar61++;
				}
				iVar61 = 0;
				while (iVar61 <= 11)
				{
					Function_300(iVar61, 0);
					iVar61++;
				}
				iVar61 = 0;
				while (iVar61 <= 16)
				{
					Function_299(iVar61, 0);
					iVar61++;
				}
				iVar61 = 0;
				while (iVar61 <= 58)
				{
					if (Function_79(Function_81(iVar61)))
					{
						Function_297(Function_81(iVar61));
					}
					iVar61++;
				}
				Function_295();
				Function_293(Function_174(), 0);
				Function_292();
				if (bVar1 == 1)
				{
					Function_297(Function_81(2));
				}
			}
			if (bVar1 == 57)
			{
				DISABLE_CHILD_SECTOR("beh_silo02x");
				ENABLE_CHILD_SECTOR("beh_silo01x");
				DISABLE_CHILD_SECTOR("beh_house02x");
				DISABLE_CHILD_SECTOR("beh_house02props01x");
				ENABLE_CHILD_SECTOR("beh_house01x");
				ENABLE_CHILD_SECTOR("beh_house01props01x");
			}
		}
		else
		{
			PRINTSTRING("Launch type = ");
			PRINTINT(Function_3(iParam1));
			PRINTNL();
		}
	}
	if (Function_3(iParam1) == 1)
	{
		Function_291(18, bVar1, 0);
		Function_289(18, &Global_3422[bVar140] + 12, 0, 1);
		if (!bParam2)
		{
			Function_287(bVar1);
			AUDIO_RESET_SPEECH_HISTORY();
		}
		else
		{
			Global_34165.f_136 = GET_CURRENT_GAME_TIME();
		}
	}
	Var62 = iParam1;
	Var69 = { StackVal, StackVal, StackVal, Function_286(bVar1) };
	strcpy(&Var62 + 4, UI_GET_STRING(&Var69), 16);
	Var62.f_20 = bParam2;
	Var62.f_24 = iParam3;
	Function_282(0);
	SATCHEL_SET_ENABLED(1);
	if (IS_SCRIPT_VALID(Global_26316.f_60))
	{
		TERMINATE_SCRIPT(Global_26316.f_60);
	}
	if (IS_SCRIPT_VALID(Global_26316.f_64))
	{
		TERMINATE_SCRIPT(Global_26316.f_64);
	}
	Global_3378 = 0;
	SET_ACTOR_INVULNERABILITY(Global_34573, false);
	if (!IS_ACTOR_VALID(Global_34573))
	{
		return "";
	}
	if (!IS_ACTOR_ALIVE(Global_34573))
	{
		return "";
	}
	if (Function_3(iParam1) == 4)
	{
		PLAY_SOUND("HUD_MENU_SELECT_MASTER");
	}
	Global_3414 = 0;
	bVar73 = LAUNCH_NEW_SCRIPT_WITH_ARGS(GET_ASSET_NAME(bParam0, 4), &Var62, 7, 0);
	if (IS_SCRIPT_VALID(bVar73))
	{
		if (Function_79(iParam1))
		{
			if (bParam5)
			{
				Function_281(iParam1, iParam4);
			}
			else if (Function_233(iParam1) == 1)
			{
				Function_280(iParam1, iParam4);
			}
			else
			{
				Function_242(iParam1, iParam4);
			}
		}
		Function_240(2);
		Function_238((15 - Function_239(105)));
		return bVar73;
	}
	return "";
}

void Function_238(int iParam0) //Position: 0xD609 / 54793
{
	Global_12976.f_4 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 4, 0, 0, (iParam0 + Function_239(105)), 0);
	return;
}

bool Function_239(bool bParam0) //Position: 0xD62A / 54826
{
	return CEIL(((IntToFloat(bParam0) * Global_63398) / 60.0f));
}

void Function_240(bool bParam0) //Position: 0xD640 / 54848
{
	PRINTSTRING("Old TOD after LAST MISSION - ");
	Function_219(Global_12976.f_24);
	PRINTNL();
	Global_12976.f_24 = GET_TIME_OF_DAY();
	PRINTSTRING("Current Time - ");
	Function_219(Global_12976.f_24);
	PRINTNL();
	ADD_TIME(&Global_12976 + 24, 0, 0, bParam0, 0);
	PRINTSTRING("New TOD after LAST MISSION - ");
	Function_219(Global_12976.f_24);
	PRINTNL();
	Function_241(bParam0);
	return;
}

void Function_241(int iParam0) //Position: 0xD6DC / 55004
{
	Global_12976.f_12 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 12, 0, 0, (iParam0 + Function_239(90)), 0);
	return;
}

void Function_242(int iParam0, int iParam1) //Position: 0xD6FD / 55037
{
	int iVar0;
	bool bVar1;
	struct<6> Var2;
	struct<4> Var8;
	bool bVar12;
	
	if (!Function_79(iParam0))
	{
		Function_278();
		return;
	}
	if (StackVal == 1)
	{
		return;
	}
	iVar0 = Function_3(iParam0);
	if (StackVal != 2)
	{
		Function_277("DEED_START", iParam0);
	}
	Global_13172[iParam011].f_8 = StackVal + 1;
	Global_13172[iParam011].f_4 = 2;
	Global_6271 = iParam0;
	if (!Global_34165.f_36 && iParam1)
	{
		Function_245(1);
	}
	if (iVar0 == 1)
	{
		bVar1 = Function_342(iParam0);
		Global_6269 = bVar1;
		Var2 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_244(Global_6269) };
		Var8 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var8 = { StackVal, StackVal, StackVal, Function_243(Global_6269) };
		}
		bVar12 = CREATE_JOURNAL_ENTRY(&Var8, 1, false, &Var2);
		SET_JOURNAL_ENTRY_PROGRESS(bVar12, -2.0f, false, 0);
		CLEAR_JOURNAL_ENTRY(bVar12);
		APPEND_JOURNAL_ENTRY(bVar12, 0);
		UPDATE_PROFILE_STAT("LastSPMission", TO_FLOAT(bVar1), 1);
	}
	Global_3376 = 1;
	return;
}

struct<16> Function_243(bool bParam0) //Position: 0xD80D / 55309
{
	char* cVar0[16];
	
	strcpy(&cVar0, "miss", 16);
	straddi(&cVar0, bParam0, 16);
	stradd(&cVar0, "_short", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

struct<24> Function_244(bool bParam0) //Position: 0xD837 / 55351
{
	char* cVar0[24];
	
	strcpy(&cVar0, "Mission_", 24);
	switch (bParam0)
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

void Function_245(bool bParam0) //Position: 0xDA8D / 55949
{
	if ((Global_3395 || Global_3381) || Global_3396)
	{
		return;
	}
	Global_34165.f_24 = 4294967295;
	Function_272();
	Global_34165.f_28 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_246();
	SAVE_SOFT_SAVE(0);
	if (bParam0)
	{
		Function_11(&Global_63095, 1);
		Function_11(&Global_63095, 2);
	}
	Global_88793 = 1;
	return;
}

void Function_246() //Position: 0xDADE / 56030
{
	Function_257();
	Function_256();
	Function_256();
	Function_255();
	Function_255();
	Function_254();
	Function_254();
	Function_253();
	Function_253();
	if (!Function_1())
	{
		Function_251();
		Function_250();
		Function_249();
		Function_248();
	}
	Function_247();
	return;
}

void Function_247() //Position: 0xDB11 / 56081
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

void Function_248() //Position: 0xDC17 / 56343
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

void Function_249() //Position: 0xDC4A / 56394
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

void Function_250() //Position: 0xDDD8 / 56792
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

void Function_251() //Position: 0xDF8C / 57228
{
	Function_252(&Global_28260, 1, 0);
	return;
}

void Function_252(int iParam0, bool bParam1, var uParam2) //Position: 0xDF9A / 57242
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
	void fVar13;
	
	bVar0 = Function_176();
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

struct<8> Function_253() //Position: 0xE18B / 57739
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
				iVar2 = ((Function_175((50 + iVar4)) + Function_175((183 + iVar4))) + Function_175((90 + iVar4)));
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
	Function_291(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

struct<8> Function_254() //Position: 0xE226 / 57894
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
		iVar2 = ((Function_175((50 + iVar3) + 15) + Function_175((183 + iVar3) + 15)) + Function_175((90 + iVar3) + 15));
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
	Function_291(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_255() //Position: 0xE2AF / 58031
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
			iVar2 = ((Function_175((50 + iVar3) + 8) + Function_175((183 + iVar3) + 8)) + Function_175((90 + iVar3) + 8));
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
	Function_291(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_256() //Position: 0xE346 / 58182
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
		iVar2 = ((Function_175((50 + iVar3)) + Function_175((183 + iVar3))) + Function_175((90 + iVar3)));
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
	Function_291(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_257() //Position: 0xE3C5 / 58309
{
	Function_258(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_291(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_258(int iParam0, bool bParam1, bool bParam2) //Position: 0xE3EB / 58347
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
	Function_271(iParam0, bParam1, 1);
	Function_270(iParam0);
	if (bParam2 && bParam1 == 0.0f)
	{
		Function_259(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

void Function_259(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0xE5F5 / 58869
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_269(390))), 32);
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
					bVar19 = (Function_268(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_268(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_266(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, false, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_263(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_261(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_260(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_75(), &Var9);
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

var Function_260(int iParam0) //Position: 0xEC22 / 60450
{
	return (2.0f + (0,07f * IntToFloat(iParam0)));
}

struct<32> Function_261(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0xEC33 / 60467
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_262("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_262("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_262("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_262(char* cParam0, char* cParam1) //Position: 0xED28 / 60712
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, cParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_263(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0xED41 / 60737
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_265(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_264(Function_265(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_264(int iParam0, int iParam1) //Position: 0xEDA6 / 60838
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_265(int iParam0, bool bParam1) //Position: 0xEDB8 / 60856
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_266(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0xEDCA / 60874
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
	if (((Function_267(iParam0) != 19 || Function_267(iParam0) != 17) || Function_267(iParam0) != 10) || Function_267(iParam0) != 9)
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

int Function_267(int iParam0) //Position: 0xEEFA / 61178
{
	return Global_35278[iParam020].f_48;
}

float Function_268(int iParam0) //Position: 0xEF09 / 61193
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

float Function_269(int iParam0) //Position: 0xEF42 / 61250
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_270(int iParam0) //Position: 0xEF7F / 61311
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

int Function_271(int iParam0, bool bParam1, bool bParam2) //Position: 0xF119 / 61721
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

void Function_272() //Position: 0xF333 / 62259
{
	vector3 vVar0;
	var uVar3;
	
	Global_34165.f_24 = 4294967295;
	Function_273(&Global_34165 + 12, &Global_34165 + 16, 0, 0);
	vVar0 = { StackVal, StackVal, Function_273(&Global_34165 + 12, &Global_34165 + 16, 0, 0) };
	if (Function_60(StackVal, StackVal, vVar0))
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

vector3 Function_273(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0xF3D4 / 62420
{
	int iVar0;
	
	iVar0 = Function_276(uParam2, uParam3);
	if (Function_275(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_34165.f_24 = Global_29005;
			Function_12(&Global_63095, 1);
			Function_11(&Global_63095, 2);
			Global_63084 = { StackVal, StackVal, Global_16537[iVar021] };
			*uParam1 = 0;
		}
		else
		{
			Function_12(&Global_63095, 2);
			Function_11(&Global_63095, 1);
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
		Function_12(&Global_63095, 2);
		Function_11(&Global_63095, 1);
		*uParam1 = 1;
		*uParam0 = 290.0f;
		return -2833,843f, 50,332f, 2418,003f;
	}
	Function_274();
	return StackVal, StackVal, Function_274();
}

vector3 Function_274() //Position: 0xF4BB / 62651
{
	return 0.0f, 0.0f, 0.0f;
}

bool Function_275(int iParam0) //Position: 0xF4C4 / 62660
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_276(bool bParam0, bool bParam1) //Position: 0xF4DA / 62682
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar0 = 4294967295;
	fVar1 = 1E+09.0f;
	iVar3 = 0;
	while (iVar3 <= Global_16537)
	{
		if (((Global_16537[iVar321].f_40 != 3 || Global_16537[iVar321].f_40 != 4) || (iVar3 != 15 && !bParam0)) && (Global_16537[iVar321].f_52 != Global_29004 || bParam1))
		{
			if (Global_3365 || iVar3 == 6)
			{
				fVar2 = Function_223(StackVal, StackVal, StackVal, StackVal, Global_34574, Global_16537[iVar321]);
				if (fVar2 > fVar1)
				{
					fVar1 = fVar2;
					iVar0 = iVar3;
				}
			}
		}
		iVar3++;
	}
	if (Global_16875)
	{
		fVar2 = Function_223(StackVal, StackVal, Global_34574, -2833,843f, 50,332f, 2418,003f);
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_275(iVar0) && !bParam1)
	{
		iVar0 = Function_276(bParam0, 1);
	}
	return iVar0;
}

void Function_277(char* cParam0, bool bParam1) //Position: 0xF5A1 / 62881
{
	struct<4> Var0;
	
	if (!Function_79(bParam1))
	{
		return;
	}
	switch (Function_3(bParam1))
	{
		case 0x00000001:
			Var0 = { StackVal, StackVal, StackVal, Function_286(Function_342(bParam1)) };
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, &Var0, Function_3(bParam1), Function_342(bParam1));
			break;
		
		case 0x00000002:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "PROCEDURAL", Function_3(bParam1), bParam1);
			break;
		
		case 0x00000003:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "LOCATION", Function_3(bParam1), bParam1);
			break;
		
		case 0x00000004:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "MINIGAME", Function_3(bParam1), bParam1);
			break;
		
		case 0x00000005:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "ACTIONAREA_EVENT", Function_3(bParam1), bParam1);
			break;
		
		case 0x00000006:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "JOB", Function_3(bParam1), bParam1);
			break;
		
		case 0x00000000:
			break;
	}
	return;
}

void Function_278() //Position: 0xF6C5 / 63173
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
			Function_279(Global_13172[iVar011], &iVar18, &iVar19, &iVar20);
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

void Function_279(int iParam0, var uParam1, var uParam2, var uParam3) //Position: 0xF90C / 63756
{
	*uParam3 = iParam0 & 15;
	*uParam1 = SHIFT_RIGHT(iParam0, 4) & 255;
	*uParam2 = SHIFT_RIGHT(iParam0, 12) & 255;
}

void Function_280(int iParam0, int iParam1) //Position: 0xF935 / 63797
{
	int iVar0;
	
	if (!Function_79(iParam0))
	{
		Function_278();
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
	iVar0 = Function_3(iParam0);
	Global_13172[iParam011].f_4 = 2;
	if (!Global_34165.f_36 && iParam1)
	{
		Function_245(1);
	}
	if (iVar0 == 1)
	{
		Global_6269 = Function_342(iParam0);
	}
	Global_3376 = 1;
	return;
}

void Function_281(int iParam0, int iParam1) //Position: 0xF99C / 63900
{
	int iVar0;
	struct<6> Var1;
	struct<4> Var7;
	bool bVar11;
	
	if (!Function_79(iParam0))
	{
		Function_278();
		return;
	}
	iVar0 = Function_3(iParam0);
	Global_13172[iParam011].f_4 = 1;
	if (!Global_34165.f_36 && iParam1)
	{
		Function_245(1);
	}
	if (iVar0 == 1)
	{
		Global_6269 = Function_342(iParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_244(Global_6269) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_243(Global_6269) };
		}
		bVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		SET_JOURNAL_ENTRY_PROGRESS(bVar11, -2.0f, false, 0);
		CLEAR_JOURNAL_ENTRY(bVar11);
		APPEND_JOURNAL_ENTRY(bVar11, 0);
	}
	return;
}

void Function_282(bool bParam0) //Position: 0xFA42 / 64066
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
		Function_283();
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

void Function_283() //Position: 0xFACD / 64205
{
	int iVar0;
	
	Global_26960 = Function_284(StackVal);
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

bool Function_284(bool bParam0) //Position: 0xFB1B / 64283
{
	if (!Function_285(bParam0))
	{
		return 0;
	}
	return Global_26401[bParam0];
}

bool Function_285(int iParam0) //Position: 0xFB33 / 64307
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return 1;
}

struct<16> Function_286(bool bParam0) //Position: 0xFB48 / 64328
{
	char* cVar0[16];
	
	strcpy(&cVar0, "miss", 16);
	straddi(&cVar0, bParam0, 16);
	stradd(&cVar0, "d", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

void Function_287(int iParam0) //Position: 0xFB6D / 64365
{
	int iVar0;
	
	iVar0 = Function_288(iParam0);
	Global_34165.f_136 = GET_CURRENT_GAME_TIME();
	Global_34165.f_140 = 0.0f;
	switch (iVar0)
	{
		case 0x00000000:
			Global_34165.f_120 = Function_175(27);
			Global_34165.f_116 = Function_175(42);
			Global_34165.f_124 = CEIL(Function_269(49));
			Global_34165.f_128 = Function_175(49);
			break;
		
		case 0x00000002:
			Global_34165.f_116 = Function_175(355);
			break;
		
		case 0x00000001:
			Global_34165.f_124 = CEIL(Function_269(49));
			Global_34165.f_128 = Function_175(49);
			break;
	}
	return;
}

int Function_288(bool bParam0) //Position: 0xFBF7 / 64503
{
	switch (bParam0)
	{
		case 0x00000002:
		case 0x00000034:
		case 0x00000035:
		case 0x00000036:
		case 0x00000032:
			return 1;
			break;
		
		case 0x00000007:
		case 0x00000031:
		case 0x00000037:
			return 2;
			break;
		
		case 0x00000004:
		case 0x00000003:
		case 0x00000016:
		case 0x00000006:
		case 0x00000005:
		case 0x0000000B:
		case 0x00000011:
		case 0x0000000F:
		case 0x0000000C:
		case 0x00000038:
		case 0x00000033:
		case 0x00000001:
			return 3;
			break;
	}
	return 0;
}

int Function_289(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0xFC8C / 64652
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
		Function_290(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_35278[iParam020] + 16), 3.0f, iParam3);
	}
	return 1;
}

void Function_290(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, char* cParam9, bool bParam10) //Position: 0xFFDE / 65502
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

int Function_291(int iParam0, bool bParam1, bool bParam2) //Position: 0x10062 / 65634
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
		Function_271(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_270(iParam0);
	if (bParam2)
	{
		Function_259(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_292() //Position: 0x102FD / 66301
{
	WRITE_TO_FILE("New Game Progression Started\n", "C:/MoneyData.csv", 1);
	return;
}

int Function_293(bool bParam0, bool bParam1) //Position: 0x1033A / 66362
{
	bool bVar0;
	
	bVar0 = Function_175(0);
	if ((Function_175(0) - bParam0) <= 0)
	{
		bParam0 = bVar0;
	}
	if (bParam0 >= 0)
	{
		Function_294(0, bParam0, 0);
	}
	else
	{
		return 0;
	}
	if (bParam1)
	{
		PRINT_MONEY(&(Global_35278[020]), bVar0, (bParam0 * 4294967295), 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_175(0));
	return 1;
}

int Function_294(int iParam0, bool bParam1, int iParam2) //Position: 0x103CA / 66506
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
	Function_270(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_259(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

void Function_295() //Position: 0x105C5 / 67013
{
	PRINTSTRING("Unlocking Frontier Weapons");
	PRINTNL();
	SET_WEAPONENUM_LOCKED(false, 1);
	SET_WEAPONENUM_LOCKED(true, 1);
	SET_WEAPONENUM_LOCKED(2, 1);
	SET_WEAPONENUM_LOCKED(3, 1);
	SET_WEAPONENUM_LOCKED(4, 0);
	SET_WEAPONENUM_LOCKED(5, 1);
	SET_WEAPONENUM_LOCKED(6, 1);
	SET_WEAPONENUM_LOCKED(7, 1);
	SET_WEAPONENUM_LOCKED(12, 1);
	SET_WEAPONENUM_LOCKED(13, 1);
	SET_WEAPONENUM_LOCKED(14, 1);
	SET_WEAPONENUM_LOCKED(19, 1);
	SET_WEAPONENUM_LOCKED(20, 1);
	SET_WEAPONENUM_LOCKED(9, 1);
	SET_WEAPONENUM_LOCKED(10, 1);
	SET_WEAPONENUM_LOCKED(11, 1);
	SET_WEAPONENUM_LOCKED(16, 0);
	SET_WEAPONENUM_LOCKED(17, 1);
	SET_WEAPONENUM_LOCKED(18, 1);
	SET_WEAPONENUM_LOCKED(15, 1);
	SET_WEAPONENUM_LOCKED(22, 0);
	SET_WEAPONENUM_LOCKED(23, 1);
	SET_WEAPONENUM_LOCKED(24, 1);
	SET_WEAPONENUM_LOCKED(25, 1);
	DELETE_WEAPON_FROM_ACTOR(GET_PLAYER_ACTOR(0), false);
	DELETE_WEAPON_FROM_ACTOR(GET_PLAYER_ACTOR(0), true);
	DELETE_WEAPON_FROM_ACTOR(GET_PLAYER_ACTOR(0), 2);
	DELETE_WEAPON_FROM_ACTOR(GET_PLAYER_ACTOR(0), 3);
	DELETE_WEAPON_FROM_ACTOR(GET_PLAYER_ACTOR(0), 15);
	DELETE_WEAPON_FROM_ACTOR(GET_PLAYER_ACTOR(0), 6);
	DELETE_WEAPON_FROM_ACTOR(GET_PLAYER_ACTOR(0), 5);
	DELETE_WEAPON_FROM_ACTOR(GET_PLAYER_ACTOR(0), 7);
	DELETE_WEAPON_FROM_ACTOR(GET_PLAYER_ACTOR(0), 14);
	DELETE_WEAPON_FROM_ACTOR(GET_PLAYER_ACTOR(0), 12);
	DELETE_WEAPON_FROM_ACTOR(GET_PLAYER_ACTOR(0), 13);
	DELETE_WEAPON_FROM_ACTOR(GET_PLAYER_ACTOR(0), 19);
	DELETE_WEAPON_FROM_ACTOR(GET_PLAYER_ACTOR(0), 20);
	DELETE_WEAPON_FROM_ACTOR(GET_PLAYER_ACTOR(0), 9);
	DELETE_WEAPON_FROM_ACTOR(GET_PLAYER_ACTOR(0), 10);
	DELETE_WEAPON_FROM_ACTOR(GET_PLAYER_ACTOR(0), 11);
	DELETE_WEAPON_FROM_ACTOR(GET_PLAYER_ACTOR(0), 17);
	DELETE_WEAPON_FROM_ACTOR(GET_PLAYER_ACTOR(0), 18);
	GIVE_WEAPON_TO_ACTOR(GET_PLAYER_ACTOR(0), 4, 1.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(GET_PLAYER_ACTOR(0), 22, 1.0f, 0, 1);
	GIVE_WEAPON_TO_ACTOR(GET_PLAYER_ACTOR(0), 8, 1.0f, 0, 1);
	Function_296();
	ACTOR_SET_NEXT_WEAPON(GET_PLAYER_ACTOR(0), 22);
	ACTOR_SET_NEXT_WEAPON(GET_PLAYER_ACTOR(0), 4);
	return;
}

void Function_296() //Position: 0x10748 / 67400
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	iVar0 = 0;
	if (Global_3365)
	{
		return;
	}
	bVar2 = Function_176();
	if (!IS_ACTOR_VALID(bVar2))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 38)
	{
		bVar1 = iVar0;
		bVar3 = GET_AMMO_ENUM(bVar1);
		if (bVar3 != 4294967295)
		{
			switch (UNK_0xDB679ED9(bVar1))
			{
				case 0x00000028:
					_SET_ACTOR_AMMO_OF_TYPE(bVar2, bVar3, 30.0f, 0);
					break;
				
				case 0x00000027:
					_SET_ACTOR_AMMO_OF_TYPE(bVar2, bVar3, 30.0f, 0);
					break;
				
				case 0x0000002B:
					_SET_ACTOR_AMMO_OF_TYPE(bVar2, bVar3, 12.0f, 0);
					break;
				
				case 0x0000002A:
					_SET_ACTOR_AMMO_OF_TYPE(bVar2, bVar3, 20.0f, 0);
					break;
				
				case 0x00000029:
					_SET_ACTOR_AMMO_OF_TYPE(bVar2, bVar3, 20.0f, 0);
					break;
				
				case 0x0000002C:
					_SET_ACTOR_AMMO_OF_TYPE(bVar2, bVar3, 20.0f, 0);
					break;
				}
		}
		iVar0++;
	}
	return;
}

void Function_297(int iParam0) //Position: 0x10819 / 67609
{
	Function_298(iParam0);
	return;
}

void Function_298(int iParam0) //Position: 0x10824 / 67620
{
	int iVar0;
	
	if (!Function_79(iParam0))
	{
		Function_278();
		return;
	}
	iVar0 = Function_3(iParam0);
	Global_13172[iParam011].f_4 = 0;
	return;
}

void Function_299(int iParam0, int iParam1) //Position: 0x10848 / 67656
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return;
	}
	Global_25986[iParam0] = iParam1;
	return;
}

void Function_300(int iParam0, int iParam1) //Position: 0x10865 / 67685
{
	if (iParam0 >= 4294967295 && iParam0 <= 11)
	{
		return;
	}
	Global_25974[iParam0] = iParam1;
	return;
}

void Function_301(int iParam0, int iParam1) //Position: 0x10882 / 67714
{
	if (iParam0 >= 0 && iParam0 <= 3)
	{
		return;
	}
	Global_25970[iParam0] = iParam1;
	return;
}

void Function_302(int iParam0, int iParam1) //Position: 0x1089E / 67742
{
	if (iParam0 >= 4294967295 && iParam0 <= 4)
	{
		return;
	}
	Global_25965[iParam0] = iParam1;
	return;
}

void Function_303(int iParam0, var uParam1, var uParam2, bool bParam3) //Position: 0x108BA / 67770
{
	if (Global_3365 && !Global_3381)
	{
		return;
	}
	if (!bParam3)
	{
		Function_304(iParam0, uParam2, 0);
		(*uParam1)[iParam0] = 1;
	}
	if (Global_3422[iParam040].f_132 != 4294967295)
	{
		if (!(*uParam1)[Global_3422[iParam040].f_132])
		{
			Function_303(Global_3422[iParam040].f_132, uParam1, uParam2, 0);
		}
	}
	if (Global_3422[iParam040].f_136 != 4294967295)
	{
		if (!(*uParam1)[Global_3422[iParam040].f_136])
		{
			Function_303(Global_3422[iParam040].f_136, uParam1, uParam2, 0);
		}
	}
	if (Global_3422[iParam040].f_140 != 4294967295)
	{
		if (!(*uParam1)[Global_3422[iParam040].f_140])
		{
			Function_303(Global_3422[iParam040].f_140, uParam1, uParam2, 0);
		}
	}
	if (Global_3422[iParam040].f_144 != 4294967295)
	{
		if (!(*uParam1)[Global_3422[iParam040].f_144])
		{
			Function_303(Global_3422[iParam040].f_144, uParam1, uParam2, 0);
		}
	}
}

void Function_304(bool bParam0, var uParam1, bool bParam2) //Position: 0x109A1 / 68001
{
	struct<4> Var0;
	
	if (!Function_82(bParam0))
	{
		return;
	}
	if (Global_3381 && Global_6267 != bParam0)
	{
		return;
	}
	switch (bParam0)
	{
		case 0x00000001:
			Function_335(4, bParam2, 0);
			if (*uParam1 <= 1)
			{
				*uParam1 = 1;
				SET_DISABLE_DEADEYE(0, 1);
				SET_DEADEYE_MULTILOCK_ENABLE(0, false);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_333(Global_30640[0]);
			Function_333(Global_30679[1]);
			break;
		
		case 0x00000002:
			if (*uParam1 <= 2)
			{
				*uParam1 = 2;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, false);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_331(8, bParam2, 4);
			EQUIP_ACCESSORY(Global_34573, 0, 1);
			Function_333(Global_30668[0]);
			Function_326(0);
			Function_324(2, 1);
			Function_324(0, 1);
			Function_324(1, 1);
			break;
		
		case 0x00000003:
			Function_333(Global_30668[0]);
			break;
		
		case 0x00000004:
			Function_333(Global_30668[0]);
			Function_333(Global_30640[0]);
			Function_322(0, 1);
			Function_322(15, 1);
			Function_322(9, 1);
			Function_322(12, 1);
			Function_322(16, 1);
			Function_324(3, 1);
			break;
		
		case 0x00000005:
			Function_333(Global_30668[0]);
			break;
		
		case 0x00000006:
			Function_331(21, bParam2, 4);
			Function_333(Global_30668[0]);
			Function_324(39, 1);
			break;
		
		case 0x00000007:
			Function_333(Global_30668[0]);
			break;
		
		case 0x00000016:
			Function_333(Global_30668[0]);
			break;
		
		case 0x00000008:
			if (!bParam2)
			{
				if (IS_PS3())
				{
					if (!Function_161(4))
					{
						Function_315(4, 0, 0, 1);
					}
				}
			}
			Function_333(Global_30640[0]);
			Function_333(Global_30640[10]);
			break;
		
		case 0x00000009:
			Function_333(Global_30640[0]);
			Function_333(Global_30668[2]);
			Function_314(&(Global_29008[Global_30668[2]]), 32768);
			Function_313(&(Global_29008[Global_30668[2]]), 256);
			break;
		
		case 0x00000015:
			Function_331(9, bParam2, 4);
			Function_333(Global_30640[0]);
			break;
		
		case 0x00000017:
			Function_333(Global_30640[0]);
			Function_333(Global_30658[0]);
			Function_314(&(Global_29008[Global_30658[0]]), 32768);
			Function_313(&(Global_29008[Global_30658[0]]), 256);
			break;
		
		case 0x0000000A:
			Function_333(Global_30640[0]);
			break;
		
		case 0x0000000B:
			if (*uParam1 <= 3)
			{
				*uParam1 = 3;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, true);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_333(Global_30640[0]);
			Function_333(Global_30640[1]);
			break;
		
		case 0x0000000F:
			Function_333(Global_30640[1]);
			Function_333(Global_30679[0]);
			break;
		
		case 0x00000010:
			Function_333(Global_30679[0]);
			Function_333(Global_30658[5]);
			break;
		
		case 0x00000011:
			Function_333(Global_30658[5]);
			Function_333(Global_30658[1]);
			break;
		
		case 0x0000000C:
			Function_331(21, bParam2, 4);
			Function_333(Global_30640[4]);
			Function_333(Global_30658[4]);
			Function_312(&Global_76847, 0x2000000);
			Function_312(&Global_76847, 0x4000000);
			Function_312(&Global_76847, 4096);
			Function_312(&Global_76847, 8);
			Function_312(&Global_76847, 8388608);
			Function_312(&Global_76847, 524288);
			Function_312(&Global_76847, 1048576);
			break;
		
		case 0x0000000D:
			Function_333(Global_30640[4]);
			Function_333(Global_30658[0]);
			break;
		
		case 0x0000000E:
			Function_313(&(Global_29008[Global_30640[4]]), 256);
			Function_333(Global_30640[4]);
			Function_333(Global_30658[0]);
			Function_314(&(Global_29008[Global_30658[0]]), 32768);
			Function_313(&(Global_29008[Global_30658[0]]), 256);
			break;
		
		case 0x00000012:
			Function_333(Global_30640[0]);
			Function_333(Global_30640[5]);
			Function_331(16, bParam2, 4);
			break;
		
		case 0x00000013:
			Function_333(Global_30658[3]);
			Function_314(&(Global_29008[Global_30658[3]]), 32768);
			Function_313(&(Global_29008[Global_30658[3]]), 256);
			break;
		
		case 0x00000014:
			Function_331(9, bParam2, 4);
			Function_333(Global_30668[1]);
			break;
		
		case 0x00000018:
			Function_314(&(Global_29008[Global_30679[1]]), 32768);
			Function_333(Global_30679[1]);
			break;
		
		case 0x00000019:
			Function_331(12, bParam2, 4);
			Function_313(&(Global_29008[Global_30679[1]]), 256);
			Function_333(Global_30668[3]);
			Function_333(Global_30693[0]);
			Function_333(Global_30685[0]);
			Function_326(4);
			Function_322(13, 1);
			Function_322(1, 1);
			Function_322(18, 1);
			Function_324(34, 1);
			Function_324(44, 1);
			Function_324(47, 1);
			Global_26031[10] = 1;
			break;
		
		case 0x0000001E:
			Function_331(5, bParam2, 4);
			if (*uParam1 <= 4)
			{
				*uParam1 = 4;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, true);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
			}
			Function_333(Global_30693[0]);
			break;
		
		case 0x0000001F:
			Function_333(Global_30693[0]);
			break;
		
		case 0x00000020:
			Function_333(Global_30693[0]);
			Function_333(Global_30707[0]);
			break;
		
		case 0x00000021:
			Function_333(Global_30693[0]);
			break;
		
		case 0x0000001A:
			Function_333(Global_30685[0]);
			Function_333(Global_30693[0]);
			Function_333(Global_30693[1]);
			Function_333(Global_30707[2]);
			break;
		
		case 0x0000001B:
			Function_331(23, bParam2, 3);
			Function_322(23, 1);
			Function_333(Global_30685[0]);
			Function_333(Global_30685[2]);
			Function_314(&(Global_29008[Global_30685[2]]), 32768);
			Function_313(&(Global_29008[Global_30685[2]]), 256);
			break;
		
		case 0x0000001C:
			Function_331(19, bParam2, 4);
			Function_333(Global_30685[0]);
			Function_333(Global_30707[3]);
			break;
		
		case 0x0000001D:
			Function_331(24, bParam2, 3);
			Function_322(24, 1);
			Function_333(Global_30685[0]);
			break;
		
		case 0x00000024:
			Function_333(Global_30685[0]);
			Function_333(Global_30685[3]);
			break;
		
		case 0x00000022:
			Function_333(Global_30693[12]);
			Function_333(Global_30685[1]);
			break;
		
		case 0x00000023:
			Function_333(Global_30693[12]);
			Function_333(Global_30707[1]);
			break;
		
		case 0x00000025:
			Function_331(25, bParam2, 10);
			Function_333(Global_30693[2]);
			break;
		
		case 0x00000026:
			Function_333(Global_30693[12]);
			break;
		
		case 0x00000027:
			Function_333(Global_30693[12]);
			break;
		
		case 0x00000028:
			Function_331(13, bParam2, 4);
			Function_333(Global_30693[2]);
			Function_333(Global_30707[1]);
			break;
		
		case 0x00000029:
			if (!bParam2)
			{
				if (!Function_161(8))
				{
					Function_315(8, 0, 0, 1);
				}
			}
			Function_333(Global_30685[0]);
			Function_326(9);
			Function_322(7, 1);
			Function_322(11, 1);
			Function_322(3, 1);
			Function_322(20, 1);
			Function_324(57, 1);
			break;
		
		case 0x0000002A:
			Function_331(2, bParam2, 4);
			Function_333(Global_30717[0]);
			Function_333(Global_30717[3]);
			break;
		
		case 0x0000002B:
			Function_333(Global_30717[0]);
			break;
		
		case 0x0000002C:
			Function_333(Global_30717[0]);
			Function_333(Global_30723[0]);
			break;
		
		case 0x0000002D:
			Function_333(Global_30717[0]);
			break;
		
		case 0x0000002E:
			Function_333(Global_30717[0]);
			break;
		
		case 0x0000002F:
			Function_333(Global_30717[0]);
			break;
		
		case 0x00000030:
			Function_331(17, bParam2, 4);
			Function_333(Global_30723[0]);
			Function_333(Global_30717[0]);
			break;
		
		case 0x00000031:
			if (!bParam2)
			{
				if (!Function_163(15))
				{
					Function_307(15, 0, 1);
				}
			}
			Function_313(&(Global_29008[Global_30717[1]]), 256);
			Function_326(11);
			Function_333(Global_30717[1]);
			Function_333(Global_30668[0]);
			break;
		
		case 0x00000032:
			Function_333(Global_30717[1]);
			break;
		
		case 0x00000033:
			Function_333(Global_30717[1]);
			Function_333(Global_30717[0]);
			break;
		
		case 0x00000034:
			Function_333(Global_30717[1]);
			break;
		
		case 0x00000035:
			Function_333(Global_30717[1]);
			break;
		
		case 0x00000036:
			Function_333(Global_30717[1]);
			break;
		
		case 0x00000037:
			Function_333(Global_30717[1]);
			break;
		
		case 0x00000038:
			Function_333(Global_30717[1]);
			break;
		
		case 0x00000039:
			Function_333(Global_30717[1]);
			Function_305(11);
			Function_326(12);
			Global_16537[1121].f_40 = 0;
			Function_324(56, 1);
			if (!bParam2)
			{
				if (!Function_161(9))
				{
					Function_315(9, 0, 0, 0);
				}
				if (!Function_161(10))
				{
					Function_315(10, 0, 0, 1);
				}
			}
			break;
	}
	Var0 = { StackVal, StackVal, StackVal, Function_286(bParam0) };
	PRINTSTRING("MISSION LAUNCH: Giving stuff for debug passing ");
	PRINTSTRING(UI_GET_STRING(&Var0));
	PRINTNL();
	return;
}

void Function_305(int iParam0) //Position: 0x11291 / 70289
{
	bool bVar0;
	
	if (!Function_275(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_68))
	{
		Function_306(Global_16537[iParam021].f_68, 0);
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_72))
	{
		Function_306(Global_16537[iParam021].f_72, 0);
	}
	if (IS_OBJECT_VALID(Global_16537[iParam021].f_80))
	{
		GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(Global_16537[iParam021].f_80), false);
	}
	if (IS_OBJECT_VALID(Global_16537[iParam021].f_76))
	{
		if (!DECOR_CHECK_EXIST(Global_16537[iParam021].f_76, "PlayerHouse_NoHorse"))
		{
			DECOR_SET_BOOL(Global_16537[iParam021].f_76, "PlayerHouse_NoHorse", true);
		}
	}
	switch (Global_16537[iParam021].f_40)
	{
		case 0x00000002:
			Global_16537[iParam021].f_40 = 6;
			Function_125(Global_16537[iParam021].f_48, 16, 0, 0);
			bVar0 = LOCATE_NAMED_POINT(Global_16537[iParam021], 100.0f, "f_playerHorse", 1);
			if (IS_OBJECT_VALID(bVar0))
			{
				DECOR_SET_BOOL(bVar0, "PlayerHouse_NoHorse", true);
			}
			if (IS_OBJECT_VALID(Global_16537[iParam021].f_80))
			{
				DECOR_REMOVE(Global_16537[iParam021].f_80, "SavingAtBedAllowed");
			}
			break;
		
		default:
			return;
			break;
	}
	return;
}

void Function_306(bool bParam0, bool bParam1) //Position: 0x11400 / 70656
{
	if (!IS_DOOR_VALID(bParam0))
	{
		return;
	}
	DECOR_SET_BOOL(bParam0, "lockMe", bParam1);
	if (DECOR_CHECK_EXIST(bParam0, "unlockMe"))
	{
		DECOR_REMOVE(bParam0, "unlockMe");
	}
	if (!IS_DOOR_LOCKED(bParam0))
	{
		SET_DOOR_LOCK(bParam0, 1);
	}
	return;
}

void Function_307(bool bParam0, bool bParam1, bool bParam2) //Position: 0x11454 / 70740
{
	char* cVar0[32];
	char* cVar8[32];
	
	if (!Function_157(bParam0))
	{
		LOG_ERROR("Attempting to mostly complete an invalid outfit");
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_163(bParam0))
	{
		if (!Function_161(bParam0))
		{
			Function_315(bParam0, 1, 0, 0);
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
				PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Finish", &cVar0, false, 0, 0, 0, 2, 0, 0, 0);
			}
		}
		Function_311(457, 1, 0, 0);
		Function_310(bParam0, 6);
		if (bParam0 == 3)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(23))
			{
				AWARD_ACHIEVEMENT(23);
			}
		}
		if (bParam2)
		{
			if (!Function_344(0, 0, 1, 1))
			{
				Function_245(1);
				Function_309(1, 0);
			}
			else
			{
				Function_308();
			}
		}
	}
	return;
}

void Function_308() //Position: 0x115F2 / 71154
{
	return;
}

void Function_309(bool bParam0, int iParam1) //Position: 0x115F8 / 71160
{
	if (Global_3381)
	{
		return;
	}
	Global_3412 = bParam0;
	Global_3416 = iParam1;
	if (!Global_3365 && !Function_1())
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", true);
	return;
}

void Function_310(bool bParam0, int iParam1) //Position: 0x1163A / 71226
{
	if (!Function_157(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_27774[bParam013].f_8 = (StackVal || iParam1);
	return;
}

int Function_311(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x1168F / 71311
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
	Function_271(iParam0, TO_FLOAT(bParam1), 1);
	Function_270(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_259(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, iParam3);
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

void Function_312(var uParam0, int iParam1) //Position: 0x118AF / 71855
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_313(var uParam0, int iParam1) //Position: 0x118BE / 71870
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_314(var uParam0, int iParam1) //Position: 0x118D5 / 71893
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_315(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x118E4 / 71908
{
	struct<8> Var0;
	
	if (!Function_157(bParam0))
	{
		LOG_ERROR("Attempting to discover invalid outfit");
		return;
	}
	if (!Function_168(3))
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_161(bParam0))
	{
		Function_311(456, 1, 0, 0);
		Function_310(bParam0, 2);
		if (bParam2)
		{
			if (!Function_344(0, 0, 1, 1))
			{
				Function_245(1);
				Function_309(1, 5);
			}
			else
			{
				Function_308();
			}
		}
		Function_316(bParam0);
		strcpy(&Var0, "OUT_", 32);
		stradd(&Var0, &Global_27774[bParam013] + 32, 32);
		if ((!Function_195() && !bParam1) && !Global_3380)
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Add", &Var0, false, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (Function_195() || Global_3380)
		{
			if (!DECOR_CHECK_EXIST(Global_34573, "outfitDisc"))
			{
				DECOR_SET_INT(Global_34573, "outfitDisc", bParam0);
			}
		}
		if (bParam3)
		{
			stradd(&Var0, "_tip", 32);
			Function_13(&Var0, 10.0f, 1, 0, 0, 1, 0);
		}
		if (!Function_43(Global_76846, 2))
		{
			Function_38(Global_34573, 2, 1, 0);
		}
	}
}

void Function_316(bool bParam0) //Position: 0x11A2E / 72238
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
			if (Function_320(bParam0, Function_321(bVar24)))
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
			if (Function_320(bParam0, Function_321(bVar24)))
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
		SET_JOURNAL_ENTRY_PROGRESS(Global_27774[bParam013].f_48, (TO_FLOAT(Function_319(bParam0)) / TO_FLOAT(Global_27774[bParam013].f_28)), false, 0);
		Function_318(Global_27774[bParam013].f_48, 0);
		straddi(&cVar8, Function_317(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_27774[bParam013].f_48, &cVar8, 3);
	}
	return;
}

int Function_317(int iParam0) //Position: 0x11BDE / 72670
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_157(iParam0))
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

void Function_318(bool bParam0, bool bParam1) //Position: 0x11C35 / 72757
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

var Function_319(int iParam0) //Position: 0x11C5A / 72794
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_157(iParam0))
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

bool Function_320(bool bParam0, int iParam1) //Position: 0x11CB0 / 72880
{
	int iVar0;
	
	if (!Function_157(bParam0))
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

int Function_321(bool bParam0) //Position: 0x11D0F / 72975
{
	return SHIFT_LEFT(true, bParam0);
}

int Function_322(int iParam0, int iParam1) //Position: 0x11D1B / 72987
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_WEAPON_AVAILABLE_FOR_SALE: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_59354[iParam08].f_24 = iParam1;
	Function_323(iParam0, iParam1);
	Function_38(Global_34573, 1, 4, 1);
	return 1;
}

int Function_323(int iParam0, int iParam1) //Position: 0x11D8E / 73102
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_WEAPON_AVAILABLILITY: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_62337[iParam0] = iParam1;
	return 1;
}

int Function_324(int iParam0, int iParam1) //Position: 0x11DEA / 73194
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_AMMO_AVAILABLE_FOR_SALE: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_59675[iParam08].f_24 = iParam1;
	Function_325(iParam0, iParam1);
	Function_38(Global_34573, 1, 4, 1);
	return 1;
}

int Function_325(int iParam0, int iParam1) //Position: 0x11E5B / 73307
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_ITEM_AVAILABLILITY: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_62378[iParam0] = iParam1;
	return 1;
}

void Function_326(int iParam0) //Position: 0x11EB5 / 73397
{
	bool bVar0;
	bool bVar1;
	
	if (!Function_275(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_68))
	{
		Function_330(Global_16537[iParam021].f_68, 0);
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_72))
	{
		Function_330(Global_16537[iParam021].f_72, 0);
	}
	if (IS_OBJECT_VALID(Global_16537[iParam021].f_80))
	{
		GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(Global_16537[iParam021].f_80), true);
	}
	if (IS_OBJECT_VALID(Global_16537[iParam021].f_76))
	{
		if (DECOR_CHECK_EXIST(Global_16537[iParam021].f_76, "PlayerHouse_NoHorse"))
		{
			DECOR_REMOVE(Global_16537[iParam021].f_76, "PlayerHouse_NoHorse");
		}
	}
	switch (Global_16537[iParam021].f_40)
	{
		case 0x00000002:
			Function_311(468, 1, 0, 0);
			Function_329(6, (16 + iParam0));
			Global_16537[iParam021].f_40 = 3;
			Function_13("house_purchased", 0x41200000, 1, 0, 2, 1, 0);
			Function_125(Global_16537[iParam021].f_48, 17, 0, 0);
			if (((iParam0 != 5 || iParam0 != 8) || iParam0 != 6) || iParam0 != 7)
			{
				Function_315(14, 1, 0, 0);
				Function_327(14, 1, 0, 0, 0);
			}
			if (!Function_344(0, 0, 1, 1))
			{
				Function_245(1);
				Function_309(1, 6);
			}
			else
			{
				Function_308();
			}
			bVar0 = LOCATE_NAMED_POINT(Global_16537[iParam021], 100.0f, "f_playerHorse", 1);
			if (IS_OBJECT_VALID(bVar0))
			{
				DECOR_REMOVE(bVar0, "PlayerHouse_NoHorse");
			}
			if (IS_OBJECT_VALID(Global_16537[iParam021].f_80))
			{
				DECOR_SET_BOOL(Global_16537[iParam021].f_80, "SavingAtBedAllowed", true);
			}
			break;
		
		case 0x00000001:
			bVar1 = LOCATE_NAMED_POINT(Global_16537[iParam021], 100.0f, "f_playerHorse", 1);
			if (IS_OBJECT_VALID(bVar1))
			{
				DECOR_REMOVE(bVar1, "PlayerHouse_NoHorse");
			}
			if (IS_OBJECT_VALID(Global_16537[iParam021].f_80))
			{
				DECOR_SET_BOOL(Global_16537[iParam021].f_80, "SavingAtBedAllowed", true);
			}
			Global_16537[iParam021].f_40 = 4;
			Function_13("house_rented", 0x41200000, 1, 0, 2, 1, 0);
			break;
		
		case 0x00000006:
			Function_311(468, 1, 0, 0);
			Global_16537[iParam021].f_40 = 3;
			Function_329(6, (16 + iParam0));
			break;
	}
	return;
}

void Function_327(bool bParam0, bool bParam1, bool bParam2, var uParam3, bool bParam4) //Position: 0x12161 / 74081
{
	char* cVar0[32];
	struct<8> Var8;
	
	strcpy(&cVar0, "OUT_", 32);
	stradd(&cVar0, &Global_27774[bParam013] + 32, 32);
	if (!Function_157(bParam0))
	{
		LOG_ERROR("Attempting to add scrap to invalid outfit");
		return;
	}
	if (!Function_168(3) || uParam3)
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_162(bParam0, 2))
	{
		Function_311(456, 1, 0, 0);
		Function_310(bParam0, 2);
		if (!bParam2)
		{
			Var8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
			stradd(&Var8, "_tip", 32);
			Function_13(&Var8, 10.0f, 1, 0, 0, 1, 0);
		}
	}
	bParam2 = bParam2;
	if (!Function_320(bParam0, bParam1))
	{
		Global_27774[bParam013].f_4 = (StackVal || bParam1);
		Function_310(bParam0, 1048576);
		if (bParam4)
		{
			if (!Function_344(0, 0, 1, 1))
			{
				Function_245(1);
				Function_309(1, 0);
			}
			else
			{
				Function_308();
			}
		}
		Function_316(bParam0);
		if (StackVal && !Function_17(((((!Function_195() && !Global_3380) && !Global_3392) && !Global_3384) && !bParam2), 1))
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Edit", &cVar0, false, 0, 0, 0, 2, 0, 0, 0);
		}
		else if (StackVal || Function_17((((Function_195() || Global_3380) || Global_3392) || Global_3384), 1))
		{
			if (!DECOR_CHECK_EXIST(Global_34573, "outfitScrap"))
			{
				DECOR_SET_INT(Global_34573, "outfitScrap", bParam0);
			}
		}
		if (!Function_43(Global_76846, 2))
		{
			Function_38(Global_34573, 2, 1, 0);
		}
		if (Global_28180 == bParam0)
		{
			Global_28180.f_12 = 1;
			Function_154();
		}
		Global_28180.f_12 = 1;
		switch (bParam0)
		{
			case 0x00000004:
				Function_328(3, bParam1);
				break;
			
			case 0x00000005:
				Function_328(3, SHIFT_LEFT(bParam1, 6));
				break;
			
			case 0x00000006:
				Function_328(3, SHIFT_LEFT(bParam1, 12));
				break;
			
			case 0x00000007:
				Function_328(3, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x00000008:
				Function_328(3, SHIFT_LEFT(bParam1, 24));
				break;
			
			case 0x00000009:
				Function_328(2, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x0000000A:
				Function_329(2, 24);
				break;
			
			case 0x00000003:
				Function_329(2, 25);
				break;
			
			case 0x0000000F:
				Function_329(2, 26);
				break;
			
			case 0x0000000D:
				Function_329(2, 27);
				break;
			
			case 0x0000000E:
				Function_329(2, 28);
				break;
			}
	}
}

void Function_328(int iParam0, bool bParam1) //Position: 0x123F0 / 74736
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

void Function_329(int iParam0, bool bParam1) //Position: 0x1244F / 74831
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

void Function_330(bool bParam0, bool bParam1) //Position: 0x124B6 / 74934
{
	if (!IS_DOOR_VALID(bParam0))
	{
		return;
	}
	DECOR_SET_BOOL(bParam0, "unlockMe", bParam1);
	if (DECOR_CHECK_EXIST(bParam0, "lockMe"))
	{
		DECOR_REMOVE(bParam0, "lockMe");
	}
	if (IS_DOOR_LOCKED(bParam0))
	{
		SET_DOOR_LOCK(bParam0, 0);
	}
	return;
}

void Function_331(bool bParam0, bool bParam1, int iParam2) //Position: 0x12507 / 75015
{
	bool bVar0;
	
	if (bParam1)
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	else
	{
		bVar0 = (GET_WEAPON_MAX_AMMO(bParam0) * IntToFloat(iParam2));
		if (Function_332(GET_AMMOENUM_FOR_WEAPONENUM(bParam0), 1))
		{
			_ADD_AMMO_OF_TYPE(Global_34573, GET_AMMOENUM_FOR_WEAPONENUM(bParam0), bVar0, 1, 0);
		}
		if (4294967295 != bParam0)
		{
			if (!ACTOR_HAS_WEAPON(Global_34573, bParam0))
			{
				Function_335(bParam0, 0, 0);
			}
			else
			{
				SET_WEAPONENUM_LOCKED(bParam0, 0);
			}
			if (Global_3381 && iParam2 != 0)
			{
				iParam2 = 2;
			}
		}
	}
	return;
}

bool Function_332(int iParam0, int iParam1) //Position: 0x12575 / 75125
{
	return !(iParam0 != 4294967295 || (iParam1 && iParam0 != 0));
}

void Function_333(int iParam0) //Position: 0x12588 / 75144
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (NET_IS_IN_SESSION())
	{
		return;
	}
	if (Function_148(&(Global_29008[iParam0]), 4096))
	{
		return;
	}
	Function_314(&(Global_29008[iParam0]), 4096);
	if (StackVal != 1)
	{
		Function_311(473, 1, 0, 0);
		iVar0 = Function_334(iParam0);
		if (iVar0 == Global_30621[0])
		{
			Function_311(474, 1, 0, 0);
		}
		else if (iVar0 == Global_30621[1])
		{
			Function_311(475, 1, 0, 0);
		}
		else if (iVar0 == Global_30621[2])
		{
			Function_311(476, 1, 0, 0);
		}
	}
	iVar1 = (Global_29155[iParam010].f_36 - 5);
	iVar2 = 8;
	while (iVar1 >= 30)
	{
		iVar1 = (iVar1 - 31);
		iVar2++;
	}
	if (iVar2 < 10)
	{
		Function_329(iVar2, iVar1);
	}
	else if (iParam0 == Global_30723[9])
	{
		Function_329(7, 30);
	}
	if (Function_268(473) <= Function_269(473))
	{
		if (!Function_1())
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(30))
			{
				AWARD_ACHIEVEMENT(30);
			}
		}
	}
	return;
}

var Function_334(int iParam0) //Position: 0x12687 / 75399
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_149(iParam0))
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

int Function_335(bool bParam0, bool bParam1, int iParam2) //Position: 0x126DF / 75487
{
	if (!Function_336(bParam0))
	{
		return 0;
	}
	if (IS_WEAPONENUM_LOCKED(bParam0))
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	if (!ACTOR_HAS_WEAPON(Function_176(), bParam0))
	{
		GIVE_WEAPON_TO_ACTOR(Function_176(), bParam0, 1.0f, iParam2, 1);
		return 1;
	}
	if (bParam1)
	{
		_ADD_AMMO_OF_TYPE(Function_176(), GET_AMMO_ENUM(bParam0), GET_WEAPON_MAX_AMMO(bParam0), 0, iParam2);
		return 1;
	}
	return 1;
}

bool Function_336(int iParam0) //Position: 0x12736 / 75574
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

void Function_337() //Position: 0x12748 / 75592
{
	Function_338(512);
	Global_27761 = 0.0f;
	UNK_0x598815BD(Global_27761);
	if (IS_SCRIPT_VALID(Global_26316.f_64))
	{
		TERMINATE_SCRIPT(Global_26316.f_64);
	}
	if (IS_SCRIPT_VALID(Global_26316.f_60))
	{
		TERMINATE_SCRIPT(Global_26316.f_60);
	}
	return;
}

void Function_338(int iParam0) //Position: 0x12784 / 75652
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

void Function_339(int iParam0, int iParam1) //Position: 0x12797 / 75671
{
	if (!Function_79(iParam0))
	{
		return;
	}
	Global_13172[iParam011].f_16 = iParam1;
	return;
}

void Function_340(int iParam0) //Position: 0x127B2 / 75698
{
	if (iParam0->f_128 & 114688 == 0)
	{
		return;
	}
	if (iParam0->f_128 & 16384 >= 0)
	{
		if (IS_WEATHER_SPHERE_ENABLED(0))
		{
			ENABLE_WEATHER_SPHERE(0, false);
		}
	}
	else if (iParam0->f_128 & 32768 >= 0)
	{
		if (IS_WEATHER_SPHERE_ENABLED(1))
		{
			ENABLE_WEATHER_SPHERE(1, false);
		}
	}
	else if (iParam0->f_128 & 65536 >= 0)
	{
		if (StackVal == 0)
		{
			Function_341(4, 0, 0);
		}
	}
	return;
}

void Function_341(bool bParam0, bool bParam1, bool bParam2) //Position: 0x12819 / 75801
{
	bool bVar0;
	
	if (StackVal == 4294967295)
	{
		LOG_ERROR("Calling WEATHER_CLEAR_OVERRIDE when you never set the override in the first place!");
		return;
	}
	if (StackVal || (StackVal || StackVal != 3 != 4) != 5)
	{
		Global_16524 = 2;
	}
	else if (StackVal || StackVal != 12 != 20)
	{
		Global_16524 = Global_16524.f_40;
	}
	else
	{
		Global_16524 = StackVal;
	}
	Global_16524.f_4 = 4294967295;
	Global_16524.f_16 = 0;
	if (!StackVal != Global_16524)
	{
		bVar0 = MAKE_TIME_OF_DAY(bParam0, bParam1, bParam2);
		Function_217(Global_16524, bVar0, 1);
	}
	return;
}

bool Function_342(bool bParam0) //Position: 0x128F6 / 76022
{
	if (!Function_4(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[bParam011], 12) & 255;
}

struct<160> Function_343(var uParam0, int iParam1) //Position: 0x12916 / 76054
{
	int iVar0;
	struct<40> Var1;
	
	iVar0 = 0;
	while (iVar0 <= *uParam0)
	{
		if (StackVal == iParam1)
		{
			return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *uParam0[iVar040];
		}
		iVar0++;
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var1;
}

bool Function_344(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x12950 / 76112
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

bool Function_345(int iParam0) //Position: 0x129F4 / 76276
{
	return IS_OBJECT_VALID(Function_346(iParam0));
}

var Function_346(int iParam0) //Position: 0x12A02 / 76290
{
	return iParam0->f_28;
}

void Function_347(int iParam0, int iParam1) //Position: 0x12A0C / 76300
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
			Function_348(&(Global_25267[iVar058]));
		}
		iVar0++;
	}
	return;
}

void Function_348(int iParam0) //Position: 0x12A8E / 76430
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

int Function_349(int iParam0) //Position: 0x12ADC / 76508
{
	if (!Function_149(iParam0))
	{
		return 0;
	}
	return Function_148(&(Global_29008[iParam0]), 2048);
}

bool Function_350(int iParam0) //Position: 0x12AFA / 76538
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_351(int iParam0) //Position: 0x12B18 / 76568
{
	int iVar0;
	
	if (!Global_30842[5])
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= *iParam0)
	{
		PRINTSTRING(UI_GET_STRING(iParam0[iVar040] + 12));
		PRINTSTRING(" - ");
		switch (Function_233(StackVal))
		{
			case 0x00000003:
				PRINTSTRING("nCompleted");
				break;
			
			case 0x00000004:
				PRINTSTRING("Completed(Cheated)");
				break;
			
			case 0x00000000:
				if (Function_232(iParam0[iVar040]))
				{
					PRINTSTRING("Available to run");
				}
				else
				{
					PRINTSTRING("Can't run (conditions not met) - ");
				}
				break;
			
			case 0x00000002:
				PRINTSTRING("Currently running");
				break;
			
			default:
				PRINTSTRING("UNKNOWN");
				break;
		}
		PRINTNL();
		iVar0++;
	}
	return;
}

void Function_352(var uParam0) //Position: 0x12C25 / 76837
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= *uParam0)
	{
		if (uParam0[iVar040]->f_92)
		{
			Function_234(uParam0[iVar040], iVar0);
		}
		iVar0++;
	}
	return;
}

void Function_353() //Position: 0x12C55 / 76885
{
	float fVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	bVar2 = UNK_0x191658C0();
	PRINTSTRING("TEST: Running External Script: ");
	PRINTSTRING(bVar2);
	PRINTNL();
	if (IS_STRING_VALID(bVar2))
	{
		if (DOES_SCRIPT_EXIST(bVar2))
		{
			bVar3 = LAUNCH_NEW_SCRIPT(bVar2, 0);
			fVar0 = GET_CURRENT_GAME_TIME();
			while ((!IS_SCRIPT_VALID(bVar3) && !bVar1) && !IS_EXITFLAG_SET())
			{
				WAIT(false);
				if ((GET_CURRENT_GAME_TIME() - fVar0) <= 1.0f)
				{
					bVar1 = true;
				}
			}
			if (bVar1)
			{
				LOG_ERROR("TEST: CANNOT MOUNT CUSTOM SCRIPT FOR AUTOMATED TESTER");
				PRINTSTRING("TEST: CANNOT MOUNT SCRIPT: ");
				PRINTSTRING(bVar2);
				PRINTNL();
			}
			fVar0 = GET_CURRENT_GAME_TIME();
			while (IS_SCRIPT_VALID(bVar3) && !IS_EXITFLAG_SET())
			{
				WAIT(false);
			}
		}
		else
		{
			LOG_ERROR("TEST: CANNOT FIND CUSTOM SCRIPT FOR AUTOMATED TESTER");
			PRINTSTRING("TEST: CANNOT FIND SCRIPT: ");
			PRINTSTRING(bVar2);
			PRINTNL();
		}
	}
	PRINTSTRING("TEST: External Script Complete");
	PRINTNL();
	LOG_ERROR("TEST: COMPLETE");
	Global_62481 = 4294967197;
	Global_62482 = 0;
	return;
}

void Function_354() //Position: 0x12DFD / 77309
{
	SET_ACTOR_INVULNERABILITY(GET_PLAYER_ACTOR(0), true);
	Function_361(4294967295, 4294967295);
	Function_358();
	Global_62478 = 1;
	PRINTSTRING("TEST: Currently Testing Region 0 - FRONTIER");
	PRINTNL();
	if (Global_62482 > 0 || Global_62482 <= Global_3422)
	{
		Global_62481 = 4294967197;
		Global_62482 = 0;
		return;
	}
	Function_356();
	Global_62478 = 1;
	Function_355();
	LAUNCH_NEW_SCRIPT("content/scripting/DesignerDefined/AutomatedTester/MissionTester", 0);
	return;
}

int Function_355() //Position: 0x12EB8 / 77496
{
	bool bVar0;
	
	bVar0 = UNK_0x32D1DEB0();
	if (IS_STRING_VALID(bVar0))
	{
		if (STRINGS_ARE_EQUAL(bVar0, "Single"))
		{
			return 1;
		}
	}
	return 0;
}

void Function_356() //Position: 0x12EDF / 77535
{
	Function_357(25, 2);
	return;
}

void Function_357(int iParam0, int iParam1) //Position: 0x12EEB / 77547
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

void Function_358() //Position: 0x130E9 / 78057
{
	GRINGO_DEBUG_CHECK_SOUND(1);
	SET_DEBUG_FADE_STATE(0);
	SET_HUD_MAP_DRAW_ENABLED(1);
	if (Function_360())
	{
		Function_359(10, 3);
	}
	else
	{
		Function_356();
	}
	Global_30920 = 0;
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	SET_ACTOR_INVULNERABILITY(Function_176(), false);
	AI_CLEAR_DONT_HARM_ACTOR(Function_176());
	UI_POP("nDebugMenu");
	return;
}

void Function_359(int iParam0, int iParam1) //Position: 0x13134 / 78132
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

bool Function_360() //Position: 0x1326B / 78443
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
				if (!Function_17(Global_78480.f_124, 1))
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

void Function_361(int iParam0, int iParam1) //Position: 0x132D2 / 78546
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

void Function_362() //Position: 0x13409 / 78857
{
	return;
}

void Function_363(int iParam0) //Position: 0x1340F / 78863
{
	strcpy(iParam0 + 12, "MISSIONS", 16);
	*iParam0 = 79006;
	iParam0->f_4 = 78969;
	iParam0->f_8 = 78914;
	iParam0->f_28 = 0;
	return;
}

void Function_364() //Position: 0x13442 / 78914
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_62968)
	{
		if (IS_OBJECTSET_VALID(Global_62968[iVar0]))
		{
			DESTROY_OBJECTSET(Global_62968[iVar0]);
		}
		iVar0++;
	}
	Function_352(&Global_3422);
	return;
}

int Function_365() //Position: 0x13479 / 78969
{
	if (!Global_3366)
	{
		return 0;
	}
	if (Function_172(&Global_3422, 1) >= 0)
	{
		Global_3390 = 1;
		return 0;
	}
	Global_3390 = 1;
	return 1;
}

void Function_366() //Position: 0x1349E / 79006
{
	bool bVar0;
	
	Function_418(2, "Nigel West Dickens", 546, "merchant_brain_injured", 0.0f, 0.0f, 0.0f, 0);
	Function_418(4, "Marshal Augustus Graham", 547, "marshal_brain", 0.0f, 0.0f, 0.0f, 0);
	Function_418(3, "Bonnie MacFarlane", 551, "ranchdaughter_brain", 0.0f, 0.0f, 0.0f, 0);
	Function_418(0, "Irish", 548, "Outlaw_brain", 0.0f, 0.0f, 0.0f, 0);
	Function_418(1, "Seth", 545, "GraveRobber_brain", 0.0f, 0.0f, 0.0f, 0);
	Function_418(5, "Old Gunslinger", 558, "Gunslinger_Comp_Br", 0.0f, 0.0f, 0.0f, 0);
	Function_418(6, "Mexican Tyrant", 556, "MexHenchman_Comp_Br", 0.0f, 0.0f, 0.0f, 0);
	Function_418(7, "Mexican Rebel", 553, "MexRebel_Comp_Br", -4809,157f, 44,886f, 4957,521f, 0);
	Function_418(8, "Mexican Girl", 555, "MexGirl_Comp_Br", -1699,957f, 8,407f, 4196,78f, 0);
	Function_418(9, "Anthropologist", 561, "Anthropologist_Brain", 1333,423f, 78,456f, 748,393f, 0);
	Function_418(10, "nFBI Agent", 559, "FBI_Agent_Brain", 0.0f, 0.0f, 0.0f, 0);
	Function_418(11, "Wife", 698, "Companion_Wife", 0.0f, 0.0f, 0.0f, 0);
	Function_418(12, "Son", 638, "Companion_Son", 0.0f, 0.0f, 0.0f, 0);
	Function_418(13, "Uncle", 646, "Companion_LeadWorker", 0.0f, 0.0f, 0.0f, 0);
	if (Global_3421)
	{
		Function_417(&Global_3422, 9, 0, "$/content/Frontier/Missions/Marshal02/Marshal02", 4294967295, 0, 304, 4, "$/content/scripting/gringo/SimpleGringo/Marshal_Camp02", -2091,528f, 16,75f, 2606,137f, 0x40200000);
		Function_416(&Global_3422, 14, 0, "$/content/Frontier/Missions/Grave03/Grave03", 4294967295, 0, 303, 1, "$/content/scripting/gringo/SimpleGringo/Grave_Camp03", -3919,425f, 31,444f, 2900,712f, FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_Grave03"), -3911,7f, 31,59f, 2900,8f);
	}
	else
	{
		Function_415(&Global_3422, 1, 0, "$/content/Frontier/Missions/Intro01/Intro01", 4294967295, 0, -2208.0f, 16,5f, 2607,17f);
		Function_415(&Global_3422, 2, 0, "$/content/Frontier/Missions/Ranch01/Ranch01", 1, 1, -788,879f, 94,299f, 2411,818f);
		Function_417(&Global_3422, 3, 0, "$/content/Frontier/Missions/Ranch03/Ranch03", 2, 1, 300, 3, "", -787,022f, 93,636f, 2409,413f, 0x40200000);
		Function_417(&Global_3422, 4, 0, "$/content/Frontier/Missions/Ranch02/Ranch02", 3, 1, 300, 3, "$/content/scripting/gringo/SimpleGringo/Ranch_Camp02", -793,304f, 92,22f, 2418,484f, 0x40200000);
		Function_416(&Global_3422, 5, 0, "$/content/Frontier/Missions/Ranch07/Ranch07", 4, 1, 300, 3, "$/content/scripting/gringo/SimpleGringo/Ranch_Camp07", -793,739f, 92,404f, 2418,243f, FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_Ranch07"), -788,844f, 93,669f, 2406,71f);
		Function_417(&Global_3422, 6, 0, "$/content/Frontier/Missions/Ranch06/Ranch06", 5, 1, 300, 3, "", -787,022f, 93,636f, 2409,413f, 0x40200000);
		Function_416(&Global_3422, 7, 0, "$/content/Frontier/Missions/Ranch08/Ranch08", 6, 1, 300, 3, "$/content/scripting/gringo/SimpleGringo/Ranch_Camp08", -852,8666f, 90,806f, 2440,189f, FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_Ranch08"), -858,142f, 90,353f, 2432,052f);
		Function_417(&Global_3422, 8, 0, "$/content/Frontier/Missions/Marshal01/Marshal01", 3, 1, 304, 4, "$/content/scripting/gringo/SimpleGringo/Marshal_Camp01", -2091,528f, 16,75f, 2606,137f, 0x40200000);
		Function_417(&Global_3422, 9, 0, "$/content/Frontier/Missions/Marshal02/Marshal02", 8, 1, 304, 4, "$/content/scripting/gringo/SimpleGringo/Marshal_Camp02", -2091,528f, 16,75f, 2606,137f, 0x40200000);
		Function_416(&Global_3422, 10, 0, "$/content/Frontier/Missions/Merchant01/Merchant01", 9, 1, 311, 2, "$/content/scripting/gringo/SimpleGringo/Merchant_Camp01", -1694,394f, 29,634f, 3068,558f, FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_Merchant01"), -1696,57f, 29,634f, 3066,021f);
		Function_417(&Global_3422, 21, 0, "$/content/Frontier/Missions/Marshal04/Marshal04", 5, 1, 304, 4, "$/content/scripting/gringo/SimpleGringo/Marshal_Camp04", -2091,528f, 16,75f, 2606,137f, 0x40200000);
		Function_417(&Global_3422, 11, 0, "$/content/Frontier/Missions/Merchant02/Merchant02", 10, 1, 311, 2, "$/content/scripting/gringo/SimpleGringo/Merchant_Camp02", -2125,509f, 16,485f, 2604,504f, 3,5f);
		Function_416(&Global_3422, 12, 0, "$/content/Frontier/Missions/Grave01/Grave01", 11, 1, 303, 1, "$/content/scripting/gringo/SimpleGringo/Grave_Camp01", -1800,709f, 24,427f, 2865,854f, FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_Grave01"), -1803,651f, 23,5f, 2865,918f);
		Function_416(&Global_3422, 13, 0, "$/content/Frontier/Missions/Grave02/Grave02", 12, 1, 303, 1, "$/content/scripting/gringo/SimpleGringo/GraveRobber_Camp02", -1784,501f, 24,094f, 2838,486f, FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_Grave02"), -1777,091f, 24,093f, 2849,859f);
		Function_416(&Global_3422, 14, 0, "$/content/Frontier/Missions/Grave03/Grave03", 13, 1, 303, 1, "$/content/scripting/gringo/SimpleGringo/Grave_Camp03", -3919,425f, 31,444f, 2900,712f, FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_Grave03"), -3911,7f, 31,59f, 2900,8f);
		Function_417(&Global_3422, 15, 0, "$/content/Frontier/Missions/Merchant05/Merchant05", 12, 1, 311, 2, "$/content/scripting/gringo/SimpleGringo/Merchant_Camp05", -3260,515f, 15,786f, 2732,906f, (2,5f + 2.0f));
		Function_417(&Global_3422, 16, 0, "$/content/Frontier/Missions/Merchant03/Merchant03", 15, 1, 311, 2, "$/content/scripting/gringo/SimpleGringo/Merchant_Camp03", -3139,685f, 43,933f, 3757,126f, 0x40200000);
		Function_417(&Global_3422, 17, 0, "$/content/Frontier/Missions/Merchant04/Merchant04", 16, 1, 311, 2, "$/content/scripting/gringo/SimpleGringo/Merchant_Camp04", -4327,433f, 22,952f, 2727,702f, 0x40200000);
		Function_416(&Global_3422, 18, 0, "$/content/Frontier/Missions/Outlaw01/Outlaw01", 15, 1, 308, 0, "$/content/scripting/gringo/SimpleGringo/Outlaw_Camp01", -2164,184f, 16,436f, 2571,01f, FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_Outlaw01"), -2164,184f, 16,436f, 2571,01f);
		Function_416(&Global_3422, 19, 0, "$/content/Frontier/Missions/Outlaw02/Outlaw02", 18, 1, 308, 0, "$/content/scripting/gringo/SimpleGringo/Outlaw_Camp02", -3671,614f, 8,197f, 3491,559f, FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_Outlaw02"), -3671,614f, 8,197f, 3491,559f);
		Function_416(&Global_3422, 20, 0, "$/content/Frontier/Missions/Outlaw03/Outlaw03", 19, 1, 308, 0, "$/content/scripting/gringo/SimpleGringo/Outlaw_Camp03", 170,441f, 73,691f, 2219,25f, FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_Outlaw03"), 175,211f, 74,677f, 2223,336f);
		Function_417(&Global_3422, 22, 0, "$/content/Frontier/Missions/Ranch04/Ranch04", 7, 1, 300, 3, "", -846,457f, 91,754f, 2391,903f, (2,5f + 2.0f));
		Function_417(&Global_3422, 23, 0, "$/content/Frontier/Missions/Marshal03/Marshal03", 22, 1, 304, 4, "$/content/scripting/gringo/SimpleGringo/Marshal_Camp03", -2091,528f, 16,75f, 2606,137f, 0x40200000);
		Function_417(&Global_3422, 24, 0, "$/content/Frontier/Missions/Fort01/Fort01", 23, 1, 304, 4, "", -2744,267f, 79,1f, 3600,36f, 0x40200000);
		Function_414(&Global_3422, 11, 5);
		Function_414(&Global_3422, 21, 10);
		Function_414(&Global_3422, 12, 6);
		Function_414(&Global_3422, 22, 21);
		Function_414(&Global_3422, 24, 20);
		Function_414(&Global_3422, 24, 14);
		Function_414(&Global_3422, 24, 17);
		Function_413(&Global_3422, 4, 15);
		Function_413(&Global_3422, 3, 31);
		Function_413(&Global_3422, 6, 31);
		Function_413(&Global_3422, 5, 15);
		Function_413(&Global_3422, 11, 31);
		Function_413(&Global_3422, 16, 31);
		Function_413(&Global_3422, 17, 31);
		Function_413(&Global_3422, 15, 31);
		Function_412(&Global_3422, 6, 1, 1);
		Function_412(&Global_3422, 11, 6, 0);
		Function_412(&Global_3422, 13, 1, 1);
		Function_412(&Global_3422, 24, 1, 1);
		Function_411(&Global_3422, 7, 16384);
		Function_222(&Global_3422[340] + 128, 16);
		Function_222(&Global_3422[840] + 128, 16);
		Function_222(&Global_3422[1240] + 128, 16);
		Function_222(&Global_3422[1840] + 128, 16);
		Function_222(&Global_3422[1040] + 128, 16);
		Function_416(&Global_3422, 25, 1, "$/content/Frontier/Missions/Fort02/Fort02", 24, 1, 308, 0, "$/content/scripting/gringo/SimpleGringo/Fort_Camp02", -479,224f, 19,96f, 3033,177f, FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_Fort02"), -482,111f, 18,737f, 3039,058f);
		Function_416(&Global_3422, 26, 1, "$/content/Mexico/Missions/MexArmy02/MexArmy02", 25, 1, 306, 6, "$/content/scripting/gringo/SimpleGringo/MexArmy_Camp02", -4385,229f, 38,64f, 4367,098f, FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_MexArmy02"), -4378,667f, 38,704f, 4360,914f);
		Function_416(&Global_3422, 27, 1, "$/content/Mexico/Missions/MexArmy01/MexArmy01", 26, 1, 306, 6, "", -4348,291f, 42,022f, 4346,203f, FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_MexArmy01"), -4348,291f, 42,022f, 4346,203f);
		Function_416(&Global_3422, 28, 1, "$/content/Mexico/Missions/MexArmy03/MexArmy03", 27, 1, 306, 6, "", -4383,459f, 38,681f, 4367,18f, FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_MexArmy03"), -4356,495f, 44,261f, 4342,515f);
		Function_416(&Global_3422, 29, 1, "$/content/Mexico/Missions/MexArmy04/MexArmy04", 28, 1, 306, 6, "$/content/scripting/gringo/SimpleGringo/MexArmy_Camp04", -4364,575f, 41,96442f, 4313,936f, FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_MexArmy04"), -4364,575f, 41,96442f, 4313,936f);
		Function_416(&Global_3422, 30, 1, "$/content/Mexico/Missions/Gun01/Gun01", 25, 1, 301, 5, "$/content/scripting/gringo/SimpleGringo/Gun_Camp01", -2695,355f, 31,217f, 4273,366f, FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_Gun01"), -2695,355f, 31,217f, 4273,366f);
		Function_416(&Global_3422, 32, 1, "$/content/Mexico/Missions/Gun03/Gun03", 30, 1, 301, 5, "$/content/scripting/gringo/SimpleGringo/Gun_Camp03", -2695,095f, 32,345f, 4286,654f, FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_Gun02"), -2694,746f, 32,158f, 4286,793f);
		Function_416(&Global_3422, 31, 1, "$/content/Mexico/Missions/Gun05/Gun05", 32, 1, 301, 5, "$/content/scripting/gringo/SimpleGringo/Gun_Camp05", -2695,355f, 31,217f, 4273,366f, FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_Gun05"), -2695,355f, 31,217f, 4273,366f);
		Function_416(&Global_3422, 33, 1, "$/content/Mexico/Missions/Gun02/Gun02", 31, 1, 301, 5, "$/content/scripting/gringo/SimpleGringo/Gun_Camp02", -2695,095f, 32,345f, 4286,654f, FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_Gun02"), -2694,746f, 32,158f, 4286,793f);
		Function_416(&Global_3422, 34, 1, "$/content/Mexico/Missions/MexGirl01/MexGirl01", 32, 1, 305, 8, "$/content/scripting/gringo/SimpleGringo/MexGirl_Camp01", -2146,062f, 18,239f, 4960,64f, FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_MexGirl"), -2146,062f, 18,239f, 4960,64f);
		Function_416(&Global_3422, 35, 1, "$/content/mexico/missions/mexgirl03/mexgirl03", 34, 1, 305, 8, "$/content/scripting/gringo/SimpleGringo/MexGirl_Camp03", -2146,062f, 18,239f, 4960,64f, FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_MexGirl"), -2146,062f, 18,239f, 4960,64f);
		Function_416(&Global_3422, 36, 1, "$/content/Mexico/Missions/MexArmy05/MexArmy05", 35, 1, 306, 6, "$/content/scripting/gringo/SimpleGringo/MexArmy_Camp05", -4364,587f, 39,488f, 4353,933f, FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_MexArmy05"), -4356,495f, 44,261f, 4342,515f);
		Function_416(&Global_3422, 37, 1, "$/content/Mexico/Missions/Rebel03/Rebel03", 36, 1, 310, 7, "$/content/scripting/gringo/SimpleGringo/Rebel_Camp03", -1477,918f, 16,75f, 3941,318f, FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_Rebel03"), -1465,541f, 16,54457f, 3946,458f);
		Function_416(&Global_3422, 38, 1, "$/content/Mexico/Missions/Rebel04/Rebel04", 36, 1, 305, 8, "$/content/scripting/gringo/SimpleGringo/Rebel_Camp04", -2221,41f, 18,668f, 4895,687f, FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_Rebel04"), -2221,41f, 18,668f, 4895,687f);
		Function_416(&Global_3422, 39, 1, "$/content/Mexico/Missions/Rebel02/Rebel02", 38, 1, 305, 8, "$/content/scripting/gringo/SimpleGringo/Rebel_Camp02", -2281,418f, 22,76f, 4946,628f, FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_Rebel02"), -2287,62f, 22,76f, 4958,25f);
		Function_417(&Global_3422, 40, 1, "$/content/Mexico/Missions/Rebel06/Rebel06", 39, 1, 310, 7, "", -1514,001f, 17,441f, 3906,868f, 0x40200000);
		Function_417(&Global_3422, 41, 1, "$/content/Mexico/Missions/Rebel05/Rebel05", 40, 1, 310, 7, "", -4340,172f, 27,215f, 4413,33f, 0x40200000);
		Function_414(&Global_3422, 34, 26);
		Function_414(&Global_3422, 36, 29);
		Function_414(&Global_3422, 40, 37);
		Function_414(&Global_3422, 40, 33);
		Function_413(&Global_3422, 27, 30);
		Function_413(&Global_3422, 28, 30);
		Function_413(&Global_3422, 29, 14);
		Function_413(&Global_3422, 36, 30);
		Function_413(&Global_3422, 32, 30);
		Function_413(&Global_3422, 31, 30);
		Function_413(&Global_3422, 34, 7);
		Function_411(&Global_3422, 25, 32768);
		Function_410(&Global_3422, 25);
		Function_417(&Global_3422, 42, 2, "$/content/North/Missions/FBI05/FBI05", 41, 1, 302, 10, "", 756,675f, 79,004f, 1234,998f, 4.0f);
		Function_417(&Global_3422, 43, 2, "$/content/North/Missions/Fbi01/Fbi01", 42, 1, 302, 10, "", 756,675f, 79,004f, 1234,998f, 4.0f);
		Function_417(&Global_3422, 44, 2, "$/content/North/Missions/Native03/Native03", 42, 1, 299, 9, "", 745,322f, 78,456f, 1276,929f, 0x40200000);
		Function_417(&Global_3422, 45, 2, "$/content/North/Missions/Anthro01/Anthro01", 44, 1, 299, 9, "", 745,322f, 78,456f, 1276,929f, 0x40200000);
		Function_417(&Global_3422, 46, 2, "$/content/North/Missions/Anthro03/Anthro03", 45, 1, 299, 9, "", 742,555f, 78,425f, 1272,168f, 0x40200000);
		Function_417(&Global_3422, 47, 2, "$/content/North/Missions/Fbi02/Fbi02", 43, 1, 302, 10, "", 756,139f, 78,525f, 1234,983f, 0x40200000);
		Function_415(&Global_3422, 48, 2, "$/content/North/Missions/FBI04/FBI04", 47, 1, -309,2459f, 141,4889f, 1696,795f);
		Function_414(&Global_3422, 47, 46);
		Function_413(&Global_3422, 43, 30);
		Function_413(&Global_3422, 47, 30);
		Function_413(&Global_3422, 48, 30);
		Function_413(&Global_3422, 42, 30);
		Function_413(&Global_3422, 45, 30);
		Function_413(&Global_3422, 46, 48);
		Function_413(&Global_3422, 44, 30);
		Function_416(&Global_3422, 49, 3, "$/content/North/Missions/Home01/Home01", 48, 1, 314, 11, "", -113,859f, 118,869f, 1387,897f, FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_Home01"), -113,859f, 118,869f, 1387,897f);
		Function_416(&Global_3422, 55, 3, "$/content/North/Missions/Home02/Home02_Ranch01/Home02_Ranch01", 49, 1, 312, 13, "$/content/scripting/gringo/SimpleGringo/Home02Ranch_Camp01", -80,491f, 117,248f, 1395,851f, FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_Home02Ranch01"), -76,984f, 116,861f, 1395,305f);
		Function_416(&Global_3422, 56, 3, "$/content/North/Missions/Home02/Home02_Ranch03/Home02_Ranch03", 55, 1, 312, 13, "$/content/scripting/gringo/SimpleGringo/Home02Ranch_Camp03", -5,259f, 130,659f, 1445,75f, FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_Home02Ranch03"), -5,259f, 130,659f, 1445,75f);
		Function_417(&Global_3422, 50, 3, "$/content/North/Missions/Home02/Home02_Wife02/Home02_Wife02", 49, 1, 314, 11, "$/content/scripting/gringo/SimpleGringo/Home02Wife_Camp02", -111,359f, 119,489f, 1369,446f, 0x40200000);
		Function_417(&Global_3422, 51, 3, "$/content/North/Missions/Home02/Home02_Wife03/Home02_Wife03", 50, 1, 314, 11, "$/content/scripting/gringo/SimpleGringo/Home02Wife_Camp03", -116,472f, 119,446f, 1374,421f, 0x40200000);
		Function_416(&Global_3422, 52, 3, "$/content/North/Missions/Home02/Home02_Son01/Home02_Son01", 49, 1, 313, 12, "$/content/scripting/gringo/SimpleGringo/Home02Son_Camp01", -61,155f, 116,688f, 1385,995f, FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_Home02Son01"), -57,72f, 116,695f, 1391,078f);
		Function_416(&Global_3422, 53, 3, "$/content/North/Missions/Home02/Home02_Son02/Home02_Son02", 52, 1, 313, 12, "$/content/scripting/gringo/SimpleGringo/Home02Son_Camp02", -101,336f, 117,748f, 1404,77f, FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_Home02Son02"), -99,05f, 118,72f, 1405,5f);
		Function_417(&Global_3422, 54, 3, "$/content/North/Missions/Home02/Home02_Son03/Home02_Son03", 53, 1, 313, 12, "", -71,003f, 117,865f, 1380,745f, 0x40200000);
		Function_417(&Global_3422, 57, 3, "$/content/North/Missions/Home03/Home03", 56, 1, 313, 12, "$/content/scripting/gringo/SimpleGringo/Home_Camp03", -73,952f, 116,861f, 1407,201f, 0x40200000);
		Function_414(&Global_3422, 57, 51);
		Function_414(&Global_3422, 57, 54);
		Function_413(&Global_3422, 55, 12);
		Function_413(&Global_3422, 56, 15);
		Function_413(&Global_3422, 52, 15);
		Function_413(&Global_3422, 53, 15);
		Function_413(&Global_3422, 54, 15);
		Function_413(&Global_3422, 50, 15);
		Function_413(&Global_3422, 51, 15);
		Function_413(&Global_3422, 57, 15);
		Function_411(&Global_3422, 52, 65536);
		Function_222(&Global_3422[4940] + 128, 16);
		Function_412(&Global_3422, 55, 3, 1);
		Function_412(&Global_3422, 54, 3, 1);
		Function_409(&Global_3422, 55);
		Function_409(&Global_3422, 56);
		Function_409(&Global_3422, 52);
		Function_409(&Global_3422, 53);
		Function_409(&Global_3422, 50);
		Function_409(&Global_3422, 51);
		Function_409(&Global_3422, 57);
	}
	if (Global_3381)
	{
		Function_377(Global_6267, 1);
		Function_372(0);
	}
	else
	{
		bVar0 = Function_370();
		if (bVar0 != 4294967295)
		{
			if (Function_82(bVar0))
			{
				Function_289(25, &Global_3422[bVar040] + 12, 0, 1);
				Function_291(25, bVar0, 0);
				Function_311(10, 1, 0, 0);
			}
		}
		else
		{
			bVar0 = Function_175(25);
			if (Function_82(bVar0))
			{
				Function_289(25, &Global_3422[bVar040] + 12, 0, 1);
			}
			else
			{
				Function_289(25, "fav_non", 0, 1);
			}
		}
		bVar0 = Function_175(18);
		if (Function_82(bVar0))
		{
			Function_289(18, &Global_3422[bVar040] + 12, 0, 1);
		}
		else
		{
			Function_289(18, "fav_non", 0, 1);
		}
		bVar0 = Function_175(24);
		if (Function_82(bVar0))
		{
			Function_289(24, &Global_3422[bVar040] + 12, 0, 1);
		}
		else
		{
			Function_289(24, "fav_non", 0, 1);
		}
		Function_368();
	}
	Function_367();
	ENABLE_JOURNAL_REPLAY(1);
	Global_3374 = 1;
	return;
}

void Function_367() //Position: 0x15D32 / 89394
{
	int iVar0;
	
	if (Function_1())
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= Global_26003)
	{
		if (!Global_26003[iVar0])
		{
			switch (iVar0)
			{
				case 0x00000000:
					if (Function_100(25, 0))
					{
						Global_26003[iVar0] = 1;
						DISABLE_WORLD_SECTOR("ramitaBayaBefore");
						ENABLE_WORLD_SECTOR("ramitaBayaAfter");
						ENABLE_CURVE("rsdROAD_frb_road", true);
						ENABLE_CURVE("rsdROAD_fom_frb_road", true);
						ENABLE_CURVE("rsdGPSTRAIL_curve221", true);
					}
					break;
				
				case 0x00000001:
					if (Function_100(25, 0) && !Function_100(26, 0))
					{
						Global_26003[iVar0] = 1;
						DISABLE_WORLD_SECTOR("butterBridgeA");
						DISABLE_WORLD_SECTOR("butterBridgeC");
						DISABLE_WORLD_SECTOR("butterBridgeD");
						ENABLE_WORLD_SECTOR("butterBridgeB");
						ENABLE_CURVE("rsdGPSTRAIL_butterBridge_path", true);
					}
					break;
				
				case 0x00000002:
					if ((Function_100(25, 0) && Function_100(26, 0)) && !Function_100(29, 0))
					{
						Global_26003[iVar0] = 1;
						DISABLE_WORLD_SECTOR("butterBridgeB");
						DISABLE_WORLD_SECTOR("butterBridgeA");
						DISABLE_WORLD_SECTOR("butterBridgeC");
						ENABLE_WORLD_SECTOR("butterBridgeD");
						ENABLE_CURVE("rsdGPSTRAIL_butterBridge_path", false);
					}
					break;
				
				case 0x00000003:
					if ((Function_100(25, 0) && Function_100(26, 0)) && Function_100(29, 0))
					{
						Global_26003[iVar0] = 1;
						DISABLE_WORLD_SECTOR("butterBridgeA");
						DISABLE_WORLD_SECTOR("butterBridgeD");
						DISABLE_WORLD_SECTOR("butterBridgeC");
						ENABLE_WORLD_SECTOR("butterBridgeB");
						ENABLE_CURVE("rsdGPSTRAIL_butterBridge_path", true);
					}
					break;
				
				case 0x00000004:
					if (Function_100(41, 0))
					{
						Global_26003[iVar0] = 1;
						DISABLE_WORLD_SECTOR("tannersSpanBefore");
						ENABLE_WORLD_SECTOR("tannersSpanAfter");
					}
					break;
				
				case 0x00000005:
					if (Function_100(41, 0))
					{
						Global_26003[iVar0] = 1;
						DISABLE_WORLD_SECTOR("dixonCrossingBefore");
						ENABLE_WORLD_SECTOR("dixonCrossingAfter");
						ENABLE_CURVE("rsdROAD_thi_blk_road", true);
						ENABLE_CURVE("rsdROAD_thi_blk_roaddetachedCurve2", true);
						ENABLE_CURVE("rsdGPSTRAIL_curve124", true);
						ENABLE_CURVE("rsdGPSTRAIL_curve132", true);
					}
					break;
				
				case 0x00000006:
					if (Function_100(22, 0) && !Function_100(41, 0))
					{
						Global_26003[iVar0] = 1;
						DISABLE_CHILD_SECTOR("hen_barn01x");
						DISABLE_CHILD_SECTOR("hen_barn01props01x");
						DISABLE_CHILD_SECTOR("hen_barn01props02x");
						ENABLE_CHILD_SECTOR("hen_barn02x");
						ENABLE_CHILD_SECTOR("hen_barn02props01x");
					}
					break;
				
				case 0x00000007:
					if (Function_100(22, 0) && Function_100(41, 0))
					{
						Global_26003[iVar0] = 1;
						ENABLE_CHILD_SECTOR("hen_barn01x");
						ENABLE_CHILD_SECTOR("hen_barn01props01x");
						ENABLE_CHILD_SECTOR("hen_barn01props02x");
						DISABLE_CHILD_SECTOR("hen_barn02x");
						DISABLE_CHILD_SECTOR("hen_barn02props01x");
					}
					break;
				
				case 0x00000008:
					if (Function_100(34, 0))
					{
						Global_26003[iVar0] = 1;
						DISABLE_WORLD_SECTOR("campoMiradaBefore");
						ENABLE_WORLD_SECTOR("campoMiradaAfter");
					}
					break;
				
				case 0x00000009:
					if (Function_100(26, 0) || Function_100(30, 0))
					{
						Global_26003[iVar0] = 1;
						DISABLE_WORLD_SECTOR("fronteraBridgeBefore");
						ENABLE_WORLD_SECTOR("fronteraBridgeAfter");
					}
					break;
				
				case 0x0000000A:
					if (Function_100(40, 0))
					{
						Global_26003[iVar0] = 1;
						DISABLE_CHILD_SECTOR("fod_gates01x");
						ENABLE_CHILD_SECTOR("fod_gates02x");
						ENABLE_CHILD_SECTOR("fod_gates02Doors01x");
					}
					break;
				
				case 0x0000000B:
					if (Function_100(48, 0))
					{
						Global_26003[iVar0] = 1;
						DISABLE_CHILD_SECTOR("coc_fence01x");
						ENABLE_CHILD_SECTOR("coc_fence01bx");
						ENABLE_CHILD_SECTOR("coc_gates02x");
						DISABLE_CHILD_SECTOR("coc_gates01x");
					}
					break;
				
				case 0x0000000C:
					if (Function_100(41, 0))
					{
						Global_26003[iVar0] = 1;
						DISABLE_WORLD_SECTOR("masonBridgeBefore");
						ENABLE_WORLD_SECTOR("masonBridgeAfter");
					}
					break;
				
				case 0x0000000D:
					if (Function_100(41, 0))
					{
						Global_26003[iVar0] = 1;
						DISABLE_CHILD_SECTOR("lmf_troughBefore01x");
						ENABLE_CHILD_SECTOR("lmf_troughAfter01x");
					}
					break;
				
				case 0x0000000E:
					break;
				
				case 0x0000000F:
					if (Function_100(21, 0))
					{
						Global_26003[iVar0] = 1;
						DISABLE_CHILD_SECTOR("rwf_barn01xprops02x");
						ENABLE_CHILD_SECTOR("rwf_barn01xprops01x");
					}
					break;
				
				case 0x00000010:
					if (Function_100(57, 0) || Function_78(57))
					{
						Global_26003[iVar0] = 1;
						DISABLE_CHILD_SECTOR("beh_silo02x");
						ENABLE_CHILD_SECTOR("beh_silo01x");
					}
					break;
				
				case 0x00000011:
					if (Function_100(48, 0))
					{
						Global_26003[iVar0] = 1;
						DISABLE_CHILD_SECTOR("beh_house02x");
						DISABLE_CHILD_SECTOR("beh_house02props01x");
						ENABLE_CHILD_SECTOR("beh_house01x");
						ENABLE_CHILD_SECTOR("beh_house01props01x");
					}
					break;
				
				case 0x00000012:
					if (Function_100(28, 0))
					{
						Global_26003[iVar0] = 1;
						DISABLE_CHILD_SECTOR("tor_militaryCamp01x");
						ENABLE_CHILD_SECTOR("tor_militaryCamp02x");
					}
					break;
				
				case 0x00000013:
					if (Function_100(41, 0))
					{
						Global_26003[iVar0] = 1;
						DISABLE_CHILD_SECTOR("esc_villaWall04x");
						ENABLE_CHILD_SECTOR("esc_villaWall05x");
					}
					break;
				
				case 0x00000014:
					if (Function_112(37))
					{
						Global_26003[iVar0] = 1;
						ENABLE_CHILD_SECTOR("icarus");
					}
					break;
				
				case 0x00000015:
					break;
				
				case 0x00000016:
					break;
				
				case 0x00000017:
					if (Function_100(57, 0))
					{
						Global_26003[iVar0] = 1;
						ENABLE_CHILD_SECTOR("beh_grave02x");
						ENABLE_CHILD_SECTOR("beh_grave03x");
						DISABLE_CHILD_SECTOR("beh_grave01x");
					}
					break;
				
				case 0x00000018:
					if (Function_100(25, 0))
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
					}
					break;
				
				case 0x00000019:
					if (Function_100(32, 0))
					{
						Global_26003[iVar0] = 1;
						ENABLE_CHILD_SECTOR("emt_caveDoor02x");
						DISABLE_CHILD_SECTOR("emt_caveDoor01x");
					}
					break;
				
				case 0x0000001A:
					if (Function_100(20, 0))
					{
						Global_26003[iVar0] = 1;
						ENABLE_CHILD_SECTOR("thi_window02x");
						DISABLE_CHILD_SECTOR("thi_window01x");
					}
					break;
				
				default:
					LOG_ERROR("world state error");
					break;
				}
		}
		iVar0++;
	}
	return;
}

void Function_368() //Position: 0x174E3 / 95459
{
	int iVar0;
	int iVar1;
	
	if (!Function_82(Global_6269))
	{
		return;
	}
	iVar0 = Function_175(24);
	iVar1 = Function_81(Global_6269);
	if (!Function_82(iVar0) && Function_369(iVar1) < 0)
	{
		Function_291(24, Global_6269, 0);
		Function_289(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	else if (StackVal <= Function_369(Function_81(iVar0)))
	{
		Function_291(24, Global_6269, 0);
		Function_289(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	return;
}

int Function_369(int iParam0) //Position: 0x17563 / 95587
{
	if (!Function_79(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

var Function_370() //Position: 0x1757D / 95613
{
	struct<145> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	iVar44 = Var0.f_136;
	Function_291(11, Var0.f_140, 0);
	Function_371(Function_81(Global_6269), Var0.f_144);
	if (iVar44 != 4294967295)
	{
	}
	return iVar44;
}

void Function_371(int iParam0, int iParam1) //Position: 0x175BA / 95674
{
	if (!Function_79(iParam0))
	{
		return;
	}
	Global_13172[iParam011].f_8 = iParam1;
	return;
}

void Function_372(bool bParam0) //Position: 0x175D5 / 95701
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	struct<8> Var3;
	struct<8> Var11;
	
	iVar0 = 0;
	while (iVar0 <= Global_25986)
	{
		if ((!Global_25986[iVar0] && (!bParam0 || !Function_195())) && !bVar1)
		{
			switch (iVar0)
			{
				case 0x00000000:
					if (Function_100(2, 0))
					{
						bVar1 = false;
						Global_25986[iVar0] = 1;
						SET_DISABLE_DEADEYE(0, 0);
						SET_DEADEYE_MULTILOCK_ENABLE(0, false);
						SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
						Function_376(390, 3.0f);
						Function_291(390, 1, bParam0);
					}
					break;
				
				case 0x00000001:
					if (Function_100(11, 0))
					{
						bVar1 = false;
						Global_25986[iVar0] = 1;
						SET_DISABLE_DEADEYE(0, 0);
						SET_DEADEYE_MULTILOCK_ENABLE(0, true);
						SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
						Function_376(390, 3.0f);
						Function_291(390, 2, bParam0);
					}
					break;
				
				case 0x00000002:
					if (Function_100(30, 0))
					{
						bVar1 = false;
						Global_25986[iVar0] = 1;
						SET_DISABLE_DEADEYE(0, 0);
						SET_DEADEYE_MULTILOCK_ENABLE(0, true);
						SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
						Function_376(390, 3.0f);
						Function_291(390, 3, bParam0);
					}
					break;
				
				case 0x00000003:
					Global_25986[iVar0] = 1;
					break;
				
				case 0x00000004:
					if (Function_100(4, 0))
					{
						Global_25986[iVar0] = 1;
						bVar1 = true;
						strcpy(&Var3, "taxi_coach", 32);
					}
					break;
				
				case 0x00000005:
					Global_25986[iVar0] = 1;
					break;
				
				case 0x00000009:
					if (Function_100(2, 0))
					{
						Global_25986[iVar0] = 1;
						bVar1 = true;
						bVar2 = true;
						strcpy(&Var3, "shop_feature_1", 32);
						strcpy(&Var11, "shop_feature_2", 32);
					}
					break;
				
				case 0x00000006:
					if (Function_100(2, 0))
					{
						Global_25986[iVar0] = 1;
						bVar1 = false;
					}
					break;
				
				case 0x00000007:
					if (Function_100(2, 0))
					{
						Global_25986[iVar0] = 1;
						bVar1 = false;
					}
					break;
				
				case 0x00000008:
					if (Function_100(37, 0))
					{
						Global_25986[iVar0] = 1;
					}
					break;
				
				case 0x0000000A:
					if (Function_100(2, 0) && !Function_375("npressDemo"))
					{
						Global_25986[iVar0] = 1;
						bVar1 = false;
					}
					break;
				
				case 0x0000000B:
					if (Function_100(4, 0))
					{
						Global_25986[iVar0] = 1;
						bVar1 = true;
						bVar2 = true;
						strcpy(&Var3, "house_feature_1", 32);
						strcpy(&Var11, "house_feature_2", 32);
					}
					break;
				
				case 0x0000000C:
					if (!Function_78(1))
					{
						Function_374(1);
						Global_25986[iVar0] = 1;
					}
					else
					{
						Function_374(0);
						Global_25986[iVar0] = 0;
					}
					break;
				
				case 0x0000000D:
					if (Function_373(0) == 10)
					{
						Global_25986[iVar0] = 1;
						bVar1 = true;
						strcpy(&Var3, "nAM_SS_RW2", 32);
						SET_DEADEYE_POINT_MODIFIER(0, 2.0f);
					}
					break;
				
				case 0x0000000E:
					if (Function_373(1) > 5)
					{
						Global_25986[iVar0] = 1;
						bVar1 = true;
						strcpy(&Var3, "nAM_MH_RW1", 32);
						SET_WEAPONENUM_LOCKED(14, 0);
						Function_322(14, 1);
					}
					break;
				
				case 0x0000000F:
					if (((Function_373(0) != 10 && Function_373(1) != 10) && Function_373(2) != 10) && Function_373(3) != 10)
					{
						Global_25986[iVar0] = 1;
						bVar1 = true;
						strcpy(&Var3, "AM_LOTW_RW1", 32);
						SET_MAX_DEADEYE_POINTS(0, 150.0f);
						Function_307(11, 0, 1);
					}
					break;
				
				default:
					LOG_ERROR("Found a FeatureType that is not enabled for unlocking");
					break;
			}
			if (bVar1 && !bParam0)
			{
				bVar1 = false;
			}
		}
		iVar0++;
	}
	if (bVar1 && bParam0)
	{
		stradd(&Var3, "_help", 32);
		Function_13(&Var3, 0x41200000, 1, 0, 2, 1, 0);
		if (bVar2)
		{
			stradd(&Var11, "_help", 32);
			Function_13(&Var11, 0x41200000, 1, 0, 2, 1, 0);
		}
	}
	return;
}

int Function_373(int iParam0) //Position: 0x179A5 / 96677
{
	if (Function_1() || Global_34165.f_44)
	{
		return StackVal;
	}
	return StackVal;
}

void Function_374(bool bParam0) //Position: 0x179CD / 96717
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

bool Function_375(bool bParam0) //Position: 0x17A41 / 96833
{
	bool bVar0;
	
	bVar0 = _GET_PARAM_VALUE(cParam0, "blah");
	if (IS_STRING_VALID(bVar0))
	{
		return 1;
	}
	return 0;
}

int Function_376(int iParam0, int iParam1) //Position: 0x17A60 / 96864
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_64 = iParam1;
	return 1;
}

void Function_377(int iParam0, bool bParam1) //Position: 0x17AA0 / 96928
{
	if (!bParam1)
	{
		Global_13172[411].f_4 = StackVal;
	}
	if (Global_3422[iParam040].f_132 != 4294967295)
	{
		if (!Function_100(Global_3422[iParam040].f_132, 0))
		{
			Function_377(Global_3422[iParam040].f_132, 0);
		}
	}
	if (Global_3422[iParam040].f_136 != 4294967295)
	{
		if (!Function_100(Global_3422[iParam040].f_136, 0))
		{
			Function_377(Global_3422[iParam040].f_136, 0);
		}
	}
	if (Global_3422[iParam040].f_140 != 4294967295)
	{
		if (!Function_100(Global_3422[iParam040].f_140, 0))
		{
			Function_377(Global_3422[iParam040].f_140, 0);
		}
	}
	if (Global_3422[iParam040].f_144 != 4294967295)
	{
		if (!Function_100(Global_3422[iParam040].f_144, 0))
		{
			Function_377(Global_3422[iParam040].f_144, 0);
		}
	}
	if (!bParam1)
	{
		Global_13172[011].f_4 = StackVal;
		Function_378(StackVal, 0, 0, 1, 0);
	}
	return;
}

void Function_378(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4) //Position: 0x17B90 / 97168
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	
	Function_408(12);
	Function_240(2);
	Function_238((15 - Function_239(105)));
	if (Function_3(bParam0) == 1)
	{
		bVar2 = Function_342(bParam0);
		Function_340(&(Global_3422[bVar240]));
		Function_407(4194304);
		if (bParam3)
		{
			Function_304(bVar2, &uVar0, 0);
			if (!Global_3379)
			{
				Function_402(bVar2);
			}
		}
		else if (bParam4)
		{
			Function_304(bVar2, &uVar0, 0);
		}
		bVar1 = Function_401();
		if (bParam1)
		{
			Function_387(bVar2, bParam0, bVar1);
			Function_386();
		}
	}
	Function_381(bParam0, bParam1, uParam2, bVar1);
	if (Function_3(bParam0) == 1)
	{
		if (bParam1)
		{
			if (!Global_3381)
			{
				Function_380(bVar2, bVar1);
			}
		}
	}
	if ((!HAS_ACHIEVEMENT_BEEN_PASSED(33) && bParam1) && !bVar1)
	{
		if (Function_3(bParam0) == 1)
		{
			bVar2 = Function_342(bParam0);
			if (bVar2 != 1)
			{
				(&Global_12976 + 36)->f_32++;
				if ((&Global_12976 + 36)->f_32 > 20)
				{
					AWARD_ACHIEVEMENT(33);
				}
			}
		}
	}
	Function_379();
}

void Function_379() //Position: 0x17C7D / 97405
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 41)
	{
		AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(StackVal, Function_100(Global_63315[iVar02], 0));
		iVar0++;
	}
	return;
}

void Function_380(int iParam0, bool bParam1) //Position: 0x17CAD / 97453
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		return;
	}
	iVar0 = 4294967295;
	switch (iParam0)
	{
		case 0x00000001:
			iVar0 = 1;
			break;
		
		case 0x00000018:
			iVar0 = 2;
			iVar1 = 0;
			while (iVar1 <= Global_3422)
			{
				if (iVar1 <= 2 && iVar1 >= 24)
				{
					if (StackVal != 3)
					{
						iVar0 = 4294967295;
						if (StackVal == 4)
						{
							Function_38(Global_34573, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0x00000028:
			iVar0 = 3;
			iVar1 = 0;
			while (iVar1 <= Global_3422)
			{
				if (iVar1 <= 25 && iVar1 >= 40)
				{
					if (StackVal != 3)
					{
						iVar0 = 4294967295;
						if (StackVal == 4)
						{
							Function_38(Global_34573, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0x00000029:
			iVar0 = 4;
			iVar1 = 0;
			while (iVar1 <= Global_3422)
			{
				if (iVar1 <= 25 && iVar1 >= 41)
				{
					if (StackVal != 3)
					{
						iVar0 = 4294967295;
						if (StackVal == 4)
						{
							Function_38(Global_34573, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0x0000002C:
			iVar0 = 5;
			iVar1 = 0;
			while (iVar1 <= Global_3422)
			{
				if (iVar1 != 42 || iVar1 != 44)
				{
					if (StackVal != 3)
					{
						iVar0 = 4294967295;
						if (StackVal == 4)
						{
							Function_38(Global_34573, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0x00000030:
			iVar0 = 6;
			iVar1 = 0;
			while (iVar1 <= Global_3422)
			{
				if (iVar1 <= 42 && iVar1 >= 48)
				{
					if (StackVal != 3)
					{
						iVar0 = 4294967295;
						if (StackVal == 4)
						{
							Function_38(Global_34573, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0x00000039:
			iVar0 = 7;
			iVar1 = 0;
			while (iVar1 <= Global_3422)
			{
				if (iVar1 <= 49 && iVar1 >= 57)
				{
					if (StackVal != 3)
					{
						iVar0 = 4294967295;
						if (StackVal == 4)
						{
							Function_38(Global_34573, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0xFFFFFFFF:
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(2))
			{
				Function_380(24, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(3))
			{
				Function_380(40, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(4))
			{
				Function_380(41, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(5))
			{
				Function_380(44, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(6))
			{
				Function_380(24, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(7))
			{
				Function_380(57, 0);
			}
			break;
	}
	if (iVar0 != 4294967295)
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(iVar0))
		{
			AWARD_ACHIEVEMENT(iVar0);
		}
	}
	return;
}

void Function_381(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x17FA4 / 98212
{
	int iVar0;
	struct<6> Var1;
	struct<4> Var7;
	bool bVar11;
	int iVar12;
	int iVar13;
	struct<25> Var14;
	
	if (!Function_79(bParam0))
	{
		Function_278();
		return;
	}
	iVar0 = Function_3(bParam0);
	if (!iVar0 != 1)
	{
		Global_13172[bParam011].f_12++;
	}
	else
	{
		Global_6269 = Function_342(bParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_244(Global_6269) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_243(Global_6269) };
		}
		bVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		Function_368();
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
		Function_277("DEED_COMPLETE", bParam0);
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
			Function_383(bParam0);
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
						switch (Function_342(bParam0))
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
			Function_245(1);
			Function_309(bParam2, iVar13);
		}
	}
	if (Global_3381 && bParam1)
	{
		*(&Var14 + 80) = 3;
		Var14.f_16 = 0;
		if (!bParam3)
		{
			Function_382(bParam0, &Var14);
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

void Function_382(int iParam0, int iParam1) //Position: 0x181B7 / 98743
{
	iParam1->f_28 = Global_13172[iParam011].f_20;
	iParam1->f_32 = Global_13172[iParam011].f_24;
	iParam1->f_36 = Global_13172[iParam011].f_28;
	iParam1->f_40 = Global_13172[iParam011].f_32;
	return;
}

void Function_383(bool bParam0) //Position: 0x181F1 / 98801
{
	bool bVar0;
	bool bVar1;
	
	if (!Function_4(bParam0))
	{
		return;
	}
	switch (Function_3(bParam0))
	{
		case 0x00000001:
			bVar1 = Function_342(bParam0);
			if (bVar1 <= 1 && bVar1 >= 24)
			{
				Function_311(12, 1, 0, 0);
				Function_329(0, (bVar1 - 1));
			}
			else if (bVar1 <= 25 && bVar1 >= 41)
			{
				Function_311(13, 1, 0, 0);
				Function_329(1, (bVar1 - 25));
			}
			else if (bVar1 <= 42 && bVar1 >= 48)
			{
				Function_311(14, 1, 0, 0);
				Function_329(1, (bVar1 - 25));
			}
			else if (bVar1 <= 49 && bVar1 >= 57)
			{
				Function_311(15, 1, 0, 0);
				Function_329(1, (bVar1 - 49));
			}
			if (bVar1 <= 1 && bVar1 >= 57)
			{
				Function_311(9, 1, 0, 0);
			}
			break;
		
		case 0x00000002:
			switch (Function_342(bParam0))
			{
				case 0x00000000:
					if (Function_385(bParam0) == 1)
					{
						bVar0 = Function_384(bParam0);
						if (Function_149(bVar0))
						{
							if (bVar0 == Global_30723[5])
							{
								Function_329(4, 18);
							}
							else if (bVar0 == Global_30693[3])
							{
								Function_329(4, 10);
							}
							else if (bVar0 == Global_30723[6])
							{
								Function_329(4, 16);
							}
							else if (bVar0 == Global_30668[3])
							{
								Function_329(4, 6);
							}
							else if (bVar0 == Global_30640[13])
							{
								Function_329(4, 3);
							}
							else if (bVar0 == Global_30693[7])
							{
								Function_329(4, 11);
							}
							else if (bVar0 == Global_30640[6])
							{
								Function_329(4, 0);
							}
							else if (bVar0 == Global_30693[10])
							{
								Function_329(4, 15);
							}
							else if (bVar0 == Global_30693[8])
							{
								Function_329(4, 14);
							}
							else if (bVar0 == Global_30640[11])
							{
								Function_329(4, 2);
							}
							else if (bVar0 == Global_30668[6])
							{
								Function_329(4, 7);
							}
							else if (bVar0 == Global_30723[3])
							{
								Function_329(4, 17);
							}
							else if (bVar0 == Global_30685[5])
							{
								Function_329(4, 8);
							}
							else if (bVar0 == Global_30693[9])
							{
								Function_329(4, 13);
							}
							else if (bVar0 == Global_30693[11])
							{
								Function_329(4, 12);
							}
							else if (bVar0 == Global_30640[7])
							{
								Function_329(4, 1);
							}
							else if (bVar0 == Global_30679[3])
							{
								Function_329(4, 5);
							}
							else if (bVar0 == Global_30693[4])
							{
								Function_329(4, 9);
							}
							else if (bVar0 == Global_30658[7])
							{
								Function_329(4, 4);
							}
							else if (bVar0 == Global_30723[4])
							{
								Function_329(4, 19);
							}
							if (StackVal == 1)
							{
								bVar0 = bVar0;
							}
							else if (StackVal == 2)
							{
								bVar0 = Global_29155[bVar010];
							}
							else
							{
								bVar0 = Global_29155[bVar010];
								bVar0 = Global_29155[bVar010];
							}
							if (bVar0 == Global_30621[0])
							{
								Function_311(363, 1, 0, 0);
							}
							else if (bVar0 == Global_30621[1])
							{
								Function_311(364, 1, 0, 0);
							}
							else if (bVar0 == Global_30621[2])
							{
								Function_311(365, 1, 0, 0);
							}
						}
					}
					break;
			}
			break;
		
		case 0x00000003:
			if (Function_384(bParam0) == 0)
			{
				if (Function_385(bParam0) == 1)
				{
					Function_311(458, 1, 0, 0);
					bVar0 = Function_342(bParam0);
					if (Function_149(bVar0))
					{
						if (bVar0 == Global_30668[2])
						{
							Function_329(2, 10);
						}
						else if (bVar0 == Global_30658[2])
						{
							Function_329(2, 11);
						}
						else if (bVar0 == Global_30640[2])
						{
							Function_329(2, 12);
						}
						else if (bVar0 == Global_30658[0])
						{
							Function_329(2, 13);
						}
						else if (bVar0 == Global_30658[3])
						{
							Function_329(2, 14);
						}
						else if (bVar0 == Global_30685[2])
						{
							Function_329(2, 15);
						}
						else if (bVar0 == Global_30685[1])
						{
							Function_329(2, 16);
						}
						else if (bVar0 == Global_30679[1])
						{
							Function_329(2, 17);
						}
					}
				}
			}
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000006:
			if (Function_385(bParam0) == 1)
			{
				Function_311(400, 1, 0, 0);
			}
			switch (Function_342(bParam0))
			{
				case 0x00000001:
					Function_311(402, 1, 0, 0);
					if (Global_29006 == Global_30668[0])
					{
						Function_329(6, 5);
					}
					else if (Global_29006 == Global_30693[0])
					{
						Function_329(6, 6);
					}
					else if (Global_29006 == Global_30717[0])
					{
						Function_329(6, 7);
					}
					break;
				
				case 0x00000002:
					Function_311(403, 1, 0, 0);
					if (Global_29006 == Global_30640[1])
					{
						Function_329(6, 8);
					}
					else if (Global_29006 == Global_30693[0])
					{
						Function_329(6, 9);
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

int Function_384(bool bParam0) //Position: 0x186CD / 100045
{
	if (!Function_4(bParam0))
	{
		return 4294967295;
	}
	return SHIFT_RIGHT(Global_13172[bParam011], 4) & 255;
}

int Function_385(bool bParam0) //Position: 0x186EC / 100076
{
	if (!Function_4(bParam0))
	{
		return 4294967295;
	}
	return Global_13172[bParam011].f_12;
}

void Function_386() //Position: 0x18706 / 100102
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	if (Var0.f_72)
	{
	}
	Var0.f_72 = 0;
	STORE_GAME_STATE(&Var0, 44, 1);
	return;
}

void Function_387(bool bParam0, int iParam1, bool bParam2) //Position: 0x18734 / 100148
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	float fVar7;
	bool bVar8;
	bool bVar9;
	char* cVar10[16];
	int iVar14;
	int iVar15;
	struct<4> Var16;
	
	if (!Function_82(bParam0))
	{
		return;
	}
	if (!bParam2)
	{
		iVar14 = Function_288(bParam0);
		Global_34165.f_140 = (Global_34165.f_140 + (GET_CURRENT_GAME_TIME() - Global_34165.f_136));
		if (Global_13172[iParam111].f_32 != 0.0f || Global_34165.f_140 > Global_13172[iParam111].f_32)
		{
			Global_13172[iParam111].f_32 = Global_34165.f_140;
			cVar10 = { StackVal, StackVal, StackVal, Function_286(bParam0) };
			stradd(&cVar10, "_Float2", 16);
			UPDATE_PROFILE_STAT(&cVar10, Global_34165.f_140, 1);
		}
		switch (iVar14)
		{
			case 0x00000000:
				bVar0 = (Function_175(42) - Global_34165.f_116);
				bVar1 = (Function_175(27) - Global_34165.f_120);
				fVar7 = (TO_FLOAT(bVar0) / TO_FLOAT(bVar1));
				if (bVar0 >= Global_13172[iParam111].f_20)
				{
					Global_13172[iParam111].f_20 = bVar0;
					cVar10 = { StackVal, StackVal, StackVal, Function_286(bParam0) };
					stradd(&cVar10, "_Int1", 16);
					UPDATE_PROFILE_STAT(&cVar10, TO_FLOAT(bVar0), 1);
				}
			
			case 0x00000001:
				bVar2 = (CEIL(Function_269(49)) - Global_34165.f_124);
				bVar3 = (Function_175(49) - Global_34165.f_128);
				bVar8 = (TO_FLOAT(bVar3) / TO_FLOAT(bVar2));
				if (bVar8 < Global_13172[iParam111].f_28)
				{
					Global_13172[iParam111].f_28 = bVar8;
					cVar10 = { StackVal, StackVal, StackVal, Function_286(bParam0) };
					stradd(&cVar10, "_Float1", 16);
					UPDATE_PROFILE_STAT(&cVar10, bVar8, 1);
				}
				break;
			
			case 0x00000002:
				bVar4 = (Function_175(355) - Global_34165.f_116);
				bVar5 = Global_34165.f_124;
				bVar6 = Global_34165.f_128;
				bVar9 = (TO_FLOAT(bVar6) / TO_FLOAT(bVar5));
				if (bVar4 >= Global_13172[iParam111].f_20)
				{
					Global_13172[iParam111].f_20 = bVar4;
					cVar10 = { StackVal, StackVal, StackVal, Function_286(bParam0) };
					stradd(&cVar10, "_Int1", 16);
					UPDATE_PROFILE_STAT(&cVar10, TO_FLOAT(bVar4), 1);
				}
				if (bVar9 < Global_13172[iParam111].f_28)
				{
					Global_13172[iParam111].f_28 = bVar9;
					cVar10 = { StackVal, StackVal, StackVal, Function_286(bParam0) };
					stradd(&cVar10, "_Float1", 16);
					UPDATE_PROFILE_STAT(&cVar10, bVar9, 1);
				}
				bVar8 = bVar9;
				bVar0 = bVar4;
				break;
		}
		iVar15 = Function_400(bParam0, iVar14, Global_34165.f_140, bVar8, bVar0);
		if (iVar15 == 1)
		{
			Function_388(50, 1, 0);
			if (iVar14 == 0)
			{
				if (!HAS_ACHIEVEMENT_BEEN_PASSED(28))
				{
					AWARD_ACHIEVEMENT(28);
				}
			}
		}
		Var16 = { StackVal, StackVal, StackVal, *(&Global_3422[bParam040] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var16 = { StackVal, StackVal, StackVal, Function_243(bParam0) };
		}
		SET_JOURNAL_ENTRY_TROPHY(STRING_TO_HASH(&Var16), iVar15);
	}
	Global_34165.f_136 = 0.0f;
	Global_34165.f_140 = 0.0f;
	Global_34165.f_116 = 0;
	Global_34165.f_120 = 0;
	Global_34165.f_124 = 0;
	Global_34165.f_128 = 0;
	return;
}

void Function_388(int iParam0, bool bParam1, bool bParam2) //Position: 0x189D0 / 100816
{
	int iVar0;
	bool bVar1;
	
	if (Function_399(0) && (!Global_3380 || iParam0 == 100))
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
	iVar0 = Function_175(3);
	Function_397();
	if ((iVar0 + bVar1) >= 10000)
	{
		bVar1 = (10000 - iVar0);
	}
	if (bParam1)
	{
		Function_395(3, bVar1);
		if (!bParam2)
		{
			if (!Function_43(Global_76848, 4))
			{
				Function_38(Global_34573, 4, 3, 0);
			}
		}
	}
	else
	{
		Function_311(3, bVar1, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_268(3));
	iVar0 = Function_175(3);
	switch (Global_12976.f_156)
	{
		case 0x00000000:
			if (iVar0 > 1000)
			{
				Global_12976.f_156 = 1;
				Function_390(4, Function_394(Global_12976.f_156), 1);
				Function_389(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000001:
			if (iVar0 > 2000)
			{
				Global_12976.f_156 = 2;
				Function_390(4, Function_394(Global_12976.f_156), 1);
				Function_389(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000002:
			if (iVar0 > 4000)
			{
				Global_12976.f_156 = 3;
				Function_390(4, Function_394(Global_12976.f_156), 1);
				Function_389(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000003:
			if (iVar0 > 7000)
			{
				Global_12976.f_156 = 4;
				Function_390(4, Function_394(Global_12976.f_156), 1);
				Function_389(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000004:
			if (iVar0 > 10000)
			{
				Global_12976.f_156 = 5;
				Function_390(4, Function_394(Global_12976.f_156), 1);
				Function_389(Global_12976.f_152, Global_12976.f_156);
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

void Function_389(int iParam0, int iParam1) //Position: 0x18B93 / 101267
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

int Function_390(int iParam0, char* cParam1, bool bParam2) //Position: 0x18DF1 / 101873
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
	Function_289(iParam0, cParam1, 0, 1);
	iVar1 = Function_391();
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

int Function_391() //Position: 0x18F76 / 102262
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
	Function_392();
	return 0;
}

void Function_392() //Position: 0x19015 / 102421
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
		Function_393(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_393(int iParam0) //Position: 0x190C4 / 102596
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

var Function_394(int iParam0) //Position: 0x19122 / 102690
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

int Function_395(int iParam0, bool bParam1) //Position: 0x191B1 / 102833
{
	bool bVar0;
	int iVar1;
	
	Function_311(iParam0, bParam1, 0, 0);
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
	iVar1 = Function_396(iParam0, 4294967295);
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
	iVar1 = Function_391();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME+INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 1;
	return 1;
}

var Function_396(int iParam0, int iParam1) //Position: 0x1934E / 103246
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

void Function_397() //Position: 0x1938F / 103311
{
	Function_398(3, 0.0f);
	Function_376(3, 10000.0f);
	return;
}

int Function_398(int iParam0, int iParam1) //Position: 0x193A5 / 103333
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_60 = iParam1;
	return 1;
}

var Function_399(int iParam0) //Position: 0x193E5 / 103397
{
	return (*&Global_12976 + 104)[iParam0];
}

int Function_400(bool bParam0, int iParam1, float fParam2, bool bParam3, bool bParam4) //Position: 0x193F4 / 103412
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (fParam2 >= (*&Global_5743[bParam09] + 12)[0])
	{
		iVar0 = 3;
	}
	else if (fParam2 >= (*&Global_5743[bParam09] + 12)[1])
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 1;
	}
	bParam3 = (bParam3 * 100.0f);
	switch (iParam1)
	{
		case 0x00000000:
			if (bParam3 <= Global_5743[bParam09][0])
			{
				iVar1 = 3;
			}
			else if (bParam3 <= Global_5743[bParam09][1])
			{
				iVar1 = 2;
			}
			else
			{
				iVar1 = 1;
			}
			if (bParam4 > (*&Global_5743[bParam09] + 24)[0])
			{
				iVar2 = 3;
			}
			else if (bParam4 > (*&Global_5743[bParam09] + 24)[1])
			{
				iVar2 = 2;
			}
			else
			{
				iVar2 = 1;
			}
			break;
		
		case 0x00000001:
			if (bParam3 <= Global_5743[bParam09][0])
			{
				iVar1 = 3;
			}
			else if (bParam3 <= Global_5743[bParam09][1])
			{
				iVar1 = 2;
			}
			else
			{
				iVar1 = 1;
			}
			iVar2 = 3;
			iVar3 = (iVar0 + iVar1);
			if (iVar3 > 6)
			{
				return 1;
			}
			if (iVar3 > 4)
			{
				return 2;
			}
			return 3;
			break;
		
		case 0x00000002:
			if (bParam3 <= Global_5743[bParam09][0])
			{
				iVar1 = 3;
			}
			else if (bParam3 <= Global_5743[bParam09][1])
			{
				iVar1 = 2;
			}
			else
			{
				iVar1 = 1;
			}
			if (bParam4 > (*&Global_5743[bParam09] + 24)[0])
			{
				iVar2 = 3;
			}
			else if (bParam4 > (*&Global_5743[bParam09] + 24)[1])
			{
				iVar2 = 2;
			}
			else
			{
				iVar2 = 1;
			}
			break;
		
		default:
			iVar1 = 3;
			iVar2 = 3;
			if (iVar0 == 3)
			{
				return 1;
			}
			if (iVar0 == 2)
			{
				return 2;
			}
			return 3;
			break;
	}
	iVar3 = ((iVar0 + iVar1) + iVar2);
	if (iVar3 > 9)
	{
		return 1;
	}
	if (iVar3 > 6)
	{
		return 2;
	}
	return 3;
}

var Function_401() //Position: 0x195BC / 103868
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	if (Var0.f_72)
	{
	}
	return Var0.f_72;
}

void Function_402(int iParam0) //Position: 0x195E1 / 103905
{
	if (!Function_82(iParam0))
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	switch (iParam0)
	{
		case 0x0000000C:
			Function_388(25, 1, 0);
			break;
		
		case 0x0000000B:
			Function_388(25, 1, 0);
			Function_406(1, 1);
			break;
		
		case 0x00000015:
			Function_406(50, 1);
			Function_388(250, 1, 0);
			Function_403(200, 1, 0);
			break;
		
		case 0x0000000A:
			Function_388(75, 1, 0);
			Function_403(100, 1, 0);
			break;
		
		case 0x00000017:
			Function_388(150, 1, 0);
			break;
		
		case 0x00000018:
			Function_406(50, 1);
			Function_388(150, 1, 0);
			break;
		
		case 0x00000007:
			Function_406(5, 1);
			Function_403(100, 1, 0);
			break;
		
		case 0x00000016:
			Function_388(75, 1, 0);
			Function_403(150, 1, 0);
			break;
		
		case 0x00000011:
			Function_406(5, 1);
			Function_388(200, 1, 0);
			break;
		
		case 0x00000001:
			Function_388(150, 1, 0);
			break;
		
		case 0x00000006:
			Function_403(150, 1, 0);
			break;
		
		case 0x00000010:
			Function_406(25, 1);
			Function_388(75, 1, 0);
			break;
		
		case 0x0000000D:
			Function_406(10, 1);
			Function_388(75, 1, 0);
			break;
		
		case 0x00000012:
			Function_388(50, 1, 0);
			Function_403(100, 1, 0);
			break;
		
		case 0x00000014:
			Function_388(150, 1, 0);
			break;
		
		case 0x00000003:
			Function_388(20, 1, 0);
			break;
		
		case 0x00000004:
			Function_403(50, 1, 0);
			break;
		
		case 0x00000008:
			Function_406(20, 1);
			Function_388(75, 1, 0);
			Function_403(100, 1, 0);
			break;
		
		case 0x00000009:
			Function_406(25, 1);
			Function_388(150, 1, 0);
			Function_403(100, 1, 0);
			break;
		
		case 0x0000000E:
			Function_406(10, 1);
			Function_388(150, 1, 0);
			Function_403(100, 1, 0);
			break;
		
		case 0x00000013:
			Function_388(250, 1, 0);
			break;
		
		case 0x00000002:
			Function_403(50, 1, 0);
			break;
		
		case 0x00000005:
			Function_403(100, 1, 0);
			Function_406(5, 1);
			break;
		
		case 0x0000000F:
			Function_406(3, 1);
			Function_388(200, 1, 0);
			break;
		
		case 0x00000025:
			Function_403(125, 1, 0);
			Function_388(150, 1, 0);
			break;
		
		case 0x0000001F:
			Function_406(50, 1);
			Function_388(100, 1, 0);
			Function_403(125, 1, 0);
			break;
		
		case 0x0000001A:
			Function_406(50, 1);
			Function_388(250, 1, 0);
			break;
		
		case 0x0000001D:
			Function_406(75, 1);
			Function_388(200, 1, 0);
			break;
		
		case 0x00000021:
			Function_388(150, 1, 0);
			break;
		
		case 0x00000022:
			Function_388(75, 1, 0);
			Function_403(100, 1, 0);
			break;
		
		case 0x00000024:
			Function_388(250, 1, 0);
			Function_403(50, 1, 0);
			break;
		
		case 0x00000020:
			Function_388(75, 1, 0);
			Function_403(50, 1, 0);
			break;
		
		case 0x00000023:
			Function_388(200, 1, 0);
			Function_403(50, 1, 0);
			break;
		
		case 0x0000001E:
			Function_388(75, 1, 0);
			Function_403(100, 1, 0);
			break;
		
		case 0x00000019:
			Function_388(150, 1, 0);
			break;
		
		case 0x0000001B:
			Function_406(50, 1);
			Function_388(250, 1, 0);
			break;
		
		case 0x0000001C:
			Function_406(100, 1);
			Function_388(300, 1, 0);
			break;
		
		case 0x00000026:
			Function_388(200, 1, 0);
			Function_403(125, 1, 0);
			break;
		
		case 0x00000027:
			Function_388(300, 1, 0);
			Function_403(125, 1, 0);
			break;
		
		case 0x00000028:
			Function_388(300, 1, 0);
			Function_403(125, 1, 0);
			break;
		
		case 0x00000029:
			Function_388(300, 1, 0);
			Function_403(125, 1, 0);
			break;
		
		case 0x00000030:
			Function_388(500, 1, 0);
			Function_403(250, 1, 0);
			break;
		
		case 0x0000002B:
			Function_388(150, 1, 0);
			Function_403(125, 1, 0);
			break;
		
		case 0x0000002E:
			Function_403(25, 1, 0);
			Function_406(100, 1);
			break;
		
		case 0x0000002A:
			Function_388(150, 1, 0);
			Function_403(25, 1, 0);
			break;
		
		case 0x0000002D:
			Function_403(25, 1, 0);
			break;
		
		case 0x0000002C:
			Function_403(25, 1, 0);
			break;
		
		case 0x0000002F:
			break;
		
		case 0x00000037:
			break;
		
		case 0x00000034:
			Function_403(150, 1, 0);
			break;
		
		case 0x00000031:
			Function_403(150, 1, 0);
			Function_406(100, 1);
			break;
		
		case 0x00000035:
			Function_403(150, 1, 0);
			break;
		
		case 0x00000036:
			Function_403(150, 1, 0);
			break;
		
		case 0x00000038:
			Function_403(150, 1, 0);
			Function_406(100, 1);
			break;
		
		case 0x00000032:
			Function_403(150, 1, 0);
			break;
		
		case 0x00000033:
			Function_403(150, 1, 0);
			break;
		
		case 0x00000039:
			break;
		
		default:
			break;
	}
	return;
}

void Function_403(int iParam0, bool bParam1, bool bParam2) //Position: 0x19A9C / 105116
{
	int iVar0;
	bool bVar1;
	
	if (Function_399(0) && !Global_3380)
	{
		return;
	}
	bVar1 = iParam0;
	if (Global_3380)
	{
		Global_12976.f_160 = (Global_12976.f_160 + iParam0);
		return;
	}
	iVar0 = Function_175(1);
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
			Function_395(1, bVar1);
			if (!bParam2)
			{
				if (!Function_43(Global_76848, 1))
				{
					Function_38(Global_34573, 1, 3, 0);
				}
			}
		}
		else
		{
			Function_405(1, (4294967295 * bVar1));
			if (!Global_3380)
			{
				if (!Function_43(Global_76848, 2))
				{
					Function_38(Global_34573, 2, 3, 0);
				}
			}
		}
	}
	else if (bVar1 >= 0)
	{
		Function_311(1, bVar1, 0, 0);
	}
	else
	{
		Function_294(1, (4294967295 * bVar1), 0);
	}
	if (Function_175(1) <= 4294962296)
	{
		Function_291(1, 4294962296, 0);
	}
	else if (Function_175(1) >= 5000)
	{
		Function_291(1, 5000, 0);
	}
	SET_PLAYER_CURRENT_HONOR(0, Function_268(1));
	iVar0 = Function_175(1);
	switch (Global_12976.f_152)
	{
		case 0x00000000:
			if (iVar0 >= 4294962796)
			{
				Global_12976.f_152 = 1;
				Function_390(2, Function_404(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_12976.f_152 = 0;
				Function_390(2, Function_404(Global_12976.f_152), 0);
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
				Function_390(2, Function_404(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_12976.f_152 = 1;
				Function_390(2, Function_404(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_12976.f_152 = 3;
				Function_390(2, Function_404(Global_12976.f_152), 1);
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
				Function_390(2, Function_404(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_12976.f_152 = 4;
				Function_390(2, Function_404(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_12976.f_152 = 3;
				Function_390(2, Function_404(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_12976.f_152 = 5;
				Function_390(2, Function_404(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_12976.f_152 = 4;
				Function_390(2, Function_404(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_12976.f_152 = 6;
				Function_390(2, Function_404(Global_12976.f_152), 1);
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
				Function_390(2, Function_404(Global_12976.f_152), 0);
			}
			break;
	}
	Function_389(Global_12976.f_152, Global_12976.f_156);
	return;
}

var Function_404(int iParam0) //Position: 0x19DB1 / 105905
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

int Function_405(int iParam0, bool bParam1) //Position: 0x19E54 / 106068
{
	bool bVar0;
	int iVar1;
	
	Function_294(iParam0, bParam1, 0);
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
	iVar1 = Function_396(iParam0, 4294967295);
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
	iVar1 = Function_391();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME-INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 3;
	return 1;
}

int Function_406(bool bParam0, bool bParam1) //Position: 0x19FF0 / 106480
{
	bool bVar0;
	
	bVar0 = Function_175(0);
	if ((Function_175(0) + bParam0) >= 999999)
	{
		bParam0 = (999999 - bVar0);
	}
	if (bParam0 >= 0)
	{
		Function_311(0, bParam0, 0, 0);
	}
	else
	{
		return 0;
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_175(0));
	if (bParam1)
	{
		PRINT_MONEY(&(Global_35278[020]), bVar0, bParam0, 7,5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	if (!Global_3384)
	{
		Function_311(597, bParam0, 0, 0);
	}
	if ((Function_175(597) + Function_175(450)) >= 10000)
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(24))
		{
			AWARD_ACHIEVEMENT(24);
		}
	}
	return 1;
}

void Function_407(bool bParam0) //Position: 0x1A0BB / 106683
{
	bool bVar0;
	
	if (Function_17(bParam0, 1) && Function_17(Global_26119, 1))
	{
	}
	bVar0 = (Global_26119 && bParam0);
	Global_26119 = (Global_26119 - bVar0);
	Global_26119 |= 1073741824;
	return;
}

void Function_408(bool bParam0) //Position: 0x1A0EF / 106735
{
	Global_12976.f_20 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 20, 0, 0, bParam0, 0);
	return;
}

void Function_409(var uParam0, int iParam1) //Position: 0x1A10A / 106762
{
	uParam0[iParam140]->f_128 |= 4194304;
	return;
}

void Function_410(var uParam0, int iParam1) //Position: 0x1A125 / 106789
{
	uParam0[iParam140]->f_128 |= 524288;
	return;
}

void Function_411(var uParam0, int iParam1, int iParam2) //Position: 0x1A140 / 106816
{
	uParam0[iParam140]->f_128 = (uParam0[iParam140]->f_128 || iParam2);
	return;
}

void Function_412(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x1A159 / 106841
{
	uParam0[iParam140]->f_128 |= 4096;
	if (bParam3)
	{
		uParam0[iParam140]->f_128 |= 1048576;
	}
	uParam0[iParam140]->f_148 = iParam2;
}

void Function_413(var uParam0, int iParam1, int iParam2) //Position: 0x1A199 / 106905
{
	int iVar0;
	
	iVar0 = uParam0[iParam140]->f_128;
	if (iParam2 & 2 == 0)
	{
		iVar0 |= 64;
		iVar0 = (iVar0 - 64);
	}
	if (iParam2 & 4 == 0)
	{
		iVar0 |= 128;
		iVar0 = (iVar0 - 128);
	}
	if (iParam2 & 8 == 0)
	{
		iVar0 |= 256;
		iVar0 = (iVar0 - 256);
	}
	if (iParam2 & 16 == 0)
	{
		iVar0 |= 512;
		iVar0 = (iVar0 - 512);
	}
	if (iParam2 & 32 == 0)
	{
		iVar0 |= 1024;
		iVar0 = (iVar0 - 1024);
	}
	if (iParam2 & 1 == 0)
	{
		iVar0 |= 32;
		iVar0 = (iVar0 - 32);
	}
	uParam0[iParam140]->f_128 = iVar0;
	return;
}

void Function_414(var uParam0, int iParam1, bool bParam2) //Position: 0x1A240 / 107072
{
	if (uParam0[iParam140]->f_136 == 4294967295)
	{
		uParam0[iParam140]->f_136 = bParam2;
		uParam0[iParam140]->f_128 |= 2;
		return;
	}
	if (uParam0[iParam140]->f_140 == 4294967295)
	{
		uParam0[iParam140]->f_140 = bParam2;
		uParam0[iParam140]->f_128 |= 4;
		return;
	}
	if (uParam0[iParam140]->f_144 == 4294967295)
	{
		uParam0[iParam140]->f_144 = bParam2;
		uParam0[iParam140]->f_128 |= 8;
		return;
	}
	return;
}

void Function_415(var uParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, vector3 vParam6) //Position: 0x1A2C2 / 107202
{
	struct<6> Var0;
	bool bVar6;
	int iVar7;
	int iVar8;
	
	if (Function_1())
	{
		return;
	}
	(*uParam0)[bParam140] = bParam2;
	uParam0[bParam140]->f_4 = Function_91(bParam2, bParam1, 1);
	if (STRING_LENGTH(bParam3) >= 0)
	{
		uParam0[bParam140]->f_8 = GET_ASSET_ID(bParam3, 4);
	}
	else
	{
		uParam0[bParam140]->f_8 = 4294967295;
	}
	uParam0[bParam140]->f_40 = "";
	uParam0[bParam140]->f_44 = "";
	uParam0[bParam140]->f_48 = "";
	uParam0[bParam140]->f_96 = 4294967295;
	uParam0[bParam140]->f_104 = 1;
	uParam0[bParam140]->f_128 = iParam5 | 64 | 128 | 256 | 512 | 1024 | 32;
	uParam0[bParam140]->f_132 = iParam4;
	uParam0[bParam140]->f_136 = 4294967295;
	uParam0[bParam140]->f_140 = 4294967295;
	uParam0[bParam140]->f_144 = 4294967295;
	strcpy(uParam0[bParam140] + 12, "miss", 16);
	straddi(uParam0[bParam140] + 12, bParam1, 16);
	*(uParam0[bParam140] + 52) = { StackVal, StackVal, vParam6 };
	uParam0[bParam140]->f_36 = 4294967295;
	if (Function_100(bParam1, 0))
	{
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_244(bParam1) };
		bVar6 = CREATE_JOURNAL_ENTRY(uParam0[bParam140] + 12, 1, false, &Var0);
		CLEAR_JOURNAL_ENTRY(bVar6);
		PREPEND_JOURNAL_ENTRY(bVar6, true);
		SET_JOURNAL_ENTRY_PROGRESS(bVar6, -1.0f, false, 0);
		SET_JOURNAL_ENTRY_UPDATED(bVar6, 0);
		iVar7 = Function_288(bParam1);
		iVar8 = Function_400(StackVal, StackVal, StackVal, bParam1, Global_13172[Global_13172[Global_13172[iVar711].f_3211].f_2811].f_20);
		SET_JOURNAL_ENTRY_TROPHY(bVar6, iVar8);
	}
}

void Function_416(var uParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4, int iParam5, int iParam6, int iParam7, bool bParam8, vector3 vParam9, bool bParam12, vector3 vParam13) //Position: 0x1A436 / 107574
{
	struct<6> Var0;
	bool bVar6;
	int iVar7;
	int iVar8;
	
	if (Function_1())
	{
		return;
	}
	if (!IS_VOLUME_VALID(bParam12))
	{
		return;
	}
	(*uParam0)[bParam140] = bParam2;
	uParam0[bParam140]->f_4 = Function_91(bParam2, bParam1, 1);
	if (STRING_LENGTH(bParam3) >= 0)
	{
		uParam0[bParam140]->f_8 = GET_ASSET_ID(bParam3, 4);
	}
	else
	{
		uParam0[bParam140]->f_8 = 4294967295;
	}
	uParam0[bParam140]->f_36 = iParam7;
	uParam0[bParam140]->f_40 = "";
	uParam0[bParam140]->f_44 = "";
	uParam0[bParam140]->f_48 = bParam12;
	uParam0[bParam140]->f_96 = iParam6;
	uParam0[bParam140]->f_104 = 4;
	uParam0[bParam140]->f_128 = iParam5 | 64 | 128 | 256 | 512 | 1024 | 32;
	uParam0[bParam140]->f_132 = uParam4;
	uParam0[bParam140]->f_136 = 4294967295;
	uParam0[bParam140]->f_140 = 4294967295;
	uParam0[bParam140]->f_144 = 4294967295;
	strcpy(uParam0[bParam140] + 12, "miss", 16);
	straddi(uParam0[bParam140] + 12, bParam1, 16);
	*(uParam0[bParam140] + 52) = { StackVal, StackVal, vParam9 };
	*(uParam0[bParam140] + 80) = { StackVal, StackVal, vParam13 };
	if (STRING_LENGTH(bParam8) >= 0)
	{
		uParam0[bParam140]->f_28 = GET_ASSET_ID(bParam8, 1);
	}
	else
	{
		uParam0[bParam140]->f_28 = 4294967295;
	}
	if (Function_100(bParam1, 0))
	{
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_244(bParam1) };
		bVar6 = CREATE_JOURNAL_ENTRY(uParam0[bParam140] + 12, 1, false, &Var0);
		CLEAR_JOURNAL_ENTRY(bVar6);
		PREPEND_JOURNAL_ENTRY(bVar6, true);
		SET_JOURNAL_ENTRY_PROGRESS(bVar6, -1.0f, false, 0);
		SET_JOURNAL_ENTRY_UPDATED(bVar6, 0);
		iVar7 = Function_288(bParam1);
		iVar8 = Function_400(StackVal, StackVal, StackVal, bParam1, Global_13172[Global_13172[Global_13172[iVar711].f_3211].f_2811].f_20);
		SET_JOURNAL_ENTRY_TROPHY(bVar6, iVar8);
	}
}

void Function_417(var uParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, vector3 vParam9, int iParam12) //Position: 0x1A5E9 / 108009
{
	struct<6> Var0;
	bool bVar6;
	int iVar7;
	int iVar8;
	
	if (Function_1())
	{
		return;
	}
	(*uParam0)[bParam140] = bParam2;
	uParam0[bParam140]->f_4 = Function_91(bParam2, bParam1, 1);
	if (STRING_LENGTH(bParam3) >= 0)
	{
		uParam0[bParam140]->f_8 = GET_ASSET_ID(bParam3, 4);
	}
	else
	{
		uParam0[bParam140]->f_8 = 4294967295;
	}
	uParam0[bParam140]->f_36 = iParam7;
	uParam0[bParam140]->f_40 = "";
	uParam0[bParam140]->f_44 = "";
	uParam0[bParam140]->f_48 = "";
	uParam0[bParam140]->f_96 = iParam6;
	uParam0[bParam140]->f_104 = 3;
	uParam0[bParam140]->f_128 = iParam5 | 64 | 128 | 256 | 512 | 1024 | 32;
	uParam0[bParam140]->f_132 = iParam4;
	uParam0[bParam140]->f_136 = 4294967295;
	uParam0[bParam140]->f_140 = 4294967295;
	uParam0[bParam140]->f_144 = 4294967295;
	strcpy(uParam0[bParam140] + 12, "miss", 16);
	straddi(uParam0[bParam140] + 12, bParam1, 16);
	*(uParam0[bParam140] + 52) = { StackVal, StackVal, vParam9 };
	*(uParam0[bParam140] + 80) = { StackVal, StackVal, vParam9 };
	uParam0[bParam140]->f_64 = iParam12;
	if (STRING_LENGTH(bParam8) >= 0)
	{
		uParam0[bParam140]->f_28 = GET_ASSET_ID(bParam8, 1);
	}
	else
	{
		uParam0[bParam140]->f_28 = 4294967295;
	}
	if (Function_100(bParam1, 0))
	{
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_244(bParam1) };
		bVar6 = CREATE_JOURNAL_ENTRY(uParam0[bParam140] + 12, 1, false, &Var0);
		CLEAR_JOURNAL_ENTRY(bVar6);
		PREPEND_JOURNAL_ENTRY(bVar6, true);
		SET_JOURNAL_ENTRY_PROGRESS(bVar6, -1.0f, false, 0);
		SET_JOURNAL_ENTRY_UPDATED(bVar6, 0);
		iVar7 = Function_288(bParam1);
		iVar8 = Function_400(StackVal, StackVal, StackVal, bParam1, Global_13172[Global_13172[Global_13172[iVar711].f_3211].f_2811].f_20);
		SET_JOURNAL_ENTRY_TROPHY(bVar6, iVar8);
	}
}

var Function_418(int iParam0, bool bParam1, int iParam2, bool bParam3, vector3 vParam4, bool bParam7) //Position: 0x1A79A / 108442
{
	bool bVar0;
	int iVar1;
	vector3 vVar2;
	bool bVar5;
	int iVar6;
	struct<73> Var7;
	
	if (!IS_STRING_VALID(bParam1))
	{
		LOG_ERROR("GB_CREATE_COMPANION_PERS_CHAR: requires a NAME for each companion.");
		return "";
	}
	iVar1 = iParam0;
	if (iVar1 >= 16)
	{
		LOG_ERROR("GB_CREATE_COMPANION_PERS_CHAR: CompanionsList is full.");
		return "";
	}
	Global_8492[iParam014] = "";
	Global_8492[iParam014].f_8 = iParam2;
	strcpy(&Global_8492[iParam014] + 20, bParam1, 32);
	Global_8492[iParam014].f_12 = Global_6287;
	if (bParam7)
	{
		bVar0 = CREATE_PERS_CHAR_IN_LAYOUT(StackVal, Global_8492[iParam014].f_12, &Global_8492[iParam014] + 20, vParam4, 1114636288);
		Global_8492[iParam014] = bVar0;
		if (!IS_PERS_CHAR_VALID(bVar0))
		{
			LOG_ERROR("GB_CREATE_COMPANION_PERS_CHAR: Failed to validate the pers char reference");
			return "";
		}
		if (!(STRING_CONTAINS_STRING(bParam3, "\\") || STRING_CONTAINS_STRING(bParam3, "/")))
		{
			FILE_START_PATH("$/content/scripting/gringo/gringobrains/cb");
			FILE_ADD_TO_PATH(bParam3);
			FILE_END_PATH();
			bParam3 = FILE_GET_CURRENT_PATH();
		}
		bVar5 = CREATE_GRINGO_ON_OBJECT(GET_OBJECT_FROM_PERS_CHAR(bVar0), "Persistent_Char_Brain", bParam3, vVar2, vVar2);
		if (IS_OBJECT_VALID(bVar5))
		{
			GRINGO_QUERY_BOOL(GET_GRINGO_FROM_OBJECT(bVar5), "CompanionSettings", "EnableCompanionBehavior", &iVar6);
			if (iVar6 >= 0)
			{
				ATTACH_OBJECTS(bVar5, GET_OBJECT_FROM_PERS_CHAR(bVar0), Function_75(), 0.0f, 1,5f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
			}
			else
			{
				PRINTSTRING("GB_CREATE_COMPANION_PERS_CHAR: Attempting to assign an invalid Companion Brain to this Companion: ");
				PRINTSTRING(bParam1);
				PRINTNL();
				LOG_ERROR("GB_CREATE_COMPANION_PERS_CHAR: Attempting to assign an invalid Companion Brain to a Companion");
				DESTROY_PERS_CHAR(bVar0);
				return "";
			}
		}
		PRINTSTRING("GB_CREATE_COMPANION_PERS_CHAR: Failed to create a GRINGO BRAIN for this Companion: ");
		PRINTSTRING(bParam1);
		PRINTNL();
		LOG_ERROR("GB_CREATE_COMPANION_PERS_CHAR: Failed to create a GRINGO BRAIN for a Companion. This is surprisingly bad!");
		DESTROY_PERS_CHAR(bVar0);
		return "";
		*(&Var7 + 36) = { StackVal, StackVal, vParam4 };
		Var7 = { StackVal, StackVal, *(&Var7 + 36) };
		*(&Var7 + 12) = { StackVal, StackVal, *(&Var7 + 36) };
		*(&Var7 + 24) = { StackVal, StackVal, *(&Var7 + 36) };
		*(&Var7 + 48) = { StackVal, StackVal, *(&Var7 + 36) };
		*(&Var7 + 60) = { StackVal, StackVal, *(&Var7 + 36) };
		Var7.f_72 = Global_8492[iParam014].f_12;
		GRINGO_UPDATE_STRUCT(GET_GRINGO_FROM_OBJECT(bVar5), "ScriptStructure", "Vectors_and_LayoutRef_Struct", &Var7, 20);
	}
	return bVar0;
}

void Function_419(int iParam0) //Position: 0x1AC33 / 109619
{
	strcpy(iParam0 + 12, "AMBIENT TRAIN", 16);
	*iParam0 = 114407;
	iParam0->f_4 = 110352;
	iParam0->f_8 = 109675;
	iParam0->f_28 = 0;
	return;
}

void Function_420() //Position: 0x1AC6B / 109675
{
	if (Global_3420)
	{
		return;
	}
	Function_425(&Global_34208 + 12);
	Function_425(&Global_34208 + 724);
	if (IS_OBJECT_VALID(StackVal))
	{
		DESTROY_OBJECT(StackVal);
		Global_34208.f_4 = "";
	}
	Function_421(&Global_34208 + 1444);
	Global_34208.f_8 = 0;
	return;
}

void Function_421(int iParam0) //Position: 0x1ACB2 / 109746
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		Function_422(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_422(var uParam0, int iParam1) //Position: 0x1ACD8 / 109784
{
	if (Function_424(uParam0[iParam13], 4))
	{
		if (Function_424(uParam0[iParam13], 1))
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
			Function_423(uParam0[iParam13], 1);
			Function_423(uParam0[iParam13], 2);
			Function_423(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_423(var uParam0, int iParam1) //Position: 0x1AE06 / 110086
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_424(var uParam0, int iParam1) //Position: 0x1AE20 / 110112
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_425(int iParam0) //Position: 0x1AE3D / 110141
{
	Function_430(iParam0);
	Function_426(iParam0);
	return;
}

void Function_426(int iParam0) //Position: 0x1AE4D / 110157
{
	if (*iParam0 != 4294967295)
	{
		Function_429(iParam0);
		TRAIN_DESTROY_TRAIN(*iParam0);
		*iParam0 = 4294967295;
		Function_428(iParam0);
	}
	Function_427(iParam0);
	if (IS_LAYOUTREF_VALID(iParam0->f_672))
	{
		RELEASE_LAYOUT_REF(iParam0->f_672);
	}
	return;
}

void Function_427(int iParam0) //Position: 0x1AE86 / 110214
{
	if (iParam0->f_140 != 0)
	{
		Function_421(iParam0 + 144);
		iParam0->f_340 = 0;
		iParam0->f_140 = 0;
	}
	return;
}

void Function_428(int iParam0) //Position: 0x1AEA6 / 110246
{
	switch (iParam0->f_136)
	{
		case 0x00000001:
			Global_34207 = *iParam0;
			break;
		
		case 0x00000002:
			Global_34206 = *iParam0;
			break;
	}
	return;
}

void Function_429(int iParam0) //Position: 0x1AED3 / 110291
{
	int iVar0;
	
	if (*iParam0 != 4294967295)
	{
		iVar0 = TRAIN_GET_NUM_CARS(*iParam0);
		while (iVar0 >= 0)
		{
			iVar0 = (iVar0 - 1);
			TRAIN_DESTROY_CAR(*iParam0, iVar0);
		}
	}
	return;
}

void Function_430(int iParam0) //Position: 0x1AEFF / 110335
{
	iParam0->f_688 = 1;
	Function_429(iParam0);
	return;
}

int Function_431() //Position: 0x1AF10 / 110352
{
	if (Global_3420)
	{
		return 0;
	}
	Function_432(&Global_34208 + 12);
	Function_432(&Global_34208 + 724);
	return 1;
}

int Function_432(int iParam0) //Position: 0x1AF32 / 110386
{
	float fVar0;
	
	if (iParam0->f_676 != 0)
	{
		return 0;
	}
	if (!Function_5(16384) || !bLocal_511)
	{
		Function_430(iParam0);
		Function_426(iParam0);
		return 0;
	}
	if (!Function_448())
	{
		return 0;
	}
	if (*iParam0 == 4294967295)
	{
		Function_447(iParam0);
		if (*iParam0 == 4294967295)
		{
			return 0;
		}
		Function_446(*iParam0);
	}
	if (!iParam0->f_348)
	{
		fVar0 = TRAIN_GET_NEAREST_POI_DISTANCE(*iParam0);
		if (Global_34207 != *iParam0 && iLocal_515)
		{
		}
		else if (Global_34206 != *iParam0 && iLocal_516)
		{
		}
		if (!iParam0->f_132 && fVar0 > iParam0->f_124)
		{
			iParam0->f_132 = 1;
		}
		if ((iParam0->f_132 && fVar0 < iParam0->f_128) && iLocal_514)
		{
			iParam0->f_132 = 0;
			Function_430(iParam0);
			return 0;
		}
		if (!iParam0->f_132)
		{
			return 0;
		}
	}
	iParam0->f_132 = 1;
	if (iParam0->f_692 || iParam0->f_348)
	{
		if (!Function_437(iParam0))
		{
			return 0;
		}
		Function_433(iParam0);
	}
	return 0;
}

void Function_433(int iParam0) //Position: 0x1B017 / 110615
{
	char* cVar0[32];
	bool bVar8;
	
	if (TRAIN_GET_NUM_CARS(*iParam0) >= 0)
	{
		return;
	}
	switch (iParam0->f_136)
	{
		case 0x00000001:
			strcpy(&cVar0, "FrontierTrain", 32);
			TRAIN_ADD_TRAIN_CAR_FROM_ENUM(*iParam0, 1166);
			TRAIN_ADD_TRAIN_CAR_FROM_ENUM(*iParam0, 1167);
			TRAIN_ADD_TRAIN_CAR_FROM_ENUM(*iParam0, 1165);
			TRAIN_ADD_TRAIN_CAR_FROM_ENUM(*iParam0, 1156);
			TRAIN_ADD_TRAIN_CAR_FROM_ENUM(*iParam0, 1157);
			TRAIN_ADD_TRAIN_CAR_FROM_ENUM(*iParam0, 1158);
			TRAIN_ADD_TRAIN_CAR_FROM_ENUM(*iParam0, 1162);
			break;
		
		case 0x00000002:
			strcpy(&cVar0, "NorthTrain", 32);
			TRAIN_ADD_TRAIN_CAR_FROM_ENUM(*iParam0, 1175);
			TRAIN_ADD_TRAIN_CAR_FROM_ENUM(*iParam0, 1176);
			TRAIN_ADD_TRAIN_CAR_FROM_ENUM(*iParam0, 1168);
			TRAIN_ADD_TRAIN_CAR_FROM_ENUM(*iParam0, 1169);
			TRAIN_ADD_TRAIN_CAR_FROM_ENUM(*iParam0, 1170);
			TRAIN_ADD_TRAIN_CAR_FROM_ENUM(*iParam0, 1171);
			TRAIN_ADD_TRAIN_CAR_FROM_ENUM(*iParam0, 1173);
	}
	bVar8 = GET_ACTOR_FROM_OBJECT(TRAIN_GET_CAR(*iParam0, false));
	if (IS_ACTOR_VALID(bVar8))
	{
		if (!DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(bVar8), "nTrainName"))
		{
			DECOR_SET_STRING(GET_OBJECT_FROM_ACTOR(bVar8), "nTrainName", &cVar0);
		}
	}
	Function_434(*iParam0, iParam0->f_620);
	return;
}

void Function_434(bool bParam0, int iParam1) //Position: 0x1B131 / 110897
{
	bool bVar0;
	
	if (TRAIN_GET_NUM_CARS(bParam0) >= 0)
	{
		bVar0 = Function_435(bParam0);
		if (IS_ACTOR_VALID(bVar0))
		{
			ENABLE_VEHICLE_SEAT(bVar0, 14, iParam1);
			ENABLE_VEHICLE_SEAT(bVar0, 15, iParam1);
			ENABLE_VEHICLE_SEAT(bVar0, 16, iParam1);
			ENABLE_VEHICLE_SEAT(bVar0, 17, iParam1);
			ENABLE_VEHICLE_SEAT(bVar0, 18, iParam1);
			ENABLE_VEHICLE_SEAT(bVar0, 19, iParam1);
			ENABLE_VEHICLE_SEAT(bVar0, 20, iParam1);
			ENABLE_VEHICLE_SEAT(bVar0, 21, iParam1);
		}
	}
	if (Global_34207 == bParam0)
	{
		(&Global_34208 + 12)->f_620 = iParam1;
	}
	else if (Global_34206 == bParam0)
	{
		(&Global_34208 + 724)->f_620 = iParam1;
	}
	return;
}

var Function_435(bool bParam0) //Position: 0x1B1C7 / 111047
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	
	if (bParam0 == 4294967295)
	{
		return "";
	}
	bVar0 = true;
	iVar1 = TRAIN_GET_NUM_CARS(bParam0);
	if (iVar1 > 1)
	{
		bVar0 = true;
		while (bVar0 < (iVar1 - 1))
		{
			bVar2 = TRAIN_GET_CAR(bParam0, bVar0);
			if (IS_OBJECT_VALID(bVar2))
			{
				if (Function_436(bVar2) != 1165 || Function_436(bVar2) != 1168)
				{
					return GET_ACTOR_FROM_OBJECT(TRAIN_GET_CAR(bParam0, bVar0));
				}
			}
			bVar0++;
		}
	}
	return "";
}

int Function_436(bool bParam0) //Position: 0x1B22F / 111151
{
	if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(bParam0)))
	{
		return GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bParam0));
	}
	return 4294967295;
}

bool Function_437(int iParam0) //Position: 0x1B24A / 111178
{
	if (iParam0->f_136 == iParam0->f_140)
	{
		if (iParam0->f_340)
		{
			return 1;
		}
		iParam0->f_340 = Function_442(iParam0 + 144);
		return iParam0->f_340;
	}
	iParam0->f_140 = iParam0->f_136;
	switch (iParam0->f_136)
	{
		case 0x00000001:
			Function_441(iParam0 + 144, 1166, 2, 0);
			Function_441(iParam0 + 144, 1167, 2, 0);
			Function_441(iParam0 + 144, 1156, 2, 0);
			Function_441(iParam0 + 144, 1165, 2, 0);
			Function_441(iParam0 + 144, 1157, 2, 0);
			Function_441(iParam0 + 144, 1158, 2, 0);
			Function_441(iParam0 + 144, 1162, 2, 0);
			Function_438(iParam0 + 144, "$/content/scripting/gringo/simplegringo/traincar01", 1, 0);
			Function_438(iParam0 + 144, "$/content/scripting/gringo/simplegringo/traincarbaggage", 1, 0);
			Function_438(iParam0 + 144, "$/content/scripting/gringo/simplegringo/traincarbox01", 1, 0);
			Function_438(iParam0 + 144, "$/content/scripting/gringo/simplegringo/traincarbox02", 1, 0);
			Function_438(iParam0 + 144, "$/content/scripting/gringo/simplegringo/traincarcaboose", 1, 0);
			Function_438(iParam0 + 144, "$/content/scripting/gringo/simplegringo/traincarsteamer", 1, 0);
			Function_438(iParam0 + 144, "$/content/scripting/gringo/simplegringo/traincarwood", 1, 0);
			break;
		
		case 0x00000002:
			Function_441(iParam0 + 144, 1175, 2, 0);
			Function_441(iParam0 + 144, 1176, 2, 0);
			Function_441(iParam0 + 144, 1169, 2, 0);
			Function_441(iParam0 + 144, 1168, 2, 0);
			Function_441(iParam0 + 144, 1170, 2, 0);
			Function_441(iParam0 + 144, 1171, 2, 0);
			Function_441(iParam0 + 144, 1173, 2, 0);
			Function_438(iParam0 + 144, "$/content/scripting/gringo/simplegringo/traincar01", 1, 0);
			Function_438(iParam0 + 144, "$/content/scripting/gringo/simplegringo/traincarbaggage", 1, 0);
			Function_438(iParam0 + 144, "$/content/scripting/gringo/simplegringo/traincarbox01", 1, 0);
			Function_438(iParam0 + 144, "$/content/scripting/gringo/simplegringo/traincarbox02", 1, 0);
			Function_438(iParam0 + 144, "$/content/scripting/gringo/simplegringo/traincarcaboose", 1, 0);
			Function_438(iParam0 + 144, "$/content/scripting/gringo/simplegringo/traincarsteamer", 1, 0);
			Function_438(iParam0 + 144, "$/content/scripting/gringo/simplegringo/traincarwood", 1, 0);
			break;
		
		case 0x00000000:
			break;
	}
	iParam0->f_340 = Function_442(iParam0 + 144);
	return iParam0->f_340;
}

var Function_438(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x1B70A / 112394
{
	int iVar0;
	bool bVar1;
	
	if (Global_30842[32])
	{
	}
	bVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_440(uParam0, bVar1, iParam2);
	if (bParam3)
	{
		Function_439(uParam0[iVar03], 8);
	}
	return iVar0;
}

void Function_439(var uParam0, int iParam1) //Position: 0x1B742 / 112450
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

var Function_440(var uParam0, int iParam1, int iParam2) //Position: 0x1B753 / 112467
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_424(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_439(uParam0[iVar03], 4);
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

var Function_441(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x1B817 / 112663
{
	int iVar0;
	
	iParam2 = iParam2;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_424(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = 3;
			Function_439(uParam0[iVar03], 4);
			if (bParam3)
			{
				Function_439(uParam0[iVar03], 8);
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

bool Function_442(int iParam0) //Position: 0x1B8E7 / 112871
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_445();
	iVar1 = 0;
	if (!Function_424(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_439(iParam0[iVar03], 8);
		}
		else if (Function_444())
		{
			iVar1 = 1;
			Function_439(iParam0[iVar03], 8);
		}
		Function_439(iParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_424(iParam0[iVar03], 4))
		{
			if (!Function_424(iParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*iParam0)[iVar03], (Function_424(iParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*iParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], true, (Function_424(iParam0[03], 8) || iVar1));
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
				Function_439(iParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_424(iParam0[iVar03], 4))
		{
			if (!Function_424(iParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*iParam0)[iVar03]))
						{
							Function_439(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_439(iParam0[iVar03], 2);
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
							Function_439(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_439(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_439(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_439(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_439(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_439(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_439(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_439(iParam0[iVar03], 2);
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
	Function_443();
	return 1;
}

void Function_443() //Position: 0x1BC62 / 113762
{
	if (!Function_5(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_444() //Position: 0x1BCA2 / 113826
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

void Function_445() //Position: 0x1BCCD / 113869
{
	if (!Function_5(128))
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

void Function_446(int iParam0) //Position: 0x1BD0F / 113935
{
	if (iParam0 == Global_34207)
	{
		(&Global_34208 + 12)->f_616 = 16383;
	}
	else if (iParam0 == Global_34206)
	{
		(&Global_34208 + 724)->f_616 = 16383;
	}
	return;
}

void Function_447(int iParam0) //Position: 0x1BD3F / 113983
{
	if (*iParam0 == 4294967295)
	{
		if (!IS_LAYOUTREF_VALID(iParam0->f_672))
		{
			iParam0->f_672 = CREATE_LAYOUT(Function_75());
		}
		if (!IS_OBJECT_VALID(StackVal))
		{
			if (!StackVal)
			{
				Global_34208.f_8 = 1;
				Global_34208.f_4 = CREATE_WORLD_SECTOR(Global_6287, "swRailRoad");
				return;
			}
		}
		if (!IS_WORLD_SECTOR_LOADED(StackVal))
		{
			return;
		}
		*iParam0 = TRAIN_CREATE_NEW_TRAIN(8, "rail__rrtrack_02x", 0);
		if (*iParam0 == 4294967295)
		{
			iParam0->f_676 = 1;
			LOG_ERROR("Unable to create train.");
			return;
		}
		TRAIN_SET_MAX_ACCEL(*iParam0, 1,25f);
		TRAIN_SET_MAX_DECEL(*iParam0, -0,75f);
		TRAIN_SET_TARGET_SPEED(*iParam0, 0.0f);
		TRAIN_SET_POSITION_DIRECTION(*iParam0, iParam0 + 352, iParam0 + 364);
		if (iParam0->f_136 != 1 && iLocal_513)
		{
			CREATE_GRINGO_IN_LAYOUT(iParam0->f_672, "Train", "$/content/scripting/gringo/gringobrains/veh/Train_Brain", -971,969f, (100.0f + IntToFloat(*iParam0 * 2)), 2407,337f, 0.0f, 0.0f, 0.0f);
		}
		Function_428(iParam0);
	}
	return;
}

bool Function_448() //Position: 0x1BE92 / 114322
{
	Function_438(&Global_34208 + 1444, "$/content/scripting/gringo/gringobrains/veh/Train_Brain", 1, 0);
	return Function_442(&Global_34208 + 1444);
}

void Function_449() //Position: 0x1BEE7 / 114407
{
	int iVar0;
	
	Global_34208.f_1440 = 1;
	(&Global_34208 + 12)->f_676 = 0;
	(&Global_34208 + 12)->f_124 = 450.0f;
	(&Global_34208 + 12)->f_128 = 500.0f;
	(&Global_34208 + 12)->f_132 = 0;
	(&Global_34208 + 12)->f_136 = 1;
	Global_34208.f_12 = 4294967295;
	*(&Global_34208 + 12 + 352) = { -2210,959f, 16,58f, 2624,5f };
	*(&Global_34208 + 12 + 364) = { -0,372f, 0.0f, 0,921f };
	(&Global_34208 + 12)->f_376 = 0;
	(&Global_34208 + 12)->f_620 = 1;
	(&Global_34208 + 12)->f_348 = 0;
	(&Global_34208 + 12)->f_88 = 5;
	(&Global_34208 + 12)->f_116 = 0;
	(&Global_34208 + 12)->f_640 = 0;
	(&Global_34208 + 12)->f_688 = 0;
	(&Global_34208 + 12)->f_120 = 0;
	(&Global_34208 + 12)->f_644 = 0;
	(&Global_34208 + 724)->f_676 = 0;
	(&Global_34208 + 724)->f_124 = 450.0f;
	(&Global_34208 + 724)->f_128 = 500.0f;
	(&Global_34208 + 724)->f_132 = 0;
	(&Global_34208 + 724)->f_136 = 2;
	Global_34208.f_724 = 4294967295;
	*(&Global_34208 + 724 + 352) = { 651,801f, 78,645f, 1275,99f };
	*(&Global_34208 + 724 + 364) = { 0.0f, 0.0f, 1.0f };
	(&Global_34208 + 724)->f_376 = 0;
	(&Global_34208 + 724)->f_620 = 1;
	(&Global_34208 + 724)->f_348 = 0;
	(&Global_34208 + 724)->f_88 = 5;
	(&Global_34208 + 724)->f_116 = 0;
	(&Global_34208 + 724)->f_640 = 0;
	(&Global_34208 + 724)->f_688 = 0;
	(&Global_34208 + 724)->f_120 = 0;
	(&Global_34208 + 724)->f_644 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		(*&Global_34208 + 12 + 380)[iVar04] = 0;
		(&Global_34208 + 12 + 380[iVar04])->f_4 = 4294967295;
		(&Global_34208 + 12 + 380[iVar04])->f_8 = "";
		(&Global_34208 + 12 + 380[iVar04])->f_12 = 4294967295;
		(*&Global_34208 + 724 + 380)[iVar04] = 0;
		(&Global_34208 + 724 + 380[iVar04])->f_4 = 4294967295;
		(&Global_34208 + 724 + 380[iVar04])->f_8 = "";
		(&Global_34208 + 724 + 380[iVar04])->f_12 = 4294967295;
		iVar0++;
	}
	(&Global_34208 + 12)->f_624 = 0;
	(&Global_34208 + 12 + 624)->f_4 = 4294967295;
	(&Global_34208 + 12 + 624)->f_8 = "";
	(&Global_34208 + 12 + 624)->f_12 = 4294967295;
	(&Global_34208 + 724)->f_624 = 0;
	(&Global_34208 + 724 + 624)->f_4 = 4294967295;
	(&Global_34208 + 724 + 624)->f_8 = "";
	(&Global_34208 + 724 + 624)->f_12 = 4294967295;
	return;
}

void Function_450(int iParam0) //Position: 0x1C14E / 115022
{
	strcpy(iParam0 + 12, "VOL RESTRICT", 16);
	*iParam0 = 115110;
	iParam0->f_4 = 115098;
	iParam0->f_8 = 115077;
	iParam0->f_28 = 1;
	return;
}

void Function_451() //Position: 0x1C185 / 115077
{
	if (IS_LAYOUTREF_VALID(Global_26150))
	{
		DESTROY_LAYOUT(Global_26150);
	}
	return;
}

int Function_452() //Position: 0x1C19A / 115098
{
	Function_136(4294967295);
	return 0;
}

void Function_453() //Position: 0x1C1A6 / 115110
{
	if (!IS_LAYOUTREF_VALID(Global_26150))
	{
		Global_26150 = CREATE_LAYOUT("AmbientVol");
	}
	return;
}

void Function_454(int iParam0) //Position: 0x1C1C9 / 115145
{
	strcpy(iParam0 + 12, "AMBIENT SCORE", 16);
	*iParam0 = 115235;
	iParam0->f_4 = 115207;
	iParam0->f_8 = 115201;
	iParam0->f_28 = 1;
	return;
}

void Function_455() //Position: 0x1C201 / 115201
{
	return;
}

int Function_456() //Position: 0x1C207 / 115207
{
	Function_457();
	return 0;
}

void Function_457() //Position: 0x1C211 / 115217
{
	AUDIO_SET_GLOBAL_LAW_VALUES(Global_3403, Global_3404, Global_3407);
	return;
}

void Function_458() //Position: 0x1C223 / 115235
{
	return;
}

void Function_459(int iParam0) //Position: 0x1C229 / 115241
{
	strcpy(iParam0 + 12, "BEAT LAUNCHER", 16);
	*iParam0 = 116389;
	iParam0->f_4 = 115318;
	iParam0->f_8 = 115297;
	iParam0->f_28 = 1;
	return;
}

void Function_460() //Position: 0x1C261 / 115297
{
	Function_461();
	return;
}

void Function_461() //Position: 0x1C26A / 115306
{
	DESTROY_OBJECTSET(Global_25964);
	return;
}

int Function_462() //Position: 0x1C276 / 115318
{
	if (Function_5(4))
	{
		Function_464(&Global_25267);
		if (Function_1())
		{
			if (NET_IS_IN_SESSION())
			{
				Function_463(&Global_25267);
			}
		}
	}
	return 0;
}

void Function_463(int iParam0) //Position: 0x1C29C / 115356
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	while (iVar0 <= *iParam0)
	{
		if (IS_SCRIPT_VALID(iParam0[iVar058]->f_44))
		{
			Global_79335++;
		}
		iVar0++;
	}
	bVar1 = GET_LOCAL_SLOT();
	if (bVar1 != 4294967295)
	{
		Global_79301[bVar12] = Global_79335;
		Global_79301[bVar12].f_4 = Global_79334;
	}
	return;
}

void Function_464(int iParam0) //Position: 0x1C2F3 / 115443
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= *iParam0)
	{
		if (IS_SCRIPT_VALID(iParam0[iVar058]->f_44))
		{
		}
		else if (Function_469(iParam0[iVar058], 1))
		{
			if (!Global_3391)
			{
				if (Function_467(iParam0[iVar058]))
				{
					Function_466(iParam0[iVar058], 1);
					Function_465(iParam0[iVar058], 2);
				}
			}
		}
		else if (Function_469(iParam0[iVar058], 2))
		{
			if (iParam0[iVar058]->f_88 + 2.0f) < GET_CURRENT_GAME_TIME()
			{
			}
			Function_466(iParam0[iVar058], 2);
			Function_465(iParam0[iVar058], 4);
			Function_348(iParam0[iVar058]);
		}
		else if (Function_469(iParam0[iVar058], 4))
		{
		}
		iVar0++;
	}
	return;
}

void Function_465(var uParam0, int iParam1) //Position: 0x1C3A3 / 115619
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_466(var uParam0, int iParam1) //Position: 0x1C3B4 / 115636
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_467(int iParam0) //Position: 0x1C3CE / 115662
{
	struct<61> Var0;
	
	*(&Var0 + 64 + 20) = 1;
	Var0.f_60 = iParam0->f_68;
	Var0.f_52 = iParam0->f_64;
	Var0.f_56 = iParam0->f_72;
	*(&Var0 + 8) = { StackVal, StackVal, *(iParam0 + 20) };
	*(&Var0 + 20) = { StackVal, StackVal, *(iParam0 + 32) };
	Var0 = iParam0->f_56;
	Var0.f_4 = iParam0->f_52;
	Var0.f_48 = iParam0->f_76;
	if (iParam0->f_48 == 4294967295)
	{
		Var0.f_44 = Global_29006;
	}
	else
	{
		Var0.f_44 = iParam0->f_48;
	}
	Function_468(iParam0 + 92, &Var0 + 64);
	switch (*iParam0)
	{
		case 0x00000004:
			Var0.f_36 = 0;
			break;
		
		case 0x00000008:
			Var0.f_36 = 0;
			break;
		
		case 0x00000010:
			break;
		
		case 0x00000080:
			break;
		
		case 0x00000800:
			break;
		
		case 0x00000100:
			break;
		
		case 0x00000200:
			break;
		
		case 0x00000400:
			break;
		
		case 0x00000002:
			break;
		
		case 0x00000020:
			break;
		
		case 0x00002000:
			break;
		
		default:
			return 0;
			break;
	}
	Var0.f_32 = iParam0->f_84;
	Var0.f_40 = iParam0->f_80;
	Var0.f_36 = iParam0->f_80;
	iParam0->f_88 = GET_CURRENT_GAME_TIME();
	iParam0->f_44 = LAUNCH_NEW_SCRIPT_WITH_ARGS(GET_ASSET_NAME(iParam0->f_16, 4), &Var0, 51, 0);
	if (IS_SCRIPT_VALID(iParam0->f_44))
	{
		if (!iParam0->f_60 > 0.0f)
		{
			iParam0->f_60 = (iParam0->f_60 + GET_CURRENT_GAME_TIME());
		}
		return 1;
	}
	return 0;
}

void Function_468(int iParam0, int iParam1) //Position: 0x1C51C / 115996
{
	*iParam1 = *iParam0;
	iParam1->f_16 = iParam0->f_16;
	iParam1->f_20 = iParam0->f_20;
	iParam1->f_4 = StackVal;
	iParam1->f_8 = StackVal;
	*(iParam1 + 24) = { StackVal, *(iParam0 + 24) };
	(iParam1 + 24)->f_8 = StackVal;
	(iParam1 + 24)->f_12 = (iParam0 + 24)->f_12;
	(iParam1 + 24)->f_16 = (iParam0 + 24)->f_16;
	(iParam1 + 24)->f_20 = (iParam0 + 24)->f_20;
	iParam1->f_48 = iParam0->f_48;
	(iParam1 + 48)->f_4 = StackVal;
	(iParam1 + 48)->f_8 = StackVal;
	iParam1->f_60 = iParam0->f_60;
	(iParam1 + 60)->f_4 = StackVal;
	(iParam1 + 60)->f_8 = StackVal;
	(iParam1 + 60)->f_12 = (iParam0 + 60)->f_12;
	(iParam1 + 60)->f_16 = (iParam0 + 60)->f_16;
	(iParam1 + 60)->f_20 = (iParam0 + 60)->f_20;
	(iParam1 + 60)->f_24 = (iParam0 + 60)->f_24;
	(iParam1 + 60)->f_32 = (iParam0 + 60)->f_32;
	(iParam1 + 60)->f_36 = (iParam0 + 60)->f_36;
	(iParam1 + 60)->f_40 = (iParam0 + 60)->f_40;
	(iParam1 + 60)->f_44 = (iParam0 + 60)->f_44;
	(iParam1 + 60)->f_52 = (iParam0 + 60)->f_52;
	(iParam1 + 60)->f_48 = (iParam0 + 60)->f_48;
	(iParam1 + 60)->f_56 = (iParam0 + 60)->f_56;
	(iParam1 + 60)->f_28 = (iParam0 + 60)->f_28;
	iParam1->f_120 = iParam0->f_120;
	(iParam1 + 120)->f_4 = StackVal;
	iParam1->f_128 = iParam0->f_128;
	(iParam1 + 128)->f_4 = StackVal;
	(iParam1 + 128)->f_8 = StackVal;
	return;
}

bool Function_469(int iParam0, int iParam1) //Position: 0x1C688 / 116360
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_470() //Position: 0x1C6A5 / 116389
{
	struct<35> Var0;
	
	Function_481(&Global_25267);
	if (Function_480() == 1)
	{
		if (!Function_479())
		{
			*(&Var0 + 20) = 1;
			Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var0 };
			Function_274();
			Function_274();
			if (Function_478(StackVal, StackVal, StackVal, StackVal, 128, 1, GET_ASSET_ID("$/content/Ambient/PointOfInterest/event_bountyhunter", 4), Function_274(), Function_274(), 0, 0, 0, Global_26303.f_24, 0, 0, 0, &Var0, 1, 1, 0x40a00000, 4294967295, 0, 0))
			{
			}
			else
			{
				LOG_ERROR("Problem initializing bounty hunter beat");
			}
		}
		else
		{
			Function_475(0);
			Function_283();
			Function_471(0, 0, 0);
			Function_471(1, 0, 0);
		}
	}
	return;
}

void Function_471(int iParam0, bool bParam1, bool bParam2) //Position: 0x1C77C / 116604
{
	if ((*&Global_26401 + 16)[iParam0] >= 0)
	{
		Function_474(iParam0, (*&Global_26401 + 16)[iParam0]);
		(*&Global_26401 + 16)[iParam0] = 0;
		if (bParam2)
		{
			Function_472(iParam0, 0, 0, Function_239(30), 0);
		}
		if (bParam1)
		{
			if (IS_ACTOR_ALIVE(Global_34573))
			{
				Function_13("community_fail", 0x41200000, 1, 0, 2, 1, 0);
			}
		}
	}
	return;
}

void Function_472(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4) //Position: 0x1C7E5 / 116709
{
	bool bVar0;
	
	bVar0 = GET_TIME_OF_DAY();
	ADD_TIME(&bVar0, iParam1, bParam2, bParam3, iParam4);
	if (IS_EARLIER_THAN((*&Global_26316 + 88)[iParam0], bVar0) || Function_473((*&Global_26316 + 88)[iParam0]))
	{
		(*&Global_26316 + 88)[iParam0] = bVar0;
	}
}

var Function_473(bool bParam0) //Position: 0x1C82B / 116779
{
	return (((GET_DAY(bParam0) != 0 && GET_HOUR(bParam0) != 0) && GET_MINUTE(bParam0) != 0) && GET_SECOND(bParam0) != 1);
}

void Function_474(bool bParam0, bool bParam1) //Position: 0x1C850 / 116816
{
	if (!Function_285(bParam0))
	{
		return;
	}
	if (!bParam1 < 0)
	{
	}
	Global_26401[bParam0] = (Global_26401[bParam0] + bParam1);
	Function_311((*&Global_26401 + 2220)[bParam0], bParam1, 0, 0);
	Function_311(222, bParam1, 0, 0);
	return;
}

void Function_475(int iParam0) //Position: 0x1C895 / 116885
{
	Function_477(0);
	Function_476();
	Global_26303.f_12 = 4294967295;
	Global_26303.f_16 = 0;
	Global_26303.f_20 = 4294967295;
	Global_26303.f_24 = 4294967295;
	Global_26303.f_32 = 0;
	Global_26303.f_36 = 0;
	Global_26303.f_40 = 0;
	if (iParam0 == 1)
	{
		Function_11(&Global_26303 + 8, 4096);
	}
	return;
}

void Function_476() //Position: 0x1C8DD / 116957
{
	Function_11(&Global_26303 + 8, 2);
	Function_11(&Global_26303 + 8, 4);
	Function_11(&Global_26303 + 8, 8);
	Function_11(&Global_26303 + 8, 16);
	Function_11(&Global_26303 + 8, 32);
	Function_11(&Global_26303 + 8, 64);
	Function_11(&Global_26303 + 8, 128);
	Function_11(&Global_26303 + 8, 256);
	Function_11(&Global_26303 + 8, 512);
	Function_11(&Global_26303 + 8, 1024);
	Function_11(&Global_26303 + 8, 2048);
	Function_11(&Global_26303 + 8, 131072);
	Function_11(&Global_26303 + 8, 262144);
	Function_11(&Global_26303 + 8, 524288);
	return;
}

void Function_477(bool bParam0) //Position: 0x1C977 / 117111
{
	if (bParam0 == 1)
	{
		Function_12(&Global_26303 + 8, 1);
	}
	else
	{
		Function_11(&Global_26303 + 8, 1);
	}
	return;
}

bool Function_478(int iParam0, int iParam1, var uParam2, vector3 vParam3, vector3 vParam6, var uParam9, var uParam10, int iParam11, var uParam12, var uParam13, var uParam14, var uParam15, int iParam16, var uParam17, var uParam18, var uParam19, int iParam20, var uParam21, var uParam22) //Position: 0x1C998 / 117144
{
	int iVar0;
	
	uParam13 = uParam13;
	uParam14 = uParam14;
	uParam15 = uParam15;
	iVar0 = 0;
	while (iVar0 <= Global_25267)
	{
		if (Global_25267[iVar058] != iParam0 || iParam0 != 4096)
		{
			if (Function_469(&(Global_25267[iVar058]), 4))
			{
				if (!IS_SCRIPT_VALID(Global_25267[iVar058].f_44))
				{
					Global_25267[iVar058].f_4 = uParam9;
					Global_25267[iVar058].f_68 = uParam21;
					Global_25267[iVar058].f_84 = uParam22;
					Global_25267[iVar058].f_64 = uParam19;
					Global_25267[iVar058].f_72 = iParam20;
					Global_25267[iVar058].f_12 = 4294967295;
					Global_25267[iVar058].f_16 = uParam2;
					*(&Global_25267[iVar058] + 20) = { StackVal, StackVal, vParam3 };
					*(&Global_25267[iVar058] + 32) = { StackVal, StackVal, vParam6 };
					Global_25267[iVar058].f_56 = uParam10;
					Global_25267[iVar058].f_48 = uParam12;
					Global_25267[iVar058].f_52 = iParam11;
					Global_25267[iVar058].f_76 = uParam17;
					Global_25267[iVar058].f_80 = uParam18;
					Global_25267[iVar058].f_88 = 0.0f;
					Function_468(iParam16, &Global_25267[iVar058] + 92);
					Global_25267[iVar058].f_92 = iParam1;
					Function_465(&(Global_25267[iVar058]), 1);
					Function_466(&(Global_25267[iVar058]), 4);
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool Function_479() //Position: 0x1CADA / 117466
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Global_26401.f_16 - 1))
	{
		if ((*&Global_26401 + 16)[iVar0] >= 0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int Function_480() //Position: 0x1CB08 / 117512
{
	return Function_17(StackVal, 1);
}

void Function_481(int iParam0) //Position: 0x1CB17 / 117527
{
	(*iParam0)[058] = 4;
	(*iParam0)[158] = 4;
	(*iParam0)[258] = 8;
	(*iParam0)[358] = 16;
	(*iParam0)[458] = 128;
	(*iParam0)[558] = 256;
	(*iParam0)[658] = 512;
	(*iParam0)[758] = 1024;
	(*iParam0)[858] = 2048;
	(*iParam0)[958] = 2;
	(*iParam0)[1058] = 32;
	(*iParam0)[1158] = 8192;
	Function_348(iParam0[058]);
	Function_348(iParam0[158]);
	Function_348(iParam0[258]);
	Function_348(iParam0[358]);
	Function_348(iParam0[458]);
	Function_348(iParam0[558]);
	Function_348(iParam0[658]);
	Function_348(iParam0[758]);
	Function_348(iParam0[858]);
	Function_348(iParam0[958]);
	Function_348(iParam0[1058]);
	Function_348(iParam0[1158]);
	Function_465(iParam0[058], 4);
	Function_465(iParam0[158], 4);
	Function_465(iParam0[258], 4);
	Function_465(iParam0[358], 4);
	Function_465(iParam0[458], 4);
	Function_465(iParam0[558], 4);
	Function_465(iParam0[658], 4);
	Function_465(iParam0[758], 4);
	Function_465(iParam0[858], 4);
	Function_465(iParam0[958], 4);
	Function_465(iParam0[1058], 4);
	Function_465(iParam0[1158], 4);
	if (!IS_LAYOUTREF_VALID(Global_6288))
	{
		Global_6288 = CREATE_LAYOUT("RegionChar");
	}
	Global_79335 = 0;
	Global_79334 = 0.0f;
	Global_25964 = CREATE_OBJECTSET_IN_LAYOUT("DisallowedVols", Global_6288, 9, 1);
	return;
}

void Function_482(int iParam0) //Position: 0x1CC8E / 117902
{
	strcpy(iParam0 + 12, "BEAT MANAGER", 16);
	*iParam0 = 119251;
	iParam0->f_4 = 117963;
	iParam0->f_8 = 117957;
	iParam0->f_28 = 1;
	return;
}

void Function_483() //Position: 0x1CCC5 / 117957
{
	return;
}

int Function_484() //Position: 0x1CCCB / 117963
{
	if (Function_5(1024))
	{
		Function_485();
	}
	return 0;
}

void Function_485() //Position: 0x1CCDE / 117982
{
	int iVar0;
	
	if (bLocal_510)
	{
		if (Global_25264 <= 1)
		{
			return;
		}
		if (Function_493(&iVar0))
		{
		}
		else
		{
			iVar0 = Function_492(&Global_25059, Global_25264);
		}
		if (Global_26147 == 1)
		{
			iVar0 = Global_26148;
		}
		if (Function_486(iVar0, 0))
		{
			Global_16876[iVar06].f_8 = StackVal + 1;
			if (Global_26147)
			{
				Global_3399 = 1;
			}
			Global_25265 = GET_CURRENT_GAME_TIME();
			Global_17483[iVar075].f_68 = (GET_CURRENT_GAME_TIME() + 25.0f);
		}
		else if (!iVar0 != 4294967295)
		{
			Global_17483[iVar075].f_68 = (GET_CURRENT_GAME_TIME() + 25.0f);
		}
	}
	return;
}

bool Function_486(int iParam0, bool bParam1) //Position: 0x1CD70 / 118128
{
	struct<49> Var0;
	int iVar51;
	
	if (!Function_491(iParam0))
	{
		return 0;
	}
	if (!bParam1)
	{
		if (!Function_490(Global_17483[iParam075].f_84))
		{
			return 0;
		}
		if (!Function_489(Global_17483[iParam075].f_96))
		{
			return 0;
		}
		if (!Global_17483[iParam075].f_284 && !bParam1)
		{
			return 0;
		}
	}
	*(&Var0 + 64 + 20) = 1;
	iVar51 = Global_17483[iParam075].f_84;
	if (Global_17483[iParam075].f_288)
	{
		iVar51 = 4096;
	}
	Global_17483[iParam075].f_68 = (GET_CURRENT_GAME_TIME() + 25.0f);
	if (!Function_478(StackVal, StackVal, StackVal, StackVal, StackVal, iVar51, Global_17483[iParam075].f_120, Global_17483[iParam075].f_96, *(&Var0 + 8), *(&Var0 + 20), Global_17483[iParam075].f_80, 0, Global_17483[iParam075].f_92, (*&Global_17483[iParam075] + 32)[0], (*&Global_17483[iParam075] + 32)[1], (*&Global_17483[iParam075] + 32)[2], &Global_17483[iParam075] + 120, Var0.f_48, Global_17483[iParam075].f_288, Global_17483[iParam075].f_72, iParam0, Global_17483[iParam075].f_76, Global_17483[iParam075].f_292))
	{
		Global_17483[iParam075].f_288 = 0;
		Global_17483[iParam075].f_292 = 0;
		Global_17483[iParam075].f_68 = (GET_CURRENT_GAME_TIME() + 25.0f);
		return 0;
	}
	Global_17483[iParam075].f_292 = 0;
	Global_17483[iParam075].f_288 = 0;
	Global_17483[iParam075].f_68 = (GET_CURRENT_GAME_TIME() + 25.0f);
	if (Global_17483[iParam075].f_80 == 2)
	{
		Function_488(0);
	}
	if (Global_17483[iParam075].f_280)
	{
		Function_487(iParam0);
	}
	return 1;
}

void Function_487(int iParam0) //Position: 0x1CF08 / 118536
{
	if (!Function_491(iParam0))
	{
		return;
	}
	Global_17483[iParam075].f_120 = 0;
	Global_25263 = (Global_25263 - 1);
	return;
}

void Function_488(int iParam0) //Position: 0x1CF2A / 118570
{
	Global_12976 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976, 0, false, (iParam0 + Function_239(90)), 0);
	return;
}

bool Function_489(int iParam0) //Position: 0x1CF47 / 118599
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_25267)
	{
		if (Global_25267[iVar058].f_16 == iParam0)
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

bool Function_490(int iParam0) //Position: 0x1CF72 / 118642
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Global_25267 - 1))
	{
		if (Global_25267[iVar058] != iParam0 || iParam0 != 4096)
		{
			if (Function_469(&(Global_25267[iVar058]), 4) && !IS_SCRIPT_VALID(Global_25267[iVar058].f_44))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool Function_491(int iParam0) //Position: 0x1CFC1 / 118721
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	return 1;
}

var Function_492(var uParam0, bool bParam1) //Position: 0x1CFD7 / 118743
{
	bool bVar0;
	
	if (Global_30842[15])
	{
		PRINTSTRING("NumValid beats: ");
		PRINTINT(bParam1);
		PRINTNL();
	}
	bVar0 = RAND_INT_RANGE(false, (bParam1 - 1));
	if (Global_30842[15])
	{
		PRINTSTRING("Selected random index: ");
		PRINTINT(bVar0);
		PRINTNL();
	}
	return (*uParam0)[bVar0];
}

bool Function_493(int iParam0) //Position: 0x1D044 / 118852
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_25264)
	{
		if (Function_17(StackVal, 2))
		{
			if (Global_17483[Global_25059[iVar0]75].f_88 != 0)
			{
				if (!Function_233(Global_17483[Global_25059[iVar0]75].f_88) != 3)
				{
					*iParam0 = Global_25059[iVar0];
					return 1;
				}
			}
			if (Global_16876[Global_25059[iVar0]6].f_16 == 0)
			{
				*iParam0 = Global_25059[iVar0];
				return 1;
			}
		}
		if (Global_25059[iVar0] == 32)
		{
			if (Global_29004 == 1)
			{
				if (Function_161(7) && !Function_320(7, 16))
				{
					*iParam0 = Global_25059[iVar0];
					return 1;
				}
			}
			if (Global_29005 == Global_30628[2])
			{
				if (Function_161(5) && !Function_320(5, 16))
				{
					*iParam0 = Global_25059[iVar0];
					return 1;
				}
			}
			if (Global_29005 == Global_30628[0])
			{
				if (Function_161(4) && !Function_320(4, 16))
				{
					*iParam0 = Global_25059[iVar0];
					return 1;
				}
			}
		}
		if (Global_25059[iVar0] == 33)
		{
			if (Global_29004 == 1)
			{
				if (Function_161(7) && !Function_320(7, 16))
				{
					*iParam0 = Global_25059[iVar0];
					return 1;
				}
			}
			if (Global_29005 == Global_30628[2])
			{
				if (Function_161(5) && !Function_320(5, 16))
				{
					*iParam0 = Global_25059[iVar0];
					return 1;
				}
			}
			if (Global_29005 == Global_30628[0])
			{
				if (Function_161(4) && !Function_320(4, 16))
				{
					*iParam0 = Global_25059[iVar0];
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void Function_494() //Position: 0x1D1D3 / 119251
{
	Function_511();
	Function_496();
	Function_495();
	return;
}

void Function_495() //Position: 0x1D1E2 / 119266
{
	return;
}

void Function_496() //Position: 0x1D1E8 / 119272
{
	Global_25263 = 0;
	Function_509(3, 1, 25, 4294967276, 50, 2, 164032, 3, 4, "$/content/Ambient/Town/beat_crime_horsethief", 63, 2, 70.0f, 8, 65, 0);
	Function_508(&Global_17483[375] + 120, 1, 5.0f, 96, 4294967295);
	Function_507(&Global_17483[375] + 120, 4,5f);
	Function_506(&Global_17483[375] + 120, -5.0f, 2);
	if (!Global_3420)
	{
		Function_509(0, 2, 15, 5, 25, 2, 16, 1, 4, "$/content/Ambient/Roaming/event_coyote_chase", 30, 2, 190.0f, 2, 55, 0);
		Function_508(&Global_17483[075] + 120, 2, 8.0f, 1, 704);
		Function_505(&Global_17483[075] + 120, 19,9f, 0,6f);
		Function_506(&Global_17483[075] + 120, -3.0f, 2);
		Function_504(&Global_17483[075] + 120, 30.0f);
	}
	else
	{
		Function_503(6, "$/content/Ambient/Town/beat_dog_fetch");
		Function_503(0, "$/content/Ambient/Roaming/event_coyote_chase");
	}
	Function_509(4, 2, 50, 4294967271, 50, 2, 32960, 3, 4, "$/content/Ambient/Town/beat_crime_wagonthief", 63, 2, 190.0f, 8, 55, 0);
	Function_508(&Global_17483[475] + 120, 2, 9,5f, 64, 752);
	Function_507(&Global_17483[475] + 120, 10.0f);
	Function_505(&Global_17483[475] + 120, 7,9f, 0,6f);
	Function_506(&Global_17483[475] + 120, -4.0f, 2);
	if (!Global_3420)
	{
		Function_509(5, 2, 75, 4294967286, 25, 2, 96, 1, 4, "$/content/Ambient/Roaming/event_criminal_chase", 31, 3, 190.0f, 8, 55, 0);
		Function_508(&Global_17483[575] + 120, 3, 6.0f, 1, 736);
		Function_505(&Global_17483[575] + 120, 19,9f, 0,7f);
		Function_506(&Global_17483[575] + 120, -3.0f, 2);
		Function_502(&Global_17483[575] + 120);
	}
	else
	{
		Function_503(5, "$/content/Ambient/Roaming/event_criminal_chase");
	}
	Function_509(1, 2, 100, 4294967271, 100, 2, 33808, 0, 4, "$/content/Ambient/Roaming/event_crazy_hermit", 63, 2, 190.0f, 8, 55, 0);
	Function_508(&Global_17483[175] + 120, 1, 6.0f, 1, 240);
	Function_505(&Global_17483[175] + 120, 5,9f, 0,3f);
	Function_504(&Global_17483[175] + 120, 40.0f);
	Function_506(&Global_17483[175] + 120, -4.0f, 2);
	Function_509(43, 2, 100, 4294967271, 100, 2, 16, 0, 4, "$/content/Ambient/Roaming/event_wilderness_dynomite", 63, 2, 190.0f, 8, 55, 0);
	Function_508(&Global_17483[4375] + 120, 1, 5.0f, 1, 752);
	Function_504(&Global_17483[4375] + 120, 30.0f);
	Function_505(&Global_17483[4375] + 120, 5,9f, 0,3f);
	Function_506(&Global_17483[4375] + 120, -5.0f, 2);
	if (!Global_3420)
	{
		Function_509(23, 2, 100, 4294967271, 100, 2, 96, 0, 4, "$/content/Ambient/Roaming/event_lone_stranger", 63, 2, 190.0f, 8, 70, 0);
		Function_508(&Global_17483[2375] + 120, 3, 8.0f, 1, 752);
		Function_505(&Global_17483[2375] + 120, 19,9f, 0,6f);
		Function_504(&Global_17483[2375] + 120, 5.0f);
		Function_506(&Global_17483[2375] + 120, -1.0f, 2);
		Function_509(29, 2, 50, 4294967271, 50, 2, 32776, 0, 4, "$/content/Ambient/Roaming/event_roadside_ambush", 63, 2, 190.0f, 8, 65, 0);
		Function_508(&Global_17483[2975] + 120, 2, 5.0f, 64, 752);
		Function_507(&Global_17483[2975] + 120, 15.0f);
		Function_504(&Global_17483[2975] + 120, 5.0f);
		Function_501(&Global_17483[2975] + 120, 12.0f, 5.0f);
		Function_500(&Global_17483[2975] + 120, 0,4f, 8.0f);
		Function_506(&Global_17483[2975] + 120, -2.0f, 2);
	}
	else
	{
		Function_503(23, "$/content/Ambient/Roaming/event_lone_stranger");
		Function_503(29, "$/content/Ambient/Roaming/event_roadside_ambush");
	}
	Function_509(31, 2, 50, 4294967271, 50, 2, 8, 0, 4, "$/content/Ambient/Roaming/event_roadside_prisoners", 63, 2, 190.0f, 8, 55, 0);
	Function_508(&Global_17483[3175] + 120, 2, 6.0f, 64, 752);
	Function_507(&Global_17483[3175] + 120, 20.0f);
	Function_505(&Global_17483[3175] + 120, 12,5f, 0,4f);
	Function_504(&Global_17483[3175] + 120, 4.0f);
	Function_506(&Global_17483[3175] + 120, 0.0f, 4);
	Function_502(&Global_17483[3175] + 120);
	Function_509(32, 2, 25, 4294967271, 50, 2, 32776, 1, 4, "$/content/Ambient/Roaming/beat_roadside_robbery", 63, 2, 190.0f, 8, 55, 0);
	Function_508(&Global_17483[3275] + 120, 1, 9.0f, 64, 752);
	Function_507(&Global_17483[3275] + 120, 24.0f);
	Function_501(&Global_17483[3275] + 120, 12,5f, 9.0f);
	Function_500(&Global_17483[3275] + 120, 0,45f, 12.0f);
	Function_504(&Global_17483[3275] + 120, 9.0f);
	Function_506(&Global_17483[3275] + 120, -4.0f, 4);
	Function_502(&Global_17483[3275] + 120);
	if (!Global_3420)
	{
		Function_509(42, 2, 60, 0, 70, 2, 96, 0, 4, "$/content/Ambient/Roaming/event_wild_animals", 63, 2, 190.0f, 2, 70, 0);
		Function_508(&Global_17483[4275] + 120, 2, 8.0f, 1, 640);
		Function_505(&Global_17483[4275] + 120, 19,9f, 0,6f);
		Function_504(&Global_17483[4275] + 120, 20.0f);
		Function_506(&Global_17483[4275] + 120, 0.0f, 4);
		Function_502(&Global_17483[4275] + 120);
		Function_509(26, 2, 760, 0, 770, 2, 0, 0, 4, "$/content/Ambient/Roaming/event_predator_prey", 63, 0, 50.0f, 4294967295, 35, 0);
		Function_508(&Global_17483[2675] + 120, 2, 8.0f, 1, 704);
		Function_505(&Global_17483[2675] + 120, 19,9f, 0,6f);
		Function_506(&Global_17483[2675] + 120, 0.0f, 2);
		Function_504(&Global_17483[2675] + 120, 20.0f);
		Function_509(24, 2, 30, 4294967286, 10, 2, 0, 0, 4, "$/content/Ambient/Roaming/event_loot_dead_body", 63, 2, 190.0f, 2, 55, 0);
		Function_508(&Global_17483[2475] + 120, 0, 3.0f, 1, 752);
		Function_505(&Global_17483[2475] + 120, 1,9f, 0,3f);
		Function_504(&Global_17483[2475] + 120, 10.0f);
		Function_506(&Global_17483[2475] + 120, 0.0f, 4);
		Function_502(&Global_17483[2475] + 120);
		Function_509(25, 2, 30, 10, 10, 2, 16, 0, 4, "$/content/Ambient/Roaming/event_mourn_dead_body", 63, 2, 190.0f, 2, 55, 0);
		Function_508(&Global_17483[2575] + 120, 1, 3.0f, 1, 752);
		Function_505(&Global_17483[2575] + 120, 5,9f, 0,3f);
		Function_504(&Global_17483[2575] + 120, 10.0f);
		Function_506(&Global_17483[2575] + 120, 0.0f, 4);
		Function_502(&Global_17483[2575] + 120);
		Function_509(17, 2, 15, 0, 25, 2, 16, 1, 4, "$/content/Ambient/Roaming/event_generic_1v1", 31, 2, 190.0f, 2, 60, 0);
		Function_508(&Global_17483[1775] + 120, 2, 8.0f, 1, 704);
		Function_505(&Global_17483[1775] + 120, 19,9f, 0,6f);
		Function_504(&Global_17483[1775] + 120, 30.0f);
		Function_509(38, 2, 100, 4294967271, 100, 2, 32786, 0, 4, "$/content/Ambient/Roaming/event_treasurehunter_intro", 63, 2, 190.0f, 8, 70, 0);
		Function_508(&Global_17483[3875] + 120, 1, 6.0f, 1, 752);
		Function_504(&Global_17483[3875] + 120, 30.0f);
		Function_506(&Global_17483[3875] + 120, -6.0f, 4);
		Function_505(&Global_17483[3875] + 120, 9,9f, 0,4f);
		Function_502(&Global_17483[3875] + 120);
		Function_509(19, 2, 100, 4294967271, 100, 2, 16, 0, 4, "$/content/Ambient/Roaming/event_herbalist_intro", 63, 2, 190.0f, 2, 75, 0);
		Function_508(&Global_17483[1975] + 120, 1, 6.0f, 1, 752);
		Function_504(&Global_17483[1975] + 120, 20.0f);
		Function_505(&Global_17483[1975] + 120, 5,9f, 0,3f);
		Function_506(&Global_17483[1975] + 120, -4.0f, 4);
		Function_502(&Global_17483[1975] + 120);
		Function_509(20, 2, 100, 4294967271, 100, 2, 16, 0, 4, "$/content/Ambient/Roaming/event_hunter_intro", 63, 2, 190.0f, 18, 75, 0);
		Function_508(&Global_17483[2075] + 120, 2, 6.0f, 1, 752);
		Function_504(&Global_17483[2075] + 120, 20.0f);
		Function_505(&Global_17483[2075] + 120, 5,9f, 0,3f);
		Function_506(&Global_17483[2075] + 120, -4.0f, 4);
		Function_502(&Global_17483[2075] + 120);
		Function_509(34, 2, 100, 4294967271, 100, 2, 32, 0, 4, "$/content/Ambient/Roaming/event_sharpshooter_challenge", 63, 2, 190.0f, 2, 55, 0);
		Function_508(&Global_17483[3475] + 120, 0, 5.0f, 1, 752);
		Function_504(&Global_17483[3475] + 120, 16.0f);
		Function_505(&Global_17483[2075] + 120, 8,9f, 0,3f);
		Function_506(&Global_17483[3475] + 120, 0.0f, 4);
		Function_502(&Global_17483[3475] + 120);
	}
	else
	{
		Function_503(42, "$/content/Ambient/Roaming/event_wild_animals");
		Function_503(26, "$/content/Ambient/Roaming/event_predator_prey");
		Function_503(24, "$/content/Ambient/Roaming/event_loot_dead_body");
		Function_503(25, "$/content/Ambient/Roaming/event_mourn_dead_body");
		Function_503(17, "$/content/Ambient/Roaming/event_generic_1v1");
		Function_503(38, "$/content/Ambient/Roaming/event_treasurehunter_intro");
		Function_503(19, "$/content/Ambient/Roaming/event_herbalist_intro");
		Function_503(20, "$/content/Ambient/Roaming/event_hunter_intro");
		Function_503(34, "$/content/Ambient/Roaming/event_sharpshooter_challenge");
		Function_503(40, "$/content/Ambient/Town/event_ultra_high_honor");
		Function_503(39, "$/content/Ambient/Town/event_ultra_high_fame");
	}
	if (!Global_3420)
	{
		Function_509(22, 0, 0, 50, 15, 3, 0, 4, 8, "$/content/Ambient/Traffic/tevent_lone_lawman", 63, 2, 25.0f, 2, 55, 0);
		Function_499(&Global_17483[2275] + 120, 1, 0);
		Function_509(44, 2, 25, 0, 15, 3, 0, 0, 8, "$/content/Ambient/Traffic/tevent_wilderness_pisser", 63, 2, 65.0f, 2, 45, 0);
		Function_499(&Global_17483[4475] + 120, 1, 0);
		Function_509(37, 2, 40, 35, 75, 2, 8, 1, 16, "$/content/Ambient/Beacons/beacon_transport_dynomite", 31, 2, 190.0f, 27, 60, 0);
		Function_508(&Global_17483[3775] + 120, 1, 8.0f, 64, 752);
		Function_507(&Global_17483[3775] + 120, 68.0f);
		Function_501(&Global_17483[3775] + 120, 5,9f, 8.0f);
		Function_500(&Global_17483[3775] + 120, 0,3f, 4.0f);
		Function_504(&Global_17483[3775] + 120, 8.0f);
		Function_506(&Global_17483[3775] + 120, -4.0f, 4);
		Function_498(37, 2);
		Function_502(&Global_17483[3775] + 120);
		Function_509(12, 2, 40, 30, 55, 2, 16, 1, 16, "$/content/Ambient/Beacons/beacon_escort_criminals", 31, 2, 190.0f, 25, 55, 0);
		Function_508(&Global_17483[1275] + 120, 1, 5.0f, 1, 736);
		Function_504(&Global_17483[1275] + 120, 24.0f);
		Function_501(&Global_17483[1275] + 120, 10,9f, 4.0f);
		Function_500(&Global_17483[1275] + 120, 0,3f, 8.0f);
		Function_506(&Global_17483[1275] + 120, 0.0f, 4);
		Function_498(12, 3);
		Function_502(&Global_17483[1275] + 120);
		Function_509(13, 2, 40, 10, 25, 2, 0, 0, 16, "$/content/Ambient/Beacons/beacon_escort_wavedown", 31, 2, 170.0f, 25, 55, 0);
		Function_508(&Global_17483[1375] + 120, 1, 8.0f, 64, 752);
		Function_507(&Global_17483[1375] + 120, 12.0f);
		Function_504(&Global_17483[1375] + 120, 4.0f);
		Function_501(&Global_17483[1375] + 120, 15,9f, 4.0f);
		Function_500(&Global_17483[1375] + 120, 0,4f, 8.0f);
		Function_506(&Global_17483[1375] + 120, 0.0f, 4);
		Function_498(13, 3);
	}
	else
	{
		Function_503(22, "$/content/Ambient/Traffic/tevent_lone_lawman");
		Function_503(33, "$/content/Ambient/Traffic/tevent_rowdy_gangs");
		Function_503(36, "$/content/Ambient/Traffic/tevent_town_buildingEnter");
		Function_503(44, "$/content/Ambient/Traffic/tevent_wilderness_pisser");
		Function_503(37, "$/content/Ambient/Beacons/beacon_transport_dynomite");
		Function_503(12, "$/content/Ambient/Beacons/beacon_escort_criminals");
		Function_503(13, "$/content/Ambient/Beacons/beacon_escort_wavedown");
		Function_503(13, "$/content/Ambient/Traffic/tevent_town_buildingEnter");
	}
	Function_509(49, 2, 125, 4294967246, 50, 3, 32768, 0, 16, "$/content/Ambient/Roaming/event_proc_matkdef", 31, 2, 160.0f, 8, 70, 0);
	Function_499(&Global_17483[4975] + 120, 2, 1);
	Function_498(49, 1);
	Function_503(45, "$/content/Ambient/Roaming/mh_named_bear");
	Function_503(46, "$/content/Ambient/Roaming/mh_named_boar");
	Function_503(47, "$/content/Ambient/Roaming/mh_named_cougar");
	Function_503(48, "$/content/Ambient/Roaming/mh_named_wolf");
	Function_503(2, "$/content/Ambient/Town/beat_crime_holdup");
	Function_503(33, "$/content/Ambient/Traffic/tevent_rowdy_gangs");
	Function_503(9, "$/content/Ambient/Town/beat_duel_notoriety");
	Function_503(8, "$/content/Ambient/Town/beat_duel_lowhonor");
	Function_503(10, "$/content/Ambient/Town/beat_duel_rude");
	Function_503(41, "$/content/Ambient/Town/event_unforgiven");
	Function_503(18, "$/content/Ambient/Roaming/event_hangingb");
	Function_503(15, "$/Content/Ambient/Town/first_time_duel");
	Function_503(35, "$/content/Ambient/Town/beat_town_abduction");
	Function_503(14, "$/Content/Ambient/Town/first_time_chuparosa");
	Function_503(11, "$/Content/Ambient/Town/beat_escalera_firesquad");
	Function_503(21, "$/content/Ambient/Roaming/event_last_buffalo");
	Function_503(16, "$/Content/Ambient/Town/first_time_manzanita");
	Function_503(7, "$/content/Ambient/Roaming/event_donkey_lead");
	Function_503(28, "$/content/Ambient/Roaming/event_roadside_aftermath");
	Function_503(27, "$/content/Ambient/MexicanRevolution/mexican_rev_rally");
	Function_503(30, "$/content/Ambient/Roaming/event_roadside_execution");
	Function_497();
	return;
}

void Function_497() //Position: 0x1EAC2 / 125634
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_16876)
	{
		PRINTNL();
		iVar0++;
	}
	return;
}

void Function_498(int iParam0, int iParam1) //Position: 0x1EADF / 125663
{
	Global_17483[iParam075].f_272 = iParam1;
	return;
}

void Function_499(int iParam0, int iParam1, int iParam2) //Position: 0x1EAF1 / 125681
{
	iParam0->f_120 = iParam1;
	(iParam0 + 120)->f_4 = iParam2;
	return;
}

void Function_500(int iParam0, float fParam1, int iParam2) //Position: 0x1EB05 / 125701
{
	(iParam0 + 60)->f_52 = fParam1;
	(iParam0 + 60)->f_56 = iParam2;
	return;
}

void Function_501(int iParam0, float fParam1, int iParam2) //Position: 0x1EB1B / 125723
{
	(iParam0 + 60)->f_44 = fParam1;
	(iParam0 + 60)->f_48 = iParam2;
	return;
}

void Function_502(int iParam0) //Position: 0x1EB31 / 125745
{
	iParam0->f_16 = 1;
	return;
}

void Function_503(int iParam0, bool bParam1) //Position: 0x1EB3C / 125756
{
	if (!Function_491(iParam0))
	{
		return;
	}
	Global_17483[iParam075].f_96 = GET_ASSET_ID(bParam1, 4);
	return;
}

void Function_504(int iParam0, int iParam1) //Position: 0x1EB5B / 125787
{
	(iParam0 + 60)->f_32 = iParam1;
	return;
}

void Function_505(int iParam0, float fParam1, int iParam2) //Position: 0x1EB69 / 125801
{
	(iParam0 + 60)->f_44 = fParam1;
	(iParam0 + 60)->f_52 = iParam2;
	return;
}

void Function_506(int iParam0, float fParam1, int iParam2) //Position: 0x1EB7F / 125823
{
	(iParam0 + 60)->f_24 = fParam1;
	(iParam0 + 60)->f_12 = iParam2;
	return;
}

void Function_507(int iParam0, int iParam1) //Position: 0x1EB95 / 125845
{
	(iParam0 + 60)->f_20 = iParam1;
	return;
}

void Function_508(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4) //Position: 0x1EBA3 / 125859
{
	iParam0->f_60 = iParam1;
	(iParam0 + 60)->f_4 = fParam2;
	(iParam0 + 60)->f_8 = iParam3;
	(iParam0 + 60)->f_16 = iParam4;
}

void Function_509(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9, int iParam10, int iParam11, float fParam12, int iParam13, bool bParam14, int iParam15) //Position: 0x1EBC9 / 125897
{
	var uVar0;
	int iVar1;
	bool bVar2;
	char* cVar3[64];
	
	if (!Function_491(iParam0))
	{
		return;
	}
	Global_17483[iParam075][0] = iParam2;
	Global_17483[iParam075][1] = iParam3;
	Global_17483[iParam075][2] = iParam4;
	(*&Global_17483[iParam075] + 16)[0] = ROUND((IntToFloat(iParam2) * 0,5f));
	(*&Global_17483[iParam075] + 16)[1] = ROUND((IntToFloat(iParam3) * 0,5f));
	(*&Global_17483[iParam075] + 16)[2] = ROUND((IntToFloat(iParam4) * 0,5f));
	(*&Global_17483[iParam075] + 32)[0] = (Global_17483[iParam075][0] - (*&Global_17483[iParam075] + 16)[0]);
	(*&Global_17483[iParam075] + 32)[1] = (Global_17483[iParam075][1] - (*&Global_17483[iParam075] + 16)[1]);
	(*&Global_17483[iParam075] + 32)[2] = (Global_17483[iParam075][2] - (*&Global_17483[iParam075] + 16)[2]);
	Global_17483[iParam075].f_76 = iParam1;
	Global_17483[iParam075].f_120 = iParam5;
	(&Global_17483[iParam075] + 120)->f_4 = iParam6;
	(&Global_17483[iParam075] + 120)->f_8 = iParam13;
	Global_17483[iParam075].f_80 = iParam7;
	Global_17483[iParam075].f_84 = iParam8;
	Global_17483[iParam075].f_92 = 4294967295;
	Global_17483[iParam075].f_88 = iParam15;
	Global_17483[iParam075].f_96 = GET_ASSET_ID(cParam9, 4);
	Global_17483[iParam075].f_100 = iParam10;
	Global_17483[iParam075].f_104 = iParam11;
	Global_17483[iParam075].f_72 = fParam12;
	(&Global_17483[iParam075] + 120)->f_128 = 0;
	strcpy(&Global_17483[iParam075] + 120 + 24, "", 8);
	(&Global_17483[iParam075] + 120 + 24)->f_8 = 50.0f;
	(&Global_17483[iParam075] + 120 + 24)->f_12 = 4294967295;
	(&Global_17483[iParam075] + 120)->f_60 = 1;
	(&Global_17483[iParam075] + 120 + 60)->f_4 = 0.0f;
	(&Global_17483[iParam075] + 120 + 60)->f_8 = 4294967295;
	(&Global_17483[iParam075] + 120 + 60)->f_12 = 4294967295;
	(&Global_17483[iParam075] + 120 + 60)->f_16 = 4294967295;
	(&Global_17483[iParam075] + 120 + 60)->f_20 = 0.0f;
	(&Global_17483[iParam075] + 120 + 60)->f_24 = 0.0f;
	(&Global_17483[iParam075] + 120 + 60)->f_32 = 0.0f;
	(&Global_17483[iParam075] + 120 + 60)->f_20 = 0.0f;
	(&Global_17483[iParam075] + 120 + 60)->f_28 = 0.0f;
	(&Global_17483[iParam075] + 120 + 60)->f_36 = 0.0f;
	(&Global_17483[iParam075] + 120 + 60)->f_40 = 0.0f;
	(&Global_17483[iParam075] + 120 + 60)->f_44 = 0.0f;
	(&Global_17483[iParam075] + 120 + 60)->f_52 = 0.0f;
	(&Global_17483[iParam075] + 120 + 60)->f_48 = 0.0f;
	(&Global_17483[iParam075] + 120 + 60)->f_56 = 0.0f;
	(&Global_17483[iParam075] + 120)->f_120 = 0;
	Global_63398 = 30.0f;
	if (!UNK_0x214AFB8C(Global_16876[iParam06].f_20))
	{
		iVar1 = MAKE_TIME_OF_DAY_EX(true, false, 0, 0);
		if (!Global_3365)
		{
			if (Global_3420)
			{
				bVar2 = false;
				ADD_TIME(&iVar1, 0, 7, bVar2, 0);
			}
			else
			{
				if (iParam6 == 2)
				{
					bVar2 = false;
				}
				else
				{
					bVar2 = Function_239(1200);
					bVar2 = RAND_INT_RANGE(30, bVar2);
				}
				ADD_TIME(&iVar1, 0, 7, bVar2, 0);
			}
		}
		Function_510(iParam0, Global_17483[iParam075].f_96);
		Global_17483[iParam075].f_264 = iVar1;
		Global_16876[iParam06] = iVar1;
	}
	else
	{
		Global_17483[iParam075].f_264 = Global_16876[iParam06];
	}
	bParam14 = Function_239(bParam14 * 60);
	ADD_TIME(&uVar0, 0, false, bParam14, 0);
	Global_17483[iParam075].f_260 = uVar0;
	Global_17483[iParam075].f_268 = -1.0f;
	Global_17483[iParam075].f_276 = 4294967295;
	Global_17483[iParam075].f_272 = 4294967295;
	strcpy(&cVar3, "RUN ", 64);
	stradd(&cVar3, bParam9, 64);
	Global_25263++;
}

int Function_510(int iParam0, int iParam1) //Position: 0x1EF59 / 126809
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	Global_16876[iParam06].f_20 = iParam1;
	return 1;
}

void Function_511() //Position: 0x1EF7A / 126842
{
	return;
}

void Function_512(int iParam0) //Position: 0x1EF80 / 126848
{
	strcpy(iParam0 + 12, "BEAT VALIDATORC", 16);
	*iParam0 = 78857;
	iParam0->f_4 = 126906;
	iParam0->f_8 = 78857;
	iParam0->f_28 = 1;
	return;
}

int Function_513() //Position: 0x1EFBA / 126906
{
	if (Function_5(1024))
	{
		Function_514();
	}
	return 0;
}

void Function_514() //Position: 0x1EFCD / 126925
{
	var uVar0;
	
	if (bLocal_510)
	{
		Function_515(&uVar0);
	}
	return;
}

void Function_515(int iParam0) //Position: 0x1EFDE / 126942
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 35;
	iVar1 = 100;
	iVar2 = iVar0;
	iVar3 = iVar0;
	while (iVar2 <= iVar0 && iVar2 >= iVar1)
	{
		iVar3 = iVar2;
		iVar3++;
		if (Function_517(iVar2, iParam0))
		{
			Function_516(iVar2);
			Global_17483[iVar275].f_284 = 1;
		}
		else
		{
			Global_17483[iVar275].f_284 = 0;
		}
		iVar2 = iVar3;
	}
	return;
}

void Function_516(int iParam0) //Position: 0x1F03B / 127035
{
	if (Global_25264 > 55)
	{
		LOG_ERROR("giNumValidBeats is higher than CONST_MaxNumValidBeats");
	}
	Global_25059[Global_25264] = iParam0;
	Global_25264++;
	return;
}

bool Function_517(int iParam0, int iParam1) //Position: 0x1F096 / 127126
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	
	if (Global_17483[iParam075].f_120 == 0)
	{
		return 0;
	}
	if (Global_17483[iParam075].f_292)
	{
		Global_26147 = 1;
		Global_26148 = iParam0;
		Function_347(0, 0);
		Global_17483[iParam075].f_292 = 1;
		Global_17483[iParam075].f_288 = 1;
		return 1;
	}
	if (Global_26147 == 1)
	{
		return 0;
	}
	if (Global_17483[iParam075].f_68 < GET_CURRENT_GAME_TIME())
	{
		return 0;
	}
	if (Global_3400)
	{
		bVar0 = GET_TIME_OF_DAY();
		ADD_TIME(&bVar0, 0, 10, false, 0);
	}
	else
	{
		bVar0 = GET_TIME_OF_DAY();
	}
	if (IS_EARLIER_THAN(bVar0, Global_17483[iParam075].f_264))
	{
		return 0;
	}
	iVar1 = StackVal;
	bVar2 = StackVal;
	if (!Function_100(StackVal, 0) && Global_3365)
	{
		return 0;
	}
	if (!(&Global_17483[iParam075] + 120)->f_20)
	{
		return 0;
	}
	if (UNK_0x214AFB8C((&Global_17483[iParam075] + 120)->f_12))
	{
		if (Global_16876[iParam06].f_12 < 0)
		{
			return 0;
		}
	}
	if (iVar1 & 2 == 2)
	{
		if (Function_385(Global_17483[iParam075].f_88) == 1)
		{
			return 0;
		}
	}
	if (iVar1 & 8192 == 8192)
	{
		if (Function_88() <= 6)
		{
			return 0;
		}
	}
	if (iVar1 & 16384 == 16384)
	{
		if (Function_88() >= 0)
		{
			return 0;
		}
	}
	if (iVar1 & 4096 == 4096)
	{
		return 0;
	}
	if (iVar1 & 64 == 64)
	{
		if (!Function_537())
		{
			return 0;
		}
	}
	if (iVar1 & 2048 == 2048)
	{
		if (!Function_536(GET_ASSET_NAME(Global_17483[iParam075].f_96, 4)))
		{
			return 0;
		}
	}
	if (Global_17483[iParam075].f_92 == 4294967294)
	{
		Global_17483[iParam075].f_92 = Global_29006;
	}
	if (!Function_535(Global_17483[iParam075].f_84, iParam1))
	{
		return 0;
	}
	if (!Function_489(Global_17483[iParam075].f_96))
	{
		return 0;
	}
	if (!Global_17483[iParam075].f_272 != 4294967295)
	{
		if (!Function_534(Global_17483[iParam075].f_272))
		{
			return 0;
		}
	}
	switch (Global_17483[iParam075].f_120)
	{
		case 0x00000004:
			if (!Function_531((&Global_17483[iParam075] + 120)->f_120) < 0)
			{
				return 0;
			}
			break;
		
		case 0x00000007:
			switch ((&Global_17483[iParam075] + 120)->f_128)
			{
				case 0x00000001:
					bVar3 = Function_528(Global_29004, Global_29005, Global_29006, bVar2, 1);
					if (IS_PERS_CHAR_VALID(bVar3))
					{
						if (IS_PERS_CHAR_ALIVE(bVar3))
						{
							return 0;
						}
					}
					break;
				
				case 0x00000002:
					iVar5 = 0;
					while (StackVal <= (iVar5 - bVar2) + 1)
					{
						bVar3 = Function_528(Global_29004, Global_29005, Global_29006, (bVar2 + iVar5), 1);
						if (IS_PERS_CHAR_VALID(bVar3))
						{
							if (IS_PERS_CHAR_ALIVE(bVar3))
							{
								iVar4++;
							}
						}
						iVar5++;
					}
					if (iVar4 >= 0)
					{
						return 0;
					}
					break;
				
				case 0x00000003:
					if (!IS_ACTOR_IN_VOLUME(GET_PLAYER_ACTOR(0), bVar2))
					{
						return 0;
					}
					break;
				
				case 0x00000004:
					if (!IS_ACTOR_IN_VOLUME(GET_PLAYER_ACTOR(0), bVar2))
					{
						return 0;
					}
					break;
				
				default:
					LOG_ERROR("TRIGGER_NONE event type??");
					return 0;
					break;
			}
			break;
	}
	switch (Global_17483[iParam075].f_76)
	{
		case 0x00000002:
			if (!Global_29007 != 2)
			{
				return 0;
			}
			break;
		
		case 0x00000003:
			if (!Global_29007 != 5)
			{
				return 0;
			}
			break;
		
		case 0x00000001:
			if (iVar1 & 2 == 2)
			{
				if (!Function_527())
				{
					return 0;
				}
			}
			if (iVar1 & 131072 == 131072)
			{
				if (Global_29007 == 4)
				{
					return 0;
				}
			}
			if (!(Global_29007 != 3 || Global_29007 != 4))
			{
				return 0;
			}
			break;
	}
	if (!(Global_17483[iParam075].f_100 && Global_63399) != Global_63399)
	{
		return 0;
	}
	switch (Global_17483[iParam075].f_80)
	{
		case 0x00000002:
			if (!Function_526())
			{
				return 0;
			}
			if (Global_3380)
			{
				return 0;
			}
			break;
		
		case 0x00000001:
			if (Global_3380)
			{
				return 0;
			}
			break;
		
		case 0x00000000:
			if (Global_3380)
			{
				return 0;
			}
			break;
		
		case 0x00000003:
			if (!Function_524())
			{
				return 0;
			}
			break;
		
		case 0x00000004:
			if (Global_3403 || Global_3405)
			{
				return 0;
			}
			if (!Function_521(1))
			{
				return 0;
			}
			if (!Function_520(StackVal, 0, Global_26361.f_12))
			{
				return 0;
			}
			break;
	}
	switch (Global_17483[iParam075].f_84)
	{
		case 0x00000800:
			if (Global_3380)
			{
				return 0;
			}
			break;
		
		case 0x00000080:
			if (Global_3380)
			{
				return 0;
			}
			break;
		
		case 0x00000004:
			if (Global_3380)
			{
				return 0;
			}
			break;
		
		case 0x00000010:
			if (Global_3380)
			{
				return 0;
			}
			if (!Function_519(1, 0))
			{
				return 0;
			}
			break;
		
		case 0x00000008:
			if (Global_29007 == 5)
			{
				return 0;
			}
			if (Global_3380)
			{
				return 0;
			}
			break;
		
		case 0x00000200:
			if (!Function_518())
			{
				return 0;
			}
			if (!Global_29007 != 2)
			{
				return 0;
			}
			if (!IS_PERS_CHAR_VALID(Global_8492[bVar214]))
			{
				return 0;
			}
			if (!DECOR_CHECK_EXIST(Global_8492[bVar214], "mission_avail"))
			{
				return 0;
			}
			if (!Global_29003 != Global_29004)
			{
				return 0;
			}
			break;
		
		case 0x00000400:
			if ((HUD_IS_FADED() || HUD_IS_FADING()) || Global_3391)
			{
				return 0;
			}
			if (Global_3380)
			{
				return 0;
			}
			if (Global_3382)
			{
				return 0;
			}
			break;
	}
	if (!Global_17483[iParam075].f_276 != 4294967295 && !Global_17483[iParam075].f_276 != Function_209())
	{
		return 0;
	}
	return 1;
}

bool Function_518() //Position: 0x1F5DD / 128477
{
	if (Global_3382)
	{
		return 0;
	}
	if (Global_3380)
	{
		return 0;
	}
	if (Global_3392)
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
	if (!Global_29007 != 2)
	{
		return 0;
	}
	if (!IS_EARLIER_THAN(Global_12976.f_12, false))
	{
		return 0;
	}
	if (IS_EARLIER_THAN(Global_12976.f_16, false))
	{
		return 1;
	}
	return 0;
}

bool Function_519(int iParam0, int iParam1) //Position: 0x1F638 / 128568
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

bool Function_520(int iParam0, int iParam1, bool bParam2) //Position: 0x1F69B / 128667
{
	if (!Function_149(bParam2) && iParam1 != 0)
	{
		return 0;
	}
	if ((!iParam1 != (*&Global_26316 + 72)[iParam0] && !iParam1 != 0) && !Function_350(0x1000000))
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(GET_PLAYER_ACTOR(0)))
	{
		return 0;
	}
	if (!IS_ACTOR_ALIVE(GET_PLAYER_ACTOR(0)))
	{
		return 0;
	}
	return 0;
}

bool Function_521(bool bParam0) //Position: 0x1F6EE / 128750
{
	if (Function_350(256))
	{
		return 0;
	}
	if (Function_350(262144))
	{
		return 0;
	}
	if (Function_523())
	{
		return 0;
	}
	if (!Function_350(1))
	{
		return 0;
	}
	if (!Function_350(4096))
	{
		return 0;
	}
	if (bParam0 && Function_522(12))
	{
		return 0;
	}
	if (Global_3378)
	{
		return 0;
	}
	if (Function_350(2048))
	{
		return 0;
	}
	if (Function_1() || !bParam0)
	{
		if (Global_29007 != 2 || Global_29007 != 5)
		{
			return 0;
		}
	}
	return 1;
}

bool Function_522(int iParam0) //Position: 0x1F764 / 128868
{
	if (Global_28178 == iParam0)
	{
		return 1;
	}
	return 0;
}

bool Function_523() //Position: 0x1F775 / 128885
{
	if (Global_30619 == 2)
	{
		if (StackVal == 1)
		{
			return 1;
		}
	}
	return 0;
}

bool Function_524() //Position: 0x1F78E / 128910
{
	if (Function_525() != 0 && Global_3365)
	{
		return 0;
	}
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
	if (Global_3384)
	{
		return 0;
	}
	if (Global_3380)
	{
		return 0;
	}
	if (Global_3392)
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
	if (IS_EARLIER_THAN(Global_12976.f_20, false) || Global_3400)
	{
		return 1;
	}
	return 0;
}

int Function_525() //Position: 0x1F7F9 / 129017
{
	return Global_12976.f_156;
}

bool Function_526() //Position: 0x1F804 / 129028
{
	if (!IS_EARLIER_THAN(Global_12976, false))
	{
		return 0;
	}
	return 1;
}

bool Function_527() //Position: 0x1F818 / 129048
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
	if (Global_3384)
	{
		return 0;
	}
	if (Global_3380)
	{
		return 0;
	}
	if (Global_3392)
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
	return 1;
}

bool Function_528(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x1F863 / 129123
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
								return Function_529(&Global_6298, &Global_7189, bParam3);
								break;
							
							case 0x00000001:
								return Function_529(&Global_6364, &Global_7287, bParam3);
								break;
							
							case 0x00000002:
								return Function_529(&Global_6351, &Global_7268, bParam3);
								break;
							
							default:
								return Function_529(&Global_6391, &Global_7327, bParam3);
								break;
						}
						break;
					
					case 0x00000001:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_529(&Global_6501, &Global_7490, bParam3);
								break;
							
							case 0x00000001:
								return Function_529(&Global_6402, &Global_7343, bParam3);
								break;
							
							case 0x00000003:
								return Function_529(&Global_6433, &Global_7389, bParam3);
								break;
							
							case 0x00000002:
								return Function_529(&Global_6490, &Global_7474, bParam3);
								break;
							
							case 0x00000004:
								return Function_529(&Global_6537, &Global_7543, bParam3);
								break;
							
							default:
								return Function_529(&Global_6532, &Global_7536, bParam3);
								break;
						}
						break;
					
					case 0x00000002:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_529(&Global_6563, &Global_7581, bParam3);
								break;
							
							case 0x00000001:
								return Function_529(&Global_6614, &Global_7657, bParam3);
								break;
							
							case 0x00000002:
								return Function_529(&Global_6643, &Global_7700, bParam3);
								break;
							
							default:
								return Function_529(&Global_6550, &Global_7562, bParam3);
								break;
						}
						break;
					
					case 0x00000003:
						switch (bVar1)
						{
							case 0x00000001:
								return Function_529(&Global_6667, &Global_7735, bParam3);
								break;
							
							default:
								return Function_529(&Global_6704, &Global_7790, bParam3);
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
								return Function_529(&Global_6709, &Global_7797, bParam3);
								break;
							
							case 0x00000001:
								return Function_529(&Global_6764, &Global_7879, bParam3);
								break;
							
							case 0x00000002:
								return Function_529(&Global_6785, &Global_7910, bParam3);
								break;
							
							default:
								return Function_529(&Global_6810, &Global_7947, bParam3);
								break;
						}
						break;
					
					case 0x00000002:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_529(&Global_6815, &Global_7954, bParam3);
								break;
							
							default:
								return Function_529(&Global_6928, &Global_8122, bParam3);
								break;
						}
						break;
					
					case 0x00000001:
						switch (bVar1)
						{
							case 0x00000002:
								return Function_529(&Global_6933, &Global_8129, bParam3);
								break;
							
							case 0x00000001:
								return Function_529(&Global_6962, &Global_8172, bParam3);
								break;
							
							case 0x00000003:
								return Function_529(&Global_6987, &Global_8209, bParam3);
								break;
							
							default:
								return Function_529(&Global_7027, &Global_8268, bParam3);
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
		return Function_529(&Global_6298, &Global_7189, bParam3);
	}
	if (bVar1 == Global_30640[1])
	{
		return Function_529(&Global_6364, &Global_7287, bParam3);
	}
	if (bVar1 == Global_30640[2])
	{
		return Function_529(&Global_6351, &Global_7268, bParam3);
	}
	if (bVar1 == Global_30658[0])
	{
		return Function_529(&Global_6501, &Global_7490, bParam3);
	}
	if (bVar1 == Global_30658[1])
	{
		return Function_529(&Global_6402, &Global_7343, bParam3);
	}
	if (bVar1 == Global_30658[3])
	{
		return Function_529(&Global_6433, &Global_7389, bParam3);
	}
	if (bVar1 == Global_30658[2])
	{
		return Function_529(&Global_6490, &Global_7474, bParam3);
	}
	if (bVar1 == Global_30658[4])
	{
		return Function_529(&Global_6537, &Global_7543, bParam3);
	}
	if (bVar1 == Global_30668[0])
	{
		return Function_529(&Global_6563, &Global_7581, bParam3);
	}
	if (bVar1 == Global_30668[1])
	{
		return Function_529(&Global_6614, &Global_7657, bParam3);
	}
	if (bVar1 == Global_30668[2])
	{
		return Function_529(&Global_6643, &Global_7700, bParam3);
	}
	if (bVar1 == Global_30679[1])
	{
		return Function_529(&Global_6667, &Global_7735, bParam3);
	}
	if (bVar1 == Global_30685[0])
	{
		return Function_529(&Global_6709, &Global_7797, bParam3);
	}
	if (bVar1 == Global_30685[1])
	{
		return Function_529(&Global_6764, &Global_7879, bParam3);
	}
	if (bVar1 == Global_30685[2])
	{
		return Function_529(&Global_6785, &Global_7910, bParam3);
	}
	if (bVar1 == Global_30693[0])
	{
		return Function_529(&Global_6815, &Global_7954, bParam3);
	}
	if (bVar1 == Global_30707[2])
	{
		return Function_529(&Global_6933, &Global_8129, bParam3);
	}
	if (bVar1 == Global_30707[1])
	{
		return Function_529(&Global_6962, &Global_8172, bParam3);
	}
	if (bVar1 == Global_30707[3])
	{
		return Function_529(&Global_6987, &Global_8209, bParam3);
	}
	if (bVar1 == Global_30628[0])
	{
		return Function_529(&Global_6391, &Global_7327, bParam3);
	}
	if (bVar1 == Global_30628[1])
	{
		return Function_529(&Global_6532, &Global_7536, bParam3);
	}
	if (bVar1 == Global_30628[2])
	{
		return Function_529(&Global_6550, &Global_7562, bParam3);
	}
	if (bVar1 == Global_30628[3])
	{
		return Function_529(&Global_6704, &Global_7790, bParam3);
	}
	if (bVar1 == Global_30633[0])
	{
		return Function_529(&Global_6810, &Global_7947, bParam3);
	}
	if (bVar1 == Global_30633[2])
	{
		return Function_529(&Global_6928, &Global_8122, bParam3);
	}
	if (bVar1 == Global_30633[1])
	{
		return Function_529(&Global_7027, &Global_8268, bParam3);
	}
	return "";
}

var Function_529(var uParam0, var uParam1, bool bParam2) //Position: 0x1FE78 / 130680
{
	int iVar0;
	
	iVar0 = bParam2;
	if (iVar0 <= *uParam0 || iVar0 > 0)
	{
		return "";
	}
	if (!Function_530(uParam0[iVar02], 2))
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

bool Function_530(var uParam0, int iParam1) //Position: 0x1FECA / 130762
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_531(int iParam0) //Position: 0x1FEE6 / 130790
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
			if (Function_532(GET_SQUAD_FROM_OBJECT(bVar2)) == iParam0)
			{
				iVar0++;
			}
			bVar2 = OBJECT_ITERATOR_NEXT(bVar1);
		}
	}
	DESTROY_ITERATOR(bVar1);
	return iVar0;
}

int Function_532(bool bParam0) //Position: 0x1FF41 / 130881
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return 4294967295;
	}
	bVar0 = Function_533(bParam0);
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

int Function_533(bool bParam0) //Position: 0x1FF79 / 130937
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

bool Function_534(int iParam0) //Position: 0x1FFBF / 131007
{
	if (iParam0 >= 4294967295 && iParam0 <= 4)
	{
		return 0;
	}
	return Global_25965[iParam0];
}

bool Function_535(int iParam0, int iParam1) //Position: 0x1FFDA / 131034
{
	if ((*iParam1 && iParam0) == iParam0)
	{
		return 1;
	}
	if (Function_490(iParam0))
	{
		*iParam1 = (*iParam1 || iParam0);
		return 1;
	}
	else
	{
		return 0;
	}
}

bool Function_536(bool bParam0) //Position: 0x20005 / 131077
{
	if (STRING_CONTAINS_STRING(bParam0, "nnotoriety"))
	{
		if (Function_525() >= 1 && Global_3365)
		{
			return 0;
		}
	}
	if (STRING_CONTAINS_STRING(bParam0, "lowhonor"))
	{
		if (Function_88() <= 3 && Global_3365)
		{
			return 0;
		}
	}
	if (!IS_EARLIER_THAN(Global_12976.f_76, false))
	{
		return 0;
	}
	if (Global_3367)
	{
		return 0;
	}
	return 1;
}

bool Function_537() //Position: 0x20069 / 131177
{
	if (!IS_SCRIPT_VALID(Global_6281))
	{
		Global_3367 = 0;
	}
	if (IS_ACTOR_ON_TRAIN(Global_34573, 0))
	{
		return 0;
	}
	if (IS_ACTOR_DRUNK(Global_34573))
	{
		return 0;
	}
	if (Function_538())
	{
		return 0;
	}
	if (Global_3394)
	{
		return 0;
	}
	if (Global_3410)
	{
		return 0;
	}
	if (Global_3367)
	{
		return 0;
	}
	if (Global_3403)
	{
		return 0;
	}
	if (Global_3369)
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
	if (Global_3384)
	{
		return 0;
	}
	if (Global_3380)
	{
		return 0;
	}
	if (Global_3392)
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
	if (Global_3387)
	{
		return 0;
	}
	if (!IS_EARLIER_THAN(Global_12976.f_20, false) && !Global_3400)
	{
		return 0;
	}
	return 1;
}

bool Function_538() //Position: 0x2011D / 131357
{
	int iVar0;
	int iVar1;
	
	if (Global_3386)
	{
		iVar1 = 9;
	}
	else
	{
		iVar1 = 22;
	}
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
			if (DECOR_CHECK_EXIST(StackVal, "script"))
			{
				if (IS_SCRIPT_VALID(DECOR_GET_INT(StackVal, "script")))
				{
					if (StackVal != DECOR_GET_INT(GET_THIS_SCRIPT_ID(), "script"))
					{
						if (Function_539(StackVal, Global_34573) > IntToFloat(iVar1))
						{
							return 1;
						}
					}
				}
			}
			if (Function_539(StackVal, Global_34573) > IntToFloat(iVar1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

float Function_539(bool bParam0, bool bParam1) //Position: 0x201D8 / 131544
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_OBJECT_VALID(bParam1))
		{
			Function_65(bParam0);
			vVar0 = { StackVal, StackVal, Function_65(bParam0) };
			Function_540(bParam1);
			vVar3 = { StackVal, StackVal, Function_540(bParam1) };
			return VDIST(vVar0, vVar3);
		}
	}
	LOG_ERROR("Attempting to get distance between actor and object, where at least one is INVALID! Returning 0.0!");
	return 0.0f;
}

vector3 Function_540(bool bParam0) //Position: 0x20278 / 131704
{
	vector3 vVar0;
	
	if (IS_OBJECT_VALID(bParam0))
	{
		GET_OBJECT_POSITION(bParam0, &vVar0);
		return StackVal, StackVal, vVar0;
	}
	LOG_ERROR("Attempting to get location of INVALID object. Returning << 0,0,0 >>.");
	return StackVal, StackVal, vVar0;
}

void Function_541(int iParam0) //Position: 0x202E4 / 131812
{
	strcpy(iParam0 + 12, "BEAT VALIDATORB", 16);
	*iParam0 = 78857;
	iParam0->f_4 = 131870;
	iParam0->f_8 = 78857;
	iParam0->f_28 = 1;
	return;
}

int Function_542() //Position: 0x2031E / 131870
{
	if (Function_5(1024))
	{
		Function_543();
	}
	return 0;
}

void Function_543() //Position: 0x20331 / 131889
{
	var uVar0;
	
	if (bLocal_510)
	{
		Function_544(&uVar0);
	}
	return;
}

void Function_544(int iParam0) //Position: 0x20342 / 131906
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 17;
	iVar1 = 34;
	iVar2 = iVar0;
	iVar3 = iVar0;
	while (iVar2 <= iVar0 && iVar2 >= iVar1)
	{
		iVar3 = iVar2;
		iVar3++;
		if (Function_517(iVar2, iParam0))
		{
			Function_516(iVar2);
			Global_17483[iVar275].f_284 = 1;
		}
		else
		{
			Global_17483[iVar275].f_284 = 0;
		}
		iVar2 = iVar3;
	}
	return;
}

void Function_545(int iParam0) //Position: 0x2039F / 131999
{
	strcpy(iParam0 + 12, "BEAT VALIDATORA", 16);
	*iParam0 = 78857;
	iParam0->f_4 = 132057;
	iParam0->f_8 = 78857;
	iParam0->f_28 = 1;
	return;
}

int Function_546() //Position: 0x203D9 / 132057
{
	if (Function_5(1024))
	{
		Function_547();
	}
	return 0;
}

void Function_547() //Position: 0x203EC / 132076
{
	float fVar0;
	int iVar1;
	var uVar2;
	
	bLocal_510 = true;
	if (!IS_SCRIPT_VALID(Global_6281))
	{
		Global_3367 = 0;
	}
	if (!Function_5(4))
	{
		bLocal_510 = false;
		return;
	}
	if (HUD_IS_FADED() || HUD_IS_FADING())
	{
		bLocal_510 = false;
		return;
	}
	if (Function_5(4194304))
	{
		Global_3400 = 1;
	}
	else
	{
		Global_3400 = 0;
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= Global_17483)
	{
		if (Global_17483[iVar175].f_292)
		{
			Global_26148 = iVar1;
			Global_26147 = 1;
		}
		iVar1++;
	}
	if ((GET_MAX_NUM_OBJECTS_OF_TYPE(15) - GET_NUM_OBJECTS_OF_TYPE(15)) > 6 && !Global_26147)
	{
		bLocal_510 = false;
		return;
	}
	if (Global_3399)
	{
		bLocal_510 = false;
		return;
	}
	if (Global_3401)
	{
		if (!IS_SCRIPT_VALID(Global_3373))
		{
			Function_551(0);
			Global_3401 = 0;
		}
		bLocal_510 = false;
		return;
	}
	if (Global_3400)
	{
	}
	if (Global_26147 == 1)
	{
	}
	if (Global_30842[16])
	{
		PRINTNL();
		PRINTFLOAT(Global_25265);
		PRINTNL();
	}
	if (Global_3386)
	{
		fVar0 = 10.0f;
		if ((Global_25265 + fVar0) < GET_CURRENT_GAME_TIME() && !Global_26147)
		{
			bLocal_510 = false;
			return;
		}
	}
	fVar0 = 12.0f;
	if ((Global_25265 + fVar0) < GET_CURRENT_GAME_TIME() && !Global_26147)
	{
		bLocal_510 = false;
		return;
	}
	if (Global_3391)
	{
		Function_347(0, 0);
		bLocal_510 = false;
		return;
	}
	if (Global_3395)
	{
		Function_347(1, 0);
		bLocal_510 = false;
		return;
	}
	if (!Function_550(Global_29006))
	{
		bLocal_510 = false;
		return;
	}
	bLocal_510 = Function_549();
	if (bLocal_510)
	{
		Function_548(&uVar2);
	}
	return;
}

void Function_548(int iParam0) //Position: 0x2054C / 132428
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 16;
	iVar0 = 0;
	while (iVar0 <= Global_25059)
	{
		Global_25059[iVar0] = 4294967295;
		iVar0++;
	}
	Global_25264 = 0;
	Global_26147 = 0;
	iVar3 = iVar1;
	iVar4 = iVar1;
	while (iVar3 <= iVar1 && iVar3 >= iVar2)
	{
		iVar4 = iVar3;
		iVar4++;
		if (Function_517(iVar3, iParam0))
		{
			Function_516(iVar3);
			Global_17483[iVar375].f_284 = 1;
		}
		else
		{
			Global_17483[iVar375].f_284 = 0;
		}
		iVar3 = iVar4;
	}
	return;
}

int Function_549() //Position: 0x205CF / 132559
{
	if (Global_3384)
	{
		return 0;
	}
	if (Global_3403 || Global_3404)
	{
		return 0;
	}
	if (Global_3392)
	{
		return 0;
	}
	if (Global_3385)
	{
		return 0;
	}
	if (Global_3382)
	{
		return 0;
	}
	if (IS_ACTOR_ON_TRAIN(Global_34573, 0))
	{
		return 0;
	}
	return 1;
}

bool Function_550(bool bParam0) //Position: 0x2060E / 132622
{
	if (!Function_149(bParam0))
	{
		return 1;
	}
	return Function_148(&(Global_29008[bParam0]), 4);
}

void Function_551(bool bParam0) //Position: 0x2062A / 132650
{
	if (bParam0)
	{
		Function_338(0x10000000);
	}
	else
	{
		Function_552(0x10000000);
	}
	Global_26316.f_172 = 0;
	return;
}

void Function_552(int iParam0) //Position: 0x2064E / 132686
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

void Function_553(int iParam0) //Position: 0x2066B / 132715
{
	strcpy(iParam0 + 12, "JOB HANDLER", 16);
	*iParam0 = 134344;
	iParam0->f_4 = 132775;
	iParam0->f_8 = 132769;
	iParam0->f_28 = 0;
	return;
}

void Function_554() //Position: 0x206A1 / 132769
{
	return;
}

int Function_555() //Position: 0x206A7 / 132775
{
	if (Function_1() || Global_3419)
	{
		if (Function_570())
		{
			Function_569(0);
		}
	}
	else if (Global_3403 && Function_570())
	{
		Function_569(0);
	}
	else if (!Global_3403 && !Function_570())
	{
		Function_569(1);
	}
	Function_556(&Global_62484);
	return 0;
}

void Function_556(int iParam0) //Position: 0x206EC / 132844
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	bVar1 = Function_176();
	if (!IS_ACTOR_VALID(bVar1))
	{
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			if (IS_OBJECT_VALID(iParam0[iVar014]->f_32))
			{
				Function_568(iParam0, iVar0);
			}
			iVar0++;
		}
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (IS_PERS_CHAR_VALID(iParam0[iVar014]->f_28))
		{
			bVar2 = GET_ACTOR_FROM_PERS_CHAR(iParam0[iVar014]->f_28);
		}
		if (!Function_570() || Global_3380)
		{
			if (IS_OBJECT_VALID(iParam0[iVar014]->f_32))
			{
				Function_568(iParam0, iVar0);
			}
		}
		else if (Function_567(iParam0[iVar014], 16))
		{
			if ((IS_SCRIPT_VALID(StackVal) || Global_3392) || Function_566(bVar2))
			{
				Function_568(iParam0, iVar0);
			}
			else if (Function_567(iParam0[iVar014], 2))
			{
				Function_565(iParam0[iVar014], 2);
				Function_564(iParam0[iVar014]);
				Function_563(iParam0[iVar014], 8);
			}
			else if (Function_567(iParam0[iVar014], 8))
			{
				if (Function_559(iParam0[iVar014]->f_12, iParam0[iVar014]->f_24, iParam0[iVar014]->f_52) && !IS_ACTOR_RIDING_VEHICLE(bVar1))
				{
					if (IS_PERS_CHAR_VALID(iParam0[iVar014]->f_28))
					{
						if (!IS_PERS_CHAR_ALIVE(iParam0[iVar014]->f_28))
						{
							if (!Function_43(Global_76846, 32768))
							{
								Function_38(Function_176(), 32768, 1, 0);
							}
							Function_568(iParam0, iVar0);
						}
						if (iParam0[iVar014]->f_12 == 1)
						{
							bVar3 = true;
						}
						else
						{
							bVar3 = IS_ACTOR_VALID(GET_ACTOR_FROM_PERS_CHAR(iParam0[iVar014]->f_28));
						}
						if (((!IS_OBJECT_VALID(iParam0[iVar014]->f_32) && IS_LAYOUTREF_VALID(Global_30616)) && IS_PERS_CHAR_ALIVE(iParam0[iVar014]->f_28)) && bVar3)
						{
							iParam0[iVar014]->f_32 = Function_213(StackVal, StackVal, Global_30616, Function_75(), *(iParam0[iVar014] + 36), 0.0f, 0.0f, 0.0f, Global_34573, 2.0f, 0, 3, iParam0[iVar014]->f_48, 3, 1, 3212836864, 3212836864, 1);
							if (Function_558(iVar0))
							{
								Function_129(StackVal, StackVal, iParam0[iVar014]->f_24, ((10 + iVar0) - 1), *(iParam0[iVar014] + 36), iParam0[iVar014]->f_52);
							}
							UNK_0x1E98AFEC(GET_BLIP_ON_OBJECT(iParam0[iVar014]->f_32), 1);
							SET_BLIP_MAX_DISTANCE(GET_BLIP_ON_OBJECT(iParam0[iVar014]->f_32), 1,25f);
							if (IS_OBJECT_VALID(iParam0[iVar014]->f_32))
							{
							}
						}
						else if (!IS_OBJECT_VALID(iParam0[iVar014]->f_32))
						{
						}
					}
				}
				else
				{
					Function_568(iParam0, iVar0);
				}
				if (IS_OBJECT_VALID(iParam0[iVar014]->f_32))
				{
					if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(iParam0[iVar014]->f_32)))
					{
						if (!Function_558(iVar0))
						{
							if (Function_196(StackVal, StackVal, *(iParam0[iVar014] + 36), 1,25f))
							{
								if (Function_557(iVar0, 1))
								{
									Function_129(StackVal, StackVal, iParam0[iVar014]->f_24, ((10 + iVar0) - 1), *(iParam0[iVar014] + 36), iParam0[iVar014]->f_52);
									SET_BLIP_BLINK(GET_BLIP_ON_OBJECT(iParam0[iVar014]->f_32), 1, 0, 10.0f);
								}
							}
						}
					}
				}
			}
			if (!iParam0[iVar014]->f_24 != Global_29006)
			{
				Function_565(iParam0[iVar014], 16);
			}
		}
		else if (iParam0[iVar014]->f_24 == Global_29006)
		{
			Function_563(iParam0[iVar014], 16);
		}
		iVar0++;
	}
	return;
}

bool Function_557(int iParam0, bool bParam1) //Position: 0x209FE / 133630
{
	int iVar0;
	
	iVar0 = ((10 + iParam0) - 1);
	return Function_194(iVar0, bParam1);
}

bool Function_558(int iParam0) //Position: 0x20A14 / 133652
{
	int iVar0;
	
	iVar0 = ((10 + iParam0) - 1);
	if (iVar0 > 0 || iVar0 <= Global_26031)
	{
		return 1;
	}
	return Global_26031[iVar0];
}

int Function_559(bool bParam0, bool bParam1, int iParam2) //Position: 0x20A3A / 133690
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	if (!Function_570())
	{
		return 0;
	}
	if (Global_3403 || Global_3404)
	{
		return 0;
	}
	if (!Function_562(bParam0))
	{
		return 0;
	}
	if ((Global_3380 || Global_3384) || Global_3382)
	{
		return 0;
	}
	if (!Global_29006 != bParam1)
	{
		return 0;
	}
	iVar0 = Function_91(bParam1, bParam0, 6);
	if (!Function_4(iVar0))
	{
		return 0;
	}
	if (Global_3365)
	{
		bVar1 = Function_211(iVar0);
		if (GET_DAY(bVar1) != 0)
		{
			bVar2 = GET_TIME_OF_DAY();
			if (bParam0 != 1)
			{
				if (GET_DAY(bVar1) > GET_DAY(false))
				{
					return 0;
				}
			}
			bVar3 = Function_211(iVar0);
			ADD_TIME(&bVar3, 0, 16, false, 0);
			if (IS_LATER_THAN(bVar3, false))
			{
				return 0;
			}
		}
	}
	if (!iParam2 != 63)
	{
		if (!TIME_IS_IN_RANGE(GET_TIME_OF_DAY(), Function_561(iParam2), Function_560(iParam2)))
		{
			return 0;
		}
	}
	if (IS_SCRIPT_VALID(StackVal) || Function_567(&(Global_62484[bParam014]), 2))
	{
		return 0;
	}
	if (Function_567(&(Global_62484[bParam014]), 1))
	{
		return 0;
	}
	return 1;
}

var Function_560(int iParam0) //Position: 0x20B2C / 133932
{
	bool bVar0;
	
	bVar0 = false;
	if (iParam0 & 33 == 32)
	{
		bVar0 = 5;
	}
	else if (iParam0 & 3 == 1)
	{
		bVar0 = 7;
	}
	else if (iParam0 & 6 == 2)
	{
		bVar0 = 11;
	}
	else if (iParam0 & 12 == 4)
	{
		bVar0 = 14;
	}
	else if (iParam0 & 24 == 8)
	{
		bVar0 = 18;
	}
	else if (iParam0 & 48 == 16)
	{
		bVar0 = 22;
	}
	return MAKE_TIME_OF_DAY(bVar0, false, false);
}

var Function_561(int iParam0) //Position: 0x20B98 / 134040
{
	bool bVar0;
	
	bVar0 = false;
	if (iParam0 & 33 == 1)
	{
		bVar0 = 5;
	}
	else if (iParam0 & 3 == 2)
	{
		bVar0 = 7;
	}
	else if (iParam0 & 6 == 4)
	{
		bVar0 = 11;
	}
	else if (iParam0 & 12 == 8)
	{
		bVar0 = 14;
	}
	else if (iParam0 & 24 == 16)
	{
		bVar0 = 18;
	}
	else if (iParam0 & 48 == 32)
	{
		bVar0 = 22;
	}
	return MAKE_TIME_OF_DAY(bVar0, false, false);
}

bool Function_562(int iParam0) //Position: 0x20C04 / 134148
{
	if (iParam0 >= 0 && iParam0 <= 3)
	{
		return 0;
	}
	return Global_25970[iParam0];
}

void Function_563(var uParam0, int iParam1) //Position: 0x20C1F / 134175
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_564(int iParam0) //Position: 0x20C2E / 134190
{
	*iParam0 = 8;
	return;
}

void Function_565(var uParam0, int iParam1) //Position: 0x20C39 / 134201
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

int Function_566(bool bParam0) //Position: 0x20C50 / 134224
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (GET_LAST_ATTACKER(bParam0) == Global_34573)
		{
			return 1;
		}
	}
	return 0;
}

bool Function_567(var uParam0, int iParam1) //Position: 0x20C6C / 134252
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (iVar0 == 0)
	{
		return 0;
	}
	return 1;
}

void Function_568(var uParam0, int iParam1) //Position: 0x20C83 / 134275
{
	if (IS_OBJECT_VALID(uParam0[iParam114]->f_32))
	{
		Function_212(uParam0[iParam114]->f_32);
	}
	return;
}

void Function_569(bool bParam0) //Position: 0x20CA2 / 134306
{
	if (bParam0)
	{
		Function_214(512);
	}
	else
	{
		Function_407(512);
	}
	return;
}

bool Function_570() //Position: 0x20CBC / 134332
{
	return Function_5(512);
}

void Function_571() //Position: 0x20CC8 / 134344
{
	Function_572(&Global_62484);
	return;
}

void Function_572(int iParam0) //Position: 0x20CD4 / 134356
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Function_563(iParam0[iVar014], 8);
		iVar0++;
	}
	return;
}

void Function_573(int iParam0) //Position: 0x20CF7 / 134391
{
	strcpy(iParam0 + 12, "HORSE SERVER", 16);
	*iParam0 = 137060;
	iParam0->f_4 = 134458;
	iParam0->f_8 = 134446;
	iParam0->f_28 = 1;
	return;
}

void Function_574() //Position: 0x20D2E / 134446
{
	DESTROY_LAYOUT(bLocal_498);
	return;
}

int Function_575() //Position: 0x20D3A / 134458
{
	bool bVar0;
	bool bVar1;
	
	if (NET_IS_IN_SESSION() && !NET_IS_SESSION_HOST())
	{
		return 0;
	}
	while (IS_OBJECT_VALID(OBJECT_ITERATOR_CURRENT(bLocal_497)))
	{
		bVar0 = OBJECT_ITERATOR_CURRENT(bLocal_497);
		if (GET_OBJECT_TYPE(bVar0) == 15)
		{
			bVar1 = GET_ACTOR_FROM_OBJECT(bVar0);
			if (IS_ACTOR_VALID(bVar1))
			{
				if (IS_ACTOR_PLAYER(bVar1))
				{
					Function_594(bVar1, bLocal_497);
				}
				else
				{
					Function_576(bVar1, bLocal_497);
				}
			}
		}
		OBJECT_ITERATOR_NEXT(bLocal_497);
		return 0;
	}
	CLEAN_OBJECTSET(Global_16515);
	START_OBJECT_ITERATOR(bLocal_497);
	return 0;
}

void Function_576(bool bParam0, bool bParam1) //Position: 0x20DAF / 134575
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	
	bVar0 = Function_593(bParam0);
	GET_POSITION(bParam0, &vVar1);
	if (IS_ACTOR_VALID(bVar0))
	{
		if (IS_ACTOR_ALIVE(bVar0))
		{
			GET_POSITION(bVar0, &vVar4);
			bVar7 = GET_MOUNT(bParam0);
			if (bVar7 == bVar0)
			{
				return;
			}
			if (IS_ACTOR_VALID(bVar7))
			{
				Function_592(bParam0, bVar7);
				if (Global_30900[3])
				{
					PRINTSTRING("HorseSim noterd that ");
					PRINTSTRING(GET_OBJECT_NAME(GET_OBJECT_FROM_ACTOR(bParam0)));
					PRINTSTRING(" got on a new horse. They now consider it theirs");
					PRINTNL();
				}
				return;
			}
			bVar8 = GET_MOST_RECENT_RIDER(bVar0);
			if (IS_ACTOR_VALID(bVar8))
			{
				if (bVar8 == bParam0)
				{
					if (VDIST(vVar4, vVar1) > 50.0f)
					{
						return;
					}
				}
			}
		}
	}
	LOG_ERROR("get new horse");
	bVar9 = Function_577(StackVal, StackVal, vVar1, 30.0f, bParam0, bParam1);
	if (IS_ACTOR_VALID(bVar9) && IS_ACTOR_VALID(bParam0))
	{
		Function_592(bParam0, bVar9);
		SET_MOST_RECENT_MOUNT(bParam0, bVar9);
	}
	return;
}

var Function_577(var uParam0, var uParam1, var uParam2, float fParam3, bool bParam4, bool bParam5) //Position: 0x20ECD / 134861
{
	bool bVar0;
	vector3 vVar1;
	var uVar4;
	bool bVar5;
	var uVar6;
	vector3 vVar9;
	
	bVar0 = Function_590(GET_GC_LAYOUT(), &uParam0, fParam3);
	if (IS_ACTOR_VALID(bVar0))
	{
		if (Global_30900[3])
		{
			PRINTSTRING("HorseSim is trying to find a place to spawn a horse");
			PRINTNL();
		}
	}
	else
	{
		if (Global_30900[3])
		{
			PRINTSTRING("HorseSim found a horse in the layout for ");
			PRINTSTRING(GET_OBJECT_NAME(GET_OBJECT_FROM_ACTOR(bParam4)));
			PRINTNL();
		}
		bVar5 = Function_578(&uParam0, &vVar1, &uVar4);
		if (bVar5)
		{
			if (Global_30900[3])
			{
				PRINTSTRING("HorseSim spawned a horse in the layout for ");
				PRINTSTRING(GET_OBJECT_NAME(GET_OBJECT_FROM_ACTOR(bParam4)));
				PRINTNL();
			}
			if (FIND_GROUND_INTERSECTION(&vVar1, 20.0f, &vVar1, &uVar6))
			{
				if (OBJECT_ITERATOR_CURRENT(bParam5) == GET_OBJECT_FROM_ACTOR(bParam4))
				{
					vVar9.y = uVar4;
					bVar0 = CREATE_ACTOR_IN_LAYOUT(GET_GC_LAYOUT(), Function_75(), 976, vVar1, vVar9);
				}
			}
		}
		else if (Global_30900[3])
		{
			PRINTSTRING("HorseSim failed to find a place to spawn a horse for ");
			PRINTSTRING(GET_OBJECT_NAME(GET_OBJECT_FROM_ACTOR(bParam4)));
			PRINTNL();
		}
	}
	return bVar0;
}

int Function_578(var uParam0, var uParam1, Vector3 vParam2) //Position: 0x21060 / 135264
{
	var uVar0;
	struct<11> Var3;
	struct<15> Var14;
	
	Function_589(&uVar0);
	*vParam2.x = *vParam2.x;
	Function_588(StackVal, StackVal, &Var3, 0, *uParam0, 0.0f, 0.0f, 50.0f, 250.0f, 0x40a00000, 0);
	Function_587(&Var14, 1, 2,5f, 0, 512);
	Function_586(&Var14, 10.0f);
	Function_579(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var3, Var14);
	*uParam1 = { StackVal, StackVal, Function_579(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var3, Var14) };
	if (Global_30900[3])
	{
		PRINTSTRING("HorseSim found a SPAWN LOCATION:  ");
		PRINTVECTOR(*uParam1);
		PRINTNL();
	}
	if (VMAG(Vector(StackVal, StackVal, StackVal) - Vector(*uParam1, *uParam0, StackVal)) < 50.0f)
	{
		return 0;
	}
	return 1;
}

vector3 Function_579(struct<37> Param0) //Position: 0x2110A / 135434
{
	vector3 vVar0;
	
	AMBIENT_RESET_FILTER(0);
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
	else if (!Function_60(StackVal, StackVal, *(&Param0 + 4)))
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
	Function_585(Param0.f_36);
	if (Param0.f_24 > 1.0f && Param0.f_28 > 1.0f)
	{
		Function_583();
	}
	else
	{
		AMBIENT_SET_DISTANCE_FILTER(Param0.f_24, Param0.f_28);
	}
	Function_582(Param0.f_20);
	Function_581(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param11);
	Function_580(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param11);
	if (Param0.f_32)
	{
		AMBIENT_ENABLE_OFFSCREEN_FILTER(1);
	}
	if (Param11.f_28 == 0.0f)
	{
		UNK_0x0AC99007(StackVal, Param11.f_28);
	}
	if (Param11.f_36 == 0.0f)
	{
		AMBIENT_SET_ELEVATION_DERIVATIVE_IN_AREA_FILTER(Param11.f_36, Param11.f_40);
	}
	AMBIENT_SET_RANDOM_SEARCH_ORDER(1);
	if (AMBIENT_GET_POINT(&vVar0, 0))
	{
		return StackVal, StackVal, vVar0;
	}
	Function_274();
	return StackVal, StackVal, Function_274();
}

void Function_580(struct<33> Param0) //Position: 0x2123C / 135740
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

void Function_581(struct<5> Param0, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14) //Position: 0x21368 / 136040
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

void Function_582(bool bParam0) //Position: 0x213B9 / 136121
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

void Function_583() //Position: 0x2146C / 136300
{
	float fVar0;
	bool bVar1;
	
	Function_584(&fVar0, &bVar1);
	AMBIENT_SET_DISTANCE_FILTER(fVar0, bVar1);
	return;
}

void Function_584(var uParam0, int iParam1) //Position: 0x21480 / 136320
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

void Function_585(bool bParam0) //Position: 0x21509 / 136457
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

void Function_586(var uParam0, int iParam1) //Position: 0x2154D / 136525
{
	uParam0->f_20 = iParam1;
	return;
}

void Function_587(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x21559 / 136537
{
	*uParam0 = uParam1;
	uParam0->f_4 = uParam2;
	uParam0->f_8 = uParam3;
	uParam0->f_16 = uParam4;
	uParam0->f_20 = 0.0f;
	uParam0->f_12 = 4294967295;
}

void Function_588(int iParam0, var uParam1, vector3 vParam2, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10) //Position: 0x21582 / 136578
{
	iParam0->f_20 = uParam1;
	*(iParam0 + 4) = { StackVal, StackVal, vParam2 };
	iParam0->f_16 = uParam5;
	iParam0->f_24 = uParam6;
	iParam0->f_28 = uParam7;
	iParam0->f_32 = uParam10;
	iParam0->f_36 = uParam8;
	iParam0->f_40 = uParam9;
}

void Function_589(bool bParam0) //Position: 0x215BE / 136638
{
	if (!Function_18(bParam0))
	{
		Function_10(bParam0, 0.0f);
	}
	return;
}

var Function_590(bool bParam0, var uParam1, int iParam2) //Position: 0x215D3 / 136659
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	bVar0 = CREATE_OBJECT_ITERATOR(bParam0);
	ITERATE_ON_OBJECT_TYPE(bVar0, 15);
	ITERATE_ON_PARTIAL_MODEL_NAME(bVar0, "horse");
}

bool Function_591(bool bParam0) //Position: 0x2165D / 136797
{
	bool bVar0;
	bool bVar1;
	
	if (!IS_OBJECT_VALID(bParam0))
	{
		return 0;
	}
	bVar0 = GET_ACTOR_FROM_OBJECT(bParam0);
	if (!IS_ACTOR_VALID(bVar0))
	{
		return 0;
	}
	if (IS_ACTOR_VALID(GET_RIDER(bVar0)))
	{
		return 0;
	}
	bVar1 = GET_MOST_RECENT_RIDER(bVar0);
	if (IS_ACTOR_VALID(bVar1))
	{
		if (GET_ACTORS_HORSE(bVar1) == bVar0)
		{
			return 0;
		}
	}
	return 1;
}

void Function_592(bool bParam0, bool bParam1) //Position: 0x216A9 / 136873
{
	SET_ACTORS_HORSE(bParam0, bParam1);
	MEMORY_REPORT_POSITION_AUTO(bParam0, bParam1, true);
	return;
}

var Function_593(bool bParam0) //Position: 0x216BE / 136894
{
	return GET_ACTORS_HORSE(bParam0);
}

void Function_594(bool bParam0, var uParam1) //Position: 0x216C9 / 136905
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	bool bVar7;
	
	bVar0 = GET_MOST_RECENT_MOUNT(bParam0);
	GET_POSITION(bParam0, &vVar1);
	if (IS_ACTOR_VALID(bVar0))
	{
		if (GET_MOST_RECENT_RIDER(bVar0) == bParam0)
		{
			GET_POSITION(bVar0, &vVar4);
			if (VDIST(vVar4, vVar1) > 50.0f)
			{
				return;
			}
		}
	}
	if (Global_30900[3])
	{
		PRINTSTRING("HorseSim spawning new horse for player");
		PRINTNL();
	}
	bVar7 = Function_577(StackVal, StackVal, vVar1, 30.0f, bParam0, uParam1);
	if (IS_ACTOR_VALID(bVar7))
	{
		SET_MOST_RECENT_MOUNT(bParam0, bVar7);
	}
	return;
}

void Function_595() //Position: 0x21764 / 137060
{
	bLocal_498 = CREATE_LAYOUT("HorseServer");
	Global_16515 = CREATE_OBJECTSET_IN_LAYOUT("HorseServerSet", bLocal_498, 15, 0);
	bLocal_497 = CREATE_OBJECT_ITERATOR(bLocal_498);
	ITERATE_IN_SET(bLocal_497, Global_16515);
	CLEAN_OBJECTSET(Global_16515);
	START_OBJECT_ITERATOR(bLocal_497);
	return;
}

void Function_596(int iParam0) //Position: 0x217BA / 137146
{
	strcpy(iParam0 + 12, "WEATHER", 16);
	*iParam0 = 140957;
	iParam0->f_4 = 137202;
	iParam0->f_8 = 137196;
	iParam0->f_28 = 1;
	return;
}

void Function_597() //Position: 0x217EC / 137196
{
	return;
}

int Function_598() //Position: 0x217F2 / 137202
{
	if (!HUD_IS_FADED() || NET_IS_IN_SESSION())
	{
		Function_603(&Global_16524);
	}
	Function_602(&Global_16524);
	Function_600(&Global_16517);
	Function_599(&Global_16517);
	return 0;
}

void Function_599(int iParam0) //Position: 0x2181C / 137244
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	
	if (!Global_30900[2])
	{
		return;
	}
	GET_POSITION(GET_PLAYER_ACTOR(0), &vVar0);
	vVar3 = { 0.0f, 0.0f, -1.0f };
	vVar0.f_4 = (vVar0.y + 1,5f);
	ROTATE_VECTOR_XZ(StackVal, &vVar3, 0);
	VSCALE(&vVar3, (*iParam0 * 2.0f));
	PRINTFLOAT(*iParam0);
	PRINTSTRING(" ");
	PRINTFLOAT(StackVal);
	PRINTNL();
	VSCALE(&vVar3, (iParam0->f_24 * 2.0f));
	vVar6 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar3, vVar0, StackVal) };
	iParam0->f_24 = (iParam0->f_24 + 0,0666f);
	if (iParam0->f_24 < 1.0f)
	{
		iParam0->f_24 = 0.0f;
	}
	return;
}

void Function_600(int iParam0) //Position: 0x218AA / 137386
{
	bool bVar0;
	float fVar1;
	float fVar2;
	bool bVar3;
	
	Function_601(StackVal, &fVar1, &fVar2);
	if (iParam0->f_16)
	{
		if (!StackVal != *iParam0)
		{
			*iParam0 = StackVal;
			iParam0->f_4 = iParam0->f_12;
			bVar0 = true;
		}
	}
	else if (GET_CURRENT_GAME_TIME() < (iParam0->f_20 + 60.0f))
	{
		bVar3 = RAND_INT_RANGE(false, 10000);
		if (bVar3 <= 2500)
		{
			*iParam0 = (*iParam0 + RAND_FLOAT_RANGE(-0,1f, 0,1f));
			bVar0 = true;
		}
		bVar3 = RAND_INT_RANGE(false, 10000);
		if (bVar3 <= 2500)
		{
			iParam0->f_4 = (StackVal + RAND_FLOAT_RANGE(-10.0f, 10.0f));
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		if (!iParam0->f_16)
		{
			if (*iParam0 < fVar2)
			{
				*iParam0 = fVar2;
			}
			else if (*iParam0 > 0.0f)
			{
				*iParam0 = (*iParam0 * -1.0f);
				iParam0->f_4 = (StackVal + 180.0f);
			}
			else if (*iParam0 > fVar1)
			{
				*iParam0 = fVar1;
			}
		}
		if (StackVal < 360.0f)
		{
			iParam0->f_4 = (StackVal - 360.0f);
		}
		else if (StackVal > 0.0f)
		{
			iParam0->f_4 = (StackVal + 360.0f);
		}
		if (!iParam0->f_16)
		{
			if (*iParam0 > 0,25f)
			{
				*iParam0 = 0,25f;
			}
			if (StackVal && (StackVal || (StackVal || (Global_63399 != 32 && *iParam0 < 0,175f) != 0 != 1) != 2))
			{
				*iParam0 = 0,175f;
			}
		}
		SET_WIND(StackVal, *iParam0, 5.0f);
		iParam0->f_20 = GET_CURRENT_GAME_TIME();
	}
	return;
}

void Function_601(int iParam0, var uParam1, int iParam2) //Position: 0x21A2A / 137770
{
	switch (iParam0)
	{
		case 0x00000000:
		case 0x00000001:
			*uParam1 = 0,25f;
			*iParam2 = 0,5f;
			break;
		
		case 0x00000002:
		case 0x00000005:
			*uParam1 = 0,25f;
			*iParam2 = 0,75f;
			break;
		
		case 0x00000003:
			*uParam1 = 0,5f;
			*iParam2 = 1.0f;
			break;
		
		case 0x00000004:
			*uParam1 = 1,3f;
			*iParam2 = 1,6f;
			break;
		
		default:
			*uParam1 = 0,25f;
			*iParam2 = 0,5f;
			break;
	}
	return;
}

void Function_602(int iParam0) //Position: 0x21AB6 / 137910
{
	struct<9> Var0;
	
	if (!Global_30900[2])
	{
		return;
	}
	switch (StackVal)
	{
		case 0x00000001:
			vVar0 = 1.0f;
			vVar0.f_4 = 1.0f;
			vVar0.f_8 = 0,25f;
			strcpy(&cVar4, "FAIR", 8);
			break;
		
		case 0x00000003:
			vVar0 = 0,5f;
			vVar0.f_4 = 0,5f;
			vVar0.f_8 = 0,5f;
			strcpy(&cVar4, "RAINY", 8);
			break;
		
		case 0x00000000:
			vVar0 = 0,25f;
			vVar0.f_4 = 0,25f;
			vVar0.f_8 = 1.0f;
			strcpy(&cVar4, "CLEAR", 8);
			break;
		
		case 0x00000002:
			vVar0 = 0,5f;
			vVar0.f_4 = 0,5f;
			vVar0.f_8 = 0,5f;
			strcpy(&cVar4, "CLOUDY", 8);
			break;
		
		case 0x00000004:
			vVar0 = 0,5f;
			vVar0.f_4 = 0,5f;
			vVar0.f_8 = 0,5f;
			strcpy(&cVar4, "STORMY", 8);
			break;
		
		case 0x00000005:
			vVar0 = 0,5f;
			vVar0.f_4 = 0,5f;
			vVar0.f_8 = 0,5f;
			strcpy(&cVar4, "SNOWY", 8);
			break;
		
		default:
			vVar0 = 0.0f;
			vVar0.f_4 = 0.0f;
			vVar0.f_8 = 0.0f;
			strcpy(&cVar4, "OTHER", 8);
			break;
	}
	GET_POSITION(GET_PLAYER_ACTOR(0), &Var6);
	Var6.f_4 = (StackVal + 1,75f);
	Var6.f_4 = (StackVal + 0,25f);
	if (Global_16524.f_24 < -1.0f)
	{
	}
	if (Global_16524.f_28 < -1.0f)
	{
	}
	return;
}

void Function_603(int iParam0) //Position: 0x21C2E / 138286
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;
	float fVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	
	bVar0 = Function_1();
	iVar1 = GET_HOUR(false);
	iVar2 = 0;
	if (bVar0)
	{
		iVar2 = 1;
	}
	else if ((iVar1 > 5 || (iVar1 < 6 && iVar1 > 16)) || iVar1 <= 19)
	{
		iVar2 = 1;
	}
	if (iParam0->f_16 && iVar2)
	{
		Function_221(StackVal);
		if (!StackVal != StackVal)
		{
			if (HUD_IS_FADED())
			{
				Function_220(StackVal, 0);
			}
			else
			{
				Function_217(StackVal, MAKE_TIME_OF_DAY(false, Function_239(300), false), bVar0);
			}
		}
		return;
	}
	if (iParam0->f_16)
	{
		Function_221(StackVal);
		return;
	}
	Function_221(*iParam0);
	bVar3 = 4294967295;
	iVar4 = 4294967295;
	bVar5 = true;
	if (bVar0)
	{
		if (NET_IS_IN_SESSION())
		{
			bVar3 = GET_LOCAL_SLOT();
			iVar4 = Function_611(Global_29005, 1);
			if (!iVar4 != bVar3)
			{
				bVar5 = false;
			}
		}
		else
		{
			bVar5 = false;
		}
	}
	if (!bVar5 && !iVar4 != 4294967295)
	{
		bVar6 = Function_609(iVar4);
		if (!bVar6 != 4294967295)
		{
			Function_221(bVar6);
			*iParam0 = bVar6;
			if (!bVar3 != 4294967295)
			{
				Function_608(*iParam0);
			}
			if (!StackVal != *iParam0)
			{
				if (HUD_IS_FADED())
				{
					Function_220(bVar6, 1);
				}
				else
				{
					fVar7 = NET_GET_NET_TIME();
					bVar8 = (Function_605(iVar4) - fVar7);
					if (bVar8 > 10.0f)
					{
						bVar8 = 10.0f;
					}
					bVar9 = ROUND(bVar8);
					if (!bVar3 != 4294967295)
					{
						Function_604((fVar7 + IntToFloat(bVar9)));
					}
					Function_217(bVar6, MAKE_TIME_OF_DAY(false, Function_239(bVar9), false), 1);
				}
			}
		}
		return;
	}
	if (IS_EARLIER_THAN(iParam0->f_12, false))
	{
		bVar10 = RAND_INT_RANGE(false, 10000);
		if ((StackVal != 4294967295 || iParam0->f_20) && ((iVar1 > 5 || (iVar1 < 6 && iVar1 > 16)) || iVar1 <= 19))
		{
			switch (Global_29004)
			{
				case 0x00000001:
					switch (*iParam0)
					{
						case 0x00000000:
							if (bVar10 <= (6000 + iParam0->f_36 * 100))
							{
								*iParam0 = 1;
							}
							iParam0->f_32 = 0;
							break;
						
						case 0x00000001:
							if (bVar10 <= (5400 - iParam0->f_36 * 100))
							{
								*iParam0 = 0;
							}
							else if (bVar10 <= (6000 + iParam0->f_36 * 100))
							{
								*iParam0 = 2;
							}
							iParam0->f_32 = 0;
							break;
						
						case 0x00000002:
							if (bVar10 > (5250 - iParam0->f_36 * 100) || iParam0->f_32 != 1)
							{
								*iParam0 = 1;
							}
							else if (bVar10 <= 5625)
							{
								*iParam0 = 4;
							}
							else if (bVar10 <= (6000 + iParam0->f_36 * 100))
							{
								*iParam0 = 3;
							}
							break;
						
						case 0x00000003:
							*iParam0 = 2;
							iParam0->f_32 = 1;
							iParam0->f_36 = 0;
							break;
						
						case 0x00000004:
							*iParam0 = 2;
							iParam0->f_32 = 1;
							iParam0->f_36 = 0;
							break;
						
						case 0x00000005:
							*iParam0 = 2;
							iParam0->f_32 = 1;
							iParam0->f_36 = 0;
							break;
						
						default:
							*iParam0 = 1;
							break;
					}
					break;
				
				default:
					switch (*iParam0)
					{
						case 0x00000000:
							if (bVar10 <= (6000 + iParam0->f_36 * 100))
							{
								*iParam0 = 1;
							}
							iParam0->f_32 = 0;
							break;
						
						case 0x00000001:
							if (bVar10 > (3000 - iParam0->f_36 * 100) && Global_29006 == Global_30668[1])
							{
								*iParam0 = 0;
							}
							else if (bVar10 <= (6000 + iParam0->f_36 * 100))
							{
								*iParam0 = 2;
							}
							iParam0->f_32 = 0;
							break;
						
						case 0x00000002:
							if (bVar10 > (2000 - iParam0->f_36 * 100) || iParam0->f_32 != 1)
							{
								*iParam0 = 1;
							}
							else if (bVar10 <= 4000)
							{
								*iParam0 = 4;
							}
							else if (bVar10 <= (6000 + iParam0->f_36 * 100))
							{
								*iParam0 = 3;
							}
							break;
						
						case 0x00000003:
							if (bVar10 <= 9000)
							{
								*iParam0 = 2;
							}
							else
							{
								*iParam0 = 4;
							}
							iParam0->f_32 = 1;
							iParam0->f_36 = 0;
							break;
						
						case 0x00000004:
							*iParam0 = 2;
							iParam0->f_32 = 1;
							iParam0->f_36 = 0;
							break;
						
						case 0x00000005:
							if (bVar10 <= 3000)
							{
								*iParam0 = 2;
							}
							else
							{
								*iParam0 = 3;
							}
							break;
						
						default:
							*iParam0 = 1;
							break;
					}
					break;
			}
			iParam0->f_12 = GET_TIME_OF_DAY();
			if ((*iParam0 != 3 || *iParam0 != 4) || *iParam0 != 5)
			{
				ADD_TIME(iParam0 + 12, 0, false, Function_239(400), 0);
			}
			else
			{
				ADD_TIME(iParam0 + 12, 0, false, Function_239(1200), 0);
			}
			iParam0->f_20 = 0;
		}
		else if (bVar10 <= 6000 && ((iVar1 > 5 || (iVar1 < 6 && iVar1 > 16)) || iVar1 <= 19))
		{
			iParam0->f_12 = GET_TIME_OF_DAY();
			if ((*iParam0 != 3 || *iParam0 != 4) || *iParam0 != 5)
			{
				ADD_TIME(iParam0 + 12, 0, false, Function_239(400), 0);
			}
			else
			{
				ADD_TIME(iParam0 + 12, 0, false, Function_239(1200), 0);
			}
			iParam0->f_20 = 1;
		}
		else if (!((iVar1 > 5 || (iVar1 < 6 && iVar1 > 16)) || iVar1 <= 19))
		{
		}
		if (!StackVal != *iParam0 && ((iVar1 > 5 || (iVar1 < 6 && iVar1 > 16)) || iVar1 <= 19))
		{
			if (HUD_IS_FADED())
			{
				Function_220(*iParam0, 0);
				if (Function_1() && !bVar3 != 4294967295)
				{
					Function_604(0.0f);
				}
			}
			else
			{
				Function_217(*iParam0, MAKE_TIME_OF_DAY(false, Function_239(300), false), 0);
				if (Function_1() && !bVar3 != 4294967295)
				{
					Function_604((NET_GET_NET_TIME() + 300.0f));
				}
			}
		}
	}
	if (bVar0 && !bVar3 != 4294967295)
	{
		Function_608(*iParam0);
	}
	return;
}

void Function_604(int iParam0) //Position: 0x2212A / 139562
{
	Global_78480.f_104 = iParam0;
	if (NET_IS_IN_SESSION())
	{
		Global_76943[GET_LOCAL_SLOT()96].f_104 = iParam0;
	}
	return;
}

float Function_605(bool bParam0) //Position: 0x2214B / 139595
{
	char* cVar0[64];
	
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return Function_607();
	}
	if (!Function_606(bParam0))
	{
		strcpy(&cVar0, "Tried to get weather from bad slot #", 64);
		stradd(&cVar0, I2STR(bParam0), 64);
	}
	return Global_76943[bParam096].f_104;
}

bool Function_606(bool bParam0) //Position: 0x221A4 / 139684
{
	char* cVar0[64];
	
	if (bParam0 > 0 || bParam0 <= 16)
	{
		strcpy(&cVar0, "TRIED TO USE IS_SLOT_DATA_VALID WITH BAD INDEX ", 64);
		stradd(&cVar0, I2STR(bParam0), 64);
		stradd(&cVar0, "!", 64);
		return 0;
	}
	if ((*&Global_78617 + 64)[bParam02] > Global_78617.f_60)
	{
		(*&Global_78617 + 64)[bParam02] = Global_78617.f_60;
		(&Global_78617 + 64[bParam02])->f_4 = _IS_CLIENT_DATA_VALID_FOR_SLOT(&Global_76943, bParam0);
	}
	return StackVal;
}

var Function_607() //Position: 0x22245 / 139845
{
	return Global_78480.f_104;
}

void Function_608(int iParam0) //Position: 0x22251 / 139857
{
	Global_78480.f_100 = iParam0;
	if (NET_IS_IN_SESSION())
	{
		Global_76943[GET_LOCAL_SLOT()96].f_100 = iParam0;
	}
	return;
}

var Function_609(bool bParam0) //Position: 0x22272 / 139890
{
	char* cVar0[64];
	
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return Function_610();
	}
	if (!Function_606(bParam0))
	{
		strcpy(&cVar0, "Tried to get weather from bad slot #", 64);
		stradd(&cVar0, I2STR(bParam0), 64);
	}
	return Global_76943[bParam096].f_100;
}

var Function_610() //Position: 0x222CB / 139979
{
	return Global_78480.f_100;
}

int Function_611(int iParam0, bool bParam1) //Position: 0x222D7 / 139991
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= Global_76943)
	{
		if (Function_606(iVar0))
		{
			if (iVar0 == GET_LOCAL_SLOT())
			{
				if (bParam1)
				{
					if (StackVal != iParam0 && Function_616(32768, 1))
					{
						return iVar0;
					}
				}
			}
			if (Function_614(iVar0) == iParam0)
			{
				if (Function_612(iVar0, 32768, 1))
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return 4294967295;
}

bool Function_612(bool bParam0, bool bParam1, bool bParam2) //Position: 0x22340 / 140096
{
	char* cVar0[64];
	bool bVar16;
	
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return Function_616(bParam1, bParam2);
	}
	if (!Function_606(bParam0))
	{
		strcpy(&cVar0, "Tried to get bit ", 64);
		stradd(&cVar0, Function_613(bParam1), 64);
		stradd(&cVar0, " bit from bad slot ", 64);
		stradd(&cVar0, I2STR(bParam0), 64);
	}
	bVar16 = (Global_76943[bParam096].f_124 && bParam1);
	if (bParam2)
	{
		return bVar16 != bParam1;
	}
	return bVar16 == 0;
}

var Function_613(int iParam0) //Position: 0x223C1 / 140225
{
	switch (iParam0)
	{
		case 0x00000002:
			return "DEAD";
			break;
		
		case 0x00000004:
			return "READY";
			break;
		
		case 0x00000008:
			return "POKER_FOLDED";
			break;
		
		case 0x00000010:
			return "RACE_FINISHED";
			break;
		
		case 0x00000020:
			return "REGION_HOST";
			break;
		
		case 0x00000080:
			return "ACTOR_HIDDEN";
			break;
		
		case 0x00000100:
			return "VOTE_TO_START";
			break;
		
		case 0x00000200:
			return "VOTE_TO_SKIP";
			break;
		
		case 0x00000400:
			return "VOTE_TO_REPLAY";
			break;
		
		case 0x00000001:
			return "IS_IN_LOBBY";
			break;
		
		case 0x00000040:
			return "GAME_ARBITRATOR";
			break;
		
		case 0x00000800:
			return "JOINED_GAME";
			break;
		
		case 0x00001000:
			return "SKIP_CUTSCENE";
			break;
		
		case 0x00002000:
			return "START_CUTSCENE";
			break;
		
		case 0x00004000:
			return "IS_SPECTATOR";
			break;
		
		case 0x00008000:
			return "DISTRICT_HOST";
			break;
		
		case 0x00010000:
			return "NEEDS_REVIVAL";
			break;
		
		case 0x00020000:
			return "MP_BIT_MPLAW_MOSTWANTED";
			break;
		
		case 0x00040000:
			return "HAS_VIRAL_ACHIEVEMENT";
			break;
		
		case 0x00080000:
			return "COMBATMODE_CASUAL";
			break;
		
		case 0x00100000:
			return "COMBATMODE_EXPERT";
			break;
		
		case 0x00200000:
			return "IN_ACTOR_PICKER";
			break;
		
		case 0x00400000:
			return "MELEE_BLOCKED";
			break;
		
		case 0x00800000:
			return "BLIND_FIRE";
			break;
	}
	return "UNKNOWN";
}

int Function_614(bool bParam0) //Position: 0x2264A / 140874
{
	if (!Function_606(bParam0))
	{
		return 4294967295;
	}
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return Function_615();
	}
	return StackVal;
}

bool Function_615() //Position: 0x22671 / 140913
{
	return StackVal;
}

int Function_616(bool bParam0, bool bParam1) //Position: 0x2267D / 140925
{
	int iVar0;
	
	iVar0 = (Global_78480.f_124 && bParam0);
	if (bParam1)
	{
		return iVar0 != bParam0;
	}
	return iVar0 == 0;
}

void Function_617() //Position: 0x2269D / 140957
{
	if (Global_3364)
	{
		Function_618(&Global_16517, 0x3ec00000, 0);
	}
	Global_16524.f_24 = -1.0f;
	Global_16524.f_28 = -1.0f;
	return;
}

void Function_618(var uParam0, int iParam1, int iParam2) //Position: 0x226C1 / 140993
{
	*uParam0 = iParam1;
	uParam0->f_4 = iParam2;
	uParam0->f_8 = -1.0f;
	uParam0->f_12 = -1.0f;
	uParam0->f_16 = 0;
	uParam0->f_20 = GET_CURRENT_GAME_TIME();
	if (*uParam0 > 0,1f)
	{
		*uParam0 = 0,1f;
	}
	SET_WIND(StackVal, *uParam0, 5.0f);
	return;
}

void Function_619(int iParam0) //Position: 0x22707 / 141063
{
	strcpy(iParam0 + 12, "PASSENGER COACH", 16);
	*iParam0 = 78857;
	iParam0->f_4 = 141121;
	iParam0->f_8 = 78857;
	iParam0->f_28 = 1;
	return;
}

var Function_620() //Position: 0x22741 / 141121
{
	int iVar0;
	vector3 vVar1;
	bool bVar4;
	bool bVar5;
	
	iVar0 = 0;
	Function_740();
	if (Global_28842.f_72 != Global_29004)
	{
		if (Function_739(&Global_28842, 512))
		{
			STREAMING_EVICT_ACTOR(Global_28842.f_64, 4294967295);
		}
		Global_28842.f_64 = Function_738(Global_29005, Global_28842.f_64);
		STREAMING_REQUEST_ACTOR(Global_28842.f_64, true, false);
		Function_737(&Global_28842, 512);
		if (Function_739(&Global_28842, 2048))
		{
			STREAMING_EVICT_ACTOR(Global_28842.f_68, 4294967295);
		}
		Global_28842.f_68 = Function_736(Global_29005, Global_28842.f_68);
		STREAMING_REQUEST_ACTOR(Global_28842.f_68, true, false);
		Function_737(&Global_28842, 2048);
		Global_28842.f_72 = Global_29004;
	}
	if (Global_3380)
	{
		if (!Function_78(4))
		{
			if (Function_735(&Global_28903))
			{
				Function_732(&Global_28903, 0);
			}
			return iVar0;
		}
	}
	if (!Function_731(1))
	{
		return iVar0;
	}
	if (Global_3395)
	{
		return iVar0;
	}
	if (Function_731(256) && Function_168(4))
	{
		Function_723();
	}
	if (((Function_731(256) && Function_168(4)) && !Global_3395) && !Global_3410)
	{
		if (Function_624(&Global_28903, 0))
		{
			iVar0 = 1;
		}
		Function_621(&Global_28903, 1);
		if (IS_ACTOR_VALID(Global_28903.f_16))
		{
			if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(Global_28903.f_16)))
			{
				if (!Function_344(0, 0, 1, 1))
				{
					GET_POSITION(Function_533(StackVal), &vVar1);
					ADD_BLIP_FOR_ACTOR(Global_28903.f_16, 354, 0, 2, 0);
					UNK_0x1E98AFEC(GET_BLIP_ON_OBJECT(Global_28903.f_16), 1);
					SET_BLIP_MAX_DISTANCE(GET_BLIP_ON_OBJECT(Global_28903.f_16), 1,25f);
					Function_129(StackVal, StackVal, Function_76(StackVal, StackVal, vVar1, 1, 1, 0), 20, vVar1, 63);
				}
			}
		}
	}
	else if (SQUAD_IS_VALID(StackVal))
	{
		if (IS_OBJECTSET_VALID(Global_28903.f_180))
		{
			bVar5 = false;
			while (bVar5 <= GET_OBJECTSET_SIZE(Global_28903.f_180))
			{
				if (IS_ACTOR_VEHICLE(GET_ACTOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar5, Global_28903.f_180))))
				{
					bVar4 = GET_ACTOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar5, Global_28903.f_180));
				}
				bVar5++;
			}
		}
		if (IS_ACTOR_VALID(bVar4))
		{
			if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(bVar4)))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(bVar4));
			}
		}
	}
	return iVar0;
}

void Function_621(int iParam0, int iParam1) //Position: 0x22929 / 141609
{
	struct<5> Var0;
	char* cVar6[16];
	struct<13> Var10;
	
	if (!Global_30900[1] && iParam1)
	{
		return;
	}
	if (!Function_735(iParam0))
	{
		return;
	}
	strcpy(&cVar6, "TRAFFIC NODE", 16);
	switch (iParam0->f_72)
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
	GET_POSITION(Function_533(StackVal), &Var0);
	vVar14 = { 0.0f, 1.0f, 0.0f };
	if (Function_1())
	{
		fVar17 = 0.0f;
		if (!Function_623(iParam0, &fVar17, 0))
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
	Function_622(iParam0 + 24);
	vVar3 = { StackVal, StackVal, Function_622(iParam0 + 24) };
	return;
}

vector3 Function_622(bool bParam0) //Position: 0x22AA2 / 141986
{
	vector3 vVar0;
	
	vVar0.x = *bParam0;
	vVar0.f_4 = StackVal;
	vVar0.f_8 = StackVal;
	return StackVal, StackVal, vVar0;
}

bool Function_623(int iParam0, var uParam1, bool bParam2) //Position: 0x22AC1 / 142017
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	void fVar3;
	int iVar4;
	bool bVar5;
	
	if (StackVal || !SQUAD_IS_VALID(!Function_735(iParam0)))
	{
		*uParam1 = 0.0f;
		return 0;
	}
	bVar2 = true;
	fVar3 = SQUAD_GET_SIZE(StackVal);
	iVar4 = 0;
	bVar1 = false;
	while (bVar1 <= fVar3)
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
	bVar5 = false;
	if (!bParam2)
	{
		bVar1 = false;
		if (IS_OBJECTSET_VALID(iParam0->f_180))
		{
			bVar5 = GET_OBJECTSET_SIZE(iParam0->f_180);
			bVar1 = false;
			while (bVar1 <= bVar5)
			{
				bVar0 = GET_ACTOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar1, iParam0->f_180));
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
	else if (iVar4 <= (fVar3 + bVar5))
	{
		*uParam1 = 0,5f;
	}
	else
	{
		*uParam1 = 0.0f;
	}
	return bVar2;
}

bool Function_624(int iParam0, bool bParam1) //Position: 0x22BA7 / 142247
{
	var uVar0;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	
	bVar5 = Global_34573;
	Function_722(iParam0, bParam1);
	switch (*iParam0)
	{
		case 0x00000000:
			break;
		
		case 0x00000003:
			if (!SQUAD_IS_VALID(StackVal))
			{
				*iParam0 = 16;
				return 1;
			}
			if (!IS_ACTOR_VALID(Function_533(StackVal)))
			{
				*iParam0 = 16;
				return 1;
			}
			if (Function_712(iParam0))
			{
				*iParam0 = 1;
			}
			else
			{
				*iParam0 = 16;
				return 1;
			}
		
		case 0x00000001:
			if (!iParam0->f_104)
			{
				if (!Function_58(Global_30750[6], 4, 23, 1))
				{
					return 0;
				}
			}
			if (Function_703(iParam0, 0))
			{
				Function_697(iParam0, 0);
				*iParam0 = 7;
			}
			else
			{
				*iParam0 = 16;
				return 1;
			}
			break;
		
		case 0x00000004:
			if (!Function_58(Global_30750[6], 4, 23, 1))
			{
				return 0;
			}
			if (Function_673(iParam0))
			{
				if (IS_ACTOR_VALID(Function_533(StackVal)))
				{
					if (Global_29005 != Global_30628[2] || Global_29005 != Global_30637[0])
					{
						SET_ACTOR_WEAPON_REACTION_NO_FLEE_HACK(Function_533(StackVal), 1);
					}
					SET_ACTOR_ALLOW_PLAYER_GREET_RESPONSES(Function_533(StackVal), 0);
					REGISTER_TRAFFIC_ACTOR(Function_533(StackVal), 0);
					*iParam0 = 5;
				}
				else
				{
					*iParam0 = 16;
					return 1;
				}
			}
			*iParam0 = 16;
			return 1;
			break;
		
		case 0x00000005:
			if (!IS_ACTOR_VALID(Global_34573))
			{
				*iParam0 = 16;
				return 1;
			}
			if (!IS_ACTOR_ALIVE(Global_34573))
			{
				*iParam0 = 16;
				return 1;
			}
			if (!Function_672(StackVal))
			{
				Global_28842.f_76 = GET_CURRENT_GAME_TIME();
				*iParam0 = 16;
				return 1;
			}
			GET_POSITION(Function_533(StackVal), &uVar0);
			if (iParam0->f_184 + 5.0f) > GET_CURRENT_GAME_TIME()
			{
				Function_96(bVar5);
				if (Function_669(StackVal, StackVal, iParam0, &uVar0, Function_96(bVar5), 0))
				{
					return 1;
				}
			}
			if (Function_665(iParam0, &bVar5, !Function_1()))
			{
				bVar3 = true;
			}
			break;
		
		case 0x00000006:
			if (!Function_654(iParam0))
			{
				if (Global_34165.f_44)
				{
					if (StackVal || StackVal != 1 != 3)
					{
						*iParam0 = 12;
					}
					else
					{
						Function_96(bVar5);
						if (!Function_669(StackVal, StackVal, iParam0, &uVar0, Function_96(bVar5), 1))
						{
							*iParam0 = 12;
						}
					}
				}
				else
				{
					*iParam0 = 9;
				}
				return 1;
			}
			if (!Function_649(iParam0, 1, iParam0->f_20 > 4))
			{
				*iParam0 = 16;
				return 1;
			}
			*iParam0 = 7;
		
		case 0x00000007:
			if (!IS_ACTOR_VALID(Global_34573) && !Global_34165.f_44)
			{
				*iParam0 = 16;
				return 1;
			}
			if (!IS_ACTOR_ALIVE(Global_34573) && !Global_34165.f_44)
			{
				*iParam0 = 16;
				return 1;
			}
			if (!Function_672(StackVal))
			{
				*iParam0 = 16;
				return 1;
			}
			GET_POSITION(Function_533(StackVal), &uVar0);
			if (!(Global_3410 && iParam0->f_100))
			{
				if (!Function_643(iParam0, Function_648(iParam0->f_124)))
				{
					if (((StackVal || StackVal != 1 != 2) || iParam0->f_124) && !Global_34165.f_44)
					{
						iParam0->f_120 = 1;
					}
					*iParam0 = 16;
					return 1;
				}
			}
			if (!Function_639(iParam0))
			{
				*iParam0 = 6;
				return 1;
			}
			if (iParam0->f_184 + 5.0f) > GET_CURRENT_GAME_TIME()
			{
				if (Function_669(StackVal, StackVal, iParam0, &uVar0, Global_34574, 1))
				{
					return 1;
				}
			}
			if (Function_637(iParam0))
			{
				bVar3 = true;
			}
			if (Function_665(iParam0, &Global_34573, !Function_1()))
			{
				bVar3 = true;
			}
			if (Function_636(StackVal))
			{
				bVar3 = true;
			}
			if (StackVal != 3 && Function_1())
			{
				*iParam0 = 15;
				return 1;
			}
			if (iParam0->f_96 && iParam0->f_72 <= 2)
			{
				bVar3 = true;
			}
			if (StackVal && (StackVal || (((Global_3403 || bLocal_10) != 2 && iParam0->f_72 == 4) == 2 && iParam0->f_72 == 3)))
			{
				bVar3 = true;
			}
			if (bVar3)
			{
				Function_697(iParam0, bLocal_10);
			}
			break;
		
		case 0x00000009:
			Function_635(iParam0);
			*iParam0 = 10;
		
		case 0x0000000A:
			if (Function_634(iParam0))
			{
				*iParam0 = 12;
				return 1;
			}
			break;
		
		case 0x0000000B:
			if (Function_634(iParam0))
			{
				*iParam0 = 12;
				return 1;
			}
			break;
		
		case 0x0000000C:
			if ((Global_29007 != 3 || Global_29007 != 4) && !Global_34165.f_44)
			{
				Function_633(iParam0);
			}
			else
			{
				Function_628(iParam0);
			}
			*iParam0 = 13;
		
		case 0x0000000D:
			*iParam0 = 16;
			return 1;
			break;
		
		case 0x0000000E:
			if (Function_634(iParam0))
			{
				*iParam0 = 15;
				return 1;
			}
			Function_96(bVar5);
			if (Function_669(StackVal, StackVal, iParam0, &uVar0, Function_96(bVar5), 1))
			{
				return 1;
			}
			break;
		
		case 0x0000000F:
			Function_628(iParam0);
			*iParam0 = 16;
			return 1;
			break;
		
		case 0x00000010:
			*iParam0 = 17;
			if (IS_OBJECTSET_VALID(iParam0->f_180))
			{
				bVar6 = false;
				while (bVar6 <= GET_OBJECTSET_SIZE(iParam0->f_180))
				{
					if (IS_ACTOR_VEHICLE(GET_ACTOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar6, iParam0->f_180))))
					{
						bVar4 = GET_ACTOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar6, iParam0->f_180));
					}
					bVar6++;
				}
			}
			if (IS_ACTOR_VALID(iParam0->f_16))
			{
				if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(iParam0->f_16)))
				{
					REMOVE_BLIP(GET_BLIP_ON_OBJECT(iParam0->f_16));
				}
			}
			if (IS_OBJECTSET_VALID(iParam0->f_180))
			{
				Global_28842.f_48 = (Global_28842.f_48 - GET_OBJECTSET_SIZE(iParam0->f_180));
			}
			if (SQUAD_IS_VALID(StackVal))
			{
				if (iParam0->f_120)
				{
					Function_627(iParam0 + 8, 0, 1, 1);
				}
				else
				{
					Function_628(iParam0);
					Function_627(iParam0 + 8, 0, 0, 0);
				}
			}
			if (IS_OBJECTSET_VALID(iParam0->f_180))
			{
				if (iParam0->f_120)
				{
					bVar4 = GET_MOUNT(Global_34573);
					if (IS_OBJECT_VALID(bVar4))
					{
						if (IS_OBJECT_IN_OBJECTSET(bVar4, iParam0->f_180))
						{
							REMOVE_OBJECT_FROM_OBJECTSET(bVar4, iParam0->f_180);
							RELEASE_OBJECT_REF(bVar4);
						}
					}
					Function_626(iParam0->f_180);
				}
				else
				{
					Function_625(iParam0->f_180);
				}
			}
			iParam0->f_120 = 0;
			return 1;
			break;
		
		case 0x00000011:
			if (IS_ACTOR_VALID(iParam0->f_16))
			{
				if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(iParam0->f_16)))
				{
					REMOVE_BLIP(GET_BLIP_ON_OBJECT(iParam0->f_16));
				}
			}
			Function_732(iParam0, 0);
			if (bParam1)
			{
				Global_28842.f_8 = (StackVal - 1);
			}
			return 1;
			break;
	}
	return 0;
}

void Function_625(bool bParam0) //Position: 0x2311D / 143645
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

void Function_626(bool bParam0) //Position: 0x23162 / 143714
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
			DESTROY_OBJECT(bVar0);
		}
	}
	return;
}

void Function_627(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x231A7 / 143783
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
				if (bParam3)
				{
					DESTROY_ACTOR(bVar1);
					DESTROY_ACTOR(bVar2);
				}
				else if (bParam2)
				{
					if (!Function_71(bVar1, 0x3f800000, 0x42960000, 1, 1, 0))
					{
						DESTROY_ACTOR(bVar1);
					}
					if (!Function_71(bVar2, 0x3f800000, 0x42960000, 1, 1, 0))
					{
						DESTROY_ACTOR(bVar2);
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
				if (IS_ACTOR_VALID(bVar2))
				{
					if (bParam1)
					{
						RELEASE_ACTOR_AS_AMBIENT(bVar2);
					}
					else
					{
						RELEASE_ACTOR(bVar2);
					}
				}
			}
			else if (IS_ACTOR_RIDING(bVar1))
			{
				bVar2 = GET_MOUNT(bVar1);
				if (bParam3)
				{
					if (IS_ACTOR_VALID(GET_ATTACHED_HOGTIE_VICTIM(GET_ACTOR_FROM_OBJECT(bVar2))))
					{
						DESTROY_ACTOR(GET_ATTACHED_HOGTIE_VICTIM(GET_ACTOR_FROM_OBJECT(bVar2)));
					}
					DESTROY_ACTOR(bVar1);
					DESTROY_ACTOR(bVar2);
				}
				else if (bParam2)
				{
					if (!Function_71(bVar1, 0x3f800000, 0x42960000, 1, 1, 0))
					{
						DESTROY_ACTOR(bVar1);
					}
					if (!Function_71(bVar2, 0x3f800000, 0x42960000, 1, 1, 0))
					{
						if (IS_ACTOR_VALID(GET_ATTACHED_HOGTIE_VICTIM(GET_ACTOR_FROM_OBJECT(bVar2))))
						{
							DESTROY_ACTOR(GET_ATTACHED_HOGTIE_VICTIM(GET_ACTOR_FROM_OBJECT(bVar2)));
						}
						DESTROY_ACTOR(bVar2);
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
				if (IS_ACTOR_VALID(bVar2))
				{
					if (IS_ACTOR_VALID(GET_ATTACHED_HOGTIE_VICTIM(GET_ACTOR_FROM_OBJECT(bVar2))))
					{
						DESTROY_ACTOR(GET_ATTACHED_HOGTIE_VICTIM(GET_ACTOR_FROM_OBJECT(bVar2)));
					}
					if (bParam1)
					{
						RELEASE_ACTOR_AS_AMBIENT(bVar2);
					}
					else
					{
						RELEASE_ACTOR(bVar2);
					}
				}
			}
			else
			{
				if (bParam3)
				{
					DESTROY_ACTOR(bVar1);
				}
				else if (bParam2)
				{
					if (!Function_71(bVar1, 0x3f800000, 0x42960000, 1, 1, 0))
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
		}
		else
		{
			bVar0++;
		}
	}
}

void Function_628(int iParam0) //Position: 0x233A5 / 144293
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	SQUAD_GOALS_CLEAR(StackVal);
	bVar1 = Function_632();
	if (!Global_34165.f_44)
	{
		Function_631(StackVal, Global_34573, 4);
	}
	bVar0 = false;
	while (StackVal <= SQUAD_GET_SIZE(bVar0))
	{
		bVar2 = SQUAD_GET_ACTOR_BY_INDEX(StackVal, bVar0);
		Function_629(bVar2);
		if (!IS_ACTOR_DRAFTED(bVar2))
		{
			TASK_FLEE_ACTORSET(bVar2, bVar1, -1.0f, -1.0f, 0, 0, 0);
			TASK_PRIORITY_SET(bVar2, true);
			TASK_OVERRIDE_CLEAR_MOVETYPE(bVar2);
		}
		bVar0++;
	}
	bVar0 = false;
	if (!IS_OBJECTSET_VALID(iParam0->f_180))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= GET_OBJECTSET_SIZE(iParam0->f_180))
	{
		bVar2 = GET_ACTOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, iParam0->f_180));
		if (!IS_ACTOR_VEHICLE(bVar2) && !IS_ACTOR_DRAFTED(bVar2))
		{
			Function_629(bVar2);
			TASK_FLEE_ACTORSET(bVar2, bVar1, -1.0f, -1.0f, 0, 0, 0);
			TASK_PRIORITY_SET(bVar2, false);
		}
		bVar0++;
	}
	return;
}

void Function_629(bool bParam0) //Position: 0x2346F / 144495
{
	bool bVar0;
	vector3 vVar1;
	bool bVar4;
	
	if (NET_IS_IN_SESSION())
	{
		bVar4 = false;
		while (bVar4 <= 16)
		{
			if (Function_630(bVar4))
			{
				bVar0 = GET_SLOT_ACTOR(bVar4);
				Function_96(bVar0);
				vVar1 = { StackVal, StackVal, Function_96(bVar0) };
				MEMORY_REPORT_POSITION(bParam0, bVar0, &vVar1);
			}
			bVar4++;
		}
	}
	else
	{
		MEMORY_REPORT_POSITION(bParam0, Global_34573, &Global_34574);
	}
	return;
}

bool Function_630(bool bParam0) //Position: 0x234BD / 144573
{
	if (bParam0 > 0 || bParam0 <= 16)
	{
		return 0;
	}
	return (Global_79297 && SHIFT_LEFT(true, bParam0)) == 0;
}

void Function_631(bool bParam0, bool bParam1, bool bParam2) //Position: 0x234DF / 144607
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

var Function_632() //Position: 0x2354D / 144717
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

void Function_633(int iParam0) //Position: 0x235B9 / 144825
{
	bool bVar0;
	
	SQUAD_GOALS_CLEAR(StackVal);
	bVar0 = false;
	while (StackVal <= SQUAD_GET_SIZE(bVar0))
	{
		TASK_WANDER(SQUAD_GET_ACTOR_BY_INDEX(StackVal, bVar0), 3212836864);
		TASK_PRIORITY_SET(SQUAD_GET_ACTOR_BY_INDEX(StackVal, bVar0), 2);
		bVar0++;
	}
	bVar0 = false;
	if (!IS_OBJECTSET_VALID(iParam0->f_180))
	{
		return;
	}
	bVar0 = false;
	while (bVar0 <= GET_OBJECTSET_SIZE(iParam0->f_180))
	{
		if (!IS_ACTOR_VEHICLE(GET_ACTOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, iParam0->f_180))) && !IS_ACTOR_DRAFTED(GET_ACTOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, iParam0->f_180))))
		{
			TASK_WANDER(GET_ACTOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, iParam0->f_180)), 3212836864);
			TASK_PRIORITY_SET(GET_ACTOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, iParam0->f_180)), 2);
		}
		bVar0++;
	}
	return;
}

bool Function_634(int iParam0) //Position: 0x2366B / 145003
{
	bool bVar0;
	
	switch (StackVal)
	{
		case 0x00000001:
			bVar0 = false;
			while (StackVal <= SQUAD_GET_SIZE(bVar0))
			{
				if (IS_ACTOR_RIDING(SQUAD_GET_ACTOR_BY_INDEX(StackVal, bVar0)))
				{
					return 0;
				}
				bVar0++;
			}
			break;
		
		case 0x00000002:
			bVar0 = false;
			while (StackVal <= SQUAD_GET_SIZE(bVar0))
			{
				if (IS_ACTOR_RIDING_VEHICLE(SQUAD_GET_ACTOR_BY_INDEX(StackVal, bVar0)))
				{
					return 0;
				}
				bVar0++;
			}
			break;
		
		default:
			LOG_ERROR("Unknown traffic type in TRAFFIC_IS_NODE_DISMOUNTED");
			break;
	}
	return 1;
}

void Function_635(int iParam0) //Position: 0x2371A / 145178
{
	bool bVar0;
	
	SQUAD_GOALS_CLEAR(StackVal);
	switch (StackVal)
	{
		case 0x00000001:
			bVar0 = false;
			while (StackVal <= SQUAD_GET_SIZE(bVar0))
			{
				TASK_DISMOUNT(SQUAD_GET_ACTOR_BY_INDEX(StackVal, bVar0), 1);
				MEMORY_PREFER_WALKING(SQUAD_GET_ACTOR_BY_INDEX(StackVal, bVar0), false);
				bVar0++;
			}
			break;
		
		case 0x00000002:
			bVar0 = false;
			while (StackVal <= SQUAD_GET_SIZE(bVar0))
			{
				TASK_VEHICLE_LEAVE(SQUAD_GET_ACTOR_BY_INDEX(StackVal, bVar0));
				MEMORY_PREFER_WALKING(SQUAD_GET_ACTOR_BY_INDEX(StackVal, bVar0), false);
				bVar0++;
			}
			break;
		
		default:
			LOG_ERROR("Unknown traffic type in TRAFFIC_TASK_NODE_DISMOUNT");
			break;
	}
	return;
}

bool Function_636(bool bParam0) //Position: 0x237E0 / 145376
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

bool Function_637(int iParam0) //Position: 0x2380C / 145420
{
	if (!IS_VOLUME_VALID(Global_28842.f_28))
	{
		return 0;
	}
	if (StackVal || (StackVal || StackVal != 2 != 4) != 1)
	{
		if (Function_638(StackVal, Global_28842.f_28))
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

bool Function_638(bool bParam0, bool bParam1) //Position: 0x2387B / 145531
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

bool Function_639(int iParam0) //Position: 0x238FD / 145661
{
	vector3 vVar0;
	vector3 vVar3;
	bool bVar6;
	
	if (DECOR_CHECK_EXIST(StackVal, "coachService"))
	{
		return 1;
	}
	Function_622(iParam0 + 24);
	bVar6 = Function_642(StackVal, StackVal, StackVal, Function_622(iParam0 + 24));
	GET_POSITION(bVar6, &vVar0);
	Function_622(iParam0 + 24);
	vVar3 = { StackVal, StackVal, Function_622(iParam0 + 24) };
	if (iParam0->f_156 > 1.0f)
	{
		iParam0->f_156 = Function_641(StackVal, iParam0->f_72);
	}
	if (StackVal > Function_640(VDIST(vVar3, vVar0), Function_641(iParam0->f_156, iParam0->f_72)))
	{
		*iParam0 = 6;
		return 0;
	}
	if (Function_1())
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

float Function_640(bool bParam0, int iParam1) //Position: 0x239A7 / 145831
{
	if (bParam0 > iParam1)
	{
		return bParam0;
	}
	return iParam1;
}

int Function_641(bool bParam0, int iParam1) //Position: 0x239BA / 145850
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

var Function_642(vector3 vParam0, bool bParam3) //Position: 0x23ACB / 146123
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;
	
	bVar0 = false;
	bVar1 = 4294967295;
	bVar2 = -1.0f;
	if (Function_60(StackVal, StackVal, vParam0))
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

bool Function_643(var uParam0, bool bParam1) //Position: 0x23C4C / 146508
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	vector3 vVar4;
	
	bVar0 = StackVal;
	if (!SQUAD_IS_VALID(bVar0))
	{
		return 0;
	}
	if (SQUAD_GET_SIZE(bVar0) == 0)
	{
		return 0;
	}
	bVar1 = Function_176();
	if (!NET_IS_IN_SESSION())
	{
		if (IS_ACTOR_VALID(bVar1))
		{
			iVar2 = Function_646(bVar0, bVar1, bParam1, 1);
			return iVar2 < 0;
		}
		return 0;
	}
	bVar3 = false;
	while (bVar3 <= 16)
	{
		if (GET_SLOT_POSITION(bVar3, &vVar4))
		{
			iVar2 = Function_644(StackVal, StackVal, bVar0, vVar4, bParam1, 1);
			if (iVar2 >= 0)
			{
				return 1;
			}
		}
		bVar3++;
	}
	return 0;
}

int Function_644(bool bParam0, vector3 vParam1, var uParam4, bool bParam5) //Position: 0x23CC9 / 146633
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 < (SQUAD_GET_SIZE(bParam0) - 1))
	{
		bVar2 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
		if (IS_ACTOR_VALID(bVar2) && IS_ACTOR_ALIVE(bVar2))
		{
			if (Function_645(StackVal, StackVal, bVar2, vParam1, uParam4))
			{
				iVar1++;
				if (bParam5)
				{
					return iVar1;
				}
			}
		}
		bVar0++;
	}
	return iVar1;
}

bool Function_645(bool bParam0, vector3 vParam1, float fParam4) //Position: 0x23D2D / 146733
{
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_65(bParam0);
		if (VDIST(Function_65(bParam0), vParam1) >= fParam4)
		{
			return 1;
		}
	}
	LOG_ERROR("Attempting to check whether an INVALID actor is in range of position. Returning FALSE.");
	return 0;
	return 0;
}

int Function_646(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x23DB7 / 146871
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
			if (Function_647(bVar2, bParam1, bParam2))
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

bool Function_647(bool bParam0, bool bParam1, bool bParam2) //Position: 0x23E26 / 146982
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

var Function_648(bool bParam0) //Position: 0x23F37 / 147255
{
	if (bParam0)
	{
		return 100.0f;
	}
	if (Global_3386 && !Global_34165.f_44)
	{
		if (StackVal == 1)
		{
			return 75.0f;
		}
		if (StackVal || StackVal != 2 != 4)
		{
			return 120.0f;
		}
	}
	return 180.0f;
}

bool Function_649(int iParam0, bool bParam1, bool bParam2) //Position: 0x23F84 / 147332
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (!Function_735(iParam0))
	{
		Function_621(iParam0, 1);
		return 0;
	}
	if (DECOR_CHECK_EXIST(StackVal, "coachService"))
	{
		return 1;
	}
	AI_CLEAR_NAV_MATERIAL_USAGE(Function_533(StackVal));
	if (!SQUAD_GOAL_IS_VALID(iParam0->f_12))
	{
		SQUAD_GOALS_CLEAR(StackVal);
	}
	Function_622(iParam0 + 24);
	vVar3 = { StackVal, StackVal, Function_622(iParam0 + 24) };
	vVar0 = { StackVal, StackVal, vVar3 };
	Function_653(StackVal, StackVal, vVar0, iParam0 + 24);
	if (bParam1)
	{
		iParam0->f_76 = Function_652(StackVal, iParam0->f_76, iParam0->f_80);
		if (!iParam0->f_96 || iParam0->f_72 != 4294967295)
		{
			iParam0->f_72 = iParam0->f_76;
		}
	}
	if (bParam2)
	{
		AI_SET_NAV_MATERIAL_USAGE(StackVal, Function_651(Function_533(StackVal)), 0);
	}
	Function_650(iParam0);
	return 1;
}

void Function_650(int iParam0) //Position: 0x2403E / 147518
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

int Function_651(int iParam0) //Position: 0x241D5 / 147925
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

int Function_652(int iParam0, int iParam1, int iParam2) //Position: 0x241FC / 147964
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

void Function_653(vector3 vParam0) //Position: 0x2429F / 148127
{
	*uParam3 = vParam0.x;
	uParam3->f_4 = vParam0.y;
	uParam3->f_8 = vParam0.z;
}

bool Function_654(int iParam0) //Position: 0x242BC / 148156
{
	var uVar0;
	bool bVar3;
	
	if (DECOR_CHECK_EXIST(StackVal, "wasstickup"))
	{
		DECOR_REMOVE(StackVal, "wasstickup");
		return 1;
	}
	Function_622(iParam0 + 24);
	bVar3 = Function_642(StackVal, StackVal, StackVal, Function_622(iParam0 + 24));
	GET_POSITION(bVar3, &uVar0);
	*(iParam0 + 24) = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_656(StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(iParam0 + 24), iParam0->f_152, 2,5f, 0) };
	if (Function_655(iParam0 + 24))
	{
		return 0;
	}
	return 1;
}

bool Function_655(bool bParam0) //Position: 0x2432F / 148271
{
	return ((((StackVal && (StackVal && *bParam0 != 0.0f != 0.0f) != 0.0f) && bParam0->f_12 != 0.0f) && bParam0->f_16 != 0.0f) && bParam0->f_20 != 4294967295);
}

struct<24> Function_656(int iParam0, struct<6> Param1, bool bParam7, float fParam8, var uParam9) //Position: 0x2435D / 148317
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
	
	Function_622(&Param1);
	vVar6 = { StackVal, StackVal, Function_622(&Param1) };
	bVar9 = false;
	uVar11 = Function_664(StackVal, iParam0->f_164);
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
	GET_OBJECT_POSITION(Function_533(StackVal), &uVar15);
	vVar18 = { 0.0f, 0.0f, -1.0f };
	if (!IS_OBJECTSET_VALID(iParam0->f_160))
	{
		iParam0->f_160 = CREATE_OBJECTSET_IN_LAYOUT(Function_75(), Global_28841, 36, 1);
	}
	bVar32 = 4294967295;
	while (!bVar10)
	{
		bVar31 = START_CURVE_QUERY(Global_28841, vVar6, uVar11, fVar12, fVar13, Function_640(Function_663(iParam0), ((fVar13 - fVar12) / 2.0f)), 0);
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
			Function_662(iParam0->f_160);
			ADD_OBJECT_TO_OBJECTSET(bParam7, iParam0->f_160);
			if (uParam9 || iVar14 > 5)
			{
				fVar12 = fVar13;
				fVar13 = (fVar13 + fParam8);
				iVar14++;
			}
			else
			{
				return StackVal, StackVal, StackVal, StackVal, StackVal, Function_661();
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
					Function_622(&Var25);
					Function_622(&Param1);
					vVar21 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_622(&Param1), Function_622(&Var25), StackVal) };
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
		else if (Function_60(StackVal, StackVal, vVar18))
		{
			bVar32 = ROUND((TO_FLOAT(RAND_INT_RANGE(false, (GET_NUM_CURVES_IN_CURVE_QUERY(bVar31) - 1000))) / 1000.0f));
		}
		else if (Global_3386)
		{
			Function_622(&Param1);
			vVar18 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_622(&Param1), Global_34574, StackVal) };
			VNORMALIZE(&vVar18);
			Var35 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_661() };
			Var41 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_661() };
			bVar9 = false;
			while (bVar9 <= GET_NUM_CURVES_IN_CURVE_QUERY(bVar31))
			{
				bVar47 = GET_CURVE_FROM_CURVE_INDEX_IN_CURVE_QUERY(bVar31, bVar9);
				GET_CURVE_POINT(bVar47, 1.0f, &Var35, 0);
				GET_CURVE_POINT(bVar47, 0.0f, &Var41, 0);
				Function_622(&Param1);
				Function_622(&Var35);
				Function_622(&Param1);
				Function_622(&Var41);
				if (StackVal > Function_223(StackVal, StackVal, StackVal, Function_223(StackVal, StackVal, StackVal, StackVal, Function_622(&Param1), Function_622(&Var35)), Function_622(&Param1), Function_622(&Var41)))
				{
					UNK_0x04D89A35(bVar47, 1.0f, 0.0f, -5.0f, &Var25);
				}
				else
				{
					UNK_0x04D89A35(bVar47, 0.0f, 0.0f, 5.0f, &Var25);
				}
				if (Global_30842[12])
				{
					Function_660(StackVal, StackVal, StackVal, StackVal, StackVal, Var25);
					PRINTNL();
				}
				Function_622(&Var25);
				Function_622(&Param1);
				vVar21 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_622(&Param1), Function_622(&Var25), StackVal) };
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
			Var35 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_661() };
			Var41 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_661() };
			Function_622(&Param1);
			vVar18 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_622(&Param1), Global_34574, StackVal) };
			VNORMALIZE(&vVar18);
			bVar9 = false;
			while (bVar9 <= GET_NUM_CURVES_IN_CURVE_QUERY(bVar31))
			{
				bVar47 = GET_CURVE_FROM_CURVE_INDEX_IN_CURVE_QUERY(bVar31, bVar9);
				GET_CURVE_POINT(bVar47, 1.0f, &Var35, 0);
				GET_CURVE_POINT(bVar47, 0.0f, &Var41, 0);
				Function_622(&Param1);
				Function_622(&Var35);
				Function_622(&Param1);
				Function_622(&Var41);
				if (StackVal > Function_223(StackVal, StackVal, StackVal, Function_223(StackVal, StackVal, StackVal, StackVal, Function_622(&Param1), Function_622(&Var35)), Function_622(&Param1), Function_622(&Var41)))
				{
					UNK_0x04D89A35(bVar47, 1.0f, Var35.f_16, 5.0f, &Var25);
				}
				else
				{
					UNK_0x04D89A35(bVar47, 0.0f, Var41.f_16, 5.0f, &Var25);
				}
				Function_622(&Var25);
				Function_622(&Param1);
				vVar21 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_622(&Param1), Function_622(&Var25), StackVal) };
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
				return StackVal, StackVal, StackVal, StackVal, StackVal, Function_661();
			}
		}
		bVar10 = true;
	}
	iParam0->f_152 = GET_CURVE_FROM_CURVE_INDEX_IN_CURVE_QUERY(bVar31, bVar32);
	iParam0->f_156 = CURVE_CALCULATE_DISTANCE_BY_FORCED_COMPONENT_SUBDIVISION_BOUNDS(iParam0->f_152, 0.0f, 1.0f, 10);
	GET_POINT_FROM_CURVE_QUERY(bVar31, bVar32, &Var0);
	Function_622(&Var0);
	vVar48 = { StackVal, StackVal, Function_622(&Var0) };
	GET_CURVE_POINT(iParam0->f_152, 1.0f, &Var51, 0);
	GET_CURVE_POINT(iParam0->f_152, 0.0f, &Var57, 0);
	if (StackVal < Function_659(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_659(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var51, Param1), Var57, Param1))
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
			Function_622(&Var25);
			vVar48 = { StackVal, StackVal, Function_622(&Var25) };
			bVar9++;
		}
		Function_622(&Var0);
		vVar48 = { StackVal, StackVal, Function_622(&Var0) };
	}
	Function_657(iParam0);
	UNK_0xDF93BD7C(bVar31);
	return StackVal, StackVal, StackVal, StackVal, StackVal, Var0;
}

void Function_657(int iParam0) //Position: 0x24853 / 149587
{
	if (!Function_735(iParam0))
	{
		return;
	}
	if (!Function_658(StackVal))
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

bool Function_658(bool bParam0) //Position: 0x248F7 / 149751
{
	if (bParam0 > 0 || bParam0 < 3)
	{
		return 0;
	}
	return 1;
}

float Function_659(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11) //Position: 0x2490C / 149772
{
	vector3 vVar0;
	vector3 vVar3;
	
	Function_622(&iParam0);
	vVar0 = { StackVal, StackVal, Function_622(&iParam0) };
	Function_622(&iParam6);
	vVar3 = { StackVal, StackVal, Function_622(&iParam6) };
	return VDIST(vVar0, vVar3);
}

void Function_660(struct<17> Param0) //Position: 0x24931 / 149809
{
	Function_622(&Param0);
	PRINTVECTOR(Function_622(&Param0));
	PRINTSTRING(": t=");
	PRINTFLOAT(Param0.f_12);
	PRINTSTRING(" slope=");
	PRINTFLOAT(Param0.f_16);
}

struct<24> Function_661() //Position: 0x24966 / 149862
{
	struct<6> Var0;
	
	Var0.f_20 = 4294967295;
	return StackVal, StackVal, StackVal, StackVal, StackVal, Var0;
}

void Function_662(bool bParam0) //Position: 0x24977 / 149879
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

int Function_663(int iParam0) //Position: 0x249B7 / 149943
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

int Function_664(int iParam0, bool bParam1) //Position: 0x24A6F / 150127
{
	if (bParam1 != 0)
	{
		return bParam1;
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

bool Function_665(int iParam0, var uParam1, bool bParam2) //Position: 0x24A9F / 150175
{
	bool bVar0;
	struct<49> Var1;
	
	if (Global_3380)
	{
		if (IS_ACTOR_VALID(iParam0->f_16))
		{
			if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(iParam0->f_16)))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(iParam0->f_16));
			}
		}
	}
	if (!StackVal != 2)
	{
		return 0;
	}
	if (Global_3395)
	{
		return 0;
	}
	if (!IS_ACTOR_VEHICLE(iParam0->f_16))
	{
		return 0;
	}
	if (Function_668(iParam0->f_16, 0))
	{
		if (Function_667(iParam0->f_16) || !bParam2)
		{
			Function_635(iParam0);
			if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(iParam0->f_16)))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(iParam0->f_16));
			}
			*iParam0 = 14;
			return 1;
		}
	}
	if (!bParam2)
	{
		return 0;
	}
	if (!iParam0->f_100)
	{
		return 0;
	}
	bVar0 = Function_533(StackVal);
	if (!IS_ACTOR_VALID(bVar0))
	{
		if (*iParam0 != 17)
		{
			*iParam0 = 16;
		}
		return 1;
	}
	if (IS_ACTOR_JACKING_VEHICLE(*uParam1))
	{
		Function_635(iParam0);
		if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(iParam0->f_16)))
		{
			REMOVE_BLIP(GET_BLIP_ON_OBJECT(iParam0->f_16));
		}
		Global_28842.f_76 = GET_CURRENT_GAME_TIME();
		SAY_SINGLE_LINE_CONTEXT(bVar0, 171, Function_176(), 1, 1, 2, 4294967295, 4294967295, 0, 1);
		*iParam0 = 14;
		return 1;
	}
	if (AI_GET_IS_RETREATING(bVar0))
	{
		Global_28842.f_76 = GET_CURRENT_GAME_TIME();
		return 1;
	}
	if ((IS_ACTOR_RIDING(*uParam1) || IS_ACTOR_DRIVING_VEHICLE(*uParam1)) || (IS_ACTOR_RIDING_VEHICLE(*uParam1) && !GET_VEHICLE(*uParam1) != iParam0->f_16))
	{
		return 0;
	}
	if (Global_3403 || Global_3404)
	{
		if (Function_647(bVar0, *uParam1, 7.0f))
		{
			if (!DECOR_CHECK_EXIST(StackVal, "oneshotdialog"))
			{
				DECOR_SET_BOOL(StackVal, "oneshotdialog", true);
				Global_28842.f_76 = GET_CURRENT_GAME_TIME();
				SAY_SINGLE_LINE_CONTEXT(bVar0, 60, Function_176(), 0, 0, 2, 4294967295, 4294967295, 0, 1);
				iParam0->f_92 = 0;
				iParam0->f_132 = 0.0f;
				if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(iParam0->f_16)))
				{
					REMOVE_BLIP(GET_BLIP_ON_OBJECT(iParam0->f_16));
				}
				return 1;
			}
			if (GET_VEHICLE(*uParam1) == iParam0->f_16)
			{
				Global_28842.f_76 = GET_CURRENT_GAME_TIME();
				Function_635(iParam0);
				*iParam0 = 14;
				if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(iParam0->f_16)))
				{
					REMOVE_BLIP(GET_BLIP_ON_OBJECT(iParam0->f_16));
				}
				return 1;
			}
			return 0;
		}
	}
	if (Function_168(4))
	{
		if (!iParam0->f_92)
		{
			if (iParam0->f_132 > 1.0f)
			{
				if (StackVal != StackVal && Function_647(bVar0, *uParam1, 10.0f))
				{
					iParam0->f_92 = 1;
					iParam0->f_132 = (GET_CURRENT_GAME_TIME() + 20.0f);
					SET_ACTION_NODE_FOR_ACTOR(bVar0, "default_character_Main/Vehicle/Jack/React/Left");
					SAY_SINGLE_LINE_CONTEXT(bVar0, 309, Function_176(), 1, 0, 2, 4294967295, 4294967295, 0, 1);
					return 1;
				}
				if (Function_666(bVar0, 50.0f))
				{
					iParam0->f_92 = 1;
					iParam0->f_132 = (GET_CURRENT_GAME_TIME() + 60.0f);
					SET_ACTION_NODE_FOR_ACTOR(bVar0, "default_character_Main/Vehicle/Jack/React/Left");
					SAY_SINGLE_LINE_CONTEXT(bVar0, 309, Function_176(), 0, 0, 2, 4294967295, 4294967295, 0, 1);
					return 1;
				}
			}
			if (!Function_43(Global_76846, 64))
			{
				if (Function_647(iParam0->f_16, *uParam1, 35.0f) && Function_71(iParam0->f_16, 0x3f800000, 0x42960000, 1, 1, 0))
				{
					Function_38(Global_34573, 64, 1, 0);
				}
			}
		}
		else
		{
			if (iParam0->f_132 > (GET_CURRENT_GAME_TIME() + 15.0f))
			{
				if (!DECOR_CHECK_EXIST(StackVal, "oneshotdialog"))
				{
					if (Function_647(bVar0, *uParam1, 10.0f))
					{
						DECOR_SET_BOOL(StackVal, "oneshotdialog", true);
						SET_ACTION_NODE_FOR_ACTOR(bVar0, "default_character_Main/Vehicle/Jack/React/Left");
						SAY_SINGLE_LINE_CONTEXT(bVar0, 310, Function_176(), 0, 0, 0, 4294967295, 4294967295, 0, 1);
					}
				}
			}
			if (iParam0->f_132 > GET_CURRENT_GAME_TIME())
			{
				iParam0->f_132 = 0.0f;
				iParam0->f_92 = 0;
				return 1;
			}
		}
		if (GET_VEHICLE(*uParam1) != iParam0->f_16 && !Function_45())
		{
			if ((!DECOR_CHECK_EXIST(StackVal, "npassenger") && !Global_3380) && !Global_3382)
			{
				DECOR_SET_BOOL(StackVal, "npassenger", true);
				*(&Var1 + 64 + 20) = 1;
				Var1.f_44 = DECOR_GET_INT(Global_28842.f_24, "regid");
				Var1.f_48 = StackVal;
				LAUNCH_NEW_SCRIPT_WITH_ARGS("$/content/Ambient/Passenger/passenger_coach", &Var1, 51, 0);
				iParam0->f_92 = 0;
				if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(iParam0->f_16)))
				{
					REMOVE_BLIP(GET_BLIP_ON_OBJECT(iParam0->f_16));
				}
				return 1;
			}
		}
	}
	return 0;
}

bool Function_666(bool bParam0, bool bParam1) //Position: 0x24F54 / 151380
{
	bool bVar0;
	bool bVar1;
	
	if (!NET_IS_IN_SESSION())
	{
		if (IS_ACTOR_WHISTLING(Function_176()))
		{
			if (Function_647(bParam0, Function_176(), bParam1))
			{
				return 1;
			}
		}
		return 0;
	}
	bVar0 = false;
	while (bVar0 <= 16)
	{
		if (IS_SLOT_VALID(bVar0))
		{
			if (bVar0 == GET_LOCAL_SLOT())
			{
				bVar1 = Function_176();
			}
			else
			{
				bVar1 = GET_SLOT_ACTOR(bVar0);
			}
			if (IS_ACTOR_VALID(bVar1))
			{
				if (IS_ACTOR_WHISTLING(bVar1))
				{
					if (Function_647(bParam0, bVar1, bParam1))
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

int Function_667(int iParam0) //Position: 0x24FCC / 151500
{
	bool bVar0;
	bool bVar1;
	
	if (!NET_IS_IN_SESSION())
	{
		if (IS_ACTOR_DRIVING_VEHICLE(Function_176()))
		{
			return GET_VEHICLE(Function_176()) != iParam0;
		}
		return 0;
	}
	bVar0 = false;
	while (bVar0 <= 16)
	{
		if (IS_SLOT_VALID(bVar0))
		{
			if (bVar0 == GET_LOCAL_SLOT())
			{
				bVar1 = Function_176();
			}
			else
			{
				bVar1 = GET_SLOT_ACTOR(bVar0);
			}
			if (IS_ACTOR_VALID(bVar1))
			{
				if (IS_ACTOR_DRIVING_VEHICLE(bVar1) && GET_VEHICLE(bVar1) != iParam0)
				{
					return 1;
				}
			}
		}
		bVar0++;
	}
	return 0;
}

bool Function_668(int iParam0, bool bParam1) //Position: 0x2503C / 151612
{
	bool bVar0;
	bool bVar1;
	
	if (!NET_IS_IN_SESSION())
	{
		return GET_VEHICLE(Function_176()) != iParam0;
	}
	bVar0 = false;
	while (bVar0 <= 16)
	{
		if (IS_SLOT_VALID(bVar0))
		{
			if (bVar0 == GET_LOCAL_SLOT())
			{
				if (!bParam1)
				{
					bVar1 = Function_176();
				}
			}
			else
			{
				bVar1 = GET_SLOT_ACTOR(bVar0);
			}
			if (IS_ACTOR_VALID(bVar1))
			{
				if (GET_VEHICLE(bVar1) == iParam0)
				{
					return 1;
				}
			}
		}
		bVar0++;
	}
	return 0;
}

bool Function_669(int iParam0, var uParam1, vector3 vParam2, bool bParam5) //Position: 0x250A0 / 151712
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	
	vParam2 = { StackVal, StackVal, vParam2 };
	switch (StackVal)
	{
		case 0x00000001:
			bVar0 = false;
			while (StackVal <= SQUAD_GET_SIZE(bVar0))
			{
				bVar7 = SQUAD_GET_ACTOR_BY_INDEX(StackVal, bVar0);
				if (IS_ACTOR_VALID(bVar7))
				{
					if (DECOR_CHECK_EXIST(bVar7, "witness"))
					{
						SQUAD_LEAVE(bVar7);
						RELEASE_ACTOR(bVar7);
						TASK_OVERRIDE_CLEAR_MOVETYPE(bVar7);
						iParam0->f_20 = (iParam0->f_20 - 1);
					}
					else
					{
						bVar9 = false;
						bVar8 = GET_MOUNT(bVar7);
						if (!IS_ACTOR_VALID(bVar8))
						{
							bVar9 = true;
						}
						else
						{
							GET_POSITION(bVar7, &vVar1);
							GET_POSITION(bVar8, &vVar4);
							if (Function_223(StackVal, StackVal, StackVal, StackVal, vVar1, vVar4) < 10.0f)
							{
								bVar9 = true;
							}
						}
						if (bVar9)
						{
							SQUAD_LEAVE(bVar7);
							if (!DECOR_CHECK_EXIST(bVar7, "hijacked"))
							{
								TASK_CLEAR(bVar7);
								TASK_PRIORITY_SET(bVar7, 2);
								if (NET_IS_IN_SESSION())
								{
									Function_671(bVar7);
								}
								else
								{
									TASK_WANDER(bVar7, 3212836864);
								}
							}
							else
							{
								DECOR_REMOVE(bVar7, "hijacked");
							}
							RELEASE_ACTOR(bVar7);
							if (IS_ACTOR_VALID(bVar8))
							{
								REMOVE_OBJECT_FROM_OBJECTSET(bVar8, iParam0->f_180);
								if (NET_IS_IN_SESSION())
								{
									Function_671(bVar8);
								}
								else
								{
									TASK_WANDER(bVar8, 3212836864);
								}
								RELEASE_ACTOR(bVar8);
							}
							iParam0->f_20 = (iParam0->f_20 - 1);
						}
					}
				}
				bVar0++;
			}
			if (iParam0->f_20 <= 1)
			{
				*iParam0 = 16;
				return 1;
			}
			break;
		
		case 0x00000002:
			if (!IS_ACTOR_VALID(iParam0->f_16))
			{
				Function_635(iParam0);
				*iParam0 = 14;
				return 1;
			}
			if (!IS_ACTOR_VALID(Function_533(StackVal)))
			{
				Function_635(iParam0);
				*iParam0 = 14;
				return 1;
			}
			if (NET_IS_IN_SESSION())
			{
				if (!NET_IS_OBJECT_LOCAL(iParam0->f_16))
				{
					return 0;
				}
				if (!NET_IS_OBJECT_LOCAL(Function_533(StackVal)))
				{
					return 0;
				}
			}
			*uParam1 = { StackVal, StackVal, *uParam1 };
			if (!NET_IS_IN_SESSION())
			{
				if (GET_ACTOR_STUCK_STATE(iParam0->f_16) != 0)
				{
					if (CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), iParam0->f_16, 1065353216, 1117126656, 1, 1, 0))
					{
						iParam0->f_120 = 0;
					}
					Function_635(iParam0);
					*iParam0 = 14;
					return 1;
				}
			}
			if (!Function_670(iParam0->f_16, 4294967295, 1, 4294967295))
			{
				Function_635(iParam0);
				*iParam0 = 14;
				return 1;
			}
			bVar0 = false;
			while (StackVal <= SQUAD_GET_SIZE(bVar0))
			{
				bVar7 = SQUAD_GET_ACTOR_BY_INDEX(StackVal, bVar0);
				if (DECOR_CHECK_EXIST(bVar7, "witness"))
				{
					SQUAD_LEAVE(bVar7);
					RELEASE_ACTOR(bVar7);
					TASK_OVERRIDE_CLEAR_MOVETYPE(bVar7);
					iParam0->f_20 = (iParam0->f_20 - 1);
				}
				bVar0++;
			}
			break;
	}
	if (bParam5)
	{
		if (!IS_OBJECT_VALID(iParam0->f_152))
		{
			LOG_ERROR("WE LOST OUR CURVE");
			*iParam0 = 6;
		}
	}
	return 0;
}

bool Function_670(bool bParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x2533E / 152382
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

void Function_671(bool bParam0) //Position: 0x253F7 / 152567
{
	bool bVar0;
	
	bVar0 = Function_632();
	Function_629(bParam0);
	TASK_FLEE_ACTORSET(bParam0, bVar0, -1.0f, -1.0f, 0, 0, 0);
	TASK_PRIORITY_SET(bParam0, true);
	TASK_OVERRIDE_CLEAR_MOVETYPE(bParam0);
	return;
}

bool Function_672(bool bParam0) //Position: 0x2541E / 152606
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

bool Function_673(int iParam0) //Position: 0x25475 / 152693
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;
	
	Function_622(iParam0 + 24);
	vVar3 = { StackVal, StackVal, Function_622(iParam0 + 24) };
	*(iParam0 + 24) = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_695(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(iParam0 + 24), iParam0->f_152, vVar0) };
	if (Function_655(iParam0 + 24))
	{
		*iParam0 = 16;
		return 0;
	}
	if (!Function_694(&vVar3, 20.0f, &iVar6, 3))
	{
		*iParam0 = 16;
		return 0;
	}
	Function_622(iParam0 + 24);
	*(iParam0 + 168) = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar3, Function_622(iParam0 + 24), StackVal) };
	*(iParam0 + 168) = { 0.0f, UNK_0x9C40E671(iParam0 + 168), 0.0f };
	iParam0->f_112 = 1;
	iParam0->f_116 = 1;
	Function_674(iParam0);
	return 1;
}

void Function_674(int iParam0) //Position: 0x254F9 / 152825
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	bool bVar7;
	
	if (!Function_731(256) || !Function_168(4))
	{
		return;
	}
	bVar0 = Function_693(StackVal, StackVal, Global_34574);
	if (!IS_OBJECT_VALID(bVar0))
	{
		return;
	}
	if (!Function_735(iParam0))
	{
		return;
	}
	iParam0->f_4 = 2;
	GET_OBJECT_POSITION(bVar0, &vVar1);
	vVar4 = { 0.0f, GET_OBJECT_HEADING(bVar0), 0.0f };
	bVar7 = 1177;
	if (Global_29004 == 2)
	{
		bVar7 = 1178;
	}
	else if (Global_29004 == 1)
	{
		bVar7 = 1179;
	}
	if (!STREAMING_IS_ACTOR_LOADED(bVar7, 4294967295))
	{
		return;
	}
	if (!STREAMING_IS_ACTOR_LOADED(Global_28842.f_64, 4294967295))
	{
		return;
	}
	if (!Function_677(StackVal, StackVal, StackVal, StackVal, StackVal, Global_28841, 2, 64, 512, vVar1, vVar4, iParam0 + 16, bVar7))
	{
		return;
	}
	iParam0->f_100 = 1;
	DECOR_SET_BOOL(StackVal, "coachService", true);
	iParam0->f_180 = CREATE_OBJECTSET_IN_LAYOUT(Function_75(), Global_28841, 15, 1);
	Function_676(StackVal, StackVal, iParam0->f_180);
	iParam0->f_184 = GET_CURRENT_GAME_TIME();
	Function_675(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *iParam0);
	return;
	*StackVal = StackVal;
}

void Function_675(struct<189> Param0) //Position: 0x255ED / 153069
{
	bool bVar0;
	
	if (!Function_1())
	{
		return;
	}
	if (Param0.f_188 == 0)
	{
	}
	if (SQUAD_IS_VALID(StackVal))
	{
		bVar0 = false;
		while (StackVal <= SQUAD_GET_SIZE(bVar0))
		{
			NET_ACTOR_SET_SCRIPT_INT(SQUAD_GET_ACTOR_BY_INDEX(StackVal, bVar0), Param0.f_188);
			bVar0++;
		}
	}
	if (IS_OBJECTSET_VALID(Param0.f_180))
	{
		bVar0 = false;
		while (bVar0 <= GET_OBJECTSET_SIZE(Param0.f_180))
		{
			NET_OBJECT_SET_SCRIPT_INT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, Param0.f_180), Param0.f_188);
			bVar0++;
		}
	}
}

void Function_676(bool bParam0, bool bParam1, bool bParam2) //Position: 0x2566B / 153195
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		LOG_ERROR("SQUAD_ADD_COACH_AND_HORSES_TO_OBJECTSET got an invalid squad");
		return;
	}
	if (!IS_OBJECTSET_VALID(bParam1))
	{
		LOG_ERROR("SQUAD_ADD_COACH_AND_HORSES_TO_OBJECTSET got an invalid objectset");
		return;
	}
	bVar0 = false;
	while (bVar0 <= SQUAD_GET_SIZE(bParam0))
	{
		switch (bParam2)
		{
			case 0x00000001:
				bVar2 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
				if (IS_ACTOR_RIDING(bVar2))
				{
					SET_ACTOR_IS_AMBIENT(bVar2, 1);
					if (!IS_OBJECT_IN_OBJECTSET(GET_MOUNT(bVar2), bParam1))
					{
						ADD_OBJECT_TO_OBJECTSET(GET_MOUNT(bVar2), bParam1);
					}
				}
				else
				{
					LOG_ERROR("Horse traffic member is not riding a horse? Impossible!");
				}
				break;
			
			case 0x00000002:
				if (SQUAD_GET_SIZE(bParam0) >= 0)
				{
					bVar2 = SQUAD_GET_ACTOR_BY_INDEX(bParam0, bVar0);
				}
				if (IS_ACTOR_RIDING_VEHICLE(bVar2))
				{
					bVar3 = GET_VEHICLE(bVar2);
					SET_ACTOR_IS_AMBIENT(bVar2, 1);
					if (IS_ACTOR_VALID(bVar3))
					{
						if (!IS_OBJECT_IN_OBJECTSET(bVar3, bParam1))
						{
							ADD_OBJECT_TO_OBJECTSET(bVar3, bParam1);
						}
						bVar1 = false;
						while (bVar1 <= GET_NUM_DRAFTED_ACTORS(bVar3))
						{
							if (IS_ACTOR_VALID(GET_DRAFT_ACTOR(bVar1, bVar3)))
							{
								if (!IS_OBJECT_IN_OBJECTSET(GET_DRAFT_ACTOR(bVar1, bVar3), bParam1))
								{
									ADD_OBJECT_TO_OBJECTSET(GET_DRAFT_ACTOR(bVar1, bVar3), bParam1);
								}
							}
							bVar1++;
						}
						return;
					}
				}
				break;
			
			default:
				LOG_ERROR("Unknown Traffic Type in SQUAD_ADD_COACH_AND_HORSES_TO_OBJECTSET");
				break;
		}
		bVar0++;
	}
	return;
}

bool Function_677(bool bParam0, bool bParam1, int iParam2, int iParam3, int iParam4, vector3 vParam5, vector3 vParam8, var uParam11, bool bParam12) //Position: 0x25877 / 153719
{
	bool bVar0;
	vector3 vVar1;
	bool bVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	struct<8> Var11;
	bool bVar19[8];
	bool bVar28;
	vector3 vVar29;
	struct<8> Var32;
	struct<8> Var40;
	
	bVar4 = true;
	if (!Function_694(&vParam5, 20.0f, &vVar1, 10))
	{
		vVar1 = { StackVal, StackVal, vParam5 };
	}
	if (bParam12 < 0)
	{
		bParam12 = Function_689(iParam4, 0, 0, 4294967295, 0);
		bVar4 = false;
	}
	if (Function_60(StackVal, StackVal, vVar1))
	{
		LOG_ERROR("Attempting to create stagecoach traffic at 0,0,0!");
	}
	Var11 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_687("ntrafcoach", bParam0) };
	if (Function_1())
	{
		*uParam11 = Function_685(StackVal, StackVal, StackVal, StackVal, bParam0, &Var11, bParam12, Function_689(iParam3, 0, 4, 23, 0), vVar1, vParam8, 1, 976, 976, 976, 2);
	}
	else
	{
		*uParam11 = Function_685(StackVal, StackVal, StackVal, StackVal, bParam0, &Var11, bParam12, Function_689(iParam3, 0, 4, 23, 0), vVar1, vParam8, 1, 976, 976, 976, 4);
	}
	switch (bParam12)
	{
		case 0x00000499:
		case 0x0000049A:
		case 0x0000049B:
		case 0x0000049F:
		case 0x000004A0:
		case 0x000004A1:
		case 0x000004A2:
		case 0x000004A3:
		case 0x000004A4:
			iParam2 = 2;
			break;
		
		case 0x000004B0:
		case 0x000004B1:
		case 0x000004AF:
		case 0x000004AB:
		case 0x000004AC:
			iParam2 = 1;
			break;
		
		case 0x0000049E:
		case 0x000004A5:
		case 0x000004A6:
		case 0x000004A7:
		case 0x000004A8:
		case 0x000004A9:
		case 0x000004AA:
		case 0x000004AD:
		case 0x000004AE:
		case 0x000004B2:
		case 0x0000049C:
			break;
	}
	if (IS_ACTOR_VALID(*uParam11))
	{
	}
	if (bVar4)
	{
		iVar10 = 1;
		iVar6 = 1;
		iVar5 = 1;
	}
	else if ((bParam12 != 1177 || bParam12 != 1178) || bParam12 != 1179)
	{
		iVar10 = 1;
		iVar6 = GET_NUM_AVAILABLE_SEATS(*uParam11);
		iVar5 = 1;
	}
	else
	{
		iVar6 = GET_NUM_AVAILABLE_SEATS(*uParam11);
	}
	if (Global_29006 != Global_30640[0] && iVar6 < 2)
	{
		iVar6 = 2;
		iVar8 = 0;
	}
	else if (iVar6 < 2 && Function_1())
	{
		iVar6 = 2;
	}
	else if (iVar6 >= 2)
	{
		if (RAND_INT_RANGE(false, 10000) <= 3333)
		{
			iVar8 = 1;
		}
		else
		{
			iVar8 = 2;
		}
	}
	MAKE_NEXT_RAND_ACTORENUMS_UNIQUE(4);
	vVar29 = { StackVal, StackVal, Vector(vParam5, StackVal, StackVal) + Vector(0.0f, -10.0f, 0.0f) };
	iVar9 = 1;
	bVar7 = false;
	while (bVar7 <= iVar6)
	{
		bVar0 = "";
		Var40 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_687("trafpass", bParam0) };
		if ((bVar7 != 0 || bVar7 != 1) && iVar5)
		{
			if (bVar7 == 0)
			{
				Var32 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_687("trafdriver", bParam0) };
				bVar0 = CREATE_ACTOR_IN_LAYOUT(bParam0, &Var32, Global_28842.f_64, vVar29, vParam8);
				if (Function_739(&Global_28842, 512))
				{
					STREAMING_EVICT_ACTOR(Global_28842.f_64, 4294967295);
				}
				bVar19[0] = Global_28842.f_64;
				Global_28842.f_64 = Function_738(Global_29005, Global_28842.f_64);
				STREAMING_REQUEST_ACTOR(Global_28842.f_64, true, false);
				Function_737(&Global_28842, 512);
			}
			else
			{
				Var32 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_687("trafshotty", bParam0) };
				bVar0 = CREATE_ACTOR_IN_LAYOUT(bParam0, &Var32, Global_28842.f_68, vVar29, vParam8);
				if (Function_739(&Global_28842, 2048))
				{
					STREAMING_EVICT_ACTOR(Global_28842.f_68, 4294967295);
				}
				bVar19[1] = Global_28842.f_68;
				Global_28842.f_68 = Function_736(Global_29005, Global_28842.f_68);
				STREAMING_REQUEST_ACTOR(Global_28842.f_68, true, false);
				Function_737(&Global_28842, 2048);
			}
		}
		else if (bVar7 != 1 || bVar7 != 0)
		{
			if (iParam2 == 1)
			{
				bVar28 = Function_679();
				STREAMING_REQUEST_ACTOR(bVar28, true, false);
				bVar0 = CREATE_ACTOR_IN_LAYOUT(bParam0, &Var40, bVar28, vVar29, vParam8);
				STREAMING_EVICT_ACTOR(bVar28, 4294967295);
			}
			else
			{
				bVar28 = Function_689(iParam2, 1, 2, 4294967295, 0);
				if (!Function_678(bVar28, &bVar19))
				{
					bVar19[bVar7] = bVar28;
					bVar0 = CREATE_ACTOR_IN_LAYOUT(bParam0, &Var40, bVar28, vVar29, vParam8);
				}
			}
		}
		else if (iVar8 >= 0)
		{
			if (RAND_INT_RANGE(false, 10000) <= (4000 * iVar9))
			{
				if (iParam2 == 1)
				{
					bVar28 = Function_679();
					STREAMING_REQUEST_ACTOR(bVar28, true, false);
					bVar0 = CREATE_ACTOR_IN_LAYOUT(bParam0, &Var40, bVar28, vVar29, vParam8);
					STREAMING_EVICT_ACTOR(bVar28, 4294967295);
					iVar8 = (iVar8 - 1);
					iVar9 = 1;
				}
				else
				{
					bVar28 = Function_689(iParam2, 1, 0, 4294967295, 0);
					if (!Function_678(bVar28, &bVar19))
					{
						bVar19[bVar7] = bVar28;
						bVar0 = CREATE_ACTOR_IN_LAYOUT(bParam0, &Var40, bVar28, vVar29, vParam8);
						iVar8 = (iVar8 - 1);
						iVar9 = 1;
					}
				}
			}
			else
			{
				iVar9++;
			}
		}
		if (IS_ACTOR_VALID(bVar0))
		{
			SET_ACTOR_IN_VEHICLE(bVar0, *uParam11, bVar7);
			MEMORY_ATTACK_ON_SIGHT(bVar0, 0);
			SET_ACTOR_ALLOW_WEAPON_REACTIONS(bVar0, true);
			REGISTER_TRAFFIC_ACTOR(bVar0, 1);
			SET_ACTOR_IS_AMBIENT(bVar0, 1);
			SQUAD_JOIN(bVar0, bParam1);
			vVar29 = { StackVal, StackVal, Vector(vVar29, StackVal, StackVal) + Vector(1.0f, 0.0f, 1.0f) };
		}
		bVar7++;
	}
	return iVar10;
}

bool Function_678(bool bParam0, bool bParam1) //Position: 0x25D23 / 154915
{
	int iVar0;
	
	if (bParam0 == 976)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= *bParam1)
	{
		if ((*bParam1)[iVar0] == bParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool Function_679() //Position: 0x25D55 / 154965
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (!Function_424(&Global_28842 + 84[Global_28842.f_2323], 4) && iVar0 > 20)
	{
		Global_28842.f_232++;
		if (Global_28842.f_232 > Global_28842.f_84)
		{
			Global_28842.f_232 = 0;
		}
		iVar0++;
	}
	if (iVar0 <= 20)
	{
		iVar1 = (*&Global_28842 + 84)[Global_28842.f_2323];
	}
	else
	{
		iVar1 = 0;
	}
	if (iVar1 == 0)
	{
	}
	Function_682(0);
	Global_28842.f_232++;
	if (Global_28842.f_232 > Global_28842.f_84)
	{
		Global_28842.f_232 = 0;
	}
	Function_680(524288);
	Function_442(&Global_28842 + 84);
	return iVar1;
}

void Function_680(int iParam0) //Position: 0x25DF6 / 155126
{
	Function_681(&Global_28842, iParam0);
	return;
}

void Function_681(var uParam0, int iParam1) //Position: 0x25E04 / 155140
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	*uParam0 |= 1073741824;
	return;
}

void Function_682(bool bParam0) //Position: 0x25E27 / 155175
{
	int iVar0;
	
	if (Function_424(&Global_28842 + 84[Global_28842.f_2323], 4))
	{
		if (Global_28842.f_240 >= 0)
		{
			Global_28842.f_240 = (Global_28842.f_240 - 1);
		}
	}
	Function_422(&Global_28842 + 84, Global_28842.f_232);
	if (bParam0 || Global_28842.f_240 > 5)
	{
		iVar0 = GET_ACTORENUM_IN_POPULATION(Global_30750[0], Global_28842.f_236);
		while (Function_684(iVar0) || iVar0 != 0)
		{
			Global_28842.f_236++;
			if (Global_28842.f_236 > GET_NUM_ACTORENUMS_IN_POPULATION(Global_30750[0]))
			{
				Global_28842.f_236 = 0;
			}
			iVar0 = GET_ACTORENUM_IN_POPULATION(Global_30750[0], Global_28842.f_236);
		}
		Function_683(&Global_28842 + 84, Global_28842.f_232, iVar0);
		Global_28842.f_240++;
		Global_28842.f_236++;
		if (Global_28842.f_236 > GET_NUM_ACTORENUMS_IN_POPULATION(Global_30750[0]))
		{
			Global_28842.f_236 = 0;
		}
	}
	return;
}

void Function_683(var uParam0, int iParam1, int iParam2) //Position: 0x25F00 / 155392
{
	(*uParam0)[iParam13] = iParam2;
	uParam0[iParam13]->f_4 = 3;
	Function_439(uParam0[iParam13], 4);
	return;
}

int Function_684(int iParam0) //Position: 0x25F21 / 155425
{
	if (iParam0 <= 6)
	{
		return 1;
	}
	if (iParam0 == 17)
	{
		return 1;
	}
	if (iParam0 == 49)
	{
		return 1;
	}
	if (iParam0 < 19 && iParam0 > 25)
	{
		return 1;
	}
	if (iParam0 < 50 && iParam0 > 80)
	{
		return 1;
	}
	if (iParam0 < 211 && iParam0 > 217)
	{
		return 1;
	}
	if (iParam0 < 236 && iParam0 > 254)
	{
		return 1;
	}
	if (iParam0 < 312 && iParam0 > 319)
	{
		return 1;
	}
	return 0;
}

var Function_685(bool bParam0, bool bParam1, bool bParam2, int iParam3, vector3 vParam4, vector3 vParam7, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14) //Position: 0x25FA9 / 155561
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
			if (Function_58(Global_30750[6], 4, 23, 0) && iParam10)
			{
				bVar16 = Function_686(StackVal, StackVal, Global_30750[6], vParam4, 4, 23, 0);
				if (Function_678(bVar16, &iVar1))
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

var Function_686(bool bParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6) //Position: 0x261DD / 156125
{
	return GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam4, bParam5, bParam6, 1,401298E-45f, vParam1);
}

struct<32> Function_687(bool bParam0, bool bParam1) //Position: 0x261F5 / 156149
{
	struct<8> Var0;
	bool bVar8;
	
	if (!IS_STRING_VALID(bParam0))
	{
		return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var0;
	}
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_688(bParam0) };
	bVar8 = FIND_OBJECT_IN_LAYOUT(bParam1, &Var0);
	while (IS_OBJECT_VALID(bVar8))
	{
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_688(bParam0) };
		bVar8 = FIND_OBJECT_IN_LAYOUT(bParam1, &Var0);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var0;
}

struct<32> Function_688(bool bParam0) //Position: 0x26244 / 156228
{
	char* cVar0[32];
	struct<4> Var8;
	bool bVar12;
	
	if (!Function_1())
	{
		return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_62(bParam0);
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
			memcpy(&Var8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_63("0", &Var8, ""), 4);
		}
		bVar12 = GET_LOCAL_SLOT();
		memcpy(&Var8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_63(I2STR(bVar12), &Var8, ""), 4);
		while (STRING_LENGTH(&Var8) <= 6)
		{
			memcpy(&Var8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_63("0", &Var8, ""), 4);
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

int Function_689(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x262F3 / 156403
{
	return Function_690(iParam0, iParam1, iParam2, iParam3, iParam4, 0, 0.0f, 0.0f, 0.0f);
}

var Function_690(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, vector3 vParam6) //Position: 0x2630C / 156428
{
	switch (iParam0)
	{
		case 0x00000001:
			return Function_51(StackVal, StackVal, Global_30750[0], bParam1, bParam2, bParam3, bParam4, fParam5, vParam6);
			break;
		
		case 0x00000002:
			return Function_51(StackVal, StackVal, Global_30750[1], bParam1, bParam2, bParam3, bParam4, fParam5, vParam6);
			break;
		
		case 0x00000004:
			return Function_51(StackVal, StackVal, Global_30750[2], bParam1, bParam2, bParam3, bParam4, fParam5, vParam6);
			break;
		
		case 0x00000008:
			return Function_51(StackVal, StackVal, Global_30750[3], bParam1, bParam2, bParam3, bParam4, fParam5, vParam6);
			break;
		
		case 0x00000010:
			return Function_51(StackVal, StackVal, Global_30750[4], bParam1, bParam2, bParam3, bParam4, fParam5, vParam6);
			break;
		
		case 0x00000020:
			return Function_51(StackVal, StackVal, Global_30750[5], bParam1, bParam2, bParam3, bParam4, fParam5, vParam6);
			break;
		
		case 0x00000040:
			return Function_51(StackVal, StackVal, Global_30750[6], bParam1, bParam2, bParam3, bParam4, fParam5, vParam6);
			break;
		
		case 0x00000080:
			return Function_51(StackVal, StackVal, Global_30750[7], bParam1, bParam2, bParam3, bParam4, fParam5, vParam6);
			break;
		
		case 0x00000100:
			return Function_51(StackVal, StackVal, Global_30750[8], bParam1, bParam2, bParam3, bParam4, fParam5, vParam6);
			break;
		
		case 0x00000200:
			return Function_51(StackVal, StackVal, Global_30750[9], bParam1, bParam2, bParam3, bParam4, fParam5, vParam6);
			break;
		
		case 0x00000400:
			return Function_51(StackVal, StackVal, Global_30750[10], bParam1, bParam2, bParam3, bParam4, fParam5, vParam6);
			break;
		
		case 0x00000800:
			return Function_51(StackVal, StackVal, Global_30750[11], bParam1, bParam2, bParam3, bParam4, fParam5, vParam6);
			break;
		
		case 0x00001000:
			return Function_51(StackVal, StackVal, Global_30750[12], bParam1, bParam2, bParam3, bParam4, fParam5, vParam6);
			break;
		
		case 0x00002000:
			return Function_51(StackVal, StackVal, Global_30750[13], bParam1, bParam2, bParam3, bParam4, fParam5, vParam6);
			break;
		
		case 0x40000000:
			LOG_ERROR("Trying to get a random member of invalid popset_type");
			return 4294967295;
			break;
	}
	return Function_691(StackVal, StackVal, iParam0, bParam1, bParam2, fParam5, vParam6);
}

var Function_691(var uParam0, bool bParam1, bool bParam2, float fParam3, vector3 vParam4) //Position: 0x26561 / 157025
{
	bool bVar0;
	
	bVar0 = CREATE_POPULATION_SET(0);
	if (uParam0 & 1 == 1)
	{
		Function_692(Global_30750[0], bVar0);
	}
	if (uParam0 & 2 == 2)
	{
		Function_692(Global_30750[1], bVar0);
	}
	if (uParam0 & 4 == 4)
	{
		Function_692(Global_30750[2], bVar0);
	}
	if (uParam0 & 8 == 8)
	{
		Function_692(Global_30750[3], bVar0);
	}
	if (uParam0 & 16 == 16)
	{
		Function_692(Global_30750[4], bVar0);
	}
	if (uParam0 & 32 == 32)
	{
		Function_692(Global_30750[5], bVar0);
	}
	if (uParam0 & 64 == 64)
	{
		Function_692(Global_30750[6], bVar0);
	}
	if (uParam0 & 128 == 128)
	{
		Function_692(Global_30750[7], bVar0);
	}
	if (uParam0 & 256 == 256)
	{
		Function_692(Global_30750[8], bVar0);
	}
	if (uParam0 & 512 == 512)
	{
		Function_692(Global_30750[9], bVar0);
	}
	if (uParam0 & 1024 == 1024)
	{
		Function_692(Global_30750[10], bVar0);
	}
	if (uParam0 & 2048 == 2048)
	{
		Function_692(Global_30750[11], bVar0);
	}
	if (uParam0 & 4096 == 4096)
	{
		Function_692(Global_30750[12], bVar0);
	}
	if (uParam0 & 8192 == 8192)
	{
		Function_692(Global_30750[13], bVar0);
	}
	return Function_51(StackVal, StackVal, bVar0, bParam1, bParam2, 4294967295, 0, fParam3, vParam4);
}

void Function_692(bool bParam0, bool bParam1) //Position: 0x266B2 / 157362
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

var Function_693(vector3 vParam0) //Position: 0x26770 / 157552
{
	bool bVar0;
	bool bVar1;
	char* cVar2[24];
	
	if (!IS_LAYOUTREF_VALID(Global_28841))
	{
		return "";
	}
	bVar1 = CREATE_OBJECT_ITERATOR(Global_28841);
	ITERATE_IN_SPHERE(bVar1, vParam0, 180.0f);
	ITERATE_ON_OBJECT_TYPE(bVar1, 9);
	strcpy(&cVar2, "v_coach_stop", 24);
	ITERATE_ON_PARTIAL_NAME(bVar1, &cVar2);
	bVar0 = START_OBJECT_ITERATOR(bVar1);
	while (IS_OBJECT_VALID(bVar0))
	{
		DESTROY_ITERATOR(bVar1);
		return bVar0;
	}
	bVar0 = "";
	DESTROY_ITERATOR(bVar1);
	return bVar0;
}

bool Function_694(int iParam0, float fParam1, int iParam2, int iParam3) //Position: 0x267DF / 157663
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
	if (!STREAMING_ARE_BOUNDS_LOADED(*iParam0, 1.0f))
	{
		GET_CAMERA_POSITION(GET_GAME_CAMERA(), &vVar4);
		if (VDIST(*iParam0, vVar4) > 175.0f)
		{
			PRINTSTRING("Camera Position: ");
			PRINTVECTOR(vVar4);
			PRINTNL();
			PRINTSTRING("Probe Position: ");
			PRINTVECTOR(*iParam0);
			PRINTNL();
			PRINTSTRING("Distance");
			PRINTFLOAT(VDIST(*iParam0, vVar4));
			PRINTNL();
		}
		return 0;
	}
	if (FIND_GROUND_INTERSECTION(iParam0, fParam1, iParam2, &uVar0))
	{
		if (!Function_60(StackVal, StackVal, *iParam2))
		{
			return 1;
		}
	}
	while (!IS_EXITFLAG_SET() && iVar3 > iParam3)
	{
		*iParam0 = (*iParam0 + 0,01f);
		iParam0->f_8 = (StackVal + 0,01f);
		if (FIND_GROUND_INTERSECTION(iParam0, fParam1, iParam2, &uVar0))
		{
			if (!Function_60(StackVal, StackVal, *iParam2))
			{
				return 1;
			}
		}
		*iParam2 = { StackVal, StackVal, *iParam0 };
		iParam2->f_4 = (StackVal - fParam1);
		if (!iParam3 != 4294967295)
		{
			iVar3++;
		}
		WAIT(false);
	}
	return 0;
}

struct<24> Function_695(int iParam0, struct<6> Param1, bool bParam7, vector3 vParam8) //Position: 0x26911 / 157969
{
	int iVar0;
	int iVar6;
	struct<6> Var12;
	
	if (!IS_OBJECT_VALID(bParam7))
	{
		return StackVal, StackVal, StackVal, StackVal, StackVal, Var12;
	}
	iParam0->f_148 = Function_696(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, bParam7, Param1, vParam8);
	if (iParam0->f_148 >= 0)
	{
		GET_CURVE_POINT(bParam7, 1.0f, &Var12, 0);
		UNK_0x19D652F9(bParam7, 1.0f, &Param1, &iVar0);
		Function_622(&iVar0);
		Function_622(&Param1);
		*(iParam0 + 168) = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_622(&Param1), Function_622(&iVar0), StackVal) };
		*(iParam0 + 168) = { 0.0f, UNK_0x9C40E671(iParam0 + 168), 0.0f };
	}
	else
	{
		GET_CURVE_POINT(bParam7, 0.0f, &Var12, 0);
		UNK_0x19D652F9(bParam7, -1.0f, &Param1, &iVar6);
		Function_622(&iVar6);
		Function_622(&Param1);
		*(iParam0 + 168) = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_622(&Param1), Function_622(&iVar6), StackVal) };
		*(iParam0 + 168) = { 0.0f, UNK_0x9C40E671(iParam0 + 168), 0.0f };
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, Var12;
}

int Function_696(bool bParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9) //Position: 0x269AF / 158127
{
	int iVar0;
	int iVar6;
	vector3 vVar12;
	vector3 vVar15;
	float fVar18;
	float fVar19;
	
	UNK_0x19D652F9(bParam0, 1.0f, &iParam1, &iVar0);
	UNK_0x19D652F9(bParam0, -1.0f, &iParam1, &iVar6);
	Function_622(&iVar0);
	Function_622(&iParam1);
	vVar12 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_622(&iParam1), Function_622(&iVar0), StackVal) };
	fVar18 = VDOT(&uParam7, &vVar12);
	Function_622(&iVar6);
	Function_622(&iParam1);
	vVar15 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_622(&iParam1), Function_622(&iVar6), StackVal) };
	fVar19 = VDOT(&uParam7, &vVar15);
	if (fVar19 > fVar18)
	{
		return 1;
	}
	return 4294967295;
}

void Function_697(int iParam0, int iParam1) //Position: 0x26A08 / 158216
{
	Function_702(StackVal);
	if (Global_28842.f_80 != 0)
	{
		iParam0->f_72 = Global_28842.f_80;
		Function_701(StackVal, iParam0->f_72);
	}
	else if (Global_3403 || iParam1)
	{
		if (StackVal == 2)
		{
			iParam0->f_72 = 4;
		}
		else
		{
			iParam0->f_72 = 3;
		}
		Function_701(StackVal, iParam0->f_72);
		if (StackVal == 2)
		{
			Function_700(StackVal, 1);
		}
	}
	else if (StackVal || Function_636((Global_3404 || Function_731(131072))))
	{
		iParam0->f_72 = 4;
		Function_701(StackVal, iParam0->f_72);
		if (StackVal == 2)
		{
			Function_700(StackVal, 1);
		}
	}
	else if (iParam0->f_92)
	{
		iParam0->f_72 = Function_699(StackVal, iParam0->f_80);
		Function_701(StackVal, iParam0->f_72);
	}
	else if (iParam0->f_96)
	{
		iParam0->f_72 = Function_698(StackVal, iParam0->f_80);
		Function_701(StackVal, iParam0->f_72);
		if (StackVal == 2)
		{
			Function_700(StackVal, 0);
		}
	}
	else
	{
		iParam0->f_72 = iParam0->f_76;
		if (StackVal == 2)
		{
			Function_700(StackVal, 1);
		}
	}
	return;
}

int Function_698(int iParam0, int iParam1) //Position: 0x26B1A / 158490
{
	bool bVar0;
	
	if (iParam1 != 0)
	{
		return iParam1;
	}
	bVar0 = RAND_INT_RANGE(true, 10000);
	switch (iParam0)
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

int Function_699(int iParam0, bool bParam1) //Position: 0x26B87 / 158599
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

void Function_700(bool bParam0, int iParam1) //Position: 0x26BEA / 158698
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

void Function_701(bool bParam0, bool bParam1) //Position: 0x26C12 / 158738
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

void Function_702(bool bParam0) //Position: 0x26C3A / 158778
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

bool Function_703(int iParam0, bool bParam1) //Position: 0x26C60 / 158816
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	struct<6> Var5;
	
	if (Function_655(iParam0 + 24))
	{
		return 0;
	}
	if (iParam0->f_104 || bParam1)
	{
		if (!IS_ACTOR_VALID(Function_533(StackVal)))
		{
			return 0;
		}
		switch (StackVal)
		{
			case 0x00000001:
			case 0x00000003:
				if (IS_ACTOR_VALID(GET_MOUNT(Function_533(StackVal))))
				{
					GET_ACTOR_VELOCITY(GET_MOUNT(Function_533(StackVal)), &vVar0);
				}
				else
				{
					GET_ACTOR_VELOCITY(Function_533(StackVal), &vVar0);
				}
				break;
			
			case 0x00000002:
				if (IS_ACTOR_VALID(iParam0->f_16))
				{
					GET_ACTOR_VELOCITY(iParam0->f_16, &vVar0);
				}
				else
				{
					GET_ACTOR_VELOCITY(Function_533(StackVal), &vVar0);
				}
				break;
			
			default:
				LOG_ERROR("Inheritance for traffic type not defined yet");
				break;
		}
		bVar3 = VMAG(vVar0);
		if (bVar3 != 0.0f)
		{
			vVar0 = { 0.0f, 0.0f, 1.0f };
			ROTATE_VECTOR_XZ(StackVal, GET_HEADING(Function_533(&vVar0)), 0);
		}
		else if (bVar3 > 0,05f)
		{
			VNORMALIZE(&vVar0);
		}
		VSCALE(&vVar0, -1.0f);
	}
	else if (!Function_60(StackVal, StackVal, *(iParam0 + 136)))
	{
		Function_622(iParam0 + 24);
		vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_622(iParam0 + 24), *(iParam0 + 136), StackVal) };
	}
	else if (Function_731(16) || Global_3386)
	{
		Function_622(iParam0 + 24);
		vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_622(iParam0 + 24), Global_34574, StackVal) };
	}
	else
	{
		Function_622(iParam0 + 24);
		if (Function_711(StackVal, StackVal, Global_34573, Function_622(iParam0 + 24)))
		{
			bVar4 = RAND_INT_RANGE(false, 10000);
			if (bVar4 <= 5000)
			{
				Function_622(iParam0 + 24);
				vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Global_34574, Function_622(iParam0 + 24), StackVal) };
			}
			else
			{
				Function_622(iParam0 + 24);
				vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_622(iParam0 + 24), Global_34574, StackVal) };
			}
		}
		else
		{
			Function_622(iParam0 + 24);
			vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_622(iParam0 + 24), Global_34574, StackVal) };
		}
	}
	if (iParam0->f_20 <= 3)
	{
		iParam0->f_112 = 1;
	}
	else
	{
		iParam0->f_112 = 0;
	}
	iParam0->f_116 = 0;
	if (!iParam0->f_104)
	{
		Var5 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_695(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(iParam0 + 24), iParam0->f_152, vVar0) };
		if (Function_655(&Var5))
		{
			*iParam0 = 16;
			return 0;
		}
	}
	if ((!DECOR_CHECK_EXIST(StackVal, "coachService") && !iParam0->f_104) && !bParam1)
	{
		Function_704(iParam0);
	}
	if (!IS_ACTOR_VALID(Function_533(StackVal)))
	{
		return 0;
	}
	if (!iParam0->f_104)
	{
		*(iParam0 + 24) = { StackVal, StackVal, StackVal, StackVal, StackVal, Var5 };
	}
	Function_649(iParam0, 1, iParam0->f_20 > 4);
	return 1;
}

void Function_704(int iParam0) //Position: 0x26EB6 / 159414
{
	vector3 vVar0;
	vector3 vVar3;
	bool bVar6;
	
	if (!Function_735(iParam0))
	{
		return;
	}
	Function_622(iParam0 + 24);
	vVar3 = { StackVal, StackVal, Function_622(iParam0 + 24) };
	vVar0 = { StackVal, StackVal, vVar3 };
	if (VDIST(vVar0, Global_34574) > 120.0f)
	{
	}
	Function_653(StackVal, StackVal, vVar0, iParam0 + 24);
	NET_OBJECT_REPLICATION_MODE_START(15, 5);
	switch (StackVal)
	{
		case 0x00000001:
			if (!IS_ACTOR_VALID(Function_533(StackVal)))
			{
				Function_706(StackVal, StackVal, StackVal, StackVal, StackVal, Global_28841, iParam0->f_20, vVar0, *(iParam0 + 168), iParam0 + 52, GET_ACTORENUM_SPECIES(Function_689(64, 0, 0, 4294967295, 0)));
				iParam0->f_20 = SQUAD_GET_SIZE(StackVal);
			}
			iParam0->f_180 = CREATE_OBJECTSET_IN_LAYOUT(Function_75(), Global_28841, 15, 0);
			Function_676(StackVal, StackVal, iParam0->f_180);
			break;
		
		case 0x00000002:
			if (!IS_ACTOR_VALID(Function_533(StackVal)))
			{
				if (Function_677(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_705(Global_28841), 64, 512, vVar0, *(iParam0 + 168), iParam0 + 16, 0))
				{
					iParam0->f_100 = 1;
				}
			}
			iParam0->f_180 = CREATE_OBJECTSET_IN_LAYOUT(Function_75(), Global_28841, 15, 1);
			Function_676(StackVal, StackVal, iParam0->f_180);
			break;
		
		default:
			break;
	}
	NET_OBJECT_REPLICATION_MODE_END(15);
	Function_675(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *iParam0);
	if (IS_OBJECTSET_VALID(iParam0->f_180))
	{
		Global_28842.f_48 = (Global_28842.f_48 + GET_OBJECTSET_SIZE(iParam0->f_180));
	}
	iParam0->f_184 = GET_CURRENT_GAME_TIME();
	if (!IS_ACTOR_VALID(Function_533(StackVal)))
	{
	}
	bVar6 = false;
	while (StackVal <= SQUAD_GET_SIZE(bVar6))
	{
		MEMORY_ATTACK_ON_SIGHT(SQUAD_GET_ACTOR_BY_INDEX(StackVal, bVar6), 0);
		SET_ACTOR_ALLOW_WEAPON_REACTIONS(SQUAD_GET_ACTOR_BY_INDEX(StackVal, bVar6), true);
		REGISTER_TRAFFIC_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(StackVal, bVar6), 1);
		SET_ACTOR_IS_AMBIENT(SQUAD_GET_ACTOR_BY_INDEX(StackVal, bVar6), 1);
		SET_ACTOR_OBEY_AMBIENT_MOVE_RESTRICTIONS(SQUAD_GET_ACTOR_BY_INDEX(StackVal, bVar6), 1);
		bVar6++;
	}
	return;
}

int Function_705(bool bParam0) //Position: 0x2706E / 159854
{
	switch (bParam0)
	{
		case 0x00000002:
			return 2;
			break;
		
		case 0x00000001:
			return 1;
			break;
		
		case 0x00000003:
			return 2;
			break;
		
		default:
			LOG_ERROR("Unknown traffic type in TRAFFIC_CONFIGURE_NODE");
			break;
	}
	return 1;
}

void Function_706(bool bParam0, bool bParam1, int iParam2, vector3 vParam3, vector3 vParam6, var uParam9, var uParam10) //Position: 0x270D4 / 159956
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	vector3 vVar3;
	vector3 vVar6;
	bool bVar9;
	bool bVar10[16];
	int iVar27;
	struct<8> Var28;
	struct<8> Var36;
	
	if (!SQUAD_IS_VALID(bParam1))
	{
		return;
	}
	if (!IS_LAYOUTREF_VALID(bParam0))
	{
		return;
	}
	if (Function_60(StackVal, StackVal, vParam3))
	{
		return;
	}
	if (!Global_30767[23])
	{
		return;
	}
	if (Function_60(StackVal, StackVal, vParam3))
	{
		return;
	}
	if (iParam2 >= 16)
	{
		iParam2 = 16;
	}
	MAKE_NEXT_RAND_ACTORENUMS_UNIQUE(iParam2);
	iVar0 = 0;
	while (iVar0 < (iParam2 - 1))
	{
		iVar27 = Function_710(StackVal, StackVal, 64, vParam3, 4, uParam10, 0);
		if (Function_678(iVar27, &bVar10))
		{
			iVar27 = 976;
		}
		bVar10[iVar0] = iVar27;
		iVar0++;
	}
	MAKE_NEXT_RAND_ACTORENUMS_UNIQUE(iParam2);
	iVar0 = 0;
	while (iVar0 < (iParam2 - 1))
	{
		if (iVar0 == 0)
		{
			vVar6 = { StackVal, StackVal, vParam3 };
		}
		else
		{
			Function_708(uParam9, iVar0);
			GET_OBJECT_RELATIVE_POSITION(GET_OBJECT_FROM_ACTOR(bVar2), Function_708(uParam9, iVar0), &vVar6);
		}
		if (!Function_694(&vVar6, 20.0f, &vVar3, 10))
		{
			vVar3 = { StackVal, StackVal, vVar6 };
		}
		bVar9 = Function_679();
		STREAMING_REQUEST_ACTOR(bVar9, true, false);
		if (!bVar9 != 4294967295)
		{
			Var28 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_687("ntrafrider", bParam0) };
			Var36 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_687("ntrafhorse", bParam0) };
			bVar1 = Function_707(StackVal, StackVal, StackVal, StackVal, bParam0, &Var28, bVar9, &Var36, bVar10[iVar0], vVar3, vParam6);
			STREAMING_EVICT_ACTOR(bVar9, 4294967295);
			SQUAD_JOIN(bVar1, bParam1);
			if (iVar0 == 0)
			{
				bVar2 = bVar1;
			}
		}
		bVar10[iVar0] = bVar9;
		iVar0++;
	}
}

var Function_707(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, vector3 vParam5, vector3 vParam8) //Position: 0x27241 / 160321
{
	bool bVar0;
	bool bVar1;
	
	if (!IS_LAYOUTREF_VALID(bParam0))
	{
		LOG_ERROR("Layout is not valid in CREATE_ACTOR_MOUNTED_IN_LAYOUT !!!");
		return "";
	}
	if (!Function_49(bParam2))
	{
		LOG_ERROR("riderTypeName is not valid in CREATE_ACTOR_MOUNTED_IN_LAYOUT !!!");
		return "";
	}
	if (!Function_49(bParam4))
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

vector3 Function_708(var uParam0, bool bParam1) //Position: 0x27366 / 160614
{
	vector3 vVar0;
	
	if (!Function_709(uParam0))
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

bool Function_709(int iParam0) //Position: 0x274A7 / 160935
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

var Function_710(int iParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6) //Position: 0x274C9 / 160969
{
	return Function_690(StackVal, StackVal, iParam0, 0, bParam4, bParam5, bParam6, 1, vParam1);
}

bool Function_711(bool bParam0, vector3 vParam1) //Position: 0x274E2 / 160994
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	
	vVar0 = { 0.0f, 0.0f, -1.0f };
	ROTATE_VECTOR_XZ(&vVar0, Function_59(bParam0), 0);
	GET_POSITION(bParam0, &vVar3);
	vVar6 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar3, vParam1, StackVal) };
	if (VDOT(&vVar0, &vVar6) < 0.0f)
	{
		return 1;
	}
	return 0;
}

bool Function_712(int iParam0) //Position: 0x27521 / 161057
{
	if (StackVal || !IS_ACTOR_VALID(Function_533(!SQUAD_IS_VALID(StackVal))))
	{
		return 0;
	}
	Function_720(iParam0);
	Function_713(iParam0, 4294967294);
	Global_28842.f_8 = StackVal + 1;
	Global_28842.f_16 = ((GET_CURRENT_GAME_TIME() + (2.0f / 2.0f)) + RAND_FLOAT_RANGE(0.0f, 2.0f));
	Function_657(iParam0);
	SQUAD_GOALS_CLEAR(StackVal);
	Function_229(StackVal);
	iParam0->f_12 = "";
	if (!IS_OBJECT_VALID(iParam0->f_152))
	{
		return 0;
	}
	if (Function_655(iParam0 + 24))
	{
		return 0;
	}
	iParam0->f_104 = 1;
	return 1;
}

void Function_713(int iParam0, int iParam1) //Position: 0x275A3 / 161187
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	
	switch (StackVal)
	{
		case 0x00000002:
			iParam0->f_20 = 1;
			break;
		
		case 0x00000001:
			iVar1 = (GET_MAX_NUM_OBJECTS_OF_TYPE(15) - GET_NUM_OBJECTS_OF_TYPE(15));
			bVar0 = RAND_INT_RANGE(false, 10000);
			if (Global_34165.f_44)
			{
				iParam0->f_20 = 1;
			}
			else if (Global_28842.f_44 < 4294967295 && !Function_731(128))
			{
				iParam0->f_20 = CEIL((IntToFloat(bVar0) / (10000.0f / TO_FLOAT(Global_28842.f_44))));
			}
			else if (iVar1 <= 6)
			{
				iParam0->f_20 = 1;
			}
			else if ((iVar1 > 8 || Function_731(128)) || iParam1 != 5)
			{
				if (bVar0 <= 6000)
				{
					iParam0->f_20 = 1;
				}
				else
				{
					iParam0->f_20 = 2;
				}
			}
			else if (bVar0 <= 5000)
			{
				iParam0->f_20 = 1;
			}
			else if (bVar0 <= 9000)
			{
				iParam0->f_20 = 2;
			}
			else if (((bVar0 > 9400 || NET_IS_IN_SESSION()) || iVar1 > 10) || Global_3386)
			{
				iParam0->f_20 = 3;
			}
			else if (bVar0 > 9700 || iVar1 > 12)
			{
				iParam0->f_20 = 4;
			}
			else
			{
				iParam0->f_20 = 5;
			}
			if (iParam0->f_20 > 3)
			{
				Function_719(128);
			}
			else
			{
				Function_680(128);
			}
			if (Global_29006 == Global_30668[1])
			{
				Function_718(1.0f);
				*(iParam0 + 52) = { StackVal, Function_718(1.0f) };
			}
			else
			{
				Function_716(1.0f);
				*(iParam0 + 52) = { StackVal, Function_716(1.0f) };
			}
			break;
		
		case 0x00000003:
			iParam0->f_20 = 1;
			break;
		
		default:
			LOG_ERROR("Unknown traffic type in TRAFFIC_CONFIGURE_NODE");
			break;
	}
	if (iParam0->f_188 == 0)
	{
		iParam0->f_188 = Function_715();
	}
	if (!SQUAD_IS_VALID(StackVal))
	{
		Function_714();
		Var2 = { StackVal, Function_714() };
		iParam0->f_8 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Global_28841, &Var2));
	}
	if (!IS_OBJECTSET_VALID(iParam0->f_160))
	{
		iParam0->f_160 = CREATE_OBJECTSET_IN_LAYOUT(Function_75(), Global_28841, 36, 1);
	}
	if (StackVal || (StackVal || StackVal != 1 != 2) != 4)
	{
		iParam0->f_96 = 1;
	}
	else
	{
		iParam0->f_96 = 0;
	}
	if (StackVal == 0)
	{
		iParam0->f_72 = Function_652(StackVal, 0, iParam0->f_80);
	}
	else
	{
		iParam0->f_72 = Function_698(StackVal, iParam0->f_80);
	}
	*iParam0 = 1;
	return;
}

struct<8> Function_714() //Position: 0x277D1 / 161745
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

var Function_715() //Position: 0x27828 / 161832
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	
	NET_GET_MAC_ADDRESS32(&iVar0);
	iVar1 = 0;
	if (Function_1())
	{
		if (NET_IS_IN_SESSION())
		{
			iVar1 = STRING_TO_HASH(GET_SLOT_NAME(GET_SLOT_FOR_HOST()));
		}
	}
	bVar2 = NET_GET_NET_TIME();
	iVar3 = STRING_TO_HASH(F2STR(bVar2, 7, 7));
	return iVar0 ^ iVar1 ^ iVar3;
}

struct<8> Function_716(int iParam0) //Position: 0x27866 / 161894
{
	Function_717(iParam0, 10);
	return StackVal, Function_717(iParam0, 10);
}

struct<8> Function_717(var uParam0, int iParam1) //Position: 0x27873 / 161907
{
	struct<2> Var0;
	
	Var0.f_4 = uParam0;
	Var0 = Global_26121[iParam1];
	return StackVal, Var0;
}

struct<8> Function_718(int iParam0) //Position: 0x2788C / 161932
{
	Function_717(iParam0, 8);
	return StackVal, Function_717(iParam0, 8);
}

void Function_719(int iParam0) //Position: 0x27899 / 161945
{
	Function_737(&Global_28842, iParam0);
	return;
}

void Function_720(int iParam0) //Position: 0x278A7 / 161959
{
	float fVar0;
	vector3 vVar1;
	float fVar4;
	bool bVar5;
	bool bVar6;
	struct<6> Var7;
	vector3 vVar13;
	
	if (!Function_735(iParam0))
	{
		return;
	}
	fVar0 = Function_664(StackVal, iParam0->f_164);
	GET_POSITION(Function_533(StackVal), &vVar1);
	fVar4 = 0.0f;
	bVar5 = START_CURVE_QUERY(Global_28841, vVar1, fVar0, fVar4, 150.0f, 5.0f, 0);
	if (!GET_NUM_POINTS_IN_CURVE_QUERY(bVar5) < 0)
	{
		UNK_0xDF93BD7C(bVar5);
		return;
	}
	bVar6 = Function_721(StackVal, StackVal, bVar5, vVar1);
	if (bVar6 == 4294967295)
	{
		UNK_0xDF93BD7C(bVar5);
		return;
	}
	iParam0->f_152 = GET_CURVE_FROM_POINT_INDEX_IN_CURVE_QUERY(bVar5, bVar6);
	iParam0->f_156 = CURVE_CALCULATE_DISTANCE_BY_FORCED_COMPONENT_SUBDIVISION_BOUNDS(iParam0->f_152, 0.0f, 1.0f, 10);
	GET_POINT_FROM_CURVE_QUERY(bVar5, bVar6, &Var7);
	*(iParam0 + 168) = { 0.0f, 0.0f, -1.0f };
	ROTATE_VECTOR_XZ(StackVal, GET_HEADING(Function_533(iParam0 + 168)), 0);
	iParam0->f_148 = Function_696(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0->f_152, Var7, *(iParam0 + 168));
	if (iParam0->f_148 >= 0)
	{
		GET_CURVE_POINT(iParam0->f_152, 1.0f, iParam0 + 24, 0);
	}
	else
	{
		GET_CURVE_POINT(iParam0->f_152, 0.0f, iParam0 + 24, 0);
	}
	Function_622(iParam0 + 24);
	vVar13 = { StackVal, StackVal, Function_622(iParam0 + 24) };
	UNK_0xDF93BD7C(bVar5);
	bVar5 = START_CURVE_QUERY(Global_28841, vVar13, fVar0, 0.0f, 10.0f, 2.0f, 0);
	REMOVE_CURVE_FROM_CURVE_QUERY_USING_CURVE(bVar5, iParam0->f_152);
	if (GET_NUM_CURVES_IN_CURVE_QUERY(bVar5) == 0)
	{
		iParam0->f_148 = (iParam0->f_148 * 4294967295);
		if (iParam0->f_148 >= 0)
		{
			GET_CURVE_POINT(iParam0->f_152, 1.0f, iParam0 + 24, 0);
		}
		else
		{
			GET_CURVE_POINT(iParam0->f_152, 0.0f, iParam0 + 24, 0);
		}
	}
	UNK_0xDF93BD7C(bVar5);
	return;
}

var Function_721(bool bParam0, vector3 vParam1) //Position: 0x279F7 / 162295
{
	bool bVar0;
	int iVar1;
	bool bVar7;
	bool bVar8;
	
	bVar7 = 100000.0f;
	bVar8 = 4294967295;
	bVar0 = false;
	while (bVar0 <= GET_NUM_POINTS_IN_CURVE_QUERY(bParam0))
	{
		GET_POINT_FROM_CURVE_QUERY(bParam0, bVar0, &iVar1);
		Function_622(&iVar1);
		if (VDIST(vParam1, Function_622(&iVar1)) > bVar7)
		{
			bVar8 = bVar0;
			Function_622(&iVar1);
			bVar7 = VDIST(vParam1, Function_622(&iVar1));
		}
		bVar0++;
	}
	return bVar8;
}

void Function_722(int iParam0, bool bParam1) //Position: 0x27A4F / 162383
{
	if (!SQUAD_IS_VALID(StackVal) && !(((*iParam0 != 0 || *iParam0 != 18) || *iParam0 != 16) || *iParam0 != 17))
	{
		Function_732(iParam0, 0);
		if (bParam1)
		{
			Global_28842.f_8 = (StackVal - 1);
		}
		*iParam0 = 0;
	}
	return;
}

void Function_723() //Position: 0x27A97 / 162455
{
	vector3 vVar0;
	bool bVar3;
	float fVar4;
	vector3 vVar5;
	var uVar8;
	
	if (Function_735(&Global_28903))
	{
		if (!SQUAD_IS_VALID(StackVal) && Global_28903 == 17)
		{
			Global_28903 = 16;
			return;
		}
		if (!IS_ACTOR_VALID(Function_533(StackVal)) && Global_28903 == 17)
		{
			Global_28903 = 16;
			return;
		}
		GET_POSITION(Function_533(StackVal), &vVar0);
		if (NET_IS_IN_SESSION() || (((VDIST(Global_34574, vVar0) < 180.0f && !Global_3410) && !Global_28903 != 17) && !Global_28903 != 0))
		{
			Global_28903 = 16;
		}
	}
	else
	{
		if (Global_28842.f_76 + 300.0f) < GET_CURRENT_GAME_TIME()
		{
			return;
		}
		if (Global_34165.f_28 && HUD_IS_FADED())
		{
			return;
		}
		bVar3 = Function_693(StackVal, StackVal, Global_34574);
		if (!IS_OBJECT_VALID(bVar3))
		{
			return;
		}
		GET_OBJECT_POSITION(bVar3, &vVar0);
		fVar4 = Function_223(StackVal, StackVal, StackVal, StackVal, Global_34574, vVar0);
		vVar5 = { StackVal, StackVal, vVar0 };
		vVar5.f_4 = (vVar5.y + 2.0f);
		if (((fVar4 < 10.0f && !CAMERA_IS_VISIBLE_POINT(GET_GAME_CAMERA(), vVar5, 1065353216, 1117126656, 1, 1, 0)) || HUD_IS_FADED()) && fVar4 > (180.0f - 10.0f))
		{
			if (!Function_730(Global_29005))
			{
				return;
			}
			if (!STREAMING_IS_ACTOR_LOADED(Global_28842.f_64, 4294967295))
			{
				return;
			}
			if (!STREAMING_ARE_BOUNDS_LOADED(vVar0, 10.0f))
			{
				return;
			}
			if (IS_ANY_ACTOR_IN_SPHERE(&vVar0, 5.0f))
			{
				return;
			}
			if (Function_694(&vVar0, 50.0f, &uVar8, 2))
			{
				Function_724(StackVal, StackVal, vVar0);
				DECOR_SET_BOOL(StackVal, "coachService", true);
			}
		}
	}
	return;
}

void Function_724(vector3 vParam0) //Position: 0x27C17 / 162839
{
	var uVar0;
	
	Global_28903.f_152 = Function_726(StackVal, StackVal, vParam0, 16, 0.0f, 35.0f, &uVar0, 1);
	Global_28903.f_156 = CURVE_CALCULATE_DISTANCE_BY_FORCED_COMPONENT_SUBDIVISION_BOUNDS(Global_28903.f_152, 0.0f, 1.0f, 10);
	*(&Global_28903 + 24) = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_725(StackVal, StackVal, vParam0) };
	Global_28903.f_4 = 2;
	Function_713(&Global_28903, 4294967294);
	Function_657(&Global_28903);
	Global_28903 = 4;
	return;
}

struct<24> Function_725(vector3 vParam0) //Position: 0x27C6C / 162924
{
	struct<6> Var0;
	
	Var0 = vParam0.x;
	Var0.f_4 = vParam0.y;
	Var0.f_8 = vParam0.z;
	return StackVal, StackVal, StackVal, StackVal, StackVal, Var0;
}

var Function_726(vector3 vParam0, float fParam3, float fParam4, float fParam5, var uParam6, bool bParam7) //Position: 0x27C8C / 162956
{
	vector3 vVar0;
	bool bVar3;
	struct<9> Var4;
	
	bVar10 = -1.0f;
	Function_274();
	*uParam6 = { StackVal, StackVal, Function_274() };
	bVar3 = START_CURVE_QUERY(Global_28841, vParam0, uParam3, fParam4, fParam5, Function_640(((fParam5 - fParam4) / 5.0f), 20.0f), 0);
	if (!GET_NUM_POINTS_IN_CURVE_QUERY(bVar3) < 0)
	{
		Function_728(StackVal, StackVal, bVar3, vParam0, fParam3, fParam4, fParam5, Function_640(((fParam5 - fParam4) / 5.0f), 20.0f));
	}
	else
	{
		bVar11 = false;
		while (bVar11 < (GET_NUM_POINTS_IN_CURVE_QUERY(bVar3) - 1))
		{
			GET_POINT_FROM_CURVE_QUERY(bVar3, bVar11, &vVar4);
			if (!bParam7 || !Function_727(&vVar4))
			{
				vVar0.x = vVar4.x;
				vVar0.f_4 = vVar4.y;
				vVar0.f_8 = vVar4.z;
				if (bVar10 > 0.0f || bVar10 < VDIST(vParam0, vVar0))
				{
					bVar10 = VDIST(vParam0, vVar0);
					*uParam6 = { StackVal, StackVal, vVar0 };
					bVar12 = GET_CURVE_FROM_POINT_INDEX_IN_CURVE_QUERY(bVar3, bVar11);
				}
			}
			bVar11++;
		}
	}
	UNK_0xDF93BD7C(bVar3);
	return bVar12;
}

bool Function_727(bool bParam0) //Position: 0x27D6A / 163178
{
	if (bParam0->f_12 > 0,001f || bParam0->f_12 < 0,999f)
	{
		return 1;
	}
	return 0;
}

void Function_728(bool bParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6, bool bParam7) //Position: 0x27D8B / 163211
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
	Function_729(bParam0);
}

void Function_729(bool bParam0) //Position: 0x27E42 / 163394
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
		Function_660(StackVal, StackVal, StackVal, StackVal, StackVal, Var1);
		PRINTSTRING(" from ");
		PRINTSTRING(GET_CURVE_NAME(GET_CURVE_FROM_POINT_INDEX_IN_CURVE_QUERY(bParam0, bVar0)));
		PRINTNL();
		bVar0++;
	}
	return;
}

bool Function_730(bool bParam0) //Position: 0x27EB1 / 163505
{
	if (!Function_149(bParam0))
	{
		return 0;
	}
	if (!StackVal != 2)
	{
		return 0;
	}
	if (Global_29155[bParam010] == Global_30621[0])
	{
		return STREAMING_IS_ACTOR_LOADED(1177, 4294967295);
	}
	if (Global_29155[bParam010] == Global_30621[1])
	{
		return STREAMING_IS_ACTOR_LOADED(1179, 4294967295);
	}
	if (Global_29155[bParam010] == Global_30621[2])
	{
		return STREAMING_IS_ACTOR_LOADED(1178, 4294967295);
	}
	return 0;
}

bool Function_731(int iParam0) //Position: 0x27F22 / 163618
{
	return Function_739(&Global_28842, iParam0);
}

void Function_732(int iParam0, bool bParam1) //Position: 0x27F30 / 163632
{
	*iParam0 = 0;
	iParam0->f_4 = 4294967295;
	if (SQUAD_IS_VALID(StackVal))
	{
		if (!Global_34165.f_44 && !bParam1)
		{
			Function_734(StackVal);
		}
		else
		{
			Function_733(StackVal);
		}
		DESTROY_OBJECT(GET_OBJECT_FROM_SQUAD(StackVal));
	}
	if (IS_OBJECTSET_VALID(iParam0->f_180))
	{
		DESTROY_OBJECTSET(iParam0->f_180);
	}
	if (IS_OBJECTSET_VALID(iParam0->f_48))
	{
		Function_662(iParam0->f_48);
		DESTROY_OBJECTSET(iParam0->f_48);
	}
	if (IS_OBJECTSET_VALID(iParam0->f_160))
	{
		Function_662(iParam0->f_160);
		DESTROY_OBJECTSET(iParam0->f_160);
	}
	iParam0->f_20 = 0;
	*(iParam0 + 24) = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_661() };
	iParam0->f_12 = "";
	iParam0->f_72 = 4294967295;
	iParam0->f_148 = 0;
	Function_274();
	*(iParam0 + 168) = { StackVal, StackVal, Function_274() };
	iParam0->f_16 = "";
	iParam0->f_100 = 0;
	iParam0->f_104 = 0;
	iParam0->f_124 = 0;
	iParam0->f_84 = 2;
	iParam0->f_188 = 0;
	iParam0->f_80 = 0;
	iParam0->f_164 = 0;
	return;
}

void Function_733(bool bParam0) //Position: 0x28003 / 163843
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
			if (IS_ACTOR_VALID(GET_MOUNT(bVar1)))
			{
				if (IS_ACTOR_VALID(GET_ATTACHED_HOGTIE_VICTIM(GET_MOUNT(bVar1))))
				{
					DESTROY_ACTOR(GET_ATTACHED_HOGTIE_VICTIM(GET_MOUNT(bVar1)));
				}
				RELEASE_ACTOR(GET_MOUNT(bVar1));
			}
			if (IS_ACTOR_VALID(GET_VEHICLE(bVar1)))
			{
				RELEASE_ACTOR(GET_VEHICLE(bVar1));
			}
			RELEASE_ACTOR(bVar1);
		}
		else
		{
			bVar0++;
		}
	}
	return;
}

void Function_734(bool bParam0) //Position: 0x28086 / 163974
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
			if (IS_ACTOR_VALID(GET_MOUNT(bVar1)))
			{
				if (IS_ACTOR_VALID(GET_ATTACHED_HOGTIE_VICTIM(GET_MOUNT(bVar1))))
				{
					DESTROY_ACTOR(GET_ATTACHED_HOGTIE_VICTIM(GET_MOUNT(bVar1)));
				}
				DESTROY_ACTOR(GET_MOUNT(bVar1));
			}
			if (IS_ACTOR_VALID(GET_VEHICLE(bVar1)))
			{
				DESTROY_ACTOR(GET_VEHICLE(bVar1));
			}
			DESTROY_ACTOR(bVar1);
		}
		else
		{
			bVar0++;
		}
	}
	return;
}

bool Function_735(int iParam0) //Position: 0x28109 / 164105
{
	if (*iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

int Function_736(bool bParam0, int iParam1) //Position: 0x28119 / 164121
{
	bool bVar0;
	
	if (!Function_149(bParam0))
	{
		return 133;
	}
	if (!StackVal != 2)
	{
		return 133;
	}
	bVar0 = RAND_INT_RANGE(false, 10000);
	if (Global_29155[bParam010] == Global_30621[0])
	{
		if (bVar0 > 1667 && iParam1 == 133)
		{
			return 133;
		}
		if (bVar0 > 3333 && iParam1 == 135)
		{
			return 135;
		}
		if (bVar0 > 5000 && iParam1 == 136)
		{
			return 136;
		}
		if (bVar0 > 6666 && iParam1 == 137)
		{
			return 137;
		}
		if (bVar0 > 8333 && iParam1 == 138)
		{
			return 138;
		}
		if (iParam1 != 139)
		{
			return 139;
		}
		return 133;
	}
	if (Global_29155[bParam010] == Global_30621[1])
	{
		if (bVar0 > 2500 && iParam1 == 278)
		{
			return 278;
		}
		if (bVar0 > 5000 && iParam1 == 279)
		{
			return 279;
		}
		if (bVar0 > 7500 && iParam1 == 280)
		{
			return 280;
		}
		if (iParam1 != 281)
		{
			return 281;
		}
		return 278;
	}
	if (Global_29155[bParam010] == Global_30621[2])
	{
		if (bVar0 > 2000 && iParam1 == 140)
		{
			return 140;
		}
		if (bVar0 > 4000 && iParam1 == 141)
		{
			return 141;
		}
		if (bVar0 > 6000 && iParam1 == 142)
		{
			return 142;
		}
		if (bVar0 > 8000 && iParam1 == 143)
		{
			return 143;
		}
		if (iParam1 != 144)
		{
			return 144;
		}
		return 140;
	}
	return 230;
}

void Function_737(var uParam0, int iParam1) //Position: 0x282B3 / 164531
{
	*uParam0 = (*uParam0 || iParam1);
	*uParam0 |= 1073741824;
	return;
}

int Function_738(bool bParam0, int iParam1) //Position: 0x282CE / 164558
{
	bool bVar0;
	
	if (!Function_149(bParam0))
	{
		return 230;
	}
	if (!StackVal != 2)
	{
		return 230;
	}
	bVar0 = RAND_INT_RANGE(false, 10000);
	if (Global_29155[bParam010] == Global_30621[0])
	{
		if (bVar0 > 1667 && iParam1 == 46)
		{
			return 46;
		}
		if (bVar0 > 3333 && iParam1 == 200)
		{
			return 200;
		}
		if (bVar0 > 5000 && iParam1 == 230)
		{
			return 230;
		}
		if (bVar0 > 6666 && iParam1 == 205)
		{
			return 205;
		}
		if (bVar0 > 8333 && iParam1 == 10)
		{
			return 10;
		}
		if (iParam1 != 48)
		{
			return 48;
		}
		return 46;
	}
	if (Global_29155[bParam010] == Global_30621[1])
	{
		if (bVar0 > 3333 && iParam1 == 263)
		{
			return 263;
		}
		if (bVar0 > 6666 && iParam1 == 282)
		{
			return 282;
		}
		if (iParam1 != 306)
		{
			return 306;
		}
		return 263;
	}
	if (Global_29155[bParam010] == Global_30621[2])
	{
		if (bVar0 > 2000 && iParam1 == 31)
		{
			return 31;
		}
		if (bVar0 > 4000 && iParam1 == 120)
		{
			return 120;
		}
		if (bVar0 > 6000 && iParam1 == 121)
		{
			return 121;
		}
		if (bVar0 > 8000 && iParam1 == 122)
		{
			return 122;
		}
		if (iParam1 != 150)
		{
			return 150;
		}
		return 31;
	}
	return 230;
}

bool Function_739(int iParam0, int iParam1) //Position: 0x28451 / 164945
{
	int iVar0;
	
	iVar0 = (*iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_740() //Position: 0x2846D / 164973
{
	if (IS_LAYOUTREF_VALID(Global_28841))
	{
		if (!IS_OBJECTSET_VALID(Global_28842.f_60))
		{
			Global_28842.f_60 = CREATE_OBJECTSET_IN_LAYOUT("trafficReleased", Global_28841, 15, 1);
		}
		return;
	}
	Global_28841 = CREATE_LAYOUT("traffic_layout");
	Function_741(Global_28841);
	EVENT_TRAP_ON_OWNER(Global_28951, Global_28841);
	Global_28842.f_60 = CREATE_OBJECTSET_IN_LAYOUT("trafficReleased", Global_28841, 15, 1);
	return;
}

int Function_741(int iParam0) //Position: 0x284F0 / 165104
{
	var uVar0;
	
	Function_742(4, 1);
	uVar0 = uVar0;
	bLocal_9 = iParam0;
	CREATE_VOLUME_IN_LAYOUT(bLocal_9, "henv_coach_park", 2, -868,7439f, 91,56226f, 2402,454f, 0.0f, 125.0f, 0.0f, 3,5f, 5.0f, 7,5f);
	CREATE_VOLUME_IN_LAYOUT(bLocal_9, "uprv_coach_park", 2, -205,0147f, 84,28522f, 2066,466f, 0.0f, 107.0f, 0.0f, 3,5f, 5.0f, 7,5f);
	CREATE_VOLUME_IN_LAYOUT(bLocal_9, "armv_coach_park", 2, -2190,632f, 16,368f, 2636,006f, 0.0f, 167,735f, 0.0f, 3,5f, 5.0f, 7,5f);
	CREATE_VOLUME_IN_LAYOUT(bLocal_9, "behv_coach_park", 2, -107,7367f, 119,3326f, 1391,473f, 178,3251f, 238,6079f, -178,0473f, 3,5f, 5.0f, 7,5f);
	CREATE_VOLUME_IN_LAYOUT(bLocal_9, "thiv_coach_park", 2, 108,8806f, 73,286f, 2322,866f, 0.0f, 310.0f, 0.0f, 3,5f, 5.0f, 7,5f);
	CREATE_VOLUME_IN_LAYOUT(bLocal_9, "mtpv_coach_park", 2, -420,042f, 151,043f, 1605,842f, 0.0f, 192,908f, 0.0f, 3,5f, 5.0f, 7,5f);
	CREATE_VOLUME_IN_LAYOUT(bLocal_9, "escv_coach_park", 2, -4277,109f, 18,536f, 4471,96f, 0.0f, 232,328f, 0.0f, 15.0f, 5.0f, 10.0f);
	CREATE_VOLUME_IN_LAYOUT(bLocal_9, "chuv_coach_park", 2, -2754,504f, 32,125f, 4299,976f, 0.0f, -19,10072f, 0.0f, 15.0f, 5.0f, 10.0f);
	CREATE_VOLUME_IN_LAYOUT(bLocal_9, "casv_coach_park", 2, -813,062f, 13,051f, 3756,265f, 0.0f, 15.0f, 0.0f, 15.0f, 5.0f, 10.0f);
	CREATE_VOLUME_IN_LAYOUT(bLocal_9, "blkv_coach_park", 2, 683,303f, 78,179f, 1315,703f, 0.0f, 2,09f, 0.0f, 3,5f, 5.0f, 7,5f);
	CREATE_VOLUME_IN_LAYOUT(bLocal_9, "benv_coach_park", 2, -3710,906f, 9,665366f, 3483,041f, 0.0f, -4,913626f, 0.0f, 3,5f, 5.0f, 7,5f);
	CREATE_VOLUME_IN_LAYOUT(bLocal_9, "henv_coach_stop", 2, -938,686f, 90,353f, 2413,753f, 0.0f, 218,151f, 0.0f, 3,5f, 5.0f, 7,5f);
	CREATE_VOLUME_IN_LAYOUT(bLocal_9, "uprv_coach_stop", 2, -189,567f, 83,897f, 2060,425f, 0.0f, 10,886f, 0.0f, 3,5f, 5.0f, 7,5f);
	CREATE_VOLUME_IN_LAYOUT(bLocal_9, "armv_coach_stop", 2, -2162,952f, 16,325f, 2641,514f, 0.0f, 84,568f, 0.0f, 3,5f, 5.0f, 7,5f);
	CREATE_VOLUME_IN_LAYOUT(bLocal_9, "thiv_coach_stop", 2, 123,918f, 73,286f, 2315,224f, 0.0f, 90.0f, 0.0f, 3,5f, 5.0f, 7,5f);
	CREATE_VOLUME_IN_LAYOUT(bLocal_9, "mtpv_coach_stop", 2, -428,796f, 152,347f, 1658,224f, 0.0f, 283,866f, 0.0f, 3,5f, 5.0f, 7,5f);
	CREATE_VOLUME_IN_LAYOUT(bLocal_9, "escv_coach_stop", 2, -4257,397f, 18,111f, 4434,602f, 0.0f, 262,37f, 0.0f, 15.0f, 5.0f, 10.0f);
	CREATE_VOLUME_IN_LAYOUT(bLocal_9, "casv_coach_stop", 2, -763,787f, 13,051f, 3722,439f, 0.0f, 239,337f, 0.0f, 15.0f, 5.0f, 10.0f);
	CREATE_VOLUME_IN_LAYOUT(bLocal_9, "blkv_coach_stop", 2, 661,257f, 78,312f, 1253,194f, 0.0f, 180,1f, 0.0f, 3,5f, 5.0f, 7,5f);
	CREATE_VOLUME_IN_LAYOUT(bLocal_9, "benv_coach_stop", 2, -3689,169f, 8,032f, 3455.0f, 0.0f, 95,061f, 0.0f, 3,5f, 5.0f, 7,5f);
	CREATE_VOLUME_IN_LAYOUT(bLocal_9, "lshv_coach_stop", 2, -1684,164f, 9,267697f, 4284,834f, 0.0f, 180,1f, 0.0f, 3,5f, 5.0f, 7,5f);
	CREATE_VOLUME_IN_LAYOUT(bLocal_9, "coov_coach_park", 2, -1804,95f, 24,45401f, 2810,315f, 0.0f, 292,5032f, 0.0f, 15.0f, 5.0f, 10.0f);
	CREATE_VOLUME_IN_LAYOUT(bLocal_9, "ratv_coach_park", 2, -3697,875f, 41,429f, 2148,041f, 0.0f, 303,153f, 0.0f, 15.0f, 5.0f, 10.0f);
	CREATE_VOLUME_IN_LAYOUT(bLocal_9, "rwfv_coach_park", 2, -3268,626f, 17,18167f, 2723,903f, -1,887851f, 146,577f, -1,620206f, 15.0f, 5.0f, 10.0f);
	CREATE_VOLUME_IN_LAYOUT(bLocal_9, "plnv_coach_park", 2, -3123,105f, 44,30289f, 3743,079f, -51,50969f, 267,0967f, 51,70138f, 15.0f, 7,261993f, 10.0f);
	CREATE_VOLUME_IN_LAYOUT(bLocal_9, "lshv_coach_park", 2, -1676,463f, 9,493582f, 4276,088f, 0.0f, 252,1856f, 0.0f, 7,926416f, 2,642139f, 5,284277f);
	CREATE_VOLUME_IN_LAYOUT(bLocal_9, "emtv_coach_park", 2, -442,52f, 23,97941f, 3955,329f, -3,804106f, 104,2582f, -3,903749f, 15.0f, 5.0f, 10.0f);
	CREATE_VOLUME_IN_LAYOUT(bLocal_9, "fodv_coach_park", 2, -703,5002f, 65,51284f, 3347,808f, 0.0f, 75,30426f, 0.0f, 15.0f, 5.0f, 10.0f);
	CREATE_VOLUME_IN_LAYOUT(bLocal_9, "torv_coach_park", 2, 381,435f, 31,422f, 3356,736f, 2,753f, -36,2f, 0.0f, 15.0f, 6,160286f, 10.0f);
	CREATE_VOLUME_IN_LAYOUT(bLocal_9, "twrv_coach_park", 2, -2437,578f, 23,85255f, 2201,414f, 0.0f, 264,3128f, 0.0f, 15.0f, 5.0f, 10.0f);
	CREATE_VOLUME_IN_LAYOUT(bLocal_9, "tumv_coach_park", 2, -3960,237f, 28,57524f, 3084,759f, 0.0f, -32,23166f, 0.0f, 15.0f, 5.0f, 10.0f);
	CREATE_VOLUME_IN_LAYOUT(bLocal_9, "gapv_coach_park", 2, -4442,633f, 9,267518f, 3364,521f, 0.0f, 176,2452f, 0.0f, 15.0f, 5.0f, 10.0f);
	CREATE_VOLUME_IN_LAYOUT(bLocal_9, "solv_coach_park", 2, -3816,177f, 9,999077f, 3626,925f, 0.0f, 69,53353f, 0.0f, 15.0f, 5.0f, 10.0f);
	CREATE_VOLUME_IN_LAYOUT(bLocal_9, "fomv_coach_park", 2, -2597,957f, 69,32348f, 3408,867f, 0.0f, 122,3583f, 0.0f, 15.0f, 5.0f, 10.0f);
	CREATE_VOLUME_IN_LAYOUT(bLocal_9, "pikv_coach_park", 2, -1227,648f, 93,50175f, 2110,007f, 0.0f, 1,91647f, 0.0f, 15.0f, 17,4811f, 10.0f);
	CREATE_VOLUME_IN_LAYOUT(bLocal_9, "tesv_coach_park", 2, -3191,454f, 38,39717f, 4544,503f, 0.0f, 180,001f, 0.0f, 15.0f, 5.0f, 10.0f);
	CREATE_VOLUME_IN_LAYOUT(bLocal_9, "nosv_coach_park", 2, -4600,072f, 4,381839f, 3979,659f, 0.0f, -15,76538f, 0.0f, 15.0f, 5.0f, 10.0f);
	CREATE_VOLUME_IN_LAYOUT(bLocal_9, "cocv_coach_park", 2, -698,856f, 170,138f, 743,603f, 0.0f, 152,309f, 0.0f, 15.0f, 5.0f, 10.0f);
	CREATE_VOLUME_IN_LAYOUT(bLocal_9, "serv_coach_park", 2, 285,854f, 91,353f, 1900,771f, 0.0f, 326,7992f, 0.0f, 15.0f, 5.0f, 10.0f);
	CREATE_VOLUME_IN_LAYOUT(bLocal_9, "hen_pasture", 3, -1059,102f, 102,7685f, 2928,799f, 0.0f, 94,725f, 0.0f, 13,05346f, 5,333994f, 13,08851f);
	CREATE_VOLUME_IN_LAYOUT(bLocal_9, "gtr_pasture", 3, -4337,467f, 32,144f, 3076,536f, 0.0f, 331,491f, 0.0f, 14,44081f, 8,806858f, 18,50083f);
	CREATE_VOLUME_IN_LAYOUT(bLocal_9, "rio_pasture", 3, -3382,033f, 38,94137f, 3242,493f, 0.0f, 75,887f, 0.0f, 12,16677f, 6,046849f, 11,78531f);
	CREATE_VOLUME_IN_LAYOUT(bLocal_9, "cho_pasture", 3, -3439,106f, 17,4172f, 3026,709f, 0.0f, 129,618f, 0.0f, 23,05708f, 14,67792f, 18,37475f);
	CREATE_VOLUME_IN_LAYOUT(bLocal_9, "hen_pasture1", 3, -1244,302f, 117,459f, 2664,095f, 0.0f, 54,848f, 0.0f, 21,68487f, 9,704492f, 23,8164f);
	CREATE_VOLUME_IN_LAYOUT(bLocal_9, "prd_pasture", 3, -1149,83f, 22,96783f, 5059,978f, 0.0f, 261,374f, 0.0f, 20,26593f, 9,249132f, 19,49912f);
	CREATE_VOLUME_IN_LAYOUT(bLocal_9, "prd_pasture1", 3, -1444,324f, 22,39532f, 4953,731f, 0.0f, 141,049f, 0.0f, 12,72238f, 4,718087f, 10,57367f);
	CREATE_VOLUME_IN_LAYOUT(bLocal_9, "prd_pasture2", 3, -2912,868f, 25,44674f, 4061,587f, 0.0f, 266,929f, 0.0f, 27,10916f, 13,49337f, 27,49792f);
	CREATE_VOLUME_IN_LAYOUT(bLocal_9, "pun_pasture", 3, -3898,6f, 6,27f, 4245,527f, 0.0f, 121,75f, 0.0f, 24,32381f, 6,558811f, 23,47421f);
	CREATE_VOLUME_IN_LAYOUT(bLocal_9, "agvv_coach_park", 2, -1549,209f, 15,337f, 3939,273f, 0.0f, 315.0f, 0.0f, 3,5f, 5.0f, 7,5f);
	CREATE_VOLUME_IN_LAYOUT(bLocal_9, "criv_coach_park", 2, -2904,775f, 15,70748f, 3004,139f, 0.0f, 16,8946f, 0.0f, 3,5f, 5.0f, 7,5f);
	return 1;
}

void Function_742(int iParam0, int iParam1) //Position: 0x2908F / 168079
{
	switch (iParam1)
	{
		case 0x00000000:
			break;
		
		case 0x00000001:
			if (!iParam0 != 4)
			{
			}
			break;
		
		case 0x00000002:
			if (!iParam0 != 3)
			{
			}
			break;
		
		case 0x00000003:
			if (!iParam0 != 3)
			{
			}
			break;
	}
	return;
}

void Function_743(int iParam0) //Position: 0x290D8 / 168152
{
	strcpy(iParam0 + 12, "TRAFFIC", 16);
	*iParam0 = 176022;
	iParam0->f_4 = 168347;
	iParam0->f_8 = 168202;
	iParam0->f_28 = 1;
	return;
}

void Function_744() //Position: 0x2910A / 168202
{
	Function_421(&Global_28842 + 84);
	Global_28842.f_240 = 0;
	if (Function_739(&Global_28842, 512))
	{
		STREAMING_EVICT_ACTOR(Global_28842.f_64, 4294967295);
	}
	if (Function_739(&Global_28842, 2048))
	{
		STREAMING_EVICT_ACTOR(Global_28842.f_68, 4294967295);
	}
	if (Function_739(&Global_28842, 8192))
	{
		STREAMING_EVICT_ACTOR(976, 4294967295);
	}
	if (IS_OBJECTSET_VALID(Global_28842.f_60))
	{
		DESTROY_OBJECTSET(Global_28842.f_60);
	}
	if (IS_OBJECT_VALID(Global_28951))
	{
		DESTROY_OBJECT(Global_28951);
	}
	if (IS_LAYOUTREF_VALID(bLocal_496))
	{
		RELEASE_LAYOUT_REF(bLocal_496);
	}
	if (IS_LAYOUTREF_VALID(Global_28841))
	{
		RELEASE_LAYOUT_REF(Global_28841);
	}
	return;
}

var Function_745() //Position: 0x2919B / 168347
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	vector3 vVar4;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = 0;
	Function_740();
	iVar1 = Function_785(&Local_11);
	if (!iVar1 != Global_28842.f_48)
	{
		Global_28842.f_48 = iVar1;
	}
	Function_780(0);
	if (!Function_731(1))
	{
		Function_779(&Local_11, 1);
		if (IS_OBJECT_VALID(Global_28951))
		{
			EVENT_TRAP_CLEAR_TRAP_FLAG(Global_28951);
			EVENT_TRAP_CLEAR_EVENTS(Global_28951);
		}
		if (Function_731(262144))
		{
			Function_421(&Global_28842 + 84);
			Function_680(262144);
			Function_680(524288);
			Global_28842.f_240 = 0;
		}
		Function_780(1);
		return iVar0;
	}
	if (Global_3395)
	{
		Function_779(&Local_11, 1);
		return iVar0;
	}
	if (Global_34165.f_44 && !NET_IS_IN_SESSION())
	{
		Function_779(&Local_11, 1);
		if (IS_OBJECT_VALID(Global_28951))
		{
			EVENT_TRAP_CLEAR_TRAP_FLAG(Global_28951);
			EVENT_TRAP_CLEAR_EVENTS(Global_28951);
		}
		return iVar0;
	}
	if (IS_OBJECTSET_VALID(Global_28842.f_60))
	{
		while (GET_OBJECTSET_SIZE(Global_28842.f_60) >= 0)
		{
			bVar2 = GET_ACTOR_FROM_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(false, Global_28842.f_60));
			if (IS_ACTOR_VALID(bVar2))
			{
				Function_774(&Local_11, bVar2);
			}
			REMOVE_OBJECT_FROM_OBJECTSET(bVar2, Global_28842.f_60);
			CLEAN_OBJECTSET(Global_28842.f_60);
		}
	}
	if (!Global_34165.f_44)
	{
		Function_779(&Local_11, 0);
	}
	Function_773();
	if (Function_731(1) && Function_731(32768))
	{
		if (Function_731(1048576))
		{
			Function_421(&Global_28842 + 84);
			Function_680(1835008);
			Global_28842.f_240 = 0;
		}
		if (!Function_731(262144))
		{
			if (IS_POPSET_VALID(Global_30750[0]) && GET_NUM_ACTORENUMS_IN_POPULATION(Global_30750[0]) < 0)
			{
				Function_772();
			}
		}
		if (Function_731(262144) && !Function_731(524288))
		{
			if (Function_442(&Global_28842 + 84))
			{
				Function_719(524288);
			}
		}
	}
	else
	{
		Function_421(&Global_28842 + 84);
		Function_680(1835008);
		Global_28842.f_240 = 0;
	}
	iVar3 = 0;
	Function_96(Function_176());
	vVar4 = { StackVal, StackVal, Function_96(Function_176()) };
	if (Function_771(StackVal, StackVal, vVar4))
	{
		while ((Function_731(16384) && Function_768(&Local_11, 0, 0)) && iVar3 > 10)
		{
			iVar7 = 0;
			iVar8 = Function_757(StackVal, StackVal, &Local_11, vVar4, iVar7);
			if (iVar8 < 4294967295 && iVar8 > Local_11)
			{
				Function_624(&(Local_11[iVar848]), 1);
			}
			iVar3++;
		}
	}
	if (Function_731(16384))
	{
	}
	if (Function_768(&Local_11, (Function_1() || !HUD_IS_FADED()), 1))
	{
		if (Function_771(StackVal, StackVal, vVar4))
		{
			iVar9 = 0;
			if (bLocal_494)
			{
				iVar9 = 2;
			}
			Function_757(StackVal, StackVal, &Local_11, vVar4, iVar9);
		}
	}
	bLocal_10 = Function_755();
	iVar10 = 0;
	while (iVar10 <= Local_11)
	{
		if (Function_735(&(Local_11[iVar1048])))
		{
			if (Function_624(&(Local_11[iVar1048]), 1))
			{
				iVar0 = 1;
			}
			Function_621(&(Local_11[iVar1048]), 1);
		}
		Function_754(&(Local_11[iVar1048]), iVar10);
		iVar10++;
	}
	Function_753();
	Function_752();
	Function_746();
	Function_780(1);
	EVENT_TRAP_CLEAR_TRAP_FLAG(Global_28951);
	EVENT_TRAP_CLEAR_EVENTS(Global_28951);
	REGISTER_TRAFFIC_OBJECTSET(Global_28842.f_60);
	return iVar0;
}

void Function_746() //Position: 0x29449 / 169033
{
	if (!Function_1())
	{
		return;
	}
	Function_747();
	return;
}

void Function_747() //Position: 0x2945A / 169050
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	
	if (EVENT_TRAP_SUCCESSFUL_TRAP(Global_28951))
	{
		bVar0 = CREATE_OBJECT_ITERATOR(Global_28841);
		if (!IS_ITERATOR_VALID(bVar0))
		{
			return;
		}
		ITERATE_IN_EVENT_TRAP(bVar0, Global_28951);
		bVar1 = START_OBJECT_ITERATOR(bVar0);
		bVar2 = false;
		bVar3 = false;
		while (IS_OBJECT_VALID(bVar1))
		{
			bVar5 = GET_EVENT_FROM_OBJECT(bVar1);
			bVar4 = GET_EVENT_TARGET_AS_OBJECT(bVar5);
			bVar2 = DECOR_CHECK_EXIST(bVar1, "WasLocal");
			bVar3 = DECOR_CHECK_EXIST(bVar1, "IsLocal");
			iVar6 = 4294966297;
			if ((bVar3 || bVar2) && IS_OBJECT_VALID(bVar4))
			{
				if (bVar3)
				{
					if (!Function_750(&Local_11, GET_ACTOR_FROM_OBJECT(bVar4), &iVar6))
					{
						if (Function_774(&Local_11, GET_ACTOR_FROM_OBJECT(bVar4)))
						{
						}
						else
						{
							Function_749(GET_ACTOR_FROM_OBJECT(bVar4));
						}
					}
					else if (!bVar2)
					{
						if (Local_11[iVar648] == 1 && Local_11[iVar648] == 3)
						{
							Function_748(&(Local_11[iVar648]));
							Function_720(&(Local_11[iVar648]));
							Local_11[iVar648] = 6;
						}
					}
				}
				else if (bVar2)
				{
					if (Function_750(&Local_11, GET_ACTOR_FROM_OBJECT(bVar4), &iVar6))
					{
						Local_11[iVar648] = 6;
					}
				}
			}
			bVar1 = OBJECT_ITERATOR_NEXT(bVar0);
		}
		DESTROY_ITERATOR(bVar0);
	}
	return;
}

void Function_748(int iParam0) //Position: 0x29572 / 169330
{
	switch (StackVal)
	{
		case 0x00000001:
		case 0x00000003:
			if (SQUAD_IS_VALID(StackVal))
			{
				iParam0->f_20 = SQUAD_GET_SIZE(StackVal);
			}
			break;
		
		case 0x00000002:
			iParam0->f_20 = 1;
			break;
	}
	return;
}

void Function_749(bool bParam0) //Position: 0x295B3 / 169395
{
	bool bVar0;
	bool bVar1;
	
	if (IS_ACTOR_MOUNTED(bParam0))
	{
		bVar0 = GET_RIDER(bParam0);
		if (!IS_ACTOR_PLAYER(bVar0))
		{
			RELEASE_OBJECT_REF(bVar0);
			Function_671(bVar0);
		}
	}
	if (IS_ACTOR_RIDING(bParam0))
	{
		bVar1 = GET_MOUNT(bParam0);
		RELEASE_OBJECT_REF(bVar1);
		Function_671(bVar1);
	}
	if (!IS_ACTOR_PLAYER(bParam0))
	{
		RELEASE_OBJECT_REF(GET_OBJECT_FROM_ACTOR(bParam0));
		Function_671(bParam0);
	}
	return;
}

bool Function_750(int iParam0, bool bParam1, int iParam2) //Position: 0x2960D / 169485
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= *iParam0)
	{
		if (Function_751(iParam0[iVar048], bParam1))
		{
			*iParam2 = iVar0;
			return 1;
		}
		iVar0++;
	}
	*iParam2 = 4294967295;
	return 0;
}

bool Function_751(int iParam0, bool bParam1) //Position: 0x29641 / 169537
{
	bool bVar0;
	
	if (!IS_ACTOR_VALID(bParam1))
	{
		return 0;
	}
	if (!SQUAD_IS_VALID(StackVal) && !IS_OBJECTSET_VALID(iParam0->f_180))
	{
		return 0;
	}
	if (SQUAD_IS_VALID(StackVal))
	{
		bVar0 = SQUAD_GET(bParam1);
		if (SQUAD_IS_VALID(bVar0))
		{
			if (StackVal == bVar0)
			{
				return 1;
			}
		}
	}
	if (IS_OBJECTSET_VALID(iParam0->f_180))
	{
		if (IS_OBJECT_IN_OBJECTSET(bParam1, iParam0->f_180))
		{
			return 1;
		}
	}
	return 0;
}

void Function_752() //Position: 0x296A5 / 169637
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	vector3 vVar5;
	
	if (bLocal_493)
	{
		if (!IS_SCRIPT_VALID(iLocal_495))
		{
			bLocal_495 = LAUNCH_NEW_SCRIPT("$/content/scripting/DesignerDefined/Traffic/trafficDebugThread", 0);
		}
	}
	if (!Global_30900[1])
	{
		return;
	}
	if (!Function_1())
	{
		return;
	}
	if (IS_LAYOUTREF_VALID(Global_28841))
	{
		bVar0 = CREATE_OBJECT_ITERATOR(Global_28841);
		ITERATE_IN_LAYOUT(bVar0, Global_28841);
		ITERATE_ON_OBJECT_TYPE(bVar0, 15);
		bVar1 = START_OBJECT_ITERATOR(bVar0);
		bVar2 = false;
		iVar3 = 0;
		iVar4 = 0;
		vVar5 = { 0.0f, 0.0f, 0.0f };
		while (IS_OBJECT_VALID(bVar1))
		{
			bVar2 = false;
			iVar3 = 0;
			bVar2 = Function_750(&Local_11, GET_ACTOR_FROM_OBJECT(bVar1), &iVar4);
			if (!bVar2)
			{
				if (NET_IS_OBJECT_LOCAL(bVar1))
				{
					GET_POSITION(GET_ACTOR_FROM_OBJECT(bVar1), &vVar5);
				}
			}
			bVar1 = OBJECT_ITERATOR_NEXT(bVar0);
		}
		DESTROY_ITERATOR(bVar0);
	}
	if (bLocal_492)
	{
	}
	return;
}

void Function_753() //Position: 0x29796 / 169878
{
	if (IS_LAYOUTREF_VALID(bLocal_496) && IS_OBJECT_VALID(Global_28951))
	{
		return;
	}
	bLocal_496 = FIND_NAMED_LAYOUT("traffic_eventTraplayout");
	if (!IS_LAYOUTREF_VALID(bLocal_496))
	{
		bLocal_496 = CREATE_LAYOUT("traffic_eventTraplayout");
	}
	Global_28951 = CREATE_EVENT_TRAP("Traffic_netOwnerChange_trap", 92, bLocal_496);
	EVENT_TRAP_STORE_EVENTS(Global_28951, 1);
	return;
}

void Function_754(int iParam0, int iParam1) //Position: 0x29827 / 170023
{
	Global_28952[iParam15] = iParam1;
	Global_28952[iParam15].f_4 = Function_735(iParam0);
	if (StackVal)
	{
		if (SQUAD_IS_VALID(StackVal))
		{
			Global_28952[iParam15].f_8 = Function_533(StackVal);
		}
		Global_28952[iParam15].f_12 = Function_623(iParam0, &Global_28952[iParam15] + 16, 0);
	}
	return;
}

bool Function_755() //Position: 0x29882 / 170114
{
	bool bVar0;
	
	if (!NET_IS_IN_SESSION())
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 <= 16)
	{
		if ((Global_3386 && Global_76943[bVar096] != Global_29006) || Function_630(bVar0))
		{
			if (Function_756(bVar0) != 4294967295)
			{
				return 1;
			}
		}
		bVar0++;
	}
	return 0;
}

int Function_756(int iParam0) //Position: 0x298C9 / 170185
{
	return Global_76943[iParam096].f_112;
}

var Function_757(int iParam0, vector3 vParam1, int iParam4) //Position: 0x298D9 / 170201
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	
	iVar0 = Function_767(iParam0);
	if (iVar0 == 4294967295)
	{
		return 4294967295;
	}
	fVar1 = Function_664(iParam4, iParam0[iVar048]->f_164);
	fVar2 = Function_766();
	fVar3 = Function_765();
	if (HUD_IS_FADED() || Global_28842 & 16384 == 0)
	{
		if (HUD_IS_FADED())
		{
			fVar2 = 20.0f;
			fVar3 = 50.0f;
		}
		else
		{
			fVar2 = 35.0f;
			fVar3 = 75.0f;
		}
	}
	bVar4 = START_CURVE_QUERY(Global_28841, vParam1, fVar1, fVar2, fVar3, 5.0f, 0);
	if (!GET_NUM_POINTS_IN_CURVE_QUERY(bVar4) < 0)
	{
		UNK_0xDF93BD7C(bVar4);
		return 4294967295;
	}
	if (!Function_762(iParam0, bVar4, iVar0))
	{
		UNK_0xDF93BD7C(bVar4);
		return 4294967295;
	}
	if (iParam4 == 0)
	{
		iParam0[iVar048]->f_4 = Function_759(iParam0, GET_CURVE_TYPE(iParam0[iVar048]->f_152));
	}
	else
	{
		iParam0[iVar048]->f_4 = iParam4;
	}
	if (!Function_758(StackVal))
	{
		iParam0[iVar048]->f_4 = 1;
		if (!Function_758(StackVal))
		{
			Function_732(iParam0[iVar048], 0);
			UNK_0xDF93BD7C(bVar4);
			return 4294967295;
		}
	}
	Function_713(iParam0[iVar048], GET_CURVE_TYPE(iParam0[iVar048]->f_152));
	Global_28842.f_8 = StackVal + 1;
	Global_28842.f_16 = ((GET_CURRENT_GAME_TIME() + (2.0f / 2.0f)) + RAND_FLOAT_RANGE(0.0f, 2.0f));
	Function_657(iParam0[iVar048]);
	Function_681(&Global_28842, 65536);
	UNK_0xDF93BD7C(bVar4);
	return iVar0;
}

bool Function_758(int iParam0) //Position: 0x29A2F / 170543
{
	switch (iParam0)
	{
		case 0x00000001:
			if (!Function_739(&Global_28842, 2))
			{
				return 0;
			}
			if (!Global_30767[23])
			{
				return 0;
			}
			break;
		
		case 0x00000002:
			if (!Function_739(&Global_28842, 4))
			{
				return 0;
			}
			if (!STREAMING_IS_ACTOR_LOADED(Global_28842.f_64, 4294967295))
			{
				return 0;
			}
			if (!STREAMING_IS_ACTOR_LOADED(Global_28842.f_68, 4294967295))
			{
				return 0;
			}
			if (!Function_58(Global_30750[9], 0, 4294967295, 0))
			{
				return 0;
			}
			if (!Function_58(Global_30750[1], 2, 4294967295, 0))
			{
				return 0;
			}
			if (!Global_30767[23])
			{
				return 0;
			}
			if ((GET_MAX_NUM_OBJECTS_OF_TYPE(15) - GET_NUM_OBJECTS_OF_TYPE(15)) <= 10)
			{
				return 0;
			}
			break;
		
		default:
			LOG_ERROR("Unknown Traffic Type in TRAFFIC_CAN_LAUNCH_NODE_OF_TYPE");
			break;
	}
	return 1;
}

int Function_759(int iParam0, int iParam1) //Position: 0x29B18 / 170776
{
	bool bVar0;
	
	bVar0 = RAND_INT_RANGE(false, 1000);
	switch (iParam1)
	{
		case 0x00000005:
			return 1;
			break;
		
		case 0x00000004:
			if (IntToFloat(bVar0) > ((Global_28842.f_32 + Global_28842.f_36) * 1000.0f) && Function_760(iParam0, 2))
			{
				return 2;
			}
			return 1;
			break;
		
		case 0x0000000B:
			if (IntToFloat(bVar0) > ((Global_28842.f_32 + Global_28842.f_36) * 1000.0f) && Function_760(iParam0, 2))
			{
				return 2;
			}
			return 1;
			break;
	}
	return 1;
}

int Function_760(int iParam0, int iParam1) //Position: 0x29B98 / 170904
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_28842.f_56 >= 20)
	{
		return 0;
	}
	switch (iParam1)
	{
		case 0x00000003:
		case 0x00000001:
			return 1;
			break;
		
		case 0x00000002:
			if (Function_739(&Global_28842, 64))
			{
				return 1;
			}
			if (Global_29004 == 2)
			{
				if (!STREAMING_IS_ACTOR_LOADED(1178, 4294967295))
				{
					return 0;
				}
			}
			if (Global_29004 == 1)
			{
				if (!STREAMING_IS_ACTOR_LOADED(1179, 4294967295))
				{
					return 0;
				}
			}
			if (!STREAMING_IS_ACTOR_LOADED(1177, 4294967295))
			{
				return 0;
			}
			iVar0 = 0;
			while (iVar0 <= *iParam0)
			{
				if (Function_735(iParam0[iVar048]))
				{
					if (StackVal == 2)
					{
						return 0;
					}
				}
				iVar0++;
			}
			if (Global_28842.f_52 >= 1)
			{
				return 0;
			}
			if (Global_34165.f_44)
			{
				iVar1 = Function_761(&iVar2);
				if (iVar1 > 4)
				{
					return 0;
				}
				if (iVar2 >= 1)
				{
					return 0;
				}
				if (IS_ACTOR_RIDING_VEHICLE(Function_176()))
				{
					return 0;
				}
			}
			break;
		
		default:
			LOG_ERROR("Unknown Traffic Type in TRAFFIC_SHOULD_LAUNCH_NODE_OF_TYPE");
			break;
	}
	return 1;
}

var Function_761(int iParam0) //Position: 0x29CBA / 171194
{
	bool bVar0;
	int iVar1;
	
	iVar1 = 0;
	*iParam0 = 0;
	bVar0 = false;
	while (bVar0 <= 16)
	{
		if (IS_SLOT_VALID(bVar0))
		{
			iVar1 = (iVar1 + Global_76943[bVar096].f_20);
			if (IS_ACTOR_VALID(GET_SLOT_ACTOR(bVar0)))
			{
				*iParam0 = (*iParam0 + Global_76943[bVar096].f_20);
			}
		}
		bVar0++;
	}
	return iVar1;
}

bool Function_762(var uParam0, bool bParam1, int iParam2) //Position: 0x29D0F / 171279
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	struct<6> Var3;
	bool bVar9;
	vector3 vVar10;
	vector3 vVar13;
	vector3 vVar16;
	vector3 vVar19;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	vector3 vVar25;
	float fVar28;
	bool bVar29;
	bool bVar30;
	int iVar31;
	int iVar32;
	
	if (!IS_CURVE_QUERY_VALID(bParam1))
	{
		return 0;
	}
	while (iVar1 > 10 && !bVar9)
	{
		bVar0 = RAND_INT_RANGE(false, (GET_NUM_POINTS_IN_CURVE_QUERY(bParam1) - 1));
		GET_POINT_FROM_CURVE_QUERY(bParam1, bVar0, &Var3);
		iVar1++;
		bVar9 = true;
		Function_622(&Var3);
		vVar10 = { StackVal, StackVal, Function_622(&Var3) };
		bVar22 = VDIST(vVar10, Global_34574);
		if (!Function_731(16384))
		{
			if (bVar22 > Function_766())
			{
				bVar9 = false;
			}
		}
		if (bVar9 && Function_1())
		{
			bVar24 = false;
			vVar25 = { 0.0f, 0.0f, 0.0f };
			while (bVar9 && bVar24 > 16)
			{
				if (GET_SLOT_POSITION(bVar24, &vVar25) && GET_LOCAL_SLOT() == bVar24)
				{
					bVar23 = VDIST(vVar10, vVar25);
					if (bVar23 > 120.0f || bVar23 > bVar22)
					{
						bVar9 = false;
					}
				}
				bVar24++;
			}
			if (bVar9)
			{
				if (Function_763(StackVal, StackVal, vVar10))
				{
					bVar9 = false;
				}
			}
		}
		if ((Function_731(32) && !Function_731(16384)) && bVar9)
		{
			vVar19 = { 0.0f, 0.0f, -1.0f };
			ROTATE_VECTOR_XZ(&vVar19, GET_HEADING(Global_34573), 0);
			Function_622(&Var3);
			vVar16 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Global_34574, Function_622(&Var3), StackVal) };
			if (VDOT(&vVar19, &vVar16) >= 0.0f)
			{
				bVar9 = false;
			}
		}
		if (bVar9)
		{
			fVar28 = 15.0f;
			if ((StackVal || StackVal != 1 != 2) && Global_3386)
			{
				fVar28 = 4.0f;
			}
			if (IS_ANY_ACTOR_IN_SPHERE(&vVar10, fVar28))
			{
				bVar9 = false;
			}
		}
		if (bVar9)
		{
			if (!STREAMING_ARE_BOUNDS_LOADED(vVar10, 10.0f))
			{
				bVar9 = false;
			}
		}
		if (!HUD_IS_FADED() && bVar9)
		{
			if (VDIST(vVar10, Global_34574) > 80.0f)
			{
				if (WOULD_ACTOR_BE_VISIBLE(976, &vVar10, 3212836864))
				{
					bVar9 = false;
				}
			}
		}
		if (bVar9)
		{
			bVar2 = false;
			while (bVar2 <= *uParam0)
			{
				if (!bVar2 != iParam2)
				{
					if (Function_735(uParam0[bVar248]))
					{
						if (SQUAD_IS_VALID(StackVal))
						{
							if (SQUAD_GET_SIZE(StackVal) >= 0)
							{
								Function_622(&Var3);
								bVar29 = Function_642(StackVal, StackVal, StackVal, Function_622(&Var3));
								if (IS_ACTOR_VALID(bVar29))
								{
									GET_POSITION(bVar29, &vVar10);
								}
								else
								{
									Function_622(uParam0[bVar248] + 24);
									vVar10 = { StackVal, StackVal, Function_622(uParam0[bVar248] + 24) };
								}
								Function_622(&Var3);
								if (VDIST(vVar10, Function_622(&Var3)) > 20.0f)
								{
									bVar9 = false;
								}
							}
						}
					}
				}
				bVar2++;
			}
			if (Function_735(&Global_28903))
			{
				if (SQUAD_IS_VALID(StackVal))
				{
					if (SQUAD_GET_SIZE(StackVal) >= 0)
					{
						Function_622(&Var3);
						bVar30 = Function_642(StackVal, StackVal, StackVal, Function_622(&Var3));
						if (IS_ACTOR_VALID(bVar30))
						{
							GET_POSITION(bVar30, &vVar10);
						}
						else
						{
							Function_622(&Global_28903 + 24);
							vVar10 = { StackVal, StackVal, Function_622(&Global_28903 + 24) };
						}
						Function_622(&Var3);
						if (VDIST(vVar10, Function_622(&Var3)) > 20.0f)
						{
							bVar9 = false;
						}
					}
				}
			}
		}
		if (bVar9)
		{
			Function_622(&Var3);
			vVar10 = { StackVal, StackVal, Function_622(&Var3) };
			vVar10.f_4 = (vVar10.y + 1.0f);
			iVar31 = GET_MATERIAL_AT_VECTOR(&vVar10);
			if (iVar31 & 1 == 0)
			{
				bVar9 = false;
				iVar1 += 5;
			}
			vVar10.f_4 = (vVar10.y - 1.0f);
		}
		if (Function_727(&Var3))
		{
			bVar9 = false;
		}
	}
	if (iVar1 >= 10)
	{
		return 0;
	}
	if (!bVar9)
	{
		return 0;
	}
	if (Function_655(&Var3))
	{
		return 0;
	}
	if (Global_30900[1])
	{
		bVar2 = false;
		bVar2 = false;
		while (bVar2 <= GET_NUM_POINTS_IN_CURVE_QUERY(bParam1))
		{
			GET_POINT_FROM_CURVE_QUERY(bParam1, bVar2, &iVar32);
			Function_622(&iVar32);
			vVar13 = { StackVal, StackVal, Function_622(&iVar32) };
			bVar2++;
		}
		Function_622(&Var3);
		vVar13 = { StackVal, StackVal, Function_622(&Var3) };
	}
	uParam0[iParam248]->f_152 = GET_CURVE_FROM_POINT_INDEX_IN_CURVE_QUERY(bParam1, bVar0);
	uParam0[iParam248]->f_156 = CURVE_CALCULATE_DISTANCE_BY_FORCED_COMPONENT_SUBDIVISION_BOUNDS(uParam0[iParam248]->f_152, 0.0f, 1.0f, 10);
	*(uParam0[iParam248] + 24) = { StackVal, StackVal, StackVal, StackVal, StackVal, Var3 };
	Function_622(uParam0[iParam248] + 24);
	vVar10 = { StackVal, StackVal, Function_622(uParam0[iParam248] + 24) };
	return 1;
}

bool Function_763(vector3 vParam0) //Position: 0x2A087 / 172167
{
	var uVar0[8];
	int iVar9;
	
	Function_764(&uVar0);
	iVar9 = 0;
	while (iVar9 <= 8)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
			if (IS_POINT_IN_VOLUME(StackVal, vParam0))
			{
				return 1;
			}
		}
		iVar9++;
	}
	return 0;
}

void Function_764(var uParam0) //Position: 0x2A0D8 / 172248
{
	(*uParam0)[0] = Global_30640[2];
	(*uParam0)[1] = Global_30658[0];
	(*uParam0)[2] = Global_30658[3];
	(*uParam0)[3] = Global_30658[2];
	(*uParam0)[4] = Global_30679[1];
	(*uParam0)[5] = Global_30668[2];
	(*uParam0)[6] = Global_30685[2];
	(*uParam0)[7] = Global_30685[1];
	return;
}

var Function_765() //Position: 0x2A136 / 172342
{
	if (Global_3386 && !Global_34165.f_44)
	{
		if (StackVal == 1)
		{
			return 60.0f;
		}
		if (StackVal == 2)
		{
			return 80.0f;
		}
		if (StackVal == 4)
		{
			return 120.0f;
		}
	}
	return 150.0f;
}

float Function_766() //Position: 0x2A181 / 172417
{
	if (Global_3386)
	{
		if (StackVal == 1)
		{
			return 25.0f;
		}
		if (StackVal == 2)
		{
			return 50.0f;
		}
		if (StackVal == 4)
		{
			return 80.0f;
		}
	}
	return 120.0f;
}

int Function_767(int iParam0) //Position: 0x2A1C5 / 172485
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if ((*iParam0)[iVar048] == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

bool Function_768(int iParam0, bool bParam1, int iParam2) //Position: 0x2A1F2 / 172530
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	
	if (!Function_731(32768))
	{
		return 0;
	}
	if (StackVal > Function_770())
	{
		return 0;
	}
	if (Global_3391 && iParam2)
	{
		return 0;
	}
	if (!IS_ACTOR_VALID(Global_34573))
	{
		return 0;
	}
	if (!IS_ACTOR_ALIVE(Global_34573))
	{
		return 0;
	}
	if (Global_30839 >= 0)
	{
		return 0;
	}
	if (!Function_58(Global_30750[6], 4, 23, 1))
	{
		return 0;
	}
	if (!Function_731(524288))
	{
		return 0;
	}
	if (Function_767(iParam0) == 4294967295)
	{
		return 0;
	}
	if (StackVal && StackVal != 1 != 2)
	{
		if (bParam1 && GET_CURRENT_GAME_TIME() >= Global_28842.f_16)
		{
			return 0;
		}
		if (!STREAMING_IS_WORLD_LOADED() && iParam2)
		{
			return 0;
		}
	}
	if ((GET_MAX_NUM_OBJECTS_OF_TYPE(15) - GET_NUM_OBJECTS_OF_TYPE(15)) <= 5)
	{
		return 0;
	}
	if (Function_1())
	{
		if (!NET_IS_IN_SESSION())
		{
			return 0;
		}
		if (!Function_731(2097152))
		{
			return 0;
		}
		iVar0 = 0;
		if (IS_LAYOUTREF_VALID(Global_28841))
		{
			bVar1 = CREATE_OBJECT_ITERATOR(Global_28841);
			ITERATE_ON_OBJECT_TYPE(bVar1, 15);
			ITERATE_IN_LAYOUT(bVar1, Global_28841);
			bVar2 = START_OBJECT_ITERATOR(bVar1);
			if (IS_OBJECT_VALID(bVar2))
			{
				iVar0 = GET_NUM_ITERATOR_MATCHES(bVar1);
			}
			DESTROY_ITERATOR(bVar1);
		}
		if (iVar0 >= 20)
		{
			return 0;
		}
		iVar3 = Function_769();
		if (iVar3 > Function_770())
		{
			return 0;
		}
		if (Function_755())
		{
			return 0;
		}
	}
	return 1;
}

var Function_769() //Position: 0x2A326 / 172838
{
	return Global_78480.f_16;
}

int Function_770() //Position: 0x2A332 / 172850
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = Global_28842.f_12;
	if (Global_63399 == 16)
	{
		if (iVar0 >= 1)
		{
			iVar0 = 1;
		}
	}
	else if (Global_63399 == 32)
	{
		iVar0 = 0;
	}
	if (IS_PS3())
	{
		if (Global_29006 != Global_30640[0] && iVar0 < 1)
		{
			iVar0 = 1;
		}
		else if (Global_29006 != Global_30668[1] && iVar0 < 2)
		{
			iVar0 = 2;
		}
	}
	iVar1 = MARKETING_GET_AMBIENT_DENSITY_LEVEL();
	iVar2 = 0;
	switch (iVar1)
	{
		case 0x00000000:
			iVar0 = 0;
			break;
		
		case 0x00000001:
			if (iVar0 >= 1)
			{
				iVar0 = 1;
			}
			break;
		
		case 0x00000002:
			break;
		
		case 0x00000003:
			iVar2 = 2;
			break;
		
		case 0x00000004:
			iVar2 = 4;
			break;
	}
	return ((iVar0 + Global_28842.f_40) + iVar2);
}

bool Function_771(vector3 vParam0) //Position: 0x2A3EA / 173034
{
	return ARE_CURVES_IN_RANGE(48, vParam0, 150.0f);
}

void Function_772() //Position: 0x2A3FE / 173054
{
	int iVar0;
	
	iVar0 = GET_NUM_ACTORENUMS_IN_POPULATION(Global_30750[0]);
	Global_28842.f_236 = RAND_INT_RANGE(false, (iVar0 - 1));
	Global_28842.f_232 = 0;
	Global_28842.f_232 = 0;
	while (Global_28842.f_232 <= Global_28842.f_84)
	{
		Function_682(HUD_IS_FADED());
		Global_28842.f_232++;
	}
	Global_28842.f_232 = 0;
	Function_442(&Global_28842 + 84);
	Function_719(262144);
	return;
}

void Function_773() //Position: 0x2A460 / 173152
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	float fVar5;
	
	if (!Function_1())
	{
		Function_719(2097152);
		return;
	}
	if (!NET_IS_IN_SESSION())
	{
		Function_719(2097152);
		return;
	}
	bVar0 = false;
	bVar1 = GET_LOCAL_SLOT();
	vVar2 = { 0.0f, 0.0f, 0.0f };
	while (bVar0 <= 16)
	{
		if (bVar0 != GET_LOCAL_SLOT())
		{
			if (GET_SLOT_POSITION(bVar0, &vVar2))
			{
				fVar5 = VDIST2(Global_34574, vVar2);
				if (fVar5 > 25.0f && bVar0 > bVar1)
				{
					Function_680(2097152);
					return;
				}
			}
		}
		bVar0++;
	}
	Function_719(2097152);
	return;
}

bool Function_774(int iParam0, bool bParam1) //Position: 0x2A4E3 / 173283
{
	int iVar0;
	int iVar1;
	bool bVar2;
	var uVar3;
	bool bVar4;
	bool bVar5;
	
	iVar0 = 4294967295;
	iVar1 = 4294967295;
	bVar2 = Function_1();
	if (IS_ACTOR_HORSE(bParam1))
	{
		if (IS_ACTOR_DRAFTED(bParam1))
		{
			iVar0 = 2;
			uVar3 = GET_ACTOR_DRAFTED_TO(bParam1);
			if (Function_750(iParam0, uVar3, &iVar1))
			{
				Function_778(iParam0[iVar148], bParam1);
			}
			else if (Function_774(iParam0, uVar3))
			{
				if (!NET_IS_IN_SESSION())
				{
					GIVE_OBJECT_TO_LAYOUT(bParam1, Global_28841);
					REGISTER_TRAFFIC_ACTOR(bParam1, 1);
				}
				return 1;
			}
			return 0;
		}
		if (IS_ACTOR_MOUNTED(bParam1))
		{
			iVar0 = 1;
			bVar4 = GET_RIDER(bParam1);
			if (IS_ACTOR_PLAYER(bVar4))
			{
				return 0;
			}
			if (Function_750(iParam0, bVar4, &iVar1))
			{
				Function_778(iParam0[iVar148], bParam1);
				if (!NET_IS_IN_SESSION())
				{
					GIVE_OBJECT_TO_LAYOUT(bParam1, Global_28841);
					REGISTER_TRAFFIC_ACTOR(bParam1, 1);
				}
				return 1;
			}
			if (Function_776(iParam0, bVar4, 1, bVar2, &iVar1))
			{
				Function_778(iParam0[iVar148], bVar4);
				if (!NET_IS_IN_SESSION())
				{
					GIVE_OBJECT_TO_LAYOUT(bParam1, Global_28841);
					REGISTER_TRAFFIC_ACTOR(bParam1, 1);
				}
				return 1;
			}
			if (Function_775(iParam0, bVar4, 1))
			{
				if (!NET_IS_IN_SESSION())
				{
					GIVE_OBJECT_TO_LAYOUT(bParam1, Global_28841);
					REGISTER_TRAFFIC_ACTOR(bParam1, 1);
				}
				return 1;
			}
			return 0;
		}
		return 0;
	}
	if (IS_ACTOR_VEHICLE(bParam1))
	{
		if (!Function_670(bParam1, 1, 1, 4294967295))
		{
			return 0;
		}
		if (IS_ACTOR_DRAFT_VEHICLE(bParam1))
		{
			iVar0 = 2;
		}
		if (Function_775(iParam0, bParam1, iVar0))
		{
			if (!NET_IS_IN_SESSION())
			{
				GIVE_OBJECT_TO_LAYOUT(bParam1, Global_28841);
				REGISTER_TRAFFIC_ACTOR(bParam1, 1);
			}
			return 1;
		}
		return 0;
	}
	if (IS_ACTOR_HUMAN(bParam1))
	{
		if (IS_ACTOR_RIDING_VEHICLE(bParam1))
		{
			bVar5 = GET_VEHICLE(bParam1);
			if (Function_750(iParam0, bVar5, &iVar1))
			{
				Function_778(iParam0[iVar148], bParam1);
				if (!NET_IS_IN_SESSION())
				{
					if (GET_ACTOR_IN_VEHICLE_SEAT(bVar5, false) == bParam1)
					{
						(*iParam0)[iVar148] = 3;
						iParam0[iVar148]->f_12 = "";
					}
					GIVE_OBJECT_TO_LAYOUT(bParam1, Global_28841);
					REGISTER_TRAFFIC_ACTOR(bParam1, 1);
				}
				return 1;
			}
			if (Function_774(iParam0, bVar5))
			{
				if (!NET_IS_IN_SESSION())
				{
					GIVE_OBJECT_TO_LAYOUT(bParam1, Global_28841);
					REGISTER_TRAFFIC_ACTOR(bParam1, 1);
				}
				return 1;
			}
			return 0;
		}
		if (IS_ACTOR_RIDING(bParam1))
		{
			iVar0 = 1;
		}
		else
		{
			iVar0 = 3;
		}
		if (Function_776(iParam0, bParam1, iVar0, bVar2, &iVar1))
		{
			Function_778(iParam0[iVar148], bParam1);
			if (!NET_IS_IN_SESSION())
			{
				GIVE_OBJECT_TO_LAYOUT(bParam1, Global_28841);
				REGISTER_TRAFFIC_ACTOR(bParam1, 1);
			}
			return 1;
		}
		if (Function_775(iParam0, bParam1, iVar0))
		{
			if (!NET_IS_IN_SESSION())
			{
				GIVE_OBJECT_TO_LAYOUT(bParam1, Global_28841);
				REGISTER_TRAFFIC_ACTOR(bParam1, 1);
			}
			return 1;
		}
		return 0;
	}
	return 0;
}

bool Function_775(var uParam0, bool bParam1, int iParam2) //Position: 0x2A758 / 173912
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	iVar0 = Function_767(uParam0);
	if (iVar0 == 4294967295)
	{
		return 0;
	}
	uParam0[iVar048]->f_4 = iParam2;
	if (Function_1())
	{
		uParam0[iVar048]->f_188 = NET_ACTOR_GET_SCRIPT_INT(bParam1);
	}
	Function_713(uParam0[iVar048], 4294967294);
	(*uParam0)[iVar048] = 3;
	iVar1 = 0;
	bVar2 = false;
	switch (iParam2)
	{
		case 0x00000002:
			if (!IS_ACTOR_VEHICLE(bParam1))
			{
				Function_732(uParam0[iVar048], 0);
				return 0;
			}
			iVar1 = (GET_NUM_OCCUPIED_SEATS(bParam1) + GET_NUM_AVAILABLE_SEATS(bParam1));
			bVar2 = false;
			bVar2 = false;
			while (bVar2 <= iVar1)
			{
				if (IS_SEAT_OCCUPIED(bParam1, bVar2))
				{
					bVar3 = GET_ACTOR_IN_VEHICLE_SEAT(bParam1, bVar2);
					if (!IS_ACTOR_PLAYER(bVar3))
					{
						SQUAD_JOIN(StackVal, bVar3);
					}
				}
				bVar2++;
			}
			bVar5 = GET_ACTOR_ENUM(bParam1);
			if ((bVar5 != 1177 || bVar5 != 1178) || bVar5 != 1179)
			{
				uParam0[iVar048]->f_100 = 1;
			}
			uParam0[iVar048]->f_16 = bParam1;
			uParam0[iVar048]->f_180 = CREATE_OBJECTSET_IN_LAYOUT(Function_75(), Global_28841, 15, 0);
			Function_676(StackVal, StackVal, uParam0[iVar048]->f_180);
			bVar4 = GET_ACTOR_IN_VEHICLE_SEAT(bParam1, false);
			break;
		
		case 0x00000001:
		case 0x00000003:
			if (!IS_ACTOR_HUMAN(bParam1))
			{
				Function_732(uParam0[iVar048], 0);
				return 0;
			}
			if (IS_ACTOR_PLAYER(bParam1))
			{
				if (IS_ACTOR_RIDING(bParam1))
				{
					RELEASE_ACTOR(GET_MOUNT(bParam1));
				}
				Function_732(uParam0[iVar048], 0);
				return 0;
			}
			SQUAD_JOIN(StackVal, bParam1);
			if (iParam2 == 1)
			{
				uParam0[iVar048]->f_20 = 1;
				uParam0[iVar048]->f_180 = CREATE_OBJECTSET_IN_LAYOUT(Function_75(), Global_28841, 15, 0);
				Function_676(StackVal, StackVal, uParam0[iVar048]->f_180);
			}
			bVar4 = bParam1;
			break;
		
		default:
			break;
	}
	Function_675(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *uParam0[iVar048]);
	if (DECOR_CHECK_EXIST(bVar4, "overrideCurve"))
	{
		uParam0[iVar048]->f_164 = DECOR_GET_INT(bVar4, "overrideCurve");
	}
	if (DECOR_CHECK_EXIST(bVar4, "overrideSpeed"))
	{
		uParam0[iVar048]->f_80 = DECOR_GET_INT(bVar4, "overrideSpeed");
	}
	if (DECOR_CHECK_EXIST(bVar4, "overridePriority"))
	{
		uParam0[iVar048]->f_84 = DECOR_GET_INT(bVar4, "overridePriority");
	}
	else
	{
		uParam0[iVar048]->f_84 = 2;
	}
	if (DECOR_CHECK_EXIST(bVar4, "overrideDest"))
	{
		DECOR_GET_VECTOR(bVar4, "overrideDest", uParam0[iVar048] + 136);
	}
	if (DECOR_CHECK_EXIST(bVar4, "quickRelease"))
	{
		uParam0[iVar048]->f_124 = 1;
	}
	return 1;
}

bool Function_776(var uParam0, bool bParam1, int iParam2, bool bParam3, int iParam4) //Position: 0x2AA28 / 174632
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	vector3 vVar3;
	vector3 vVar6;
	bool bVar9;
	
	bVar1 = 0.0f;
	bVar2 = 0.0f;
	if (bParam3 && Function_1())
	{
		bVar9 = NET_ACTOR_GET_SCRIPT_INT(bParam1);
		if (bVar9 != 0)
		{
			iVar0 = 0;
			while (iVar0 <= *uParam0)
			{
				if (Function_735(uParam0[iVar048]))
				{
					if (bVar9 == uParam0[iVar048]->f_188)
					{
						*iParam4 = iVar0;
						return 1;
					}
				}
				iVar0++;
			}
		}
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= *uParam0)
	{
		if (Function_735(uParam0[iVar048]))
		{
			if (StackVal == iParam2)
			{
				if (Function_777(uParam0[iVar048], bParam1))
				{
					switch (StackVal)
					{
						case 0x00000001:
						case 0x00000003:
							bVar1 = GET_HEADING(bParam1);
							GET_OBJECT_POSITION(bParam1, &vVar6);
							Function_622(uParam0[iVar048] + 24);
							vVar3 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar6, Function_622(uParam0[iVar048] + 24), StackVal) };
							bVar2 = UNK_0x9C40E671(&vVar3);
							if (FABS((bVar1 - bVar2)) > 45.0f)
							{
								*iParam4 = iVar0;
								return 1;
							}
							break;
						
						case 0x00000002:
							*iParam4 = iVar0;
							return 1;
							break;
						
						default:
							break;
						}
					}
				}
		}
		iVar0++;
	}
	*iParam4 = 4294967295;
	return 0;
}

bool Function_777(int iParam0, bool bParam1) //Position: 0x2AB41 / 174913
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	
	if (!Function_735(iParam0))
	{
		return 0;
	}
	if (!SQUAD_IS_VALID(StackVal))
	{
		return 0;
	}
	if (!SQUAD_COMPUTE_CENTROID(StackVal, &vVar0))
	{
		return 0;
	}
	GET_POSITION(bParam1, &vVar3);
	fVar6 = VDIST2(vVar0, vVar3);
	switch (StackVal)
	{
		case 0x00000001:
		case 0x00000003:
			if (fVar6 >= 100.0f)
			{
				return 1;
			}
			break;
		
		case 0x00000002:
			if (fVar6 >= 4.0f)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void Function_778(int iParam0, bool bParam1) //Position: 0x2ABBA / 175034
{
	if (!Function_735(iParam0))
	{
		return;
	}
	if (!SQUAD_IS_VALID(StackVal))
	{
		return;
	}
	SQUAD_JOIN(StackVal, bParam1);
	REGISTER_TRAFFIC_ACTOR(bParam1, 1);
	if (StackVal || StackVal != 2 != 1)
	{
		if (!IS_OBJECTSET_VALID(iParam0->f_180))
		{
			iParam0->f_180 = CREATE_OBJECTSET_IN_LAYOUT(Function_75(), Global_28841, 15, 0);
		}
		Function_676(StackVal, StackVal, iParam0->f_180);
	}
	if (Global_34165.f_44)
	{
		switch (*iParam0)
		{
			case 0x00000001:
			case 0x00000003:
				break;
			
			case 0x00000006:
			case 0x00000007:
				*iParam0 = 6;
				break;
			
			case 0x00000009:
			case 0x0000000A:
			case 0x0000000B:
				*iParam0 = 9;
				break;
			
			case 0x0000000C:
			case 0x0000000D:
				*iParam0 = 12;
				break;
			
			case 0x0000000E:
			case 0x0000000F:
				*iParam0 = 15;
				break;
			
			case 0x00000010:
			case 0x00000011:
				*iParam0 = 16;
				break;
			
			default:
				break;
			}
	}
	return;
}

void Function_779(int iParam0, int iParam1) //Position: 0x2ACAA / 175274
{
	int iVar0;
	
	if ((((HUD_IS_FADED() && !Function_731(65536)) && !Global_3410) && !Function_731(16384)) || iParam1)
	{
		if (((Global_3391 && !Global_3410) || !STREAMING_IS_WORLD_LOADED()) || iParam1)
		{
			iVar0 = 0;
			while (iVar0 <= *iParam0)
			{
				if (Function_735(iParam0[iVar048]))
				{
					Function_732(iParam0[iVar048], 0);
				}
				iVar0++;
			}
			if (Function_735(&Global_28903))
			{
				Function_732(&Global_28903, 0);
			}
			if (!Function_731(65536))
			{
				if (!Global_34165.f_44)
				{
					DESTROY_LAYOUT_OBJECTS(Global_28841);
				}
				else
				{
					RELEASE_LAYOUT_OBJECTS(Global_28841);
				}
				Function_741(Global_28841);
			}
			Global_28842.f_16 = 0.0f;
			Global_28842.f_8 = 0;
			Global_28842.f_48 = 0;
			Function_719(65536);
		}
	}
	if (StackVal && (!HUD_IS_FADED() && Function_731(16384)) <= Function_770())
	{
		Function_680(16384);
	}
	return;
}

void Function_780(bool bParam0) //Position: 0x2AD7D / 175485
{
	if (!Function_1())
	{
		return;
	}
	Global_78480.f_8 = StackVal;
	Function_784();
	Function_783();
	if (!bParam0)
	{
		return;
	}
	Function_781();
	return;
}

void Function_781() //Position: 0x2ADA6 / 175526
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	Global_78480.f_20 = 0;
	if (IS_LAYOUTREF_VALID(Global_28841))
	{
		bVar0 = CREATE_OBJECT_ITERATOR(Global_28841);
		ITERATE_ON_OBJECT_TYPE(bVar0, 15);
		ITERATE_IN_LAYOUT(bVar0, Global_28841);
		bVar2 = START_OBJECT_ITERATOR(bVar0);
		while (IS_OBJECT_VALID(bVar2))
		{
			bVar1 = GET_ACTOR_FROM_OBJECT(bVar2);
			if (Function_782(bVar1))
			{
				Global_78480.f_20++;
			}
			bVar2 = OBJECT_ITERATOR_NEXT(bVar0);
		}
		OBJECT_ITERATOR_RESET(bVar0);
		ITERATE_ON_OBJECT_TYPE(bVar0, 15);
		ITERATE_IN_LAYOUT(bVar0, GET_GC_LAYOUT());
		bVar2 = START_OBJECT_ITERATOR(bVar0);
		while (IS_OBJECT_VALID(bVar2))
		{
			bVar1 = GET_ACTOR_FROM_OBJECT(bVar2);
			if (Function_782(bVar1))
			{
				Global_78480.f_20++;
			}
			bVar2 = OBJECT_ITERATOR_NEXT(bVar0);
		}
		DESTROY_ITERATOR(bVar0);
	}
	return;
}

bool Function_782(bool bParam0) //Position: 0x2AE58 / 175704
{
	if (!IS_ACTOR_VEHICLE(bParam0))
	{
		return 0;
	}
	if (!NET_IS_OBJECT_LOCAL(bParam0))
	{
		return 0;
	}
	if (!Function_670(bParam0, 4294967295, 1, 4294967295))
	{
		return 0;
	}
	return 1;
}

void Function_783() //Position: 0x2AE83 / 175747
{
	bool bVar0;
	
	Global_78480.f_16 = 0;
	bVar0 = false;
	while (bVar0 <= 16)
	{
		if (IS_SLOT_VALID(bVar0))
		{
			if ((Global_3386 && Global_76943[bVar096] != Global_29006) || Function_630(bVar0))
			{
				Global_78480.f_16 = (Global_78480.f_16 + Global_76943[bVar096].f_12);
			}
		}
		bVar0++;
	}
	return;
}

void Function_784() //Position: 0x2AEDB / 175835
{
	var uVar0;
	int iVar1;
	
	Global_78480.f_12 = 0;
	iVar1 = 0;
	while (iVar1 <= Local_11)
	{
		if (Function_735(&(Local_11[iVar148])))
		{
			if (Function_623(&(Local_11[iVar148]), &uVar0, 1))
			{
				Global_78480.f_12++;
			}
		}
		iVar1++;
	}
	return;
}

var Function_785(int iParam0) //Position: 0x2AF24 / 175908
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	iVar2 = 0;
	while (iVar2 <= *iParam0)
	{
		if (Function_735(iParam0[iVar248]))
		{
			if (IS_OBJECTSET_VALID(iParam0[iVar248]->f_180))
			{
				bVar1 = GET_OBJECTSET_SIZE(iParam0[iVar248]->f_180);
				CLEAN_OBJECTSET(iParam0[iVar248]->f_180);
				iVar0 = (iVar0 + bVar1);
				bVar1 = (bVar1 - GET_OBJECTSET_SIZE(iParam0[iVar248]->f_180));
				Global_28842.f_48 = (Global_28842.f_48 - bVar1);
			}
		}
		iVar2++;
	}
	return iVar0;
}

void Function_786() //Position: 0x2AF96 / 176022
{
	Global_28842.f_44 = 4294967295;
	Global_28842.f_72 = 4294967295;
	Global_28842.f_64 = 0;
	Global_28842.f_68 = 0;
	Function_681(&Global_28842, 512);
	Global_28842.f_76 = -500.0f;
	Function_753();
	ENABLE_CURVE("rsdGPSTRAIL_home01_", false);
	ENABLE_CURVE("rsdGPSTRAIL_home01_1", false);
	ENABLE_CURVE("rsdGPSTRAIL_home01_2", false);
	ENABLE_CURVE("rsdGPSTRAIL_home02_ranch01_", false);
	ENABLE_CURVE("rsdGPSTRAIL_home02_ranch01_1", false);
	ENABLE_CURVE("rsdGPSTRAIL_home02_ranch01_2", false);
	ENABLE_CURVE("rsdGPSTRAIL_ranch07_", false);
	ENABLE_CURVE("rsdGPSTRAIL_ranch08_", false);
	ENABLE_CURVE("rsdGPSTRAIL_ranch08_1", false);
	STREAMING_REQUEST_ACTOR(976, true, false);
	Function_719(8192);
	bLocal_493 = Function_375("trafficDebugLite");
	bLocal_494 = Function_375("trafficForceCoach");
	if (bLocal_494)
	{
		Function_737(&Global_28842, 64);
	}
	Function_719(262144);
	if (Function_375("trafficSpew"))
	{
		Global_30842[43] = 1;
		Global_30842[12] = 1;
		Global_30842[13] = 1;
	}
	return;
}

void Function_787(int iParam0) //Position: 0x2B15F / 176479
{
	strcpy(iParam0 + 12, "LAW", 16);
	*iParam0 = 200415;
	iParam0->f_4 = 176546;
	iParam0->f_8 = 176525;
	iParam0->f_28 = 1;
	return;
}

void Function_788() //Position: 0x2B18D / 176525
{
	if (IS_LAYOUTREF_VALID(Global_26314))
	{
		DESTROY_LAYOUT(Global_26314);
	}
	return;
}

int Function_789() //Position: 0x2B1A2 / 176546
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	iLocal_8 = 0;
	Function_897(&uLocal_4, &bLocal_5, &bLocal_7, &bLocal_6, &Global_62999);
	Function_889();
	Function_888();
	if (Global_3378)
	{
		if (Global_3403)
		{
			Function_282(0);
		}
		Function_887(bLocal_5, bLocal_7);
	}
	if (Function_350(64))
	{
		Function_886(bLocal_5, bLocal_7, bLocal_6);
		Function_885(bLocal_5, bLocal_7);
		Function_552(64);
	}
	if (Function_350(512))
	{
		Function_884(bLocal_5, bLocal_7, bLocal_6);
		Function_885(bLocal_5, bLocal_7);
		Function_552(512);
	}
	if (Function_350(1024))
	{
		Function_883(bLocal_5, bLocal_7);
		Function_885(bLocal_5, bLocal_7);
		Function_552(1024);
		iLocal_8 = 0;
	}
	Function_857(uLocal_4, bLocal_5, Global_26315, bLocal_7);
	if (Function_842(bLocal_5, bLocal_7, bLocal_6))
	{
		iLocal_8 = 1;
	}
	if (Function_350(1) && Function_350(4096))
	{
		if (iLocal_8 && Function_521(1))
		{
			if (!Global_3403)
			{
				Function_282(1);
				Global_26401.f_2212 = Function_284(StackVal);
			}
		}
	}
	if (Function_350(2) && Function_350(8192))
	{
		Function_885(bLocal_5, bLocal_7);
	}
	if (Function_350(128))
	{
		Function_886(bLocal_5, bLocal_7, bLocal_6);
		Function_885(bLocal_5, bLocal_7);
		Function_830(bLocal_5, bLocal_6);
		Function_552(128);
	}
	if (GET_OBJECTSET_SIZE(bLocal_6) >= 25)
	{
		Function_830(bLocal_5, bLocal_6);
	}
	if (Function_521(1))
	{
		Function_824();
	}
	else if (Global_3403)
	{
		if (!IS_SCRIPT_VALID(Global_26316.f_60) && !IS_SCRIPT_VALID(Global_26316.f_64))
		{
			Function_282(0);
		}
	}
	if (!Function_350(0x1000000))
	{
		Function_274();
		*(&Global_26316 + 156) = { StackVal, StackVal, Function_274() };
	}
	else if (!STREAMING_ARE_BOUNDS_LOADED(*(&Global_26316 + 156), 1.0f))
	{
		if (StackVal > 1000.0f)
		{
			Function_274();
			*(&Global_26316 + 156) = { StackVal, StackVal, Function_274() };
		}
		else if (!STREAMING_ARE_BOUNDS_LOADED(StackVal, StackVal, (Global_26316.f_156 - 1000.0f), 1.0f))
		{
			Function_274();
			*(&Global_26316 + 156) = { StackVal, StackVal, Function_274() };
		}
	}
	if (IS_OBJECTSET_VALID(Global_62999))
	{
		if (!Global_3403)
		{
			if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_OBJECTSET(Global_62999), "untiedLawmanObject"))
			{
				if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_OBJECTSET(Global_62999), "untiedLawmanTime"))
				{
					if (GET_CURRENT_GAME_TIME() <= DECOR_GET_FLOAT(GET_OBJECT_FROM_OBJECTSET(Global_62999), "untiedLawmanTime"))
					{
						bVar0 = DECOR_GET_OBJECT(GET_OBJECT_FROM_OBJECTSET(Global_62999), "untiedLawmanObject");
						if (IS_OBJECT_VALID(bVar0))
						{
							if (GET_OBJECT_TYPE(bVar0) == 15)
							{
								bVar1 = GET_ACTOR_FROM_OBJECT(bVar0);
							}
							else if (GET_OBJECT_TYPE(bVar0) == 24)
							{
								bVar1 = GET_ACTOR_FROM_PERS_CHAR(GET_PERS_CHAR_FROM_OBJECT(bVar0));
							}
							if (IS_ACTOR_VALID(bVar1))
							{
								if (!IS_ACTOR_HOGTIED(bVar1))
								{
									Function_282(1);
									Global_26401.f_2212 = Function_284(StackVal);
								}
							}
						}
						DECOR_REMOVE(Global_62999, "untiedLawmanTime");
						DECOR_REMOVE(Global_62999, "untiedLawmanObject");
					}
				}
			}
		}
		else if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_OBJECTSET(Global_62999), "untiedLawmanObject"))
		{
			DECOR_REMOVE(Global_62999, "untiedLawmanObject");
			if (DECOR_CHECK_EXIST(GET_OBJECT_FROM_OBJECTSET(Global_62999), "untiedLawmanTime"))
			{
				DECOR_REMOVE(Global_62999, "untiedLawmanTime");
			}
		}
	}
	if (Function_823())
	{
		if (IS_EARLIER_THAN((*&Global_26316 + 88)[StackVal], false) || Function_350(0x1000000))
		{
			bVar2 = false;
			if (Function_1())
			{
				bVar2 = Function_616(131072, 1);
			}
			else
			{
				bVar2 = (*&Global_26401 + 36[12181][35])[StackVal] <= 20;
			}
			if ((StackVal && Function_284(((bVar2 && Function_350(32)) && Function_350(131072))) < 0) && !Function_350(0x1000000))
			{
				Function_821();
			}
			else if (StackVal && Function_284((((StackVal && (((*&Global_26316 + 72)[StackVal] != 3 && !Function_350(0x1000000)) || (Global_63399 != 16 || Global_63399 != 32) > (*&Global_26401 + 36[12181][35])[RAND_INT_RANGE(false, 10000)] * 500)) && Function_350(16)) && Function_350(65536))) < 150)
			{
				Function_817();
			}
			else if (Function_350(8) && Function_350(32768))
			{
				Function_807();
			}
			else
			{
				if (Function_350(0x1000000))
				{
					if (!IS_SCRIPT_VALID(Global_26316.f_60) && !IS_SCRIPT_VALID(Global_26316.f_64))
					{
						if (Global_3403)
						{
							Function_282(0);
						}
						Function_552(0x1000000);
					}
				}
				Function_806(StackVal, 0);
			}
		}
		if (!Function_350(0x1000000))
		{
			Function_796();
		}
	}
	else if (Function_350(0x1000000))
	{
		if (!IS_SCRIPT_VALID(Global_26316.f_60) && !IS_SCRIPT_VALID(Global_26316.f_64))
		{
			if (Global_3403)
			{
				Function_282(0);
			}
			Function_552(0x1000000);
		}
	}
	if (Function_350(2048))
	{
		Function_791();
	}
	Function_790();
	if (IS_ACTOR_VALID(Global_34573))
	{
		bVar3 = false;
		if (Function_1())
		{
			bVar3 = false;
		}
		else
		{
			bVar3 = (Global_26361.f_56 == 0.0f && (Global_26361.f_56 - GET_CURRENT_GAME_TIME()) < 30.0f);
		}
		if (Global_3403 || bVar3)
		{
			if (!AI_GLOBAL_GET_PERMANENT_DANGER(Global_34573))
			{
				AI_GLOBAL_SET_PERMANENT_DANGER(Global_34573, 1);
			}
		}
		else if (AI_GLOBAL_GET_PERMANENT_DANGER(Global_34573))
		{
			AI_GLOBAL_SET_PERMANENT_DANGER(Global_34573, 0);
		}
	}
	return 0;
}

void Function_790() //Position: 0x2B6E5 / 177893
{
	float fVar0;
	
	fVar0 = (GET_CURRENT_GAME_TIME() - Global_27771);
	Global_27770 = (Global_27770 - (fVar0 * 8.0f));
	if (Global_27770 > 0.0f)
	{
		Global_27770 = 0.0f;
	}
	Global_27771 = GET_CURRENT_GAME_TIME();
	return;
}

void Function_791() //Position: 0x2B715 / 177941
{
	bool bVar0;
	struct<29> Var1;
	
	if (Global_3380)
	{
		Function_552(2048);
		return;
	}
	if (!IS_ACTOR_VALID(Function_176()))
	{
		return;
	}
	if (!IS_ACTOR_ALIVE(Function_176()))
	{
		return;
	}
	Function_471(Global_26401.f_2216, 0, 0);
	bVar0 = Function_284(Global_26401.f_2216) < Function_174();
	if (bVar0)
	{
		Var1.f_20 = (Function_284(Global_26401.f_2216) - Function_174());
	}
	else
	{
		Var1.f_20 = 0;
	}
	if (Global_27772 == 0)
	{
		Var1 = Global_26316[Global_26401.f_2216];
		*(&Var1 + 4) = { StackVal, StackVal, *(&Global_26316 + 16[Global_26401.f_22163]) };
	}
	else
	{
		Var1 = Function_795(Global_27772);
		Function_794(Global_27772);
		*(&Var1 + 4) = { StackVal, StackVal, Function_794(Global_27772) };
	}
	bVar9 = false;
	if (Global_27772 == 0)
	{
		if (Var1 == Global_30640[0])
		{
			if (((Function_793(8) || Function_793(9)) || Function_793(23)) || Function_793(21))
			{
				bVar9 = true;
			}
		}
		else if (Var1 == Global_30717[0])
		{
			if ((Function_793(43) || Function_793(47)) || Function_793(42))
			{
				bVar9 = true;
			}
		}
	}
	if (bVar9)
	{
		Var1 = Global_30668[0];
		*(&Var1 + 4) = { -819,6454f, 93,80083f, 2436,405f };
	}
	Var1.f_16 = Global_26401.f_2216;
	Var1.f_24 = bVar0;
	Var1.f_28 = Var1.f_20;
	Global_26316.f_68 = 4;
	Global_26316.f_60 = LAUNCH_NEW_SCRIPT_WITH_ARGS("content/Ambient/CrimeResponse/event_player_in_jail", &Var1, 8, 0);
	bVar10 = Function_284(Global_26401.f_2216);
	Function_792(Global_26401.f_2216, bVar10);
	Global_13111 = 4294967295;
	Global_27772 = 0;
	if (IS_SCRIPT_VALID(Global_26316.f_60))
	{
		Function_552(2048);
		Global_3407 = 1;
		if (bVar0)
		{
			Function_293(Function_174(), 1);
			(*&Global_26401 + 16)[Global_26401.f_2216] = Var1.f_20;
		}
		else
		{
			Function_293(bVar10, 1);
			(*&Global_26401 + 16)[Global_26401.f_2216] = 0;
		}
	}
	return;
}

void Function_792(int iParam0, bool bParam1) //Position: 0x2B8F8 / 178424
{
	if (!Function_285(iParam0))
	{
		return;
	}
	if (!bParam1 < 0)
	{
	}
	if (bParam1 > Global_26401[iParam0])
	{
		Function_294(222, Global_26401[iParam0], 0);
		if (Function_175(222) <= 0)
		{
			Function_291(222, 0, 0);
		}
		Global_26401[iParam0] = 0;
		Function_291((*&Global_26401 + 2220)[iParam0], 0, 0);
	}
	else
	{
		Global_26401[iParam0] = (Global_26401[iParam0] - bParam1);
		Function_294((*&Global_26401 + 2220)[iParam0], bParam1, 0);
		Function_294(222, bParam1, 0);
	}
	return;
}

int Function_793(int iParam0) //Position: 0x2B981 / 178561
{
	if (Function_233(StackVal) == 0)
	{
		if (Function_232(&(Global_3422[iParam040])))
		{
			return 1;
		}
	}
	return 0;
}

vector3 Function_794(int iParam0) //Position: 0x2B9A7 / 178599
{
	switch (iParam0)
	{
		case 0x00000001:
			return -819,6454f, 93,80083f, 2436,405f;
			break;
		
		case 0x00000002:
			return -2080,289f, 16,962f, 2603,609f;
			break;
		
		case 0x00000003:
			return 772,1412f, 79,45659f, 1241,604f;
			break;
		
		case 0x00000004:
			return -2647,498f, 31,386f, 4247,398f;
			break;
		
		case 0x00000005:
			return -724,92f, 63,349f, 3297,469f;
			break;
		
		case 0x00000006:
			return -4355,349f, 30,16f, 4384,089f;
			break;
	}
	Function_274();
	return StackVal, StackVal, Function_274();
}

int Function_795(int iParam0) //Position: 0x2BA4D / 178765
{
	switch (iParam0)
	{
		case 0x00000001:
			return Global_30668[0];
			break;
		
		case 0x00000002:
			return Global_30640[0];
			break;
		
		case 0x00000003:
			return Global_30717[0];
			break;
		
		case 0x00000004:
			return Global_30693[0];
			break;
		
		case 0x00000005:
			return Global_30707[1];
			break;
		
		case 0x00000006:
			return Global_30685[0];
			break;
	}
	return 4294967294;
}

void Function_796() //Position: 0x2BABD / 178877
{
	bool bVar0;
	vector3 vVar1;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	
	if (IS_SCRIPT_VALID(Global_26391.f_32))
	{
		if (StackVal < (GET_CURRENT_GAME_TIME() + 120.0f))
		{
			Global_26391 = 0.0f;
			Global_26391.f_4 = 0.0f;
			Global_26391.f_24 = 0;
			TERMINATE_SCRIPT(Global_26391.f_32);
		}
	}
	else if (Global_26391 < 2.0f)
	{
		if (GET_OBJECTSET_SIZE(Global_26391.f_28) < 0 && GET_CURRENT_GAME_TIME() < Global_26391)
		{
			Global_26391.f_32 = Function_805();
			bVar0 = CREATE_CRIME_IN_LAYOUT(Global_26314);
			bVar4 = GET_INDEXED_OBJECT_IN_OBJECTSET(false, Global_26391.f_28);
			if (GET_OBJECT_TYPE(bVar4) == 15)
			{
				bVar5 = GET_ACTOR_FROM_OBJECT(bVar4);
			}
			else if (GET_OBJECT_TYPE(bVar4) == 24)
			{
				bVar5 = GET_ACTOR_FROM_PERS_CHAR(GET_PERS_CHAR_FROM_OBJECT(bVar4));
			}
			GET_OBJECT_POSITION(bVar5, &vVar1);
			SET_CRIME_POSITION(bVar0, vVar1);
			SET_CRIME_CRIMINAL(bVar0, bVar5);
			SET_CRIME_VICTIM(bVar0, Global_26391.f_20);
			bVar6 = Function_797(StackVal, StackVal, bVar0, Global_34574, 30.0f, 0, 0);
			if (IS_OBJECT_VALID(bVar6))
			{
				if (GET_OBJECT_TYPE(bVar6) == 15)
				{
					SAY_SINGLE_LINE_CONTEXT(GET_ACTOR_FROM_OBJECT(bVar6), 85, bVar5, 1, 1, 2, 4294967295, 4294967295, 0, 1);
				}
				else if (GET_OBJECT_TYPE(bVar6) == 24)
				{
					SAY_SINGLE_LINE_CONTEXT(GET_ACTOR_FROM_PERS_CHAR(GET_PERS_CHAR_FROM_OBJECT(bVar6)), 85, bVar5, 1, 1, 2, 4294967295, 4294967295, 0, 1);
				}
			}
			DESTROY_CRIME(bVar0);
		}
	}
	else if (IS_OBJECTSET_VALID(Global_26391.f_28))
	{
		if (GET_OBJECTSET_SIZE(Global_26391.f_28) >= 0)
		{
			bVar7 = false;
			while (bVar7 <= GET_OBJECTSET_SIZE(Global_26391.f_28))
			{
				if (IS_OBJECT_VALID(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar7, Global_26391.f_28)))
				{
					DEREFERENCE_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar7, Global_26391.f_28));
				}
				bVar7++;
			}
			Function_625(Global_26391.f_28);
		}
	}
	return;
}

var Function_797(bool bParam0, vector3 vParam1, float fParam4, bool bParam5, int iParam6) //Position: 0x2BC36 / 179254
{
	bool bVar0;
	
	if (fParam4 < 100.0f)
	{
		return "";
	}
	bVar0 = "";
	Function_804();
	if (IS_LAYOUTREF_VALID(GET_AMBIENT_LAYOUT()))
	{
		bVar0 = Function_798(StackVal, StackVal, StackVal, GET_AMBIENT_LAYOUT(), 15, bParam0, vParam1, fParam4, 0, iParam6, 0);
		if (IS_OBJECT_VALID(bVar0))
		{
			return bVar0;
		}
	}
	if (IS_LAYOUTREF_VALID(Global_6289))
	{
		bVar0 = Function_798(StackVal, StackVal, StackVal, Global_6289, 24, bParam0, vParam1, fParam4, 0, iParam6, 0);
		if (IS_OBJECT_VALID(bVar0))
		{
			return bVar0;
		}
	}
	if (IS_LAYOUTREF_VALID(Global_6288))
	{
		bVar0 = Function_798(StackVal, StackVal, StackVal, Global_6288, 24, bParam0, vParam1, fParam4, 0, iParam6, 0);
		if (IS_OBJECT_VALID(bVar0))
		{
			return bVar0;
		}
	}
	if (IS_LAYOUTREF_VALID(GET_GC_LAYOUT()))
	{
		bVar0 = Function_798(StackVal, StackVal, StackVal, GET_GC_LAYOUT(), 15, bParam0, vParam1, fParam4, 0, iParam6, 0);
		if (IS_OBJECT_VALID(bVar0))
		{
			return bVar0;
		}
	}
	if (IS_LAYOUTREF_VALID(Global_28841))
	{
		if (bParam5)
		{
			bVar0 = Function_798(StackVal, StackVal, StackVal, Global_28841, 15, bParam0, vParam1, fParam4, 1, iParam6, 0);
			if (IS_OBJECT_VALID(bVar0))
			{
				return bVar0;
			}
		}
	}
	if (IS_LAYOUTREF_VALID(Global_6290))
	{
		bVar0 = Function_798(StackVal, StackVal, StackVal, Global_6290, 15, bParam0, vParam1, fParam4, 0, iParam6, 0);
		if (IS_OBJECT_VALID(bVar0))
		{
			return bVar0;
		}
	}
	return Function_797(StackVal, StackVal, bParam0, vParam1, (fParam4 * 2.0f), bParam5, 0);
}

bool Function_798(bool bParam0, bool bParam1, int iParam2, bool bParam3, vector3 vParam4, float fParam7, bool bParam8, int iParam9, bool bParam10) //Position: 0x2BD90 / 179600
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	int iVar5;
	
	GET_CRIME_POSITION(bParam3, &vVar2);
	Function_803(&Global_26118);
	ITERATE_ON_OBJECT_TYPE(Global_26118, iParam2);
	if (bParam10 == "")
	{
	}
}

bool Function_799(bool bParam0, bool bParam1, int iParam2) //Position: 0x2BE7A / 179834
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	iParam2 = iParam2;
	if (IS_OBJECT_VALID(bParam0))
	{
		if (GET_OBJECT_TYPE(bParam0) == 15)
		{
			bVar0 = GET_ACTOR_FROM_OBJECT(bParam0);
		}
		else if (GET_OBJECT_TYPE(bParam0) == 24)
		{
			bVar0 = GET_ACTOR_FROM_PERS_CHAR(GET_PERS_CHAR_FROM_OBJECT(bParam0));
		}
		if (bParam1)
		{
			if (IS_ACTOR_RIDING_VEHICLE(bVar0))
			{
				bVar1 = false;
				bVar2 = GET_VEHICLE(bVar0);
				if (IS_ACTOR_VALID(bVar2))
				{
					bVar3 = GET_ACTOR_IN_VEHICLE_SEAT(bVar2, false);
					if (IS_ACTOR_VALID(bVar3) && bVar3 == GET_PLAYER_ACTOR(0))
					{
						bParam0 = GET_OBJECT_FROM_ACTOR(bVar3);
						bVar1 = true;
					}
				}
				if (!bVar1)
				{
					DECOR_SET_BOOL(bParam0, "witnessOutNow", true);
					MEMORY_PREFER_WALKING(bVar0, true);
				}
			}
		}
		if (!Function_801(bParam0) && !Function_800(bParam0))
		{
			if (IS_ACTOR_HOGTIED(bVar0))
			{
				DECOR_SET_BOOL(bParam0, "nnowitness", true);
			}
			else
			{
				if (SQUAD_IS_VALID(StackVal))
				{
					if (StackVal == Function_533(bVar0))
					{
						Global_28842.f_76 = GET_CURRENT_GAME_TIME();
					}
				}
				DECOR_SET_BOOL(bParam0, "witness", true);
				return bParam0;
			}
		}
	}
	return "";
}

bool Function_800(bool bParam0) //Position: 0x2BF7C / 180092
{
	bool bVar0;
	bool bVar1;
	
	if (IS_OBJECT_VALID(bParam0))
	{
		if (GET_OBJECT_TYPE(bParam0) == 15)
		{
			bVar0 = GET_ACTOR_FROM_OBJECT(bParam0);
		}
		else if (GET_OBJECT_TYPE(bParam0) == 24)
		{
			bVar0 = GET_ACTOR_FROM_PERS_CHAR(GET_PERS_CHAR_FROM_OBJECT(bParam0));
		}
		if (IS_ACTOR_VALID(bVar0))
		{
			bVar1 = GET_OBJECT_FROM_GRINGO(GET_CURRENT_GRINGO(bVar0));
			if (IS_OBJECT_VALID(bVar1))
			{
				if (STRING_CONTAINS_STRING(GET_OBJECT_MODEL_NAME(bVar1), "sleep"))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool Function_801(bool bParam0) //Position: 0x2BFE2 / 180194
{
	bool bVar0;
	
	if (GET_OBJECT_TYPE(bParam0) == 24)
	{
		bVar0 = GET_PERS_CHAR_FROM_OBJECT(bParam0);
		if (IS_PERS_CHAR_VALID(bVar0))
		{
			if (Global_29006 == Global_30668[0])
			{
				if (StackVal || StackVal != bVar0 != bVar0)
				{
					DECOR_SET_BOOL(bParam0, "nnowitness", true);
					return 1;
				}
			}
			if (Global_29006 == Global_30658[4])
			{
				if (StackVal == bVar0)
				{
					if (Function_530(&(Global_6537[12]), 1))
					{
						DECOR_SET_BOOL(bParam0, "nnowitness", true);
						return 1;
					}
				}
			}
			if (Global_29006 == Global_30685[0])
			{
				if (StackVal || StackVal != bVar0 != bVar0)
				{
					DECOR_SET_BOOL(bParam0, "nnowitness", true);
					return 1;
				}
			}
			if (Global_29006 == Global_30707[1])
			{
				if (StackVal == bVar0)
				{
					DECOR_SET_BOOL(bParam0, "nnowitness", true);
					return 1;
				}
			}
		}
	}
	return 0;
}

bool Function_802(bool bParam0, int iParam1, int iParam2, bool bParam3, vector3 vParam4, bool bParam7) //Position: 0x2C0EE / 180462
{
	bool bVar0;
	bool bVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	float fVar5;
	vector3 vVar6;
	vector3 vVar9;
	
	if (!IS_ITERATOR_VALID(bParam0))
	{
		LOG_ERROR("GET_FACTION_OBJECT_FROM_ITERATOR: Invalid iterator");
		return "";
	}
	if (!IS_FACTION_VALID(iParam1))
	{
		LOG_ERROR("GET_FACTION_OBJECT_FROM_ITERATOR: Invalid faction");
		return "";
	}
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		LOG_ERROR("GET_FACTION_OBJECT_FROM_ITERATOR: Invalid local player");
		return "";
	}
	bVar0 = "";
	bVar1 = "";
	fVar2 = 1,001638E+07.0f;
	fVar3 = 1,001638E+07.0f;
	GET_POSITION(GET_PLAYER_ACTOR(0), &vVar9);
	bVar4 = START_OBJECT_ITERATOR(bParam0);
	while (IS_OBJECT_VALID(bVar4))
	{
		switch (GET_OBJECT_TYPE(bVar4))
		{
			case 0x0000000F:
				if ((IS_ACTOR_HUMAN(GET_ACTOR_FROM_OBJECT(bVar4)) && GET_ACTOR_FACTION(GET_ACTOR_FROM_OBJECT(bVar4)) != iParam1) && IS_ACTOR_ALIVE(GET_ACTOR_FROM_OBJECT(bVar4)))
				{
					if (!bVar4 != iParam2)
					{
						if (!DECOR_CHECK_EXIST(bVar4, bParam3))
						{
							GET_OBJECT_POSITION(bVar4, &vVar6);
							fVar5 = (VDIST(vVar6, vParam4) - (VDIST(vVar6, vVar9) * 2.0f));
							if (bParam7 != "" || MEMORY_GET_IS_VISIBLE(GET_ACTOR_FROM_OBJECT(bVar4), bParam7))
							{
								if (fVar5 > fVar2)
								{
									fVar2 = fVar5;
									bVar0 = bVar4;
								}
							}
							else if (fVar5 > fVar3)
							{
								fVar3 = fVar5;
								bVar1 = bVar4;
							}
						}
					}
				}
				break;
			
			case 0x00000018:
				if (IS_PERS_CHAR_VALID(GET_PERS_CHAR_FROM_OBJECT(bVar4)) && IS_PERS_CHAR_ALIVE(GET_PERS_CHAR_FROM_OBJECT(bVar4)))
				{
					if (IS_ACTOR_VALID(GET_ACTOR_FROM_PERS_CHAR(GET_PERS_CHAR_FROM_OBJECT(bVar4))))
					{
						if (GET_ACTOR_FACTION(GET_ACTOR_FROM_PERS_CHAR(GET_PERS_CHAR_FROM_OBJECT(bVar4))) == iParam1)
						{
							if (!GET_OBJECT_FROM_ACTOR(GET_ACTOR_FROM_PERS_CHAR(GET_PERS_CHAR_FROM_OBJECT(bVar4))) != iParam2)
							{
								if (!DECOR_CHECK_EXIST(bVar4, bParam3) && !DECOR_CHECK_EXIST(GET_ACTOR_FROM_PERS_CHAR(GET_PERS_CHAR_FROM_OBJECT(bVar4)), bParam3))
								{
									GET_OBJECT_POSITION(bVar4, &vVar6);
									fVar5 = (VDIST(vVar6, vParam4) - (VDIST(vVar6, vVar9) * 2.0f));
									if (bParam7 != "" || MEMORY_GET_IS_VISIBLE(GET_ACTOR_FROM_PERS_CHAR(GET_PERS_CHAR_FROM_OBJECT(bVar4)), bParam7))
									{
										if (fVar5 > fVar2)
										{
											fVar2 = fVar5;
											bVar0 = bVar4;
										}
									}
									else if (fVar5 > fVar3)
									{
										fVar3 = fVar5;
										bVar1 = bVar4;
									}
								}
							}
						}
					}
				}
				break;
		}
		bVar4 = OBJECT_ITERATOR_NEXT(bParam0);
	}
	if (IS_OBJECT_VALID(bVar0))
	{
		return bVar0;
	}
	return bVar1;
}

int Function_803(bool bParam0) //Position: 0x2C374 / 181108
{
	if (IS_ITERATOR_VALID(*bParam0))
	{
		ITERATE_EVERYWHERE(*bParam0);
		ITERATE_ON_PARTIAL_NAME(*bParam0, Function_75());
		ITERATE_ON_PARTIAL_MODEL_NAME(*bParam0, Function_75());
		ITERATE_ON_OBJECT_TYPE(*bParam0, 4294967295);
		return 1;
	}
	return 0;
}

void Function_804() //Position: 0x2C3A5 / 181157
{
	bool bVar0;
	
	if (!IS_ITERATOR_VALID(Global_26118))
	{
		bVar0 = FIND_NAMED_LAYOUT("regions_layout");
		if (!IS_LAYOUTREF_VALID(bVar0))
		{
			LOG_ERROR("Attempting to create a new ambient iterator, but regions_layout is not valid. Bad things, man, bad things");
			return;
		}
		Global_26118 = CREATE_OBJECT_ITERATOR(bVar0);
	}
	Function_803(&Global_26118);
	ITERATE_IN_LAYOUT(Global_26118, GET_AMBIENT_LAYOUT());
	return;
}

var Function_805() //Position: 0x2C45C / 181340
{
	struct<73> Var0;
	
	Var0 = 10;
	Var0.f_44 = 0;
	Var0.f_52 = Global_26361;
	Var0.f_56 = StackVal;
	Var0.f_60 = Global_26361.f_12;
	Var0.f_64 = StackVal;
	Var0.f_72 = Global_26361.f_44;
	Var0.f_48 = "";
	return LAUNCH_NEW_SCRIPT_WITH_ARGS("content/Ambient/CrimeResponse/event_law_repsonse_ai", &Var0, 23, 0);
}

void Function_806(int iParam0, bool bParam1) //Position: 0x2C4DE / 181470
{
	bool bVar0;
	
	if (bParam1)
	{
		if (IS_EARLIER_THAN((*&Global_26316 + 88)[iParam0], false))
		{
			bVar0 = RAND_INT_RANGE(60, 180);
		}
		else
		{
			return;
		}
	}
	bVar0 = RAND_INT_RANGE(1800, 2400);
	if (Function_525() > 3)
	{
		bVar0 *= 2;
	}
	if (Function_1() && !bParam1)
	{
		Function_472(iParam0, 0, 0, 300, 0);
	}
	else
	{
		Function_472(iParam0, 0, 0, Function_239(bVar0), 0);
	}
	return;
}

void Function_807() //Position: 0x2C545 / 181573
{
	bool bVar0;
	
	if (!Global_29007 != 2)
	{
		Function_816();
		return;
	}
	if (Function_1())
	{
		if (Function_815(Global_29005) >= 16)
		{
			return;
		}
	}
	if (((Global_3382 || Global_3380) || Global_3385) || Global_3410)
	{
		if (!Function_350(0x1000000))
		{
			if (!Global_3380)
			{
				Function_814();
			}
			return;
		}
	}
	if (Global_3403 && !Function_350(0x1000000))
	{
		return;
	}
	if (Global_3391)
	{
		Function_816();
		return;
	}
	if (Function_345(&Global_63084))
	{
		Function_816();
		return;
	}
	if (GET_CURRENT_CAMERA_TYPE_FROM_CHANNEL(0) != 1)
	{
		return;
	}
	if (Function_522(12))
	{
		Function_816();
		return;
	}
	if (StackVal == 0)
	{
		if (Function_522(10))
		{
			Function_816();
			return;
		}
	}
	if (StackVal == 1)
	{
		if (Function_522(8))
		{
			Function_816();
			return;
		}
	}
	if (Function_350(0x1000000))
	{
		if (Function_284(StackVal) < 0)
		{
			Function_816();
			return;
		}
	}
	if (IS_SCRIPT_VALID(Global_26316.f_60))
	{
		Function_816();
		return;
	}
	bVar0 = StackVal;
	if (!Function_811((Function_813(bVar0, Function_284(bVar0)) * 2 + Function_812(Function_284(bVar0)))))
	{
		Function_816();
		return;
	}
	if (Function_284(bVar0) <= 150 || Function_350(0x1000000))
	{
		if (!Function_43(Global_76847, 65536))
		{
			Function_38(Global_34573, 65536, 2, 0);
		}
		Global_26316.f_60 = Function_808(bVar0);
		Function_311(257, 1, 0, 0);
		if (IS_SCRIPT_VALID(Global_26316.f_60))
		{
			Global_26316.f_68 = 1;
		}
		else if (!IS_SCRIPT_VALID(Global_26316.f_64))
		{
			if (Global_3403)
			{
				Function_282(0);
			}
			Function_552(0x1000000);
		}
	}
	else if (Function_284(bVar0) <= 150)
	{
	}
	return;
}

var Function_808(bool bParam0) //Position: 0x2C6D0 / 181968
{
	struct<89> Var0;
	
	Function_809(bParam0, 4294967295);
	Var0 = 10;
	if (!Function_350(0x1000000))
	{
		Function_283();
	}
	Var0.f_44 = Function_284(bParam0);
	Var0.f_64 = bParam0;
	Var0.f_48 = GET_PLAYER_ACTOR(0);
	Var0.f_52 = (*&Global_26316 + 104)[bParam0];
	Var0.f_88 = 0;
	return LAUNCH_NEW_SCRIPT_WITH_ARGS("content/Ambient/CrimeResponse/event_law_repsonse_posse", &Var0, 23, 0);
}

void Function_809(int iParam0, int iParam1) //Position: 0x2C75D / 182109
{
	(*&Global_26316 + 88)[iParam0] = Function_810();
	iParam1 = iParam1;
	return;
}

var Function_810() //Position: 0x2C773 / 182131
{
	return MAKE_TIME_OF_DAY_EX(false, false, 0, 1);
}

bool Function_811(int iParam0) //Position: 0x2C780 / 182144
{
	if ((GET_MAX_NUM_OBJECTS_OF_TYPE(15) - GET_NUM_OBJECTS_OF_TYPE(15)) > iParam0)
	{
		return 1;
	}
	return 0;
}

int Function_812(int iParam0) //Position: 0x2C799 / 182169
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

int Function_813(int iParam0, int iParam1) //Position: 0x2C7D6 / 182230
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

void Function_814() //Position: 0x2C825 / 182309
{
	bool bVar0;
	
	if (StackVal || StackVal != 0 != 1)
	{
		if (IS_EARLIER_THAN((*&Global_26316 + 88)[StackVal], false))
		{
			bVar0 = RAND_INT_RANGE(15, 30);
		}
		else
		{
			return;
		}
		if (Function_525() > 3)
		{
			bVar0 *= 2;
		}
		Function_472(StackVal, 0, 0, Function_239(bVar0), 0);
	}
	return;
}

int Function_815(bool bParam0) //Position: 0x2C879 / 182393
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	if (Function_149(bParam0))
	{
		bVar1 = false;
		while (bVar1 <= 16)
		{
			if (IS_SLOT_VALID(bVar1))
			{
				if (StackVal == bParam0)
				{
					bVar0 = (bVar0 + Global_76943[bVar196].f_116);
				}
			}
			bVar1++;
		}
	}
	return bVar0;
}

void Function_816() //Position: 0x2C8C5 / 182469
{
	if (Function_350(0x1000000))
	{
		if (!IS_SCRIPT_VALID(Global_26316.f_60) && !IS_SCRIPT_VALID(Global_26316.f_64))
		{
			if (Global_3403)
			{
				Function_282(0);
			}
			Function_552(0x1000000);
		}
	}
	return;
}

void Function_817() //Position: 0x2C8FE / 182526
{
	bool bVar0;
	
	if (!Global_29007 != 2)
	{
		return;
	}
	if (Function_1())
	{
		if (Function_815(Global_29005) >= 16)
		{
			return;
		}
	}
	if (((Global_3382 || Global_3380) || Global_3385) || Global_3410)
	{
		if (!Global_3380)
		{
			Function_814();
		}
		return;
	}
	if (Global_3403)
	{
		return;
	}
	if (Function_522(12))
	{
		return;
	}
	if (Global_3391)
	{
		return;
	}
	if (Function_345(&Global_63084))
	{
		return;
	}
	if (GET_CURRENT_CAMERA_TYPE_FROM_CHANNEL(0) != 1)
	{
		return;
	}
	if (IS_SCRIPT_VALID(Global_26316.f_60))
	{
		return;
	}
	bVar0 = StackVal;
	if (!Function_811((Function_820(Function_284(bVar0)) * 2 + Function_819(Function_284(bVar0)))))
	{
		return;
	}
	if (!Function_43(Global_76847, 262144))
	{
		Function_38(Global_34573, 262144, 2, 0);
	}
	Global_26316.f_60 = Function_818(bVar0);
	if (IS_SCRIPT_VALID(Global_26316.f_60))
	{
		Global_26316.f_68 = 3;
	}
	return;
}

var Function_818(int iParam0) //Position: 0x2C9CB / 182731
{
	struct<89> Var0;
	
	iParam0 = iParam0;
	Function_809(iParam0, 4294967295);
	Var0 = 10;
	if (!Function_350(0x1000000))
	{
		Function_283();
	}
	Var0.f_52 = Global_26361;
	Var0.f_60 = Global_26361.f_12;
	Var0.f_64 = StackVal;
	Var0.f_48 = GET_PLAYER_ACTOR(0);
	Var0.f_88 = 0;
	Var0.f_68 = 4;
	return LAUNCH_NEW_SCRIPT_WITH_ARGS("content/Ambient/CrimeResponse/event_law_repsonse_bounty", &Var0, 23, 0);
}

int Function_819(int iParam0) //Position: 0x2CA5F / 182879
{
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
	return 1;
}

int Function_820(bool bParam0) //Position: 0x2CA8F / 182927
{
	if (bParam0 <= 1700)
	{
		return 2;
	}
	if (bParam0 <= 3700)
	{
		return 3;
	}
	if (bParam0 <= 5000)
	{
		return 4;
	}
	if (bParam0 <= 7000)
	{
		return 5;
	}
	return 6;
	return 2;
}

void Function_821() //Position: 0x2CACC / 182988
{
	bool bVar0;
	
	if (Function_1())
	{
		if (Function_815(Global_29005) >= 16)
		{
			return;
		}
	}
	if (((Global_3382 || Global_3380) || Global_3385) || Global_3410)
	{
		if (!Global_3380)
		{
			Function_814();
		}
		return;
	}
	if (Global_3391)
	{
		return;
	}
	if (Function_345(&Global_63084))
	{
		return;
	}
	if (GET_CURRENT_CAMERA_TYPE_FROM_CHANNEL(0) != 1)
	{
		return;
	}
	if (Function_522(12))
	{
		return;
	}
	if (StackVal == 0)
	{
		if (Function_522(10))
		{
			return;
		}
	}
	if (StackVal == 1)
	{
		if (Function_522(8))
		{
			return;
		}
	}
	if (IS_SCRIPT_VALID(Global_26316.f_60))
	{
		return;
	}
	bVar0 = StackVal;
	if (!Function_811(Function_820(Function_284(bVar0)) * 2))
	{
		return;
	}
	if (Function_284(bVar0) >= 0)
	{
		if (!Function_43(Global_76847, 131072))
		{
			Function_38(Global_34573, 131072, 2, 0);
		}
		Global_26316.f_60 = Function_822(bVar0);
		Function_311(260, 1, 0, 0);
		if (IS_SCRIPT_VALID(Global_26316.f_60))
		{
			Global_26316.f_68 = 2;
		}
	}
	return;
}

var Function_822(int iParam0) //Position: 0x2CBB9 / 183225
{
	struct<89> Var0;
	
	Function_809(iParam0, 4294967295);
	Var0 = 10;
	if (!Function_350(0x1000000))
	{
		Function_283();
	}
	Var0.f_52 = Global_26361;
	Var0.f_60 = Global_26361.f_12;
	Var0.f_64 = StackVal;
	Var0.f_48 = GET_PLAYER_ACTOR(0);
	Var0.f_88 = 0;
	Var0.f_68 = 4;
	return LAUNCH_NEW_SCRIPT_WITH_ARGS("content/Ambient/CrimeResponse/event_law_repsonse_special", &Var0, 23, 0);
}

bool Function_823() //Position: 0x2CC4A / 183370
{
	if (Function_350(256) || Function_350(262144))
	{
		return 0;
	}
	if (Function_344(0, 0, 1, 1) || Function_523())
	{
		if (!Function_350(0x1000000))
		{
			return 0;
		}
	}
	return 1;
}

void Function_824() //Position: 0x2CC80 / 183424
{
	if (!Global_3403)
	{
		return;
	}
	if (IS_SCRIPT_VALID(Global_26316.f_60))
	{
		return;
	}
	if (Function_522(12))
	{
		return;
	}
	if (!Function_521(1))
	{
		return;
	}
	if (Function_350(0x1000000))
	{
		return;
	}
	if (Global_29007 == 2 && Global_29007 == 5)
	{
		Global_26316.f_60 = Function_828();
	}
	else if (GET_OBJECTSET_SIZE(Global_62999) < 0 && !Function_1())
	{
		Global_26316.f_60 = Function_827();
	}
	else if (Function_825() && !Function_1())
	{
		Global_26316.f_60 = Function_827();
	}
	else if (!Function_1())
	{
		if (!Global_3404)
		{
			Function_338(0x1000000);
			Function_274();
			*(&Global_26316 + 156) = { StackVal, StackVal, Function_274() };
		}
	}
	if (IS_SCRIPT_VALID(Global_26316.f_60))
	{
		Global_26316.f_68 = 0;
	}
	else if (!Function_350(0x1000000))
	{
		if (!IS_SCRIPT_VALID(Global_26316.f_60) && !IS_SCRIPT_VALID(Global_26316.f_64))
		{
			Function_282(0);
		}
	}
	return;
}

int Function_825() //Position: 0x2CD5C / 183644
{
	if (Function_826(GET_AMBIENT_LAYOUT()))
	{
		return 1;
	}
	if (Function_826(GET_GC_LAYOUT()))
	{
		return 1;
	}
	if (Function_826(Global_28841))
	{
		return 1;
	}
	if (Function_826(Global_6290))
	{
		return 1;
	}
	return 0;
}

bool Function_826(bool bParam0) //Position: 0x2CD8F / 183695
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = CREATE_OBJECT_ITERATOR(bParam0);
	ITERATE_IN_LAYOUT(bVar0, bParam0);
	ITERATE_ON_OBJECT_TYPE(bVar0, 15);
	bVar1 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar1))
	{
		bVar2 = GET_ACTOR_FROM_OBJECT(bVar1);
		if (IS_ACTOR_VALID(bVar2))
		{
			if ((GET_ACTOR_FACTION(bVar2) != Global_26361 && IS_ACTOR_ALIVE(bVar2)) && !IS_ACTOR_HOGTIED(bVar2))
			{
				DESTROY_ITERATOR(bVar0);
				return 1;
			}
		}
		bVar1 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	DESTROY_ITERATOR(bVar0);
	return 0;
}

var Function_827() //Position: 0x2CDF8 / 183800
{
	struct<73> Var0;
	
	Var0 = 10;
	Var0.f_44 = Function_284(StackVal);
	Var0.f_52 = Global_26361;
	Var0.f_56 = StackVal;
	Var0.f_60 = Global_26361.f_12;
	Var0.f_64 = StackVal;
	Var0.f_72 = Global_26361.f_44;
	Var0.f_48 = GET_PLAYER_ACTOR(0);
	return LAUNCH_NEW_SCRIPT_WITH_ARGS("content/Ambient/CrimeResponse/event_law_repsonse_wild", &Var0, 23, 0);
}

var Function_828() //Position: 0x2CE85 / 183941
{
	struct<73> Var0;
	
	Var0 = 10;
	Function_829(Global_26361.f_12);
	Var0.f_44 = Function_284(StackVal);
	Var0.f_52 = Global_26361;
	Var0.f_56 = StackVal;
	Var0.f_60 = Global_26361.f_12;
	Var0.f_64 = StackVal;
	Var0.f_72 = Global_26361.f_44;
	Var0.f_48 = GET_PLAYER_ACTOR(0);
	return LAUNCH_NEW_SCRIPT_WITH_ARGS("content/Ambient/CrimeResponse/event_law_repsonse_local", &Var0, 23, 0);
}

void Function_829(int iParam0) //Position: 0x2CF1B / 184091
{
	iParam0 = iParam0;
	return;
}

void Function_830(bool bParam0, bool bParam1) //Position: 0x2CF25 / 184101
{
	bool bVar0;
	bool bVar1;
	
	Function_841(bParam0, bParam1);
	bVar0 = START_OBJECT_ITERATOR(bParam0);
	while (IS_OBJECT_VALID(bVar0))
	{
		bVar1 = GET_CRIME_FROM_OBJECT(bVar0);
		if (!IS_CRIME_TALLIED(bVar1))
		{
			if (Function_840(bVar1))
			{
				Function_832(bVar1);
				Function_831(bVar1);
			}
		}
		bVar0 = OBJECT_ITERATOR_NEXT(bParam0);
	}
	return;
}

void Function_831(bool bParam0) //Position: 0x2CF6E / 184174
{
	bool bVar0;
	
	if (IS_OBJECTSET_VALID(GET_CRIME_OBJECTSET(bParam0)))
	{
		bVar0 = false;
		while (bVar0 <= GET_OBJECTSET_SIZE(GET_CRIME_OBJECTSET(bParam0)))
		{
			DESTROY_OBJECT(GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, GET_CRIME_OBJECTSET(bParam0)));
			bVar0++;
		}
		DESTROY_OBJECTSET(GET_CRIME_OBJECTSET(bParam0));
	}
	DESTROY_OBJECT(GET_OBJECT_FROM_CRIME(bParam0));
	return;
}

int Function_832(bool bParam0) //Position: 0x2CFB5 / 184245
{
	int iVar0;
	int iVar1;
	
	if (!IS_CRIME_VALID(bParam0))
	{
		LOG_ERROR("Attempting to tally bounty for an invalid crime");
		return 0;
	}
	if (IS_CRIME_TALLIED(bParam0))
	{
		LOG_ERROR("Attempting to tally bounty for a crime that has already been tallied");
		return 0;
	}
	if (!Function_839(GET_CRIME_TYPE(bParam0)))
	{
		LOG_ERROR("Attempting to tally bounty for a crime that has an invalid type");
		return 0;
	}
	iVar0 = GET_CRIME_FACTION(bParam0);
	if (!Function_837())
	{
		return 1;
	}
	Function_474(iVar0, Function_836(bParam0));
	(*&Global_26401 + 36[iVar0181][GET_CRIME_TYPE(bParam0)5])[GET_CRIME_WITNESSED(bParam0)]++;
	if (GET_CRIME_WITNESSED(bParam0) == 3)
	{
		iVar1 = Function_835(GET_CRIME_TYPE(bParam0));
		if (iVar1 != 4294967295)
		{
			Function_311(iVar1, 1, 0, 0);
		}
	}
	if (Function_284(iVar0) >= Function_175(252))
	{
		Function_291(252, Function_284(iVar0), 0);
	}
	if (IS_SCRIPT_VALID(Global_26316.f_60) && Global_26316.f_68 != 2)
	{
		Function_311(261, 1, 0, 0);
	}
	SET_CRIME_TALLIED(bParam0, 1);
	Function_338(0x20000000);
	Function_833(bParam0);
	return 1;
}

void Function_833(bool bParam0) //Position: 0x2D158 / 184664
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	char* cVar5[64];
	
	iVar0 = GET_CRIME_TYPE(bParam0);
	if (iVar0 != 0)
	{
		bVar1 = false;
		if (Function_834(iVar0))
		{
			bVar2 = GET_CRIME_VICTIM(bParam0);
			if (IS_OBJECT_VALID(bVar2))
			{
				iVar3 = GET_OBJECT_TYPE(bVar2);
				if (iVar3 == 15)
				{
					bVar4 = GET_ACTOR_FROM_OBJECT(bVar2);
				}
				else if (iVar3 == 24)
				{
					bVar4 = GET_ACTOR_FROM_PERS_CHAR(GET_PERS_CHAR_FROM_OBJECT(bVar2));
				}
				if (IS_ACTOR_VALID(bVar4))
				{
					strcpy(&cVar5, UI_GET_STRING(&Global_26998[iVar018] + 4), 64);
					stradd(&cVar5, "", 64);
					stradd(&cVar5, UI_GET_STRING(GET_ACTOR_ENUM_STRING(bVar4)), 64);
					Global_13095 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar5 };
					bVar1 = true;
					Global_27760 = 1;
				}
			}
		}
		if (!bVar1)
		{
			memcpy(&Global_13095, StackVal, StackVal, StackVal, *(&Global_26998[iVar018] + 4), 16);
			Global_27760 = 0;
		}
		Global_27765 = (GET_CURRENT_GAME_TIME() + 12.0f);
	}
	return;
}

bool Function_834(int iParam0) //Position: 0x2D214 / 184852
{
	if ((iParam0 != 11 || iParam0 != 6) || iParam0 != 21)
	{
		return 1;
	}
	return 0;
}

int Function_835(int iParam0) //Position: 0x2D230 / 184880
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

bool Function_836(bool bParam0) //Position: 0x2D3B7 / 185271
{
	struct<57> Var0;
	
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Global_26998[GET_CRIME_TYPE(bParam0)18] };
	if (Var0.f_20 != 2 || (Var0.f_20 != 3 && Var0.f_56 < 0))
	{
		if (Function_525() == 5)
		{
			return CEIL((IntToFloat((Var0.f_24 * GET_CRIME_COUNTER(bParam0))) / 2.0f));
		}
		return (Var0.f_24 * GET_CRIME_COUNTER(bParam0));
	}
	if (Function_525() == 5)
	{
		return CEIL((IntToFloat(Var0.f_24) / 2.0f));
	}
	return Var0.f_24;
}

bool Function_837() //Position: 0x2D41F / 185375
{
	return Function_838(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Global_26361);
}

float Function_838(vector3 vParam0, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14) //Position: 0x2D42E / 185390
{
	if (Function_350(256))
	{
		return 0;
	}
	if (Function_350(262144))
	{
		return 0;
	}
	if (Function_523())
	{
		return 0;
	}
	if (Function_522(12))
	{
		return 0;
	}
	if (vParam0.z >= 4294967295 || vParam0.z <= 2)
	{
		return 0;
	}
	return 1;
}

bool Function_839(int iParam0) //Position: 0x2D47C / 185468
{
	if (iParam0 > 0 || iParam0 < 35)
	{
		return 0;
	}
	return 1;
}

bool Function_840(bool bParam0) //Position: 0x2D492 / 185490
{
	if (!IS_CRIME_VALID(bParam0))
	{
		LOG_ERROR("Attempting to tally bounty for an invalid crime");
		return 0;
	}
	if (IS_CRIME_TALLIED(bParam0))
	{
		LOG_ERROR("Attempting to tally bounty for a crime that has already been tallied");
		return 1;
	}
	if (!Function_839(GET_CRIME_TYPE(bParam0)))
	{
		LOG_ERROR("Attempting to tally bounty for a crime that has an invalid type");
		return 0;
	}
	if (!Function_837())
	{
		return 1;
	}
	SET_CRIME_TALLIED(bParam0, 1);
	strcpy(&Global_13095, "", 64);
	return 1;
}

void Function_841(bool bParam0, bool bParam1) //Position: 0x2D597 / 185751
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

bool Function_842(bool bParam0, bool bParam1, int iParam2) //Position: 0x2D5C6 / 185798
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	if (!Global_30900[0])
	{
	}
	if (GET_OBJECTSET_SIZE(bParam1) == 0)
	{
		return 0;
	}
	iVar0 = 0;
	Function_841(bParam0, bParam1);
	bVar4 = START_OBJECT_ITERATOR(bParam0);
	while (IS_OBJECT_VALID(bVar4))
	{
		bVar5 = false;
		bVar3 = GET_CRIME_FROM_OBJECT(bVar4);
		if (Function_856(bVar3))
		{
			iVar2++;
		}
		if (Function_846(bVar3))
		{
			if (GET_CRIME_WORLD_REGION(bVar3) == Global_26361.f_12)
			{
				bVar5 = true;
			}
		}
		if (IS_CRIME_VALID(bVar3))
		{
			iVar1 = (iVar1 + GET_OBJECTSET_SIZE(GET_CRIME_OBJECTSET(bVar3)));
			if ((!IS_CRIME_IN_PROGRESS(bVar3) && Function_845(bVar3)) && (IS_CRIME_TALLIED(bVar3) || (!Global_3403 && !Global_3404)))
			{
				bVar5 = false;
				Function_831(bVar3);
			}
			else if (bVar5)
			{
				iVar0 = 1;
			}
			Function_844(bVar3);
			Function_843(bVar3);
		}
		bVar4 = OBJECT_ITERATOR_NEXT(bParam0);
	}
	if (!Global_30900[0])
	{
	}
	return iVar0;
}

void Function_843(bool bParam0) //Position: 0x2D691 / 186001
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	
	if (!Global_30900[0])
	{
		return;
	}
	switch (GET_CRIME_TYPE(bParam0))
	{
		case 0x00000001:
		case 0x00000002:
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
			vVar0 = { 0,25f, 0,5f, 0,25f };
			break;
		
		case 0x00000006:
		case 0x00000007:
		case 0x00000008:
		case 0x00000009:
			vVar0 = { 1.0f, 0,5f, 0.0f };
			break;
		
		case 0x0000000B:
		case 0x0000000C:
		case 0x0000000D:
		case 0x0000000E:
			vVar0 = { 1.0f, 0,25f, 0,25f };
			break;
		
		case 0x00000011:
		case 0x00000014:
		case 0x00000015:
		case 0x00000016:
		case 0x00000019:
		case 0x0000001B:
		case 0x0000001E:
		case 0x00000020:
		case 0x00000023:
			vVar0 = { 0,25f, 0,5f, 0,25f };
			break;
		
		default:
			vVar0 = { 0.0f, 0.0f, 0.0f };
			break;
	}
	GET_CRIME_POSITION(bParam0, &vVar3);
	vVar6 = { StackVal, StackVal, Vector(vVar3, StackVal, StackVal) + Vector(0.0f, 2.0f, 0.0f) };
	return;
}

void Function_844(bool bParam0) //Position: 0x2D79A / 186266
{
	vector3 vVar0;
	var uVar3;
	
	if (!Global_30900[0])
	{
		return;
	}
	switch (GET_CRIME_WITNESSED(bParam0))
	{
		case 0x00000001:
			vVar0 = { 0,25f, 0,5f, 0,25f };
			break;
		
		case 0x00000002:
			vVar0 = { 1.0f, 0,5f, 0.0f };
			break;
		
		case 0x00000003:
			vVar0 = { 1.0f, 0,25f, 0,25f };
			break;
		
		default:
			vVar0 = { 0.0f, 0.0f, 0.0f };
			break;
	}
	GET_CRIME_POSITION(bParam0, &uVar3);
	return;
}

bool Function_845(bool bParam0) //Position: 0x2D80F / 186383
{
	if (!IS_CRIME_VALID(bParam0))
	{
		return 0;
	}
	if (GET_CRIME_END_TIMESTAMP(bParam0) + Global_26998[GET_CRIME_TYPE(bParam0)18].f_32) > GET_CURRENT_GAME_TIME()
	{
		return 1;
	}
	return 0;
}

bool Function_846(bool bParam0) //Position: 0x2D83C / 186428
{
	bool bVar0;
	bool bVar1;
	
	if (!IS_CRIME_VALID(bParam0))
	{
		return 0;
	}
	bVar0 = GET_CRIME_WITNESSED(bParam0);
	if (!bVar0 != 3)
	{
		bVar1 = Function_854(bParam0, bVar0, 0);
		if (bVar1 >= bVar0)
		{
			if (IS_CRIME_IN_PROGRESS(bParam0) || !Function_845(bParam0))
			{
				SET_CRIME_WITNESSED(bParam0, bVar1);
				bVar0 = bVar1;
				if (bVar1 == 3)
				{
					Function_853();
				}
			}
		}
		if (((((GET_CRIME_WITNESSED(bParam0) != 2 && !IS_SCRIPT_VALID(Global_26316.f_64)) && Function_521(1)) && !Global_3403) && (Global_26361.f_48 > Global_26361.f_52 || Global_26361.f_56 > GET_CURRENT_GAME_TIME())) && Global_26998[GET_CRIME_TYPE(bParam0)18].f_44)
		{
			Global_26316.f_64 = Function_847(bParam0, 0, 0, 0);
		}
		else if (!GET_CRIME_WITNESSED(bParam0) != 2)
		{
		}
		else if (IS_SCRIPT_VALID(Global_26316.f_64))
		{
		}
		else if (!Function_521(1))
		{
		}
		else if (Global_3403)
		{
			SET_CRIME_WITNESSED(bParam0, 3);
			Function_853();
		}
		else if (Global_26361.f_48 <= Global_26361.f_52 && Global_26361.f_56 < GET_CURRENT_GAME_TIME())
		{
		}
		else if (!Global_26998[GET_CRIME_TYPE(bParam0)18].f_44)
		{
		}
	}
	else
	{
		return 1;
	}
	if (GET_CRIME_WITNESSED(bParam0) == 3)
	{
		return 1;
	}
	return 0;
}

var Function_847(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x2D959 / 186713
{
	struct<25> Var0;
	
	bVar7 = "";
	Var0 = bParam0;
	Var0.f_12 = Global_26361;
	Var0.f_16 = StackVal;
	Var0.f_24 = Global_26361.f_12;
	if (Function_350(0x8000000))
	{
		return "";
	}
	if (Function_88() == 0)
	{
		if (GET_CRIME_TYPE(bParam0) == 11 && GET_CRIME_TYPE(bParam0) == 12)
		{
			return "";
		}
	}
	bVar14 = "";
	if (bParam2)
	{
		if (GET_CRIME_TYPE(bParam0) != 32)
		{
			bVar14 = GET_CRIME_VICTIM(bParam0);
			if (IS_OBJECT_VALID(bVar14))
			{
				if (GET_OBJECT_TYPE(bVar14) == 15)
				{
					bVar15 = GET_ACTOR_FROM_OBJECT(bVar14);
					if (IS_ACTOR_VALID(bVar15))
					{
						bVar16 = GET_MOST_RECENT_RIDER(bVar15);
						if (IS_ACTOR_VALID(bVar16))
						{
							if (bVar16 != Function_176())
							{
								bVar7 = GET_OBJECT_FROM_ACTOR(bVar16);
							}
						}
						else
						{
							bVar16 = GET_ACTOR_DRAFTED_TO(bVar15);
							if (!IS_ACTOR_VALID(bVar16))
							{
								if (!IS_ACTOR_ALIVE(bVar15))
								{
									bVar16 = Function_851(bVar15);
								}
							}
							if (IS_ACTOR_VALID(bVar16))
							{
								bVar14 = GET_OBJECT_FROM_ACTOR(bVar16);
								bParam3 = true;
								bParam2 = false;
							}
							else
							{
								Function_850(bParam0);
								if (Global_27770 > 600.0f)
								{
									return "";
								}
							}
						}
					}
				}
			}
		}
		Function_850(bParam0);
		if (Global_27770 > 600.0f)
		{
			return "";
		}
	}
	if (bParam3)
	{
		if (!IS_OBJECT_VALID(bVar14))
		{
			bVar14 = GET_CRIME_VICTIM(bParam0);
		}
		if (IS_OBJECT_VALID(bVar14))
		{
			if (GET_OBJECT_TYPE(bVar14) == 15)
			{
				bVar17 = GET_ACTOR_FROM_OBJECT(bVar14);
				if (IS_ACTOR_VALID(bVar17))
				{
					iVar18 = (GET_NUM_OCCUPIED_SEATS(bVar17) + GET_NUM_AVAILABLE_SEATS(bVar17));
					bVar19 = false;
					while (bVar19 <= iVar18)
					{
						if (!IS_OBJECT_VALID(bVar7))
						{
							bVar20 = GET_ACTOR_IN_VEHICLE_SEAT(bVar17, bVar19);
							if (IS_ACTOR_VALID(bVar20))
							{
								if (bVar20 != Function_176())
								{
									bVar7 = GET_OBJECT_FROM_ACTOR(bVar20);
								}
							}
						}
						bVar19++;
					}
					if (!IS_OBJECT_VALID(bVar7))
					{
						Function_850(bParam0);
						if (Global_27770 > 600.0f)
						{
							return "";
						}
					}
				}
			}
		}
	}
	if (IS_OBJECT_VALID(bVar7))
	{
		bVar7 = Function_799(bVar7, 1, 0);
	}
	if (IS_ITERATOR_VALID(Global_26361.f_20))
	{
		ITERATE_EVERYWHERE(Global_26361.f_20);
		ITERATE_ON_OBJECT_TYPE(Global_26361.f_20, 8);
		ITERATE_ON_PARTIAL_NAME(Global_26361.f_20, "report_crime");
		GET_CRIME_POSITION(bParam0, &vVar8);
		Var0.f_8 = Function_849(StackVal, StackVal, Global_26361.f_20, vVar8, 1.0f);
	}
	if (IS_OBJECT_VALID(StackVal))
	{
		GET_OBJECT_POSITION(StackVal, &vVar11);
	}
	if (!IS_OBJECT_VALID(bVar7))
	{
		if (!bParam1)
		{
			Var0.f_4 = Function_797(StackVal, StackVal, bParam0, vVar11, 10.0f, 1, 0);
		}
		else
		{
			Var0.f_4 = Function_848(bParam0);
			if (!IS_OBJECT_VALID(StackVal))
			{
				Function_850(bParam0);
				if (Global_27770 > 600.0f)
				{
					return "";
				}
				Var0.f_4 = Function_797(StackVal, StackVal, bParam0, vVar11, 10.0f, 1, 0);
			}
		}
	}
	else
	{
		Var0.f_4 = bVar7;
	}
	if (!IS_OBJECT_VALID(StackVal))
	{
		return "";
	}
	if (Global_26361.f_56 > GET_CURRENT_GAME_TIME() && Global_26361.f_48 <= Global_26361.f_52)
	{
		Global_26361.f_48 = 0;
		Global_26361.f_56 = 0.0f;
	}
	Global_27770 = 0.0f;
	Global_26361.f_48++;
	return LAUNCH_NEW_SCRIPT_WITH_ARGS("content/Ambient/CrimeResponse/event_law_report_crime", &Var0, 7, 0);
}

var Function_848(bool bParam0) //Position: 0x2DC77 / 187511
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = "";
	bVar1 = "";
	Function_804();
	bVar2 = GET_CRIME_VICTIM(bParam0);
	if (IS_OBJECT_VALID(bVar2))
	{
		if (GET_OBJECT_TYPE(bVar2) != 9 || GET_OBJECT_TYPE(bVar2) != 10)
		{
			bVar1 = GET_VOLUME_FROM_OBJECT(bVar2);
		}
	}
	if (!IS_VOLUME_VALID(bVar1))
	{
		return "";
	}
	Function_274();
	bVar0 = Function_798(StackVal, StackVal, StackVal, GET_AMBIENT_LAYOUT(), 15, bParam0, Function_274(), 9999.0f, 0, 0, bVar1);
	if (IS_OBJECT_VALID(bVar0))
	{
		return bVar0;
	}
	Function_274();
	bVar0 = Function_798(StackVal, StackVal, StackVal, Global_6289, 24, bParam0, Function_274(), 9999.0f, 0, 0, bVar1);
	if (IS_OBJECT_VALID(bVar0))
	{
		return bVar0;
	}
	return "";
}

var Function_849(bool bParam0, vector3 vParam1, float fParam4) //Position: 0x2DD10 / 187664
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

void Function_850(bool bParam0) //Position: 0x2DD8D / 187789
{
	switch (GET_CRIME_TYPE(bParam0))
	{
		case 0x0000000A:
		case 0x00000008:
		case 0x00000009:
		case 0x00000020:
			Global_27770 = (Global_27770 + 100.0f);
			break;
		
		case 0x0000000F:
		case 0x0000000D:
		case 0x0000000E:
			Global_27770 = (Global_27770 + 300.0f);
			break;
	}
	return;
}

bool Function_851(bool bParam0) //Position: 0x2DDE5 / 187877
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		if (!IS_ACTOR_ALIVE(bParam0))
		{
			vVar0 = { -3.0f, 0.0f, 0.0f };
			GET_ACTOR_OFFSET_WORLD_COORDS(bParam0, &vVar0, &vVar3);
			return Function_852(StackVal, StackVal, vVar3);
		}
	}
	return "";
}

var Function_852(vector3 vParam0) //Position: 0x2DE1B / 187931
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar2 = CREATE_OBJECT_ITERATOR(Global_28841);
	ITERATE_IN_LAYOUT(bVar2, Global_28841);
	ITERATE_ON_OBJECT_TYPE(bVar2, 15);
	bVar0 = START_OBJECT_ITERATOR(bVar2);
	while (IS_OBJECT_VALID(bVar0))
	{
		bVar1 = GET_ACTOR_FROM_OBJECT(bVar0);
		if (IS_ACTOR_VALID(bVar1))
		{
			if (IS_ACTOR_DRAFT_VEHICLE(bVar1))
			{
				if (GET_NUM_DRAFT_POSITIONS(bVar1) >= GET_NUM_DRAFTED_ACTORS(bVar1))
				{
					Function_96(bVar1);
					if (VDIST(vParam0, Function_96(bVar1)) >= 5.0f)
					{
						DESTROY_ITERATOR(bVar2);
						return bVar1;
					}
				}
			}
		}
		bVar0 = OBJECT_ITERATOR_NEXT(bVar2);
	}
	DESTROY_ITERATOR(bVar2);
	return "";
}

void Function_853() //Position: 0x2DE95 / 188053
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	bVar0 = CREATE_OBJECT_ITERATOR(Global_26314);
	bVar1 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(Global_26314, "CurrentCrimes"));
	Function_841(bVar0, bVar1);
	bVar2 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar2))
	{
		bVar3 = GET_CRIME_FROM_OBJECT(bVar2);
		if (IS_CRIME_VALID(bVar3))
		{
			SET_CRIME_WITNESSED(bVar3, 3);
		}
		bVar2 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	DESTROY_ITERATOR(bVar0);
	return;
}

int Function_854(bool bParam0, int iParam1, bool bParam2) //Position: 0x2DEF8 / 188152
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	if (!bParam2)
	{
		bVar1 = GET_CRIME_VICTIM(bParam0);
		if (!IS_OBJECT_VALID(bVar1))
		{
			bVar1 = GET_OBJECT_FROM_CRIME(bParam0);
		}
	}
	bVar0 = GET_OBJECT_FROM_ACTOR(GET_CRIME_CRIMINAL(bParam0));
	if (Function_1())
	{
		return 3;
	}
	switch (iParam1)
	{
		case 0x00000002:
			if (bVar1 != "")
			{
				iVar2 = 1;
				if (GET_CRIME_TYPE(bParam0) == 30)
				{
					iVar2 = 0;
				}
				if (Function_855(Global_26361, bVar1, iVar2))
				{
					return 3;
				}
			}
			if (bVar0 != "")
			{
				if (Function_855(Global_26361, bVar0, 1))
				{
					return 3;
				}
			}
			break;
		
		case 0x00000001:
			if (bVar1 != "")
			{
				if (Function_855(StackVal, bVar1, 1))
				{
					return 2;
				}
			}
			if (bVar0 != "")
			{
				if (Function_855(StackVal, bVar0, 1))
				{
					return 2;
				}
			}
			break;
		
		default:
			break;
	}
	return 1;
}

bool Function_855(int iParam0, bool bParam1, bool bParam2) //Position: 0x2DFB3 / 188339
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
		Function_803(&Global_26118);
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
		Function_803(&Global_26118);
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

bool Function_856(bool bParam0) //Position: 0x2E126 / 188710
{
	if (!IS_CRIME_VALID(bParam0))
	{
		return 0;
	}
	if (!IS_CRIME_IN_PROGRESS(bParam0))
	{
		return 0;
	}
	switch (Global_26998[GET_CRIME_TYPE(bParam0)18].f_20)
	{
		case 0x00000000:
			return 0;
			break;
		
		case 0x00000002:
		case 0x00000003:
			if (GET_CRIME_END_TIMESTAMP(bParam0) + Global_26998[GET_CRIME_TYPE(bParam0)18].f_68) > GET_CURRENT_GAME_TIME()
			{
				SET_CRIME_IN_PROGRESS(bParam0, 0);
				return 0;
			}
			break;
		
		case 0x00000004:
			if (GET_CRIME_BEGIN_TIMESTAMP(bParam0) + Global_26998[GET_CRIME_TYPE(bParam0)18].f_60) > GET_CURRENT_GAME_TIME()
			{
				SET_CRIME_END_TIMESTAMP(bParam0, GET_CURRENT_GAME_TIME());
				SET_CRIME_IN_PROGRESS(bParam0, 0);
				return 0;
			}
			switch (GET_CRIME_TYPE(bParam0))
			{
				case 0x00000011:
					if (!GET_MOUNT(GET_CRIME_CRIMINAL(bParam0)) != GET_ACTOR_FROM_OBJECT(GET_CRIME_VICTIM(bParam0)))
					{
						Function_831(bParam0);
						return 1;
					}
					break;
				
				default:
					break;
			}
			break;
		
		default:
			return 0;
			break;
	}
	return 1;
}

void Function_857(bool bParam0, var uParam1, bool bParam2, var uParam3) //Position: 0x2E1FB / 188923
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	int iVar7;
	
	if (GET_OBJECTSET_SIZE(bParam2) == 0)
	{
		return;
	}
	bVar2 = false;
	Function_882(bParam0, bParam2);
	bVar4 = START_OBJECT_ITERATOR(bParam0);
	while (IS_OBJECT_VALID(bVar4))
	{
		bVar5 = GET_EVENT_FROM_OBJECT(bVar4);
		bVar1 = GET_EVENT_PERPETRATOR(bVar5);
		if (DECOR_CHECK_EXIST(bVar4, "Perpetrator"))
		{
			bVar1 = DECOR_GET_OBJECT(bVar4, "Perpetrator");
			if (!IS_OBJECT_VALID(bVar1))
			{
				bVar1 = GET_EVENT_PERPETRATOR(bVar5);
			}
		}
		if (GET_OBJECT_TYPE(bVar1) == 15)
		{
			bVar0 = GET_ACTOR_FROM_OBJECT(bVar1);
		}
		else if (GET_OBJECT_TYPE(bVar1) == 24)
		{
			bVar0 = GET_ACTOR_FROM_PERS_CHAR(GET_PERS_CHAR_FROM_OBJECT(bVar1));
		}
		if (!bVar0 != Function_176())
		{
			Function_879(bVar5);
		}
		else
		{
			bVar6 = Function_877(bVar5, uParam1, bParam2, uParam3);
			if (!IS_CRIME_VALID(bVar6))
			{
				bVar6 = Function_863(bVar5, bParam2, uParam3, &bVar2);
				if (IS_CRIME_VALID(bVar6))
				{
					if (GET_CRIME_WITNESSED(bVar6) == 1)
					{
						if (Function_854(bVar6, 1, 0) == 2)
						{
							SET_CRIME_WITNESSED(bVar6, 2);
						}
					}
					if (Global_29007 == 3 && Global_29007 == 4)
					{
						if (!Global_3403 && !Global_3404)
						{
							if (GET_CRIME_WITNESSED(bVar6) == 3)
							{
								iVar7 = GET_CRIME_TYPE(bVar6);
								if (iVar7 == 12)
								{
									if (!Function_862(bVar6, 30.0f) && !Function_861(bVar6, 30.0f))
									{
										if (!Function_854(bVar6, 2, 0) != 3)
										{
											if (Function_854(bVar6, 1, 0) == 2)
											{
												SET_CRIME_WITNESSED(bVar6, 2);
											}
											else
											{
												SET_CRIME_WITNESSED(bVar6, true);
											}
										}
									}
								}
							}
						}
					}
					if ((((GET_CRIME_WITNESSED(bVar6) != 2 && !IS_SCRIPT_VALID(Global_26316.f_64)) && Function_521(1)) && !Global_3403) && (Global_26361.f_48 > Global_26361.f_52 || Global_26361.f_56 > GET_CURRENT_GAME_TIME()))
					{
						if (Global_26998[GET_CRIME_TYPE(bVar6)18].f_44)
						{
							Global_26316.f_64 = Function_847(bVar6, 0, 0, 0);
						}
						else if (Function_860(bVar6))
						{
							Global_26316.f_64 = Function_847(bVar6, 1, 0, 0);
						}
						else if (Function_859(bVar6))
						{
							Global_26316.f_64 = Function_847(bVar6, 0, 1, 0);
						}
						else if (Function_858(bVar6))
						{
							Global_26316.f_64 = Function_847(bVar6, 0, 0, 1);
						}
					}
				}
				else
				{
					bVar3 = bVar4;
				}
			}
		}
		bVar4 = OBJECT_ITERATOR_NEXT(bParam0);
		if (IS_OBJECT_VALID(bVar3))
		{
			DESTROY_OBJECT(bVar3);
		}
	}
	CLEAN_OBJECTSET(bParam2);
	if (bVar2)
	{
		Function_338(8388608);
	}
}

bool Function_858(bool bParam0) //Position: 0x2E429 / 189481
{
	if (GET_CRIME_TYPE(bParam0) != 2 || GET_CRIME_TYPE(bParam0) != 4)
	{
		return 1;
	}
	return 0;
}

bool Function_859(bool bParam0) //Position: 0x2E444 / 189508
{
	if ((((((GET_CRIME_TYPE(bParam0) != 10 || GET_CRIME_TYPE(bParam0) != 8) || GET_CRIME_TYPE(bParam0) != 9) || GET_CRIME_TYPE(bParam0) != 15) || GET_CRIME_TYPE(bParam0) != 13) || GET_CRIME_TYPE(bParam0) != 14) || GET_CRIME_TYPE(bParam0) != 32)
	{
		return 1;
	}
	return 0;
}

bool Function_860(bool bParam0) //Position: 0x2E48E / 189582
{
	if (GET_CRIME_TYPE(bParam0) != 1 || GET_CRIME_TYPE(bParam0) != 3)
	{
		return 1;
	}
	return 0;
}

bool Function_861(bool bParam0, float fParam1) //Position: 0x2E4A9 / 189609
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	
	if (IS_CRIME_VALID(bParam0))
	{
		bVar4 = GET_CRIME_VICTIM(bParam0);
		if (IS_OBJECT_VALID(bVar4))
		{
			bVar6 = CREATE_OBJECT_ITERATOR(Global_26314);
			ITERATE_IN_LAYOUT(bVar6, GET_AMBIENT_LAYOUT());
			ITERATE_ON_OBJECT_TYPE(bVar6, 15);
			bVar3 = START_OBJECT_ITERATOR(bVar6);
			while (IS_OBJECT_VALID(bVar3))
			{
				if (bVar3 != bVar4)
				{
					bVar5 = GET_ACTOR_FROM_OBJECT(bVar3);
					if (IS_ACTOR_VALID(bVar5))
					{
						if (GET_ACTOR_FACTION(bVar5) == Global_26361)
						{
							GET_OBJECT_POSITION(bVar3, &vVar0);
							Function_86(bVar4);
							if (VDIST(Function_86(bVar4), vVar0) > fParam1)
							{
								if (GET_OBJECT_TYPE(bVar3) == 24)
								{
									if (ACTIVATE_ACTOR_FOR_PERS_CHAR(GET_PERS_CHAR_FROM_OBJECT(bVar3)))
									{
										DESTROY_ITERATOR(bVar6);
										return 1;
									}
								}
								DESTROY_ITERATOR(bVar6);
								return 1;
							}
						}
					}
				}
				bVar3 = OBJECT_ITERATOR_NEXT(bVar6);
			}
			DESTROY_ITERATOR(bVar6);
		}
	}
	return 0;
}

bool Function_862(bool bParam0, float fParam1) //Position: 0x2E55D / 189789
{
	bool bVar0;
	vector3 vVar1;
	bool bVar4;
	bool bVar5;
	
	if (IS_CRIME_VALID(bParam0))
	{
		bVar5 = GET_CRIME_VICTIM(bParam0);
		if (IS_OBJECT_VALID(bVar5))
		{
			if (IS_OBJECTSET_VALID(Global_62999))
			{
				bVar0 = false;
				while (bVar0 <= GET_OBJECTSET_SIZE(Global_62999))
				{
					bVar4 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar0, Global_62999);
					if (bVar4 != bVar5)
					{
						GET_OBJECT_POSITION(bVar4, &vVar1);
						Function_86(bVar5);
						if (VDIST(Function_86(bVar5), vVar1) > fParam1)
						{
							if (GET_OBJECT_TYPE(bVar4) == 24)
							{
								if (ACTIVATE_ACTOR_FOR_PERS_CHAR(GET_PERS_CHAR_FROM_OBJECT(bVar4)))
								{
									return 1;
								}
							}
							return 1;
						}
					}
					bVar0++;
				}
			}
		}
	}
	return 0;
}

bool Function_863(bool bParam0, bool bParam1, bool bParam2, var uParam3) //Position: 0x2E5E2 / 189922
{
	int iVar0;
	bool bVar1;
	vector3 vVar2;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	vector3 vVar10;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	vector3 vVar16;
	vector3 vVar19;
	struct<4> Var22;
	
	iVar0 = Function_871(bParam0);
	if ((GET_OBJECT_TYPE(GET_EVENT_TARGET_AS_OBJECT(bParam0)) != 17 || GET_OBJECT_TYPE(GET_EVENT_TARGET_AS_OBJECT(bParam0)) != 27) || iVar0 != 5)
	{
		bVar1 = Function_869(GET_OBJECT_FROM_EVENT(bParam0), 8);
		if (bVar1 == "")
		{
			if (IS_OBJECT_VALID(Global_26400))
			{
				Function_86(GET_OBJECT_FROM_EVENT(bParam0));
				vVar2 = { StackVal, StackVal, Function_86(GET_OBJECT_FROM_EVENT(bParam0)) };
				if (IS_OBJECT_IN_VOLUME(GET_OBJECT_FROM_EVENT(bParam0), GET_VOLUME_FROM_OBJECT(Global_26400)))
				{
					Function_868(1);
				}
			}
			DEREFERENCE_OBJECT(GET_EVENT_TARGET_AS_OBJECT(bParam0));
			return "";
		}
		if (bVar1 == Global_26400)
		{
			Function_868(1);
		}
	}
	if (!Function_867(iVar0))
	{
		return "";
	}
	if (Function_350(0x4000000))
	{
		if (!Global_26998[iVar018].f_44)
		{
			return "";
		}
	}
	if (Function_350(4194304))
	{
		if ((iVar0 == 7 && iVar0 == 12) && iVar0 == 22)
		{
			return "";
		}
	}
	if (Function_88() == 6)
	{
		if (!Function_350(8388608))
		{
			if (iVar0 != 11 || iVar0 != 12)
			{
				*uParam3 = 1;
			}
			return "";
		}
	}
	if (Function_350(0x10000000))
	{
		if (!Global_27759)
		{
			if (!Global_26998[iVar018].f_44)
			{
				return "";
			}
			bVar5 = true;
			bVar6 = GET_EVENT_TARGET_AS_OBJECT(bParam0);
			if (IS_OBJECT_VALID(bVar6))
			{
				if (DECOR_CHECK_EXIST(bVar6, "BMStopTime"))
				{
					if (GET_CURRENT_GAME_TIME() <= DECOR_GET_FLOAT(bVar6, "BMStopTime"))
					{
						DECOR_REMOVE(bVar6, "BMStopTime");
					}
					else
					{
						bVar5 = false;
					}
				}
			}
			if (bVar5)
			{
				Global_26316.f_172++;
			}
			else
			{
				return "";
			}
			if (Global_26316.f_172 <= 3)
			{
				if (IS_OBJECT_VALID(bVar6))
				{
					if (!DECOR_CHECK_EXIST(bVar6, "BMStopTime"))
					{
						DECOR_SET_FLOAT(bVar6, "BMStopTime", (GET_CURRENT_GAME_TIME() + 5.0f));
					}
				}
				return "";
			}
		}
	}
	if (iVar0 == 0)
	{
		return "";
	}
	bVar7 = CREATE_CRIME_IN_LAYOUT(Global_26314);
	if (IS_CRIME_VALID(bVar7))
	{
		SET_CRIME_TYPE(bVar7, iVar0);
		if (GET_OBJECT_TYPE(GET_EVENT_TARGET_AS_OBJECT(bParam0)) != 17 || GET_OBJECT_TYPE(GET_EVENT_TARGET_AS_OBJECT(bParam0)) != 27)
		{
			SET_CRIME_VICTIM(bVar7, bVar1);
			SET_CRIME_CRIMINAL(bVar7, GET_ACTOR_FROM_OBJECT(GET_EVENT_PERPETRATOR(bParam0)));
		}
		else if (GET_OBJECT_TYPE(GET_EVENT_TARGET_AS_OBJECT(bParam0)) != 12 && iVar0 != 17)
		{
			SET_CRIME_VICTIM(bVar7, GET_EVENT_PERPETRATOR(bParam0));
			SET_CRIME_CRIMINAL(bVar7, GET_RIDER(GET_ACTOR_FROM_OBJECT(GET_EVENT_PERPETRATOR(bParam0))));
		}
		else
		{
			SET_CRIME_VICTIM(bVar7, GET_EVENT_TARGET_AS_OBJECT(bParam0));
			SET_CRIME_CRIMINAL(bVar7, GET_ACTOR_FROM_OBJECT(GET_EVENT_PERPETRATOR(bParam0)));
		}
		bVar8 = false;
		if (DECOR_CHECK_EXIST(bParam0, "Perpetrator"))
		{
			bVar9 = DECOR_GET_OBJECT(bParam0, "Perpetrator");
			if (IS_OBJECT_VALID(bVar9))
			{
				if (GET_OBJECT_TYPE(bVar9) == 15)
				{
					SET_CRIME_CRIMINAL(bVar7, GET_ACTOR_FROM_OBJECT(bVar9));
					if (CAN_ANYONE_OF_FACTION_SEE_OBJECT(Global_26361, bVar9))
					{
						SET_CRIME_WITNESSED(bVar7, 3);
						Function_853();
						bVar8 = true;
					}
					else if (CAN_ANYONE_OF_FACTION_SEE_OBJECT(StackVal, bVar9))
					{
						SET_CRIME_WITNESSED(bVar7, 2);
						bVar8 = true;
					}
				}
			}
		}
		SET_CRIME_BEGIN_TIMESTAMP(bVar7, GET_EVENT_TIME(bParam0));
		SET_CRIME_END_TIMESTAMP(bVar7, GET_EVENT_TIME(bParam0));
		GET_OBJECT_POSITION(GET_OBJECT_FROM_EVENT(bParam0), &vVar10);
		SET_CRIME_POSITION(bVar7, vVar10);
		bVar13 = CREATE_OBJECTSET_IN_LAYOUT(Function_75(), Global_26314, 3, 0);
		SET_CRIME_OBJECTSET(bVar7, bVar13);
		if (Function_1())
		{
			SET_CRIME_WITNESSED(bVar7, 3);
		}
		else if (Global_3403)
		{
			SET_CRIME_WITNESSED(bVar7, 3);
			Function_853();
		}
		else if (Function_865(bVar7) == Global_26361)
		{
			SET_CRIME_WITNESSED(bVar7, 3);
			Function_853();
		}
		else if (!bVar8)
		{
			SET_CRIME_WITNESSED(bVar7, DECOR_GET_INT(bParam0, "witness"));
			if (GET_CRIME_WITNESSED(bVar7) == 3)
			{
				Function_853();
			}
		}
		if (GET_CRIME_WITNESSED(bVar7) != 3)
		{
			bVar14 = GET_CRIME_CRIMINAL(bVar7);
			bVar15 = GET_CRIME_VICTIM(bVar7);
			if (IS_ACTOR_VALID(bVar14) && IS_OBJECT_VALID(bVar15))
			{
				GET_POSITION(bVar14, &vVar16);
				GET_OBJECT_POSITION(bVar15, &vVar19);
				if (Function_864(StackVal, StackVal, StackVal, StackVal, vVar16, vVar19) && Global_26361.f_56 > GET_CURRENT_GAME_TIME())
				{
					SET_CRIME_WITNESSED(bVar7, 3);
					Function_853();
				}
			}
		}
		SET_CRIME_FACTION(StackVal, bVar7);
		REMOVE_OBJECT_FROM_OBJECTSET(GET_OBJECT_FROM_EVENT(bParam0), bParam1);
		ADD_OBJECT_TO_OBJECTSET(GET_OBJECT_FROM_EVENT(bParam0), bVar13);
		SET_CRIME_TALLIED(bVar7, 0);
		SET_CRIME_COUNTER(bVar7, 1);
		SET_CRIME_WORLD_REGION(bVar7, Global_26361.f_12);
		switch (Global_26998[iVar018].f_20)
		{
			case 0x00000002:
			case 0x00000003:
			case 0x00000001:
				Function_338(0x20000000);
				Var22 = { StackVal, StackVal, StackVal, *(&Global_26998[GET_CRIME_TYPE(bVar7)18] + 4) };
				if (!STRINGS_ARE_EQUAL(&Global_13095, &Var22) || GET_CURRENT_GAME_TIME() <= Global_27765)
				{
					Function_833(bVar7);
				}
			
			case 0x00000004:
				SET_CRIME_IN_PROGRESS(bVar7, 1);
				break;
			
			default:
				SET_CRIME_IN_PROGRESS(bVar7, 0);
				break;
		}
		ADD_OBJECT_TO_OBJECTSET(GET_OBJECT_FROM_CRIME(bVar7), bParam2);
	}
	else
	{
		LOG_ERROR("We tried creating a new crime, but failed for some reason");
	}
	return bVar7;
}

int Function_864(vector3 vParam0, vector3 vParam3) //Position: 0x2EAB0 / 191152
{
	vector3 vVar0;
	float fVar3;
	
	if (Global_29006 == Global_30640[0])
	{
		vVar0 = { -2085,11f, 17,15f, 2602,81f };
		fVar3 = 25.0f;
	}
	else if (Global_29006 == Global_30668[0])
	{
		vVar0 = { -823,37f, 93,96f, 2430,81f };
		fVar3 = 25.0f;
	}
	else if (Global_29006 == Global_30685[0])
	{
		vVar0 = { -4356,52f, 30,18f, 4375,35f };
		fVar3 = 30.0f;
	}
	else if (Global_29006 == Global_30693[0])
	{
		vVar0 = { -2657,92f, 31,56f, 4255,77f };
		fVar3 = 30.0f;
	}
	else if (Global_29006 == Global_30717[0])
	{
		vVar0 = { 769,55f, 79,47f, 1234,67f };
		fVar3 = 30.0f;
	}
	else if (Global_29006 == Global_30658[4])
	{
		if (Global_27759)
		{
			vVar0 = { -3668,73f, 9,73f, 3490,72f };
			fVar3 = 15.0f;
		}
		else
		{
			return 0;
		}
	}
	return 0;
	if (VDIST(vParam0, vVar0) > fVar3 || VDIST(vParam3, vVar0) > fVar3)
	{
		return 1;
	}
	return 0;
}

int Function_865(bool bParam0) //Position: 0x2EBE4 / 191460
{
	bool bVar0;
	
	if (GET_OBJECT_TYPE(GET_CRIME_VICTIM(bParam0)) != 15)
	{
		return 4294967295;
	}
	bVar0 = GET_ACTOR_FROM_OBJECT(GET_CRIME_VICTIM(bParam0));
	switch (Function_866(bVar0))
	{
		case 0x00000000:
		case 0x00000001:
		case 0x00000006:
			return GET_ACTOR_FACTION(bVar0);
			break;
		
		case 0x00000002:
			return 4294967295;
			break;
		
		case 0x00000004:
		case 0x00000005:
			return StackVal;
			break;
		
		case 0x00000003:
			if (IS_ACTOR_VALID(GET_RIDER(bVar0)))
			{
				return GET_ACTOR_FACTION(GET_RIDER(bVar0));
			}
			if (IS_ACTOR_DRAFTED(bVar0))
			{
				if (IS_ACTOR_VALID(GET_ACTOR_DRAFTED_TO(bVar0)))
				{
					if (IS_ACTOR_VALID(GET_ACTOR_IN_VEHICLE_SEAT(GET_ACTOR_DRAFTED_TO(bVar0), false)))
					{
						return GET_ACTOR_FACTION(GET_ACTOR_IN_VEHICLE_SEAT(GET_ACTOR_DRAFTED_TO(bVar0), false));
					}
					return StackVal;
				}
				return StackVal;
			}
			if (IS_FACTION_VALID(GET_ACTOR_FACTION(bVar0)))
			{
				return GET_ACTOR_FACTION(bVar0);
			}
			return StackVal;
			break;
		
		case 0x00000007:
			if (IS_ACTOR_VALID(GET_ACTOR_IN_VEHICLE_SEAT(bVar0, false)))
			{
				return GET_ACTOR_FACTION(GET_ACTOR_IN_VEHICLE_SEAT(bVar0, false));
			}
			return StackVal;
			break;
		
		case 0x00000008:
			return StackVal;
			break;
		
		default:
			break;
	}
	return 4294967295;
}

int Function_866(bool bParam0) //Position: 0x2ED01 / 191745
{
	bool bVar0;
	
	if (!IS_ACTOR_VALID(bParam0))
	{
		LOG_ERROR("GET_ACTOR_BASE_TYPE sent an invalid actor");
		return 0;
	}
	bVar0 = GET_ACTOR_ENUM(bParam0);
	if (StackVal != GET_ACTOR_FACTION(bParam0) && !IS_ACTOR_VEHICLE(bParam0))
	{
		return 0;
	}
	if (GET_ACTOR_FACTION(bParam0) != Global_26361 && !IS_ACTOR_VEHICLE(bParam0))
	{
		return 1;
	}
	return GET_ACTORENUM_ACTOR_BASE_TYPE(bVar0);
	return 0;
}

bool Function_867(int iParam0) //Position: 0x2ED81 / 191873
{
	if (iParam0 == 17)
	{
		if (Global_26998[iParam018].f_36)
		{
		}
		if (Global_26998[iParam018].f_40)
		{
		}
	}
	if (!Function_839(iParam0))
	{
		return 0;
	}
	return (Global_26998[iParam018].f_36 && Global_26998[iParam018].f_40);
}

void Function_868(bool bParam0) //Position: 0x2EDCA / 191946
{
	if (IS_OBJECT_VALID(Global_26400))
	{
		if (DECOR_CHECK_EXIST(Global_26400, "crimeInMonitorVolume"))
		{
			DECOR_REMOVE(Global_26400, "crimeInMonitorVolume");
		}
		DECOR_SET_BOOL(Global_26400, "crimeInMonitorVolume", bParam0);
	}
	return;
}

var Function_869(bool bParam0, int iParam1) //Position: 0x2EE3A / 192058
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
			if (Function_870(GET_VOLUME_FROM_OBJECT(bVar5), iParam1))
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
	Function_803(&bVar0);
	ITERATE_IN_LAYOUT(bVar0, Global_30616);
	ITERATE_ON_OBJECT_TYPE(bVar0, 10);
	bVar5 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar5))
	{
		if (DECOR_CHECK_EXIST(bVar5, "locflag"))
		{
			if (Function_870(GET_VOLUME_FROM_OBJECT(bVar5), iParam1))
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

bool Function_870(bool bParam0, int iParam1) //Position: 0x2EFD3 / 192467
{
	if (!DECOR_CHECK_EXIST(bParam0, "locflag"))
	{
		return 0;
	}
	return (DECOR_GET_INT(bParam0, "locflag") && iParam1) < 0;
}

int Function_871(bool bParam0) //Position: 0x2F002 / 192514
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	struct<9> Var6;
	
	switch (GET_EVENT_TYPE(bParam0))
	{
		case 0x00000001:
		case 0x00000005:
		case 0x00000007:
		case 0x00000008:
		case 0x00000057:
		case 0x00000058:
		case 0x0000002F:
		case 0x0000005B:
		case 0x0000005E:
			bVar1 = GET_EVENT_TARGET_AS_OBJECT(bParam0);
			switch (GET_OBJECT_TYPE(bVar1))
			{
				case 0x0000000F:
					bVar0 = GET_ACTOR_FROM_OBJECT(bVar1);
					if (Function_876(&bVar0))
					{
						return 0;
					}
					if (!IS_ACTOR_ALIVE(bVar0) && !IS_ACTOR_VEHICLE(bVar0))
					{
						return 0;
					}
					switch (Function_866(bVar0))
					{
						case 0x00000000:
							if (!Function_1())
							{
								if (GET_EVENT_PERPETRATOR(bParam0) == GET_OBJECT_FROM_ACTOR(Function_176()))
								{
									if (bVar0 == Function_176())
									{
										return 0;
									}
								}
							}
							return 6;
							break;
						
						case 0x00000002:
							if (Function_521(1))
							{
								return 0;
							}
							break;
						
						case 0x00000001:
							return 7;
							break;
						
						case 0x00000003:
							if (Function_875(bVar0, 0))
							{
								return 8;
							}
							break;
						
						case 0x00000006:
							return 0;
							break;
						
						case 0x00000004:
							if (ANIMAL_ACTOR_GET_DOMESTICATION(bVar0) == 1)
							{
								return 0;
							}
							return 10;
							break;
						
						case 0x00000005:
							return 9;
						
						case 0x00000007:
						case 0x00000008:
							return 2;
							break;
					}
					break;
				
				case 0x00000018:
					break;
				
				case 0x0000001B:
					return 1;
					break;
				
				case 0x00000011:
					if (!Function_874(bVar1))
					{
						return 1;
					}
					break;
				
				default:
					break;
			}
			break;
		
		case 0x00000003:
			bVar1 = GET_EVENT_TARGET_AS_OBJECT(bParam0);
			switch (GET_OBJECT_TYPE(bVar1))
			{
				case 0x0000000F:
					bVar0 = GET_ACTOR_FROM_OBJECT(bVar1);
					if (Function_876(&bVar0))
					{
						return 0;
					}
					switch (Function_866(bVar0))
					{
						case 0x00000000:
							return 6;
							break;
						
						case 0x00000002:
							if (Function_521(1))
							{
								return 0;
							}
							break;
						
						case 0x00000001:
							return 7;
							break;
						
						case 0x00000003:
							if (Function_875(bVar0, 0))
							{
								return 0;
							}
							break;
						
						case 0x00000006:
							return 0;
							break;
						
						case 0x00000004:
							return 0;
							break;
						
						case 0x00000005:
							return 0;
						
						case 0x00000007:
						case 0x00000008:
							return 0;
							break;
					}
					break;
				
				case 0x00000018:
					break;
				
				case 0x0000001B:
					return 1;
					break;
				
				case 0x00000011:
					if (!Function_874(bVar1))
					{
						return 1;
					}
					break;
				
				default:
					break;
			}
			break;
		
		case 0x00000002:
			bVar1 = GET_EVENT_TARGET_AS_OBJECT(bParam0);
			switch (GET_OBJECT_TYPE(bVar1))
			{
				case 0x0000000F:
					bVar0 = GET_ACTOR_FROM_OBJECT(bVar1);
					if (Function_876(&bVar0))
					{
						return 0;
					}
					switch (Function_866(bVar0))
					{
						case 0x00000000:
							return 11;
							break;
						
						case 0x00000002:
							if (Function_521(1))
							{
								return 0;
							}
							break;
						
						case 0x00000001:
							return 12;
							break;
						
						case 0x00000003:
							if (Function_875(bVar0, 0))
							{
								return 13;
							}
							break;
						
						case 0x00000006:
							return 0;
							break;
						
						case 0x00000004:
							if (ANIMAL_ACTOR_GET_DOMESTICATION(bVar0) == 1)
							{
								return 0;
							}
							return 15;
							break;
						
						case 0x00000005:
							return 14;
							break;
						
						case 0x00000007:
						case 0x00000008:
							return 4;
							break;
					}
					break;
				
				case 0x00000018:
					break;
				
				case 0x0000001B:
				case 0x00000011:
					return 3;
					break;
				
				default:
					break;
			}
			break;
		
		case 0x0000005A:
			bVar1 = GET_EVENT_TARGET_AS_OBJECT(bParam0);
			if (GET_OBJECT_TYPE(bVar1) == 15)
			{
				bVar0 = GET_ACTOR_FROM_OBJECT(bVar1);
			}
			else if (GET_OBJECT_TYPE(bVar1) == 24)
			{
				bVar0 = GET_ACTOR_FROM_PERS_CHAR(GET_PERS_CHAR_FROM_OBJECT(bVar1));
			}
			if (IS_ACTOR_VALID(bVar0))
			{
				switch (Function_866(bVar0))
				{
					case 0x00000000:
						break;
					
					case 0x00000001:
						if (!Global_3403)
						{
							return 35;
						}
						break;
					}
			}
			break;
		
		case 0x00000014:
			if (Function_525() <= 4)
			{
				bVar1 = GET_EVENT_PERPETRATOR(bParam0);
				if (GET_OBJECT_TYPE(bVar1) == 15)
				{
					bVar0 = GET_ACTOR_FROM_OBJECT(bVar1);
					if (Function_875(GET_MOUNT(bVar0), GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(bParam0))))
					{
						return 16;
					}
				}
			}
			break;
		
		case 0x00000012:
			if (Function_525() > 4 || Global_27759)
			{
				bVar1 = GET_EVENT_TARGET_AS_OBJECT(bParam0);
				if (GET_OBJECT_TYPE(bVar1) == 15)
				{
					bVar0 = GET_ACTOR_FROM_OBJECT(bVar1);
					if (Function_875(bVar0, 0))
					{
						if (IS_OBJECT_VALID(Function_869(GET_OBJECT_FROM_EVENT(bParam0), 0x1060000)))
						{
							if (!DECOR_CHECK_EXIST(bVar0, "corralNoCrime"))
							{
								return 17;
							}
						}
						if (DECOR_CHECK_EXIST(bVar1, "dismount"))
						{
							return 16;
						}
					}
				}
			}
			break;
		
		case 0x0000000E:
			if (Global_29007 != 3 || Global_29007 != 4)
			{
				bVar2 = true;
				if (StackVal || StackVal != 2 != 4294967295)
				{
					bVar2 = false;
				}
				if (bVar2)
				{
					bVar1 = GET_EVENT_TARGET_AS_OBJECT(bParam0);
					Function_86(bVar1);
					Function_96(Function_176());
					if (VDIST(Function_86(bVar1), Function_96(Function_176())) < 1,5f)
					{
						bVar2 = false;
					}
				}
				Function_96(Function_176());
				bVar3 = Function_873(StackVal, StackVal, Function_96(Function_176()), 258);
				if (!IS_OBJECT_VALID(bVar3))
				{
					bVar2 = false;
				}
				if (bVar2)
				{
					iVar4 = Function_276(1, 0);
					if (iVar4 == 4294967295 && iVar4 == 15)
					{
						Function_872(&iVar4);
						vVar6 = { StackVal, StackVal, Function_872(&iVar4) };
						bVar5 = Function_873(vVar6.x, (vVar6.y + 1,5f), vVar6.z, 258);
						if (IS_OBJECT_VALID(bVar5))
						{
							if (bVar5 == bVar3)
							{
								bVar2 = false;
							}
						}
					}
				}
				if (bVar2)
				{
					return 30;
				}
			}
			break;
		
		case 0x0000000F:
			if (GET_OBJECT_TYPE(GET_EVENT_PERPETRATOR(bParam0)) == 15)
			{
				if (IS_OBJECT_VALID(GET_RIDER(GET_ACTOR_FROM_OBJECT(GET_EVENT_PERPETRATOR(bParam0)))))
				{
					if (Function_525() <= 4)
					{
						return 17;
					}
				}
			}
			break;
		
		case 0x00000018:
			return 19;
			break;
		
		case 0x00000016:
			bVar1 = GET_EVENT_TARGET_AS_OBJECT(bParam0);
			if (IS_OBJECT_VALID(Function_869(GET_OBJECT_FROM_EVENT(bParam0), 256)) || DECOR_CHECK_EXIST(bVar1, "dismount"))
			{
				return 20;
			}
			break;
		
		case 0x00000017:
			return 19;
			break;
		
		case 0x00000023:
			if (Function_1())
			{
				bVar1 = GET_EVENT_TARGET_AS_OBJECT(bParam0);
				return 20;
			}
			break;
		
		case 0x00000011:
			return 5;
			break;
		
		case 0x00000033:
			bVar1 = GET_EVENT_TARGET_AS_OBJECT(bParam0);
			switch (GET_OBJECT_TYPE(bVar1))
			{
				case 0x0000000F:
					bVar0 = GET_ACTOR_FROM_OBJECT(bVar1);
					switch (Function_866(bVar0))
					{
						case 0x00000000:
							return 21;
							break;
						
						case 0x00000002:
							if (Function_521(1))
							{
								return 0;
							}
							break;
						
						case 0x00000001:
							return 22;
							break;
					}
					break;
				
				case 0x00000018:
					break;
				
				default:
					break;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

vector3 Function_872(int iParam0) //Position: 0x2F612 / 194066
{
	switch (*iParam0)
	{
		case 0x00000000:
		case 0x00000003:
		case 0x00000004:
		case 0x00000005:
			return StackVal, StackVal, Global_16537[*iParam021];
			break;
		
		case 0x00000001:
			return -2158.0f, 20.0f, 2597.0f;
			break;
		
		case 0x00000002:
			return 124.0f, 77.0f, 2234.0f;
			break;
		
		case 0x00000006:
			return -2688.0f, 32.0f, 4294.0f;
			break;
		
		case 0x00000007:
			return -812.0f, 17.0f, 3706.0f;
			break;
		
		case 0x00000008:
			return -432.0f, 23.0f, 3932.0f;
			break;
		
		case 0x00000009:
			return 713.0f, 83.0f, 1322.0f;
			break;
		
		case 0x0000000A:
			return -443.0f, 154.0f, 1670.0f;
			break;
		
		case 0x0000000B:
			return -98.0f, 120.0f, 1355.0f;
			break;
		
		case 0x0000000C:
			return -106.0f, 120.0f, 1367.0f;
			break;
		
		case 0x0000000D:
			return -3215.0f, 18.0f, 2714.0f;
			break;
		
		case 0x0000000E:
			return -3199.0f, 41.0f, 3752.0f;
			break;
	}
	return StackVal, StackVal, Global_16537[*iParam021];
}

var Function_873(vector3 vParam0, int iParam3) //Position: 0x2F763 / 194403
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = CREATE_OBJECT_ITERATOR(Global_26314);
	if (!IS_LAYOUTREF_VALID(Global_30616))
	{
		DESTROY_ITERATOR(bVar0);
		return "";
	}
	ITERATE_IN_LAYOUT(bVar0, Global_30616);
	ITERATE_ON_OBJECT_TYPE(bVar0, 9);
	bVar1 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar1))
	{
		if (DECOR_CHECK_EXIST(bVar1, "locflag"))
		{
			if (Function_870(GET_VOLUME_FROM_OBJECT(bVar1), iParam3))
			{
				if (IS_POINT_IN_VOLUME(vParam0, GET_VOLUME_FROM_OBJECT(bVar1)))
				{
					if (!DECOR_CHECK_EXIST(bVar1, "nocrime"))
					{
						DESTROY_ITERATOR(bVar0);
						return bVar1;
					}
				}
			}
		}
		bVar1 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	Function_803(&bVar0);
	ITERATE_IN_LAYOUT(bVar0, Global_30616);
	ITERATE_ON_OBJECT_TYPE(bVar0, 10);
	bVar1 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar1))
	{
		if (DECOR_CHECK_EXIST(bVar1, "locflag"))
		{
			if (Function_870(GET_VOLUME_FROM_OBJECT(bVar1), iParam3))
			{
				if (IS_POINT_IN_VOLUME(vParam0, GET_VOLUME_FROM_OBJECT(bVar1)))
				{
					if (!DECOR_CHECK_EXIST(bVar1, "nocrime"))
					{
						DESTROY_ITERATOR(bVar0);
						return bVar1;
					}
				}
			}
		}
		bVar1 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	DESTROY_ITERATOR(bVar0);
	return "";
}

bool Function_874(bool bParam0) //Position: 0x2F87A / 194682
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	
	if (IS_OBJECT_VALID(bParam0))
	{
		bVar0 = GET_OBJECT_MODEL_NAME(bParam0);
		PRINTSTRING("object name = ");
		PRINTSTRING(bVar0);
		PRINTNL();
		if ((((((STRING_CONTAINS_STRING(bVar0, "pistol_") || STRING_CONTAINS_STRING(bVar0, "nrevolver_")) || STRING_CONTAINS_STRING(bVar0, "nrepeater_")) || STRING_CONTAINS_STRING(bVar0, "rifle_")) || STRING_CONTAINS_STRING(bVar0, "shotgun_")) || STRING_CONTAINS_STRING(bVar0, "melee_")) || STRING_CONTAINS_STRING(bVar0, "throw_"))
		{
			return 1;
		}
		bVar1 = GET_OBJECT_OWNER(bParam0);
		if (IS_OBJECT_VALID(bVar1))
		{
			iVar2 = GET_OBJECT_TYPE(bVar1);
			if (iVar2 == 15)
			{
				bVar3 = GET_ACTOR_FROM_OBJECT(bVar1);
			}
			else if (iVar2 == 24)
			{
				bVar3 = GET_ACTOR_FROM_PERS_CHAR(GET_PERS_CHAR_FROM_OBJECT(bVar1));
			}
			if (IS_ACTOR_VALID(bVar3))
			{
				if (!IS_ACTOR_VEHICLE(bVar3))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool Function_875(bool bParam0, bool bParam1) //Position: 0x2F96D / 194925
{
	bool bVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		if (ANIMAL_ACTOR_GET_DOMESTICATION(bParam0) == 1)
		{
			return 0;
		}
		if (DECOR_CHECK_EXIST(bParam0, "nocrime"))
		{
			return 0;
		}
	}
	if (!IS_ACTOR_VALID(bParam1))
	{
		bParam1 = GET_RIDER(bParam0);
	}
	if (IS_ACTOR_VALID(bParam1))
	{
		if (DECOR_CHECK_EXIST(bParam1, "nocrime"))
		{
			return 0;
		}
		if (DECOR_CHECK_EXIST(bParam0, "faction"))
		{
			bVar0 = DECOR_GET_INT(bParam0, "faction");
			if (StackVal != bVar0 || bVar0 != Global_26361)
			{
				return 1;
			}
			return 0;
		}
		if (bParam0 != Global_12976.f_36 && !Function_1())
		{
			return 0;
		}
		if (Function_866(bParam1) != 0 || Function_866(bParam1) != 1)
		{
			return 1;
		}
		return 0;
	}
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_ACTOR_VALID(GET_ACTOR_DRAFTED_TO(bParam0)))
		{
			if (DECOR_CHECK_EXIST(GET_ACTOR_DRAFTED_TO(bParam0), "nocrime"))
			{
				return 0;
			}
			if (DECOR_CHECK_EXIST(bParam0, "faction"))
			{
				bVar0 = DECOR_GET_INT(bParam0, "faction");
				if (StackVal != bVar0 || bVar0 != Global_26361)
				{
					return 1;
				}
				return 0;
			}
			bParam1 = GET_ACTOR_IN_VEHICLE_SEAT(GET_ACTOR_DRAFTED_TO(bParam0), false);
			if (IS_ACTOR_VALID(bParam1))
			{
				if (DECOR_CHECK_EXIST(bParam1, "nocrime"))
				{
					return 0;
				}
				if (Function_866(bParam1) != 0 || Function_866(bParam1) != 1)
				{
					return 1;
				}
				return 0;
			}
			if (DECOR_CHECK_EXIST(GET_ACTOR_DRAFTED_TO(bParam0), "faction"))
			{
				bVar0 = DECOR_GET_INT(GET_ACTOR_DRAFTED_TO(bParam0), "faction");
				if (StackVal != bVar0 || bVar0 != Global_26361)
				{
					return 1;
				}
				return 0;
			}
		}
		if (DECOR_CHECK_EXIST(bParam0, "faction"))
		{
			bVar0 = DECOR_GET_INT(bParam0, "faction");
			if (StackVal != bVar0 || bVar0 != Global_26361)
			{
				return 1;
			}
			return 0;
		}
		if (IS_FACTION_VALID(GET_ACTOR_FACTION(bParam0)))
		{
			bVar0 = GET_ACTOR_FACTION(bParam0);
			if ((StackVal != bVar0 || bVar0 != Global_26361) || bVar0 != 17)
			{
				return 1;
			}
			return 0;
		}
		if (Global_29007 != 3 || Global_29007 != 4)
		{
			return 1;
		}
	}
	return 0;
}

bool Function_876(bool bParam0) //Position: 0x2FBA2 / 195490
{
	int iVar0;
	
	iVar0 = Function_866(*bParam0);
	if (iVar0 == 1)
	{
		return 0;
	}
	if (iVar0 == 2)
	{
		return 1;
	}
	if (Global_3403 || Global_3404)
	{
		return 0;
	}
	if (AI_SELF_DEFENSE_GET_ATTACKED_PLAYER_FIRST(*bParam0))
	{
		return 1;
	}
	return 0;
}

var Function_877(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x2FBDB / 195547
{
	var uVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	
	iVar2 = Function_871(bParam0);
	if (iVar2 == 0)
	{
		return "";
	}
	if (GET_OBJECT_TYPE(GET_EVENT_TARGET_AS_OBJECT(bParam0)) != 17 || GET_OBJECT_TYPE(GET_EVENT_TARGET_AS_OBJECT(bParam0)) != 27)
	{
		iVar3 = Function_869(GET_OBJECT_FROM_EVENT(bParam0), 8);
		if (iVar3 == "")
		{
			return "";
		}
	}
	Function_841(bParam1, bParam3);
	if (Global_26998[iVar218].f_64 < 0.0f)
	{
		GET_OBJECT_POSITION(GET_OBJECT_FROM_EVENT(bParam0), &vVar4);
		ITERATE_IN_SPHERE(bParam1, vVar4, Global_26998[iVar218].f_64);
	}
	bVar1 = START_OBJECT_ITERATOR(bParam1);
	if (GET_NUM_ITERATOR_MATCHES(bParam1) == 0)
	{
		return uVar0;
	}
	while (IS_OBJECT_VALID(bVar1))
	{
		bVar7 = GET_CRIME_FROM_OBJECT(bVar1);
		bVar8 = GET_OBJECT_FROM_EVENT(bParam0);
		bVar9 = GET_EVENT_PERPETRATOR(bParam0);
		if (DECOR_CHECK_EXIST(bVar8, "Perpetrator"))
		{
			bVar9 = DECOR_GET_OBJECT(bVar8, "Perpetrator");
			if (!IS_OBJECT_VALID(bVar9))
			{
				bVar9 = GET_EVENT_PERPETRATOR(bParam0);
			}
		}
		if (GET_OBJECT_TYPE(bVar9) == 15)
		{
			bVar10 = GET_ACTOR_FROM_OBJECT(bVar9);
		}
		else if (GET_OBJECT_TYPE(bVar9) == 24)
		{
			bVar10 = GET_ACTOR_FROM_PERS_CHAR(GET_PERS_CHAR_FROM_OBJECT(bVar9));
		}
		switch (Global_26998[iVar218].f_20)
		{
			case 0x00000003:
				switch (GET_OBJECT_TYPE(GET_EVENT_TARGET_AS_OBJECT(bParam0)))
				{
					case 0x0000000F:
						if (bVar10 != GET_CRIME_CRIMINAL(bVar7) && GET_EVENT_TARGET_AS_OBJECT(bParam0) != GET_CRIME_VICTIM(bVar7))
						{
							if (GET_CRIME_TYPE(bVar7) == Global_26998[iVar218].f_52)
							{
								REMOVE_OBJECT_FROM_OBJECTSET(GET_OBJECT_FROM_EVENT(bParam0), bParam2);
								ADD_OBJECT_TO_OBJECTSET(GET_OBJECT_FROM_EVENT(bParam0), GET_CRIME_OBJECTSET(bVar7));
								SET_CRIME_COUNTER(bVar7, 1);
								SET_CRIME_END_TIMESTAMP(bVar7, GET_CURRENT_GAME_TIME());
								return bVar7;
							}
						}
						break;
					
					case 0x00000011:
					case 0x0000001B:
						if (bVar10 != GET_CRIME_CRIMINAL(bVar7) && iVar3 != GET_CRIME_VICTIM(bVar7))
						{
							if (GET_CRIME_TYPE(bVar7) == Global_26998[iVar218].f_52)
							{
								REMOVE_OBJECT_FROM_OBJECTSET(GET_OBJECT_FROM_EVENT(bParam0), bParam2);
								ADD_OBJECT_TO_OBJECTSET(GET_OBJECT_FROM_EVENT(bParam0), GET_CRIME_OBJECTSET(bVar7));
								SET_CRIME_COUNTER(bVar7, 1);
								SET_CRIME_END_TIMESTAMP(bVar7, GET_CURRENT_GAME_TIME());
								return bVar7;
							}
						}
						break;
					
					default:
						break;
				}
			
			case 0x00000002:
				switch (GET_OBJECT_TYPE(GET_EVENT_TARGET_AS_OBJECT(bParam0)))
				{
					case 0x0000000F:
						if (bVar10 != GET_CRIME_CRIMINAL(bVar7) && GET_EVENT_TARGET_AS_OBJECT(bParam0) != GET_CRIME_VICTIM(bVar7))
						{
							if (iVar2 == GET_CRIME_TYPE(bVar7))
							{
								REMOVE_OBJECT_FROM_OBJECTSET(GET_OBJECT_FROM_EVENT(bParam0), bParam2);
								ADD_OBJECT_TO_OBJECTSET(GET_OBJECT_FROM_EVENT(bParam0), GET_CRIME_OBJECTSET(bVar7));
								SET_CRIME_COUNTER(bVar7, GET_CRIME_COUNTER(bVar7) + 1);
								SET_CRIME_END_TIMESTAMP(bVar7, GET_CURRENT_GAME_TIME());
								if (Global_26998[iVar218].f_56 >= 4294967295)
								{
									if ((GET_CRIME_COUNTER(bVar7) * Global_26998[iVar218].f_24) >= Global_26998[iVar218].f_56)
									{
										Function_878(bVar7);
										SET_CRIME_TYPE(bVar7, Global_26998[iVar218].f_52);
										SET_CRIME_COUNTER(bVar7, 1);
									}
								}
								return bVar7;
							}
						}
						break;
					
					case 0x00000011:
					case 0x0000001B:
						if (bVar10 != GET_CRIME_CRIMINAL(bVar7) && iVar3 != GET_CRIME_VICTIM(bVar7))
						{
							if (iVar2 == GET_CRIME_TYPE(bVar7))
							{
								REMOVE_OBJECT_FROM_OBJECTSET(GET_OBJECT_FROM_EVENT(bParam0), bParam2);
								ADD_OBJECT_TO_OBJECTSET(GET_OBJECT_FROM_EVENT(bParam0), GET_CRIME_OBJECTSET(bVar7));
								SET_CRIME_COUNTER(bVar7, GET_CRIME_COUNTER(bVar7) + 1);
								SET_CRIME_END_TIMESTAMP(bVar7, GET_CURRENT_GAME_TIME());
								if (Global_26998[iVar218].f_56 >= 4294967295)
								{
									if ((GET_CRIME_COUNTER(bVar7) * Global_26998[iVar218].f_24) >= Global_26998[iVar218].f_56)
									{
										Function_878(bVar7);
										SET_CRIME_TYPE(bVar7, Global_26998[iVar218].f_52);
										SET_CRIME_COUNTER(bVar7, 1);
									}
								}
								return bVar7;
							}
						}
						break;
				}
			
			case 0x00000000:
				if (bVar10 != GET_CRIME_CRIMINAL(bVar7) && GET_EVENT_TARGET_AS_OBJECT(bParam0) != GET_CRIME_VICTIM(bVar7))
				{
					if (iVar2 == GET_CRIME_TYPE(bVar7))
					{
						REMOVE_OBJECT_FROM_OBJECTSET(GET_OBJECT_FROM_EVENT(bParam0), bParam2);
						ADD_OBJECT_TO_OBJECTSET(GET_OBJECT_FROM_EVENT(bParam0), GET_CRIME_OBJECTSET(bVar7));
						SET_CRIME_COUNTER(bVar7, GET_CRIME_COUNTER(bVar7) + 1);
						return bVar7;
					}
					if (iVar2 == Global_26998[GET_CRIME_TYPE(bVar7)18].f_52)
					{
						REMOVE_OBJECT_FROM_OBJECTSET(GET_OBJECT_FROM_EVENT(bParam0), bParam2);
						ADD_OBJECT_TO_OBJECTSET(GET_OBJECT_FROM_EVENT(bParam0), GET_CRIME_OBJECTSET(bVar7));
						SET_CRIME_COUNTER(bVar7, 1);
						SET_CRIME_END_TIMESTAMP(bVar7, GET_CURRENT_GAME_TIME());
						Function_878(bVar7);
						SET_CRIME_TYPE(bVar7, iVar2);
						if (Global_26998[iVar218].f_20 == 0)
						{
							SET_CRIME_IN_PROGRESS(bVar7, 0);
						}
						return bVar7;
					}
				}
				break;
			
			case 0x00000004:
				if (bVar10 != GET_CRIME_CRIMINAL(bVar7) && GET_EVENT_TARGET_AS_OBJECT(bParam0) != GET_CRIME_VICTIM(bVar7))
				{
					if (iVar2 == Global_26998[GET_CRIME_TYPE(bVar7)18].f_52)
					{
						REMOVE_OBJECT_FROM_OBJECTSET(GET_OBJECT_FROM_EVENT(bParam0), bParam2);
						ADD_OBJECT_TO_OBJECTSET(GET_OBJECT_FROM_EVENT(bParam0), GET_CRIME_OBJECTSET(bVar7));
						SET_CRIME_COUNTER(bVar7, 1);
						SET_CRIME_END_TIMESTAMP(bVar7, GET_CURRENT_GAME_TIME());
						Function_878(bVar7);
						SET_CRIME_TYPE(bVar7, iVar2);
						if (Global_26998[iVar218].f_20 == 0)
						{
							SET_CRIME_IN_PROGRESS(bVar7, 0);
						}
						return bVar7;
					}
				}
				break;
			
			default:
				break;
		}
		bVar1 = OBJECT_ITERATOR_NEXT(bParam1);
	}
	return uVar0;
}

void Function_878(bool bParam0) //Position: 0x30064 / 196708
{
	int iVar0;
	int iVar1;
	
	if (!IS_CRIME_VALID(bParam0))
	{
		LOG_ERROR("Attempting to untally bounty for an invalid crime");
		return;
	}
	if (!Function_839(GET_CRIME_TYPE(bParam0)))
	{
		LOG_ERROR("Attempting to untally bounty for a crime that has an invalid type");
		return;
	}
	if (!IS_CRIME_TALLIED(bParam0))
	{
		return;
	}
	iVar0 = GET_CRIME_FACTION(bParam0);
	Function_792(iVar0, Function_836(bParam0));
	(*&Global_26401 + 36[iVar0181][GET_CRIME_TYPE(bParam0)5])[GET_CRIME_WITNESSED(bParam0)] = ((*&Global_26401 + 36[iVar0181][GET_CRIME_TYPE(bParam0)5])[GET_CRIME_WITNESSED(bParam0)] - 1);
	if (GET_CRIME_WITNESSED(bParam0) == 3)
	{
		iVar1 = Function_835(GET_CRIME_TYPE(bParam0));
		if (iVar1 != 4294967295)
		{
			Function_294(iVar1, 1, 0);
		}
	}
	SET_CRIME_TALLIED(bParam0, 0);
	return;
}

void Function_879(bool bParam0) //Position: 0x30171 / 196977
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	
	if (!Function_350(0x40000000))
	{
		DESTROY_OBJECT(bParam0);
		return;
	}
	if (!Function_521(0))
	{
		DESTROY_OBJECT(bParam0);
		return;
	}
	if (((IS_SCRIPT_VALID(Global_26316.f_60) || IS_SCRIPT_VALID(Global_26316.f_64)) || Global_3403) || Global_3404)
	{
		DESTROY_OBJECT(bParam0);
		return;
	}
	if ((((Global_3384 || Global_3380) || Global_3378) || Global_3385) || Global_3367)
	{
		DESTROY_OBJECT(bParam0);
		return;
	}
	if (Global_29007 == 3 && Global_29007 == 4)
	{
		DESTROY_OBJECT(bParam0);
		return;
	}
	bVar0 = GET_EVENT_TARGET_AS_OBJECT(bParam0);
	bVar1 = GET_EVENT_PERPETRATOR(bParam0);
	if (IS_OBJECT_VALID(bVar0))
	{
		if (DECOR_CHECK_EXIST(bVar0, "nocrime"))
		{
			DESTROY_OBJECT(bParam0);
			return;
		}
	}
	iVar2 = GET_EVENT_TYPE(bParam0);
	if (((iVar2 == 5 && iVar2 == 91) && iVar2 == 2) && iVar2 == 17)
	{
		DESTROY_OBJECT(bParam0);
		return;
	}
	if (!IS_OBJECT_VALID(bVar1))
	{
		if (DECOR_CHECK_EXIST(bParam0, "Perpetrator"))
		{
			bVar1 = DECOR_GET_OBJECT(bParam0, "Perpetrator");
		}
	}
	if (GET_OBJECT_TYPE(bVar0) == 15)
	{
		bVar3 = GET_ACTOR_FROM_OBJECT(bVar0);
	}
	else if (GET_OBJECT_TYPE(bVar0) == 24)
	{
		bVar3 = GET_ACTOR_FROM_PERS_CHAR(GET_PERS_CHAR_FROM_OBJECT(bVar0));
	}
	else
	{
		DESTROY_OBJECT(bParam0);
		return;
	}
	if (GET_OBJECT_TYPE(bVar1) == 15)
	{
		bVar4 = GET_ACTOR_FROM_OBJECT(bVar1);
	}
	if (!IS_ACTOR_VALID(bVar4))
	{
		DESTROY_OBJECT(bParam0);
		return;
	}
	if (!IS_ACTOR_HUMAN(bVar4))
	{
		DESTROY_OBJECT(bParam0);
		return;
	}
	if (!IS_ACTOR_HUMAN(bVar3))
	{
		DESTROY_OBJECT(bParam0);
		return;
	}
	if (DECOR_CHECK_EXIST(bVar4, "nocrime"))
	{
		DESTROY_OBJECT(bParam0);
		return;
	}
	if (!IS_ACTOR_VALID(bVar3))
	{
		DESTROY_OBJECT(bParam0);
		return;
	}
	if (GET_ACTOR_FACTION(bVar4) == Global_26361)
	{
		DESTROY_OBJECT(bParam0);
		return;
	}
	if (bVar3 == Function_176())
	{
		if (Function_881(Function_176(), 1) || DECOR_CHECK_EXIST(bVar0, "wasstickup"))
		{
			DESTROY_OBJECT(bParam0);
			return;
		}
	}
	if (Global_26391 > 1.0f)
	{
		Global_26391 = GET_CURRENT_GAME_TIME();
	}
	Global_26391.f_4 = GET_CURRENT_GAME_TIME();
	Global_26391.f_24++;
	GET_OBJECT_POSITION(bParam0, &Global_26391 + 8);
	Global_26391.f_20 = bVar3;
	if (!IS_OBJECTSET_VALID(Global_26391.f_28))
	{
		Global_26391.f_28 = CREATE_OBJECTSET_IN_LAYOUT("AICriminals", Global_26314, 15, 1);
	}
	if (!IS_OBJECT_IN_OBJECTSET(bVar4, Global_26391.f_28))
	{
		ADD_OBJECT_TO_OBJECTSET(bVar4, Global_26391.f_28);
		if (bVar3 != Function_176())
		{
			Function_98(bVar4);
		}
		SET_FACTION_STATUS_TO_INDIVIDUAL_ACTOR(Global_26361, bVar4, 4);
		Function_880(bVar4, 0);
	}
	DESTROY_OBJECT(bParam0);
	return;
}

void Function_880(bool bParam0, bool bParam1) //Position: 0x303D8 / 197592
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	DECOR_SET_INT(bParam0, "honor", bParam1);
	return;
}

int Function_881(bool bParam0, int iParam1) //Position: 0x303F8 / 197624
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	if (!IS_ACTOR_VALID(bParam0))
	{
		return 0;
	}
	bVar0 = CREATE_OBJECT_ITERATOR(Global_26314);
	bVar1 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(Global_26314, "CurrentCrimes"));
	Function_841(bVar0, bVar1);
	bVar2 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar2))
	{
		bVar3 = GET_CRIME_FROM_OBJECT(bVar2);
		if (GET_CRIME_CRIMINAL(bVar3) != bParam0 && Global_26998[GET_CRIME_TYPE(bVar3)18].f_24 <= iParam1)
		{
			DESTROY_ITERATOR(bVar0);
			return 1;
		}
		bVar2 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	DESTROY_ITERATOR(bVar0);
	return 0;
}

void Function_882(bool bParam0, bool bParam1) //Position: 0x3047B / 197755
{
	ITERATE_EVERYWHERE(bParam0);
	ITERATE_ON_OBJECT_TYPE(bParam0, 3);
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

void Function_883(bool bParam0, bool bParam1) //Position: 0x304A9 / 197801
{
	bool bVar0;
	bool bVar1;
	
	Function_841(bParam0, bParam1);
	bVar0 = START_OBJECT_ITERATOR(bParam0);
	while (IS_OBJECT_VALID(bVar0))
	{
		bVar1 = GET_CRIME_FROM_OBJECT(bVar0);
		SET_CRIME_WITNESSED(bVar1, true);
		if (IS_CRIME_IN_PROGRESS(bVar1))
		{
			SET_CRIME_IN_PROGRESS(bVar1, 0);
		}
		SET_CRIME_END_TIMESTAMP(bVar1, ((GET_CURRENT_GAME_TIME() - Global_26998[GET_CRIME_TYPE(bVar1)18].f_32) - 1.0f));
		bVar0 = OBJECT_ITERATOR_NEXT(bParam0);
	}
	if (IS_SCRIPT_VALID(Global_26316.f_64))
	{
		TERMINATE_SCRIPT(Global_26316.f_64);
	}
	return;
}

void Function_884(bool bParam0, bool bParam1, bool bParam2) //Position: 0x30514 / 197908
{
	bool bVar0;
	bool bVar1;
	
	Function_841(bParam0, bParam1);
	bVar0 = START_OBJECT_ITERATOR(bParam0);
	while (IS_OBJECT_VALID(bVar0))
	{
		bVar1 = GET_CRIME_FROM_OBJECT(bVar0);
		if (IS_CRIME_IN_PROGRESS(bVar1))
		{
			SET_CRIME_IN_PROGRESS(bVar1, 0);
		}
		switch (GET_CRIME_WITNESSED(bVar1))
		{
			case 0x00000001:
			case 0x00000002:
				ADD_OBJECT_TO_OBJECTSET(GET_OBJECT_FROM_CRIME(bVar1), bParam2);
				REMOVE_OBJECT_FROM_OBJECTSET(GET_OBJECT_FROM_CRIME(bVar1), bParam1);
				break;
			
			case 0x00000003:
				if (Function_838(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Global_26376) && !IS_CRIME_TALLIED(bVar1))
				{
					Function_832(bVar1);
				}
				Function_831(bVar1);
				break;
			
			default:
				Function_832(bVar1);
				Function_831(bVar1);
				break;
		}
		bVar0 = OBJECT_ITERATOR_NEXT(bParam0);
	}
	return;
}

void Function_885(bool bParam0, bool bParam1) //Position: 0x305B2 / 198066
{
	bool bVar0;
	bool bVar1;
	
	Function_841(bParam0, bParam1);
	bVar0 = START_OBJECT_ITERATOR(bParam0);
	while (IS_OBJECT_VALID(bVar0))
	{
		bVar1 = GET_CRIME_FROM_OBJECT(bVar0);
		if (GET_CRIME_WITNESSED(bVar1) != 3 && !IS_CRIME_TALLIED(bVar1))
		{
			Function_832(bVar1);
		}
		else if (IS_CRIME_IN_PROGRESS(bVar1))
		{
		}
		else if (!GET_CRIME_WITNESSED(bVar1) != 3)
		{
		}
		else if (IS_CRIME_TALLIED(bVar1))
		{
		}
		bVar0 = OBJECT_ITERATOR_NEXT(bParam0);
	}
	return;
}

void Function_886(bool bParam0, bool bParam1, bool bParam2) //Position: 0x3061A / 198170
{
	bool bVar0;
	bool bVar1;
	
	Function_841(bParam0, bParam1);
	bVar0 = START_OBJECT_ITERATOR(bParam0);
	while (IS_OBJECT_VALID(bVar0))
	{
		bVar1 = GET_CRIME_FROM_OBJECT(bVar0);
		switch (GET_CRIME_WITNESSED(bVar1))
		{
			case 0x00000001:
				ADD_OBJECT_TO_OBJECTSET(GET_OBJECT_FROM_CRIME(bVar1), bParam2);
				REMOVE_OBJECT_FROM_OBJECTSET(GET_OBJECT_FROM_CRIME(bVar1), bParam1);
				break;
			
			case 0x00000002:
				if (!Global_3404)
				{
					ADD_OBJECT_TO_OBJECTSET(GET_OBJECT_FROM_CRIME(bVar1), bParam2);
					REMOVE_OBJECT_FROM_OBJECTSET(GET_OBJECT_FROM_CRIME(bVar1), bParam1);
				}
				else
				{
					SET_CRIME_WORLD_REGION(bVar1, Global_26361.f_12);
				}
				break;
			
			default:
				Function_831(bVar1);
				break;
		}
		if (IS_CRIME_IN_PROGRESS(bVar1))
		{
			if (!GET_CRIME_WITNESSED(bVar1) != 2 || !Global_3404)
			{
				SET_CRIME_IN_PROGRESS(bVar1, 0);
			}
		}
		bVar0 = OBJECT_ITERATOR_NEXT(bParam0);
	}
	return;
}

void Function_887(bool bParam0, var uParam1) //Position: 0x306C7 / 198343
{
	bool bVar0;
	bool bVar1;
	
	Function_841(bParam0, uParam1);
	bVar0 = START_OBJECT_ITERATOR(bParam0);
	while (IS_OBJECT_VALID(bVar0))
	{
		bVar1 = GET_CRIME_FROM_OBJECT(bVar0);
		if (IS_CRIME_IN_PROGRESS(bVar1))
		{
			SET_CRIME_IN_PROGRESS(bVar1, 0);
		}
		Function_832(bVar1);
		Function_831(bVar1);
		bVar0 = OBJECT_ITERATOR_NEXT(bParam0);
	}
	return;
}

void Function_888() //Position: 0x3070D / 198413
{
	vector3 vVar0;
	
	if (Function_1())
	{
		if (IS_BLIP_VALID(Global_26361.f_28))
		{
			REMOVE_BLIP(Global_26361.f_28);
		}
		return;
	}
	if (IS_BLIP_VALID(Global_26361.f_28))
	{
		return;
	}
	if (!IS_OBJECT_VALID(Global_26361.f_24))
	{
		if (IS_BLIP_VALID(Global_26361.f_28))
		{
			REMOVE_BLIP(Global_26361.f_28);
		}
		return;
	}
	if (Function_344(0, 0, 1, 1))
	{
		if (IS_BLIP_VALID(Global_26361.f_28))
		{
			REMOVE_BLIP(Global_26361.f_28);
		}
		return;
	}
	if (Global_26401[StackVal] < 0)
	{
		if (IS_BLIP_VALID(Global_26361.f_28))
		{
			REMOVE_BLIP(Global_26361.f_28);
		}
		return;
	}
	Global_26361.f_28 = ADD_BLIP_FOR_OBJECT(Global_26361.f_24, 346, 0f, 2, 0);
	UNK_0x1E98AFEC(Global_26361.f_28, 1);
	SET_BLIP_MAX_DISTANCE(Global_26361.f_28, 1,25f);
	GET_OBJECT_POSITION(Global_26361.f_24, &vVar0);
	Function_129(StackVal, StackVal, Global_26361.f_12, 19, vVar0, 63);
	return;
}

void Function_889() //Position: 0x307DE / 198622
{
	char* cVar0[8];
	var uVar2;
	int iVar3;
	
	if (((((Function_284(StackVal) < 0 || (Global_29006 != Global_30707[2] && Function_284(1) < 0)) && !Global_3403) && !Global_3404) && !Function_1()) && Function_350(1048576))
	{
		if (IS_OBJECT_VALID(Global_26361.f_24) && IS_ACTOR_VALID(Function_176()))
		{
			if (!Function_43(Global_76846, 16384))
			{
				if (Global_3365 && !IS_SCRIPT_VALID(Global_26316.f_60))
				{
					if (Function_896())
					{
						if ((((!Function_195() && UI_IS_MESSAGE_QUEUE_EMPTY(1)) && !HUD_IS_FADED()) && !HUD_IS_FADING()) && !IS_SCRIPT_VALID(Global_26316.f_64))
						{
							Global_26316.f_60 = LAUNCH_NEW_SCRIPT("content/Ambient/CrimeResponse/event_first_pay_cutscene", 0);
							Function_312(&Global_76846, 16384);
						}
					}
				}
			}
			if (IS_ACTOR_IN_VOLUME(Function_176(), GET_VOLUME_FROM_OBJECT(Global_26361.f_24)) && GET_ATTACHED_HOGTIE_VICTIM(Function_176()) != "")
			{
				if (Function_894())
				{
					if (!IS_SCRIPT_VALID(Global_26316.f_64) && !IS_SCRIPT_VALID(Global_26316.f_60))
					{
						if (!IS_SCRIPT_USE_CONTEXT_VALID(Global_26361.f_32) && !Function_350(2097152))
						{
							Global_26361.f_32 = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("clear_bounty", GET_VOLUME_FROM_OBJECT(Global_26361.f_24), 25, 4, 0, false, 0, 0, 4294967295, 0);
							strcpy(&cVar0, Function_891(Function_284(StackVal)), 8);
							if (Global_29006 == Global_30707[2])
							{
								strcpy(&cVar0, Function_891(Function_284(1)), 8);
							}
							SET_USE_CONTEXT_TEXT(Global_26361.f_32, "clear_bounty", &cVar0, 0, 0, 0);
						}
						if (!IS_SCRIPT_USE_CONTEXT_VALID(Global_26361.f_36))
						{
							if (HAS_ITEM(Function_37(9), Function_176()))
							{
								Global_26361.f_36 = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("give_pardon_letter", GET_VOLUME_FROM_OBJECT(Global_26361.f_24), 1, 5, 0, false, 0, 0, 4294967295, 0);
							}
						}
					}
					if (IS_SCRIPT_USE_CONTEXT_VALID(Global_26361.f_32))
					{
						if (WAS_SCRIPT_USE_CONTEXT_EVER_PRESSED(Global_26361.f_32))
						{
							if (Function_174() >= 0)
							{
								Global_26316.f_60 = LAUNCH_NEW_SCRIPT_WITH_ARGS("content/Ambient/CrimeResponse/event_pay_bounty", &uVar2, 1, 0);
								RELEASE_SCRIPT_USE_CONTEXT(Global_26361.f_32);
								if (IS_SCRIPT_USE_CONTEXT_VALID(Global_26361.f_36))
								{
									RELEASE_SCRIPT_USE_CONTEXT(Global_26361.f_36);
								}
							}
							else
							{
								Function_13("bounty_clear_no_funds", 0x41200000, 1, 0, 2, 1, 0);
								if (!Function_43(Global_76846, 262144))
								{
									Function_38(Function_176(), 262144, 1, 0);
								}
								RELEASE_SCRIPT_USE_CONTEXT(Global_26361.f_32);
								Function_338(2097152);
							}
							strcpy(&Global_13095, "", 64);
						}
					}
					if (IS_SCRIPT_USE_CONTEXT_VALID(Global_26361.f_36))
					{
						if (WAS_SCRIPT_USE_CONTEXT_EVER_PRESSED(Global_26361.f_36))
						{
							RELEASE_SCRIPT_USE_CONTEXT(Global_26361.f_36);
							RELEASE_SCRIPT_USE_CONTEXT(Global_26361.f_32);
							if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(Global_26361.f_24)))
							{
								REMOVE_BLIP(GET_BLIP_ON_OBJECT(Global_26361.f_24));
							}
							iVar3 = 1;
							Global_26316.f_60 = LAUNCH_NEW_SCRIPT_WITH_ARGS("content/Ambient/CrimeResponse/event_pay_bounty", &iVar3, 1, 0);
							strcpy(&Global_13095, "", 64);
						}
					}
				}
				else
				{
					Function_890();
				}
			}
			else
			{
				Function_890();
				Function_552(2097152);
			}
			if (Function_344(0, 0, 1, 1))
			{
				if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(Global_26361.f_24)))
				{
					REMOVE_BLIP(GET_BLIP_ON_OBJECT(Global_26361.f_24));
				}
			}
		}
		else
		{
			Function_890();
			Function_552(2097152);
		}
	}
	else if (Global_3403 || Global_3404)
	{
		Function_890();
		if (IS_OBJECT_VALID(Global_26361.f_24))
		{
			if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(Global_26361.f_24)))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(Global_26361.f_24));
			}
		}
	}
	return;
}

void Function_890() //Position: 0x30B86 / 199558
{
	if (IS_SCRIPT_USE_CONTEXT_VALID(Global_26361.f_32))
	{
		RELEASE_SCRIPT_USE_CONTEXT(Global_26361.f_32);
	}
	if (IS_SCRIPT_USE_CONTEXT_VALID(Global_26361.f_36))
	{
		RELEASE_SCRIPT_USE_CONTEXT(Global_26361.f_36);
	}
	return;
}

int Function_891(int iParam0) //Position: 0x30BB2 / 199602
{
	return Function_892(iParam0);
}

int Function_892(bool bParam0) //Position: 0x30BBD / 199613
{
	bool bVar0;
	
	bVar0 = Function_893();
	UI_SET_STRING(bVar0, I2STR(bParam0));
	return bVar0;
}

var Function_893() //Position: 0x30BD4 / 199636
{
	Global_6285 = (Global_6285 + 1 % 10);
	switch (Global_6285)
	{
		case 0x00000001:
			return "POD2ST1";
		
		case 0x00000002:
			return "POD2ST2";
		
		case 0x00000003:
			return "POD2ST3";
		
		case 0x00000004:
			return "POD2ST4";
		
		case 0x00000005:
			return "POD2ST5";
		
		case 0x00000006:
			return "POD2ST6";
		
		case 0x00000007:
			return "POD2ST7";
		
		case 0x00000008:
			return "POD2ST8";
		
		case 0x00000009:
			return "POD2ST9";
		
		default:
	}
	return "POD2ST0";
}

bool Function_894() //Position: 0x30C90 / 199824
{
	if (Global_29006 == Global_30640[0])
	{
		if (Function_895(&Global_6298, &Global_7189, 12))
		{
			return 1;
		}
	}
	if (Global_29006 == Global_30668[0])
	{
		if (Function_895(&Global_6563, &Global_7581, 18))
		{
			return 1;
		}
	}
	if (Global_29006 == Global_30658[4])
	{
		if (Function_895(&Global_6537, &Global_7543, 1))
		{
			return 1;
		}
	}
	if (Global_29006 == Global_30693[0])
	{
		if (Function_895(&Global_6815, &Global_7954, 7))
		{
			return 1;
		}
	}
	if (Global_29006 == Global_30693[1])
	{
		if (Function_895(&Global_6866, &Global_8030, 8))
		{
			return 1;
		}
	}
	if (Global_29006 == Global_30707[2])
	{
		if (Function_895(&Global_6933, &Global_8129, 2))
		{
			return 1;
		}
	}
	if (Global_29006 == Global_30723[1])
	{
		if (Function_895(&Global_7148, &Global_8447, 0))
		{
			return 1;
		}
	}
	if (Global_29006 == Global_30723[2])
	{
		if (Function_895(&Global_7113, &Global_8395, 8))
		{
			return 1;
		}
	}
	if (Global_29006 == Global_30717[0])
	{
		if (Function_895(&Global_7035, &Global_8279, 20))
		{
			return 1;
		}
	}
	return 0;
}

bool Function_895(var uParam0, int iParam1, int iParam2) //Position: 0x30DA7 / 200103
{
	if (!Function_530(uParam0[iParam22], 4))
	{
		if (IS_PERS_CHAR_ALIVE(StackVal))
		{
			return 1;
		}
	}
	return 0;
}

bool Function_896() //Position: 0x30DCC / 200140
{
	if ((Global_29006 != Global_30640[0] || Global_29006 != Global_30668[0]) || Global_29006 != Global_30658[4])
	{
		if ((Global_3386 && !Function_100(12, 0)) && !Function_344(0, 0, 1, 1))
		{
			return 1;
		}
	}
	return 0;
}

void Function_897(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x30E0F / 200207
{
	if (!IS_LAYOUTREF_VALID(Global_26314))
	{
		Global_26314 = CREATE_LAYOUT("Crime");
	}
	if (!IS_ITERATOR_VALID(*uParam0))
	{
		*uParam0 = CREATE_OBJECT_ITERATOR(Global_26314);
	}
	if (!IS_ITERATOR_VALID(*uParam1))
	{
		*uParam1 = CREATE_OBJECT_ITERATOR(Global_26314);
	}
	if (!IS_OBJECTSET_VALID(Global_26315))
	{
		Global_26315 = CREATE_OBJECTSET_IN_LAYOUT("nNewCrimes", Global_26314, 3, 1);
	}
	if (!IS_OBJECTSET_VALID(*uParam2))
	{
		*uParam2 = CREATE_OBJECTSET_IN_LAYOUT("CurrentCrimes", Global_26314, 31, 1);
	}
	if (!IS_OBJECTSET_VALID(*uParam3))
	{
		*uParam3 = CREATE_OBJECTSET_IN_LAYOUT("nOldCrimes", Global_26314, 31, 1);
	}
	if (!IS_OBJECTSET_VALID(*uParam4))
	{
		*uParam4 = CREATE_OBJECTSET_IN_LAYOUT("nSharedLaw", Global_26314, 4294967295, 1);
	}
}

void Function_898() //Position: 0x30EDF / 200415
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Function_473((*&Global_26316 + 88)[iVar0]) || Global_3364)
		{
			Function_472(iVar0, 2, CEIL((IntToFloat(Function_239(RAND_INT_RANGE(1800, 2400))) / 60.0f)), 0, 0);
		}
		iVar0++;
	}
	return;
}

