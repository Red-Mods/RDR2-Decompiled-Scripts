//Decompiled with MagicRDR v1.0
//Function Count : 922
//Statics Count : 770
//Natives Count : 765
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
	var uLocal_527 = 0;
	var uLocal_528 = 0;
	var uLocal_529 = 0;
	var uLocal_530 = 0;
	int iLocal_531 = 0;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	int iLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	int iLocal_537 = 0;
	var uLocal_538 = 0;
	var uLocal_539 = 0;
	int iLocal_540 = 0;
	int iLocal_541 = 0;
	vector3 vLocal_542[5] = {{ 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } };
	bool bLocal_558[6] = { false, false, false, false, false, false };
	int iLocal_565 = 0;
	int iLocal_566 = 0;
	bool bLocal_567 = false;
	vector3 vLocal_568 = { 0.0f, 0.0f, 0.0f };
	float fLocal_571 = 0.0f;
	bool bLocal_572 = false;
	bool bLocal_573 = false;
	bool bLocal_574 = false;
	int iLocal_575 = 0;
	vector3 vLocal_576 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_579 = { 0.0f, 0.0f, 0.0f };
	bool bLocal_582 = false;
	bool bLocal_583 = false;
	bool bLocal_584 = false;
	bool bLocal_585 = false;
	struct<9> Local_586[20];
	bool bLocal_767 = false;
	bool bLocal_768 = false;
	float fLocal_769 = 0.0f;
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
	iLocal_565 = 0;
	iLocal_566 = 0;
	bLocal_572 = false;
	bLocal_573 = false;
	iLocal_575 = 0;
	Function_810(&(vLocal_586[49]));
	Function_766(&(vLocal_586[69]));
	Function_639(&(vLocal_586[59]));
	Function_616(&(vLocal_586[79]));
	Function_592(&(vLocal_586[89]));
	Function_572(&(vLocal_586[99]));
	Function_564(&(vLocal_586[109]));
	Function_560(&(vLocal_586[119]));
	Function_532(&(vLocal_586[129]));
	Function_502(&(vLocal_586[139]));
	Function_479(&(vLocal_586[149]));
	Function_474(&(vLocal_586[159]));
	Function_470(&(vLocal_586[169]));
	Function_439(&(vLocal_586[199]));
	Function_379(&(vLocal_586[09]));
	Function_182(&(vLocal_586[19]));
	Function_113(&(vLocal_586[29]));
	Function_76(&(vLocal_586[39]));
	Function_34(&(vLocal_586[179]));
	Function_6(&(vLocal_586[189]));
	iVar0 = 0;
	while (iVar0 <= vLocal_586)
	{
		if (!IS_EXITFLAG_SET())
		{
			if (vLocal_586[iVar09].f_28 || !Global_34165.f_44)
			{
				Call_Loc(vLocal_586[iVar09]);
				vLocal_586[iVar09].f_32 = 1;
				if (UNK_0x26884138() <= 50000)
				{
					WAIT(false);
				}
			}
			else
			{
				vLocal_586[iVar09].f_32 = 0;
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
		bLocal_767 = 1000;
		SET_DEBUG_DRAW((((((Global_30900[0] || Global_30900[1]) || Global_30900[2]) || Global_30900[3]) || Global_30900[17]) || Global_30900[4]));
		if (GET_DEBUG_DRAW_STATE())
		{
			bLocal_767 = false;
		}
		iVar0 = 0;
		while (iVar0 <= vLocal_586)
		{
			if (vLocal_586[iVar09].f_28 || !Function_1())
			{
				if (bLocal_768)
				{
					PRINTSTRING("Time for Exec ");
					PRINTSTRING(&vLocal_586[iVar09] + 12);
					PRINTSTRING(": ");
					fLocal_769 = GET_PROFILE_TIME();
				}
				Call_Loc(vLocal_586[iVar09].y);
				if (StackVal)
				{
					bLocal_767 = false;
				}
				if (bLocal_768)
				{
					PRINTFLOAT((GET_PROFILE_TIME() - fLocal_769));
					PRINTNL();
				}
				if (!IS_EXITFLAG_SET() && !bLocal_767 != 0)
				{
					bLocal_767 = (bLocal_767 - 33);
					WAIT(false);
				}
			}
			iVar0++;
		}
		if (!IS_EXITFLAG_SET())
		{
			WAIT(bLocal_767);
		}
	}
	iVar0 = 0;
	while (iVar0 <= vLocal_586)
	{
		if (vLocal_586[iVar09].f_32)
		{
			Call_Loc(vLocal_586[iVar09].z);
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
	*iParam0 = 4614;
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
	Function_25();
	Function_20();
	if (Global_34165.f_44)
	{
		Function_9();
	}
	return 0;
}

void Function_9() //Position: 0x394 / 916
{
	if (!HAS_ACHIEVEMENT_BEEN_PASSED(50) || !HAS_ACHIEVEMENT_BEEN_PASSED(55))
	{
		if (!Function_19((*&Global_84611[0140] + 16)[0], 32))
		{
			Function_10();
		}
	}
	return;
}

void Function_10() //Position: 0x3C2 / 962
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_17();
	iVar0 = 0;
	while (iVar0 <= 20)
	{
		iVar1 = Function_16(iVar0);
		if (iVar1 >= 0)
		{
			if (!Function_19((*&Global_84611[iVar0140] + 16)[0], 1))
			{
				if (Function_12(iVar1, iVar0))
				{
					Function_11(&Global_84611[iVar0140] + 16[0], 1);
				}
				return;
			}
		}
		iVar0++;
	}
	return;
}

void Function_11(var uParam0, int iParam1) //Position: 0x41F / 1055
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

bool Function_12(int iParam0, int iParam1) //Position: 0x42E / 1070
{
	var uVar0[67];
	
	if (!Function_19((*&Global_84611[iParam1140] + 16)[0], 2))
	{
		if (!NET_CHALLENGE_LB_DOES_READER_EXIST())
		{
			if (NET_CHALLENGE_LB_CREATE_READER(iParam0, 0))
			{
				Function_11(&Global_84611[iParam1140] + 16[0], 2);
				iLocal_540 = 0;
				iLocal_541 = 0;
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
	if (Function_19((*&Global_84611[iParam1140] + 16)[0], 2))
	{
		if (NET_CHALLENGE_LB_DOES_READER_EXIST())
		{
			if (NET_CHALLENGE_LB_IS_READ_COMPLETE())
			{
				if (NET_CHALLENGE_LB_IS_LOCAL_GAMER_INFO_VALID())
				{
					if (NET_CHALLENGE_LB_GET_LOCAL_GAMER_STATS(&uVar0))
					{
						Function_14(iParam1, uVar0[13]);
					}
				}
				Function_13(&Global_84611[iParam1140] + 16[0], 2);
				NET_CHALLENGE_LB_DESTROY_READER();
				return 1;
			}
			if (iLocal_540 <= 30)
			{
				iLocal_540++;
			}
			else
			{
				Function_13(&Global_84611[iParam1140] + 16[0], 2);
				NET_CHALLENGE_LB_DESTROY_READER();
				return 1;
			}
		}
		if (iLocal_541 <= 30)
		{
			iLocal_541++;
		}
		else
		{
			Function_13(&Global_84611[iParam1140] + 16[0], 2);
			return 1;
		}
	}
	return 0;
}

void Function_13(int iParam0, int iParam1) //Position: 0x54F / 1359
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
	return;
}

void Function_14(int iParam0, int iParam1) //Position: 0x562 / 1378
{
	switch (iParam0)
	{
		case 0x00000000:
			Function_15(iParam0, iParam1);
			break;
		
		case 0x00000001:
			Function_15(iParam0, iParam1);
			break;
		
		case 0x00000002:
			Function_15(iParam0, iParam1);
			break;
		
		case 0x00000003:
			Function_15(iParam0, iParam1);
			break;
		
		case 0x00000004:
			Function_15(iParam0, iParam1);
			break;
		
		case 0x00000005:
			Function_15(iParam0, iParam1);
			break;
		
		case 0x00000006:
			Function_15(iParam0, iParam1);
			break;
		
		case 0x00000007:
			Function_15(iParam0, iParam1);
			break;
		
		case 0x00000008:
			Function_15(iParam0, iParam1);
			break;
		
		case 0x00000009:
			Function_15(iParam0, iParam1);
			break;
		
		case 0x0000000A:
			Function_15(iParam0, iParam1);
			break;
		
		case 0x0000000B:
			Function_15(iParam0, iParam1);
			break;
	}
	return;
}

void Function_15(int iParam0, int iParam1) //Position: 0x62F / 1583
{
	if (iParam1 >= 0)
	{
		Function_11(&Global_84611[iParam0140] + 16[0], 4);
	}
	return;
}

int Function_16(int iParam0) //Position: 0x64C / 1612
{
	switch (iParam0)
	{
		case 0x00000000:
			return 33;
			break;
		
		case 0x00000001:
			return 34;
			break;
		
		case 0x00000002:
			return 35;
			break;
		
		case 0x00000003:
			return 36;
			break;
		
		case 0x00000004:
			return 38;
			break;
		
		case 0x00000005:
			return 39;
			break;
		
		case 0x00000006:
			return 47;
			break;
		
		case 0x00000007:
			return 88;
			break;
		
		case 0x00000008:
			return 89;
			break;
		
		case 0x00000009:
			return 90;
			break;
		
		case 0x0000000A:
			return 91;
			break;
		
		case 0x0000000B:
			return 92;
			break;
	}
	return 4294967295;
}

void Function_17() //Position: 0x6EA / 1770
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 <= 20)
	{
		if (Function_16(iVar0) >= 0)
		{
			iVar2++;
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 20)
	{
		if (Function_19((*&Global_84611[iVar0140] + 16)[0], 1))
		{
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	if (iVar1 == iVar2)
	{
		Function_18();
		Function_11(&Global_84611[0140] + 16[0], 32);
	}
	return;
}

void Function_18() //Position: 0x769 / 1897
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (Function_19((*&Global_84611[iVar0140] + 16)[0], 4))
		{
			iVar2++;
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 <= 6)
	{
		if (Function_19((*&Global_84611[iVar1 + 6140] + 16)[0], 4))
		{
			iVar3++;
		}
		iVar1++;
	}
	if (iVar2 > 6)
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(50))
		{
			AWARD_ACHIEVEMENT(50);
		}
	}
	if (iVar3 > 6)
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(55))
		{
			AWARD_ACHIEVEMENT(55);
		}
	}
	return;
}

bool Function_19(bool bParam0, bool bParam1) //Position: 0x7F3 / 2035
{
	return (bParam0 && bParam1) == 0;
}

void Function_20() //Position: 0x800 / 2048
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
			Function_21();
		}
		else
		{
			Global_88794 = 0;
		}
	}
	return;
}

void Function_21() //Position: 0x84B / 2123
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_24();
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
					if (Function_23(iVar1, iVar0))
					{
						Global_84611[iVar0140].f_76 = 1;
					}
				}
				else if (Function_22(iVar1, iVar0))
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

bool Function_22(int iParam0, int iParam1) //Position: 0x8C5 / 2245
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
				iLocal_540 = 0;
				iLocal_541 = 0;
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
					else
					{
						(*&Global_84611[iParam1140] + 144)[512] = 0.0f;
					}
				}
				else
				{
					(*&Global_84611[iParam1140] + 144)[512] = 0.0f;
				}
				Global_87412[iParam169].f_8 = 0;
				NET_CHALLENGE_LB_DESTROY_READER();
				return 1;
			}
			if (iLocal_540 <= 30)
			{
				iLocal_540++;
			}
			else
			{
				Global_87412[iParam169].f_8 = 0;
				NET_CHALLENGE_LB_DESTROY_READER();
				return 1;
			}
		}
		if (iLocal_541 <= 30)
		{
			iLocal_541++;
		}
		else
		{
			Global_87412[iParam169].f_8 = 0;
			return 1;
		}
	}
	return 0;
}

bool Function_23(int iParam0, int iParam1) //Position: 0xC8F / 3215
{
	var uVar0[67];
	var uVar68[67];
	var uVar136[67];
	
	if (Function_19(Global_88819[iParam1], 2))
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
				iLocal_540 = 0;
				iLocal_541 = 0;
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
				if (Function_19(Global_88819[iParam1], 1))
				{
					if (!Function_19(Global_88819[iParam1], 2))
					{
						Function_11(&(Global_88819[iParam1]), 2);
					}
				}
				return 1;
			}
			if (iLocal_540 <= 30)
			{
				iLocal_540++;
			}
			else
			{
				Global_87412[iParam169].f_8 = 0;
				NET_CHALLENGE_LB_DESTROY_READER();
				return 1;
			}
		}
		if (iLocal_541 <= 30)
		{
			iLocal_541++;
		}
		else
		{
			Global_87412[iParam169].f_8 = 0;
			return 1;
		}
	}
	return 0;
}

void Function_24() //Position: 0xE67 / 3687
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

void Function_25() //Position: 0xF1B / 3867
{
	if (Global_88793)
	{
		if ((GET_CURRENT_GAME_TIME() - Global_88818) < IntToFloat(SC_CHALLENGE_GET_MIN_SUBMIT_DELAY_SECS()) && Global_88818 < 0.0f)
		{
			Function_26(1);
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

void Function_26(var uParam0) //Position: 0xF6F / 3951
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
						Function_29(iVar1, iVar0, 4294967295, Global_84611[iVar0140].f_68);
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
			Function_27();
		}
		iVar0++;
	}
	return;
}

void Function_27() //Position: 0x10A5 / 4261
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 20)
	{
		Function_28(iVar0);
		iVar0++;
	}
	return;
}

void Function_28(int iParam0) //Position: 0x10C3 / 4291
{
	if (!Global_84611[iParam0140].f_72)
	{
		Global_87412[iParam069].f_24 = 0;
		Global_87412[iParam069].f_20 = 0;
	}
	return;
}

void Function_29(int iParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x10ED / 4333
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

void Function_30() //Position: 0x1206 / 4614
{
	Function_32(&uLocal_528);
	Function_32(&iLocal_531);
	Function_32(&iLocal_534);
	Function_32(&iLocal_537);
	Function_31();
	return;
}

void Function_31() //Position: 0x1227 / 4647
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 20)
	{
		Function_13(&Global_84611[iVar0140] + 16[0], 1);
		Function_13(&Global_84611[iVar0140] + 16[0], 2);
		Function_13(&Global_84611[iVar0140] + 16[0], 4);
		Function_13(&Global_84611[iVar0140] + 16[0], 8);
		Function_13(&Global_84611[iVar0140] + 16[0], 16);
		Function_13(&Global_84611[iVar0140] + 16[0], 32);
		iVar0++;
	}
	return;
}

void Function_32(int iParam0) //Position: 0x12AC / 4780
{
	Function_33(iParam0, 0.0f);
	return;
}

void Function_33(var uParam0, float fParam1) //Position: 0x12B8 / 4792
{
	uParam0->f_4 = (GET_CURRENT_GAME_TIME() - fParam1);
	Function_11(uParam0, 1);
	Function_13(uParam0, 2);
	uParam0->f_8 = 0.0f;
	return;
}

void Function_34(int iParam0) //Position: 0x12D9 / 4825
{
	strcpy(iParam0 + 12, "ITEMEFFECTS", 16);
	*iParam0 = 11722;
	iParam0->f_4 = 4900;
	iParam0->f_8 = 4879;
	iParam0->f_28 = 1;
	return;
}

void Function_35() //Position: 0x130F / 4879
{
	if (IS_OBJECT_VALID(bLocal_585))
	{
		DESTROY_OBJECT(bLocal_585);
	}
	return;
}

int Function_36() //Position: 0x1324 / 4900
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = 0;
	iVar2 = 0;
	bVar0 = false;
	while (bVar0 <= vLocal_542)
	{
		switch (bVar0)
		{
			case 0x00000000:
				if (vLocal_542[bVar03].z)
				{
					if (vLocal_542[bVar03].y + vLocal_542[bVar03]) > GET_CURRENT_GAME_TIME()
					{
						SET_INFINITE_DEADEYE(0, 0);
						SET_DEADEYE_BLINK(0.0f);
						DECOR_REMOVE(Global_34573, "nmoonshine");
						vLocal_542[bVar03].f_8 = 0;
					}
				}
				else if (DECOR_CHECK_EXIST(Global_34573, "nmoonshine"))
				{
					vLocal_542[bVar03] = DECOR_GET_FLOAT(Global_34573, "nmoonshine");
					vLocal_542[bVar03].f_4 = GET_CURRENT_GAME_TIME();
					vLocal_542[bVar03].f_8 = 1;
					SET_INFINITE_DEADEYE(0, 1);
					SET_DEADEYE_BLINK(10.0f);
				}
				break;
			
			case 0x00000001:
				if (vLocal_542[bVar03].z)
				{
					if (vLocal_542[bVar03].y + vLocal_542[bVar03]) > GET_CURRENT_GAME_TIME()
					{
						if (IS_ACTOR_VALID(bLocal_584) && DECOR_CHECK_EXIST(bLocal_584, "horse_pills_effect"))
						{
							if (HORSE_UNLOCK_FRESHNESS(bLocal_584))
							{
								DECOR_REMOVE(bLocal_584, "horse_pills_effect");
								vLocal_542[bVar03].f_8 = 0;
							}
						}
						else
						{
							vLocal_542[bVar03].f_8 = 0;
						}
					}
				}
				else if (DECOR_CHECK_EXIST(Global_34573, "horse_pills"))
				{
					vLocal_542[bVar03] = DECOR_GET_FLOAT(Global_34573, "horse_pills");
					vLocal_542[bVar03].f_4 = GET_CURRENT_GAME_TIME();
					vLocal_542[bVar03].f_8 = 1;
					bLocal_584 = GET_MOUNT(Global_34573);
					if (IS_ACTOR_VALID(bLocal_584))
					{
						HORSE_SET_CURR_FRESHNESS(bLocal_584, 1.0f);
						HORSE_LOCK_FRESHNESS(bLocal_584);
						DECOR_SET_BOOL(bLocal_584, "horse_pills_effect", true);
					}
					DECOR_REMOVE(Global_34573, "horse_pills");
				}
				break;
			
			case 0x00000002:
				if (vLocal_542[bVar03].z)
				{
					if (DECOR_CHECK_EXIST(Global_34573, "CreateDecal"))
					{
						Function_74();
						if (!DECOR_CHECK_EXIST(Global_34573, "fakeBait"))
						{
							bLocal_567 = ADD_BLIP_FOR_COORD(&vLocal_568, 335, 0f, 2, 0);
						}
						DECOR_REMOVE(Global_34573, "CreateDecal");
					}
					if (Function_72(StackVal, StackVal, Global_34573, vLocal_568) > 5.0f && !HUD_IS_SHOWING_HELP_TEXT())
					{
						Function_69("item_bait_move", 10.0f, 1, 0, 0, 0, 0);
					}
					if (!iLocal_575)
					{
						if (Function_66(StackVal, StackVal, vLocal_576))
						{
						}
						else
						{
							if (IS_BLIP_VALID(bLocal_567))
							{
								REMOVE_BLIP(bLocal_567);
							}
							DECOR_REMOVE(Global_34573, "bait");
							DECOR_REMOVE(Global_34573, "baitSafePos");
							vLocal_542[bVar03].f_8 = 0;
						}
					}
					else if (iLocal_575)
					{
						iVar3 = 1;
						iVar2 = 0;
						while (iVar2 <= bLocal_558)
						{
							if (IS_ACTOR_VALID(bLocal_558[iVar2]))
							{
								iVar3 = 0;
								if (Function_72(StackVal, StackVal, bLocal_558[iVar1], vLocal_568) > 4.0f)
								{
									TASK_PRIORITY_SET(bLocal_558[iVar2], 2);
									SET_ACTOR_UPDATE_PRIORITY(bLocal_558[iVar2], false);
								}
							}
							iVar2++;
						}
					}
					if ((vLocal_542[bVar03].y + vLocal_542[bVar03]) > GET_CURRENT_GAME_TIME() || iVar3)
					{
						if (IS_BLIP_VALID(bLocal_567))
						{
							REMOVE_BLIP(bLocal_567);
						}
						iVar1 = 0;
						while (iVar1 <= bLocal_558)
						{
							if (IS_OBJECT_VALID(bLocal_558[iVar1]))
							{
								RELEASE_ACTOR_AS_AMBIENT(bLocal_558[iVar1]);
							}
							iVar1++;
						}
						iLocal_575 = 0;
						DECOR_REMOVE(Global_34573, "bait");
						DECOR_REMOVE(Global_34573, "baitSafePos");
						vLocal_542[bVar03].f_8 = 0;
					}
					else if (StackVal && Function_72(StackVal, !Function_65(StackVal, StackVal, vLocal_568), Global_34573, vLocal_568) < 200.0f)
					{
						if (IS_BLIP_VALID(bLocal_567))
						{
							REMOVE_BLIP(bLocal_567);
						}
						iVar1 = 0;
						while (iVar1 <= bLocal_558)
						{
							if (IS_OBJECT_VALID(bLocal_558[iVar1]))
							{
								RELEASE_ACTOR_AS_AMBIENT(bLocal_558[iVar1]);
							}
							iVar1++;
						}
						iLocal_575 = 0;
						DECOR_REMOVE(Global_34573, "bait");
						DECOR_REMOVE(Global_34573, "baitSafePos");
						vLocal_542[bVar03].f_8 = 0;
					}
				}
				else if (DECOR_CHECK_EXIST(Global_34573, "bait"))
				{
					if (DECOR_CHECK_EXIST(Global_34573, "CreateDecal"))
					{
						Function_74();
						bLocal_567 = ADD_BLIP_FOR_COORD(&vLocal_568, 335, 0f, 2, 0);
						DECOR_REMOVE(Global_34573, "CreateDecal");
					}
					if (iLocal_566 == 0)
					{
						Function_41(bVar0);
					}
					if (iLocal_566 <= 5)
					{
						if (Function_40(&vLocal_576))
						{
							if (Function_39(StackVal, StackVal, vLocal_576))
							{
								bLocal_572 = true;
							}
						}
					}
					else if (iLocal_566 <= 10)
					{
						if (Function_38(&vLocal_576))
						{
							if (Function_39(StackVal, StackVal, vLocal_576))
							{
								bLocal_572 = true;
							}
						}
					}
					iLocal_566++;
					if (bLocal_572)
					{
						if (IS_OBJECT_VALID(bLocal_574))
						{
							if (NAV_QUERY_IS_DONE(bLocal_574))
							{
								NAV_QUERY_RECEIVE_CAN_PATH_TO_POINT(bLocal_574, &bLocal_573);
								NAV_QUERY_STOP(bLocal_574);
								DESTROY_OBJECT(bLocal_574);
							}
							else
							{
								break;
							}
						}
						if (bLocal_573)
						{
							vLocal_576 = { StackVal, StackVal, vLocal_579 };
						}
						else
						{
							bLocal_574 = CREATE_NAV_QUERY(Global_30616, "item_bait_navquery");
							vLocal_579 = { StackVal, StackVal, vLocal_576 };
							NAV_QUERY_START_CAN_PATH_TO_POINT(bLocal_574, vLocal_579, vLocal_568, bLocal_582);
						}
					}
					if (iLocal_566 < 10 && !bLocal_573)
					{
						DECOR_GET_VECTOR(Global_34573, "baitSafePos", &vLocal_576);
						bLocal_573 = true;
					}
					if (bLocal_573)
					{
						iLocal_566 = 0;
						if (IS_OBJECT_VALID(bLocal_574))
						{
							NAV_QUERY_STOP(bLocal_574);
							DESTROY_OBJECT(bLocal_574);
						}
						AMBIENT_RESET_USED_CELLS();
						vLocal_542[bVar03] = DECOR_GET_FLOAT(Global_34573, "bait");
						vLocal_542[bVar03].f_4 = GET_CURRENT_GAME_TIME();
						vLocal_542[bVar03].f_8 = 1;
					}
				}
				break;
			
			case 0x00000003:
				if (vLocal_542[bVar03].z)
				{
					if (vLocal_542[bVar03].y + vLocal_542[bVar03]) > GET_CURRENT_GAME_TIME()
					{
						DECOR_REMOVE(Global_34573, "survivalist");
						Function_69("item_herbs_end", 10.0f, 1, 0, 0, 0, 0);
						vLocal_542[bVar03].f_8 = 0;
					}
				}
				else if (DECOR_CHECK_EXIST(Global_34573, "survivalist"))
				{
					vLocal_542[bVar03] = DECOR_GET_FLOAT(Global_34573, "survivalist");
					vLocal_542[bVar03].f_4 = GET_CURRENT_GAME_TIME();
					vLocal_542[bVar03].f_8 = 1;
				}
				break;
			
			case 0x00000004:
				if (vLocal_542[bVar03].z)
				{
					if (vLocal_542[bVar03].y + vLocal_542[bVar03]) > GET_CURRENT_GAME_TIME()
					{
						DECOR_REMOVE(Global_34573, "phosphorous");
						Function_69("phosphorous_end", 10.0f, 1, 0, 0, 0, 0);
						vLocal_542[bVar03].f_8 = 0;
						SET_PHOSPHORUS_AMMO_ACTIVE(0);
					}
				}
				else if (DECOR_CHECK_EXIST(Global_34573, "phosphorous"))
				{
					vLocal_542[bVar03] = DECOR_GET_FLOAT(Global_34573, "phosphorous");
					vLocal_542[bVar03].f_4 = GET_CURRENT_GAME_TIME();
					vLocal_542[bVar03].f_8 = 1;
					if (Function_37(19) || Function_37(22))
					{
						vLocal_542[bVar03] = (vLocal_542[bVar03] * 2.0f);
					}
					Function_69("phosphorous_start", 10.0f, 1, 0, 0, 0, 0);
					SET_PHOSPHORUS_AMMO_ACTIVE(1);
				}
				break;
			
			default:
				if (vLocal_542[bVar03].z)
				{
					LOG_ERROR("Melissa needs to build an item effect for this!");
					if (vLocal_542[bVar03].y + vLocal_542[bVar03]) > GET_CURRENT_GAME_TIME()
					{
						vLocal_542[bVar03].f_8 = 1;
					}
				}
				break;
		}
		bVar0++;
	}
	return 0;
}

bool Function_37(int iParam0) //Position: 0x1B39 / 6969
{
	if (Global_28178 == iParam0)
	{
		return 1;
	}
	return 0;
}

bool Function_38(int iParam0) //Position: 0x1B4A / 6986
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
	AMBIENT_SET_SLOPE_FILTER_PRECISE(0.0f, 19.9f, 4.0f);
	AMBIENT_SET_BUMP_FILTER(0.0f, 0.6f, 4.0f);
	return AMBIENT_GET_POINT(iParam0, 0);
}

bool Function_39(vector3 vParam0) //Position: 0x1BB6 / 7094
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

bool Function_40(int iParam0) //Position: 0x1C33 / 7219
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
	AMBIENT_SET_SLOPE_FILTER_PRECISE(0.0f, 9.9f, 4.0f);
	AMBIENT_SET_BUMP_FILTER(0.0f, 0.4f, 4.0f);
	return AMBIENT_GET_POINT(iParam0, 0);
}

void Function_41(int iParam0) //Position: 0x1CA3 / 7331
{
	iLocal_575 = 0;
	bLocal_572 = false;
	bLocal_573 = false;
	vLocal_576 = { 0.0f, 0.0f, 0.0f };
	vLocal_579 = { 0.0f, 0.0f, 0.0f };
	vLocal_568 = { StackVal, StackVal, Global_34574 };
	fLocal_571 = Function_64(Global_34573);
	Function_53(&bLocal_582);
	if (IS_OBJECT_VALID(bLocal_574))
	{
		NAV_QUERY_STOP(bLocal_574);
		DESTROY_OBJECT(bLocal_574);
	}
	if (IS_BLIP_VALID(bLocal_567))
	{
		REMOVE_BLIP(bLocal_567);
	}
	if (!Function_49(Global_34573, 0, 0))
	{
		if (IS_OBJECT_VALID(bLocal_585))
		{
			DESTROY_OBJECT(bLocal_585);
		}
		if (IS_LAYOUTREF_VALID(Global_30616))
		{
			bLocal_585 = CREATE_GRINGO_IN_LAYOUT(Global_30616, "nitem_bait", "nitem_bait", vLocal_568, 0.0f, fLocal_571, 0.0f);
			SNAP_ACTOR_TO_GRINGO(Global_34573, bLocal_585, "UseCase1", 0, 0, 0);
			TASK_USE_GRINGO(Global_34573, GET_GRINGO_FROM_OBJECT(bLocal_585), "UseCase1", 1, 1);
			if (DECOR_CHECK_EXIST(Global_34573, "CreateDecal"))
			{
				Function_74();
				bLocal_567 = ADD_BLIP_FOR_COORD(&vLocal_568, 335, 0f, 2, 0);
				DECOR_REMOVE(Global_34573, "CreateDecal");
			}
		}
		else
		{
			Function_74();
			bLocal_567 = ADD_BLIP_FOR_COORD(&vLocal_568, 335, 0f, 2, 0);
		}
		if (!Function_48(Global_76849, 32))
		{
			HUD_CLEAR_HELP();
			Function_43(Global_34573, 32, 4, 0);
		}
	}
	else
	{
		Function_69("item_bait_disabled", 0x41200000, 1, 0, 2, 1, 0);
		DECOR_REMOVE(Global_34573, "bait");
		DECOR_REMOVE(Global_34573, "baitSafePos");
		ADD_ITEM(Function_42(6), Global_34573, 0);
		vLocal_542[iParam03].f_8 = 0;
	}
	return;
}

var Function_42(bool bParam0) //Position: 0x1E4D / 7757
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

void Function_43(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x1F3E / 7998
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_45(bParam0, iParam1, iParam2) && !bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_44(&cVar1, iParam2);
	if (!DECOR_CHECK_EXIST(bParam0, &cVar1))
	{
		DECOR_SET_INT(bParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(bParam0, &cVar1, (DECOR_GET_INT(bParam0, &cVar1) || bVar0));
	}
}

void Function_44(char* cParam0, int iParam1) //Position: 0x1FAA / 8106
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

bool Function_45(bool bParam0, var uParam1, int iParam2) //Position: 0x1FE1 / 8161
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
		if (Function_47(DECOR_GET_INT(bParam0, &cVar1)) > 3)
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
		switch (Function_46(uVar0))
		{
			case 0x00000002:
				if (!Function_48(Global_76847, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_46(char* cParam0) //Position: 0x2059 / 8281
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

int Function_47(int iParam0) //Position: 0x20FA / 8442
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 <= 0)
	{
		iVar0 = 1;
		Function_13(&iVar1, 2147483648);
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

bool Function_48(var uParam0, int iParam1) //Position: 0x2137 / 8503
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

bool Function_49(bool bParam0, bool bParam1, bool bParam2) //Position: 0x214A / 8522
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
	if (IS_ACTOR_BEING_DRAGGED(bParam0, 0.3f))
	{
		return 1;
	}
	if (Function_52(bParam0))
	{
		return 1;
	}
	if (Function_51(bParam0))
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
	if (Function_50())
	{
		return 1;
	}
	return 0;
}

bool Function_50() //Position: 0x2200 / 8704
{
	return ((Global_34578 != 0 || Global_34578 != 2) || Global_34578 != 3);
}

bool Function_51(bool bParam0) //Position: 0x2217 / 8727
{
	return IS_ACTOR_IN_HOGTIE(bParam0);
}

bool Function_52(bool bParam0) //Position: 0x2222 / 8738
{
	return IS_ACTOR_VALID(GET_LASSO_USER(bParam0));
}

void Function_53(int iParam0) //Position: 0x2230 / 8752
{
	if (Function_63(Global_30750[10], 0, 4294967295, 0))
	{
		if (Function_62(Global_30750[10], 0, 0, 0) == 4294967295 && Function_62(Global_30750[10], 0, 0, 0) == 0)
		{
			if (DECOR_CHECK_EXIST(Global_34573, "fakeBait"))
			{
				*iParam0 = DECOR_GET_INT(Global_34573, "fakeBait");
			}
			else
			{
				*iParam0 = Function_55(Global_30750[10], 0, 0, 4294967295, 0);
			}
		}
		else
		{
			Function_69("item_bait_no_animals", 0x41200000, 1, 0, 2, 1, 0);
			return;
		}
	}
	Function_69("item_bait_no_animals", 0x41200000, 1, 0, 2, 1, 0);
	return;
	if (Function_54(*iParam0))
	{
		bLocal_583 = GET_ACTOR_ENUM_STRING_FROM_ENUM(*iParam0);
		if ((STRING_CONTAINS_STRING(bLocal_583, "Cougar") || STRING_CONTAINS_STRING(bLocal_583, "Bobcat")) || STRING_CONTAINS_STRING(bLocal_583, "Bear"))
		{
			iLocal_565 = 1;
			if (DECOR_CHECK_EXIST(Global_34573, "fakeBait"))
			{
				if (STRING_CONTAINS_STRING(bLocal_583, "Bobcat"))
				{
					iLocal_565 = 3;
				}
			}
		}
		else if (STRING_CONTAINS_STRING(bLocal_583, "Wolf") || STRING_CONTAINS_STRING(bLocal_583, "Coyote"))
		{
			iLocal_565 = RAND_INT_RANGE(2, 4);
			if (DECOR_CHECK_EXIST(Global_34573, "fakeBait"))
			{
				iLocal_565 = 4;
			}
		}
		else if (STRING_CONTAINS_STRING(bLocal_583, "Buck") || STRING_CONTAINS_STRING(bLocal_583, "Fox"))
		{
			iLocal_565 = RAND_INT_RANGE(true, 2);
			if (DECOR_CHECK_EXIST(Global_34573, "fakeBait"))
			{
				iLocal_565 = 3;
			}
		}
		else if (STRING_CONTAINS_STRING(bLocal_583, "Deer"))
		{
			iLocal_565 = RAND_INT_RANGE(3, 5);
		}
		else if (STRING_CONTAINS_STRING(bLocal_583, "Boar"))
		{
			iLocal_565 = RAND_INT_RANGE(true, 3);
			if (DECOR_CHECK_EXIST(Global_34573, "fakeBait"))
			{
				iLocal_565 = 2;
			}
		}
		else
		{
			iLocal_565 = RAND_INT_RANGE(3, 6);
			if (DECOR_CHECK_EXIST(Global_34573, "fakeBait"))
			{
				iLocal_565 = 4;
			}
		}
	}
	return;
}

bool Function_54(bool bParam0) //Position: 0x2458 / 9304
{
	if (bParam0 > 0 || bParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

var Function_55(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x246F / 9327
{
	return Function_56(uParam0, uParam1, uParam2, uParam3, uParam4, 0, 0.0f, 0.0f, 0.0f);
}

var Function_56(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, vector3 vParam6) //Position: 0x2488 / 9352
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
		Function_61();
	}
	bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, bParam4, iParam5, vParam6);
	if (!Function_54(bVar1))
	{
		if (!Global_30837 && !Global_30838)
		{
			Function_60(bParam0, bParam1, bParam2, bParam3, bParam4);
			LOG_ERROR("Did a random on popset, and got back a -1");
		}
		Function_60(bParam0, bParam1, bParam2, bParam3, bParam4);
		LOG_ERROR("Did a random on popset, and got back a -1");
		return 4294967295;
	}
	bVar0 = bVar1;
	if (bParam1 || (!bParam3 != 4294967295 && !bParam3 != GET_ACTORENUM_SPECIES(bVar1)))
	{
		if (bParam1 && bParam3 != 4294967295)
		{
			while (Function_59(bVar0) && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, false, iParam5, vParam6);
				if (Function_54(bVar1))
				{
					bVar0 = bVar1;
				}
				iVar2++;
			}
			if (bParam1)
			{
				if (Function_59(bVar0))
				{
					Function_58();
				}
				Function_57(bVar0);
			}
		}
		else if (!bParam3 != 4294967295)
		{
			while (!GET_ACTORENUM_SPECIES(bVar1) != bParam3 && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, false, iParam5, vParam6);
				if (Function_54(bVar1))
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

void Function_57(int iParam0) //Position: 0x277B / 10107
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

void Function_58() //Position: 0x282F / 10287
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

bool Function_59(bool bParam0) //Position: 0x2869 / 10345
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

void Function_60(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x2896 / 10390
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

void Function_61() //Position: 0x29E7 / 10727
{
	int iVar0;
	
	if (Global_3402)
	{
		if (StackVal || !Global_30742 != GET_THIS_SCRIPT_ID() < GET_CURRENT_GAME_TIME())
		{
			Function_58();
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
	Function_58();
	return;
}

int Function_62(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x2A32 / 10802
{
	return GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam1, bParam2, bParam3, 0, 0.0f, 0.0f, 0.0f);
}

bool Function_63(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x2A49 / 10825
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

var Function_64(bool bParam0) //Position: 0x2A70 / 10864
{
	return GET_HEADING(bParam0);
}

bool Function_65(vector3 vParam0) //Position: 0x2A7B / 10875
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

bool Function_66(vector3 vParam0) //Position: 0x2A93 / 10899
{
	int iVar0;
	struct<8> Var1;
	
	if (Function_54(bLocal_582))
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 <= iLocal_565)
		{
			Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_67("BAIT_ANIMAL") };
			vLocal_576.f_8 = (vLocal_576.z + 0.25f);
			bLocal_558[iVar0] = CREATE_ACTOR_IN_LAYOUT(Global_30616, &Var1, bLocal_582, vParam0, 0.0f, 0.0f, 0.0f);
			DECOR_SET_BOOL(bLocal_558[iVar0], "bShopDontKill", true);
			TASK_GO_NEAR_COORD(bLocal_558[iVar0], &vLocal_568, 1.0f, 4);
			TASK_PRIORITY_SET(bLocal_558[iVar0], 0);
			SET_ACTOR_UPDATE_PRIORITY(bLocal_558[iVar0], false);
			iVar0++;
		}
		iLocal_575 = 1;
		return 1;
	}
	return 0;
}

struct<32> Function_67(bool bParam0) //Position: 0x2B43 / 11075
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_68("0", &cVar8, ""), 4);
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

struct<32> Function_68(char* cParam0, bool bParam1, char* cParam2) //Position: 0x2BAD / 11181
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	stradd(&cVar0, cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_69(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x2BCC / 11212
{
	struct<4> Var0;
	int iVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_70(Global_6269) };
		}
		PRINT_HELP_B(bParam0, iParam1, iParam2, iParam3, iParam4, iParam5, &Var0, iParam6);
	}
	else
	{
		iVar4 = "";
		PRINT_HELP_B(bParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iVar4, iParam6);
	}
}

struct<16> Function_70(bool bParam0) //Position: 0x2C47 / 11335
{
	char* cVar0[16];
	
	if (!Function_71())
	{
		strcpy(&cVar0, "miss", 16);
	}
	else
	{
		strcpy(&cVar0, "ziss", 16);
	}
	straddi(&cVar0, bParam0, 16);
	stradd(&cVar0, "_short", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

bool Function_71() //Position: 0x2C86 / 11398
{
	if (Function_19(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

float Function_72(bool bParam0, vector3 vParam1) //Position: 0x2CA1 / 11425
{
	vector3 vVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_73(bParam0);
		vVar0 = { StackVal, StackVal, Function_73(bParam0) };
		return VDIST(vVar0, vParam1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

vector3 Function_73(bool bParam0) //Position: 0x2D1B / 11547
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

void Function_74() //Position: 0x2D85 / 11653
{
	vector3 vVar0;
	vector3 vVar3;
	
	vVar0 = { StackVal, StackVal, vLocal_568 };
	UNK_0x44986367(&vVar3, Function_64(Global_34573));
	VNORMALIZE(&vVar3);
	VSCALE(&vVar3, 0.4f);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar3, vVar0, StackVal) };
	CREATE_DECAL(2, vVar0, 0.8f, 0, 0);
	return;
}

void Function_75() //Position: 0x2DCA / 11722
{
	return;
}

void Function_76(int iParam0) //Position: 0x2DD0 / 11728
{
	strcpy(iParam0 + 12, "PLAYER HORSE", 16);
	*iParam0 = 17969;
	iParam0->f_4 = 11851;
	iParam0->f_8 = 11783;
	iParam0->f_28 = 1;
	return;
}

void Function_77() //Position: 0x2E07 / 11783
{
	Function_13(&Global_12976 + 36 + 20, 1);
	Function_13(&Global_12976 + 36 + 20, 32);
	Function_13(&Global_12976 + 36 + 20, 0x40000000);
	Function_13(&Global_12976 + 36 + 20, 128);
	Function_13(&Global_12976 + 36 + 20, 64);
	return;
}

int Function_78() //Position: 0x2E4B / 11851
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
	
	if ((Global_3365 && !Function_109(2, 0)) && !Function_71())
	{
		return 0;
	}
	if (IS_ACTOR_VALID(GET_MOUNT(Global_34573)))
	{
		if (IS_ACTOR_MULE(GET_MOUNT(Global_34573)) && IS_ACTOR_RIDING_AND_IN_SADDLE(Global_34573))
		{
			if (!Function_71())
			{
				if (!Function_48(Global_76846, 0x8000000))
				{
					Function_43(Global_34573, 0x8000000, 1, 0);
				}
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
		if (!Function_108(Global_12976.f_36))
		{
			Function_107(Global_12976.f_36);
		}
		if (!IS_ACTOR_ALIVE(Global_34573))
		{
			if (HUD_IS_FADED() || !Function_106(Global_12976.f_36))
			{
				(&Global_12976 + 36)->f_24 = 4294967294;
				RELEASE_ACTOR(Global_12976.f_36);
				Global_12976.f_36 = "";
			}
			return 0;
		}
		Function_105(Global_12976.f_36);
		if ((((((!STREAMING_ARE_BOUNDS_LOADED(Function_105(Global_12976.f_36), 5.0f) && !Global_3379) && !Global_3380) && !HUD_IS_FADED()) && !HUD_IS_FADING()) && !GET_RIDER(Global_12976.f_36) != Global_34573) && Function_72(Global_12976.f_36, 0.0f, 0.0f, 0.0f) < 75.0f)
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
				if (NET_IS_IN_SESSION() || Function_1())
				{
					(&Global_12976 + 36)->f_28 = 0;
					if (IS_BLIP_VALID(Global_12976.f_240))
					{
						REMOVE_BLIP(Global_12976.f_240);
					}
					TASK_CLEAR(Global_12976.f_36);
				}
				else
				{
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
					if (bVar1 && !DECOR_CHECK_EXIST(Global_34573, "HorseStolen"))
					{
						DECOR_SET_OBJECT(Global_34573, "HorseStolen", Global_12976.f_36);
						DECOR_REMOVE(Global_12976.f_36, "NextNuRiderPollTime");
					}
				}
				if (bVar1)
				{
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
					uVar3 = Function_100(7, 0, 5);
					iVar4 = Function_100(8, 0, 5);
					iVar2 = ((ROUND(GET_CURRENT_GAME_TIME()) - Function_97(uVar3)) + Function_97(iVar4));
					if (!Global_3381)
					{
						if (iVar2 == 3600)
						{
							SET_STAMINA_BLINK(3.0f);
							SET_ACTOR_MAX_FRESHNESS(Global_12976.f_36, 100.0f);
							Function_69("mount_bond_stage3", 0x41200000, 1, 0, 2, 1, 0);
						}
						else if (iVar2 == 900)
						{
							SET_STAMINA_BLINK(3.0f);
							SET_ACTOR_MAX_FRESHNESS(Global_12976.f_36, 85.0f);
							Function_69("mount_bond_stage2", 0x41200000, 1, 0, 2, 1, 0);
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
		if (IS_ACTOR_VALID(Global_12976.f_36))
		{
			if (GET_TASK_STATUS(Global_12976.f_36, 86) != 1 && (Function_1() || NET_IS_IN_SESSION()))
			{
				Function_94(0, 0x40400000);
			}
		}
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
	if (!Function_93())
	{
		return 0;
	}
	if (((&Global_12976 + 36)->f_24 == Global_29006 || (&Global_12976 + 36)->f_24 != 4294967294) && !DECOR_CHECK_EXIST(Global_34573, "TempDisableRespawn"))
	{
		if (StackVal && (Function_92() < 1 && !DECOR_CHECK_EXIST(Global_34573, "PlayerHorse_DontResetHorseEnum")) + 976 != 993)
		{
			Function_91(StackVal, 0, 1);
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
		Function_90(bVar5);
		vVar6 = { StackVal, StackVal, Function_90(bVar5) };
		Function_89(bVar5);
		vVar9 = { StackVal, StackVal, Function_89(bVar5) };
		if (StackVal && Function_72(StackVal, (!IS_ACTOR_VALID(Global_12976.f_36) && STREAMING_ARE_BOUNDS_LOADED(vVar6, 5.0f)), Global_34573, vVar6) > 60.0f)
		{
			bVar14 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/simpleGringo/HitchingPost", &vVar6, 6.0f, 0);
			if (IS_GRINGO_VALID(bVar14))
			{
				GET_OBJECT_POSITION(GET_OBJECT_FROM_GRINGO(bVar14), &vVar6);
				Function_88(StackVal, StackVal, vVar6, &bVar12, &bVar13);
				bVar14 = "";
				if (!IS_OBJECT_VALID(Function_87(bVar12, "UseCase1")))
				{
					bVar14 = bVar12;
				}
				if (!IS_GRINGO_VALID(bVar14))
				{
					if (!IS_OBJECT_VALID(Function_87(bVar13, "UseCase1")))
					{
						bVar14 = bVar13;
					}
				}
				if (IS_GRINGO_VALID(bVar14))
				{
					Function_81(1, 0, 0, 0, 0, 0, 1, 0);
					bVar15 = Global_12976.f_36;
					if (IS_ACTOR_VALID(bVar15))
					{
						SNAP_ACTOR_TO_GRINGO(bVar15, GET_OBJECT_FROM_GRINGO(bVar14), "UseCase1", 1, 0, 0);
						TASK_PRIORITY_SET(bVar15, 1);
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
		else if (StackVal && Function_72(StackVal, (!IS_ACTOR_VALID(Global_12976.f_36) && STREAMING_ARE_BOUNDS_LOADED(vVar6, 5.0f)), Global_34573, vVar6) > 60.0f)
		{
			bVar16 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/simpleGringo/horseHitch", &vVar6, 6.0f, 0);
			if (IS_GRINGO_VALID(bVar16))
			{
				Function_81(1, 0, 0, 0, 0, 0, 1, 0);
				bVar17 = Global_12976.f_36;
				if (IS_ACTOR_VALID(bVar17))
				{
					SNAP_ACTOR_TO_GRINGO(bVar17, GET_OBJECT_FROM_GRINGO(bVar16), "UseCase1", 1, 0, 0);
					TASK_PRIORITY_SET(bVar17, 1);
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
		if (Function_80(Global_12976.f_36, Global_34573) < 20.0f)
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
			Function_90(bVar22);
			vVar23 = { StackVal, StackVal, Function_90(bVar22) };
			if (Function_80(Global_12976.f_36, Global_34573) < 60.0f && !Function_79(Global_12976.f_36, 0x3f800000, 0x42960000, 1, 1, 0))
			{
				bVar26 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/simpleGringo/horseHitch", &vVar23, 6.0f, 0);
				if (IS_GRINGO_VALID(bVar26))
				{
					SNAP_ACTOR_TO_GRINGO(Global_12976.f_36, GET_OBJECT_FROM_GRINGO(bVar26), "UseCase1", 1, 0, 0);
					TASK_PRIORITY_SET(Global_12976.f_36, 1);
					TASK_USE_GRINGO(Global_12976.f_36, bVar26, "UseCase1", 4294967295, 1);
				}
				if (!DOES_HORSE_HAVE_ACCESSORY(Global_12976.f_36, 4))
				{
					ACCESSORIZE_HORSE(Global_12976.f_36, 4);
				}
			}
			else if (Function_80(Global_12976.f_36, Global_34573) < 60.0f)
			{
				bVar27 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/simpleGringo/horseHitch", &vVar23, 6.0f, 0);
				if (IS_GRINGO_VALID(bVar27))
				{
					TASK_PRIORITY_SET(Global_12976.f_36, 1);
					TASK_USE_GRINGO(Global_12976.f_36, bVar27, "UseCase1", 4294967295, 1);
				}
			}
		}
	}
	return 0;
}

bool Function_79(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0x38BA / 14522
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), bParam0, iParam1, iParam2, iParam3, iParam4, iParam5);
}

float Function_80(bool bParam0, bool bParam1) //Position: 0x38D4 / 14548
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

var Function_81(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7) //Position: 0x39C5 / 14789
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
	if (Global_3381)
	{
		Function_91(976, 0, 1);
	}
	bParam7 = bParam7;
	if (!bParam7)
	{
		if (!Function_93())
		{
			return "";
		}
	}
	if (!Function_86())
	{
		return "";
	}
	bVar1 = false;
	if (IS_ACTOR_VALID(Global_12976.f_36))
	{
		bVar1 = IS_ACTOR_ALIVE(Global_12976.f_36);
	}
	Function_85();
	if ((bVar1 && iParam6) && iParam0)
	{
		Function_90(GET_OBJECT_FROM_ACTOR(Global_12976.f_36));
		vVar2 = { StackVal, StackVal, Function_90(GET_OBJECT_FROM_ACTOR(Global_12976.f_36)) };
		Function_90(GET_OBJECT_FROM_ACTOR(Global_34573));
		vVar5 = { StackVal, StackVal, Function_90(GET_OBJECT_FROM_ACTOR(Global_34573)) };
		iVar8 = Function_84(StackVal, StackVal, vVar2, 0, 1, 1);
		if (iVar8 != 4294967294 || iVar8 != 4294967295)
		{
		}
		else
		{
			iVar9 = Function_84(StackVal, StackVal, vVar5, 0, 1, 1);
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
						Global_12976.f_36 = CREATE_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("PlayerLayout"), Function_83(), bVar0, bParam2, bParam3, bParam4, 0.0f, bParam5, 0.0f);
						SNAP_OBJECT_TO_GROUND(Global_12976.f_36, 15.0f, true, 1092616192);
					}
					else
					{
						Global_12976.f_36 = CREATE_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("PlayerLayout"), Function_83(), 993, bParam2, bParam3, bParam4, 0.0f, bParam5, 0.0f);
						SNAP_OBJECT_TO_GROUND(Global_12976.f_36, 15.0f, true, 1092616192);
					}
					DELETE_ALL_ACCESSORIES_FROM_ACTOR(Global_12976.f_36);
					if (IS_ACTOR_HORSE(Global_12976.f_36))
					{
						ACCESSORIZE_HORSE(Global_12976.f_36, 4);
					}
					else if (IS_ACTOR_MULE(Global_12976.f_36))
					{
						ACCESSORIZE_HORSE(Global_12976.f_36, 3);
					}
				}
			}
			else
			{
				vVar10 = { bParam2, bParam3, bParam4 };
				if (!Function_65(StackVal, StackVal, vVar10))
				{
					TELEPORT_ACTOR(Global_12976.f_36, &vVar10, 1, 1, 1);
				}
			}
		}
	}
	else if (!bVar1 && (iParam0 || Global_3380))
	{
		if (!bParam7)
		{
			Global_12976.f_36 = CREATE_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("PlayerLayout"), Function_83(), bVar0, bParam2, bParam3, bParam4, 0.0f, bParam5, 0.0f);
			SNAP_OBJECT_TO_GROUND(Global_12976.f_36, 15.0f, true, 1092616192);
		}
		else
		{
			if (bVar0 != 993)
			{
				(&Global_12976 + 36)->f_8 = (bVar0 - 976);
			}
			Global_12976.f_36 = CREATE_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("PlayerLayout"), Function_83(), 993, bParam2, bParam3, bParam4, 0.0f, bParam5, 0.0f);
			SNAP_OBJECT_TO_GROUND(Global_12976.f_36, 15.0f, true, 1092616192);
		}
		DELETE_ALL_ACCESSORIES_FROM_ACTOR(Global_12976.f_36);
		if (IS_ACTOR_HORSE(Global_12976.f_36))
		{
			ACCESSORIZE_HORSE(Global_12976.f_36, 4);
		}
		else if (IS_ACTOR_MULE(Global_12976.f_36))
		{
			ACCESSORIZE_HORSE(Global_12976.f_36, 3);
		}
		else if (ANIMAL_ACTOR_GET_SPECIES(Global_12976.f_36) != 9 || ANIMAL_ACTOR_GET_SPECIES(Global_12976.f_36) != 8)
		{
			ACCESSORIZE_HORSE(Global_12976.f_36, 8);
		}
	}
	if (IS_ACTOR_VALID(Global_12976.f_36))
	{
		bVar1 = IS_ACTOR_ALIVE(Global_12976.f_36);
	}
	if (bVar1)
	{
		if (bParam1)
		{
			MAKE_ACTOR_READY_FOR_ACTION(Global_12976.f_36, 1);
		}
	}
	if (bVar1)
	{
		CLEAR_ACTORS_HORSE(Global_34573);
		SET_ACTORS_HORSE(Global_34573, Global_12976.f_36);
		Function_82(Global_12976.f_36, 0, 0, 0, 0, 0, 0);
	}
	if (Function_1() || NET_IS_IN_SESSION())
	{
		if (IS_ACTOR_VALID(Global_12976.f_36))
		{
			NET_ACTOR_SET_ALLOW_BLIP_SYNC(Global_12976.f_36, 0);
		}
	}
	return Global_12976.f_36;
}

void Function_82(bool bParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x3D1B / 15643
{
	if (IS_ACTOR_VALID(bParam0))
	{
		SET_ACTOR_CAN_BE_TARGETED(bParam0, bParam1);
		SET_ACTOR_CAN_BE_HARDLOCKED(bParam0, iParam2);
		SET_ACTOR_CAN_BE_SOFTLOCKED(bParam0, iParam6);
		SET_ACTOR_CAN_BE_BUMPTARGETED(bParam0, iParam3);
		SET_ACTOR_ONLY_HARDLOCK_IF_HOSTILE(bParam0, iParam5);
		SET_ACTOR_USE_FULLSCREEN_ACQUISITION(bParam0, iParam4);
	}
}

bool Function_83() //Position: 0x3D58 / 15704
{
	bool bVar0;
	
	return bVar0;
}

int Function_84(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5) //Position: 0x3D60 / 15712
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

void Function_85() //Position: 0x3DFB / 15867
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

bool Function_86() //Position: 0x3E6D / 15981
{
	if (Function_92() >= 1)
	{
		return 0;
	}
	return STREAMING_IS_ACTOR_LOADED(993, 4294967295);
}

var Function_87(bool bParam0, bool bParam1) //Position: 0x3E83 / 16003
{
	return GRINGO_QUERY_NAMED_COMPONENT_USER(bParam0, bParam1);
}

void Function_88(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x3E90 / 16016
{
	bool bVar0;
	
	bVar0 = LOCATE_GRINGO_OF_TYPE("hitchingPost", &uParam0, 2.0f, 1);
	if (IS_GRINGO_VALID(bVar0))
	{
		GET_OBJECT_POSITION(GET_OBJECT_FROM_GRINGO(bVar0), &uParam0);
		if (!Function_71())
		{
			*uParam4 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/simpleGringo/horseHitch", &uParam0, 2.0f, 0);
			*uParam3 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/simpleGringo/horseHitch2", &uParam0, 2.0f, 0);
		}
		else
		{
			*uParam4 = LOCATE_GRINGO_OF_TYPE("$/content/DLC/ZombiePack/Gringos/ZombiePack_horseHitch", &uParam0, 2.0f, 0);
			*uParam3 = LOCATE_GRINGO_OF_TYPE("$/content/DLC/ZombiePack/Gringos/ZombiePack_horseHitch2", &uParam0, 2.0f, 0);
		}
	}
}

vector3 Function_89(bool bParam0) //Position: 0x3FD3 / 16339
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

vector3 Function_90(bool bParam0) //Position: 0x3FFA / 16378
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

void Function_91(int iParam0, bool bParam1, bool bParam2) //Position: 0x4022 / 16418
{
	Global_13038 = iParam0;
	if (bParam1)
	{
		Function_11(&Global_12976 + 36 + 20, 128);
	}
	if (bParam2)
	{
		Function_11(&Global_12976 + 36 + 20, 64);
	}
	return;
}

int Function_92() //Position: 0x404F / 16463
{
	return Global_12976.f_152;
}

bool Function_93() //Position: 0x405A / 16474
{
	bool bVar0;
	
	bVar0 = STREAMING_IS_ACTOR_LOADED(StackVal + 976, 4294967295);
	if (bVar0)
	{
	}
	return bVar0;
}

void Function_94(bool bParam0, float fParam1) //Position: 0x407A / 16506
{
	(&Global_12976 + 36)->f_28 = 0;
	Global_12976.f_236 = 0;
	if (IS_ACTOR_VALID(Global_12976.f_36))
	{
		if (GET_TASK_STATUS(Global_12976.f_36, 86) != 2)
		{
			TASK_CLEAR(Global_12976.f_36);
		}
		if (bParam0 == 0.0f)
		{
			TASK_PRIORITY_SET(Global_12976.f_36, 1);
			TASK_STAND_STILL(Global_12976.f_36, bParam0, 0, 0);
		}
	}
	if (IS_BLIP_VALID(Global_12976.f_240))
	{
		REMOVE_BLIP(Global_12976.f_240);
	}
	Function_96();
	Function_95();
	if (DECOR_CHECK_EXIST(Global_34573, "Player_SimWhistle"))
	{
		DECOR_REMOVE(Global_34573, "Player_SimWhistle");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "WhistleTimeWaited"))
	{
		DECOR_REMOVE(Global_34573, "WhistleTimeWaited");
	}
	DECOR_SET_FLOAT(Global_34573, "Player_IgnoreWhistle", (GET_CURRENT_GAME_TIME() + fParam1));
	return;
}

void Function_95() //Position: 0x4178 / 16760
{
	if (DECOR_CHECK_EXIST(Global_34573, "HorseStolen"))
	{
		DECOR_REMOVE(Global_34573, "HorseStolen");
	}
	return;
}

void Function_96() //Position: 0x41AA / 16810
{
	if (DECOR_CHECK_EXIST(Global_34573, "WhistleNavQuery"))
	{
		DESTROY_OBJECT(DECOR_GET_OBJECT(Global_34573, "WhistleNavQuery"));
		DECOR_REMOVE(Global_34573, "WhistleNavQuery");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "WhistleNavQueryPos"))
	{
		DECOR_REMOVE(Global_34573, "WhistleNavQueryPos");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "WhistlePosProbed"))
	{
		DECOR_REMOVE(Global_34573, "WhistlePosProbed");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "WhistleTimeWaited"))
	{
		DECOR_REMOVE(Global_34573, "WhistleTimeWaited");
	}
	return;
}

int Function_97(int iParam0) //Position: 0x42A7 / 17063
{
	if (!Function_98(iParam0))
	{
		return 4294967295;
	}
	return Global_13172[iParam011].f_16;
}

bool Function_98(int iParam0) //Position: 0x42C1 / 17089
{
	if (!Function_4(iParam0))
	{
		return 0;
	}
	if (!Function_99(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_99(int iParam0) //Position: 0x42E5 / 17125
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

int Function_100(bool bParam0, bool bParam1, bool bParam2) //Position: 0x42FA / 17146
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_104(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_13172[iVar011] == iVar1)
		{
			return iVar0;
		}
		if (Global_13172[iVar011] != 0 && iVar0 < 0)
		{
			return Function_101(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_101(bParam0, bParam1, bParam2, 4294967295);
}

int Function_101(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x4358 / 17240
{
	var uVar0;
	
	if (!Function_103(bParam2))
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
	uVar0 = Function_104(bParam0, bParam1, bParam2);
	if (bParam3 != 4294967295 || bParam3 <= 275)
	{
		bParam3 = Function_102(uVar0);
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

int Function_102(int iParam0) //Position: 0x44AD / 17581
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

bool Function_103(int iParam0) //Position: 0x44EB / 17643
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_104(int iParam0, int iParam1, int iParam2) //Position: 0x4500 / 17664
{
	return ((iParam2 & 15 || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

vector3 Function_105(bool bParam0) //Position: 0x4520 / 17696
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

bool Function_106(bool bParam0) //Position: 0x4531 / 17713
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

void Function_107(bool bParam0) //Position: 0x455C / 17756
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

bool Function_108(bool bParam0) //Position: 0x4590 / 17808
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

bool Function_109(bool bParam0, bool bParam1) //Position: 0x45C4 / 17860
{
	int iVar0;
	
	iVar0 = Function_110(bParam0);
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

int Function_110(int iParam0) //Position: 0x4601 / 17921
{
	if (!Function_111(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_111(bool bParam0) //Position: 0x461B / 17947
{
	if (bParam0 >= 0 || bParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_112() //Position: 0x4631 / 17969
{
	Global_12976.f_240 = "";
	Global_12976.f_244 = "";
	Global_12976.f_72 = "";
	if (IS_ACTOR_VALID(Global_12976.f_36))
	{
		DESTROY_ACTOR(Global_12976.f_36);
	}
	Function_11(&Global_12976 + 36 + 20, 0x40000000);
	(&Global_12976 + 36)->f_24 = 4294967294;
	return;
}

void Function_113(int iParam0) //Position: 0x4678 / 18040
{
	strcpy(iParam0 + 12, "QUESTMANAGER", 16);
	*iParam0 = 37237;
	iParam0->f_4 = 19225;
	iParam0->f_8 = 18095;
	iParam0->f_28 = 0;
	return;
}

void Function_114() //Position: 0x46AF / 18095
{
	Function_115(&Global_63541);
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

void Function_115(int iParam0) //Position: 0x46F9 / 18169
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= *iParam0)
	{
		Function_116(iParam0[iVar055], iVar0, 0, 1, 1);
		iVar0++;
	}
	return;
}

void Function_116(int iParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0x4721 / 18209
{
	if (IS_BLIP_VALID(iParam0->f_184))
	{
		if (((!bParam2 || Function_123(bParam1)) || Function_122(bParam1)) || bParam1 != iParam0->f_20)
		{
			REMOVE_BLIP(iParam0->f_184);
			REMOVE_BLIP(iParam0->f_188);
		}
	}
	else if (bParam2)
	{
		if (Function_19(Global_63541[bParam155].f_144, 64) && bParam1 == iParam0->f_20)
		{
			Function_118(iParam0, bParam1);
		}
		if (!(Function_123(bParam1) || Function_122(bParam1)))
		{
			DEACTIVATE_JOURNAL_ENTRY(iParam0->f_140, 0);
			SET_JOURNAL_ENTRY_PROGRESS(iParam0->f_140, -1.0f, 1, 0);
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
		if (!Function_19(iParam0->f_144, 32))
		{
			DESTROY_OBJECT(GET_OBJECT_FROM_GRINGO(iParam0->f_208));
		}
		else
		{
			iParam0->f_208 = "";
		}
		Function_13(iParam0 + 144, 32);
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
		Function_117(iParam0);
	}
	Function_13(iParam0 + 144, 256);
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

void Function_117(int iParam0) //Position: 0x48CB / 18635
{
	if (Function_19(iParam0->f_144, 1))
	{
		STREAMING_EVICT_ACTOR(iParam0->f_136, 4294967295);
		Function_13(iParam0 + 144, 1);
	}
	if (Function_19(iParam0->f_144, 8))
	{
		REMOVE_STRING_TABLE("RandomCharMissions");
		Function_13(iParam0 + 144, 8);
	}
	if (Function_19(iParam0->f_144, 2))
	{
		STREAMING_EVICT_GRINGO(iParam0->f_60);
		Function_13(iParam0 + 144, 2);
	}
	if (Function_19(iParam0->f_144, 4))
	{
		STREAMING_EVICT_PROP(iParam0->f_64);
		Function_13(iParam0 + 144, 4);
	}
	return;
}

void Function_118(int iParam0, int iParam1) //Position: 0x494D / 18765
{
	vector3 vVar0;
	float fVar3;
	float fVar4;
	struct<9> Var5;
	
	vVar0 = { StackVal, StackVal, *(iParam0 + 112) };
	vVar0.f_4 = (vVar0.y + 0.5f);
	fVar3 = 1.0f;
	fVar4 = 50.0f;
	if (((StackVal && Function_120(StackVal, Function_121(iParam1), vVar0, 0x3f800000, 0x42960000, 1, 1, 0)) || Function_119(iParam1)) || Global_74542[iParam110].f_12 != 1)
	{
		iParam0->f_184 = ADD_BLIP_FOR_COORD(iParam0 + 112, iParam0->f_80, 0.0f, 2, 7);
		SET_BLIP_MAX_DISTANCE(iParam0->f_184, 1.25f);
		iParam0->f_188 = ADD_BLIP_FOR_COORD(iParam0 + 112, iParam0->f_80, 0.0f, 2, 7);
		SET_BLIP_NAME(iParam0->f_188, iParam0 + 4);
		UNK_0xFF3DB575(iParam0->f_188, 1);
		SET_BLIP_PRIORITY(iParam0->f_188, 1);
		SET_BLIP_COLOR(iParam0->f_188, 0.58f, 0.35f, 0.72f, fVar3);
		Global_74542[iParam110].f_12 = 1;
	}
	else
	{
		fVar3 = 0.5f;
		vVar5 = { StackVal, StackVal, *(iParam0 + 112) };
		vVar5 = (vVar5.x + RAND_FLOAT_RANGE(10.0f, 20.0f));
		vVar5.f_8 = (vVar5.z + RAND_FLOAT_RANGE(10.0f, 20.0f));
		iParam0->f_184 = ADD_BLIP_FOR_COORD(&vVar5, 440, 0.0f, 2, 7);
		SET_BLIP_SCALE(iParam0->f_184, fVar4);
	}
	SET_BLIP_NAME(iParam0->f_184, iParam0 + 4);
	SET_BLIP_COLOR(iParam0->f_184, 0.58f, 0.35f, 0.72f, fVar3);
	SET_BLIP_PRIORITY(iParam0->f_184, 3);
	return;
}

bool Function_119(bool bParam0) //Position: 0x4A92 / 19090
{
	if ((Global_74542[bParam010] != 3 || Global_74542[bParam010] != 4) || Global_74542[bParam010] != 5)
	{
		return 1;
	}
	return 0;
}

bool Function_120(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7) //Position: 0x4ABE / 19134
{
	return CAMERA_IS_VISIBLE_POINT(GET_GAME_CAMERA(), vParam0, iParam3, iParam4, iParam5, iParam6, iParam7);
}

bool Function_121(int iParam0) //Position: 0x4ADA / 19162
{
	if (Global_74542[iParam010] == 2)
	{
		return 1;
	}
	return 0;
}

bool Function_122(bool bParam0) //Position: 0x4AEF / 19183
{
	if (Global_74542[bParam010] == 7)
	{
		return 1;
	}
	return 0;
}

bool Function_123(bool bParam0) //Position: 0x4B04 / 19204
{
	if (Global_74542[bParam010] == 6)
	{
		return 1;
	}
	return 0;
}

int Function_124() //Position: 0x4B19 / 19225
{
	if (!Global_3366)
	{
		return 0;
	}
	if (!Function_180(10) && !Function_5(1048576))
	{
		return 0;
	}
	if (Function_125(&Global_63541) >= 0)
	{
		return 0;
	}
	return 1;
}

int Function_125(int iParam0) //Position: 0x4B49 / 19273
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
			Function_116(iParam0[iVar055], iVar0, 0, 1, 1);
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
		Function_126(iParam0[iVar055], iVar0);
		iVar0++;
	}
	Global_63535.f_8 = 0;
	return iVar1;
}

void Function_126(int iParam0, bool bParam1) //Position: 0x4BFF / 19455
{
	char* cVar0[64];
	bool bVar16;
	
	if (Function_179(bParam1))
	{
		Function_13(iParam0 + 144, 64);
		Function_116(iParam0, bParam1, 0, 0, 1);
		return;
	}
	memcpy(&cVar0, StackVal, StackVal, StackVal, *(iParam0 + 4), 16);
	stradd(&cVar0, ": ", 64);
	if (!IS_ACTOR_VALID(Global_34573))
	{
		stradd(&cVar0, "DA: Player invalid.", 64);
		Function_116(iParam0, bParam1, 0, 0, 1);
		return;
	}
	if (IS_ACTOR_VALID(iParam0->f_204))
	{
		if (!Function_48(Global_76848, 4194304))
		{
			if (CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), iParam0->f_204, 1.0f, 20.0f, 1, 1, 0))
			{
				Function_43(Global_34573, 4194304, 3, 0);
			}
		}
	}
	if (Function_65(StackVal, StackVal, *(iParam0 + 100)))
	{
		PRINTSTRING("QUEST INDEX: ");
		PRINTINT(bParam1);
		PRINTNL();
		LOG_ERROR("Invalid quest position given. Check TTY for quest index.");
		return;
	}
	if (Function_123(bParam1))
	{
		Function_13(iParam0 + 144, 64);
		if (CONVERT_TIME_OF_DAY_TO_INT(iParam0->f_88) >= 0)
		{
			Function_178(iParam0, bParam1);
		}
		if (!Function_19(iParam0->f_144, 256))
		{
			stradd(&cVar0, "DA: Quest already completed.", 64);
			Function_116(iParam0, bParam1, 0, 0, 1);
			return;
		}
	}
	if (Function_122(bParam1))
	{
		stradd(&cVar0, "DA: Quest failed.", 64);
		Function_13(iParam0 + 144, 64);
		Function_116(iParam0, bParam1, 0, 0, 1);
		if (CONVERT_TIME_OF_DAY_TO_INT(iParam0->f_84) >= 0)
		{
			Function_178(iParam0, bParam1);
		}
		return;
	}
	if (!Function_123(bParam1))
	{
		if (!Function_119(bParam1))
		{
			if (!Function_176(iParam0, bParam1, 0, 1))
			{
				stradd(&cVar0, "DA: Quest conditions not met.", 64);
				Function_13(iParam0 + 144, 64);
				Function_116(iParam0, bParam1, 0, 0, 1);
				return;
			}
		}
	}
	if (iParam0->f_160)
	{
		if (IS_EARLIER_THAN(GET_TIME_OF_DAY(), iParam0->f_156))
		{
			stradd(&cVar0, "DA: Not time for quest to start yet.", 64);
			Function_116(iParam0, bParam1, 0, 0, 1);
			Function_13(iParam0 + 144, 64);
			return;
		}
		iParam0->f_160 = 0;
	}
	if ((((Global_3380 || Global_3382) || Global_3392) || Global_34165.f_28) && bParam1 == iParam0->f_20)
	{
		stradd(&cVar0, "DA: Story or proc mission running.", 64);
		if (bParam1 != 33 && Global_3382)
		{
		}
		else
		{
			Function_13(iParam0 + 144, 64);
			Function_116(iParam0, bParam1, 0, 1, 1);
			return;
		}
	}
	if (!Function_123(bParam1))
	{
		Function_11(iParam0 + 144, 64);
		if (!Function_175(6))
		{
			if (Function_173(6))
			{
				if (STRING_CONTAINS_STRING(iParam0 + 4, "CALIFORNIA"))
				{
					Function_162(Global_27774[613].f_48);
				}
			}
		}
		if (!Function_175(2))
		{
			if (Function_173(2))
			{
				if (STRING_CONTAINS_STRING(iParam0 + 4, "CANNIBAL"))
				{
					Function_162(Global_27774[213].f_48);
				}
			}
		}
		if (!Function_175(8))
		{
			if (Function_173(8))
			{
				if (STRING_CONTAINS_STRING(iParam0 + 4, "DEALER") || STRING_CONTAINS_STRING(iParam0 + 4, "OPIATE"))
				{
					Function_162(Global_27774[813].f_48);
				}
			}
		}
		if (!Function_175(9))
		{
			if (Function_173(9))
			{
				if (STRING_CONTAINS_STRING(iParam0 + 4, "LIGHTS"))
				{
					Function_162(Global_27774[913].f_48);
				}
			}
		}
	}
	if (Function_161(iParam0->f_132))
	{
		if (Function_160(&(Global_29008[iParam0->f_132]), 256))
		{
			stradd(&cVar0, "DA: Quest region has pers chars disabled.", 64);
			Function_116(iParam0, bParam1, 0, 1, 1);
			return;
		}
	}
	if (IS_ACTOR_VALID(iParam0->f_204))
	{
		if (!Function_156(iParam0, bParam1, 1))
		{
			return;
		}
	}
	if (Function_155(bParam1))
	{
		stradd(&cVar0, "DA: Quests should deactivate.", 64);
		Function_116(iParam0, bParam1, 0, 0, 1);
		return;
	}
	if (!Function_123(bParam1))
	{
		if (!(Function_119(bParam1) || Function_153(iParam0)))
		{
			if (IS_JOURNAL_ENTRY_IN_LIST(iParam0->f_140, 0))
			{
				if (VDIST(*(iParam0 + 100), Global_34574) > 15.0f)
				{
					if (!Function_19(iParam0->f_144, 8192))
					{
						Function_150(iParam0);
						Function_11(iParam0 + 144, 8192);
					}
				}
				else
				{
					Function_13(iParam0 + 144, 8192);
				}
			}
			stradd(&cVar0, "DA: Quest time conditions not met.", 64);
			Function_116(iParam0, bParam1, 1, 0, 1);
			return;
		}
	}
	bVar16 = VDIST(*(iParam0 + 100), Global_34574);
	if (bVar16 < iParam0->f_76)
	{
		stradd(&cVar0, "DA: Quest too far.", 64);
		Function_116(iParam0, bParam1, 1, 1, 1);
		return;
	}
	if (bVar16 < iParam0->f_72)
	{
		return;
	}
	if (Function_123(bParam1))
	{
		stradd(&cVar0, "DA: Quest already completed.", 64);
		return;
	}
	Function_127(iParam0, bParam1);
	return;
}

void Function_127(int iParam0, bool bParam1) //Position: 0x516A / 20842
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
		if (!Function_123(51))
		{
			if (Function_176(&(Global_63541[5155]), 51, 1, 1))
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
	Function_149(iParam0);
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
	SET_JOURNAL_ENTRY_PROGRESS(iParam0->f_140, -1.0f, 1, 0);
	Function_144(iParam0);
	iVar17 = 1;
	switch (*iParam0)
	{
		case 0x00000001:
			if (!IS_ACTOR_VALID(iParam0->f_204))
			{
				if (!Function_19(iParam0->f_144, 512))
				{
					if (STREAMING_IS_ACTOR_LOADED(iParam0->f_136, 4294967295))
					{
						memcpy(&cVar1, StackVal, StackVal, StackVal, *(iParam0 + 4), 16);
						stradd(&cVar1, INT_TO_STRING(bParam1), 64);
						iParam0->f_204 = CREATE_ACTOR_IN_LAYOUT(Global_63535, &cVar1, iParam0->f_136, *(iParam0 + 100), 0.0f, iParam0->f_124, 0.0f);
						Function_135(iParam0, bParam1);
						Function_129(iParam0, bParam1, 1);
						if (bParam1 != 69 || bParam1 != 70)
						{
							DECOR_SET_BOOL(iParam0->f_204, "bShopDontKill", true);
						}
					}
				}
			}
			else
			{
				IS_ACTOR_VALID(iParam0->f_204);
				if (bVar0)
				{
					Function_129(iParam0, bParam1, 0);
				}
				Function_105(iParam0->f_204);
				if (VDIST(Function_105(iParam0->f_204), *(iParam0 + 100)) > 2.0f)
				{
					Function_135(iParam0, bParam1);
				}
			}
			if (!IS_GRINGO_VALID(iParam0->f_208))
			{
				if (UNK_0x214AFB8C(iParam0->f_60))
				{
					if (Function_161(iParam0->f_132))
					{
						if (Function_19(iParam0->f_144, 65536) && !Function_160(&(Global_29008[iParam0->f_132]), 32))
						{
							iVar17 = 0;
						}
					}
					if (STREAMING_IS_GRINGO_LOADED(iParam0->f_60) && iVar17)
					{
						iParam0->f_208 = LOCATE_GRINGO_OF_TYPE_BY_ID(iParam0->f_60, iParam0 + 100, 2.0f);
						if (bParam1 != 1 || bParam1 != 2)
						{
							vVar18 = { -2168.42f, 17.017f, 2592.003f };
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
									bVar22 = LOCATE_PHYSINST_OF_TYPE(vVar18, 0.7f, "p_gen_chair05x", 1);
									bVar23 = GET_OBJECT_FROM_GRINGO(LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/chair_sit_table_attach", &vVar18, 0.7f, 0));
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
								Function_11(iParam0 + 144, 32);
							}
							else
							{
								bVar24 = CREATE_VOLUME_IN_LAYOUT(Global_63535, "cannibal_prop_vol", 2, *(&Global_63541[bParam155] + 100), 0.0f, 0.0f, 0.0f, 10.0f, 10.0f, 10.0f);
								if (bParam1 == 17)
								{
									bVar25 = LOCATE_PHYSINST_OF_TYPE(*(&Global_63541[bParam155] + 100), 1.7f, "p_gen_chair01x", 1);
								}
								else if (bParam1 == 19)
								{
									bVar25 = LOCATE_PHYSINST_OF_TYPE(*(&Global_63541[bParam155] + 100), 1.7f, "p_gen_chair05x", 1);
								}
								bVar26 = GET_OBJECT_FROM_GRINGO(LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/chair_sit_attach", &Global_63541[bParam155] + 100, 1.5f, 0));
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
											iParam0->f_208 = GET_GRINGO_FROM_OBJECT(CREATE_GRINGO_ON_OBJECT(bVar25, "Cannibal3_Gringo", "$/content/scripting/gringo/SimpleGringo/sit_headinhands_n_any", 0.22f, 0.0f, 0.25f, 0.0f, 180.0f, 0.0f));
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
								Function_11(iParam0 + 144, 32);
								GIVE_OBJECT_TO_LAYOUT(GET_OBJECT_FROM_GRINGO(iParam0->f_208), Global_63535);
							}
						}
						else
						{
							if (bParam1 == 51)
							{
								bVar27 = GET_OBJECT_FROM_GRINGO(LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/lean_fence_l_talking", &Global_63541[bParam155] + 100, 1.5f, 0));
								if (IS_OBJECT_VALID(bVar27))
								{
									DESTROY_OBJECT(bVar27);
								}
							}
							else if (bParam1 == 64)
							{
								bVar27 = GET_OBJECT_FROM_GRINGO(LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/lean_rail", &Global_63541[bParam155] + 100, 1.5f, 0));
								if (IS_OBJECT_VALID(bVar27))
								{
									DESTROY_OBJECT(bVar27);
								}
							}
							if (IS_GRINGO_VALID(iParam0->f_208))
							{
								Function_11(iParam0 + 144, 32);
							}
							else
							{
								iParam0->f_208 = GET_GRINGO_FROM_OBJECT(CREATE_GRINGO_IN_LAYOUT_BY_ID(Global_63535, Function_83(), iParam0->f_60, *(iParam0 + 100), 0.0f, iParam0->f_124, 0.0f));
								Function_13(iParam0 + 144, 32);
							}
						}
						Function_128(iParam0, 0);
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
					iParam0->f_212 = CREATE_PROP_IN_LAYOUT_BY_ID(Global_63535, Function_83(), iParam0->f_64, *(iParam0 + 100), 0.0f, iParam0->f_124, 0.0f, 1);
					Function_135(iParam0, bParam1);
				}
				else
				{
					return;
				}
			}
			break;
		
		case 0x00000003:
			Function_135(iParam0, bParam1);
			break;
	}
	return;
}

void Function_128(int iParam0, bool bParam1) //Position: 0x595F / 22879
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
		if (!Function_19(iParam0->f_144, 16384))
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
				SNAP_ACTOR_TO_GRINGO(iParam0->f_204, GET_OBJECT_FROM_GRINGO(iParam0->f_208), "UseCase1", 1, 0, 0);
			}
		}
		TASK_USE_GRINGO(iParam0->f_204, iParam0->f_208, "UseCase1", 4294967295, 1);
	}
	return;
}

void Function_129(int iParam0, bool bParam1, int iParam2) //Position: 0x5A8E / 23182
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	int iVar13;
	
	AI_DONT_HARM_ACTOR(iParam0->f_204);
	AI_CONVERSE_DISABLE(iParam0->f_204);
	AI_IGNORE_ACTOR(iParam0->f_204);
	SET_ACTOR_CAN_PLAY_GESTURES(iParam0->f_204, false);
	SET_ACTOR_OBEY_AMBIENT_MOVE_RESTRICTIONS(iParam0->f_204, 0);
	DECOR_SET_BOOL(iParam0->f_204, "CannotPush", true);
	SET_ACTOR_ALLOW_BUMP_REACTIONS(iParam0->f_204, 0);
	Function_105(iParam0->f_204);
	vVar0 = { StackVal, StackVal, Function_105(iParam0->f_204) };
	bVar3 = WOULD_ACTOR_BE_VISIBLE(GET_ACTOR_ENUM(iParam0->f_204), &vVar0, 3212836864);
	bVar4 = Function_120(StackVal, StackVal, *(iParam0 + 100), 0x3f800000, 0x42960000, 1, 1, 0);
	if (!UNK_0x214AFB8C(iParam0->f_60))
	{
		if (!Function_19(iParam0->f_144, 16384))
		{
			if (!(bVar3 || bVar4))
			{
				TELEPORT_ACTOR(iParam0->f_204, iParam0 + 100, 1, 1, 1);
			}
		}
		Function_134(iParam0);
	}
	else if (!IS_GRINGO_VALID(iParam0->f_208))
	{
		if (!Function_19(iParam0->f_144, 16384))
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
		Function_128(iParam0, iParam2);
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
		SQUAD_JOIN(iParam0->f_204, GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Global_63535, Function_83())));
		SQUAD_GOAL_ADD_RESTRICT_INVESTIGATION_DISTANCE_FROM_SQUAD(SQUAD_GET(iParam0->f_204), 0, 10.0f);
	}
	HUD_SET_SHOOT_BLIP_ENABLED_FOR_ACTOR(iParam0->f_204, true);
	HUD_SET_SHOOT_BLIP_ICON_FOR_ACTOR(iParam0->f_204, 322);
	if (iParam0->f_136 == 349)
	{
		SET_ACTOR_ALLOW_WEAPON_REACTIONS(iParam0->f_204, 0);
	}
	else
	{
		SET_ACTOR_ALLOW_WEAPON_REACTIONS(iParam0->f_204, 1);
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
		SET_ACTOR_INVULNERABILITY(iParam0->f_204, 1);
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
	uVar6 = Function_132(iParam0);
	SET_RCM_WAS_JOHN_NOW_JACK(iParam0->f_204, uVar6);
	Function_131(bParam1, &uVar7, &uVar8, &uVar9, &uVar10, &uVar11, &uVar12);
	iVar13 = Function_130(bParam1);
	switch (iVar13)
	{
		case 0x00000001:
			SET_RCM_ACTOR_CALL_OVER_ENABLE(iParam0->f_204, 1, 0, 1, uVar7, uVar8, uVar9, uVar10, uVar11, uVar12);
			break;
		
		case 0x00000000:
			SET_RCM_ACTOR_CALL_OVER_ENABLE(iParam0->f_204, 1, 0, 0, iVar7, iVar8, iVar9, iVar10, iVar11, iVar12);
			break;
		
		case 0x00000002:
		case 0xFFFFFFFF:
		default:
			SET_RCM_ACTOR_CALL_OVER_ENABLE(iParam0->f_204, 0, 0, 0, 1, 0, 2, 1101004800, 1088421888, 1);
			break;
	}
	if (bParam1 == 2)
	{
		SET_RCM_ACTOR_CALL_OVER_ENABLE(iParam0->f_204, 1, 1, 0, 1, 0, 2, 1101004800, 1088421888, 1);
	}
	if (bParam1 == 70)
	{
		SET_RCM_ACTOR_CALL_OVER_ENABLE(iParam0->f_204, 1, 1, 0, 1, 0, 2, 1101004800, 1088421888, 1);
	}
	if (bParam1 == 27)
	{
		SET_RCM_ACTOR_CALL_OVER_ENABLE(iParam0->f_204, 0, 0, 0, 1, 0, 2, 1101004800, 1088421888, 1);
	}
	if (bParam1 == 55)
	{
		SET_RCM_ACTOR_CALL_OVER_ENABLE(iParam0->f_204, 0, 0, 0, 1, 0, 2, 1101004800, 1088421888, 1);
	}
	AI_GOAL_LOOK_AT_PLAYER_WHEN_WITHIN(iParam0->f_204, 15.0f);
	MEMORY_CLEAR_EVENTS(iParam0->f_204, 1);
	return;
}

int Function_130(int iParam0) //Position: 0x5F90 / 24464
{
	if (Function_71())
	{
	}
	else
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
			}
		
		default:
	}
	return 4294967295;
}

void Function_131(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0x620F / 25103
{
	*uParam3 = 2;
	*uParam4 = 20.0f;
	*uParam5 = 7.0f;
	*uParam6 = 1;
	if (Function_71())
	{
	}
	else
	{
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
				*uParam5 = 2.5f;
				*uParam4 = 8.0f;
				break;
			
			case 0x00000013:
				*uParam1 = 0;
				*uParam2 = 1;
				*uParam3 = 3;
				*uParam5 = 2.5f;
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
}

int Function_132(int iParam0) //Position: 0x63EF / 25583
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
		if (Function_133(Global_63541[iVar155].f_136, uVar0))
		{
			return 0;
		}
		iVar1 = Global_63541[iVar155].f_168;
	}
	return 0;
}

bool Function_133(int iParam0, int iParam1) //Position: 0x6449 / 25673
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

void Function_134(int iParam0) //Position: 0x6493 / 25747
{
	if (IS_ACTOR_VALID(iParam0->f_204))
	{
		TASK_CLEAR(iParam0->f_204);
		TASK_PRIORITY_SET(iParam0->f_204, 2);
		TASK_GO_TO_COORD_AND_STAY(iParam0->f_204, iParam0 + 100, 1, iParam0->f_124);
	}
	return;
}

void Function_135(int iParam0, bool bParam1) //Position: 0x64C2 / 25794
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	vector3 vVar3;
	
	if (Function_19(iParam0->f_144, 2048))
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
		Function_143(iParam0, iVar2);
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
			vVar3.f_4 = (vVar3.y + 0.5f);
			if (!Function_120(StackVal, StackVal, vVar3, 0x3f800000, 0x42960000, 1, 1, 0) && VDIST(Global_34574, *(iParam0 + 100)) < 42.0f)
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
				if (Function_161(iParam0->f_132))
				{
					Function_140(StackVal, StackVal, iParam0->f_132, 23, *(iParam0 + 100), 63);
				}
				else
				{
					Function_140(StackVal, StackVal, Global_29006, 23, *(iParam0 + 100), 63);
				}
			}
		}
		else
		{
			if (bParam1 == iParam0->f_20)
			{
				if (Function_161(iParam0->f_132))
				{
					Function_136(StackVal, iParam0->f_132, 23, iParam0->f_100);
				}
				else
				{
					Function_136(StackVal, Global_29006, 23, iParam0->f_100);
				}
				Function_13(iParam0 + 144, 4096);
			}
			if (bParam1 == 2)
			{
				*(iParam0 + 100) = { -2168.505f, 16.879f, 2590.258f };
			}
			if (bParam1 == 33)
			{
				*(iParam0 + 100) = { -3951.709f, 25.098f, 2868.928f };
			}
			iParam0->f_184 = ADD_BLIP_FOR_COORD(iParam0 + 100, iParam0->f_80, 0.0f, 2, 7);
			SET_BLIP_NAME(iParam0->f_184, iParam0 + 4);
			iParam0->f_188 = ADD_BLIP_FOR_COORD(iParam0 + 100, iParam0->f_80, 0.0f, 2, 7);
			SET_BLIP_NAME(iParam0->f_188, iParam0 + 4);
			UNK_0xFF3DB575(iParam0->f_188, 1);
			SET_BLIP_PRIORITY(iParam0->f_188, 1);
			if (iParam0->f_20 != bParam1)
			{
				SET_BLIP_COLOR(iParam0->f_184, 0.58f, 0.35f, 0.72f, 1.0f);
				SET_BLIP_COLOR(iParam0->f_188, 0.58f, 0.35f, 0.72f, 1.0f);
			}
			SET_BLIP_MAX_DISTANCE(iParam0->f_184, 1.25f);
		}
	}
	return;
}

void Function_136(int iParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x66FF / 26367
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
		Function_138(Function_139(iParam2, 0.0f, bParam3));
		vVar4 = { StackVal, StackVal, Function_138(Function_139(iParam2, 0.0f, bParam3)) };
		iVar0 = 0;
		while (iVar0 <= Global_9724)
		{
			if (StackVal == iParam1)
			{
				Function_138(StackVal);
				vVar1 = { StackVal, StackVal, Function_138(StackVal) };
				if (Function_137(StackVal, StackVal, StackVal, StackVal, vVar1, vVar4))
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

bool Function_137(vector3 vParam0, vector3 vParam3) //Position: 0x6805 / 26629
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vParam0, vParam3, StackVal) };
	if (VMAG(vVar0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

vector3 Function_138(bool bParam0) //Position: 0x6832 / 26674
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	
	bVar3 = (bParam0 && 32767);
	bVar4 = (SHIFT_RIGHT(bParam0, 15) && 32767);
	vVar0.x = TO_FLOAT(bVar3);
	vVar0.f_8 = TO_FLOAT(bVar4);
	if ((bParam0 && 1073741824) == 0)
	{
		vVar0.x = (vVar0.x * -1.0f);
	}
	if ((bParam0 && 2147483648) == 0)
	{
		vVar0.f_8 = (vVar0.z * -1.0f);
	}
	return StackVal, StackVal, vVar0;
}

bool Function_139(vector3 vParam0) //Position: 0x6889 / 26761
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

int Function_140(int iParam0, int iParam1, vector3 vParam2, int iParam5) //Position: 0x68D7 / 26839
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	vector3 vVar4;
	vector3 vVar7;
	
	if (!Function_161(iParam0))
	{
		return 0;
	}
	if (iParam1 == 0)
	{
		return 0;
	}
	if (Function_65(StackVal, StackVal, vParam2))
	{
		return 0;
	}
	iVar2 = Function_142(iParam1);
	iVar1 = 4294967295;
	uVar3 = Function_139(StackVal, StackVal, vParam2);
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
		Function_138(uVar3);
		vVar7 = { StackVal, StackVal, Function_138(uVar3) };
		iVar0 = 0;
		while (iVar0 <= Global_9724)
		{
			if (StackVal != 0 && iVar1 != 4294967295)
			{
				iVar1 = iVar0;
			}
			else if (StackVal == iParam1)
			{
				Function_138(StackVal);
				vVar4 = { StackVal, StackVal, Function_138(StackVal) };
				if (Function_137(StackVal, StackVal, StackVal, StackVal, vVar4, vVar7))
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
		Global_9724[iVar1] = ADD_BLIP_FOR_COORD(&vParam2, Function_141(iParam1), 0.0f, 2, iVar2);
		if (iParam1 == 23)
		{
			SET_BLIP_COLOR(Global_9724[iVar1], 1.0f, 1.0f, 1.0f, 0.5f);
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
		SET_BLIP_PRIORITY(Global_9724[iVar1], 1);
		return iVar1;
	}
	return 0;
}

int Function_141(int iParam0) //Position: 0x6ABA / 27322
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

int Function_142(int iParam0) //Position: 0x6BF1 / 27633
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

void Function_143(int iParam0, int iParam1) //Position: 0x6CA9 / 27817
{
	float fVar0;
	bool bVar1;
	
	if (IS_OBJECT_VALID(iParam0->f_192))
	{
		LOG_ERROR("Called CREATE_QUEST_GATEWAY with an already valid gateway");
		return;
	}
	if ((((Function_19(iParam0->f_144, 2048) || Global_3380) || Global_3382) || Global_3392) || Global_34165.f_28)
	{
		return;
	}
	fVar0 = iParam0->f_96;
	iParam0->f_192 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(Global_63535, Function_83(), *(iParam0 + 112), 0.0f, 0.0f, 0.0f, fVar0, fVar0, fVar0, 0, Global_34573, iParam1, iParam0->f_92, 0, 1, 1);
	Function_144(iParam0);
	bVar1 = GATEWAY_GET_MARKER(iParam0->f_192);
	if (IS_OBJECT_VALID(bVar1))
	{
		DESTROY_OBJECT(bVar1);
	}
	return;
}

void Function_144(int iParam0) //Position: 0x6D63 / 28003
{
	float fVar0;
	bool bVar1;
	
	if (IS_VOLUME_VALID(iParam0->f_216))
	{
		return;
	}
	iParam0->f_216 = CREATE_VOLUME_IN_LAYOUT(Global_63535, Function_83(), 2, *(iParam0 + 112), 0.0f, 0.0f, 0.0f, 2.0f, 2.0f, 2.0f);
	ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(iParam0->f_216);
	ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(iParam0->f_216);
	fVar0 = 20.0f;
	if (Function_161(iParam0->f_132))
	{
		if (StackVal || StackVal != 3 != 4)
		{
			fVar0 = 5.0f;
		}
	}
	bVar1 = CREATE_VOLUME_IN_LAYOUT(iParam0->f_216, Function_83(), 2, *(iParam0 + 112), 0.0f, 0.0f, 0.0f, fVar0, fVar0, fVar0);
	DECOR_SET_INT(bVar1, "category", 512);
	Function_145(&bVar1, 0);
	return;
}

int Function_145(var uParam0, int iParam1) //Position: 0x6E05 / 28165
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
	Function_147(DECOR_GET_INT(*uParam0, "script"));
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
		}
		else
		{
			Function_146(iVar0, uParam0, &uVar1, iParam1);
			return 1;
		}
		iVar0++;
	}
	LOG_ERROR("No room to add another volume... this really shouldn't happen tell steve");
	RELEASE_VOLUME(*uParam0);
	return 0;
}

void Function_146(int iParam0, var uParam1, int iParam2, bool bParam3) //Position: 0x6F66 / 28518
{
	struct<8> Var0;
	
	Global_26155[iParam05].f_8 = *uParam1;
	Global_26155[iParam05].f_16 = GET_CURRENT_GAME_TIME();
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_67("stayout") };
	Global_26155[iParam05].f_12 = CREATE_VOLUME_IN_LAYOUT(Global_26150, &Var0, 3, *iParam2, 0.0f, 0.0f, 0.0f, 12.0f, 5.0f, 12.0f);
	ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(Global_26155[iParam05].f_12, 0);
	ADD_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(Global_26155[iParam05].f_12);
	if (bParam3)
	{
		Global_26155[iParam05].f_4 = ADD_BLIP_FOR_COORD(iParam2, 403, 0f, 2, 0);
		SET_BLIP_BLINK(StackVal, 1, 1, 20.0f);
	}
}

int Function_147(bool bParam0) //Position: 0x7001 / 28673
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
						Function_148(iVar0);
					}
					else if (Global_3386)
					{
						if (Function_72(StackVal, StackVal, Global_34573, vVar1) < 25.0f)
						{
							Function_148(iVar0);
						}
					}
					else if (Function_72(StackVal, StackVal, Global_34573, vVar1) < 55.0f)
					{
						Function_148(iVar0);
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
			Function_148(iVar0);
		}
		iVar0++;
	}
	return 0;
}

void Function_148(int iParam0) //Position: 0x7162 / 29026
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

void Function_149(int iParam0) //Position: 0x71C3 / 29123
{
	if (!Function_19(iParam0->f_144, 1))
	{
		if (iParam0->f_136 != 4294967295)
		{
			STREAMING_REQUEST_ACTOR(iParam0->f_136, 1, true);
			Function_11(iParam0 + 144, 1);
		}
	}
	if (!Function_19(iParam0->f_144, 8))
	{
		REQUEST_STRING_TABLE("RandomCharMissions");
		Function_11(iParam0 + 144, 8);
	}
	if (!Function_19(iParam0->f_144, 2))
	{
		if (UNK_0x214AFB8C(iParam0->f_60))
		{
			STREAMING_REQUEST_GRINGO(iParam0->f_60);
			Function_11(iParam0 + 144, 2);
		}
	}
	if (!Function_19(iParam0->f_144, 4))
	{
		if (UNK_0x214AFB8C(iParam0->f_64))
		{
			STREAMING_REQUEST_PROP(iParam0->f_64, false);
			Function_11(iParam0 + 144, 4);
		}
	}
	return;
}

void Function_150(int iParam0) //Position: 0x7268 / 29288
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
		iVar0 = Function_152(iParam0->f_172);
		iVar1 = Function_151(iParam0->f_172);
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

int Function_151(int iParam0) //Position: 0x73CA / 29642
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

int Function_152(int iParam0) //Position: 0x7433 / 29747
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

int Function_153(int iParam0) //Position: 0x749C / 29852
{
	if (!iParam0->f_172 != 0)
	{
		switch (Global_63399)
		{
			case 0x00000001:
				if (!Function_154(iParam0 + 172, 32))
				{
					return 0;
				}
				break;
			
			case 0x00000002:
				if (!Function_154(iParam0 + 172, 64))
				{
					return 0;
				}
				break;
			
			case 0x00000004:
				if (!Function_154(iParam0 + 172, 128))
				{
					return 0;
				}
				break;
			
			case 0x00000008:
				if (!Function_154(iParam0 + 172, 256))
				{
					return 0;
				}
				break;
			
			case 0x00000010:
				if (!Function_154(iParam0 + 172, 512))
				{
					return 0;
				}
				break;
			
			case 0x00000020:
				if (!Function_154(iParam0 + 172, 1024))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

bool Function_154(var uParam0, int iParam1) //Position: 0x7548 / 30024
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_155(bool bParam0) //Position: 0x7564 / 30052
{
	if (!Function_5(1048576) || Global_3381)
	{
		return 1;
	}
	if (!Function_19(Global_63541[bParam055].f_144, 32768))
	{
		if ((Global_3403 || Global_3405) || Global_3404)
		{
			if (!Function_48(Global_76847, 0x8000000))
			{
				Function_43(Global_34573, 0x8000000, 2, 0);
			}
			return 1;
		}
	}
	return 0;
}

bool Function_156(int iParam0, bool bParam1, bool bParam2) //Position: 0x75BD / 30141
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
		if (!Function_159(iParam0))
		{
			stradd(&cVar0, ": DA: Quest helper now hostile with player.", 64);
			TASK_CLEAR(iParam0->f_204);
			Function_116(iParam0, bParam1, 0, 0, bParam2);
			bVar16 = IS_JOURNAL_ENTRY_IN_LIST(Global_63541[bParam155].f_140, 1);
			if (!bVar16)
			{
				bVar17 = IS_JOURNAL_ENTRY_IN_LIST(Global_63541[bParam155].f_140, 0);
				if (bVar17)
				{
					if (Function_71())
					{
						Function_158(bParam1, 1);
					}
					else
					{
						Function_157(bParam1);
					}
				}
				else
				{
					Function_69("RCM_NPC_Attack_Fail", 10.0f, 1, 0, 0, 1, 0);
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
			Function_116(iParam0, bParam1, 0, 0, bParam2);
			return 0;
		}
		if (FIRE_IS_ACTOR_ON_FIRE(iParam0->f_204))
		{
			stradd(&cVar0, "DA: Quest helper is ablaze.", 64);
			TASK_CLEAR(iParam0->f_204);
			Function_116(iParam0, bParam1, 0, 0, bParam2);
			return 0;
		}
		if (IS_ACTOR_DEAD(iParam0->f_204))
		{
			stradd(&cVar0, "DA: Quest helper is dead.", 64);
			TASK_CLEAR(iParam0->f_204);
			Function_116(iParam0, bParam1, 0, 0, bParam2);
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
						if (Function_71())
						{
							Function_158(bParam1, 1);
						}
						else
						{
							Function_157(bParam1);
						}
					}
					else
					{
						stradd(&cVar0, "DA: Printing help message RCM_NPC_Attack_Fail", 64);
						Function_69("RCM_NPC_Attack_Fail", 10.0f, 1, 0, 0, 1, 0);
						Global_74542[bParam110] = 7;
						Global_74542[bParam110].f_4 = GET_TIME_OF_DAY();
						ADD_TIME_USING_TIME_OF_DAY(&Global_74542[bParam110] + 4, Global_63541[bParam155].f_84);
					}
				}
				else
				{
					Function_69("RCM_NPC_Dead", 10.0f, 1, 0, 0, 1, 0);
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
			Function_116(iParam0, bParam1, 0, 0, bParam2);
			TASK_CLEAR(iParam0->f_204);
			TASK_PRIORITY_SET(iParam0->f_204, 2);
			TASK_FLEE_ACTOR(iParam0->f_204, Global_34573, -1.0f, -1.0f, 0, 0, 0);
			TASK_OVERRIDE_SET_MOVETYPE(iParam0->f_204, 1);
			if (IS_JOURNAL_ENTRY_IN_LIST(Global_63541[bParam155].f_140, 0))
			{
				PRINT_OBJECTIVE_FORMAT(7.5f, "RCM_Quest_Disabled", iParam0 + 4, "", "", "", 0, 2, 0, 0, 0);
				DEACTIVATE_JOURNAL_ENTRY(iParam0->f_140, 1);
				SET_JOURNAL_ENTRY_PROGRESS(iParam0->f_140, -1.0f, 0, "RCM_InactiveJournal");
			}
			Global_74542[bParam110] = 7;
			Global_74542[bParam110].f_4 = GET_TIME_OF_DAY();
			ADD_TIME_USING_TIME_OF_DAY(&Global_74542[bParam110] + 4, Global_63541[bParam155].f_84);
		}
	}
	return 1;
}

void Function_157(bool bParam0) //Position: 0x79DE / 31198
{
	char* cVar0[32];
	
	Global_74542[bParam010] = 7;
	Global_74542[bParam010].f_4 = GET_TIME_OF_DAY();
	ADD_TIME_USING_TIME_OF_DAY(&Global_74542[bParam010] + 4, Global_63541[bParam055].f_84);
	PRINT_OBJECTIVE_FORMAT(7.5f, "RCM_Quest_Fail", &Global_63541[bParam055] + 4, "", "", "", 0, 2, 0, 0, 0);
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
		SET_JOURNAL_ENTRY_PROGRESS(Global_63541[bParam055].f_140, -1.0f, 0, "RCM_FailedJournal");
	}
	return;
}

void Function_158(bool bParam0, bool bParam1) //Position: 0x7B40 / 31552
{
	char* cVar0[32];
	
	Global_74542[bParam010] = 7;
	Global_74542[bParam010].f_4 = GET_TIME_OF_DAY();
	ADD_TIME_USING_TIME_OF_DAY(&Global_74542[bParam010] + 4, Global_63541[bParam055].f_84);
	PRINT_OBJECTIVE_FORMAT(7.5f, "RCM_Quest_Fail", &Global_63541[bParam055] + 4, "", "", "", 0, 2, 0, 0, 0);
	if (bParam1)
	{
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
	}
	if (!Function_48(Global_76846, 8192))
	{
		Function_43(Global_34573, 8192, 1, 0);
	}
	if (IS_JOURNAL_ENTRY_IN_LIST(Global_63541[bParam055].f_140, 0))
	{
		SET_JOURNAL_ENTRY_PROGRESS(Global_63541[bParam055].f_140, -1.0f, 0, "RCM_FailedJournal");
	}
	return;
}

bool Function_159(int iParam0) //Position: 0x7CC0 / 31936
{
	if (!iParam0->f_152)
	{
		if (Function_71())
		{
			if (((AI_IS_AGGROING(iParam0->f_204, Global_34573) || AI_IS_HOSTILE_OR_ENEMY(iParam0->f_204, Global_34573)) || GET_LAST_ATTACKER(iParam0->f_204) != Global_34573) || IS_ACTOR_HANDSUP(iParam0->f_204))
			{
				return 0;
			}
			if ((IS_PLAYER_TARGETTING_ACTOR(0, iParam0->f_204, 1) && GET_ACTOR_FACTION(iParam0->f_204) == 20) && GET_ACTOR_FACTION(iParam0->f_204) == 23)
			{
				return 0;
			}
		}
		if ((((AI_IS_AGGROING(iParam0->f_204, Global_34573) || AI_IS_HOSTILE_OR_ENEMY(iParam0->f_204, Global_34573)) || GET_LAST_ATTACKER(iParam0->f_204) != Global_34573) || IS_ACTOR_HANDSUP(iParam0->f_204)) || IS_PLAYER_TARGETTING_ACTOR(0, iParam0->f_204, 1))
		{
			return 0;
		}
		return 1;
	}
	return 1;
}

bool Function_160(var uParam0, int iParam1) //Position: 0x7D64 / 32100
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_161(bool bParam0) //Position: 0x7D80 / 32128
{
	if (bParam0 > 0 || bParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_162(int iParam0) //Position: 0x7D96 / 32150
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	
	if (iParam0 != 4294967295 || iParam0 != 0)
	{
		return;
	}
	if (Function_1())
	{
		return;
	}
	iVar0 = GET_JOURNAL_ENTRY_TYPE(iParam0);
	if (iVar0 == 4)
	{
		if (iParam0 != GET_TARGETED_JOURNAL_ENTRY())
		{
			return;
		}
	}
	Function_172(GET_TARGETED_JOURNAL_ENTRY());
	iVar1 = GET_JOURNAL_ENTRY_MISC_FLAG(iParam0);
	switch (iVar0)
	{
		case 0x00000004:
			if (Global_28184)
			{
				return;
			}
			iVar6 = 0;
			while (iVar6 <= Global_27774)
			{
				if (Function_173(iVar6) && !Function_175(iVar6))
				{
					if (iParam0 == Global_27774[iVar613].f_48)
					{
						iVar5 = iVar6;
						bVar4 = true;
					}
				}
				iVar6++;
			}
			if (!bVar4)
			{
				Function_171();
			}
			else if (iVar5 != Global_28180)
			{
				if (!GET_JOURNAL_ENTRY_DISALLOW_TRACKING(iParam0))
				{
					Function_170(iVar5);
				}
			}
			else
			{
				return;
			}
			if (!GET_JOURNAL_ENTRY_DISALLOW_TRACKING(iParam0))
			{
				Function_166();
				TARGET_JOURNAL_ENTRY(iParam0);
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
				if (!Function_19(Global_63541[iVar155].f_144, 2048))
				{
					iVar3 = iVar1;
					if (Function_163(&(Global_63541[iVar155]), iVar3))
					{
						Function_11(&Global_63541[iVar155] + 144, 64);
						Function_118(&(Global_63541[iVar155]), iVar3);
						if (IS_OBJECT_VALID(Global_63541[iVar155].f_192))
						{
							DESTROY_OBJECT(Global_63541[iVar155].f_192);
							Function_143(&(Global_63541[iVar155]), 7);
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

bool Function_163(int iParam0, bool bParam1) //Position: 0x7F38 / 32568
{
	if (Function_19(Global_63541[bParam155].f_144, 64))
	{
		return 1;
	}
	if (Function_121(bParam1))
	{
		Function_11(&Global_63541[bParam155] + 144, 64);
		return 1;
	}
	if ((Function_179(bParam1) || Function_123(bParam1)) || Function_122(bParam1))
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
	if (Function_161(iParam0->f_132))
	{
		if (Function_160(&(Global_29008[iParam0->f_132]), 256))
		{
			return 0;
		}
	}
	if (Function_155(bParam1))
	{
		return 0;
	}
	if (IS_ACTOR_VALID(iParam0->f_204))
	{
		if (!((((Global_63096 || Global_3384) || Global_3369) || iParam0->f_152) || GET_ACTOR_INVULNERABILITY(iParam0->f_204)))
		{
			if (!Function_159(iParam0))
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
	if (!Function_164(iParam0, bParam1))
	{
		return 0;
	}
	Function_11(&Global_63541[bParam155] + 144, 64);
	return 1;
}

bool Function_164(int iParam0, int iParam1) //Position: 0x804F / 32847
{
	int iVar0;
	
	if (!iParam0->f_172 != 0)
	{
		if (Function_154(iParam0 + 172, 4))
		{
			if (!Function_165(iParam1))
			{
				return 0;
			}
		}
		if (Function_154(iParam0 + 172, 1))
		{
			if (!Function_123(iParam0->f_168))
			{
				return 0;
			}
		}
		if (Function_154(iParam0 + 172, 2) && Global_3365)
		{
			iVar0 = Function_110(iParam0->f_176);
			if (Function_98(iVar0))
			{
				if (StackVal && StackVal == 3 == 4)
				{
					return 0;
				}
			}
		}
		if (Function_154(iParam0 + 172, 8) && Global_3365)
		{
			if (Function_98(iParam0->f_164))
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
				if (!Function_154(iParam0 + 172, 32))
				{
					return 0;
				}
				break;
			
			case 0x00000002:
				if (!Function_154(iParam0 + 172, 64))
				{
					return 0;
				}
				break;
			
			case 0x00000004:
				if (!Function_154(iParam0 + 172, 128))
				{
					return 0;
				}
				break;
			
			case 0x00000008:
				if (!Function_154(iParam0 + 172, 256))
				{
					return 0;
				}
				break;
			
			case 0x00000010:
				if (!Function_154(iParam0 + 172, 512))
				{
					return 0;
				}
				break;
			
			case 0x00000020:
				if (!Function_154(iParam0 + 172, 1024))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

bool Function_165(int iParam0) //Position: 0x8193 / 33171
{
	return StackVal;
}

void Function_166() //Position: 0x81A3 / 33187
{
	if (Function_169(Global_28180))
	{
		if (Global_28180.f_12)
		{
			if (IS_BLIP_VALID(StackVal))
			{
				REMOVE_BLIP(StackVal);
			}
			Global_28180.f_4 = Function_168(Global_28180);
			Global_28180.f_8 = Function_167(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
		else if (!IS_BLIP_VALID(StackVal))
		{
			Global_28180.f_4 = Function_168(Global_28180);
			Global_28180.f_8 = Function_167(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
	}
	return;
}

var Function_167(int iParam0, int iParam1) //Position: 0x821E / 33310
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
					if (Function_109(6, 0) || Function_109(12, 0))
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
					if (Function_123(13) && iVar16)
					{
						bVar6 = StackVal;
						iVar16 = 0;
					}
					else if (iVar16 && Function_109(5, 0))
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
					if (Function_123(26) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_123(25) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_123(24) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_123(23) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (iVar17 && Function_109(26, 0))
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
					if (Function_123(55) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_123(54) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_123(27) && iVar18)
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
					if (Function_123(52) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_123(51) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_123(50) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_123(49) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_109(17, 0) && iVar15)
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
					if (Function_123(19) && iVar19)
					{
						vVar0 = { -1708.36f, 46.18f, 2175.89f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_109(6, 0) && Function_123(18)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_123(17) && iVar19)
					{
						vVar0 = { -1687.208f, 53.208f, 2140.491f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_109(9, 0) && Function_123(16)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_123(15) && iVar19)
					{
						vVar0 = { -1709.084f, 55.216f, 2104.631f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if (Function_109(8, 0) && iVar19)
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
	if (Function_65(StackVal, StackVal, vVar0))
	{
		if (IS_OBJECT_VALID(bVar6))
		{
			GET_OBJECT_POSITION(bVar6, &vVar0);
			if (Function_65(StackVal, StackVal, vVar3))
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
	if (!Function_65(StackVal, StackVal, vVar3))
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

int Function_168(int iParam0) //Position: 0x8E0F / 36367
{
	int iVar0;
	int iVar1;
	
	if (!Function_169(iParam0))
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

bool Function_169(int iParam0) //Position: 0x8E5E / 36446
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

int Function_170(int iParam0) //Position: 0x8E74 / 36468
{
	if (Global_28180 == iParam0)
	{
		return 1;
	}
	if (!Function_169(iParam0))
	{
		LOG_ERROR("Attempting to hunt to an invalid outfit");
		return 0;
	}
	if (Function_175(iParam0))
	{
		return 0;
	}
	if (!Function_173(iParam0))
	{
		return 0;
	}
	Global_28180 = iParam0;
	Global_28180.f_12 = 1;
	return 1;
}

void Function_171() //Position: 0x8EDD / 36573
{
	Global_28180 = 4294967295;
	if (IS_BLIP_VALID(StackVal))
	{
		REMOVE_BLIP(StackVal);
	}
	Global_28180.f_12 = 1;
	return;
}

void Function_172(int iParam0) //Position: 0x8F00 / 36608
{
	int iVar0;
	
	if (iParam0 != 4294967295 || iParam0 != 0)
	{
		return;
	}
	iVar0 = GET_JOURNAL_ENTRY_TYPE(iParam0);
	switch (iVar0)
	{
		case 0x00000004:
			Function_171();
			break;
		
		case 0x00000002:
			break;
	}
	TARGET_JOURNAL_ENTRY(4294967295);
	return;
}

bool Function_173(int iParam0) //Position: 0x8F3A / 36666
{
	if (!Function_169(iParam0))
	{
		LOG_ERROR("Attempting to check discovery of invalid outfit");
		return 0;
	}
	if (Function_174(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

bool Function_174(int iParam0, int iParam1) //Position: 0x8F8C / 36748
{
	int iVar0;
	
	if (!Function_169(iParam0))
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

bool Function_175(int iParam0) //Position: 0x8FB9 / 36793
{
	if (!Function_169(iParam0))
	{
		LOG_ERROR("Attempting to check wearable on invalid outfit");
		return 0;
	}
	if (Function_174(iParam0, 4))
	{
		return 1;
	}
	return 0;
}

bool Function_176(int iParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x900A / 36874
{
	if (!iParam0->f_172 != 0)
	{
		if (Function_154(iParam0 + 172, 4))
		{
			if (!Function_165(iParam1))
			{
				return 0;
			}
		}
		if (Function_154(iParam0 + 172, 1))
		{
			if (Global_63541[iParam0->f_16855].f_20 != Global_63541[iParam155].f_20 || iParam3)
			{
				if (!Function_123(iParam0->f_168))
				{
					return 0;
				}
			}
		}
		if (Function_154(iParam0 + 172, 2) && Global_3365)
		{
			if (!Function_109(iParam0->f_176, 0))
			{
				return 0;
			}
		}
		if (Function_154(iParam0 + 172, 8) && Global_3365)
		{
			if (!Function_177(iParam0->f_164, 0))
			{
				return 0;
			}
		}
		if (!bParam2)
		{
			return 1;
		}
		return Function_153(iParam0);
	}
	return 1;
}

bool Function_177(int iParam0, bool bParam1) //Position: 0x90BE / 37054
{
	if (!Function_98(iParam0))
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

void Function_178(int iParam0, bool bParam1) //Position: 0x90F4 / 37108
{
	if (IS_LATER_THAN(StackVal, GET_TIME_OF_DAY()))
	{
		if (IS_ACTOR_VALID(Global_34573))
		{
			if (VDIST(*(iParam0 + 100), Global_34574) < iParam0->f_76)
			{
				Global_74542[bParam110] = 1;
				SET_JOURNAL_ENTRY_PROGRESS(Global_63541[bParam155].f_140, -1.0f, 0, 0);
			}
		}
	}
	return;
}

bool Function_179(int iParam0) //Position: 0x9144 / 37188
{
	if (Global_74542[iParam010] == 0)
	{
		return 1;
	}
	return 0;
}

bool Function_180(int iParam0) //Position: 0x9159 / 37209
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_25986[iParam0];
}

void Function_181() //Position: 0x9175 / 37237
{
	Global_63535 = CREATE_LAYOUT("QuestLayout");
	return;
}

void Function_182(int iParam0) //Position: 0x918F / 37263
{
	strcpy(iParam0 + 12, "nMINIGAMES", 16);
	*iParam0 = 84224;
	iParam0->f_4 = 37315;
	iParam0->f_8 = 84224;
	iParam0->f_28 = 0;
	return;
}

int Function_183() //Position: 0x91C3 / 37315
{
	if (Function_184(&Global_62527, 0) >= 0)
	{
		return 0;
	}
	return 1;
}

int Function_184(var uParam0, bool bParam1) //Position: 0x91D7 / 37335
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
				Function_370();
			}
			else if (Global_62481 == 4294967294)
			{
				Function_369();
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
		Function_368(uParam0);
		return bVar1;
	}
	Function_367(uParam0);
	if (((Global_3403 || Global_3407) || Global_3404) || Function_366(2048))
	{
		Function_368(uParam0);
		return bVar1;
	}
	if (Global_3382)
	{
		Function_368(uParam0);
		return bVar1;
	}
	if (Global_3392)
	{
		Function_368(uParam0);
		return bVar1;
	}
	if (Global_3384)
	{
		Function_368(uParam0);
		if (Global_3383)
		{
			Global_3383 = 0;
		}
		return bVar1;
	}
	if (Global_3380)
	{
		Function_368(uParam0);
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
	if (!bParam1 && Function_365(Global_29006))
	{
		Function_368(uParam0);
		return bVar1;
	}
	if (Global_3379)
	{
		Function_368(uParam0);
		Global_3380 = 1;
		Function_363(1, 0);
		return bVar1;
	}
	if (Global_3383)
	{
		Function_368(uParam0);
		Global_3384 = 1;
		Function_363(0, 0);
		return bVar1;
	}
	if (Global_63096 && !Function_361(&Global_63084))
	{
		Function_368(uParam0);
		return bVar1;
	}
	if ((Function_360(1, 0, 0, 5) && !Global_3384) && !Global_3380)
	{
		Function_368(uParam0);
		return bVar1;
	}
	if (bParam1)
	{
		if (!Global_30938 != 0)
		{
			iVar2 = Function_100(StackVal, StackVal, Global_30938);
			if (Function_98(iVar2))
			{
				Var3 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_359(uParam0, iVar2) };
				if (!Var3.f_104 != 0)
				{
					Function_247(&Var3, 0, 0, 0);
				}
			}
			Global_30938 = 0;
		}
	}
	if (Global_34165.f_36 && Global_3366)
	{
		if (Function_111(Global_34165.f_20))
		{
			if (!Global_3422[Global_34165.f_2040].f_104 != 0)
			{
				Function_247(&(Global_3422[Global_34165.f_2040]), 0, 1, 1);
				Global_34165.f_36 = 0;
			}
		}
	}
	iVar0 = 0;
	while (iVar0 <= *uParam0)
	{
		if ((*uParam0)[iVar040] != Global_29003 || !bParam1)
		{
			Function_185(uParam0[iVar040], iVar0, bParam1);
		}
		iVar0++;
	}
	if ((Global_26281 + 5.0f) - 1.0f) > GET_CURRENT_GAME_TIME()
	{
		Global_3406 = 0;
	}
	return bVar1;
}

void Function_185(bool bParam0, int iParam1, bool bParam2) //Position: 0x947C / 38012
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
			Function_246(bParam0, iParam1);
			return;
		}
	}
	if (Function_109(iParam1, 0) && !bParam0->f_104 != 2)
	{
		Function_246(bParam0, iParam1);
		return;
	}
	iVar0 = Function_245(StackVal);
	if (iVar0 != 1)
	{
		if (!Function_244(bParam0))
		{
			Function_246(bParam0, iParam1);
			return;
		}
	}
	if (IS_SCRIPT_VALID(bParam0->f_108))
	{
		Function_246(bParam0, iParam1);
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
					if (!Function_243(bParam0))
					{
						bParam0->f_124 = 0;
						Function_242(bParam0->f_100, 0, bParam0->f_128);
						if ((IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(bParam0->f_40)) && iParam1 == 11) && iParam1 == 54)
						{
							if (GRINGO_IS_ACTIVATION_ALLOWED(GET_GRINGO_FROM_OBJECT(bParam0->f_40)))
							{
								GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(bParam0->f_40), false);
							}
						}
					}
					else if (Function_237(bParam0))
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
							Function_242(bParam0->f_100, 0, bParam0->f_128);
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
						Function_242(bParam0->f_100, 1, bParam0->f_128);
						if (Function_154(bParam0 + 128, 4096))
						{
							Function_236(bParam0 + 128, 4096);
						}
					}
					fVar14 = Function_235(StackVal, StackVal, StackVal, StackVal, Global_34574, *(bParam0 + 52));
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
								bParam0->f_40 = CREATE_GRINGO_IN_LAYOUT_BY_ID(Global_6287, Function_83(), bParam0->f_28, vVar11, 0.0f, 0.0f, 0.0f);
								if (fVar14 > 175.0f)
								{
									Function_236(bParam0 + 128, 8388608);
								}
								else
								{
									Function_234(bParam0 + 128, 8388608);
								}
							}
						}
					}
					if ((((!IS_OBJECT_VALID(bParam0->f_44) && (!bParam0->f_116 || bParam0->f_124)) && ((!iParam1 != 14 || fVar14 < 100.0f) || Global_3406)) && ((fVar14 < 7.5f || (bParam0->f_116 && bParam0->f_124)) || Global_3406)) && (!Function_154(bParam0 + 128, 1048576) || bParam0->f_124))
					{
						Function_227(bParam0);
						if (bParam0->f_128 & 524288 >= 0)
						{
							Function_226(4194304);
						}
						if (bParam0->f_124)
						{
							if (IS_BLIP_VALID(bParam0->f_100))
							{
								REMOVE_BLIP(bParam0->f_100);
							}
							bParam0->f_44 = Function_225(StackVal, StackVal, Global_6287, bParam0 + 12, *(bParam0 + 52), 0.0f, 0.0f, 0.0f, Global_34573, bParam0->f_64, 0, 3, bParam0->f_96, 3, 1, 3212836864, 3212836864, 1);
							bParam0->f_100 = GET_BLIP_ON_OBJECT(bParam0->f_44);
						}
						else if (!IS_BLIP_VALID(bParam0->f_100))
						{
							bParam0->f_100 = ADD_BLIP_FOR_COORD(bParam0 + 52, bParam0->f_96, 0f, 2, 0);
						}
						SET_BLIP_PRIORITY(bParam0->f_100, 3);
						Function_242(bParam0->f_100, bParam0->f_124, bParam0->f_128);
					}
					else if (!bParam0->f_124 && IS_OBJECT_VALID(bParam0->f_44))
					{
						if (IS_BLIP_VALID(bParam0->f_100))
						{
							REMOVE_BLIP(bParam0->f_100);
						}
						Function_224(bParam0->f_44);
						bParam0->f_100 = ADD_BLIP_FOR_COORD(bParam0 + 52, bParam0->f_96, 0f, 2, 0);
						SET_BLIP_PRIORITY(bParam0->f_100, 3);
						Function_242(bParam0->f_100, bParam0->f_124, bParam0->f_128);
					}
					else if (!bParam0->f_124 && !IS_BLIP_VALID(bParam0->f_100))
					{
						bParam0->f_100 = ADD_BLIP_FOR_COORD(bParam0 + 52, bParam0->f_96, 0f, 2, 0);
						SET_BLIP_PRIORITY(bParam0->f_100, 3);
						Function_242(bParam0->f_100, bParam0->f_124, bParam0->f_128);
					}
					if ((!bParam0->f_112 && !bParam0->f_124) && iVar0 == 1)
					{
						if (fVar14 > 5.0f)
						{
							if (!bParam0->f_116)
							{
								Function_222(bParam0);
								if (IS_OBJECT_VALID(bParam0->f_44))
								{
									Function_224(bParam0->f_44);
									bParam0->f_100 = ADD_BLIP_FOR_COORD(bParam0 + 52, bParam0->f_96, 0f, 2, 0);
									SET_BLIP_PRIORITY(bParam0->f_100, 3);
									Function_242(bParam0->f_100, bParam0->f_124, bParam0->f_128);
								}
								bParam0->f_116 = 1;
							}
						}
						else if (bParam0->f_116)
						{
							bParam0->f_116 = 0;
						}
					}
					else if ((Function_154(bParam0 + 128, 4194304) && !bParam0->f_112) && bParam0->f_124)
					{
						if (fVar14 > 5.0f && !Function_154(bParam0 + 128, 8388608))
						{
							Function_69("mission_later_family", 0x41200000, 1, 0, 2, 1, 0);
						}
					}
					if ((!bParam0->f_112 && bParam0->f_124) && iVar0 == 1)
					{
						if ((!bParam0->f_120 && IS_OBJECT_VALID(bParam0->f_44)) && fVar14 > 5.0f)
						{
							if (IS_ACTOR_DRIVING_VEHICLE(Global_34573))
							{
								Function_69("mission_no_vehicle", 0x41200000, 1, 0, 2, 1, 0);
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
			if (!Function_243(bParam0))
			{
				bParam0->f_124 = 0;
				Function_242(bParam0->f_100, 0, bParam0->f_128);
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
			else if (Function_237(bParam0))
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
					Function_242(bParam0->f_100, 0, bParam0->f_128);
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
				Function_242(bParam0->f_100, 1, bParam0->f_128);
				if (Function_154(bParam0 + 128, 4096))
				{
					Function_236(bParam0 + 128, 4096);
				}
			}
			fVar14 = Function_235(StackVal, StackVal, StackVal, StackVal, Global_34574, *(bParam0 + 52));
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
						bParam0->f_40 = CREATE_GRINGO_IN_LAYOUT_BY_ID(Global_6287, Function_83(), bParam0->f_28, vVar11, 0.0f, 0.0f, 0.0f);
						if (fVar14 > 175.0f)
						{
							Function_236(bParam0 + 128, 8388608);
						}
						else
						{
							Function_234(bParam0 + 128, 8388608);
						}
					}
				}
			}
			if (((!bParam0->f_116 && !IS_BLIP_VALID(bParam0->f_100)) && !bVar9) && (!Function_154(bParam0 + 128, 1048576) || bParam0->f_124))
			{
				Function_227(bParam0);
				if (bParam0->f_128 & 524288 >= 0)
				{
					Function_226(4194304);
				}
				bParam0->f_100 = ADD_BLIP_FOR_COORD(bParam0 + 52, bParam0->f_96, 0f, 2, 0);
				SET_BLIP_PRIORITY(bParam0->f_100, 3);
				Function_242(bParam0->f_100, bParam0->f_124, bParam0->f_128);
			}
			if (((!IS_OBJECT_VALID(bParam0->f_44) && !bVar9) && bParam0->f_124) && (!Function_154(bParam0 + 128, 4194304) || Function_154(bParam0 + 128, 8388608)))
			{
				bParam0->f_44 = Function_225(StackVal, StackVal, Global_6287, bParam0 + 12, *(bParam0 + 52), 0.0f, 0.0f, 0.0f, Global_34573, 2.5f, 0, 3, 4294967295, 3, 1, 3212836864, 3212836864, 1);
			}
			if (!bParam0->f_112 && !bParam0->f_124)
			{
				if (IS_OBJECT_VALID(bParam0->f_44))
				{
					Function_224(bParam0->f_44);
				}
				if (bVar9)
				{
					if (!bParam0->f_116)
					{
						bParam0->f_116 = 1;
						Function_222(bParam0);
					}
				}
				else if (bParam0->f_116)
				{
					bParam0->f_116 = 0;
				}
			}
			else if ((Function_154(bParam0 + 128, 4194304) && !bParam0->f_112) && bParam0->f_124)
			{
				if (bVar9 && !Function_154(bParam0 + 128, 8388608))
				{
					Function_69("mission_later_family", 0x41200000, 1, 0, 2, 1, 0);
				}
			}
			if ((!bParam0->f_112 && bParam0->f_124) && iVar0 == 1)
			{
				if ((!bParam0->f_120 && IS_OBJECT_VALID(bParam0->f_44)) && bVar9)
				{
					if (IS_ACTOR_DRIVING_VEHICLE(Global_34573))
					{
						Function_69("mission_no_vehicle", 0x41200000, 1, 0, 2, 1, 0);
						bParam0->f_120 = 1;
					}
				}
			}
			break;
		
		case 0x00000005:
			iVar15 = iParam1;
			if (!Function_243(bParam0) || Global_3403)
			{
				bParam0->f_124 = 0;
			}
			else
			{
				bParam0->f_124 = 1;
			}
			iVar17 = Function_221();
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
					bVar18 = Function_220(bParam0->f_72, &bVar19, &(Global_62968[iVar15]), 0);
					break;
				
				case 0x00000001:
					bVar18 = Function_220(bParam0->f_72, &bVar19, &(Global_62968[iVar15]), 1);
					break;
				
				case 0x00000007:
					bVar18 = Function_219(bParam0->f_72, &bVar19, &(Global_62968[iVar15]));
					break;
				
				case 0x00000002:
					bVar18 = Function_217(bParam0->f_72, &bVar19, &(Global_62968[iVar15]));
					break;
				
				case 0x00000008:
					bVar18 = Function_215(bParam0->f_72, &bVar19, &(Global_62968[iVar15]));
					break;
				
				case 0x00000004:
					bVar18 = Function_212(bParam0->f_72, &bVar19, &(Global_62968[iVar15]));
					break;
				
				case 0x00000005:
					bVar18 = Function_211(bParam0->f_72, &bVar19, &(Global_62968[iVar15]));
					break;
			}
			if (iVar15 == 1)
			{
				if (Global_28178 != 1)
				{
					bVar20 = true;
				}
			}
			if (((IS_ACTOR_VALID(Global_34573) && Function_210(iParam1)) && !bVar16) && !bVar20)
			{
				if (!bParam0->f_112 && ((Global_26281 + 5.0f) - 1.0f) > GET_CURRENT_GAME_TIME())
				{
					if (!IS_OBJECT_VALID(bParam0->f_40) && IS_LAYOUTREF_VALID(Global_30616))
					{
						bParam0->f_40 = CREATE_POINT_IN_LAYOUT(Global_30616, Function_83(), *(bParam0 + 52), 0.0f, 0.0f, 0.0f);
					}
				}
				if ((IS_OBJECT_VALID(bParam0->f_40) && !bParam0->f_96 != 4294967295) && !bVar16)
				{
					if (!IS_BLIP_VALID(bParam0->f_100))
					{
						bParam0->f_100 = ADD_BLIP_FOR_OBJECT(bParam0->f_40, bParam0->f_96, 0.0f, 2, 0);
						UNK_0x1E98AFEC(bParam0->f_100, 1);
						SET_BLIP_MAX_DISTANCE(bParam0->f_100, 1.25f);
						SET_BLIP_PRIORITY(bParam0->f_100, 1);
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
							SET_BLIP_COLOR(bParam0->f_100, 1.0f, 1.0f, 1.0f, 0.3f);
						}
					}
					else
					{
						SET_BLIP_COLOR(bParam0->f_100, 1.0f, 1.0f, 1.0f, 0.75f);
					}
					if (bParam0->f_124)
					{
						if (!Function_209(iParam1))
						{
							if (Function_208(StackVal, StackVal, *(bParam0 + 52), 1.25f))
							{
								if (Function_205(iParam1, 1))
								{
									Function_140(StackVal, StackVal, bParam0->f_72, (1 + iParam1), *(bParam0 + 52), Function_204(bParam0->f_128));
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
					if ((bVar19 && bVar16) && !Function_48(Global_76848, 8388608))
					{
						Function_43(Global_34573, 8388608, 1, 1);
					}
					if (bVar21)
					{
						switch (iVar15)
						{
							case 0x00000000:
								Function_201(bParam0->f_72, bParam0 + 28, 0);
								break;
							
							case 0x00000001:
								Function_201(bParam0->f_72, bParam0 + 28, 1);
								break;
							
							case 0x00000007:
								Function_199(bParam0->f_72, bParam0 + 28);
								break;
							
							case 0x00000002:
								Function_195(bParam0->f_72, bParam0 + 28);
								break;
							
							case 0x00000008:
								Function_193(bParam0->f_72, bParam0 + 28);
								break;
							
							case 0x00000004:
								Function_191(bParam0->f_72, bParam0 + 28);
								break;
							
							case 0x00000005:
								Function_189(bParam0->f_72, bParam0 + 28);
								break;
							}
					}
					if (bVar19)
					{
						if (bVar18)
						{
							if (!bVar16)
							{
								if (!Function_49(Function_188(), 0, 0))
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
							if (Function_154(bParam0 + 128, 8192))
							{
								if (Function_186() <= bParam0->f_140)
								{
									stradd(&cVar1, "NO_", 32);
								}
							}
							stradd(&cVar1, "LAUNCH_", 32);
							stradd(&cVar1, bParam0 + 12, 32);
							bParam0->f_68 = ADD_SCRIPT_USE_CONTEXT(&cVar1, 40, 5, 0, 0, 0, 0, 4294967295, 0);
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

int Function_186() //Position: 0xA1B0 / 41392
{
	return Function_187(0);
}

int Function_187(bool bParam0) //Position: 0xA1BA / 41402
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

bool Function_188() //Position: 0xA1FB / 41467
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

void Function_189(int iParam0, int iParam1) //Position: 0xA210 / 41488
{
	bool bVar0;
	int iVar1;
	vector3 vVar2;
	bool bVar5;
	
	if (!Global_3384)
	{
		if (FLOOR(GET_CURRENT_GAME_TIME()) - *iParam1) >= RAND_INT_RANGE(25, 35)
		{
			Function_190(iParam0, 0);
			Function_190(iParam0, 1);
			if (StackVal > Function_235(StackVal, StackVal, StackVal, Function_235(StackVal, StackVal, StackVal, StackVal, Global_34574, Function_190(iParam0, 0)), Global_34574, Function_190(iParam0, 1)))
			{
				iVar1 = 0;
			}
			else
			{
				iVar1 = 1;
			}
			Function_190(iParam0, iVar1);
			vVar2 = { StackVal, StackVal, Function_190(iParam0, iVar1) };
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

vector3 Function_190(int iParam0, int iParam1) //Position: 0xA2F2 / 41714
{
	if (iParam0 == Global_30668[0])
	{
		if (iParam1 == 0)
		{
			return -814.7646f, 92.42929f, 2350.04f;
		}
		return -826.37f, 92.361f, 2350.054f;
	}
	if (iParam0 == Global_30658[1])
	{
		if (iParam1 == 0)
		{
			return -3657.917f, 42.30736f, 2131.19f;
		}
		return -3666.223f, 42.223f, 2139.29f;
	}
	if (iParam0 == Global_30693[1])
	{
		if (iParam1 == 0)
		{
			return -1709.76f, 8.09067f, 4259.935f;
		}
		return -1721.364f, 8.09067f, 4259.787f;
	}
	if (iParam0 == Global_30717[1])
	{
		LOG_ERROR("Horseshoes beecher's hope has been cut");
	}
	LOG_ERROR("Returning invalid five finger fillet AI seat");
	return 0.0f, 0.0f, 0.0f;
}

void Function_191(int iParam0, int iParam1) //Position: 0xA409 / 41993
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
			Function_192(iParam0);
			vVar2 = { StackVal, StackVal, Function_192(iParam0) };
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

vector3 Function_192(int iParam0) //Position: 0xA4CA / 42186
{
	if (iParam0 == Global_30693[2])
	{
		return -1471.104f, 16.52992f, 3948.271f;
	}
	if (iParam0 == Global_30679[0])
	{
		return -3143.721f, 43.17878f, 3720.842f;
	}
	if (iParam0 == Global_30707[0])
	{
		return -466.5623f, 20.97986f, 3882.657f;
	}
	if (iParam0 == Global_30723[2])
	{
		return -262.932f, 85.11941f, 2119.438f;
	}
	LOG_ERROR("Returning invalid arm wrestling AI seat");
	return 0.0f, 0.0f, 0.0f;
}

void Function_193(int iParam0, int iParam1) //Position: 0xA575 / 42357
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
			Function_194(iParam0);
			vVar2 = { StackVal, StackVal, Function_194(iParam0) };
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

vector3 Function_194(int iParam0) //Position: 0xA63A / 42554
{
	if (iParam0 == Global_30640[0])
	{
		return -2194.388f, 16.57687f, 2592.54f;
	}
	if (iParam0 == Global_30668[1])
	{
		return 161.1002f, 73.83751f, 2294.133f;
	}
	if (iParam0 == Global_30685[0])
	{
		return -4274.772f, 18.07059f, 4453.844f;
	}
	if (iParam0 == Global_30707[3])
	{
		return 354.5946f, 76.28807f, 3448.024f;
	}
	if (iParam0 == Global_30723[1])
	{
		return -464.3469f, 152.3559f, 1596.59f;
	}
	LOG_ERROR("Returning invalid five finger fillet AI seat");
	return 0.0f, 0.0f, 0.0f;
}

void Function_195(int iParam0, int iParam1) //Position: 0xA708 / 42760
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
			Function_198(iParam0);
			vVar2 = { StackVal, StackVal, Function_198(iParam0) };
			bVar0 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fake_blackjack_dealer", &vVar2, 1.0f, 0);
			if (IS_GRINGO_VALID(bVar0))
			{
				bVar5 = GET_ACTOR_FROM_OBJECT(GRINGO_QUERY_NAMED_COMPONENT_USER(bVar0, "UseCase1"));
				if (IS_ACTOR_VALID(bVar5))
				{
					if (Function_196(GET_OBJECT_FROM_ACTOR(bVar5), GET_OBJECT_FROM_ACTOR(Global_34573)))
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

bool Function_196(var uParam0, bool bParam1) //Position: 0xA835 / 43061
{
	vector3 vVar0;
	
	GET_OBJECT_POSITION(GET_ACTOR_FROM_OBJECT(bParam1), &vVar0);
	return Function_197(StackVal, StackVal, uParam0, vVar0);
}

int Function_197(bool bParam0, vector3 vParam1) //Position: 0xA84F / 43087
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

vector3 Function_198(int iParam0) //Position: 0xA890 / 43152
{
	if (iParam0 == Global_30693[0])
	{
		return -2685.988f, 31.35322f, 4283.588f;
	}
	if (iParam0 == Global_30658[1])
	{
		return -3640.397f, 42.77086f, 2104.753f;
	}
	if (iParam0 == Global_30717[0])
	{
		return 719.2065f, 78.4736f, 1312.102f;
	}
	if (iParam0 == Global_30668[1])
	{
		return 171.4703f, 73.74976f, 2224.109f;
	}
	LOG_ERROR("Returning invalid coordinate");
	return 0.0f, 0.0f, 0.0f;
}

void Function_199(int iParam0, int iParam1) //Position: 0xA930 / 43312
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
					Function_200(iParam0, bVar6);
					vVar0 = { StackVal, StackVal, Function_200(iParam0, bVar6) };
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
					Function_200(iParam0, bVar6);
					vVar0 = { StackVal, StackVal, Function_200(iParam0, bVar6) };
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

vector3 Function_200(int iParam0, bool bParam1) //Position: 0xAAB6 / 43702
{
	if (iParam0 == Global_30685[0])
	{
		switch (bParam1)
		{
			case 0x00000000:
				return -4288.696f, 26.72937f, 4381.383f;
				break;
			
			case 0x00000001:
				return -4289.277f, 26.72937f, 4381.477f;
				break;
			
			case 0x00000002:
				return -4289.651f, 26.72937f, 4381.039f;
				break;
			
			case 0x00000003:
				return -4289.435f, 26.72937f, 4380.51f;
				break;
			
			case 0x00000004:
				return -4288.878f, 26.72937f, 4380.39f;
				break;
			
			case 0x00000005:
				return -4288.485f, 26.72937f, 4380.807f;
				break;
		}
	}
	else if (iParam0 == Global_30668[1])
	{
		switch (bParam1)
		{
			case 0x00000000:
				return 167.5964f, 73.74156f, 2222.775f;
				break;
			
			case 0x00000001:
				return 167.958f, 73.74529f, 2222.327f;
				break;
			
			case 0x00000002:
				return 168.5496f, 73.74591f, 2222.387f;
				break;
			
			case 0x00000003:
				return 168.7889f, 73.74529f, 2222.935f;
				break;
			
			case 0x00000004:
				return 168.4313f, 73.74976f, 2223.425f;
				break;
			
			case 0x00000005:
				return 167.8298f, 73.74976f, 2223.35f;
				break;
		}
	}
	else if (iParam0 == Global_30707[2])
	{
		switch (bParam1)
		{
			case 0x00000000:
				return -788.6586f, 13.16462f, 3698.422f;
				break;
			
			case 0x00000001:
				return -788.4316f, 13.16762f, 3698.957f;
				break;
			
			case 0x00000002:
				return -788.7964f, 13.165f, 3699.425f;
				break;
			
			case 0x00000003:
				return -789.389f, 13.165f, 3699.35f;
				break;
			
			case 0x00000004:
				return -789.6095f, 13.165f, 3698.805f;
				break;
			
			case 0x00000005:
				return -789.2333f, 13.165f, 3698.335f;
				break;
		}
	}
	else if (iParam0 == Global_30717[0])
	{
		switch (bParam1)
		{
			case 0x00000000:
				return 856.9058f, 77.51558f, 1278.093f;
				break;
			
			case 0x00000001:
				return 856.6888f, 77.51558f, 1277.556f;
				break;
			
			case 0x00000002:
				return 857.0518f, 77.51558f, 1277.099f;
				break;
			
			case 0x00000003:
				return 857.629f, 77.51558f, 1277.148f;
				break;
			
			case 0x00000004:
				return 857.8614f, 77.51558f, 1277.699f;
				break;
			
			case 0x00000005:
				return 857.4864f, 77.51558f, 1278.173f;
				break;
			}
	}
	LOG_ERROR("Returning invalid coordinate");
	return 0.0f, 0.0f, 0.0f;
}

void Function_201(int iParam0, var uParam1, bool bParam2) //Position: 0xAD8A / 44426
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
					Function_203(iParam0, bVar3, bParam2);
					bVar0 = Function_202(StackVal, StackVal, Function_203(iParam0, bVar3, bParam2));
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
					Function_203(iParam0, bVar3, bParam2);
					bVar0 = Function_202(StackVal, StackVal, Function_203(iParam0, bVar3, bParam2));
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

bool Function_202(var uParam0, var uParam1, int iParam2) //Position: 0xAF16 / 44822
{
	return LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fake_poker", &uParam0, 1.0f, 0);
}

vector3 Function_203(int iParam0, bool bParam1, bool bParam2) //Position: 0xAF58 / 44888
{
	if (iParam0 == Global_30668[0])
	{
		switch (bParam1)
		{
			case 0x00000000:
				return -801.0966f, 92.75807f, 2375.792f;
				break;
			
			case 0x00000001:
				return -801.4974f, 92.75435f, 2375.295f;
				break;
			
			case 0x00000002:
				return -801.2829f, 92.75435f, 2374.737f;
				break;
			
			case 0x00000003:
				return -800.724f, 92.76255f, 2374.656f;
				break;
			
			case 0x00000004:
				return -800.3233f, 92.75678f, 2375.122f;
				break;
			
			case 0x00000005:
				return -800.5463f, 92.75435f, 2375.677f;
				break;
		}
	}
	else if (iParam0 == Global_30668[1])
	{
		switch (bParam1)
		{
			case 0x00000000:
				return 164.353f, 73.75671f, 2230.925f;
				break;
			
			case 0x00000001:
				return 164.5807f, 73.82056f, 2231.472f;
				break;
			
			case 0x00000002:
				return 164.2043f, 73.75299f, 2231.971f;
				break;
			
			case 0x00000003:
				return 163.6548f, 73.76118f, 2231.889f;
				break;
			
			case 0x00000004:
				return 163.4103f, 73.76118f, 2231.366f;
				break;
			
			case 0x00000005:
				return 163.7511f, 73.75671f, 2230.869f;
				break;
		}
	}
	else if (iParam0 == Global_30640[0])
	{
		switch (bParam1)
		{
			case 0x00000000:
				return -2157.424f, 16.88292f, 2596.033f;
				break;
			
			case 0x00000001:
				return -2158.012f, 16.94059f, 2595.997f;
				break;
			
			case 0x00000002:
				return -2158.228f, 16.87845f, 2595.416f;
				break;
			
			case 0x00000003:
				return -2157.847f, 16.87845f, 2594.96f;
				break;
			
			case 0x00000004:
				return -2157.261f, 16.87845f, 2595.042f;
				break;
			
			case 0x00000005:
				return -2157.04f, 16.87845f, 2595.596f;
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
					return 748.5359f, 82.6927f, 1267.343f;
					break;
				
				case 0x00000001:
					return 749.138f, 82.6927f, 1266.645f;
					break;
				
				case 0x00000002:
					return 750.045f, 82.6927f, 1266.796f;
					break;
				
				case 0x00000003:
					return 750.0344f, 82.6917f, 1267.552f;
					break;
				
				case 0x00000004:
					return 749.7606f, 82.6927f, 1268.372f;
					break;
				
				case 0x00000005:
					return 748.8501f, 82.6927f, 1268.207f;
					break;
			}
		}
		else
		{
			switch (bParam1)
			{
				case 0x00000000:
					return 717.6248f, 78.47099f, 1325.972f;
					break;
				
				case 0x00000001:
					return 717.0453f, 78.47099f, 1325.919f;
					break;
				
				case 0x00000002:
					return 716.8008f, 78.47099f, 1325.396f;
					break;
				
				case 0x00000003:
					return 717.1418f, 78.47099f, 1324.928f;
					break;
				
				case 0x00000004:
					return 717.7181f, 78.47099f, 1324.969f;
					break;
				
				case 0x00000005:
					return 717.9684f, 78.47099f, 1325.495f;
					break;
				}
		}
	}
	else if (iParam0 == Global_30717[1])
	{
		switch (bParam1)
		{
			case 0x00000000:
				return -138.6693f, 119.2419f, 1344.049f;
				break;
			
			case 0x00000001:
				return -139.2573f, 119.2419f, 1343.961f;
				break;
			
			case 0x00000002:
				return -139.4945f, 119.2419f, 1343.419f;
				break;
			
			case 0x00000003:
				return -139.1212f, 119.2419f, 1342.946f;
				break;
			
			case 0x00000004:
				return -138.5368f, 119.2419f, 1343.024f;
				break;
			
			case 0x00000005:
				return -138.2953f, 119.2419f, 1343.58f;
				break;
		}
	}
	else if (iParam0 == Global_30693[0])
	{
		switch (bParam1)
		{
			case 0x00000000:
				return -2701.487f, 31.151f, 4278.554f;
				break;
			
			case 0x00000001:
				return -2701.713f, 31.151f, 4277.994f;
				break;
			
			case 0x00000002:
				return -2701.347f, 31.151f, 4277.538f;
				break;
			
			case 0x00000003:
				return -2700.726f, 31.151f, 4277.604f;
				break;
			
			case 0x00000004:
				return -2700.508f, 31.151f, 4278.2f;
				break;
			
			case 0x00000005:
				return -2700.919f, 31.151f, 4278.653f;
				break;
		}
	}
	else if (iParam0 == Global_30707[2])
	{
		switch (bParam1)
		{
			case 0x00000000:
				return -795.5794f, 13.16767f, 3699.937f;
				break;
			
			case 0x00000001:
				return -795.8744f, 13.16057f, 3699.083f;
				break;
			
			case 0x00000002:
				return -794.9905f, 13.16057f, 3698.687f;
				break;
			
			case 0x00000003:
				return -794.196f, 13.16057f, 3699.235f;
				break;
			
			case 0x00000004:
				return -794.2787f, 13.16057f, 3700.203f;
				break;
			
			case 0x00000005:
				return -795.169f, 13.16057f, 3700.608f;
				break;
			}
	}
	LOG_ERROR("Returning invalid coordinate");
	return 0.0f, 0.0f, 0.0f;
}

int Function_204(int iParam0) //Position: 0xB4D2 / 46290
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

bool Function_205(int iParam0, int iParam1) //Position: 0xB53A / 46394
{
	int iVar0;
	
	iVar0 = (1 + iParam0);
	return Function_206(iVar0, iParam1);
}

int Function_206(int iParam0, bool bParam1) //Position: 0xB54D / 46413
{
	bool bVar0;
	struct<8> Var1;
	
	if ((!Global_26031[iParam0] && (!bParam1 || !Function_207())) && !bVar0)
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
		Function_69(&Var1, 0x41200000, 1, 0, 2, 1, 0);
		return 1;
	}
	return 0;
}

bool Function_207() //Position: 0xB795 / 46997
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

bool Function_208(vector3 vParam0, float fParam3) //Position: 0xB7C2 / 47042
{
	return VDIST(vParam0, Global_34574) > (GET_RADAR_RADIUS() * fParam3);
}

bool Function_209(int iParam0) //Position: 0xB7DD / 47069
{
	int iVar0;
	
	iVar0 = (1 + iParam0);
	if (iVar0 > 0 || iVar0 <= Global_26031)
	{
		return 1;
	}
	return Global_26031[iVar0];
}

int Function_210(int iParam0) //Position: 0xB800 / 47104
{
	if (iParam0 >= 4294967295 && iParam0 <= 11)
	{
		return 0;
	}
	return Global_25974[iParam0];
}

int Function_211(int iParam0, var uParam1, int iParam2) //Position: 0xB81C / 47132
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	float fVar6;
	bool bVar7;
	
	if (!IS_OBJECTSET_VALID(*iParam2))
	{
		*iParam2 = CREATE_OBJECTSET_IN_LAYOUT(Function_83(), GET_AMBIENT_LAYOUT(), 12, 0);
	}
	Function_190(iParam0, 0);
	vVar0 = { StackVal, StackVal, Function_190(iParam0, 0) };
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
	Function_190(iParam0, 1);
	vVar0 = { StackVal, StackVal, Function_190(iParam0, 1) };
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
			Function_190(iParam0, 0);
			fVar6 = Function_235(StackVal, StackVal, StackVal, StackVal, Global_34574, Function_190(iParam0, 0));
		}
	}
	if (IS_GRINGO_VALID(bVar5))
	{
		if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(GRINGO_QUERY_NAMED_COMPONENT_USER(bVar5, "UseCase1"))))
		{
			bVar7 = bVar5;
			Function_190(iParam0, 1);
			fVar6 = Function_235(StackVal, StackVal, StackVal, StackVal, Global_34574, Function_190(iParam0, 1));
		}
	}
	if (!IS_GRINGO_VALID(bVar7))
	{
		return 0;
	}
	if (fVar6 > 2.0f)
	{
		if (!Function_49(Global_34573, 1, 1))
		{
			*uParam1 = 1;
		}
	}
	return 1;
}

int Function_212(float fParam0, float fParam1, int iParam2) //Position: 0xBA01 / 47617
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
		*iParam2 = CREATE_OBJECTSET_IN_LAYOUT(Function_83(), GET_AMBIENT_LAYOUT(), 12, 0);
	}
	Function_192(fParam0);
	vVar6 = { StackVal, StackVal, Function_192(fParam0) };
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
	Function_214(fParam0);
	vVar6 = { StackVal, StackVal, Function_214(fParam0) };
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
		fVar10 = Function_235(StackVal, StackVal, StackVal, StackVal, Global_34574, vVar6);
		if (fVar10 > 2.0f && !Function_49(Global_34573, 1, 1))
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
		Function_213(fParam0, iVar11);
		vVar6 = { StackVal, StackVal, Function_213(fParam0, iVar11) };
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
			bVar1[(2 + iVar11)] = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/arm_wrestling_spectate", &vVar6, 0.1f, 0);
			if (!IS_GRINGO_VALID(bVar1[(2 + iVar11)]))
			{
				bVar1[(2 + iVar11)] = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fivefingerfillet_spectate", &vVar6, 0.1f, 0);
			}
			if (!IS_GRINGO_VALID(bVar1[(2 + iVar11)]))
			{
				bVar1[(2 + iVar11)] = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fivefingerfillet_spectate_B", &vVar6, 0.1f, 0);
			}
			if (!IS_GRINGO_VALID(bVar1[(2 + iVar11)]))
			{
				bVar1[(2 + iVar11)] = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fivefingerfillet_spectate_C", &vVar6, 0.1f, 0);
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

vector3 Function_213(int iParam0, int iParam1) //Position: 0xBE53 / 48723
{
	if (iParam0 == Global_30693[2])
	{
		if (iParam1 == 0)
		{
			return -1470.917f, 16.54662f, 3950.254f;
		}
		if (iParam1 == 1)
		{
			return -1473.098f, 16.54662f, 3949.357f;
		}
	}
	if (iParam0 == Global_30679[0])
	{
		if (iParam1 == 0)
		{
			return -3145.761f, 43.17878f, 3722.624f;
		}
		if (iParam1 == 1)
		{
			return -3145.761f, 43.17878f, 3718.675f;
		}
	}
	if (iParam0 == Global_30707[0])
	{
		if (iParam1 == 0)
		{
			return -467.4124f, 20.97995f, 3884.092f;
		}
		if (iParam1 == 1)
		{
			return -465.9765f, 20.97995f, 3884.092f;
		}
	}
	if (iParam0 == Global_30723[2])
	{
		if (iParam1 == 0)
		{
			return -264.6337f, 85.11941f, 2120.304f;
		}
		if (iParam1 == 1)
		{
			return -264.6337f, 85.11941f, 2118.317f;
		}
	}
	LOG_ERROR("Returning invalid arm wrestling AI seat");
	return 0.0f, 0.0f, 0.0f;
}

vector3 Function_214(int iParam0) //Position: 0xBF7A / 49018
{
	if (iParam0 == Global_30693[2])
	{
		return -1471.656f, 16.56962f, 3948.088f;
	}
	if (iParam0 == Global_30679[0])
	{
		return -3143.743f, 43.17878f, 3720.288f;
	}
	if (iParam0 == Global_30707[0])
	{
		return -466.16f, 20.97986f, 3881.796f;
	}
	if (iParam0 == Global_30723[2])
	{
		return -262.9332f, 85.11941f, 2118.893f;
	}
	LOG_ERROR("Returning invalid arm wrestling player seat");
	return 0.0f, 0.0f, 0.0f;
}

int Function_215(var uParam0, float fParam1, int iParam2) //Position: 0xC035 / 49205
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
		*iParam2 = CREATE_OBJECTSET_IN_LAYOUT(Function_83(), GET_AMBIENT_LAYOUT(), 12, 0);
	}
	Function_194(uParam0);
	vVar4 = { StackVal, StackVal, Function_194(uParam0) };
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
	Function_216(uParam0);
	vVar4 = { StackVal, StackVal, Function_216(uParam0) };
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
		fVar9 = Function_235(StackVal, StackVal, StackVal, StackVal, Global_34574, vVar4);
		if (fVar9 > 2.0f)
		{
			if (!Function_49(Global_34573, 1, 1))
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

vector3 Function_216(int iParam0) //Position: 0xC2FB / 49915
{
	if (iParam0 == Global_30640[0])
	{
		return -2194.299f, 16.57026f, 2593.136f;
	}
	if (iParam0 == Global_30668[1])
	{
		return 161.0631f, 73.82803f, 2294.619f;
	}
	if (iParam0 == Global_30685[0])
	{
		return -4274.766f, 18.07059f, 4453.27f;
	}
	if (iParam0 == Global_30707[3])
	{
		return 354.6982f, 76.28821f, 3447.546f;
	}
	if (iParam0 == Global_30723[1])
	{
		return -465.0943f, 152.3517f, 1596.716f;
	}
	LOG_ERROR("Returning invalid five finger fillet player seat");
	return 0.0f, 0.0f, 0.0f;
}

int Function_217(int iParam0, float fParam1, int iParam2) //Position: 0xC3CD / 50125
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
	
	Function_198(iParam0);
	vVar4 = { StackVal, StackVal, Function_198(iParam0) };
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
		*iParam2 = CREATE_OBJECTSET_IN_LAYOUT(Function_83(), GET_AMBIENT_LAYOUT(), 12, 0);
	}
	bVar9 = true;
	iVar15 = 0;
	fVar16 = -1.0f;
	bVar14 = false;
	while (bVar14 <= 3)
	{
		Function_218(iParam0, bVar14);
		vVar4 = { StackVal, StackVal, Function_218(iParam0, bVar14) };
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
				fVar20 = Function_235(StackVal, StackVal, StackVal, StackVal, Global_34574, vVar4);
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
		fVar21 = 1.5f;
	}
	if (fVar16 < fVar21)
	{
	}
	else if (!Function_49(Global_34573, 1, 1))
	{
		*fParam1 = 1;
	}
	return 1;
}

vector3 Function_218(int iParam0, bool bParam1) //Position: 0xC68C / 50828
{
	if (iParam0 == Global_30693[0])
	{
		switch (bParam1)
		{
			case 0x00000000:
				return -2685.328f, 31.35269f, 4284.425f;
				break;
			
			case 0x00000001:
				return -2686.254f, 31.35269f, 4284.686f;
				break;
			
			case 0x00000002:
				return -2686.982f, 31.35269f, 4284.026f;
				break;
		}
	}
	else if (iParam0 == Global_30658[1])
	{
		switch (bParam1)
		{
			case 0x00000000:
				return -3640.897f, 42.76801f, 2104.235f;
				break;
			
			case 0x00000001:
				return -3640.023f, 42.76801f, 2104.636f;
				break;
			
			case 0x00000002:
				return -3639.895f, 42.76801f, 2105.61f;
				break;
		}
	}
	else if (iParam0 == Global_30717[0])
	{
		switch (bParam1)
		{
			case 0x00000000:
				return 719.9783f, 78.4736f, 1312.265f;
				break;
			
			case 0x00000001:
				return 719.0787f, 78.4736f, 1312.605f;
				break;
			
			case 0x00000002:
				return 718.2963f, 78.4736f, 1312.011f;
				break;
		}
	}
	else if (iParam0 == Global_30668[1])
	{
		switch (bParam1)
		{
			case 0x00000000:
				return 172.2084f, 73.75179f, 2224.902f;
				break;
			
			case 0x00000001:
				return 170.9445f, 73.75179f, 2224.73f;
				break;
			
			case 0x00000002:
				return 170.7396f, 73.74976f, 2223.559f;
				break;
			}
	}
	LOG_ERROR("Returning invalid coordinate");
	return 0.0f, 0.0f, 0.0f;
}

int Function_219(int iParam0, float fParam1, int iParam2) //Position: 0xC834 / 51252
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
		*iParam2 = CREATE_OBJECTSET_IN_LAYOUT(Function_83(), GET_AMBIENT_LAYOUT(), 12, 0);
	}
	bVar13 = true;
	bVar0 = false;
	while (bVar0 <= 6)
	{
		Function_200(iParam0, bVar0);
		vVar3 = { StackVal, StackVal, Function_200(iParam0, bVar0) };
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
				fVar24 = Function_235(StackVal, StackVal, StackVal, StackVal, Global_34574, vVar3);
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
		fVar25 = 1.5f;
	}
	if (fVar2 < fVar25)
	{
	}
	else if (!Function_49(Global_34573, 1, 1))
	{
		*fParam1 = 1;
	}
	return 1;
}

int Function_220(var uParam0, var uParam1, var uParam2, int iParam3) //Position: 0xCA63 / 51811
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
		*uParam2 = CREATE_OBJECTSET_IN_LAYOUT(Function_83(), GET_AMBIENT_LAYOUT(), 12, 0);
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
			Function_203(uParam0, bVar0, iParam3);
			bVar14[bVar0] = Function_202(StackVal, StackVal, Function_203(uParam0, bVar0, iParam3));
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
				fVar24 = Function_235(StackVal, StackVal, StackVal, StackVal, Global_34574, vVar3);
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
	else if (!Function_49(Global_34573, 1, 1))
	{
		*uParam1 = 1;
	}
	return 1;
}

int Function_221() //Position: 0xCC48 / 52296
{
	return StackVal;
}

void Function_222(bool bParam0) //Position: 0xCC53 / 52307
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
		if (Function_237(bParam0))
		{
			if (Function_154(bParam0 + 128, 4194304))
			{
				Function_69("mission_later_family", 0x41200000, 1, 0, 2, 1, 0);
			}
			else
			{
				Function_69("mission_later_tomorrow_no_time", 0x41200000, 1, 0, 2, 1, 0);
			}
			return;
		}
		iVar0 = Function_152(bParam0->f_128);
		iVar1 = Function_151(bParam0->f_128);
		if (Function_154(bParam0 + 128, 4096) && !Function_154(bParam0 + 128, 4194304))
		{
			if (Function_154(bParam0 + 128, 1))
			{
				bVar8 = Function_223(Function_110(bParam0->f_132));
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

var Function_223(int iParam0) //Position: 0xD025 / 53285
{
	if (!Function_98(iParam0))
	{
		return MAKE_TIME_OF_DAY(0, 0, 0);
	}
	return Global_13172[iParam011].f_36;
}

void Function_224(bool bParam0) //Position: 0xD044 / 53316
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

var Function_225(bool bParam0, bool bParam1, vector3 vParam2, vector3 vParam5, bool bParam8, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, float fParam15, float fParam16, int iParam17) //Position: 0xD0CE / 53454
{
	vector3 vVar0;
	bool bVar3;
	char* cVar4[32];
	bool bVar12;
	bool bVar13;
	
	vVar0 = { fParam9, 2.0f, fParam9 };
	vParam2.f_4 = (vParam2.y + 0.75f);
	bVar3 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(bParam0, bParam1, vParam2, vParam5, vVar0, iParam11, bParam8, iParam10, iParam13, 0, iParam14, iParam17);
	if (IS_OBJECT_VALID(bVar3))
	{
		strcpy(&cVar4, bParam1, 32);
		if (IS_STRING_VALID(bParam1))
		{
			stradd(&cVar4, "restrict", 32);
		}
		bVar12 = CREATE_VOLUME_IN_LAYOUT(bParam0, &cVar4, 2, vParam2, vParam5, 5.0f, 5.0f, 5.0f);
		ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bVar12);
		ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(bVar12);
		if (iParam12 != 4294967295)
		{
			bVar13 = ADD_BLIP_FOR_OBJECT(bVar3, iParam12, 0.0f, 2, 0);
		}
		if (fParam15 < -1.0f)
		{
			SET_BLIP_MAX_DISTANCE(bVar13, fParam15);
		}
		if (fParam16 < -1.0f)
		{
			SET_BLIP_MIN_DISTANCE(bVar13, fParam16);
		}
		DECOR_SET_OBJECT(bVar3, "volrestrict", bVar12);
	}
	return bVar3;
}

void Function_226(bool bParam0) //Position: 0xD199 / 53657
{
	if (Function_19(bParam0, 1) && !Function_19(Global_26119, 1))
	{
	}
	Global_26119 = (Global_26119 || bParam0);
	Global_26119 |= 1073741824;
	return;
}

void Function_227(bool bParam0) //Position: 0xD1C6 / 53702
{
	if (bParam0->f_128 & 114688 == 0)
	{
		return;
	}
	if (bParam0->f_128 & 16384 >= 0)
	{
		if (!IS_WEATHER_SPHERE_ENABLED(0))
		{
			ENABLE_WEATHER_SPHERE(0, 1);
		}
	}
	else if (bParam0->f_128 & 32768 >= 0)
	{
		if (!IS_WEATHER_SPHERE_ENABLED(1))
		{
			ENABLE_WEATHER_SPHERE(1, 1);
		}
	}
	else if (bParam0->f_128 & 65536 >= 0)
	{
		if (StackVal != 0)
		{
			Function_228(0, 4, 0, 0, 1);
		}
	}
	return;
}

void Function_228(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4) //Position: 0xD231 / 53809
{
	int iVar0;
	bool bVar1;
	
	Function_233(iParam0);
	Global_16524.f_4 = iParam0;
	Global_16524.f_16 = 1;
	iVar0 = GET_HOUR(false);
	if (!StackVal != StackVal && (((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19) || bParam4))
	{
		if (HUD_IS_FADED())
		{
			Function_232(StackVal, bParam4);
		}
		else
		{
			bVar1 = MAKE_TIME_OF_DAY(iParam1, iParam2, iParam3);
			Function_229(StackVal, bVar1, bParam4);
		}
	}
}

void Function_229(int iParam0, bool bParam1, bool bParam2) //Position: 0xD2A3 / 53923
{
	int iVar0;
	
	Function_233(iParam0);
	Function_231(bParam1);
	PRINTNL();
	if (StackVal == iParam0)
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
	SET_WEATHER(iParam0, bParam1);
	Function_230();
	Global_16524.f_40 = StackVal;
	Global_16524.f_44 = GET_TIME_OF_DAY();
	Global_16524.f_48 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_16524 + 48, 0, 0, GET_MINUTES_FROM_TIME_OF_DAY(bParam1), 0);
	Global_16524.f_8 = iParam0;
	if (Global_16524.f_24 > 0.0f && Global_16524.f_28 > 0.0f)
	{
		if (iParam0 != 3 || iParam0 != 4)
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
		else if (iParam0 != 3 || iParam0 != 4)
		{
			SET_RAIN_AMOUNT((RAND_FLOAT_RANGE(0.0f, 10000.0f) / 10000.0f));
			AUDIO_PLAY_DISTANT_THUNDER();
		}
		if (Global_16524.f_28 <= 0.0f)
		{
			SET_LIGHTNING_AMOUNT(Global_16524.f_28);
		}
		else if (iParam0 != 3 || iParam0 != 4)
		{
			SET_LIGHTNING_AMOUNT((RAND_FLOAT_RANGE(0.0f, 100.0f) / 10000.0f));
		}
	}
	return;
}

void Function_230() //Position: 0xD41C / 54300
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_231(bool bParam0) //Position: 0xD428 / 54312
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

void Function_232(int iParam0, bool bParam1) //Position: 0xD46E / 54382
{
	bool bVar0;
	
	bVar0 = MAKE_TIME_OF_DAY_EX(0, 0, 0, 0);
	Function_233(iParam0);
	Function_231(bVar0);
	PRINTNL();
	Function_229(iParam0, bVar0, bParam1);
	return;
}

void Function_233(int iParam0) //Position: 0xD493 / 54419
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

void Function_234(var uParam0, bool bParam1) //Position: 0xD4D9 / 54489
{
	*uParam0 = (*uParam0 || bParam1);
	return;
}

float Function_235(vector3 vParam0, vector3 vParam3) //Position: 0xD4E8 / 54504
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

void Function_236(var uParam0, int iParam1) //Position: 0xD505 / 54533
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

bool Function_237(bool bParam0) //Position: 0xD51C / 54556
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
							Function_241(bParam0->f_156);
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
						if (Function_238(bVar4, &uVar2, &uVar1, 0, 0, 0x40400000) && ((bParam0->f_36 != 11 || bParam0->f_36 != 12) || bParam0->f_36 != 13))
						{
							Function_241(bParam0->f_156);
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
						Function_241(bParam0->f_156);
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
	else if (Function_72(StackVal, StackVal, Global_34573, *(bParam0 + 52)) < 100.0f)
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

int Function_238(bool bParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, float fParam5) //Position: 0xD6F2 / 55026
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
		fVar0 = Function_80(bParam0, Global_34573);
		if (!Function_19(bParam3, 8))
		{
			if (GET_LAST_ATTACKER(bParam0) == Global_34573)
			{
				*uParam1 = 8;
				Function_239(bParam0);
				return 1;
			}
		}
		if (!Function_19(bParam3, 2))
		{
			if (AI_HAS_PLAYER_PROJECTILE_IMPACTED_WITHIN(bParam0, 1.0f))
			{
				*uParam1 = 2;
				Function_239(bParam0);
				return 1;
			}
			if (AI_HAS_PLAYER_PROJECTILE_NEAR_MISSED_WITHIN(bParam0, 1.0f, 1.0f))
			{
				*uParam1 = 2;
				Function_239(bParam0);
				return 1;
			}
		}
		if (!Function_19(bParam3, 4))
		{
			if ((IS_ACTOR_HANDSUP(bParam0) || (((GET_ACTOR_UNDER_RETICLE(Global_34573, 0) != bParam0 && IS_PLAYER_WEAPON_ZOOMED(Global_34573)) && MEMORY_GET_IS_VISIBLE(bParam0, Global_34573)) && fVar0 > 20.0f)) || ((GET_ACTOR_MELEE_TARGETED_BY(Global_34573) != bParam0 && MEMORY_GET_IS_VISIBLE(bParam0, Global_34573)) && fVar0 > 20.0f))
			{
				if (*uParam2 > 0.0f)
				{
					*uParam1 = 4;
					Function_239(bParam0);
					return 1;
				}
				if (*uParam2 < 0.0f)
				{
					if ((GET_CURRENT_GAME_TIME() - *uParam2) < 1.3f)
					{
						*uParam1 = 4;
						Function_239(bParam0);
						return 1;
					}
				}
				*uParam2 = GET_CURRENT_GAME_TIME();
			}
		}
		if (!Function_19(bParam3, 1))
		{
			if (Global_3403 || Global_3404)
			{
				*uParam1 = 1;
				Function_239(bParam0);
				return 1;
			}
		}
		if (!Function_19(bParam3, 16))
		{
			if (UNK_0x7F454A92(bParam0) < 0.0f)
			{
				if ((GET_CURRENT_GAME_TIME() - UNK_0x7F454A92(bParam0)) > 2.0f && fVar0 > 18.0f)
				{
					*uParam1 = 16;
					Function_239(bParam0);
					return 1;
				}
			}
		}
	}
	return 0;
}

void Function_239(bool bParam0) //Position: 0xD889 / 55433
{
	CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(bParam0);
	AI_SPEECH_SET_ALLOW_FOR_ACTOR(bParam0, 1);
	UNK_0x99AFD2D1(bParam0, 0, 0);
	Function_240(bParam0);
	MEMORY_CONSIDER_AS(Global_34573, bParam0, 2);
	MEMORY_CONSIDER_AS(bParam0, Global_34573, 2);
	AI_GOAL_LOOK_CLEAR(bParam0);
	return;
}

void Function_240(bool bParam0) //Position: 0xD8BD / 55485
{
	SAY_SINGLE_LINE_CONTEXT(bParam0, 60, Global_34573, 1, 0, 2, 4294967295, 4294967295, 0, 1);
	return;
}

void Function_241(bool bParam0) //Position: 0xD8D4 / 55508
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

void Function_242(bool bParam0, bool bParam1, int iParam2) //Position: 0xD906 / 55558
{
	if (!IS_BLIP_VALID(bParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (Function_154(&iParam2, 4194304) && !Function_154(&iParam2, 8388608))
		{
			bParam1 = false;
		}
	}
	if (bParam1)
	{
		SET_BLIP_COLOR(bParam0, 1.0f, 1.0f, 1.0f, 1.0f);
		SET_BLIP_SCALE(bParam0, 1.25f);
	}
	else
	{
		SET_BLIP_COLOR(bParam0, 1.0f, 1.0f, 1.0f, 0.75f);
		SET_BLIP_SCALE(bParam0, 1.0f);
	}
	return;
}

bool Function_243(bool bParam0) //Position: 0xD963 / 55651
{
	bool bVar0;
	int iVar1;
	
	if (!bParam0->f_128 != 0)
	{
		switch (Global_63399)
		{
			case 0x00000001:
				if (!Function_154(bParam0 + 128, 32))
				{
					return 0;
				}
				break;
			
			case 0x00000002:
				if (!Function_154(bParam0 + 128, 64))
				{
					return 0;
				}
				break;
			
			case 0x00000004:
				if (!Function_154(bParam0 + 128, 128))
				{
					return 0;
				}
				break;
			
			case 0x00000008:
				if (!Function_154(bParam0 + 128, 256))
				{
					return 0;
				}
				break;
			
			case 0x00000010:
				if (!Function_154(bParam0 + 128, 512))
				{
					return 0;
				}
				break;
			
			case 0x00000020:
				if (!Function_154(bParam0 + 128, 1024))
				{
					return 0;
				}
				break;
		}
		if (Function_154(bParam0 + 128, 4096))
		{
			if (Function_154(bParam0 + 128, 1))
			{
				bVar0 = Function_223(Function_110(bParam0->f_132));
				iVar1 = MAKE_TIME_OF_DAY_EX(GET_DAY(bVar0), GET_HOUR(bVar0), 0, 0);
				ADD_TIME(&iVar1, 0, bParam0->f_148, false, 0);
				if (IS_LATER_THAN(iVar1, GET_TIME_OF_DAY()))
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

bool Function_244(int iParam0) //Position: 0xDA5D / 55901
{
	var uVar0;
	
	if (!iParam0->f_128 != 0)
	{
		uVar0 = iParam0->f_128;
		if (uVar0 & 1 >= 0)
		{
			if (!Function_109(iParam0->f_132, 0))
			{
				return 0;
			}
		}
		if (uVar0 & 2 >= 0)
		{
			if (!Function_109(iParam0->f_136, 0))
			{
				return 0;
			}
		}
		if (uVar0 & 4 >= 0)
		{
			if (!Function_109(iParam0->f_140, 0))
			{
				return 0;
			}
		}
		if (uVar0 & 8 >= 0)
		{
			if (!Function_109(iParam0->f_144, 0))
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

int Function_245(int iParam0) //Position: 0xDAF6 / 56054
{
	if (!Function_98(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

void Function_246(int iParam0, int iParam1) //Position: 0xDB10 / 56080
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
				Function_224(iParam0->f_44);
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

void Function_247(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0xDC04 / 56324
{
	struct<4> Var0;
	
	if ((Function_358(StackVal) != 48 && !bParam2) && !Global_3381)
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
				SET_RICH_PRESENCE(StackVal, Function_358(3), 0, 0, 0);
				Function_356(&(Global_3422[Function_358(StackVal)40]));
			}
			else if (Function_3(StackVal) == 4)
			{
				Function_355(StackVal, iParam0->f_140);
				Global_3383 = 1;
				SET_RICH_PRESENCE(StackVal, (3 + Function_358(58)), 0, 0, 0);
			}
			Function_353();
			Function_363(0, 0);
			iParam0->f_108 = Function_249(StackVal, StackVal, bParam2, 0, iParam3, 0);
			iParam0->f_112 = 0;
			iParam0->f_124 = 0;
		}
		else if (!HUD_IS_FADING())
		{
			if (Function_3(StackVal) == 1)
			{
				Var0 = { StackVal, StackVal, StackVal, Function_248(Function_358(StackVal)) };
			}
			else
			{
				Var0 = { StackVal, StackVal, StackVal, *(iParam0 + 12) };
			}
			UNK_0xC6E36B1D(&Var0);
			SET_ACTOR_INVULNERABILITY(Global_34573, 1);
		}
	}
	else
	{
		if (Function_3(StackVal) == 1)
		{
			Global_3379 = 1;
			Global_3378 = 0;
			Var0 = { StackVal, StackVal, StackVal, Function_248(Function_358(StackVal)) };
			if (HUD_IS_FADED())
			{
				UNK_0xC6E36B1D(&Var0);
			}
			Function_356(&(Global_3422[Function_358(StackVal)40]));
		}
		else if (Function_3(StackVal) == 4)
		{
			Function_355(StackVal, iParam0->f_140);
			Global_3383 = 1;
		}
		SET_ACTOR_INVULNERABILITY(Global_34573, 1);
		Function_353();
		Function_363(0, 0);
		iParam0->f_108 = Function_249(StackVal, StackVal, bParam2, 0, 1, 0);
		iParam0->f_112 = 0;
		iParam0->f_124 = 0;
	}
}

struct<16> Function_248(bool bParam0) //Position: 0xDDAD / 56749
{
	char* cVar0[16];
	
	strcpy(&cVar0, "fav_non", 16);
	if (!Function_111(bParam0))
	{
		return StackVal, StackVal, StackVal, cVar0;
	}
	return StackVal, StackVal, StackVal, *(&Global_3422[bParam040] + 12);
}

var Function_249(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5) //Position: 0xDDDE / 56798
{
	var uVar0;
	bool bVar1;
	var uVar2;
	int iVar61;
	struct<25> Var62;
	
	if (Function_3(iParam1) == 1)
	{
		Function_363(1, 0);
	}
	else
	{
		Function_363(0, 0);
	}
	bVar1 = Function_358(iParam1);
	if (!Global_3365 || Global_3381)
	{
		if (Function_3(iParam1) == 1)
		{
			uVar2 = 58;
			if (!bParam2)
			{
				Function_317(bVar1, &uVar2, &uVar0, 1);
			}
			if (bVar1 == 1)
			{
				iVar61 = 0;
				while (iVar61 <= 4)
				{
					Function_316(iVar61, 0);
					iVar61++;
				}
				iVar61 = 0;
				while (iVar61 <= 3)
				{
					Function_315(iVar61, 0);
					iVar61++;
				}
				iVar61 = 0;
				while (iVar61 <= 11)
				{
					Function_314(iVar61, 0);
					iVar61++;
				}
				iVar61 = 0;
				while (iVar61 <= 16)
				{
					Function_313(iVar61, 0);
					iVar61++;
				}
				iVar61 = 0;
				while (iVar61 <= 58)
				{
					if (Function_98(Function_110(iVar61)))
					{
						Function_311(Function_110(iVar61));
					}
					iVar61++;
				}
				Function_309();
				Function_307(Function_186(), 0);
				Function_306();
				if (bVar1 == 1)
				{
					Function_311(Function_110(2));
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
		Function_305(18, bVar1, 0);
		Function_303(18, &Global_3422[bVar140] + 12, 0, 1);
		if (!bParam2)
		{
			Function_301(bVar1);
			AUDIO_RESET_SPEECH_HISTORY();
		}
		else
		{
			Global_34165.f_136 = GET_CURRENT_GAME_TIME();
		}
	}
	Var62 = iParam1;
	Var69 = { StackVal, StackVal, StackVal, Function_300(bVar1) };
	strcpy(&Var62 + 4, UI_GET_STRING(&Var69), 16);
	Var62.f_20 = bParam2;
	Var62.f_24 = iParam3;
	Function_296(0);
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
	SET_ACTOR_INVULNERABILITY(Global_34573, 0);
	if (!IS_ACTOR_VALID(Global_34573))
	{
		return "";
	}
	if (!IS_ACTOR_ALIVE(Global_34573))
	{
		return "";
	}
	if (((IS_OBJECT_VALID(Global_63084.f_28) || Function_19(Global_63084.f_32, 2)) || Function_19(Global_63084.f_32, 1)) || Function_19(Global_63084.f_32, 65536))
	{
		Function_13(&Global_63084 + 32, 2);
		Function_13(&Global_63084 + 32, 1);
		Function_13(&Global_63084 + 32, 65536);
		Function_11(&Global_63084 + 32, 4);
	}
	if (Function_3(iParam1) == 4)
	{
		PLAY_SOUND("HUD_MENU_SELECT_MASTER");
	}
	Global_3414 = 0;
	bVar73 = LAUNCH_NEW_SCRIPT_WITH_ARGS(GET_ASSET_NAME(iParam0, 4), &Var62, 7, 0);
	if (IS_SCRIPT_VALID(bVar73))
	{
		if (Function_98(iParam1))
		{
			if (bParam5)
			{
				Function_295(iParam1, iParam4);
			}
			else if (Function_245(iParam1) == 1)
			{
				Function_294(iParam1, iParam4);
			}
			else
			{
				Function_254(iParam1, iParam4);
			}
		}
		Function_252(2);
		Function_250((15 - Function_251(105)));
		return bVar73;
	}
	return "";
}

void Function_250(int iParam0) //Position: 0xE10A / 57610
{
	Global_12976.f_4 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 4, 0, 0, (iParam0 + Function_251(105)), 0);
	return;
}

bool Function_251(bool bParam0) //Position: 0xE12B / 57643
{
	return CEIL(((IntToFloat(bParam0) * Global_63398) / 60.0f));
}

void Function_252(bool bParam0) //Position: 0xE141 / 57665
{
	PRINTSTRING("Old TOD after LAST MISSION - ");
	Function_231(Global_12976.f_24);
	PRINTNL();
	Global_12976.f_24 = GET_TIME_OF_DAY();
	PRINTSTRING("Current Time - ");
	Function_231(Global_12976.f_24);
	PRINTNL();
	ADD_TIME(&Global_12976 + 24, 0, 0, bParam0, 0);
	PRINTSTRING("New TOD after LAST MISSION - ");
	Function_231(Global_12976.f_24);
	PRINTNL();
	Function_253(bParam0);
	return;
}

void Function_253(int iParam0) //Position: 0xE1DD / 57821
{
	Global_12976.f_12 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 12, 0, 0, (iParam0 + Function_251(90)), 0);
	return;
}

void Function_254(int iParam0, int iParam1) //Position: 0xE1FE / 57854
{
	int iVar0;
	bool bVar1;
	struct<6> Var2;
	struct<4> Var8;
	char* cVar12;
	
	if (!Function_98(iParam0))
	{
		Function_292();
		return;
	}
	if (StackVal == 1)
	{
		return;
	}
	iVar0 = Function_3(iParam0);
	if (StackVal != 2)
	{
		Function_291("DEED_START", iParam0);
	}
	Global_13172[iParam011].f_8 = StackVal + 1;
	Global_13172[iParam011].f_4 = 2;
	Global_6271 = iParam0;
	if (!Global_34165.f_36 && iParam1)
	{
		Function_256(1);
	}
	if (iVar0 == 1)
	{
		bVar1 = Function_358(iParam0);
		Global_6269 = bVar1;
		Var2 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_255(Global_6269) };
		Var8 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var8 = { StackVal, StackVal, StackVal, Function_70(Global_6269) };
		}
		cVar12 = CREATE_JOURNAL_ENTRY(&Var8, 1, false, &Var2);
		SET_JOURNAL_ENTRY_PROGRESS(cVar12, -2.0f, 0, 0);
		CLEAR_JOURNAL_ENTRY(cVar12);
		APPEND_JOURNAL_ENTRY(cVar12, 0);
		UPDATE_PROFILE_STAT("LastSPMission", TO_FLOAT(bVar1), 1);
	}
	Global_3376 = 1;
	return;
}

struct<24> Function_255(bool bParam0) //Position: 0xE30E / 58126
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

void Function_256(bool bParam0) //Position: 0xE564 / 58724
{
	if ((Global_3395 || Global_3381) || Global_3396)
	{
		return;
	}
	Global_34165.f_24 = 4294967295;
	Function_283();
	Global_34165.f_28 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_257();
	SAVE_SOFT_SAVE(0);
	if (bParam0)
	{
		Function_13(&Global_63095, 1);
		Function_13(&Global_63095, 2);
	}
	Global_88793 = 1;
	return;
}

void Function_257() //Position: 0xE5B5 / 58805
{
	Function_268();
	Function_267();
	Function_267();
	Function_266();
	Function_266();
	Function_265();
	Function_265();
	Function_264(0);
	Function_264(0);
	if (!Function_1())
	{
		Function_262();
		Function_261();
		Function_260();
		Function_259();
		if (Global_74542[19910].f_16 != 1 || UI_HAS_CHEATED())
		{
			Global_74542[19910].f_16 = 1;
		}
	}
	Function_258();
	return;
}

void Function_258() //Position: 0xE607 / 58887
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

void Function_259() //Position: 0xE70D / 59149
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

void Function_260() //Position: 0xE740 / 59200
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

void Function_261() //Position: 0xE8CE / 59598
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

void Function_262() //Position: 0xEA82 / 60034
{
	Function_263(&Global_28260, 1, 0);
	return;
}

void Function_263(int iParam0, bool bParam1, int iParam2) //Position: 0xEA90 / 60048
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
	
	bVar0 = Function_188();
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

struct<8> Function_264(char* cParam0) //Position: 0xEC81 / 60545
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
				if (iVar4 == 31 || cParam0)
				{
					iVar2 = ((Function_187((50 + iVar4)) + Function_187((183 + iVar4))) + Function_187((90 + iVar4)));
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
	Function_305(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

struct<8> Function_265() //Position: 0xED27 / 60711
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
		iVar2 = ((Function_187((50 + iVar3) + 15) + Function_187((183 + iVar3) + 15)) + Function_187((90 + iVar3) + 15));
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
	Function_305(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_266() //Position: 0xEDB0 / 60848
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
			iVar2 = ((Function_187((50 + iVar3) + 8) + Function_187((183 + iVar3) + 8)) + Function_187((90 + iVar3) + 8));
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
	Function_305(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_267() //Position: 0xEE47 / 60999
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
		iVar2 = ((Function_187((50 + iVar3)) + Function_187((183 + iVar3))) + Function_187((90 + iVar3)));
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
	Function_305(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_268() //Position: 0xEEC6 / 61126
{
	if (Global_49308 > 0.1f)
	{
		Global_49308 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_269(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_305(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_269(int iParam0, bool bParam1, bool bParam2) //Position: 0xEEFF / 61183
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
	Function_282(iParam0, bParam1, 1);
	Function_281(iParam0);
	if (bParam2 && bParam1 == 0.0f)
	{
		Function_270(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

void Function_270(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0xF109 / 61705
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_280(390))), 32);
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
					bVar19 = (Function_279(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_279(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_277(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, false, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_274(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_272(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_271(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_83(), &Var9);
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

var Function_271(int iParam0) //Position: 0xF736 / 63286
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_272(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0xF747 / 63303
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_273("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_273("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_273("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_273(char* cParam0, bool bParam1) //Position: 0xF83C / 63548
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_274(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0xF855 / 63573
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_276(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_275(Function_276(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_275(int iParam0, int iParam1) //Position: 0xF8BA / 63674
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_276(int iParam0, bool bParam1) //Position: 0xF8CC / 63692
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_277(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0xF8DE / 63710
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
	if (((Function_278(iParam0) != 19 || Function_278(iParam0) != 17) || Function_278(iParam0) != 10) || Function_278(iParam0) != 9)
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

int Function_278(int iParam0) //Position: 0xFA0E / 64014
{
	return Global_35278[iParam020].f_48;
}

float Function_279(int iParam0) //Position: 0xFA1D / 64029
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

float Function_280(int iParam0) //Position: 0xFA56 / 64086
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_281(int iParam0) //Position: 0xFA93 / 64147
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

int Function_282(int iParam0, bool bParam1, bool bParam2) //Position: 0xFC2D / 64557
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

void Function_283() //Position: 0xFE71 / 65137
{
	vector3 vVar0;
	var uVar3;
	
	Global_34165.f_24 = 4294967295;
	if (Function_71())
	{
		Function_288(&Global_34165 + 12, &Global_34165 + 16);
		vVar0 = { StackVal, StackVal, Function_288(&Global_34165 + 12, &Global_34165 + 16) };
	}
	else
	{
		Function_284(&Global_34165 + 12, &Global_34165 + 16, 0, 0);
		vVar0 = { StackVal, StackVal, Function_284(&Global_34165 + 12, &Global_34165 + 16, 0, 0) };
	}
	if (Function_65(StackVal, StackVal, vVar0))
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

vector3 Function_284(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0xFF2C / 65324
{
	int iVar0;
	
	iVar0 = Function_287(uParam2, uParam3);
	if (Function_286(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_34165.f_24 = Global_29005;
			Function_11(&Global_63095, 1);
			Function_13(&Global_63095, 2);
			Global_63084 = { StackVal, StackVal, Global_16537[iVar021] };
			*uParam1 = 0;
		}
		else
		{
			Function_11(&Global_63095, 2);
			Function_13(&Global_63095, 1);
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
		Function_11(&Global_63095, 2);
		Function_13(&Global_63095, 1);
		*uParam1 = 1;
		*uParam0 = 290.0f;
		return -2833.843f, 50.332f, 2418.003f;
	}
	Function_285();
	return StackVal, StackVal, Function_285();
}

vector3 Function_285() //Position: 0x10018 / 65560
{
	return 0.0f, 0.0f, 0.0f;
}

bool Function_286(int iParam0) //Position: 0x10021 / 65569
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_287(bool bParam0, bool bParam1) //Position: 0x10037 / 65591
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
				fVar2 = Function_235(StackVal, StackVal, StackVal, StackVal, Global_34574, Global_16537[iVar321]);
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
		fVar2 = Function_235(StackVal, StackVal, Global_34574, -2833.843f, 50.332f, 2418.003f);
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_286(iVar0) && !bParam1)
	{
		iVar0 = Function_287(bParam0, 1);
	}
	return iVar0;
}

vector3 Function_288(var uParam0, int iParam1) //Position: 0x100FE / 65790
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	bool bVar10;
	
	*uParam0 = *uParam0;
	bVar0 = 99999.99f;
	vVar1 = { 0.0f, 0.0f, 0.0f };
	Function_290(Global_34573, &vVar4);
	if (!Function_289(Global_30640[0]))
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
	if (!Function_289(Global_30640[2]))
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
	if (!Function_289(Global_30640[1]))
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
	if (!Function_289(Global_30658[1]))
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
	if (!Function_289(Global_30658[3]))
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
	if (!Function_289(Global_30658[2]))
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
	if (!Function_289(Global_30658[4]))
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
	if (!Function_289(Global_30668[0]))
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
	if (!Function_289(Global_30668[1]))
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
	if (!Function_289(Global_30668[2]))
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
	if (!Function_289(Global_30679[0]))
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
	if (!Function_289(Global_30685[0]))
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
	if (!Function_289(Global_30685[1]))
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
	if (!Function_289(Global_30685[2]))
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
	if (!Function_289(Global_30693[0]))
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
	if (!Function_289(Global_30693[1]))
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
	if (!Function_289(Global_30693[2]))
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
	if (!Function_289(Global_30707[2]))
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
	if (!Function_289(Global_30707[3]))
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
	if (!Function_289(Global_30707[0]))
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
	if (!Function_289(Global_30717[0]))
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
	if (!Function_289(Global_30723[2]))
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
	if (!Function_289(Global_30723[1]))
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
	if (!Function_289(Global_30723[0]))
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
	if (!Function_289(Global_30679[1]))
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
	if (!Function_289(Global_30707[1]))
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
	Function_11(&Global_63095, 2);
	Function_13(&Global_63095, 1);
	*iParam1 = 0;
	if (Function_65(StackVal, StackVal, vVar1))
	{
		vVar1 = { -63.861f, 116.861f, 1414.684f };
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(vVar1);
	PRINTNL();
	return StackVal, StackVal, vVar1;
}

bool Function_289(int iParam0) //Position: 0x10923 / 67875
{
	var uVar0;
	
	uVar0 = Global_29008[iParam0];
	return (((Function_19(uVar0, 0x1000000) || Function_19(uVar0, 0x2000000)) || Function_19(uVar0, 0x4000000)) || !Function_19(uVar0, 0x10000000));
}

void Function_290(bool bParam0, bool bParam1) //Position: 0x1095E / 67934
{
	GET_POSITION(bParam0, bParam1);
	return;
}

void Function_291(char* cParam0, bool bParam1) //Position: 0x1096B / 67947
{
	struct<4> Var0;
	
	if (!Function_98(bParam1))
	{
		return;
	}
	switch (Function_3(bParam1))
	{
		case 0x00000001:
			Var0 = { StackVal, StackVal, StackVal, Function_300(Function_358(bParam1)) };
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, &Var0, Function_3(bParam1), Function_358(bParam1));
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

void Function_292() //Position: 0x10A8F / 68239
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
			Function_293(Global_13172[iVar011], &iVar18, &iVar19, &iVar20);
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

void Function_293(bool bParam0, var uParam1, var uParam2, var uParam3) //Position: 0x10CD6 / 68822
{
	*uParam3 = (bParam0 && 15);
	*uParam1 = (SHIFT_RIGHT(bParam0, 4) && 255);
	*uParam2 = (SHIFT_RIGHT(bParam0, 12) && 255);
}

void Function_294(int iParam0, int iParam1) //Position: 0x10CFF / 68863
{
	int iVar0;
	
	if (!Function_98(iParam0))
	{
		Function_292();
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
		Function_256(1);
	}
	if (iVar0 == 1)
	{
		Global_6269 = Function_358(iParam0);
	}
	Global_3376 = 1;
	return;
}

void Function_295(int iParam0, int iParam1) //Position: 0x10D66 / 68966
{
	int iVar0;
	struct<6> Var1;
	struct<4> Var7;
	char* cVar11;
	
	if (!Function_98(iParam0))
	{
		Function_292();
		return;
	}
	iVar0 = Function_3(iParam0);
	Global_13172[iParam011].f_4 = 1;
	if (!Global_34165.f_36 && iParam1)
	{
		Function_256(1);
	}
	if (iVar0 == 1)
	{
		Global_6269 = Function_358(iParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_255(Global_6269) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_70(Global_6269) };
		}
		cVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		SET_JOURNAL_ENTRY_PROGRESS(cVar11, -2.0f, 0, 0);
		CLEAR_JOURNAL_ENTRY(cVar11);
		APPEND_JOURNAL_ENTRY(cVar11, 0);
	}
	return;
}

void Function_296(bool bParam0) //Position: 0x10E0C / 69132
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
		Function_297();
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

void Function_297() //Position: 0x10E97 / 69271
{
	int iVar0;
	
	Global_26960 = Function_298(StackVal);
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

bool Function_298(bool bParam0) //Position: 0x10EE5 / 69349
{
	if (!Function_299(bParam0))
	{
		return 0;
	}
	return Global_26401[bParam0];
}

bool Function_299(int iParam0) //Position: 0x10EFD / 69373
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return 1;
}

struct<16> Function_300(bool bParam0) //Position: 0x10F12 / 69394
{
	char* cVar0[16];
	
	if (!Function_71())
	{
		strcpy(&cVar0, "miss", 16);
	}
	else
	{
		strcpy(&cVar0, "ziss", 16);
	}
	straddi(&cVar0, bParam0, 16);
	stradd(&cVar0, "d", 16);
	return StackVal, StackVal, StackVal, cVar0;
}

void Function_301(int iParam0) //Position: 0x10F4C / 69452
{
	int iVar0;
	
	iVar0 = Function_302(iParam0);
	Global_34165.f_136 = GET_CURRENT_GAME_TIME();
	Global_34165.f_140 = 0.0f;
	switch (iVar0)
	{
		case 0x00000000:
			Global_34165.f_120 = Function_187(27);
			Global_34165.f_116 = Function_187(42);
			Global_34165.f_124 = CEIL(Function_280(49));
			Global_34165.f_128 = Function_187(49);
			break;
		
		case 0x00000002:
			Global_34165.f_116 = Function_187(355);
			break;
		
		case 0x00000001:
			Global_34165.f_124 = CEIL(Function_280(49));
			Global_34165.f_128 = Function_187(49);
			break;
	}
	return;
}

int Function_302(bool bParam0) //Position: 0x10FD6 / 69590
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

int Function_303(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x1106B / 69739
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
		Function_304(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_35278[iParam020] + 16), 3.0f, iParam3);
	}
	return 1;
}

void Function_304(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, char* cParam9, bool bParam10) //Position: 0x113BD / 70589
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

int Function_305(int iParam0, bool bParam1, bool bParam2) //Position: 0x11440 / 70720
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
		Function_282(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_281(iParam0);
	if (bParam2)
	{
		Function_270(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_306() //Position: 0x116DB / 71387
{
	WRITE_TO_FILE("New Game Progression Started\n", "C:/MoneyData.csv", 1);
	return;
}

int Function_307(bool bParam0, bool bParam1) //Position: 0x11718 / 71448
{
	bool bVar0;
	
	bVar0 = Function_187(0);
	if ((Function_187(0) - bParam0) <= 0)
	{
		bParam0 = bVar0;
	}
	if (bParam0 >= 0)
	{
		Function_308(0, bParam0, 0);
	}
	else
	{
		return 0;
	}
	if (bParam1)
	{
		PRINT_MONEY(&(Global_35278[020]), bVar0, (bParam0 * 4294967295), 7.5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_187(0));
	return 1;
}

int Function_308(int iParam0, bool bParam1, int iParam2) //Position: 0x117A8 / 71592
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
	Function_281(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_270(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

void Function_309() //Position: 0x119A3 / 72099
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
	Function_310();
	ACTOR_SET_NEXT_WEAPON(GET_PLAYER_ACTOR(0), 22);
	ACTOR_SET_NEXT_WEAPON(GET_PLAYER_ACTOR(0), 4);
	return;
}

void Function_310() //Position: 0x11B26 / 72486
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
	bVar2 = Function_188();
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

void Function_311(int iParam0) //Position: 0x11BF7 / 72695
{
	Function_312(iParam0);
	return;
}

void Function_312(int iParam0) //Position: 0x11C02 / 72706
{
	int iVar0;
	
	if (!Function_98(iParam0))
	{
		Function_292();
		return;
	}
	iVar0 = Function_3(iParam0);
	Global_13172[iParam011].f_4 = 0;
	return;
}

void Function_313(int iParam0, int iParam1) //Position: 0x11C26 / 72742
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return;
	}
	Global_25986[iParam0] = iParam1;
	return;
}

void Function_314(int iParam0, int iParam1) //Position: 0x11C43 / 72771
{
	if (iParam0 >= 4294967295 && iParam0 <= 11)
	{
		return;
	}
	Global_25974[iParam0] = iParam1;
	return;
}

void Function_315(int iParam0, int iParam1) //Position: 0x11C60 / 72800
{
	if (iParam0 >= 0 && iParam0 <= 3)
	{
		return;
	}
	Global_25970[iParam0] = iParam1;
	return;
}

void Function_316(int iParam0, int iParam1) //Position: 0x11C7C / 72828
{
	if (iParam0 >= 4294967295 && iParam0 <= 4)
	{
		return;
	}
	Global_25965[iParam0] = iParam1;
	return;
}

void Function_317(int iParam0, var uParam1, var uParam2, bool bParam3) //Position: 0x11C98 / 72856
{
	if (Global_3365 && !Global_3381)
	{
		return;
	}
	if (!bParam3)
	{
		if (!Function_71())
		{
			Function_321(iParam0, uParam2, 0);
		}
		else
		{
			Function_318(iParam0, uParam2, 0);
		}
		(*uParam1)[iParam0] = 1;
	}
	if (Global_3422[iParam040].f_132 != 4294967295)
	{
		if (!(*uParam1)[Global_3422[iParam040].f_132])
		{
			Function_317(Global_3422[iParam040].f_132, uParam1, uParam2, 0);
		}
	}
	if (Global_3422[iParam040].f_136 != 4294967295)
	{
		if (!(*uParam1)[Global_3422[iParam040].f_136])
		{
			Function_317(Global_3422[iParam040].f_136, uParam1, uParam2, 0);
		}
	}
	if (Global_3422[iParam040].f_140 != 4294967295)
	{
		if (!(*uParam1)[Global_3422[iParam040].f_140])
		{
			Function_317(Global_3422[iParam040].f_140, uParam1, uParam2, 0);
		}
	}
	if (Global_3422[iParam040].f_144 != 4294967295)
	{
		if (!(*uParam1)[Global_3422[iParam040].f_144])
		{
			Function_317(Global_3422[iParam040].f_144, uParam1, uParam2, 0);
		}
	}
}

void Function_318(int iParam0, var uParam1, bool bParam2) //Position: 0x11D91 / 73105
{
	struct<4> Var0;
	
	*uParam1 = *uParam1;
	if (!Function_111(iParam0))
	{
		return;
	}
	if (Global_3381 && Global_6267 != iParam0)
	{
		return;
	}
	switch (iParam0)
	{
		case 0x00000001:
			Function_319(21, bParam2, 0);
			Function_319(16, bParam2, 0);
			SET_DISABLE_DEADEYE(0, 0);
			SET_DEADEYE_MULTILOCK_ENABLE(0, 1);
			SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
			break;
	}
	Var0 = { StackVal, StackVal, StackVal, Function_300(iParam0) };
	PRINTSTRING("MISSION LAUNCH: Giving stuff for debug passing ");
	PRINTSTRING(UI_GET_STRING(&Var0));
	PRINTNL();
	return;
}

int Function_319(bool bParam0, bool bParam1, int iParam2) //Position: 0x11E2F / 73263
{
	if (!Function_320(bParam0))
	{
		return 0;
	}
	if (IS_WEAPONENUM_LOCKED(bParam0))
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	if (!ACTOR_HAS_WEAPON(Function_188(), bParam0))
	{
		GIVE_WEAPON_TO_ACTOR(Function_188(), bParam0, 1.0f, iParam2, 1);
		return 1;
	}
	if (bParam1)
	{
		_ADD_AMMO_OF_TYPE(Function_188(), GET_AMMO_ENUM(bParam0), GET_WEAPON_MAX_AMMO(bParam0), 0, iParam2);
		return 1;
	}
	return 1;
}

bool Function_320(int iParam0) //Position: 0x11E86 / 73350
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

void Function_321(bool bParam0, var uParam1, bool bParam2) //Position: 0x11E98 / 73368
{
	struct<4> Var0;
	
	if (!Function_111(bParam0))
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
			Function_319(4, bParam2, 0);
			if (*uParam1 <= 1)
			{
				*uParam1 = 1;
				SET_DISABLE_DEADEYE(0, 1);
				SET_DEADEYE_MULTILOCK_ENABLE(0, 0);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_351(Global_30640[0]);
			Function_351(Global_30679[1]);
			break;
		
		case 0x00000002:
			if (*uParam1 <= 2)
			{
				*uParam1 = 2;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, 0);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_349(8, bParam2, 4);
			EQUIP_ACCESSORY(Global_34573, 0, 1);
			Function_351(Global_30668[0]);
			Function_345(0);
			Function_343(2, 1);
			Function_343(0, 1);
			Function_343(1, 1);
			break;
		
		case 0x00000003:
			Function_351(Global_30668[0]);
			break;
		
		case 0x00000004:
			Function_351(Global_30668[0]);
			Function_351(Global_30640[0]);
			Function_341(0, 1);
			Function_341(15, 1);
			Function_341(9, 1);
			Function_341(12, 1);
			Function_341(16, 1);
			Function_343(3, 1);
			break;
		
		case 0x00000005:
			Function_351(Global_30668[0]);
			break;
		
		case 0x00000006:
			Function_349(21, bParam2, 4);
			Function_351(Global_30668[0]);
			Function_343(39, 1);
			break;
		
		case 0x00000007:
			Function_351(Global_30668[0]);
			break;
		
		case 0x00000016:
			Function_351(Global_30668[0]);
			break;
		
		case 0x00000008:
			if (!bParam2)
			{
				if (IS_PS3() || Function_340())
				{
					if (!Function_173(4))
					{
						Function_333(4, 0, 0, 1, 0);
					}
				}
			}
			Function_351(Global_30640[0]);
			Function_351(Global_30640[10]);
			break;
		
		case 0x00000009:
			Function_351(Global_30640[0]);
			Function_351(Global_30668[2]);
			Function_332(&(Global_29008[Global_30668[2]]), 32768);
			Function_331(&(Global_29008[Global_30668[2]]), 256);
			break;
		
		case 0x00000015:
			Function_349(9, bParam2, 4);
			Function_351(Global_30640[0]);
			break;
		
		case 0x00000017:
			Function_351(Global_30640[0]);
			Function_351(Global_30658[0]);
			Function_332(&(Global_29008[Global_30658[0]]), 32768);
			Function_331(&(Global_29008[Global_30658[0]]), 256);
			break;
		
		case 0x0000000A:
			Function_351(Global_30640[0]);
			break;
		
		case 0x0000000B:
			if (*uParam1 <= 3)
			{
				*uParam1 = 3;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, 1);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_351(Global_30640[0]);
			Function_351(Global_30640[1]);
			break;
		
		case 0x0000000F:
			Function_351(Global_30640[1]);
			Function_351(Global_30679[0]);
			break;
		
		case 0x00000010:
			Function_351(Global_30679[0]);
			Function_351(Global_30658[5]);
			break;
		
		case 0x00000011:
			Function_351(Global_30658[5]);
			Function_351(Global_30658[1]);
			break;
		
		case 0x0000000C:
			Function_349(21, bParam2, 4);
			Function_351(Global_30640[4]);
			Function_351(Global_30658[4]);
			Function_330(&Global_76847, 0x2000000);
			Function_330(&Global_76847, 0x4000000);
			Function_330(&Global_76847, 4096);
			Function_330(&Global_76847, 8);
			Function_330(&Global_76847, 8388608);
			Function_330(&Global_76847, 524288);
			Function_330(&Global_76847, 1048576);
			break;
		
		case 0x0000000D:
			Function_351(Global_30640[4]);
			Function_351(Global_30658[0]);
			break;
		
		case 0x0000000E:
			Function_331(&(Global_29008[Global_30640[4]]), 256);
			Function_351(Global_30640[4]);
			Function_351(Global_30658[0]);
			Function_332(&(Global_29008[Global_30658[0]]), 32768);
			Function_331(&(Global_29008[Global_30658[0]]), 256);
			break;
		
		case 0x00000012:
			Function_351(Global_30640[0]);
			Function_351(Global_30640[5]);
			Function_349(16, bParam2, 4);
			break;
		
		case 0x00000013:
			Function_351(Global_30658[3]);
			Function_332(&(Global_29008[Global_30658[3]]), 32768);
			Function_331(&(Global_29008[Global_30658[3]]), 256);
			break;
		
		case 0x00000014:
			Function_349(9, bParam2, 4);
			Function_351(Global_30668[1]);
			break;
		
		case 0x00000018:
			Function_332(&(Global_29008[Global_30679[1]]), 32768);
			Function_351(Global_30679[1]);
			break;
		
		case 0x00000019:
			Function_349(12, bParam2, 4);
			Function_331(&(Global_29008[Global_30679[1]]), 256);
			Function_351(Global_30668[3]);
			Function_351(Global_30693[0]);
			Function_351(Global_30685[0]);
			Function_345(4);
			Function_341(13, 1);
			Function_341(1, 1);
			Function_341(18, 1);
			Function_343(34, 1);
			Function_343(44, 1);
			Function_343(47, 1);
			Global_26031[10] = 1;
			break;
		
		case 0x0000001E:
			Function_349(5, bParam2, 4);
			if (*uParam1 <= 4)
			{
				*uParam1 = 4;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, 1);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
			}
			Function_351(Global_30693[0]);
			break;
		
		case 0x0000001F:
			Function_351(Global_30693[0]);
			break;
		
		case 0x00000020:
			Function_351(Global_30693[0]);
			Function_351(Global_30707[0]);
			break;
		
		case 0x00000021:
			Function_351(Global_30693[0]);
			break;
		
		case 0x0000001A:
			Function_351(Global_30685[0]);
			Function_351(Global_30693[0]);
			Function_351(Global_30693[1]);
			Function_351(Global_30707[2]);
			break;
		
		case 0x0000001B:
			Function_349(23, bParam2, 3);
			Function_341(23, 1);
			Function_351(Global_30685[0]);
			Function_351(Global_30685[2]);
			Function_332(&(Global_29008[Global_30685[2]]), 32768);
			Function_331(&(Global_29008[Global_30685[2]]), 256);
			break;
		
		case 0x0000001C:
			Function_349(19, bParam2, 4);
			Function_351(Global_30685[0]);
			Function_351(Global_30707[3]);
			break;
		
		case 0x0000001D:
			Function_349(24, bParam2, 3);
			Function_341(24, 1);
			Function_351(Global_30685[0]);
			break;
		
		case 0x00000024:
			Function_351(Global_30685[0]);
			Function_351(Global_30685[3]);
			break;
		
		case 0x00000022:
			Function_351(Global_30693[12]);
			Function_351(Global_30685[1]);
			break;
		
		case 0x00000023:
			Function_351(Global_30693[12]);
			Function_351(Global_30707[1]);
			break;
		
		case 0x00000025:
			Function_349(25, bParam2, 10);
			Function_351(Global_30693[2]);
			break;
		
		case 0x00000026:
			Function_351(Global_30693[12]);
			break;
		
		case 0x00000027:
			Function_351(Global_30693[12]);
			break;
		
		case 0x00000028:
			Function_349(13, bParam2, 4);
			Function_351(Global_30693[2]);
			Function_351(Global_30707[1]);
			break;
		
		case 0x00000029:
			if (!bParam2)
			{
				if (!Function_173(8))
				{
					Function_333(8, 0, 0, 1, 0);
				}
			}
			Function_351(Global_30685[0]);
			Function_345(9);
			Function_341(7, 1);
			Function_341(11, 1);
			Function_341(3, 1);
			Function_341(20, 1);
			Function_343(57, 1);
			break;
		
		case 0x0000002A:
			Function_349(2, bParam2, 4);
			Function_351(Global_30717[0]);
			Function_351(Global_30717[3]);
			break;
		
		case 0x0000002B:
			Function_351(Global_30717[0]);
			break;
		
		case 0x0000002C:
			Function_351(Global_30717[0]);
			Function_351(Global_30723[0]);
			break;
		
		case 0x0000002D:
			Function_351(Global_30717[0]);
			break;
		
		case 0x0000002E:
			Function_351(Global_30717[0]);
			break;
		
		case 0x0000002F:
			Function_351(Global_30717[0]);
			break;
		
		case 0x00000030:
			Function_349(17, bParam2, 4);
			Function_351(Global_30723[0]);
			Function_351(Global_30717[0]);
			break;
		
		case 0x00000031:
			if (!bParam2)
			{
				if (!Function_175(15))
				{
					Function_325(15, 0, 1);
				}
			}
			Function_324(2, 26);
			Function_331(&(Global_29008[Global_30717[1]]), 256);
			Function_345(11);
			Function_351(Global_30717[1]);
			Function_351(Global_30668[0]);
			break;
		
		case 0x00000032:
			Function_351(Global_30717[1]);
			break;
		
		case 0x00000033:
			Function_351(Global_30717[1]);
			Function_351(Global_30717[0]);
			break;
		
		case 0x00000034:
			Function_351(Global_30717[1]);
			break;
		
		case 0x00000035:
			Function_351(Global_30717[1]);
			break;
		
		case 0x00000036:
			Function_351(Global_30717[1]);
			break;
		
		case 0x00000037:
			Function_351(Global_30717[1]);
			break;
		
		case 0x00000038:
			Function_351(Global_30717[1]);
			break;
		
		case 0x00000039:
			Function_351(Global_30717[1]);
			Function_322(11);
			Function_345(12);
			Global_16537[1121].f_40 = 0;
			Function_343(56, 1);
			if (!bParam2)
			{
				if (!Function_173(9))
				{
					Function_333(9, 0, 0, 0, 0);
				}
				if (!Function_173(10))
				{
					Function_333(10, 0, 0, 1, 0);
				}
			}
			break;
	}
	Var0 = { StackVal, StackVal, StackVal, Function_300(bParam0) };
	PRINTSTRING("MISSION LAUNCH: Giving stuff for debug passing ");
	PRINTSTRING(UI_GET_STRING(&Var0));
	PRINTNL();
	return;
}

void Function_322(int iParam0) //Position: 0x12796 / 75670
{
	bool bVar0;
	
	if (!Function_286(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_68))
	{
		Function_323(Global_16537[iParam021].f_68, 0);
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_72))
	{
		Function_323(Global_16537[iParam021].f_72, 0);
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
			Function_136(Global_16537[iParam021].f_48, 16, 0, 0);
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

void Function_323(bool bParam0, bool bParam1) //Position: 0x12905 / 76037
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

void Function_324(int iParam0, bool bParam1) //Position: 0x12959 / 76121
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

void Function_325(bool bParam0, bool bParam1, bool bParam2) //Position: 0x129C0 / 76224
{
	char* cVar0[32];
	char* cVar8[32];
	
	if (!Function_169(bParam0))
	{
		LOG_ERROR("Attempting to mostly complete an invalid outfit");
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_175(bParam0))
	{
		if (!Function_173(bParam0))
		{
			Function_333(bParam0, 1, 0, 0, 1);
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
			PREPEND_JOURNAL_ENTRY(Global_27774[bParam013].f_48, 1);
			PREPEND_JOURNAL_ENTRY_DETAIL(Global_27774[bParam013].f_48, &cVar8, 0, 2, false);
			SET_JOURNAL_ENTRY_PROGRESS(Global_27774[bParam013].f_48, -1.0f, 0, 0);
			if (!bParam1)
			{
				PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Finish", &cVar0, false, false, false, 0, 2, 0, 0, 0);
			}
		}
		Function_329(457, 1, 0, 0);
		Function_328(bParam0, 6);
		if (bParam0 == 3)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(23))
			{
				AWARD_ACHIEVEMENT(23);
			}
		}
		if (bParam2)
		{
			if (!Function_360(0, 0, 1, 1))
			{
				Function_256(1);
				Function_327(1, 0);
			}
			else
			{
				Function_326();
			}
		}
	}
	return;
}

void Function_326() //Position: 0x12B5F / 76639
{
	return;
}

void Function_327(bool bParam0, int iParam1) //Position: 0x12B65 / 76645
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

void Function_328(bool bParam0, int iParam1) //Position: 0x12BA7 / 76711
{
	if (!Function_169(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_27774[bParam013].f_8 = (StackVal || iParam1);
	return;
}

int Function_329(int iParam0, bool bParam1, int iParam2, int iParam3) //Position: 0x12BFC / 76796
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
	Function_282(iParam0, TO_FLOAT(bParam1), 1);
	Function_281(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_270(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, iParam3);
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

void Function_330(var uParam0, int iParam1) //Position: 0x12E1C / 77340
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_331(var uParam0, int iParam1) //Position: 0x12E2B / 77355
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_332(var uParam0, int iParam1) //Position: 0x12E42 / 77378
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_333(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x12E51 / 77393
{
	struct<8> Var0;
	
	if (!Function_169(bParam0))
	{
		LOG_ERROR("Attempting to discover invalid outfit");
		return;
	}
	if (!Function_180(3) && !bParam4)
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_173(bParam0))
	{
		Function_329(456, 1, 0, 0);
		Function_328(bParam0, 2);
		if (bParam2)
		{
			if (!Function_360(0, 0, 1, 1))
			{
				Function_256(1);
				Function_327(1, 5);
			}
			else
			{
				Function_326();
			}
		}
		Function_334(bParam0);
		strcpy(&Var0, "OUT_", 32);
		stradd(&Var0, &Global_27774[bParam013] + 32, 32);
		if ((!Function_207() && !bParam1) && !Global_3380)
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Add", &Var0, false, false, false, 0, 2, 0, 0, 0);
		}
		else if (Function_207() || Global_3380)
		{
			if (!DECOR_CHECK_EXIST(Global_34573, "outfitDisc"))
			{
				DECOR_SET_INT(Global_34573, "outfitDisc", bParam0);
			}
		}
		if (bParam3)
		{
			stradd(&Var0, "_tip", 32);
			Function_69(&Var0, 10.0f, 1, 0, 0, 1, 0);
		}
		if (!Function_71())
		{
			if (!Function_48(Global_76846, 2))
			{
				Function_43(Global_34573, 2, 1, 0);
			}
		}
	}
}

void Function_334(bool bParam0) //Position: 0x12FA6 / 77734
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
			if (Function_338(bParam0, Function_339(bVar24)))
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
			if (Function_338(bParam0, Function_339(bVar24)))
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
		SET_JOURNAL_ENTRY_PROGRESS(Global_27774[bParam013].f_48, (TO_FLOAT(Function_337(bParam0)) / TO_FLOAT(Global_27774[bParam013].f_28)), 0, 0);
		Function_336(Global_27774[bParam013].f_48, 0);
		straddi(&cVar8, Function_335(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_27774[bParam013].f_48, &cVar8, 3);
	}
	return;
}

int Function_335(int iParam0) //Position: 0x13156 / 78166
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_169(iParam0))
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

void Function_336(char* cParam0, int iParam1) //Position: 0x131AD / 78253
{
	bool bVar0;
	
	bVar0 = IS_JOURNAL_ENTRY_TARGETED(cParam0);
	REMOVE_JOURNAL_ENTRY(cParam0, iParam1);
	PREPEND_JOURNAL_ENTRY(cParam0, iParam1);
	if (bVar0)
	{
		TARGET_JOURNAL_ENTRY(cParam0);
	}
	return;
}

var Function_337(int iParam0) //Position: 0x131D2 / 78290
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_169(iParam0))
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

bool Function_338(bool bParam0, int iParam1) //Position: 0x13228 / 78376
{
	int iVar0;
	
	if (!Function_169(bParam0))
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

int Function_339(bool bParam0) //Position: 0x13287 / 78471
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_340() //Position: 0x13293 / 78483
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return Function_19(GET_GAME_EDITION(), 16);
	}
	return 0;
}

int Function_341(int iParam0, int iParam1) //Position: 0x132C3 / 78531
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_WEAPON_AVAILABLE_FOR_SALE: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_59354[iParam08].f_24 = iParam1;
	Function_342(iParam0, iParam1);
	Function_43(Global_34573, 1, 4, 1);
	return 1;
}

int Function_342(int iParam0, int iParam1) //Position: 0x13336 / 78646
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_WEAPON_AVAILABLILITY: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_62337[iParam0] = iParam1;
	return 1;
}

int Function_343(int iParam0, int iParam1) //Position: 0x13392 / 78738
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_AMMO_AVAILABLE_FOR_SALE: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_59675[iParam08].f_24 = iParam1;
	Function_344(iParam0, iParam1);
	Function_43(Global_34573, 1, 4, 1);
	return 1;
}

int Function_344(int iParam0, int iParam1) //Position: 0x13403 / 78851
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_ITEM_AVAILABLILITY: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_62378[iParam0] = iParam1;
	return 1;
}

void Function_345(int iParam0) //Position: 0x1345D / 78941
{
	bool bVar0;
	bool bVar1;
	
	if (!Function_286(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_68))
	{
		Function_348(Global_16537[iParam021].f_68, 0);
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_72))
	{
		Function_348(Global_16537[iParam021].f_72, 0);
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
			Function_329(468, 1, 0, 0);
			Function_324(6, (16 + iParam0));
			Global_16537[iParam021].f_40 = 3;
			Function_69("house_purchased", 0x41200000, 1, 0, 2, 1, 0);
			Function_136(Global_16537[iParam021].f_48, 17, 0, 0);
			if (((iParam0 != 5 || iParam0 != 8) || iParam0 != 6) || iParam0 != 7)
			{
				Function_333(14, 1, 0, 0, 0);
				Function_346(14, 1, 0, 0, 0);
			}
			if (!Function_360(0, 0, 1, 1))
			{
				Function_256(1);
				Function_327(1, 6);
			}
			else
			{
				Function_326();
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
			Function_69("house_rented", 0x41200000, 1, 0, 2, 1, 0);
			break;
		
		case 0x00000006:
			Function_329(468, 1, 0, 0);
			Global_16537[iParam021].f_40 = 3;
			Function_324(6, (16 + iParam0));
			break;
	}
	return;
}

void Function_346(bool bParam0, bool bParam1, bool bParam2, var uParam3, bool bParam4) //Position: 0x1370A / 79626
{
	char* cVar0[32];
	struct<8> Var8;
	
	strcpy(&cVar0, "OUT_", 32);
	stradd(&cVar0, &Global_27774[bParam013] + 32, 32);
	if (!Function_169(bParam0))
	{
		LOG_ERROR("Attempting to add scrap to invalid outfit");
		return;
	}
	if (!Function_180(3) || uParam3)
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_174(bParam0, 2))
	{
		Function_329(456, 1, 0, 0);
		Function_328(bParam0, 2);
		if (!bParam2)
		{
			Var8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
			stradd(&Var8, "_tip", 32);
			Function_69(&Var8, 10.0f, 1, 0, 0, 1, 0);
		}
	}
	bParam2 = bParam2;
	if (!Function_338(bParam0, bParam1))
	{
		Global_27774[bParam013].f_4 = (StackVal || bParam1);
		Function_328(bParam0, 1048576);
		if (bParam4)
		{
			if (!Function_360(0, 0, 1, 1))
			{
				Function_256(1);
				Function_327(1, 0);
			}
			else
			{
				Function_326();
			}
		}
		Function_334(bParam0);
		if (StackVal && !Function_19(((((!Function_207() && !Global_3380) && !Global_3392) && !Global_3384) && !bParam2), 1))
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Edit", &cVar0, false, false, false, 0, 2, 0, 0, 0);
		}
		else if (StackVal || Function_19((((Function_207() || Global_3380) || Global_3392) || Global_3384), 1))
		{
			if (!DECOR_CHECK_EXIST(Global_34573, "outfitScrap"))
			{
				DECOR_SET_INT(Global_34573, "outfitScrap", bParam0);
			}
		}
		if (!Function_71())
		{
			if (!Function_48(Global_76846, 2))
			{
				Function_43(Global_34573, 2, 1, 0);
			}
		}
		if (Global_28180 == bParam0)
		{
			Global_28180.f_12 = 1;
			Function_166();
		}
		Global_28180.f_12 = 1;
		switch (bParam0)
		{
			case 0x00000004:
				Function_347(3, bParam1);
				break;
			
			case 0x00000005:
				Function_347(3, SHIFT_LEFT(bParam1, 6));
				break;
			
			case 0x00000006:
				Function_347(3, SHIFT_LEFT(bParam1, 12));
				break;
			
			case 0x00000007:
				Function_347(3, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x00000008:
				Function_347(3, SHIFT_LEFT(bParam1, 24));
				break;
			
			case 0x00000009:
				Function_347(2, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x0000000A:
				Function_324(2, 24);
				break;
			
			case 0x00000003:
				Function_324(2, 25);
				break;
			
			case 0x0000000F:
				Function_324(2, 26);
				break;
			
			case 0x0000000D:
				Function_324(2, 27);
				break;
			
			case 0x0000000E:
				Function_324(2, 28);
				break;
			}
	}
}

void Function_347(int iParam0, bool bParam1) //Position: 0x139A0 / 80288
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

void Function_348(bool bParam0, bool bParam1) //Position: 0x13A0B / 80395
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

void Function_349(bool bParam0, bool bParam1, int iParam2) //Position: 0x13A5C / 80476
{
	bool bVar0;
	
	if (bParam1)
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	else
	{
		bVar0 = (GET_WEAPON_MAX_AMMO(bParam0) * IntToFloat(iParam2));
		if (Function_350(GET_AMMOENUM_FOR_WEAPONENUM(bParam0), 1))
		{
			_ADD_AMMO_OF_TYPE(Global_34573, GET_AMMOENUM_FOR_WEAPONENUM(bParam0), bVar0, 1, 0);
		}
		if (4294967295 != bParam0)
		{
			if (!ACTOR_HAS_WEAPON(Global_34573, bParam0))
			{
				Function_319(bParam0, 0, 0);
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

bool Function_350(int iParam0, int iParam1) //Position: 0x13ACA / 80586
{
	return !(iParam0 != 4294967295 || (iParam1 && iParam0 != 0));
}

void Function_351(int iParam0) //Position: 0x13ADD / 80605
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (NET_IS_IN_SESSION())
	{
		return;
	}
	if (Function_160(&(Global_29008[iParam0]), 4096))
	{
		return;
	}
	Function_332(&(Global_29008[iParam0]), 4096);
	if (StackVal != 1)
	{
		Function_329(473, 1, 0, 0);
		iVar0 = Function_352(iParam0);
		if (iVar0 == Global_30621[0])
		{
			Function_329(474, 1, 0, 0);
		}
		else if (iVar0 == Global_30621[1])
		{
			Function_329(475, 1, 0, 0);
		}
		else if (iVar0 == Global_30621[2])
		{
			Function_329(476, 1, 0, 0);
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
		Function_324(iVar2, iVar1);
	}
	else if (iParam0 == Global_30723[9])
	{
		Function_324(7, 30);
	}
	if (Function_279(473) <= Function_280(473))
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

var Function_352(int iParam0) //Position: 0x13BDC / 80860
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_161(iParam0))
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

void Function_353() //Position: 0x13C34 / 80948
{
	Function_354(512);
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

void Function_354(int iParam0) //Position: 0x13C70 / 81008
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

void Function_355(int iParam0, int iParam1) //Position: 0x13C83 / 81027
{
	if (!Function_98(iParam0))
	{
		return;
	}
	Global_13172[iParam011].f_16 = iParam1;
	return;
}

void Function_356(int iParam0) //Position: 0x13C9E / 81054
{
	if (iParam0->f_128 & 114688 == 0)
	{
		return;
	}
	if (iParam0->f_128 & 16384 >= 0)
	{
		if (IS_WEATHER_SPHERE_ENABLED(0))
		{
			ENABLE_WEATHER_SPHERE(0, 0);
		}
	}
	else if (iParam0->f_128 & 32768 >= 0)
	{
		if (IS_WEATHER_SPHERE_ENABLED(1))
		{
			ENABLE_WEATHER_SPHERE(1, 0);
		}
	}
	else if (iParam0->f_128 & 65536 >= 0)
	{
		if (StackVal == 0)
		{
			Function_357(4, 0, 0);
		}
	}
	return;
}

void Function_357(int iParam0, int iParam1, int iParam2) //Position: 0x13D05 / 81157
{
	int iVar0;
	
	if (StackVal == 4294967295)
	{
		LOG_ERROR("Calling WEATHER_CLEAR_OVERRIDE when you never set the override in the first place!");
		return;
	}
	if (StackVal || (StackVal || StackVal != 3 != 4) != 5)
	{
		Global_16524 = 2;
	}
	else if (StackVal || (StackVal || StackVal != 12 != 20) != 16)
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
		iVar0 = MAKE_TIME_OF_DAY(iParam0, iParam1, iParam2);
		Function_229(Global_16524, iVar0, 1);
	}
	return;
}

bool Function_358(bool bParam0) //Position: 0x13DEB / 81387
{
	if (!Function_4(bParam0))
	{
		return 4294967295;
	}
	return (SHIFT_RIGHT(Global_13172[bParam011], 12) && 255);
}

struct<160> Function_359(var uParam0, int iParam1) //Position: 0x13E0B / 81419
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

bool Function_360(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x13E45 / 81477
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

bool Function_361(int iParam0) //Position: 0x13EE9 / 81641
{
	return IS_OBJECT_VALID(Function_362(iParam0));
}

var Function_362(int iParam0) //Position: 0x13EF7 / 81655
{
	return iParam0->f_28;
}

void Function_363(int iParam0, int iParam1) //Position: 0x13F01 / 81665
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
			Function_364(&(Global_25267[iVar058]));
		}
		iVar0++;
	}
	return;
}

void Function_364(int iParam0) //Position: 0x13F83 / 81795
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

int Function_365(int iParam0) //Position: 0x13FD1 / 81873
{
	if (!Function_161(iParam0))
	{
		return 0;
	}
	return Function_160(&(Global_29008[iParam0]), 2048);
}

bool Function_366(int iParam0) //Position: 0x13FEF / 81903
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_367(int iParam0) //Position: 0x1400F / 81935
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
		switch (Function_245(StackVal))
		{
			case 0x00000003:
				PRINTSTRING("nCompleted");
				break;
			
			case 0x00000004:
				PRINTSTRING("Completed(Cheated)");
				break;
			
			case 0x00000000:
				if (Function_244(iParam0[iVar040]))
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

void Function_368(var uParam0) //Position: 0x1411C / 82204
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= *uParam0)
	{
		if (uParam0[iVar040]->f_92)
		{
			Function_246(uParam0[iVar040], iVar0);
		}
		iVar0++;
	}
	return;
}

void Function_369() //Position: 0x1414C / 82252
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

void Function_370() //Position: 0x142F4 / 82676
{
	SET_ACTOR_INVULNERABILITY(GET_PLAYER_ACTOR(0), 1);
	Function_377(4294967295, 4294967295);
	Function_374();
	Global_62478 = 1;
	PRINTSTRING("TEST: Currently Testing Region 0 - FRONTIER");
	PRINTNL();
	if (Global_62482 > 0 || Global_62482 <= Global_3422)
	{
		Global_62481 = 4294967197;
		Global_62482 = 0;
		return;
	}
	Function_372();
	Global_62478 = 1;
	Function_371();
	LAUNCH_NEW_SCRIPT("content/scripting/DesignerDefined/AutomatedTester/MissionTester", 0);
	return;
}

int Function_371() //Position: 0x143AF / 82863
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

void Function_372() //Position: 0x143D6 / 82902
{
	Function_373(25, 2);
	return;
}

void Function_373(int iParam0, int iParam1) //Position: 0x143E2 / 82914
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

void Function_374() //Position: 0x145E0 / 83424
{
	GRINGO_DEBUG_CHECK_SOUND(1);
	SET_DEBUG_FADE_STATE(0);
	SET_HUD_MAP_DRAW_ENABLED(1);
	if (Function_376())
	{
		Function_375(10, 3);
	}
	else
	{
		Function_372();
	}
	Global_30920 = 0;
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	SET_ACTOR_INVULNERABILITY(Function_188(), 0);
	AI_CLEAR_DONT_HARM_ACTOR(Function_188());
	UI_POP("nDebugMenu");
	return;
}

void Function_375(int iParam0, int iParam1) //Position: 0x1462B / 83499
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

bool Function_376() //Position: 0x14762 / 83810
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
				if (!Function_19(Global_78480.f_124, 1))
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

void Function_377(int iParam0, int iParam1) //Position: 0x147C9 / 83913
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

void Function_378() //Position: 0x14900 / 84224
{
	return;
}

void Function_379(int iParam0) //Position: 0x14906 / 84230
{
	strcpy(iParam0 + 12, "MISSIONS", 16);
	*iParam0 = 84373;
	iParam0->f_4 = 84336;
	iParam0->f_8 = 84281;
	iParam0->f_28 = 0;
	return;
}

void Function_380() //Position: 0x14939 / 84281
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
	Function_368(&Global_3422);
	return;
}

int Function_381() //Position: 0x14970 / 84336
{
	if (!Global_3366)
	{
		return 0;
	}
	if (Function_184(&Global_3422, 1) >= 0)
	{
		Global_3390 = 1;
		return 0;
	}
	Global_3390 = 1;
	return 1;
}

void Function_382() //Position: 0x14995 / 84373
{
	bool bVar0;
	
	Function_438(2, "Nigel West Dickens", 546, "merchant_brain_injured", 0.0f, 0.0f, 0.0f, 0);
	Function_438(4, "Marshal Augustus Graham", 547, "marshal_brain", 0.0f, 0.0f, 0.0f, 0);
	Function_438(3, "Bonnie MacFarlane", 551, "ranchdaughter_brain", 0.0f, 0.0f, 0.0f, 0);
	Function_438(0, "Irish", 548, "Outlaw_brain", 0.0f, 0.0f, 0.0f, 0);
	Function_438(1, "Seth", 545, "GraveRobber_brain", 0.0f, 0.0f, 0.0f, 0);
	Function_438(5, "Old Gunslinger", 558, "Gunslinger_Comp_Br", 0.0f, 0.0f, 0.0f, 0);
	Function_438(6, "Mexican Tyrant", 556, "MexHenchman_Comp_Br", 0.0f, 0.0f, 0.0f, 0);
	Function_438(7, "Mexican Rebel", 553, "MexRebel_Comp_Br", -4809.157f, 44.886f, 4957.521f, 0);
	Function_438(8, "Mexican Girl", 555, "MexGirl_Comp_Br", -1699.957f, 8.407f, 4196.78f, 0);
	Function_438(9, "Anthropologist", 561, "Anthropologist_Brain", 1333.423f, 78.456f, 748.393f, 0);
	Function_438(10, "nFBI Agent", 559, "FBI_Agent_Brain", 0.0f, 0.0f, 0.0f, 0);
	Function_438(11, "Wife", 698, "Companion_Wife", 0.0f, 0.0f, 0.0f, 0);
	Function_438(12, "Son", 638, "Companion_Son", 0.0f, 0.0f, 0.0f, 0);
	Function_438(13, "Uncle", 646, "Companion_LeadWorker", 0.0f, 0.0f, 0.0f, 0);
	if (Global_3421)
	{
		Function_437(&Global_3422, 9, 0, "$/content/Frontier/Missions/Marshal02/Marshal02", 4294967295, 0, 304, 4, "$/content/scripting/gringo/SimpleGringo/Marshal_Camp02", -2091.528f, 16.75f, 2606.137f, 0x40200000);
		Function_436(&Global_3422, 14, 0, "$/content/Frontier/Missions/Grave03/Grave03", 4294967295, 0, 303, 1, "$/content/scripting/gringo/SimpleGringo/Grave_Camp03", -3919.425f, 31.444f, 2900.712f, FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_Grave03"), -3911.7f, 31.59f, 2900.8f);
	}
	else
	{
		Function_434(&Global_3422, 1, 0, "$/content/Frontier/Missions/Intro01/Intro01", 4294967295, 0, -2208.0f, 16.5f, 2607.17f);
		Function_434(&Global_3422, 2, 0, "$/content/Frontier/Missions/Ranch01/Ranch01", 1, 1, -788.879f, 94.299f, 2411.818f);
		Function_437(&Global_3422, 3, 0, "$/content/Frontier/Missions/Ranch03/Ranch03", 2, 1, 300, 3, "", -787.022f, 93.636f, 2409.413f, 0x40200000);
		Function_437(&Global_3422, 4, 0, "$/content/Frontier/Missions/Ranch02/Ranch02", 3, 1, 300, 3, "$/content/scripting/gringo/SimpleGringo/Ranch_Camp02", -793.304f, 92.22f, 2418.484f, 0x40200000);
		Function_436(&Global_3422, 5, 0, "$/content/Frontier/Missions/Ranch07/Ranch07", 4, 1, 300, 3, "$/content/scripting/gringo/SimpleGringo/Ranch_Camp07", -793.739f, 92.404f, 2418.243f, FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_Ranch07"), -788.844f, 93.669f, 2406.71f);
		Function_437(&Global_3422, 6, 0, "$/content/Frontier/Missions/Ranch06/Ranch06", 5, 1, 300, 3, "", -787.022f, 93.636f, 2409.413f, 0x40200000);
		Function_436(&Global_3422, 7, 0, "$/content/Frontier/Missions/Ranch08/Ranch08", 6, 1, 300, 3, "$/content/scripting/gringo/SimpleGringo/Ranch_Camp08", -852.8666f, 90.806f, 2440.189f, FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_Ranch08"), -858.142f, 90.353f, 2432.052f);
		Function_437(&Global_3422, 8, 0, "$/content/Frontier/Missions/Marshal01/Marshal01", 3, 1, 304, 4, "$/content/scripting/gringo/SimpleGringo/Marshal_Camp01", -2091.528f, 16.75f, 2606.137f, 0x40200000);
		Function_437(&Global_3422, 9, 0, "$/content/Frontier/Missions/Marshal02/Marshal02", 8, 1, 304, 4, "$/content/scripting/gringo/SimpleGringo/Marshal_Camp02", -2091.528f, 16.75f, 2606.137f, 0x40200000);
		Function_436(&Global_3422, 10, 0, "$/content/Frontier/Missions/Merchant01/Merchant01", 9, 1, 311, 2, "$/content/scripting/gringo/SimpleGringo/Merchant_Camp01", -1694.394f, 29.634f, 3068.558f, FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_Merchant01"), -1696.57f, 29.634f, 3066.021f);
		Function_437(&Global_3422, 21, 0, "$/content/Frontier/Missions/Marshal04/Marshal04", 5, 1, 304, 4, "$/content/scripting/gringo/SimpleGringo/Marshal_Camp04", -2091.528f, 16.75f, 2606.137f, 0x40200000);
		Function_437(&Global_3422, 11, 0, "$/content/Frontier/Missions/Merchant02/Merchant02", 10, 1, 311, 2, "$/content/scripting/gringo/SimpleGringo/Merchant_Camp02", -2125.509f, 16.485f, 2604.504f, 3.5f);
		Function_436(&Global_3422, 12, 0, "$/content/Frontier/Missions/Grave01/Grave01", 11, 1, 303, 1, "$/content/scripting/gringo/SimpleGringo/Grave_Camp01", -1800.709f, 24.427f, 2865.854f, FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_Grave01"), -1803.651f, 23.5f, 2865.918f);
		Function_436(&Global_3422, 13, 0, "$/content/Frontier/Missions/Grave02/Grave02", 12, 1, 303, 1, "$/content/scripting/gringo/SimpleGringo/GraveRobber_Camp02", -1784.501f, 24.094f, 2838.486f, FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_Grave02"), -1777.091f, 24.093f, 2849.859f);
		Function_436(&Global_3422, 14, 0, "$/content/Frontier/Missions/Grave03/Grave03", 13, 1, 303, 1, "$/content/scripting/gringo/SimpleGringo/Grave_Camp03", -3919.425f, 31.444f, 2900.712f, FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_Grave03"), -3911.7f, 31.59f, 2900.8f);
		Function_437(&Global_3422, 15, 0, "$/content/Frontier/Missions/Merchant05/Merchant05", 12, 1, 311, 2, "$/content/scripting/gringo/SimpleGringo/Merchant_Camp05", -3260.515f, 15.786f, 2732.906f, (2.5f + 2.0f));
		Function_437(&Global_3422, 16, 0, "$/content/Frontier/Missions/Merchant03/Merchant03", 15, 1, 311, 2, "$/content/scripting/gringo/SimpleGringo/Merchant_Camp03", -3139.685f, 43.933f, 3757.126f, 0x40200000);
		Function_437(&Global_3422, 17, 0, "$/content/Frontier/Missions/Merchant04/Merchant04", 16, 1, 311, 2, "$/content/scripting/gringo/SimpleGringo/Merchant_Camp04", -4327.433f, 22.952f, 2727.702f, 0x40200000);
		Function_436(&Global_3422, 18, 0, "$/content/Frontier/Missions/Outlaw01/Outlaw01", 15, 1, 308, 0, "$/content/scripting/gringo/SimpleGringo/Outlaw_Camp01", -2164.184f, 16.436f, 2571.01f, FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_Outlaw01"), -2164.184f, 16.436f, 2571.01f);
		Function_436(&Global_3422, 19, 0, "$/content/Frontier/Missions/Outlaw02/Outlaw02", 18, 1, 308, 0, "$/content/scripting/gringo/SimpleGringo/Outlaw_Camp02", -3671.614f, 8.197f, 3491.559f, FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_Outlaw02"), -3671.614f, 8.197f, 3491.559f);
		Function_436(&Global_3422, 20, 0, "$/content/Frontier/Missions/Outlaw03/Outlaw03", 19, 1, 308, 0, "$/content/scripting/gringo/SimpleGringo/Outlaw_Camp03", 170.441f, 73.691f, 2219.25f, FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_Outlaw03"), 175.211f, 74.677f, 2223.336f);
		Function_437(&Global_3422, 22, 0, "$/content/Frontier/Missions/Ranch04/Ranch04", 7, 1, 300, 3, "", -846.457f, 91.754f, 2391.903f, (2.5f + 2.0f));
		Function_437(&Global_3422, 23, 0, "$/content/Frontier/Missions/Marshal03/Marshal03", 22, 1, 304, 4, "$/content/scripting/gringo/SimpleGringo/Marshal_Camp03", -2091.528f, 16.75f, 2606.137f, 0x40200000);
		Function_437(&Global_3422, 24, 0, "$/content/Frontier/Missions/Fort01/Fort01", 23, 1, 304, 4, "", -2744.267f, 79.1f, 3600.36f, 0x40200000);
		Function_433(&Global_3422, 11, 5);
		Function_433(&Global_3422, 21, 10);
		Function_433(&Global_3422, 12, 6);
		Function_433(&Global_3422, 22, 21);
		Function_433(&Global_3422, 24, 20);
		Function_433(&Global_3422, 24, 14);
		Function_433(&Global_3422, 24, 17);
		Function_432(&Global_3422, 4, 15);
		Function_432(&Global_3422, 3, 31);
		Function_432(&Global_3422, 6, 31);
		Function_432(&Global_3422, 5, 15);
		Function_432(&Global_3422, 11, 31);
		Function_432(&Global_3422, 16, 31);
		Function_432(&Global_3422, 17, 31);
		Function_432(&Global_3422, 15, 31);
		Function_431(&Global_3422, 6, 1, 1);
		Function_431(&Global_3422, 11, 6, 0);
		Function_431(&Global_3422, 13, 1, 1);
		Function_431(&Global_3422, 24, 1, 1);
		Function_430(&Global_3422, 7, 16384);
		Function_234(&Global_3422[340] + 128, 16);
		Function_234(&Global_3422[840] + 128, 16);
		Function_234(&Global_3422[1240] + 128, 16);
		Function_234(&Global_3422[1840] + 128, 16);
		Function_234(&Global_3422[1040] + 128, 16);
		Function_436(&Global_3422, 25, 1, "$/content/Frontier/Missions/Fort02/Fort02", 24, 1, 308, 0, "$/content/scripting/gringo/SimpleGringo/Fort_Camp02", -479.224f, 19.96f, 3033.177f, FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_Fort02"), -482.111f, 18.737f, 3039.058f);
		Function_436(&Global_3422, 26, 1, "$/content/Mexico/Missions/MexArmy02/MexArmy02", 25, 1, 306, 6, "$/content/scripting/gringo/SimpleGringo/MexArmy_Camp02", -4385.229f, 38.64f, 4367.098f, FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_MexArmy02"), -4378.667f, 38.704f, 4360.914f);
		Function_436(&Global_3422, 27, 1, "$/content/Mexico/Missions/MexArmy01/MexArmy01", 26, 1, 306, 6, "", -4348.291f, 42.022f, 4346.203f, FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_MexArmy01"), -4348.291f, 42.022f, 4346.203f);
		Function_436(&Global_3422, 28, 1, "$/content/Mexico/Missions/MexArmy03/MexArmy03", 27, 1, 306, 6, "", -4383.459f, 38.681f, 4367.18f, FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_MexArmy03"), -4356.495f, 44.261f, 4342.515f);
		Function_436(&Global_3422, 29, 1, "$/content/Mexico/Missions/MexArmy04/MexArmy04", 28, 1, 306, 6, "$/content/scripting/gringo/SimpleGringo/MexArmy_Camp04", -4364.575f, 41.96442f, 4313.936f, FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_MexArmy04"), -4364.575f, 41.96442f, 4313.936f);
		Function_436(&Global_3422, 30, 1, "$/content/Mexico/Missions/Gun01/Gun01", 25, 1, 301, 5, "$/content/scripting/gringo/SimpleGringo/Gun_Camp01", -2695.355f, 31.217f, 4273.366f, FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_Gun01"), -2695.355f, 31.217f, 4273.366f);
		Function_436(&Global_3422, 32, 1, "$/content/Mexico/Missions/Gun03/Gun03", 30, 1, 301, 5, "$/content/scripting/gringo/SimpleGringo/Gun_Camp03", -2695.095f, 32.345f, 4286.654f, FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_Gun02"), -2694.746f, 32.158f, 4286.793f);
		Function_436(&Global_3422, 31, 1, "$/content/Mexico/Missions/Gun05/Gun05", 32, 1, 301, 5, "$/content/scripting/gringo/SimpleGringo/Gun_Camp05", -2695.355f, 31.217f, 4273.366f, FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_Gun05"), -2695.355f, 31.217f, 4273.366f);
		Function_436(&Global_3422, 33, 1, "$/content/Mexico/Missions/Gun02/Gun02", 31, 1, 301, 5, "$/content/scripting/gringo/SimpleGringo/Gun_Camp02", -2695.095f, 32.345f, 4286.654f, FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_Gun02"), -2694.746f, 32.158f, 4286.793f);
		Function_436(&Global_3422, 34, 1, "$/content/Mexico/Missions/MexGirl01/MexGirl01", 32, 1, 305, 8, "$/content/scripting/gringo/SimpleGringo/MexGirl_Camp01", -2146.062f, 18.239f, 4960.64f, FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_MexGirl"), -2146.062f, 18.239f, 4960.64f);
		Function_436(&Global_3422, 35, 1, "$/content/mexico/missions/mexgirl03/mexgirl03", 34, 1, 305, 8, "$/content/scripting/gringo/SimpleGringo/MexGirl_Camp03", -2146.062f, 18.239f, 4960.64f, FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_MexGirl"), -2146.062f, 18.239f, 4960.64f);
		Function_436(&Global_3422, 36, 1, "$/content/Mexico/Missions/MexArmy05/MexArmy05", 35, 1, 306, 6, "$/content/scripting/gringo/SimpleGringo/MexArmy_Camp05", -4364.587f, 39.488f, 4353.933f, FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_MexArmy05"), -4356.495f, 44.261f, 4342.515f);
		Function_436(&Global_3422, 37, 1, "$/content/Mexico/Missions/Rebel03/Rebel03", 36, 1, 310, 7, "$/content/scripting/gringo/SimpleGringo/Rebel_Camp03", -1477.918f, 16.75f, 3941.318f, FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_Rebel03"), -1465.541f, 16.54457f, 3946.458f);
		Function_436(&Global_3422, 38, 1, "$/content/Mexico/Missions/Rebel04/Rebel04", 36, 1, 305, 8, "$/content/scripting/gringo/SimpleGringo/Rebel_Camp04", -2221.41f, 18.668f, 4895.687f, FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_Rebel04"), -2221.41f, 18.668f, 4895.687f);
		Function_436(&Global_3422, 39, 1, "$/content/Mexico/Missions/Rebel02/Rebel02", 38, 1, 305, 8, "$/content/scripting/gringo/SimpleGringo/Rebel_Camp02", -2281.418f, 22.76f, 4946.628f, FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_Rebel02"), -2287.62f, 22.76f, 4958.25f);
		Function_437(&Global_3422, 40, 1, "$/content/Mexico/Missions/Rebel06/Rebel06", 39, 1, 310, 7, "", -1514.001f, 17.441f, 3906.868f, 0x40200000);
		Function_437(&Global_3422, 41, 1, "$/content/Mexico/Missions/Rebel05/Rebel05", 40, 1, 310, 7, "", -4340.172f, 27.215f, 4413.33f, 0x40200000);
		Function_433(&Global_3422, 34, 26);
		Function_433(&Global_3422, 36, 29);
		Function_433(&Global_3422, 40, 37);
		Function_433(&Global_3422, 40, 33);
		Function_432(&Global_3422, 27, 30);
		Function_432(&Global_3422, 28, 30);
		Function_432(&Global_3422, 29, 14);
		Function_432(&Global_3422, 36, 30);
		Function_432(&Global_3422, 32, 30);
		Function_432(&Global_3422, 31, 30);
		Function_432(&Global_3422, 34, 7);
		Function_430(&Global_3422, 25, 32768);
		Function_429(&Global_3422, 25);
		Function_437(&Global_3422, 42, 2, "$/content/North/Missions/FBI05/FBI05", 41, 1, 302, 10, "", 756.675f, 79.004f, 1234.998f, 4.0f);
		Function_437(&Global_3422, 43, 2, "$/content/North/Missions/Fbi01/Fbi01", 42, 1, 302, 10, "", 756.675f, 79.004f, 1234.998f, 4.0f);
		Function_437(&Global_3422, 44, 2, "$/content/North/Missions/Native03/Native03", 42, 1, 299, 9, "", 745.322f, 78.456f, 1276.929f, 0x40200000);
		Function_437(&Global_3422, 45, 2, "$/content/North/Missions/Anthro01/Anthro01", 44, 1, 299, 9, "", 745.322f, 78.456f, 1276.929f, 0x40200000);
		Function_437(&Global_3422, 46, 2, "$/content/North/Missions/Anthro03/Anthro03", 45, 1, 299, 9, "", 742.555f, 78.425f, 1272.168f, 0x40200000);
		Function_437(&Global_3422, 47, 2, "$/content/North/Missions/Fbi02/Fbi02", 43, 1, 302, 10, "", 756.139f, 78.525f, 1234.983f, 0x40200000);
		Function_434(&Global_3422, 48, 2, "$/content/North/Missions/FBI04/FBI04", 47, 1, -309.2459f, 141.4889f, 1696.795f);
		Function_433(&Global_3422, 47, 46);
		Function_432(&Global_3422, 43, 30);
		Function_432(&Global_3422, 47, 30);
		Function_432(&Global_3422, 48, 30);
		Function_432(&Global_3422, 42, 30);
		Function_432(&Global_3422, 45, 30);
		Function_432(&Global_3422, 46, 48);
		Function_432(&Global_3422, 44, 30);
		Function_436(&Global_3422, 49, 3, "$/content/North/Missions/Home01/Home01", 48, 1, 314, 11, "", -113.859f, 118.869f, 1387.897f, FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_Home01"), -113.859f, 118.869f, 1387.897f);
		Function_436(&Global_3422, 55, 3, "$/content/North/Missions/Home02/Home02_Ranch01/Home02_Ranch01", 49, 1, 312, 13, "$/content/scripting/gringo/SimpleGringo/Home02Ranch_Camp01", -80.491f, 117.248f, 1395.851f, FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_Home02Ranch01"), -76.984f, 116.861f, 1395.305f);
		Function_436(&Global_3422, 56, 3, "$/content/North/Missions/Home02/Home02_Ranch03/Home02_Ranch03", 55, 1, 312, 13, "$/content/scripting/gringo/SimpleGringo/Home02Ranch_Camp03", -5.259f, 130.659f, 1445.75f, FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_Home02Ranch03"), -5.259f, 130.659f, 1445.75f);
		Function_437(&Global_3422, 50, 3, "$/content/North/Missions/Home02/Home02_Wife02/Home02_Wife02", 49, 1, 314, 11, "$/content/scripting/gringo/SimpleGringo/Home02Wife_Camp02", -111.359f, 119.489f, 1369.446f, 0x40200000);
		Function_437(&Global_3422, 51, 3, "$/content/North/Missions/Home02/Home02_Wife03/Home02_Wife03", 50, 1, 314, 11, "$/content/scripting/gringo/SimpleGringo/Home02Wife_Camp03", -116.472f, 119.446f, 1374.421f, 0x40200000);
		Function_436(&Global_3422, 52, 3, "$/content/North/Missions/Home02/Home02_Son01/Home02_Son01", 49, 1, 313, 12, "$/content/scripting/gringo/SimpleGringo/Home02Son_Camp01", -61.155f, 116.688f, 1385.995f, FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_Home02Son01"), -57.72f, 116.695f, 1391.078f);
		Function_436(&Global_3422, 53, 3, "$/content/North/Missions/Home02/Home02_Son02/Home02_Son02", 52, 1, 313, 12, "$/content/scripting/gringo/SimpleGringo/Home02Son_Camp02", -101.336f, 117.748f, 1404.77f, FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_Home02Son02"), -99.05f, 118.72f, 1405.5f);
		Function_437(&Global_3422, 54, 3, "$/content/North/Missions/Home02/Home02_Son03/Home02_Son03", 53, 1, 313, 12, "", -71.003f, 117.865f, 1380.745f, 0x40200000);
		Function_437(&Global_3422, 57, 3, "$/content/North/Missions/Home03/Home03", 56, 1, 313, 12, "$/content/scripting/gringo/SimpleGringo/Home_Camp03", -73.952f, 116.861f, 1407.201f, 0x40200000);
		Function_433(&Global_3422, 57, 51);
		Function_433(&Global_3422, 57, 54);
		Function_432(&Global_3422, 55, 12);
		Function_432(&Global_3422, 56, 15);
		Function_432(&Global_3422, 52, 15);
		Function_432(&Global_3422, 53, 15);
		Function_432(&Global_3422, 54, 15);
		Function_432(&Global_3422, 50, 15);
		Function_432(&Global_3422, 51, 15);
		Function_432(&Global_3422, 57, 15);
		Function_430(&Global_3422, 52, 65536);
		Function_234(&Global_3422[4940] + 128, 16);
		Function_431(&Global_3422, 55, 3, 1);
		Function_431(&Global_3422, 54, 3, 1);
		Function_428(&Global_3422, 55);
		Function_428(&Global_3422, 56);
		Function_428(&Global_3422, 52);
		Function_428(&Global_3422, 53);
		Function_428(&Global_3422, 50);
		Function_428(&Global_3422, 51);
		Function_428(&Global_3422, 57);
	}
	if (Global_3381)
	{
		Function_394(Global_6267, 1);
		Function_389(0);
	}
	else
	{
		bVar0 = Function_387();
		if (bVar0 != 4294967295)
		{
			if (Function_111(bVar0))
			{
				Function_303(25, &Global_3422[bVar040] + 12, 0, 1);
				Function_305(25, bVar0, 0);
				Function_329(10, 1, 0, 0);
			}
		}
		else
		{
			bVar0 = Function_187(25);
			if (Function_111(bVar0))
			{
				Function_303(25, &Global_3422[bVar040] + 12, 0, 1);
			}
			else
			{
				Function_303(25, "fav_non", 0, 1);
			}
		}
		bVar0 = Function_187(18);
		if (Function_111(bVar0))
		{
			Function_303(18, &Global_3422[bVar040] + 12, 0, 1);
		}
		else
		{
			Function_303(18, "fav_non", 0, 1);
		}
		bVar0 = Function_187(24);
		if (Function_111(bVar0))
		{
			Function_303(24, &Global_3422[bVar040] + 12, 0, 1);
		}
		else
		{
			Function_303(24, "fav_non", 0, 1);
		}
		Function_385();
	}
	Function_383();
	ENABLE_JOURNAL_REPLAY(1);
	Global_3374 = 1;
	return;
}

void Function_383() //Position: 0x171EE / 94702
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
					if (Function_109(25, 0))
					{
						Global_26003[iVar0] = 1;
						DISABLE_WORLD_SECTOR("ramitaBayaBefore");
						ENABLE_WORLD_SECTOR("ramitaBayaAfter");
						ENABLE_CURVE("rsdROAD_frb_road", 1);
						ENABLE_CURVE("rsdROAD_fom_frb_road", 1);
						ENABLE_CURVE("rsdGPSTRAIL_curve221", 1);
					}
					break;
				
				case 0x00000001:
					if (Function_109(25, 0) && !Function_109(26, 0))
					{
						Global_26003[iVar0] = 1;
						DISABLE_WORLD_SECTOR("butterBridgeA");
						DISABLE_WORLD_SECTOR("butterBridgeC");
						DISABLE_WORLD_SECTOR("butterBridgeD");
						ENABLE_WORLD_SECTOR("butterBridgeB");
						ENABLE_CURVE("rsdGPSTRAIL_butterBridge_path", 1);
					}
					break;
				
				case 0x00000002:
					if ((Function_109(25, 0) && Function_109(26, 0)) && !Function_109(29, 0))
					{
						Global_26003[iVar0] = 1;
						DISABLE_WORLD_SECTOR("butterBridgeB");
						DISABLE_WORLD_SECTOR("butterBridgeA");
						DISABLE_WORLD_SECTOR("butterBridgeC");
						ENABLE_WORLD_SECTOR("butterBridgeD");
						ENABLE_CURVE("rsdGPSTRAIL_butterBridge_path", 0);
					}
					break;
				
				case 0x00000003:
					if ((Function_109(25, 0) && Function_109(26, 0)) && Function_109(29, 0))
					{
						Global_26003[iVar0] = 1;
						DISABLE_WORLD_SECTOR("butterBridgeA");
						DISABLE_WORLD_SECTOR("butterBridgeD");
						DISABLE_WORLD_SECTOR("butterBridgeC");
						ENABLE_WORLD_SECTOR("butterBridgeB");
						ENABLE_CURVE("rsdGPSTRAIL_butterBridge_path", 1);
					}
					break;
				
				case 0x00000004:
					if (Function_109(41, 0))
					{
						Global_26003[iVar0] = 1;
						DISABLE_WORLD_SECTOR("tannersSpanBefore");
						ENABLE_WORLD_SECTOR("tannersSpanAfter");
					}
					break;
				
				case 0x00000005:
					if (Function_109(41, 0))
					{
						Global_26003[iVar0] = 1;
						DISABLE_WORLD_SECTOR("dixonCrossingBefore");
						ENABLE_WORLD_SECTOR("dixonCrossingAfter");
						ENABLE_CURVE("rsdROAD_thi_blk_road", 1);
						ENABLE_CURVE("rsdROAD_thi_blk_roaddetachedCurve2", 1);
						ENABLE_CURVE("rsdGPSTRAIL_curve124", 1);
						ENABLE_CURVE("rsdGPSTRAIL_curve132", 1);
					}
					break;
				
				case 0x00000006:
					if (Function_109(22, 0) && !Function_109(41, 0))
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
					if (Function_109(22, 0) && Function_109(41, 0))
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
					if (Function_109(34, 0))
					{
						Global_26003[iVar0] = 1;
						DISABLE_WORLD_SECTOR("campoMiradaBefore");
						ENABLE_WORLD_SECTOR("campoMiradaAfter");
					}
					break;
				
				case 0x00000009:
					if (Function_109(26, 0) || Function_109(30, 0))
					{
						Global_26003[iVar0] = 1;
						DISABLE_WORLD_SECTOR("fronteraBridgeBefore");
						ENABLE_WORLD_SECTOR("fronteraBridgeAfter");
					}
					break;
				
				case 0x0000000A:
					if (Function_109(40, 0))
					{
						Global_26003[iVar0] = 1;
						DISABLE_CHILD_SECTOR("fod_gates01x");
						ENABLE_CHILD_SECTOR("fod_gates02x");
						ENABLE_CHILD_SECTOR("fod_gates02Doors01x");
					}
					break;
				
				case 0x0000000B:
					if (Function_109(48, 0))
					{
						Global_26003[iVar0] = 1;
						DISABLE_CHILD_SECTOR("coc_fence01x");
						ENABLE_CHILD_SECTOR("coc_fence01bx");
						ENABLE_CHILD_SECTOR("coc_gates02x");
						DISABLE_CHILD_SECTOR("coc_gates01x");
					}
					break;
				
				case 0x0000000C:
					if (Function_109(41, 0))
					{
						Global_26003[iVar0] = 1;
						DISABLE_WORLD_SECTOR("masonBridgeBefore");
						ENABLE_WORLD_SECTOR("masonBridgeAfter");
					}
					break;
				
				case 0x0000000D:
					if (Function_109(41, 0))
					{
						Global_26003[iVar0] = 1;
						DISABLE_CHILD_SECTOR("lmf_troughBefore01x");
						ENABLE_CHILD_SECTOR("lmf_troughAfter01x");
					}
					break;
				
				case 0x0000000E:
					break;
				
				case 0x0000000F:
					if (Function_109(21, 0))
					{
						Global_26003[iVar0] = 1;
						DISABLE_CHILD_SECTOR("rwf_barn01xprops02x");
						ENABLE_CHILD_SECTOR("rwf_barn01xprops01x");
					}
					break;
				
				case 0x00000010:
					if (Function_109(57, 0) || Function_384(57))
					{
						Global_26003[iVar0] = 1;
						DISABLE_CHILD_SECTOR("beh_silo02x");
						ENABLE_CHILD_SECTOR("beh_silo01x");
					}
					break;
				
				case 0x00000011:
					if (Function_109(48, 0))
					{
						Global_26003[iVar0] = 1;
						DISABLE_CHILD_SECTOR("beh_house02x");
						DISABLE_CHILD_SECTOR("beh_house02props01x");
						ENABLE_CHILD_SECTOR("beh_house01x");
						ENABLE_CHILD_SECTOR("beh_house01props01x");
					}
					break;
				
				case 0x00000012:
					if (Function_109(28, 0))
					{
						Global_26003[iVar0] = 1;
						DISABLE_CHILD_SECTOR("tor_militaryCamp01x");
						ENABLE_CHILD_SECTOR("tor_militaryCamp02x");
					}
					break;
				
				case 0x00000013:
					if (Function_109(41, 0))
					{
						Global_26003[iVar0] = 1;
						DISABLE_CHILD_SECTOR("esc_villaWall04x");
						ENABLE_CHILD_SECTOR("esc_villaWall05x");
					}
					break;
				
				case 0x00000014:
					if (Function_123(37))
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
					if (Function_109(57, 0))
					{
						Global_26003[iVar0] = 1;
						ENABLE_CHILD_SECTOR("beh_grave02x");
						ENABLE_CHILD_SECTOR("beh_grave03x");
						DISABLE_CHILD_SECTOR("beh_grave01x");
					}
					break;
				
				case 0x00000018:
					if (Function_109(25, 0))
					{
						Global_26003[iVar0] = 1;
						ENABLE_CURVE("rsdGPSTRAIL_elm_cas_path", 1);
						ENABLE_CURVE("rsdGPSTRAIL_curve495", 1);
						ENABLE_CURVE("rsdGPSTRAIL_elm_cas_pathdetachedCurve12", 1);
						ENABLE_CURVE("rsdGPSTRAIL_elm_cas_pathdetachedCurve13", 1);
						ENABLE_CURVE("rsdGPSTRAIL_elm_cas_loop1", 1);
						ENABLE_CURVE("rsdTRAIL_cas_ram_pathdetachedCurve10", 1);
						ENABLE_CURVE("rsdTRAIL_cas_ram_pathdetachedCurve8", 1);
						ENABLE_CURVE("rsdTRAIL_cas_ram_pathdetachedCurve6", 1);
						ENABLE_CURVE("rsdTRAIL_las_nos_pathdetachedCurve2", 1);
						ENABLE_CURVE("rsdROAD_las_esc_roaddetachedCurve10detachedCurve1", 1);
						ENABLE_CURVE("rsdTRAIL_curve44", 1);
						ENABLE_CURVE("rsdROAD_las_esc_roaddetachedCurve18", 1);
						ENABLE_CURVE("rsdTRAIL_cas_ram_pathdetachedCurve2", 1);
						ENABLE_CURVE("rsdTRAIL_cas_ram_pathdetachedCurve4detachedCurve2", 1);
						ENABLE_CURVE("rsdROAD_las_roaddetachedCurve4", 1);
						ENABLE_CURVE("rsdROAD_las_roaddetachedCurve2", 1);
						ENABLE_CURVE("rsdROAD_curve69", 1);
						ENABLE_CURVE("rsdROAD_las_road", 1);
						ENABLE_CURVE("rsdROAD_frb_road", 1);
						ENABLE_CURVE("rsdGPSTRAIL_curve98", 1);
						ENABLE_CURVE("rsdGPSROAD_elm_cas_roaddetachedCurve4detachedCurve2", 1);
						ENABLE_CURVE("rsdGPSROAD_elm_cas_roaddetachedCurve4", 1);
						ENABLE_CURVE("rsdGPSTRAIL_elm_loop01_pathdetachedCurve2detachedCurve2", 1);
						ENABLE_CURVE("rsdGPSTRAIL_curve634", 1);
						ENABLE_CURVE("rsdGPSTRAIL_curve635", 1);
						ENABLE_CURVE("rsdGPSTRAIL_curve636", 1);
						ENABLE_CURVE("rsdTRAIL_curve637", 1);
						ENABLE_CURVE("rsdTRAIL_curve638", 1);
						ENABLE_CURVE("rsdTRAIL_cas_loop04_pathdetachedCurve2", 1);
						ENABLE_CURVE("rsdTRAIL_curve70", 1);
						ENABLE_CURVE("rsdTRAIL_cas_loop04_path", 1);
						ENABLE_CURVE("rsdTRAIL_cas_loop05_pathdetachedCurve4", 1);
						ENABLE_CURVE("rsdTRAIL_cas_loop05_pathdetachedCurve2", 1);
						ENABLE_CURVE("rsdTRAIL_cas_loop01_pathdetachedCurve2detachedCurve2", 1);
						ENABLE_CURVE("rsdTRAIL_chu_loop01_pathdetachedCurve2detachedCurve2detachedCurve2detachedCurve2", 1);
						ENABLE_CURVE("rsdTRAIL_chu_loop01_pathdetachedCurve2detachedCurve2detachedCurve2", 1);
						ENABLE_CURVE("rsdTRAIL_chu_loop01_pathdetachedCurve2detachedCurve2", 1);
						ENABLE_CURVE("rsdTRAIL_chu_loop01_pathdetachedCurve2", 1);
						ENABLE_CURVE("rsdTRAIL_chu_loop01_pathdetachedCurve4", 1);
						ENABLE_CURVE("rsdTRAIL_elm_cas_pathdetachedCurve10", 1);
						ENABLE_CURVE("rsdTRAIL_elm_cas_pathdetachedCurve8", 1);
						ENABLE_CURVE("rsdTRAIL_cas_loop03_path1", 1);
						ENABLE_CURVE("rsdTRAIL_cas_loop03_path", 1);
						ENABLE_CURVE("rsdTRAIL_elm_cas_pathdetachedCurve6", 1);
						ENABLE_CURVE("rsdTRAIL_elm_cas_pathdetachedCurve4", 1);
						ENABLE_CURVE("rsdTRAIL_elm_cas_pathdetachedCurve2", 1);
						ENABLE_CURVE("rsdTRAIL_cas_loop02_path", 1);
						ENABLE_CURVE("rsdTRAIL_cas_loop01_path1", 1);
						ENABLE_CURVE("rsdTRAIL_cas_loop01_path", 1);
						ENABLE_CURVE("rsdTRAIL_cas_loop03_path1detachedCurve4", 1);
						ENABLE_CURVE("rsdTRAIL_cas_loop03_pathdetachedCurve4", 1);
						ENABLE_CURVE("rsdTRAIL_cas_loop03_pathdetachedCurve2", 1);
						ENABLE_CURVE("rsdTRAIL_cas_loop03_path1detachedCurve2", 1);
						ENABLE_CURVE("rsdTRAIL_chu_loop01_path3detachedCurve2", 1);
						ENABLE_CURVE("rsdTRAIL_chu_loop01_path3", 1);
						ENABLE_CURVE("rsdTRAIL_cas_loop09_path", 1);
						ENABLE_CURVE("rsdTRAIL_cas_loop06__path", 1);
						ENABLE_CURVE("rsdTRAIL_cas_loop01_path1detachedCurve4", 1);
						ENABLE_CURVE("rsdTRAIL_cas_loop01_pathdetachedCurve4", 1);
						ENABLE_CURVE("rsdTRAIL_cas_loop01_path1detachedCurve2", 1);
						ENABLE_CURVE("rsdTRAIL_cas_loop01_path1detachedCurve6", 1);
						ENABLE_CURVE("rsdTRAIL_cas_loop07_pathdetachedCurve2detachedCurve2", 1);
						ENABLE_CURVE("rsdTRAIL_cas_loop07_pathdetachedCurve2", 1);
						ENABLE_CURVE("rsdTRAIL_cas_loop07_path", 1);
						ENABLE_CURVE("rsdTRAIL_cas_loop02_path1", 1);
						ENABLE_CURVE("rsdTRAIL_cas_ram_pathdetachedCurve4", 1);
						ENABLE_CURVE("rsdTRAIL_cas_loop02_path1detachedCurve4", 1);
						ENABLE_CURVE("rsdTRAIL_cas_loop02_path1detachedCurve2", 1);
						ENABLE_CURVE("rsdROAD_las_esc_roaddetachedCurve20detachedCurve2", 1);
						ENABLE_CURVE("rsdROAD_las_esc_roaddetachedCurve16", 1);
						ENABLE_CURVE("rsdROAD_las_esc_roaddetachedCurve12", 1);
						ENABLE_CURVE("rsdROAD_las_esc_roaddetachedCurve14", 1);
						ENABLE_CURVE("rsdGPSTRAIL_curve163", 1);
						ENABLE_CURVE("rsdTRAIL_curve297", 1);
						ENABLE_CURVE("rsdTRAIL_curve71", 1);
						ENABLE_CURVE("rsdTRAIL_curve72", 1);
						ENABLE_CURVE("rsdTRAIL_cas_ram_path", 1);
						ENABLE_CURVE("rsdTRAIL_cas_loop04_pathdetachedCurve2detachedCurve2", 1);
						ENABLE_CURVE("rsdTRAIL_cas_loop05_path", 1);
						ENABLE_CURVE("rsdTRAIL_cas_loop08_path", 1);
						ENABLE_CURVE("rsdGPSTRAIL_curve77", 1);
						ENABLE_CURVE("rsdGPSTRAIL_curve78", 1);
						ENABLE_CURVE("rsdGPSTRAIL_curve78", 1);
						ENABLE_CURVE("rsdGPSTRAIL_curve79", 1);
						ENABLE_CURVE("rsdGPSTRAIL_elm_loop01_pathdetachedCurve2detachedCurve4", 1);
						ENABLE_CURVE("rsdGPSTRAIL_elm_loop01_pathdetachedCurve2", 1);
						ENABLE_CURVE("rsdGPSTRAIL_elm_loop01_path", 1);
						ENABLE_CURVE("rsdGPSTRAIL_elm_loop02_path", 1);
						ENABLE_CURVE("rsdROAD_elm_cas_roaddetachedCurve8", 1);
						ENABLE_CURVE("rsdROAD_elm_cas_roaddetachedCurve6", 1);
						ENABLE_CURVE("rsdROAD_las_esc_roaddetachedCurve20", 1);
					}
					break;
				
				case 0x00000019:
					if (Function_109(32, 0))
					{
						Global_26003[iVar0] = 1;
						ENABLE_CHILD_SECTOR("emt_caveDoor02x");
						DISABLE_CHILD_SECTOR("emt_caveDoor01x");
					}
					break;
				
				case 0x0000001A:
					if (Function_109(20, 0))
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

bool Function_384(int iParam0) //Position: 0x189E6 / 100838
{
	int iVar0;
	
	if (!Function_111(iParam0))
	{
		return 0;
	}
	iVar0 = Function_110(iParam0);
	if (!Function_98(Function_110(iParam0)))
	{
		return 0;
	}
	if (StackVal == 2)
	{
		return 1;
	}
	return 0;
}

void Function_385() //Position: 0x18A1C / 100892
{
	int iVar0;
	int iVar1;
	
	if (!Function_111(Global_6269))
	{
		return;
	}
	iVar0 = Function_187(24);
	iVar1 = Function_110(Global_6269);
	if (!Function_111(iVar0) && Function_386(iVar1) < 0)
	{
		Function_305(24, Global_6269, 0);
		Function_303(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	else if (StackVal <= Function_386(Function_110(iVar0)))
	{
		Function_305(24, Global_6269, 0);
		Function_303(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	return;
}

int Function_386(int iParam0) //Position: 0x18A9C / 101020
{
	if (!Function_98(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

var Function_387() //Position: 0x18AB6 / 101046
{
	struct<145> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	iVar44 = Var0.f_136;
	Function_305(11, Var0.f_140, 0);
	Function_388(Function_110(Global_6269), Var0.f_144);
	if (iVar44 != 4294967295)
	{
	}
	return iVar44;
}

void Function_388(int iParam0, int iParam1) //Position: 0x18AF3 / 101107
{
	if (!Function_98(iParam0))
	{
		return;
	}
	Global_13172[iParam011].f_8 = iParam1;
	return;
}

void Function_389(bool bParam0) //Position: 0x18B0E / 101134
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	struct<8> Var3;
	struct<8> Var11;
	
	iVar0 = 0;
	while (iVar0 <= Global_25986)
	{
		if ((!Global_25986[iVar0] && (!bParam0 || !Function_207())) && !bVar1)
		{
			switch (iVar0)
			{
				case 0x00000000:
					if (Function_109(2, 0))
					{
						bVar1 = false;
						Global_25986[iVar0] = 1;
						SET_DISABLE_DEADEYE(0, 0);
						SET_DEADEYE_MULTILOCK_ENABLE(0, 0);
						SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
						Function_393(390, 3.0f);
						Function_305(390, 1, bParam0);
					}
					break;
				
				case 0x00000001:
					if (Function_109(11, 0))
					{
						bVar1 = false;
						Global_25986[iVar0] = 1;
						SET_DISABLE_DEADEYE(0, 0);
						SET_DEADEYE_MULTILOCK_ENABLE(0, 1);
						SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
						Function_393(390, 3.0f);
						Function_305(390, 2, bParam0);
					}
					break;
				
				case 0x00000002:
					if (Function_109(30, 0))
					{
						bVar1 = false;
						Global_25986[iVar0] = 1;
						SET_DISABLE_DEADEYE(0, 0);
						SET_DEADEYE_MULTILOCK_ENABLE(0, 1);
						SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
						Function_393(390, 3.0f);
						Function_305(390, 3, bParam0);
					}
					break;
				
				case 0x00000003:
					Global_25986[iVar0] = 1;
					break;
				
				case 0x00000004:
					if (Function_109(4, 0))
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
					if (Function_109(2, 0))
					{
						Global_25986[iVar0] = 1;
						bVar1 = true;
						bVar2 = true;
						strcpy(&Var3, "shop_feature_1", 32);
						strcpy(&Var11, "shop_feature_2", 32);
					}
					break;
				
				case 0x00000006:
					if (Function_109(2, 0))
					{
						Global_25986[iVar0] = 1;
						bVar1 = false;
					}
					break;
				
				case 0x00000007:
					if (Function_109(2, 0))
					{
						Global_25986[iVar0] = 1;
						bVar1 = false;
					}
					break;
				
				case 0x00000008:
					if (Function_109(37, 0))
					{
						Global_25986[iVar0] = 1;
					}
					break;
				
				case 0x0000000A:
					if (Function_109(2, 0) && !Function_392("npressDemo"))
					{
						Global_25986[iVar0] = 1;
						bVar1 = false;
					}
					break;
				
				case 0x0000000B:
					if (Function_109(4, 0))
					{
						Global_25986[iVar0] = 1;
						bVar1 = true;
						bVar2 = true;
						strcpy(&Var3, "house_feature_1", 32);
						strcpy(&Var11, "house_feature_2", 32);
					}
					break;
				
				case 0x0000000C:
					if (!Function_384(1))
					{
						Function_391(1);
						Global_25986[iVar0] = 1;
					}
					else
					{
						Function_391(0);
						Global_25986[iVar0] = 0;
					}
					break;
				
				case 0x0000000D:
					if (Function_390(0) == 10)
					{
						Global_25986[iVar0] = 1;
						bVar1 = true;
						strcpy(&Var3, "nAM_SS_RW2", 32);
						SET_DEADEYE_POINT_MODIFIER(0, 2.0f);
					}
					break;
				
				case 0x0000000E:
					if (Function_390(1) > 5)
					{
						Global_25986[iVar0] = 1;
						bVar1 = true;
						strcpy(&Var3, "nAM_MH_RW1", 32);
						SET_WEAPONENUM_LOCKED(14, 0);
						Function_341(14, 1);
					}
					break;
				
				case 0x0000000F:
					if (((Function_390(0) != 10 && Function_390(1) != 10) && Function_390(2) != 10) && Function_390(3) != 10)
					{
						Global_25986[iVar0] = 1;
						bVar1 = true;
						strcpy(&Var3, "AM_LOTW_RW1", 32);
						SET_MAX_DEADEYE_POINTS(0, 150.0f);
						Function_325(11, 0, 1);
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
		Function_69(&Var3, 0x41200000, 1, 0, 2, 1, 0);
		if (bVar2)
		{
			stradd(&Var11, "_help", 32);
			Function_69(&Var11, 0x41200000, 1, 0, 2, 1, 0);
		}
	}
	return;
}

int Function_390(int iParam0) //Position: 0x18EDE / 102110
{
	if (Function_1() || Global_34165.f_44)
	{
		return StackVal;
	}
	return StackVal;
}

void Function_391(bool bParam0) //Position: 0x18F06 / 102150
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

bool Function_392(bool bParam0) //Position: 0x18F7A / 102266
{
	bool bVar0;
	
	bVar0 = _GET_PARAM_VALUE(cParam0, "blah");
	if (IS_STRING_VALID(bVar0))
	{
		return 1;
	}
	return 0;
}

int Function_393(int iParam0, int iParam1) //Position: 0x18F99 / 102297
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_64 = iParam1;
	return 1;
}

void Function_394(int iParam0, bool bParam1) //Position: 0x18FD9 / 102361
{
	if (!bParam1)
	{
		Global_13172[411].f_4 = StackVal;
	}
	if (Global_3422[iParam040].f_132 != 4294967295)
	{
		if (!Function_109(Global_3422[iParam040].f_132, 0))
		{
			Function_394(Global_3422[iParam040].f_132, 0);
		}
	}
	if (Global_3422[iParam040].f_136 != 4294967295)
	{
		if (!Function_109(Global_3422[iParam040].f_136, 0))
		{
			Function_394(Global_3422[iParam040].f_136, 0);
		}
	}
	if (Global_3422[iParam040].f_140 != 4294967295)
	{
		if (!Function_109(Global_3422[iParam040].f_140, 0))
		{
			Function_394(Global_3422[iParam040].f_140, 0);
		}
	}
	if (Global_3422[iParam040].f_144 != 4294967295)
	{
		if (!Function_109(Global_3422[iParam040].f_144, 0))
		{
			Function_394(Global_3422[iParam040].f_144, 0);
		}
	}
	if (!bParam1)
	{
		Global_13172[011].f_4 = StackVal;
		Function_395(StackVal, 0, 0, 1, 0);
	}
	return;
}

void Function_395(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4) //Position: 0x190C9 / 102601
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	
	Function_427(12);
	Function_252(2);
	Function_250((15 - Function_251(105)));
	if (Function_3(bParam0) == 1)
	{
		bVar2 = Function_358(bParam0);
		Function_356(&(Global_3422[bVar240]));
		Function_426(4194304);
		if (bParam3)
		{
			Function_321(bVar2, &uVar0, 0);
			if (!Global_3379)
			{
				Function_421(bVar2);
			}
		}
		else if (bParam4)
		{
			Function_321(bVar2, &uVar0, 0);
		}
		bVar1 = Function_420();
		if (bParam1)
		{
			Function_406(bVar2, bParam0, bVar1);
			Function_405();
		}
	}
	Function_398(bParam0, bParam1, uParam2, bVar1);
	if (Function_3(bParam0) == 1)
	{
		if (bParam1)
		{
			if (!Global_3381)
			{
				Function_397(bVar2, bVar1);
			}
		}
	}
	if ((!HAS_ACHIEVEMENT_BEEN_PASSED(33) && bParam1) && !bVar1)
	{
		if (Function_3(bParam0) == 1)
		{
			bVar2 = Function_358(bParam0);
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
	Function_396();
}

void Function_396() //Position: 0x191B6 / 102838
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 41)
	{
		AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(StackVal, Function_109(Global_63315[iVar02], 0));
		iVar0++;
	}
	return;
}

void Function_397(int iParam0, bool bParam1) //Position: 0x191E6 / 102886
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
							Function_43(Global_34573, 0x1000000, 3, 0);
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
							Function_43(Global_34573, 0x1000000, 3, 0);
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
							Function_43(Global_34573, 0x1000000, 3, 0);
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
							Function_43(Global_34573, 0x1000000, 3, 0);
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
							Function_43(Global_34573, 0x1000000, 3, 0);
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
							Function_43(Global_34573, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0xFFFFFFFF:
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(2))
			{
				Function_397(24, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(3))
			{
				Function_397(40, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(4))
			{
				Function_397(41, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(5))
			{
				Function_397(44, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(6))
			{
				Function_397(24, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(7))
			{
				Function_397(57, 0);
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

void Function_398(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x194DD / 103645
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	char* cVar11;
	int iVar12;
	int iVar13;
	struct<25> Var14;
	
	if (!Function_98(bParam0))
	{
		Function_292();
		return;
	}
	bVar0 = Function_3(bParam0);
	if (!bVar0 != 1)
	{
		Global_13172[bParam011].f_12++;
		if (Function_404())
		{
			PLAYSTAT_INT("HC_NONSTORY_DEED", bVar0);
		}
	}
	else
	{
		Global_6269 = Function_358(bParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_255(Global_6269) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_70(Global_6269) };
		}
		if (Function_404())
		{
			PLAYSTAT_STRING("HC_STORY_DEED", &Var7);
		}
		cVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		Function_385();
		CLEAR_JOURNAL_ENTRY(cVar11);
		SET_JOURNAL_ENTRY_PROGRESS(cVar11, -2.0f, 0, 0);
		if (!IS_JOURNAL_ENTRY_IN_LIST(cVar11, 1))
		{
			PREPEND_JOURNAL_ENTRY(cVar11, 1);
		}
	}
	if (Function_404())
	{
		Function_403();
	}
	Global_13172[bParam011].f_36 = GET_TIME_OF_DAY();
	if (StackVal == 2)
	{
		Function_291("DEED_COMPLETE", bParam0);
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
			Function_400(bParam0);
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
						switch (Function_358(bParam0))
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
			Function_256(1);
			Function_327(bParam2, iVar13);
		}
	}
	if (Global_3381 && bParam1)
	{
		*(&Var14 + 80) = 3;
		Var14.f_16 = 0;
		if (!bParam3)
		{
			Function_399(bParam0, &Var14);
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

void Function_399(int iParam0, int iParam1) //Position: 0x19731 / 104241
{
	iParam1->f_28 = Global_13172[iParam011].f_20;
	iParam1->f_32 = Global_13172[iParam011].f_24;
	iParam1->f_36 = Global_13172[iParam011].f_28;
	iParam1->f_40 = Global_13172[iParam011].f_32;
	return;
}

void Function_400(bool bParam0) //Position: 0x1976B / 104299
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
			bVar1 = Function_358(bParam0);
			if (bVar1 <= 1 && bVar1 >= 24)
			{
				Function_329(12, 1, 0, 0);
				Function_324(0, (bVar1 - 1));
			}
			else if (bVar1 <= 25 && bVar1 >= 41)
			{
				Function_329(13, 1, 0, 0);
				Function_324(1, (bVar1 - 25));
			}
			else if (bVar1 <= 42 && bVar1 >= 48)
			{
				Function_329(14, 1, 0, 0);
				Function_324(1, (bVar1 - 25));
			}
			else if (bVar1 <= 49 && bVar1 >= 57)
			{
				Function_329(15, 1, 0, 0);
				Function_324(1, (bVar1 - 49));
			}
			if (bVar1 <= 1 && bVar1 >= 57)
			{
				Function_329(9, 1, 0, 0);
			}
			break;
		
		case 0x00000002:
			switch (Function_358(bParam0))
			{
				case 0x00000000:
					if (Function_402(bParam0) == 1)
					{
						bVar0 = Function_401(bParam0);
						if (Function_161(bVar0))
						{
							if (bVar0 == Global_30723[5])
							{
								Function_324(4, 18);
							}
							else if (bVar0 == Global_30693[3])
							{
								Function_324(4, 10);
							}
							else if (bVar0 == Global_30723[6])
							{
								Function_324(4, 16);
							}
							else if (bVar0 == Global_30668[3])
							{
								Function_324(4, 6);
							}
							else if (bVar0 == Global_30640[13])
							{
								Function_324(4, 3);
							}
							else if (bVar0 == Global_30693[7])
							{
								Function_324(4, 11);
							}
							else if (bVar0 == Global_30640[6])
							{
								Function_324(4, 0);
							}
							else if (bVar0 == Global_30693[10])
							{
								Function_324(4, 15);
							}
							else if (bVar0 == Global_30693[8])
							{
								Function_324(4, 14);
							}
							else if (bVar0 == Global_30640[11])
							{
								Function_324(4, 2);
							}
							else if (bVar0 == Global_30668[6])
							{
								Function_324(4, 7);
							}
							else if (bVar0 == Global_30723[3])
							{
								Function_324(4, 17);
							}
							else if (bVar0 == Global_30685[5])
							{
								Function_324(4, 8);
							}
							else if (bVar0 == Global_30693[9])
							{
								Function_324(4, 13);
							}
							else if (bVar0 == Global_30693[11])
							{
								Function_324(4, 12);
							}
							else if (bVar0 == Global_30640[7])
							{
								Function_324(4, 1);
							}
							else if (bVar0 == Global_30679[3])
							{
								Function_324(4, 5);
							}
							else if (bVar0 == Global_30693[4])
							{
								Function_324(4, 9);
							}
							else if (bVar0 == Global_30658[7])
							{
								Function_324(4, 4);
							}
							else if (bVar0 == Global_30723[4])
							{
								Function_324(4, 19);
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
								Function_329(363, 1, 0, 0);
							}
							else if (bVar0 == Global_30621[1])
							{
								Function_329(364, 1, 0, 0);
							}
							else if (bVar0 == Global_30621[2])
							{
								Function_329(365, 1, 0, 0);
							}
						}
					}
					break;
			}
			break;
		
		case 0x00000003:
			if (Function_401(bParam0) == 0)
			{
				if (Function_402(bParam0) == 1)
				{
					Function_329(458, 1, 0, 0);
					bVar0 = Function_358(bParam0);
					if (Function_161(bVar0))
					{
						if (bVar0 == Global_30668[2])
						{
							Function_324(2, 10);
						}
						else if (bVar0 == Global_30658[2])
						{
							Function_324(2, 11);
						}
						else if (bVar0 == Global_30640[2])
						{
							Function_324(2, 12);
						}
						else if (bVar0 == Global_30658[0])
						{
							Function_324(2, 13);
						}
						else if (bVar0 == Global_30658[3])
						{
							Function_324(2, 14);
						}
						else if (bVar0 == Global_30685[2])
						{
							Function_324(2, 15);
						}
						else if (bVar0 == Global_30685[1])
						{
							Function_324(2, 16);
						}
						else if (bVar0 == Global_30679[1])
						{
							Function_324(2, 17);
						}
					}
				}
			}
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000006:
			if (Function_402(bParam0) == 1)
			{
				Function_329(400, 1, 0, 0);
			}
			switch (Function_358(bParam0))
			{
				case 0x00000001:
					Function_329(402, 1, 0, 0);
					if (Global_29006 == Global_30668[0])
					{
						Function_324(6, 5);
					}
					else if (Global_29006 == Global_30693[0])
					{
						Function_324(6, 6);
					}
					else if (Global_29006 == Global_30717[0])
					{
						Function_324(6, 7);
					}
					break;
				
				case 0x00000002:
					Function_329(403, 1, 0, 0);
					if (Global_29006 == Global_30640[1])
					{
						Function_324(6, 8);
					}
					else if (Global_29006 == Global_30693[0])
					{
						Function_324(6, 9);
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

int Function_401(bool bParam0) //Position: 0x19C47 / 105543
{
	if (!Function_4(bParam0))
	{
		return 4294967295;
	}
	return (SHIFT_RIGHT(Global_13172[bParam011], 4) && 255);
}

int Function_402(bool bParam0) //Position: 0x19C66 / 105574
{
	if (!Function_4(bParam0))
	{
		return 4294967295;
	}
	return Global_13172[bParam011].f_12;
}

void Function_403() //Position: 0x19C80 / 105600
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
	PLAYSTAT_INT("HC_MONEY", Function_187(0));
	PLAYSTAT_INT("HC_FAME", Function_187(3));
	PLAYSTAT_INT("HC_HONOR", Function_187(1));
	return;
}

bool Function_404() //Position: 0x19DD8 / 105944
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

void Function_405() //Position: 0x19E03 / 105987
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

void Function_406(bool bParam0, int iParam1, bool bParam2) //Position: 0x19E31 / 106033
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
	
	if (!Function_111(bParam0))
	{
		return;
	}
	if (!bParam2)
	{
		iVar14 = Function_302(bParam0);
		Global_34165.f_140 = (Global_34165.f_140 + (GET_CURRENT_GAME_TIME() - Global_34165.f_136));
		if (Global_13172[iParam111].f_32 != 0.0f || Global_34165.f_140 > Global_13172[iParam111].f_32)
		{
			Global_13172[iParam111].f_32 = Global_34165.f_140;
			cVar10 = { StackVal, StackVal, StackVal, Function_300(bParam0) };
			stradd(&cVar10, "_Float2", 16);
			UPDATE_PROFILE_STAT(&cVar10, Global_34165.f_140, 1);
		}
		switch (iVar14)
		{
			case 0x00000000:
				bVar0 = (Function_187(42) - Global_34165.f_116);
				bVar1 = (Function_187(27) - Global_34165.f_120);
				fVar7 = (TO_FLOAT(bVar0) / TO_FLOAT(bVar1));
				if (bVar0 >= Global_13172[iParam111].f_20)
				{
					Global_13172[iParam111].f_20 = bVar0;
					cVar10 = { StackVal, StackVal, StackVal, Function_300(bParam0) };
					stradd(&cVar10, "_Int1", 16);
					UPDATE_PROFILE_STAT(&cVar10, TO_FLOAT(bVar0), 1);
				}
			
			case 0x00000001:
				bVar2 = (CEIL(Function_280(49)) - Global_34165.f_124);
				bVar3 = (Function_187(49) - Global_34165.f_128);
				bVar8 = (TO_FLOAT(bVar3) / TO_FLOAT(bVar2));
				if (bVar8 < Global_13172[iParam111].f_28)
				{
					Global_13172[iParam111].f_28 = bVar8;
					cVar10 = { StackVal, StackVal, StackVal, Function_300(bParam0) };
					stradd(&cVar10, "_Float1", 16);
					UPDATE_PROFILE_STAT(&cVar10, bVar8, 1);
				}
				break;
			
			case 0x00000002:
				bVar4 = (Function_187(355) - Global_34165.f_116);
				bVar5 = Global_34165.f_124;
				bVar6 = Global_34165.f_128;
				bVar9 = (TO_FLOAT(bVar6) / TO_FLOAT(bVar5));
				if (bVar4 >= Global_13172[iParam111].f_20)
				{
					Global_13172[iParam111].f_20 = bVar4;
					cVar10 = { StackVal, StackVal, StackVal, Function_300(bParam0) };
					stradd(&cVar10, "_Int1", 16);
					UPDATE_PROFILE_STAT(&cVar10, TO_FLOAT(bVar4), 1);
				}
				if (bVar9 < Global_13172[iParam111].f_28)
				{
					Global_13172[iParam111].f_28 = bVar9;
					cVar10 = { StackVal, StackVal, StackVal, Function_300(bParam0) };
					stradd(&cVar10, "_Float1", 16);
					UPDATE_PROFILE_STAT(&cVar10, bVar9, 1);
				}
				bVar8 = bVar9;
				bVar0 = bVar4;
				break;
		}
		iVar15 = Function_419(bParam0, iVar14, Global_34165.f_140, bVar8, bVar0);
		if (iVar15 == 1)
		{
			Function_407(50, 1, 0);
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
			Var16 = { StackVal, StackVal, StackVal, Function_70(bParam0) };
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

void Function_407(int iParam0, bool bParam1, bool bParam2) //Position: 0x1A0CD / 106701
{
	int iVar0;
	bool bVar1;
	
	if (Function_418(0) && (!Global_3380 || iParam0 == 100))
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_404())
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
	iVar0 = Function_187(3);
	Function_416();
	if ((iVar0 + bVar1) >= 10000)
	{
		bVar1 = (10000 - iVar0);
	}
	if (bParam1)
	{
		Function_414(3, bVar1);
		if (!bParam2)
		{
			if (!Function_48(Global_76848, 4))
			{
				Function_43(Global_34573, 4, 3, 0);
			}
		}
	}
	else
	{
		Function_329(3, bVar1, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_279(3));
	iVar0 = Function_187(3);
	switch (Global_12976.f_156)
	{
		case 0x00000000:
			if (iVar0 > 1000)
			{
				Global_12976.f_156 = 1;
				Function_409(4, Function_413(Global_12976.f_156), 1);
				Function_408(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000001:
			if (iVar0 > 2000)
			{
				Global_12976.f_156 = 2;
				Function_409(4, Function_413(Global_12976.f_156), 1);
				Function_408(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000002:
			if (iVar0 > 4000)
			{
				Global_12976.f_156 = 3;
				Function_409(4, Function_413(Global_12976.f_156), 1);
				Function_408(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000003:
			if (iVar0 > 7000)
			{
				Global_12976.f_156 = 4;
				Function_409(4, Function_413(Global_12976.f_156), 1);
				Function_408(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000004:
			if (iVar0 > 10000)
			{
				Global_12976.f_156 = 5;
				Function_409(4, Function_413(Global_12976.f_156), 1);
				Function_408(Global_12976.f_152, Global_12976.f_156);
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

void Function_408(int iParam0, int iParam1) //Position: 0x1A29C / 107164
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

int Function_409(int iParam0, char* cParam1, bool bParam2) //Position: 0x1A4FA / 107770
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
	Function_303(iParam0, cParam1, 0, 1);
	iVar1 = Function_410();
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

int Function_410() //Position: 0x1A67F / 108159
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
	Function_411();
	return 0;
}

void Function_411() //Position: 0x1A71E / 108318
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
		Function_412(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_412(int iParam0) //Position: 0x1A7CD / 108493
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

var Function_413(int iParam0) //Position: 0x1A82B / 108587
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

int Function_414(int iParam0, bool bParam1) //Position: 0x1A8BA / 108730
{
	bool bVar0;
	int iVar1;
	
	Function_329(iParam0, bParam1, 0, 0);
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
	iVar1 = Function_415(iParam0, 4294967295);
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
	iVar1 = Function_410();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME+INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 1;
	return 1;
}

var Function_415(int iParam0, int iParam1) //Position: 0x1AA57 / 109143
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

void Function_416() //Position: 0x1AA98 / 109208
{
	Function_417(3, 0.0f);
	Function_393(3, 10000.0f);
	return;
}

int Function_417(int iParam0, int iParam1) //Position: 0x1AAAE / 109230
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_60 = iParam1;
	return 1;
}

var Function_418(int iParam0) //Position: 0x1AAEE / 109294
{
	return (*&Global_12976 + 104)[iParam0];
}

int Function_419(bool bParam0, int iParam1, float fParam2, bool bParam3, bool bParam4) //Position: 0x1AAFD / 109309
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

var Function_420() //Position: 0x1ACC5 / 109765
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	if (Var0.f_72)
	{
	}
	return Var0.f_72;
}

void Function_421(int iParam0) //Position: 0x1ACEA / 109802
{
	if (!Function_111(iParam0))
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
			Function_407(25, 1, 0);
			break;
		
		case 0x0000000B:
			Function_407(25, 1, 0);
			Function_425(1, 1);
			break;
		
		case 0x00000015:
			Function_425(50, 1);
			Function_407(250, 1, 0);
			Function_422(200, 1, 0);
			break;
		
		case 0x0000000A:
			Function_407(75, 1, 0);
			Function_422(100, 1, 0);
			break;
		
		case 0x00000017:
			Function_407(150, 1, 0);
			break;
		
		case 0x00000018:
			Function_425(50, 1);
			Function_407(150, 1, 0);
			break;
		
		case 0x00000007:
			Function_425(5, 1);
			Function_422(100, 1, 0);
			break;
		
		case 0x00000016:
			Function_407(75, 1, 0);
			Function_422(150, 1, 0);
			break;
		
		case 0x00000011:
			Function_425(5, 1);
			Function_407(200, 1, 0);
			break;
		
		case 0x00000001:
			Function_407(150, 1, 0);
			break;
		
		case 0x00000006:
			Function_422(150, 1, 0);
			break;
		
		case 0x00000010:
			Function_425(25, 1);
			Function_407(75, 1, 0);
			break;
		
		case 0x0000000D:
			Function_425(10, 1);
			Function_407(75, 1, 0);
			break;
		
		case 0x00000012:
			Function_407(50, 1, 0);
			Function_422(100, 1, 0);
			break;
		
		case 0x00000014:
			Function_407(150, 1, 0);
			break;
		
		case 0x00000003:
			Function_407(20, 1, 0);
			break;
		
		case 0x00000004:
			Function_422(50, 1, 0);
			break;
		
		case 0x00000008:
			Function_425(20, 1);
			Function_407(75, 1, 0);
			Function_422(100, 1, 0);
			break;
		
		case 0x00000009:
			Function_425(25, 1);
			Function_407(150, 1, 0);
			Function_422(100, 1, 0);
			break;
		
		case 0x0000000E:
			Function_425(10, 1);
			Function_407(150, 1, 0);
			Function_422(100, 1, 0);
			break;
		
		case 0x00000013:
			Function_407(250, 1, 0);
			break;
		
		case 0x00000002:
			Function_422(50, 1, 0);
			break;
		
		case 0x00000005:
			Function_422(100, 1, 0);
			Function_425(5, 1);
			break;
		
		case 0x0000000F:
			Function_425(3, 1);
			Function_407(200, 1, 0);
			break;
		
		case 0x00000025:
			Function_422(125, 1, 0);
			Function_407(150, 1, 0);
			break;
		
		case 0x0000001F:
			Function_425(50, 1);
			Function_407(100, 1, 0);
			Function_422(125, 1, 0);
			break;
		
		case 0x0000001A:
			Function_425(50, 1);
			Function_407(250, 1, 0);
			break;
		
		case 0x0000001D:
			Function_425(75, 1);
			Function_407(200, 1, 0);
			break;
		
		case 0x00000021:
			Function_407(150, 1, 0);
			break;
		
		case 0x00000022:
			Function_407(75, 1, 0);
			Function_422(100, 1, 0);
			break;
		
		case 0x00000024:
			Function_407(250, 1, 0);
			Function_422(50, 1, 0);
			break;
		
		case 0x00000020:
			Function_407(75, 1, 0);
			Function_422(50, 1, 0);
			break;
		
		case 0x00000023:
			Function_407(200, 1, 0);
			Function_422(50, 1, 0);
			break;
		
		case 0x0000001E:
			Function_407(75, 1, 0);
			Function_422(100, 1, 0);
			break;
		
		case 0x00000019:
			Function_407(150, 1, 0);
			break;
		
		case 0x0000001B:
			Function_425(50, 1);
			Function_407(250, 1, 0);
			break;
		
		case 0x0000001C:
			Function_425(100, 1);
			Function_407(300, 1, 0);
			break;
		
		case 0x00000026:
			Function_407(200, 1, 0);
			Function_422(125, 1, 0);
			break;
		
		case 0x00000027:
			Function_407(300, 1, 0);
			Function_422(125, 1, 0);
			break;
		
		case 0x00000028:
			Function_407(300, 1, 0);
			Function_422(125, 1, 0);
			break;
		
		case 0x00000029:
			Function_407(300, 1, 0);
			Function_422(125, 1, 0);
			break;
		
		case 0x00000030:
			Function_407(500, 1, 0);
			Function_422(250, 1, 0);
			break;
		
		case 0x0000002B:
			Function_407(150, 1, 0);
			Function_422(125, 1, 0);
			break;
		
		case 0x0000002E:
			Function_422(25, 1, 0);
			Function_425(100, 1);
			break;
		
		case 0x0000002A:
			Function_407(150, 1, 0);
			Function_422(25, 1, 0);
			break;
		
		case 0x0000002D:
			Function_422(25, 1, 0);
			break;
		
		case 0x0000002C:
			Function_422(25, 1, 0);
			break;
		
		case 0x0000002F:
			break;
		
		case 0x00000037:
			break;
		
		case 0x00000034:
			Function_422(150, 1, 0);
			break;
		
		case 0x00000031:
			Function_422(150, 1, 0);
			Function_425(100, 1);
			break;
		
		case 0x00000035:
			Function_422(150, 1, 0);
			break;
		
		case 0x00000036:
			Function_422(150, 1, 0);
			break;
		
		case 0x00000038:
			Function_422(150, 1, 0);
			Function_425(100, 1);
			break;
		
		case 0x00000032:
			Function_422(150, 1, 0);
			break;
		
		case 0x00000033:
			Function_422(150, 1, 0);
			break;
		
		case 0x00000039:
			break;
		
		default:
			break;
	}
	return;
}

void Function_422(int iParam0, bool bParam1, bool bParam2) //Position: 0x1B1A5 / 111013
{
	int iVar0;
	bool bVar1;
	
	if (Function_418(0) && !Global_3380)
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_404())
	{
		bVar1 = (bVar1 / 2);
	}
	if (Global_3380)
	{
		Global_12976.f_160 = (Global_12976.f_160 + iParam0);
		return;
	}
	iVar0 = Function_187(1);
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
			Function_414(1, bVar1);
			if (!bParam2)
			{
				if (!Function_48(Global_76848, 1))
				{
					Function_43(Global_34573, 1, 3, 0);
				}
			}
		}
		else
		{
			Function_424(1, (4294967295 * bVar1));
			if (!Global_3380)
			{
				if (!Function_48(Global_76848, 2))
				{
					Function_43(Global_34573, 2, 3, 0);
				}
			}
		}
	}
	else if (bVar1 >= 0)
	{
		Function_329(1, bVar1, 0, 0);
	}
	else
	{
		Function_308(1, (4294967295 * bVar1), 0);
	}
	if (Function_187(1) <= 4294962296)
	{
		Function_305(1, 4294962296, 0);
	}
	else if (Function_187(1) >= 5000)
	{
		Function_305(1, 5000, 0);
	}
	SET_PLAYER_CURRENT_HONOR(0, Function_279(1));
	iVar0 = Function_187(1);
	switch (Global_12976.f_152)
	{
		case 0x00000000:
			if (iVar0 >= 4294962796)
			{
				Global_12976.f_152 = 1;
				Function_409(2, Function_423(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_12976.f_152 = 0;
				Function_409(2, Function_423(Global_12976.f_152), 0);
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
				Function_409(2, Function_423(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_12976.f_152 = 1;
				Function_409(2, Function_423(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_12976.f_152 = 3;
				Function_409(2, Function_423(Global_12976.f_152), 1);
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
				Function_409(2, Function_423(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_12976.f_152 = 4;
				Function_409(2, Function_423(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_12976.f_152 = 3;
				Function_409(2, Function_423(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_12976.f_152 = 5;
				Function_409(2, Function_423(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_12976.f_152 = 4;
				Function_409(2, Function_423(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_12976.f_152 = 6;
				Function_409(2, Function_423(Global_12976.f_152), 1);
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
				Function_409(2, Function_423(Global_12976.f_152), 0);
			}
			break;
	}
	Function_408(Global_12976.f_152, Global_12976.f_156);
	return;
}

var Function_423(int iParam0) //Position: 0x1B4C6 / 111814
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

int Function_424(int iParam0, bool bParam1) //Position: 0x1B569 / 111977
{
	bool bVar0;
	int iVar1;
	
	Function_308(iParam0, bParam1, 0);
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
	iVar1 = Function_415(iParam0, 4294967295);
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
	iVar1 = Function_410();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME-INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 3;
	return 1;
}

int Function_425(bool bParam0, bool bParam1) //Position: 0x1B705 / 112389
{
	bool bVar0;
	
	bVar0 = Function_187(0);
	if ((Function_187(0) + bParam0) >= 999999)
	{
		bParam0 = (999999 - bVar0);
	}
	if (bParam0 >= 0)
	{
		Function_329(0, bParam0, 0, 0);
	}
	else
	{
		return 0;
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_187(0));
	if (bParam1)
	{
		PRINT_MONEY(&(Global_35278[020]), bVar0, bParam0, 7.5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	if (!Global_3384)
	{
		Function_329(597, bParam0, 0, 0);
	}
	if ((Function_187(597) + Function_187(450)) >= 10000)
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(24))
		{
			AWARD_ACHIEVEMENT(24);
		}
	}
	return 1;
}

void Function_426(bool bParam0) //Position: 0x1B7D0 / 112592
{
	bool bVar0;
	
	if (Function_19(bParam0, 1) && Function_19(Global_26119, 1))
	{
	}
	bVar0 = (Global_26119 && bParam0);
	Global_26119 = (Global_26119 - bVar0);
	Global_26119 |= 1073741824;
	return;
}

void Function_427(bool bParam0) //Position: 0x1B804 / 112644
{
	Global_12976.f_20 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 20, 0, 0, bParam0, 0);
	return;
}

void Function_428(var uParam0, int iParam1) //Position: 0x1B81F / 112671
{
	uParam0[iParam140]->f_128 |= 4194304;
	return;
}

void Function_429(var uParam0, int iParam1) //Position: 0x1B83A / 112698
{
	uParam0[iParam140]->f_128 |= 524288;
	return;
}

void Function_430(var uParam0, int iParam1, int iParam2) //Position: 0x1B855 / 112725
{
	uParam0[iParam140]->f_128 = (uParam0[iParam140]->f_128 || iParam2);
	return;
}

void Function_431(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x1B86E / 112750
{
	uParam0[iParam140]->f_128 |= 4096;
	if (bParam3)
	{
		uParam0[iParam140]->f_128 |= 1048576;
	}
	uParam0[iParam140]->f_148 = iParam2;
}

void Function_432(var uParam0, int iParam1, int iParam2) //Position: 0x1B8AE / 112814
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

void Function_433(var uParam0, int iParam1, bool bParam2) //Position: 0x1B955 / 112981
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

void Function_434(var uParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, vector3 vParam6) //Position: 0x1B9D7 / 113111
{
	struct<6> Var0;
	char* cVar6;
	int iVar7;
	int iVar8;
	
	if (Function_1())
	{
		return;
	}
	(*uParam0)[bParam140] = bParam2;
	uParam0[bParam140]->f_4 = Function_100(bParam2, bParam1, 1);
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
	if (!Function_71())
	{
		strcpy(uParam0[bParam140] + 12, "miss", 16);
	}
	else
	{
		strcpy(uParam0[bParam140] + 12, "ziss", 16);
	}
	straddi(uParam0[bParam140] + 12, bParam1, 16);
	*(uParam0[bParam140] + 52) = { StackVal, StackVal, vParam6 };
	uParam0[bParam140]->f_36 = 4294967295;
	if (Function_109(bParam1, 0))
	{
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_255(bParam1) };
		cVar6 = CREATE_JOURNAL_ENTRY(uParam0[bParam140] + 12, 1, false, &Var0);
		CLEAR_JOURNAL_ENTRY(cVar6);
		PREPEND_JOURNAL_ENTRY(cVar6, 1);
		SET_JOURNAL_ENTRY_PROGRESS(cVar6, -1.0f, 0, 0);
		SET_JOURNAL_ENTRY_UPDATED(cVar6, 0);
		if (Function_109(bParam1, 1))
		{
			iVar7 = Function_302(bParam1);
			iVar8 = Function_419(StackVal, StackVal, StackVal, bParam1, Global_13172[Global_13172[Global_13172[iVar711].f_3211].f_2811].f_20);
			SET_JOURNAL_ENTRY_TROPHY(cVar6, iVar8);
			Function_435(bParam1);
		}
	}
}

void Function_435(bool bParam0) //Position: 0x1BB74 / 113524
{
	char* cVar0[16];
	int iVar4;
	int iVar5;
	
	if (!Function_111(bParam0))
	{
		return;
	}
	iVar4 = StackVal;
	iVar5 = Function_302(bParam0);
	cVar0 = { StackVal, StackVal, StackVal, Function_300(bParam0) };
	stradd(&cVar0, "_Float2", 16);
	UPDATE_PROFILE_STAT(&cVar0, Global_13172[iVar411].f_32, 1);
	switch (iVar5)
	{
		case 0x00000000:
			cVar0 = { StackVal, StackVal, StackVal, Function_300(bParam0) };
			stradd(&cVar0, "_Int1", 16);
			UPDATE_PROFILE_STAT(&cVar0, TO_FLOAT(Global_13172[iVar411].f_20), 1);
		
		case 0x00000001:
			cVar0 = { StackVal, StackVal, StackVal, Function_300(bParam0) };
			stradd(&cVar0, "_Float1", 16);
			UPDATE_PROFILE_STAT(&cVar0, Global_13172[iVar411].f_28, 1);
			break;
		
		case 0x00000002:
			cVar0 = { StackVal, StackVal, StackVal, Function_300(bParam0) };
			stradd(&cVar0, "_Int1", 16);
			UPDATE_PROFILE_STAT(&cVar0, TO_FLOAT(Global_13172[iVar411].f_20), 1);
			cVar0 = { StackVal, StackVal, StackVal, Function_300(bParam0) };
			stradd(&cVar0, "_Float1", 16);
			UPDATE_PROFILE_STAT(&cVar0, Global_13172[iVar411].f_28, 1);
			break;
	}
	return;
}

void Function_436(var uParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4, int iParam5, int iParam6, int iParam7, bool bParam8, vector3 vParam9, bool bParam12, vector3 vParam13) //Position: 0x1BC75 / 113781
{
	struct<6> Var0;
	char* cVar6;
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
	uParam0[bParam140]->f_4 = Function_100(bParam2, bParam1, 1);
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
	if (!Function_71())
	{
		strcpy(uParam0[bParam140] + 12, "miss", 16);
	}
	else
	{
		strcpy(uParam0[bParam140] + 12, "ziss", 16);
	}
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
	if (Function_109(bParam1, 0))
	{
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_255(bParam1) };
		cVar6 = CREATE_JOURNAL_ENTRY(uParam0[bParam140] + 12, 1, false, &Var0);
		CLEAR_JOURNAL_ENTRY(cVar6);
		PREPEND_JOURNAL_ENTRY(cVar6, 1);
		SET_JOURNAL_ENTRY_PROGRESS(cVar6, -1.0f, 0, 0);
		SET_JOURNAL_ENTRY_UPDATED(cVar6, 0);
		if (Function_109(bParam1, 1))
		{
			iVar7 = Function_302(bParam1);
			iVar8 = Function_419(StackVal, StackVal, StackVal, bParam1, Global_13172[Global_13172[Global_13172[iVar711].f_3211].f_2811].f_20);
			SET_JOURNAL_ENTRY_TROPHY(cVar6, iVar8);
			Function_435(bParam1);
		}
	}
}

void Function_437(var uParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, vector3 vParam9, int iParam12) //Position: 0x1BE51 / 114257
{
	struct<6> Var0;
	char* cVar6;
	int iVar7;
	int iVar8;
	
	if (Function_1())
	{
		return;
	}
	(*uParam0)[bParam140] = bParam2;
	uParam0[bParam140]->f_4 = Function_100(bParam2, bParam1, 1);
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
	if (!Function_71())
	{
		strcpy(uParam0[bParam140] + 12, "miss", 16);
	}
	else
	{
		strcpy(uParam0[bParam140] + 12, "ziss", 16);
	}
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
	if (Function_109(bParam1, 0))
	{
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_255(bParam1) };
		cVar6 = CREATE_JOURNAL_ENTRY(uParam0[bParam140] + 12, 1, false, &Var0);
		CLEAR_JOURNAL_ENTRY(cVar6);
		PREPEND_JOURNAL_ENTRY(cVar6, 1);
		SET_JOURNAL_ENTRY_PROGRESS(cVar6, -1.0f, 0, 0);
		SET_JOURNAL_ENTRY_UPDATED(cVar6, 0);
		if (Function_109(bParam1, 1))
		{
			iVar7 = Function_302(bParam1);
			iVar8 = Function_419(StackVal, StackVal, StackVal, bParam1, Global_13172[Global_13172[Global_13172[iVar711].f_3211].f_2811].f_20);
			SET_JOURNAL_ENTRY_TROPHY(cVar6, iVar8);
			Function_435(bParam1);
		}
	}
}

var Function_438(int iParam0, bool bParam1, int iParam2, bool bParam3, vector3 vParam4, bool bParam7) //Position: 0x1C02C / 114732
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
		bVar0 = CREATE_PERS_CHAR_IN_LAYOUT(StackVal, Global_8492[iParam014].f_12, &Global_8492[iParam014] + 20, vParam4, 60f);
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
				ATTACH_OBJECTS(bVar5, GET_OBJECT_FROM_PERS_CHAR(bVar0), Function_83(), 0.0f, 1.5f, 0.0f, 0.0f, 0.0f, 0.0f, 4294967295);
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

void Function_439(int iParam0) //Position: 0x1C4C5 / 115909
{
	strcpy(iParam0 + 12, "AMBIENT TRAIN", 16);
	*iParam0 = 120796;
	iParam0->f_4 = 116642;
	iParam0->f_8 = 115965;
	iParam0->f_28 = 0;
	return;
}

void Function_440() //Position: 0x1C4FD / 115965
{
	if (Global_3420)
	{
		return;
	}
	Function_445(&Global_34208 + 12);
	Function_445(&Global_34208 + 724);
	if (IS_OBJECT_VALID(StackVal))
	{
		DESTROY_OBJECT(StackVal);
		Global_34208.f_4 = "";
	}
	Function_441(&Global_34208 + 1444);
	Global_34208.f_8 = 0;
	return;
}

void Function_441(int iParam0) //Position: 0x1C544 / 116036
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		Function_442(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_442(var uParam0, int iParam1) //Position: 0x1C56A / 116074
{
	if (Function_444(uParam0[iParam13], 4))
	{
		if (Function_444(uParam0[iParam13], 1))
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
			Function_443(uParam0[iParam13], 1);
			Function_443(uParam0[iParam13], 2);
			Function_443(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_443(var uParam0, int iParam1) //Position: 0x1C698 / 116376
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_444(var uParam0, int iParam1) //Position: 0x1C6B2 / 116402
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_445(int iParam0) //Position: 0x1C6CF / 116431
{
	Function_450(iParam0);
	Function_446(iParam0);
	return;
}

void Function_446(int iParam0) //Position: 0x1C6DF / 116447
{
	if (*iParam0 != 4294967295)
	{
		Function_449(iParam0);
		TRAIN_DESTROY_TRAIN(*iParam0);
		*iParam0 = 4294967295;
		Function_448(iParam0);
	}
	Function_447(iParam0);
	if (IS_LAYOUTREF_VALID(iParam0->f_672))
	{
		RELEASE_LAYOUT_REF(iParam0->f_672);
	}
	return;
}

void Function_447(int iParam0) //Position: 0x1C718 / 116504
{
	if (iParam0->f_140 != 0)
	{
		Function_441(iParam0 + 144);
		iParam0->f_340 = 0;
		iParam0->f_140 = 0;
	}
	return;
}

void Function_448(int iParam0) //Position: 0x1C738 / 116536
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

void Function_449(int iParam0) //Position: 0x1C765 / 116581
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

void Function_450(int iParam0) //Position: 0x1C791 / 116625
{
	iParam0->f_688 = 1;
	Function_449(iParam0);
	return;
}

int Function_451() //Position: 0x1C7A2 / 116642
{
	if (Global_3420)
	{
		return 0;
	}
	Function_452(&Global_34208 + 12);
	Function_452(&Global_34208 + 724);
	return 1;
}

int Function_452(int iParam0) //Position: 0x1C7C4 / 116676
{
	float fVar0;
	
	if (iParam0->f_676 != 0)
	{
		return 0;
	}
	if (!Function_5(16384) || !bLocal_511)
	{
		Function_450(iParam0);
		Function_446(iParam0);
		if (iParam0->f_348)
		{
			iParam0->f_348 = 0;
			LOG_ERROR("AMBIENT_TRAIN_UPDATE: train was disabled while stolen...turning stolen flag off");
		}
		return 0;
	}
	if (!Function_468())
	{
		return 0;
	}
	if (*iParam0 == 4294967295)
	{
		Function_467(iParam0);
		if (*iParam0 == 4294967295)
		{
			return 0;
		}
		Function_466(*iParam0);
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
			Function_450(iParam0);
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
		if (!Function_457(iParam0))
		{
			return 0;
		}
		Function_453(iParam0);
	}
	return 0;
}

void Function_453(int iParam0) //Position: 0x1C90C / 117004
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
	bVar8 = GET_ACTOR_FROM_OBJECT(TRAIN_GET_CAR(*iParam0, 0));
	if (IS_ACTOR_VALID(bVar8))
	{
		if (!DECOR_CHECK_EXIST(GET_OBJECT_FROM_ACTOR(bVar8), "nTrainName"))
		{
			DECOR_SET_STRING(GET_OBJECT_FROM_ACTOR(bVar8), "nTrainName", &cVar0);
		}
	}
	Function_454(*iParam0, iParam0->f_620);
	return;
}

void Function_454(int iParam0, int iParam1) //Position: 0x1CA26 / 117286
{
	bool bVar0;
	
	if (TRAIN_GET_NUM_CARS(iParam0) >= 0)
	{
		bVar0 = Function_455(iParam0);
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
	if (Global_34207 == iParam0)
	{
		(&Global_34208 + 12)->f_620 = iParam1;
	}
	else if (Global_34206 == iParam0)
	{
		(&Global_34208 + 724)->f_620 = iParam1;
	}
	return;
}

var Function_455(int iParam0) //Position: 0x1CABC / 117436
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	if (iParam0 == 4294967295)
	{
		return "";
	}
	iVar0 = 1;
	iVar1 = TRAIN_GET_NUM_CARS(iParam0);
	if (iVar1 > 1)
	{
		iVar0 = 1;
		while (iVar0 < (iVar1 - 1))
		{
			bVar2 = TRAIN_GET_CAR(iParam0, iVar0);
			if (IS_OBJECT_VALID(bVar2))
			{
				if (Function_456(bVar2) != 1165 || Function_456(bVar2) != 1168)
				{
					return GET_ACTOR_FROM_OBJECT(TRAIN_GET_CAR(iParam0, iVar0));
				}
			}
			iVar0++;
		}
	}
	return "";
}

int Function_456(bool bParam0) //Position: 0x1CB24 / 117540
{
	if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(bParam0)))
	{
		return GET_ACTOR_ENUM(GET_ACTOR_FROM_OBJECT(bParam0));
	}
	return 4294967295;
}

bool Function_457(int iParam0) //Position: 0x1CB3F / 117567
{
	if (iParam0->f_136 == iParam0->f_140)
	{
		if (iParam0->f_340)
		{
			return 1;
		}
		iParam0->f_340 = Function_462(iParam0 + 144);
		return iParam0->f_340;
	}
	iParam0->f_140 = iParam0->f_136;
	switch (iParam0->f_136)
	{
		case 0x00000001:
			Function_461(iParam0 + 144, 1166, 2, 0);
			Function_461(iParam0 + 144, 1167, 2, 0);
			Function_461(iParam0 + 144, 1156, 2, 0);
			Function_461(iParam0 + 144, 1165, 2, 0);
			Function_461(iParam0 + 144, 1157, 2, 0);
			Function_461(iParam0 + 144, 1158, 2, 0);
			Function_461(iParam0 + 144, 1162, 2, 0);
			Function_458(iParam0 + 144, "$/content/scripting/gringo/simplegringo/traincar01", 1, 0);
			Function_458(iParam0 + 144, "$/content/scripting/gringo/simplegringo/traincarbaggage", 1, 0);
			Function_458(iParam0 + 144, "$/content/scripting/gringo/simplegringo/traincarbox01", 1, 0);
			Function_458(iParam0 + 144, "$/content/scripting/gringo/simplegringo/traincarbox02", 1, 0);
			Function_458(iParam0 + 144, "$/content/scripting/gringo/simplegringo/traincarcaboose", 1, 0);
			Function_458(iParam0 + 144, "$/content/scripting/gringo/simplegringo/traincarsteamer", 1, 0);
			Function_458(iParam0 + 144, "$/content/scripting/gringo/simplegringo/traincarwood", 1, 0);
			break;
		
		case 0x00000002:
			Function_461(iParam0 + 144, 1175, 2, 0);
			Function_461(iParam0 + 144, 1176, 2, 0);
			Function_461(iParam0 + 144, 1169, 2, 0);
			Function_461(iParam0 + 144, 1168, 2, 0);
			Function_461(iParam0 + 144, 1170, 2, 0);
			Function_461(iParam0 + 144, 1171, 2, 0);
			Function_461(iParam0 + 144, 1173, 2, 0);
			Function_458(iParam0 + 144, "$/content/scripting/gringo/simplegringo/traincar01", 1, 0);
			Function_458(iParam0 + 144, "$/content/scripting/gringo/simplegringo/traincarbaggage", 1, 0);
			Function_458(iParam0 + 144, "$/content/scripting/gringo/simplegringo/traincarbox01", 1, 0);
			Function_458(iParam0 + 144, "$/content/scripting/gringo/simplegringo/traincarbox02", 1, 0);
			Function_458(iParam0 + 144, "$/content/scripting/gringo/simplegringo/traincarcaboose", 1, 0);
			Function_458(iParam0 + 144, "$/content/scripting/gringo/simplegringo/traincarsteamer", 1, 0);
			Function_458(iParam0 + 144, "$/content/scripting/gringo/simplegringo/traincarwood", 1, 0);
			break;
		
		case 0x00000000:
			break;
	}
	iParam0->f_340 = Function_462(iParam0 + 144);
	return iParam0->f_340;
}

var Function_458(var uParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x1CFFF / 118783
{
	int iVar0;
	var uVar1;
	
	if (Global_30842[32])
	{
	}
	uVar1 = GET_ASSET_ID(bParam1, iParam2);
	iVar0 = Function_460(uParam0, uVar1, iParam2);
	if (bParam3)
	{
		Function_459(uParam0[iVar03], 8);
	}
	return iVar0;
}

void Function_459(var uParam0, int iParam1) //Position: 0x1D037 / 118839
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

var Function_460(var uParam0, int iParam1, int iParam2) //Position: 0x1D048 / 118856
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_444(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = iParam2;
			Function_459(uParam0[iVar03], 4);
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

var Function_461(var uParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x1D10C / 119052
{
	int iVar0;
	
	iParam2 = iParam2;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		if (!Function_444(uParam0[iVar03], 4))
		{
			(*uParam0)[iVar03] = iParam1;
			uParam0[iVar03]->f_4 = 3;
			Function_459(uParam0[iVar03], 4);
			if (bParam3)
			{
				Function_459(uParam0[iVar03], 8);
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

bool Function_462(int iParam0) //Position: 0x1D1DC / 119260
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_465();
	iVar1 = 0;
	if (!Function_444(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_459(iParam0[iVar03], 8);
		}
		else if (Function_464())
		{
			iVar1 = 1;
			Function_459(iParam0[iVar03], 8);
		}
		Function_459(iParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_444(iParam0[iVar03], 4))
		{
			if (!Function_444(iParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*iParam0)[iVar03], (Function_444(iParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*iParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], 1, (Function_444(iParam0[03], 8) || iVar1));
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
				Function_459(iParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_444(iParam0[iVar03], 4))
		{
			if (!Function_444(iParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*iParam0)[iVar03]))
						{
							Function_459(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_459(iParam0[iVar03], 2);
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
							Function_459(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_459(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_459(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_459(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_459(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_459(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_459(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_459(iParam0[iVar03], 2);
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
	Function_463();
	return 1;
}

void Function_463() //Position: 0x1D557 / 120151
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

bool Function_464() //Position: 0x1D597 / 120215
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

void Function_465() //Position: 0x1D5C2 / 120258
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

void Function_466(int iParam0) //Position: 0x1D604 / 120324
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

void Function_467(int iParam0) //Position: 0x1D634 / 120372
{
	if (*iParam0 == 4294967295)
	{
		if (!IS_LAYOUTREF_VALID(iParam0->f_672))
		{
			iParam0->f_672 = CREATE_LAYOUT(Function_83());
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
		TRAIN_SET_MAX_ACCEL(*iParam0, 1.25f);
		TRAIN_SET_MAX_DECEL(*iParam0, -0.75f);
		TRAIN_SET_TARGET_SPEED(*iParam0, 0.0f);
		TRAIN_SET_POSITION_DIRECTION(*iParam0, iParam0 + 352, iParam0 + 364);
		if (iParam0->f_136 != 1 && iLocal_513)
		{
			CREATE_GRINGO_IN_LAYOUT(iParam0->f_672, "Train", "$/content/scripting/gringo/gringobrains/veh/Train_Brain", -971.969f, (100.0f + IntToFloat(*iParam0 * 2)), 2407.337f, 0.0f, 0.0f, 0.0f);
		}
		Function_448(iParam0);
	}
	return;
}

bool Function_468() //Position: 0x1D787 / 120711
{
	Function_458(&Global_34208 + 1444, "$/content/scripting/gringo/gringobrains/veh/Train_Brain", 1, 0);
	return Function_462(&Global_34208 + 1444);
}

void Function_469() //Position: 0x1D7DC / 120796
{
	int iVar0;
	
	Global_34208.f_1440 = 1;
	(&Global_34208 + 12)->f_676 = 0;
	(&Global_34208 + 12)->f_124 = 450.0f;
	(&Global_34208 + 12)->f_128 = 500.0f;
	(&Global_34208 + 12)->f_132 = 0;
	(&Global_34208 + 12)->f_136 = 1;
	Global_34208.f_12 = 4294967295;
	*(&Global_34208 + 12 + 352) = { -2210.959f, 16.58f, 2624.5f };
	*(&Global_34208 + 12 + 364) = { -0.372f, 0.0f, 0.921f };
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
	*(&Global_34208 + 724 + 352) = { 651.801f, 78.645f, 1275.99f };
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

void Function_470(int iParam0) //Position: 0x1DA42 / 121410
{
	strcpy(iParam0 + 12, "VOL RESTRICT", 16);
	*iParam0 = 121498;
	iParam0->f_4 = 121486;
	iParam0->f_8 = 121465;
	iParam0->f_28 = 1;
	return;
}

void Function_471() //Position: 0x1DA79 / 121465
{
	if (IS_LAYOUTREF_VALID(Global_26150))
	{
		DESTROY_LAYOUT(Global_26150);
	}
	return;
}

int Function_472() //Position: 0x1DA8E / 121486
{
	Function_147(4294967295);
	return 0;
}

void Function_473() //Position: 0x1DA9A / 121498
{
	if (!IS_LAYOUTREF_VALID(Global_26150))
	{
		Global_26150 = CREATE_LAYOUT("AmbientVol");
	}
	return;
}

void Function_474(int iParam0) //Position: 0x1DABD / 121533
{
	strcpy(iParam0 + 12, "AMBIENT SCORE", 16);
	*iParam0 = 121623;
	iParam0->f_4 = 121595;
	iParam0->f_8 = 121589;
	iParam0->f_28 = 1;
	return;
}

void Function_475() //Position: 0x1DAF5 / 121589
{
	return;
}

int Function_476() //Position: 0x1DAFB / 121595
{
	Function_477();
	return 0;
}

void Function_477() //Position: 0x1DB05 / 121605
{
	AUDIO_SET_GLOBAL_LAW_VALUES(Global_3403, Global_3404, Global_3407);
	return;
}

void Function_478() //Position: 0x1DB17 / 121623
{
	return;
}

void Function_479(int iParam0) //Position: 0x1DB1D / 121629
{
	strcpy(iParam0 + 12, "BEAT LAUNCHER", 16);
	*iParam0 = 122777;
	iParam0->f_4 = 121706;
	iParam0->f_8 = 121685;
	iParam0->f_28 = 1;
	return;
}

void Function_480() //Position: 0x1DB55 / 121685
{
	Function_481();
	return;
}

void Function_481() //Position: 0x1DB5E / 121694
{
	DESTROY_OBJECTSET(Global_25964);
	return;
}

int Function_482() //Position: 0x1DB6A / 121706
{
	if (Function_5(4))
	{
		Function_484(&Global_25267);
		if (Function_1())
		{
			if (NET_IS_IN_SESSION())
			{
				Function_483(&Global_25267);
			}
		}
	}
	return 0;
}

void Function_483(int iParam0) //Position: 0x1DB90 / 121744
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

void Function_484(int iParam0) //Position: 0x1DBE7 / 121831
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= *iParam0)
	{
		if (IS_SCRIPT_VALID(iParam0[iVar058]->f_44))
		{
		}
		else if (Function_489(iParam0[iVar058], 1))
		{
			if (!Global_3391)
			{
				if (Function_487(iParam0[iVar058]))
				{
					Function_486(iParam0[iVar058], 1);
					Function_485(iParam0[iVar058], 2);
				}
			}
		}
		else if (Function_489(iParam0[iVar058], 2))
		{
			if (iParam0[iVar058]->f_88 + 2.0f) < GET_CURRENT_GAME_TIME()
			{
			}
			Function_486(iParam0[iVar058], 2);
			Function_485(iParam0[iVar058], 4);
			Function_364(iParam0[iVar058]);
		}
		else if (Function_489(iParam0[iVar058], 4))
		{
		}
		iVar0++;
	}
	return;
}

void Function_485(var uParam0, int iParam1) //Position: 0x1DC97 / 122007
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_486(var uParam0, int iParam1) //Position: 0x1DCA8 / 122024
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_487(int iParam0) //Position: 0x1DCC2 / 122050
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
	Function_488(iParam0 + 92, &Var0 + 64);
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

void Function_488(int iParam0, int iParam1) //Position: 0x1DE10 / 122384
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

bool Function_489(int iParam0, int iParam1) //Position: 0x1DF7C / 122748
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_490() //Position: 0x1DF99 / 122777
{
	struct<35> Var0;
	
	Function_501(&Global_25267);
	if (Function_500() == 1)
	{
		if (!Function_499())
		{
			*(&Var0 + 20) = 1;
			Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var0 };
			if (!Function_71())
			{
				Function_285();
				Function_285();
				if (Function_498(StackVal, StackVal, StackVal, StackVal, 128, 1, GET_ASSET_ID("$/content/Ambient/PointOfInterest/event_bountyhunter", 4), Function_285(), Function_285(), 0, 0, 0, Global_26303.f_24, 0, 0, 0, &Var0, 1, 1, 0x40a00000, 4294967295, 0, 0))
				{
				}
				else
				{
					LOG_ERROR("Problem initializing bounty hunter beat");
				}
			}
			else
			{
				Function_285();
				Function_285();
				if (Function_498(StackVal, StackVal, StackVal, StackVal, 128, 1, GET_ASSET_ID("$/content/DLC/ZombiePack/MissingPersons/event_bountyhunter_z.sc", 4), Function_285(), Function_285(), 0, 0, 0, Global_26303.f_24, 0, 0, 0, &Var0, 1, 1, 0x40a00000, 4294967295, 0, 0))
				{
				}
				else
				{
					LOG_ERROR("Problem initializing bounty hunter beat");
				}
			}
		}
		else
		{
			Function_495(0);
			Function_297();
			Function_491(0, 0, 0);
			Function_491(1, 0, 0);
		}
	}
	return;
}

void Function_491(int iParam0, bool bParam1, bool bParam2) //Position: 0x1E116 / 123158
{
	if ((*&Global_26401 + 16)[iParam0] >= 0)
	{
		Function_494(iParam0, (*&Global_26401 + 16)[iParam0]);
		(*&Global_26401 + 16)[iParam0] = 0;
		if (bParam2)
		{
			Function_492(iParam0, 0, 0, Function_251(30), 0);
		}
		if (bParam1)
		{
			if (IS_ACTOR_ALIVE(Global_34573))
			{
				Function_69("community_fail", 0x41200000, 1, 0, 2, 1, 0);
			}
		}
	}
	return;
}

void Function_492(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4) //Position: 0x1E17F / 123263
{
	int iVar0;
	
	iVar0 = GET_TIME_OF_DAY();
	ADD_TIME(&iVar0, iParam1, bParam2, bParam3, iParam4);
	if (IS_EARLIER_THAN((*&Global_26316 + 88)[iParam0], iVar0) || Function_493((*&Global_26316 + 88)[iParam0]))
	{
		(*&Global_26316 + 88)[iParam0] = iVar0;
	}
}

var Function_493(bool bParam0) //Position: 0x1E1C5 / 123333
{
	return (((GET_DAY(bParam0) != 0 && GET_HOUR(bParam0) != 0) && GET_MINUTE(bParam0) != 0) && GET_SECOND(bParam0) != 1);
}

void Function_494(bool bParam0, bool bParam1) //Position: 0x1E1EA / 123370
{
	if (!Function_299(bParam0))
	{
		return;
	}
	if (!bParam1 < 0)
	{
	}
	Global_26401[bParam0] = (Global_26401[bParam0] + bParam1);
	Function_329((*&Global_26401 + 2220)[bParam0], bParam1, 0, 0);
	Function_329(222, bParam1, 0, 0);
	return;
}

void Function_495(int iParam0) //Position: 0x1E22F / 123439
{
	Function_497(0);
	Function_496();
	Global_26303.f_12 = 4294967295;
	Global_26303.f_16 = 0;
	Global_26303.f_20 = 4294967295;
	Global_26303.f_24 = 4294967295;
	Global_26303.f_32 = 0;
	Global_26303.f_36 = 0;
	Global_26303.f_40 = 0;
	if (iParam0 == 1)
	{
		Function_13(&Global_26303 + 8, 4096);
	}
	return;
}

void Function_496() //Position: 0x1E277 / 123511
{
	Function_13(&Global_26303 + 8, 2);
	Function_13(&Global_26303 + 8, 4);
	Function_13(&Global_26303 + 8, 8);
	Function_13(&Global_26303 + 8, 16);
	Function_13(&Global_26303 + 8, 32);
	Function_13(&Global_26303 + 8, 64);
	Function_13(&Global_26303 + 8, 128);
	Function_13(&Global_26303 + 8, 256);
	Function_13(&Global_26303 + 8, 512);
	Function_13(&Global_26303 + 8, 1024);
	Function_13(&Global_26303 + 8, 2048);
	Function_13(&Global_26303 + 8, 131072);
	Function_13(&Global_26303 + 8, 262144);
	Function_13(&Global_26303 + 8, 524288);
	return;
}

void Function_497(bool bParam0) //Position: 0x1E311 / 123665
{
	if (bParam0 == 1)
	{
		Function_11(&Global_26303 + 8, 1);
	}
	else
	{
		Function_13(&Global_26303 + 8, 1);
	}
	return;
}

bool Function_498(int iParam0, int iParam1, var uParam2, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11, var uParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22) //Position: 0x1E332 / 123698
{
	int iVar0;
	
	iParam13 = iParam13;
	iParam14 = iParam14;
	iParam15 = iParam15;
	iVar0 = 0;
	while (iVar0 <= Global_25267)
	{
		if (Global_25267[iVar058] != iParam0 || iParam0 != 4096)
		{
			if (Function_489(&(Global_25267[iVar058]), 4))
			{
				if (!IS_SCRIPT_VALID(Global_25267[iVar058].f_44))
				{
					Global_25267[iVar058].f_4 = iParam9;
					Global_25267[iVar058].f_68 = iParam21;
					Global_25267[iVar058].f_84 = iParam22;
					Global_25267[iVar058].f_64 = iParam19;
					Global_25267[iVar058].f_72 = iParam20;
					Global_25267[iVar058].f_12 = 4294967295;
					Global_25267[iVar058].f_16 = uParam2;
					*(&Global_25267[iVar058] + 20) = { StackVal, StackVal, vParam3 };
					*(&Global_25267[iVar058] + 32) = { StackVal, StackVal, vParam6 };
					Global_25267[iVar058].f_56 = iParam10;
					Global_25267[iVar058].f_48 = uParam12;
					Global_25267[iVar058].f_52 = iParam11;
					Global_25267[iVar058].f_76 = iParam17;
					Global_25267[iVar058].f_80 = iParam18;
					Global_25267[iVar058].f_88 = 0.0f;
					Function_488(iParam16, &Global_25267[iVar058] + 92);
					Global_25267[iVar058].f_92 = iParam1;
					Function_485(&(Global_25267[iVar058]), 1);
					Function_486(&(Global_25267[iVar058]), 4);
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool Function_499() //Position: 0x1E474 / 124020
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

int Function_500() //Position: 0x1E4A2 / 124066
{
	return Function_19(StackVal, 1);
}

void Function_501(int iParam0) //Position: 0x1E4B1 / 124081
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
	Function_364(iParam0[058]);
	Function_364(iParam0[158]);
	Function_364(iParam0[258]);
	Function_364(iParam0[358]);
	Function_364(iParam0[458]);
	Function_364(iParam0[558]);
	Function_364(iParam0[658]);
	Function_364(iParam0[758]);
	Function_364(iParam0[858]);
	Function_364(iParam0[958]);
	Function_364(iParam0[1058]);
	Function_364(iParam0[1158]);
	Function_485(iParam0[058], 4);
	Function_485(iParam0[158], 4);
	Function_485(iParam0[258], 4);
	Function_485(iParam0[358], 4);
	Function_485(iParam0[458], 4);
	Function_485(iParam0[558], 4);
	Function_485(iParam0[658], 4);
	Function_485(iParam0[758], 4);
	Function_485(iParam0[858], 4);
	Function_485(iParam0[958], 4);
	Function_485(iParam0[1058], 4);
	Function_485(iParam0[1158], 4);
	if (!IS_LAYOUTREF_VALID(Global_6288))
	{
		Global_6288 = CREATE_LAYOUT("RegionChar");
	}
	Global_79335 = 0;
	Global_79334 = 0.0f;
	Global_25964 = CREATE_OBJECTSET_IN_LAYOUT("DisallowedVols", Global_6288, 9, 1);
	return;
}

void Function_502(int iParam0) //Position: 0x1E628 / 124456
{
	strcpy(iParam0 + 12, "BEAT MANAGER", 16);
	*iParam0 = 125805;
	iParam0->f_4 = 124517;
	iParam0->f_8 = 124511;
	iParam0->f_28 = 1;
	return;
}

void Function_503() //Position: 0x1E65F / 124511
{
	return;
}

int Function_504() //Position: 0x1E665 / 124517
{
	if (Function_5(1024))
	{
		Function_505();
	}
	return 0;
}

void Function_505() //Position: 0x1E678 / 124536
{
	int iVar0;
	
	if (bLocal_510)
	{
		if (Global_25264 <= 1)
		{
			return;
		}
		if (Function_513(&iVar0))
		{
		}
		else
		{
			iVar0 = Function_512(&Global_25059, Global_25264);
		}
		if (Global_26147 == 1)
		{
			iVar0 = Global_26148;
		}
		if (Function_506(iVar0, 0))
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

bool Function_506(int iParam0, bool bParam1) //Position: 0x1E70A / 124682
{
	struct<49> Var0;
	int iVar51;
	
	if (!Function_511(iParam0))
	{
		return 0;
	}
	if (!bParam1)
	{
		if (!Function_510(Global_17483[iParam075].f_84))
		{
			return 0;
		}
		if (!Function_509(Global_17483[iParam075].f_96))
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
	if (!Function_498(StackVal, StackVal, StackVal, StackVal, StackVal, iVar51, Global_17483[iParam075].f_120, Global_17483[iParam075].f_96, *(&Var0 + 8), *(&Var0 + 20), Global_17483[iParam075].f_80, 0, Global_17483[iParam075].f_92, (*&Global_17483[iParam075] + 32)[0], (*&Global_17483[iParam075] + 32)[1], (*&Global_17483[iParam075] + 32)[2], &Global_17483[iParam075] + 120, Var0.f_48, Global_17483[iParam075].f_288, Global_17483[iParam075].f_72, iParam0, Global_17483[iParam075].f_76, Global_17483[iParam075].f_292))
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
		Function_508(0);
	}
	if (Global_17483[iParam075].f_280)
	{
		Function_507(iParam0);
	}
	return 1;
}

void Function_507(int iParam0) //Position: 0x1E8A2 / 125090
{
	if (!Function_511(iParam0))
	{
		return;
	}
	Global_17483[iParam075].f_120 = 0;
	Global_25263 = (Global_25263 - 1);
	return;
}

void Function_508(int iParam0) //Position: 0x1E8C4 / 125124
{
	Global_12976 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976, 0, false, (iParam0 + Function_251(90)), 0);
	return;
}

bool Function_509(int iParam0) //Position: 0x1E8E1 / 125153
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

bool Function_510(int iParam0) //Position: 0x1E90C / 125196
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Global_25267 - 1))
	{
		if (Global_25267[iVar058] != iParam0 || iParam0 != 4096)
		{
			if (Function_489(&(Global_25267[iVar058]), 4) && !IS_SCRIPT_VALID(Global_25267[iVar058].f_44))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool Function_511(int iParam0) //Position: 0x1E95B / 125275
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	return 1;
}

var Function_512(var uParam0, bool bParam1) //Position: 0x1E971 / 125297
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

bool Function_513(int iParam0) //Position: 0x1E9DE / 125406
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_25264)
	{
		if (Function_19(StackVal, 2))
		{
			if (Global_17483[Global_25059[iVar0]75].f_88 != 0)
			{
				if (!Function_245(Global_17483[Global_25059[iVar0]75].f_88) != 3)
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
				if (Function_173(7) && !Function_338(7, 16))
				{
					*iParam0 = Global_25059[iVar0];
					return 1;
				}
			}
			if (Global_29005 == Global_30628[2])
			{
				if (Function_173(5) && !Function_338(5, 16))
				{
					*iParam0 = Global_25059[iVar0];
					return 1;
				}
			}
			if (Global_29005 == Global_30628[0])
			{
				if (Function_173(4) && !Function_338(4, 16))
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
				if (Function_173(7) && !Function_338(7, 16))
				{
					*iParam0 = Global_25059[iVar0];
					return 1;
				}
			}
			if (Global_29005 == Global_30628[2])
			{
				if (Function_173(5) && !Function_338(5, 16))
				{
					*iParam0 = Global_25059[iVar0];
					return 1;
				}
			}
			if (Global_29005 == Global_30628[0])
			{
				if (Function_173(4) && !Function_338(4, 16))
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

void Function_514() //Position: 0x1EB6D / 125805
{
	Function_531();
	Function_516();
	Function_515();
	return;
}

void Function_515() //Position: 0x1EB7C / 125820
{
	return;
}

void Function_516() //Position: 0x1EB82 / 125826
{
	Global_25263 = 0;
	Function_529(3, 1, 25, 4294967276, 50, 2, 164032, 3, 4, "$/content/Ambient/Town/beat_crime_horsethief", 63, 2, 70.0f, 8, 65, 0);
	Function_528(&Global_17483[375] + 120, 1, 5.0f, 96, 4294967295);
	Function_527(&Global_17483[375] + 120, 4.5f);
	Function_526(&Global_17483[375] + 120, -5.0f, 2);
	if (!Global_3420)
	{
		Function_529(0, 2, 15, 5, 25, 2, 16, 1, 4, "$/content/Ambient/Roaming/event_coyote_chase", 30, 2, 190.0f, 2, 55, 0);
		Function_528(&Global_17483[075] + 120, 2, 8.0f, 1, 704);
		Function_525(&Global_17483[075] + 120, 19.9f, 0.6f);
		Function_526(&Global_17483[075] + 120, -3.0f, 2);
		Function_524(&Global_17483[075] + 120, 30.0f);
	}
	else
	{
		Function_523(6, "$/content/Ambient/Town/beat_dog_fetch");
		Function_523(0, "$/content/Ambient/Roaming/event_coyote_chase");
	}
	Function_529(4, 2, 50, 4294967271, 50, 2, 32960, 3, 4, "$/content/Ambient/Town/beat_crime_wagonthief", 63, 2, 190.0f, 8, 55, 0);
	Function_528(&Global_17483[475] + 120, 2, 9.5f, 64, 752);
	Function_527(&Global_17483[475] + 120, 10.0f);
	Function_525(&Global_17483[475] + 120, 7.9f, 0.6f);
	Function_526(&Global_17483[475] + 120, -4.0f, 2);
	if (!Global_3420)
	{
		Function_529(5, 2, 75, 4294967286, 25, 2, 96, 1, 4, "$/content/Ambient/Roaming/event_criminal_chase", 31, 3, 190.0f, 8, 55, 0);
		Function_528(&Global_17483[575] + 120, 3, 6.0f, 1, 736);
		Function_525(&Global_17483[575] + 120, 19.9f, 0.7f);
		Function_526(&Global_17483[575] + 120, -3.0f, 2);
		Function_522(&Global_17483[575] + 120);
	}
	else
	{
		Function_523(5, "$/content/Ambient/Roaming/event_criminal_chase");
	}
	Function_529(1, 2, 100, 4294967271, 100, 2, 33808, 0, 4, "$/content/Ambient/Roaming/event_crazy_hermit", 63, 2, 190.0f, 8, 55, 0);
	Function_528(&Global_17483[175] + 120, 1, 6.0f, 1, 240);
	Function_525(&Global_17483[175] + 120, 5.9f, 0.3f);
	Function_524(&Global_17483[175] + 120, 40.0f);
	Function_526(&Global_17483[175] + 120, -4.0f, 2);
	Function_529(43, 2, 100, 4294967271, 100, 2, 16, 0, 4, "$/content/Ambient/Roaming/event_wilderness_dynomite", 63, 2, 190.0f, 8, 55, 0);
	Function_528(&Global_17483[4375] + 120, 1, 5.0f, 1, 752);
	Function_524(&Global_17483[4375] + 120, 30.0f);
	Function_525(&Global_17483[4375] + 120, 5.9f, 0.3f);
	Function_526(&Global_17483[4375] + 120, -5.0f, 2);
	if (!Global_3420)
	{
		Function_529(23, 2, 100, 4294967271, 100, 2, 96, 0, 4, "$/content/Ambient/Roaming/event_lone_stranger", 63, 2, 190.0f, 8, 70, 0);
		Function_528(&Global_17483[2375] + 120, 3, 8.0f, 1, 752);
		Function_525(&Global_17483[2375] + 120, 19.9f, 0.6f);
		Function_524(&Global_17483[2375] + 120, 5.0f);
		Function_526(&Global_17483[2375] + 120, -1.0f, 2);
		Function_529(29, 2, 50, 4294967271, 50, 2, 32776, 0, 4, "$/content/Ambient/Roaming/event_roadside_ambush", 63, 2, 190.0f, 8, 65, 0);
		Function_528(&Global_17483[2975] + 120, 2, 5.0f, 64, 752);
		Function_527(&Global_17483[2975] + 120, 15.0f);
		Function_524(&Global_17483[2975] + 120, 5.0f);
		Function_521(&Global_17483[2975] + 120, 12.0f, 5.0f);
		Function_520(&Global_17483[2975] + 120, 0.4f, 8.0f);
		Function_526(&Global_17483[2975] + 120, -2.0f, 2);
	}
	else
	{
		Function_523(23, "$/content/Ambient/Roaming/event_lone_stranger");
		Function_523(29, "$/content/Ambient/Roaming/event_roadside_ambush");
	}
	Function_529(31, 2, 50, 4294967271, 50, 2, 8, 0, 4, "$/content/Ambient/Roaming/event_roadside_prisoners", 63, 2, 190.0f, 8, 55, 0);
	Function_528(&Global_17483[3175] + 120, 2, 6.0f, 64, 752);
	Function_527(&Global_17483[3175] + 120, 20.0f);
	Function_525(&Global_17483[3175] + 120, 12.5f, 0.4f);
	Function_524(&Global_17483[3175] + 120, 4.0f);
	Function_526(&Global_17483[3175] + 120, 0.0f, 4);
	Function_522(&Global_17483[3175] + 120);
	Function_529(32, 2, 25, 4294967271, 50, 2, 32776, 1, 4, "$/content/Ambient/Roaming/beat_roadside_robbery", 63, 2, 190.0f, 8, 55, 0);
	Function_528(&Global_17483[3275] + 120, 1, 9.0f, 64, 752);
	Function_527(&Global_17483[3275] + 120, 24.0f);
	Function_521(&Global_17483[3275] + 120, 12.5f, 9.0f);
	Function_520(&Global_17483[3275] + 120, 0.45f, 12.0f);
	Function_524(&Global_17483[3275] + 120, 9.0f);
	Function_526(&Global_17483[3275] + 120, -4.0f, 4);
	Function_522(&Global_17483[3275] + 120);
	if (!Global_3420)
	{
		Function_529(42, 2, 60, 0, 70, 2, 96, 0, 4, "$/content/Ambient/Roaming/event_wild_animals", 63, 2, 190.0f, 2, 70, 0);
		Function_528(&Global_17483[4275] + 120, 2, 8.0f, 1, 640);
		Function_525(&Global_17483[4275] + 120, 19.9f, 0.6f);
		Function_524(&Global_17483[4275] + 120, 20.0f);
		Function_526(&Global_17483[4275] + 120, 0.0f, 4);
		Function_522(&Global_17483[4275] + 120);
		Function_529(26, 2, 760, 0, 770, 2, 0, 0, 4, "$/content/Ambient/Roaming/event_predator_prey", 63, 0, 50.0f, 4294967295, 35, 0);
		Function_528(&Global_17483[2675] + 120, 2, 8.0f, 1, 704);
		Function_525(&Global_17483[2675] + 120, 19.9f, 0.6f);
		Function_526(&Global_17483[2675] + 120, 0.0f, 2);
		Function_524(&Global_17483[2675] + 120, 20.0f);
		Function_529(24, 2, 30, 4294967286, 10, 2, 0, 0, 4, "$/content/Ambient/Roaming/event_loot_dead_body", 63, 2, 190.0f, 2, 55, 0);
		Function_528(&Global_17483[2475] + 120, 0, 3.0f, 1, 752);
		Function_525(&Global_17483[2475] + 120, 1.9f, 0.3f);
		Function_524(&Global_17483[2475] + 120, 10.0f);
		Function_526(&Global_17483[2475] + 120, 0.0f, 4);
		Function_522(&Global_17483[2475] + 120);
		Function_529(25, 2, 30, 10, 10, 2, 16, 0, 4, "$/content/Ambient/Roaming/event_mourn_dead_body", 63, 2, 190.0f, 2, 55, 0);
		Function_528(&Global_17483[2575] + 120, 1, 3.0f, 1, 752);
		Function_525(&Global_17483[2575] + 120, 5.9f, 0.3f);
		Function_524(&Global_17483[2575] + 120, 10.0f);
		Function_526(&Global_17483[2575] + 120, 0.0f, 4);
		Function_522(&Global_17483[2575] + 120);
		Function_529(17, 2, 15, 0, 25, 2, 16, 1, 4, "$/content/Ambient/Roaming/event_generic_1v1", 31, 2, 190.0f, 2, 60, 0);
		Function_528(&Global_17483[1775] + 120, 2, 8.0f, 1, 704);
		Function_525(&Global_17483[1775] + 120, 19.9f, 0.6f);
		Function_524(&Global_17483[1775] + 120, 30.0f);
		Function_529(38, 2, 100, 4294967271, 100, 2, 32786, 0, 4, "$/content/Ambient/Roaming/event_treasurehunter_intro", 63, 2, 190.0f, 8, 70, 0);
		Function_528(&Global_17483[3875] + 120, 1, 6.0f, 1, 752);
		Function_524(&Global_17483[3875] + 120, 30.0f);
		Function_526(&Global_17483[3875] + 120, -6.0f, 4);
		Function_525(&Global_17483[3875] + 120, 9.9f, 0.4f);
		Function_522(&Global_17483[3875] + 120);
		Function_529(19, 2, 100, 4294967271, 100, 2, 16, 0, 4, "$/content/Ambient/Roaming/event_herbalist_intro", 63, 2, 190.0f, 2, 75, 0);
		Function_528(&Global_17483[1975] + 120, 1, 6.0f, 1, 752);
		Function_524(&Global_17483[1975] + 120, 20.0f);
		Function_525(&Global_17483[1975] + 120, 5.9f, 0.3f);
		Function_526(&Global_17483[1975] + 120, -4.0f, 4);
		Function_522(&Global_17483[1975] + 120);
		Function_529(20, 2, 100, 4294967271, 100, 2, 16, 0, 4, "$/content/Ambient/Roaming/event_hunter_intro", 63, 2, 190.0f, 18, 75, 0);
		Function_528(&Global_17483[2075] + 120, 2, 6.0f, 1, 752);
		Function_524(&Global_17483[2075] + 120, 20.0f);
		Function_525(&Global_17483[2075] + 120, 5.9f, 0.3f);
		Function_526(&Global_17483[2075] + 120, -4.0f, 4);
		Function_522(&Global_17483[2075] + 120);
		Function_529(34, 2, 100, 4294967271, 100, 2, 32, 0, 4, "$/content/Ambient/Roaming/event_sharpshooter_challenge", 63, 2, 190.0f, 2, 55, 0);
		Function_528(&Global_17483[3475] + 120, 0, 5.0f, 1, 752);
		Function_524(&Global_17483[3475] + 120, 16.0f);
		Function_525(&Global_17483[2075] + 120, 8.9f, 0.3f);
		Function_526(&Global_17483[3475] + 120, 0.0f, 4);
		Function_522(&Global_17483[3475] + 120);
	}
	else
	{
		Function_523(42, "$/content/Ambient/Roaming/event_wild_animals");
		Function_523(26, "$/content/Ambient/Roaming/event_predator_prey");
		Function_523(24, "$/content/Ambient/Roaming/event_loot_dead_body");
		Function_523(25, "$/content/Ambient/Roaming/event_mourn_dead_body");
		Function_523(17, "$/content/Ambient/Roaming/event_generic_1v1");
		Function_523(38, "$/content/Ambient/Roaming/event_treasurehunter_intro");
		Function_523(19, "$/content/Ambient/Roaming/event_herbalist_intro");
		Function_523(20, "$/content/Ambient/Roaming/event_hunter_intro");
		Function_523(34, "$/content/Ambient/Roaming/event_sharpshooter_challenge");
		Function_523(40, "$/content/Ambient/Town/event_ultra_high_honor");
		Function_523(39, "$/content/Ambient/Town/event_ultra_high_fame");
	}
	if (!Global_3420)
	{
		Function_529(22, 0, 0, 50, 15, 3, 0, 4, 8, "$/content/Ambient/Traffic/tevent_lone_lawman", 63, 2, 25.0f, 2, 55, 0);
		Function_519(&Global_17483[2275] + 120, 1, 0);
		Function_529(44, 2, 25, 0, 15, 3, 0, 0, 8, "$/content/Ambient/Traffic/tevent_wilderness_pisser", 63, 2, 65.0f, 2, 45, 0);
		Function_519(&Global_17483[4475] + 120, 1, 0);
		Function_529(37, 2, 40, 35, 75, 2, 8, 1, 16, "$/content/Ambient/Beacons/beacon_transport_dynomite", 31, 2, 190.0f, 27, 60, 0);
		Function_528(&Global_17483[3775] + 120, 1, 8.0f, 64, 752);
		Function_527(&Global_17483[3775] + 120, 68.0f);
		Function_521(&Global_17483[3775] + 120, 5.9f, 8.0f);
		Function_520(&Global_17483[3775] + 120, 0.3f, 4.0f);
		Function_524(&Global_17483[3775] + 120, 8.0f);
		Function_526(&Global_17483[3775] + 120, -4.0f, 4);
		Function_518(37, 2);
		Function_522(&Global_17483[3775] + 120);
		Function_529(12, 2, 40, 30, 55, 2, 16, 1, 16, "$/content/Ambient/Beacons/beacon_escort_criminals", 31, 2, 190.0f, 25, 55, 0);
		Function_528(&Global_17483[1275] + 120, 1, 5.0f, 1, 736);
		Function_524(&Global_17483[1275] + 120, 24.0f);
		Function_521(&Global_17483[1275] + 120, 10.9f, 4.0f);
		Function_520(&Global_17483[1275] + 120, 0.3f, 8.0f);
		Function_526(&Global_17483[1275] + 120, 0.0f, 4);
		Function_518(12, 3);
		Function_522(&Global_17483[1275] + 120);
		Function_529(13, 2, 40, 10, 25, 2, 0, 0, 16, "$/content/Ambient/Beacons/beacon_escort_wavedown", 31, 2, 170.0f, 25, 55, 0);
		Function_528(&Global_17483[1375] + 120, 1, 8.0f, 64, 752);
		Function_527(&Global_17483[1375] + 120, 12.0f);
		Function_524(&Global_17483[1375] + 120, 4.0f);
		Function_521(&Global_17483[1375] + 120, 15.9f, 4.0f);
		Function_520(&Global_17483[1375] + 120, 0.4f, 8.0f);
		Function_526(&Global_17483[1375] + 120, 0.0f, 4);
		Function_518(13, 3);
	}
	else
	{
		Function_523(22, "$/content/Ambient/Traffic/tevent_lone_lawman");
		Function_523(33, "$/content/Ambient/Traffic/tevent_rowdy_gangs");
		Function_523(36, "$/content/Ambient/Traffic/tevent_town_buildingEnter");
		Function_523(44, "$/content/Ambient/Traffic/tevent_wilderness_pisser");
		Function_523(37, "$/content/Ambient/Beacons/beacon_transport_dynomite");
		Function_523(12, "$/content/Ambient/Beacons/beacon_escort_criminals");
		Function_523(13, "$/content/Ambient/Beacons/beacon_escort_wavedown");
		Function_523(13, "$/content/Ambient/Traffic/tevent_town_buildingEnter");
	}
	Function_529(49, 2, 125, 4294967246, 50, 3, 32768, 0, 16, "$/content/Ambient/Roaming/event_proc_matkdef", 31, 2, 160.0f, 8, 70, 0);
	Function_519(&Global_17483[4975] + 120, 2, 1);
	Function_518(49, 1);
	Function_523(45, "$/content/Ambient/Roaming/mh_named_bear");
	Function_523(46, "$/content/Ambient/Roaming/mh_named_boar");
	Function_523(47, "$/content/Ambient/Roaming/mh_named_cougar");
	Function_523(48, "$/content/Ambient/Roaming/mh_named_wolf");
	Function_523(2, "$/content/Ambient/Town/beat_crime_holdup");
	Function_523(33, "$/content/Ambient/Traffic/tevent_rowdy_gangs");
	Function_523(9, "$/content/Ambient/Town/beat_duel_notoriety");
	Function_523(8, "$/content/Ambient/Town/beat_duel_lowhonor");
	Function_523(10, "$/content/Ambient/Town/beat_duel_rude");
	Function_523(41, "$/content/Ambient/Town/event_unforgiven");
	Function_523(18, "$/content/Ambient/Roaming/event_hangingb");
	Function_523(15, "$/Content/Ambient/Town/first_time_duel");
	Function_523(35, "$/content/Ambient/Town/beat_town_abduction");
	Function_523(14, "$/Content/Ambient/Town/first_time_chuparosa");
	Function_523(11, "$/Content/Ambient/Town/beat_escalera_firesquad");
	Function_523(21, "$/content/Ambient/Roaming/event_last_buffalo");
	Function_523(16, "$/Content/Ambient/Town/first_time_manzanita");
	Function_523(7, "$/content/Ambient/Roaming/event_donkey_lead");
	Function_523(28, "$/content/Ambient/Roaming/event_roadside_aftermath");
	Function_523(27, "$/content/Ambient/MexicanRevolution/mexican_rev_rally");
	Function_523(30, "$/content/Ambient/Roaming/event_roadside_execution");
	Function_517();
	return;
}

void Function_517() //Position: 0x20479 / 132217
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

void Function_518(int iParam0, int iParam1) //Position: 0x20496 / 132246
{
	Global_17483[iParam075].f_272 = iParam1;
	return;
}

void Function_519(int iParam0, int iParam1, int iParam2) //Position: 0x204A8 / 132264
{
	iParam0->f_120 = iParam1;
	(iParam0 + 120)->f_4 = iParam2;
	return;
}

void Function_520(int iParam0, float fParam1, int iParam2) //Position: 0x204BC / 132284
{
	(iParam0 + 60)->f_52 = fParam1;
	(iParam0 + 60)->f_56 = iParam2;
	return;
}

void Function_521(int iParam0, float fParam1, int iParam2) //Position: 0x204D2 / 132306
{
	(iParam0 + 60)->f_44 = fParam1;
	(iParam0 + 60)->f_48 = iParam2;
	return;
}

void Function_522(int iParam0) //Position: 0x204E8 / 132328
{
	iParam0->f_16 = 1;
	return;
}

void Function_523(int iParam0, bool bParam1) //Position: 0x204F3 / 132339
{
	if (!Function_511(iParam0))
	{
		return;
	}
	Global_17483[iParam075].f_96 = GET_ASSET_ID(bParam1, 4);
	return;
}

void Function_524(int iParam0, int iParam1) //Position: 0x20512 / 132370
{
	(iParam0 + 60)->f_32 = iParam1;
	return;
}

void Function_525(int iParam0, float fParam1, int iParam2) //Position: 0x20520 / 132384
{
	(iParam0 + 60)->f_44 = fParam1;
	(iParam0 + 60)->f_52 = iParam2;
	return;
}

void Function_526(int iParam0, float fParam1, int iParam2) //Position: 0x20536 / 132406
{
	(iParam0 + 60)->f_24 = fParam1;
	(iParam0 + 60)->f_12 = iParam2;
	return;
}

void Function_527(int iParam0, int iParam1) //Position: 0x2054C / 132428
{
	(iParam0 + 60)->f_20 = iParam1;
	return;
}

void Function_528(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4) //Position: 0x2055A / 132442
{
	iParam0->f_60 = iParam1;
	(iParam0 + 60)->f_4 = fParam2;
	(iParam0 + 60)->f_8 = iParam3;
	(iParam0 + 60)->f_16 = iParam4;
}

void Function_529(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9, int iParam10, int iParam11, float fParam12, int iParam13, bool bParam14, int iParam15) //Position: 0x20580 / 132480
{
	var uVar0;
	int iVar1;
	bool bVar2;
	char* cVar3[64];
	
	if (!Function_511(iParam0))
	{
		return;
	}
	Global_17483[iParam075][0] = iParam2;
	Global_17483[iParam075][1] = iParam3;
	Global_17483[iParam075][2] = iParam4;
	(*&Global_17483[iParam075] + 16)[0] = ROUND((IntToFloat(iParam2) * 0.5f));
	(*&Global_17483[iParam075] + 16)[1] = ROUND((IntToFloat(iParam3) * 0.5f));
	(*&Global_17483[iParam075] + 16)[2] = ROUND((IntToFloat(iParam4) * 0.5f));
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
	if (!Function_71())
	{
		Global_63398 = 30.0f;
	}
	else
	{
		Global_63398 = (30.0f * 0.8f);
	}
	if (!UNK_0x214AFB8C(Global_16876[iParam06].f_20))
	{
		iVar1 = MAKE_TIME_OF_DAY_EX(1, 0, 0, 0);
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
					bVar2 = Function_251(1200);
					bVar2 = RAND_INT_RANGE(30, bVar2);
				}
				ADD_TIME(&iVar1, 0, 7, bVar2, 0);
			}
		}
		Function_530(iParam0, Global_17483[iParam075].f_96);
		Global_17483[iParam075].f_264 = iVar1;
		Global_16876[iParam06] = iVar1;
	}
	else
	{
		Global_17483[iParam075].f_264 = Global_16876[iParam06];
	}
	bParam14 = Function_251(bParam14 * 60);
	ADD_TIME(&uVar0, 0, false, bParam14, 0);
	Global_17483[iParam075].f_260 = uVar0;
	Global_17483[iParam075].f_268 = -1.0f;
	Global_17483[iParam075].f_276 = 4294967295;
	Global_17483[iParam075].f_272 = 4294967295;
	strcpy(&cVar3, "RUN ", 64);
	stradd(&cVar3, bParam9, 64);
	Global_25263++;
}

int Function_530(int iParam0, int iParam1) //Position: 0x20928 / 133416
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	Global_16876[iParam06].f_20 = iParam1;
	return 1;
}

void Function_531() //Position: 0x20949 / 133449
{
	return;
}

void Function_532(int iParam0) //Position: 0x2094F / 133455
{
	strcpy(iParam0 + 12, "BEAT VALIDATORC", 16);
	*iParam0 = 84224;
	iParam0->f_4 = 133513;
	iParam0->f_8 = 84224;
	iParam0->f_28 = 1;
	return;
}

int Function_533() //Position: 0x20989 / 133513
{
	if (Function_5(1024))
	{
		Function_534();
	}
	return 0;
}

void Function_534() //Position: 0x2099C / 133532
{
	var uVar0;
	
	if (bLocal_510)
	{
		Function_535(&uVar0);
	}
	return;
}

void Function_535(int iParam0) //Position: 0x209AD / 133549
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
		if (Function_537(iVar2, iParam0))
		{
			Function_536(iVar2);
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

void Function_536(int iParam0) //Position: 0x20A0A / 133642
{
	if (Global_25264 > 55)
	{
		LOG_ERROR("giNumValidBeats is higher than CONST_MaxNumValidBeats");
	}
	Global_25059[Global_25264] = iParam0;
	Global_25264++;
	return;
}

bool Function_537(int iParam0, int iParam1) //Position: 0x20A65 / 133733
{
	int iVar0;
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
		Function_363(0, 0);
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
		iVar0 = GET_TIME_OF_DAY();
		ADD_TIME(&iVar0, 0, 10, false, 0);
	}
	else
	{
		iVar0 = GET_TIME_OF_DAY();
	}
	if (IS_EARLIER_THAN(iVar0, Global_17483[iParam075].f_264))
	{
		return 0;
	}
	iVar1 = StackVal;
	bVar2 = StackVal;
	if (!Function_109(StackVal, 0) && Global_3365)
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
		if (Function_402(Global_17483[iParam075].f_88) == 1)
		{
			return 0;
		}
	}
	if (iVar1 & 8192 == 8192)
	{
		if (Function_92() <= 6)
		{
			return 0;
		}
	}
	if (iVar1 & 16384 == 16384)
	{
		if (Function_92() >= 0)
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
		if (!Function_556())
		{
			return 0;
		}
	}
	if (iVar1 & 2048 == 2048)
	{
		if (!Function_555(GET_ASSET_NAME(Global_17483[iParam075].f_96, 4)))
		{
			return 0;
		}
	}
	if (Global_17483[iParam075].f_92 == 4294967294)
	{
		Global_17483[iParam075].f_92 = Global_29006;
	}
	if (!Function_554(Global_17483[iParam075].f_84, iParam1))
	{
		return 0;
	}
	if (!Function_509(Global_17483[iParam075].f_96))
	{
		return 0;
	}
	if (!Global_17483[iParam075].f_272 != 4294967295)
	{
		if (!Function_553(Global_17483[iParam075].f_272))
		{
			return 0;
		}
	}
	switch (Global_17483[iParam075].f_120)
	{
		case 0x00000004:
			if (!Function_550((&Global_17483[iParam075] + 120)->f_120) < 0)
			{
				return 0;
			}
			break;
		
		case 0x00000007:
			switch ((&Global_17483[iParam075] + 120)->f_128)
			{
				case 0x00000001:
					bVar3 = Function_547(Global_29004, Global_29005, Global_29006, bVar2, 1);
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
						bVar3 = Function_547(Global_29004, Global_29005, Global_29006, (bVar2 + iVar5), 1);
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
				if (!Function_546())
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
			if (!Function_545())
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
			if (!Function_543())
			{
				return 0;
			}
			break;
		
		case 0x00000004:
			if (Global_3403 || Global_3405)
			{
				return 0;
			}
			if (!Function_541(1))
			{
				return 0;
			}
			if (!Function_540(StackVal, 0, Global_26361.f_12))
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
			if (!Function_539(1, 0))
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
			if (!Function_538())
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
	if (!Global_17483[iParam075].f_276 != 4294967295 && !Global_17483[iParam075].f_276 != Function_221())
	{
		return 0;
	}
	return 1;
}

bool Function_538() //Position: 0x20FAC / 135084
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
	if (!IS_EARLIER_THAN(Global_12976.f_12, 0))
	{
		return 0;
	}
	if (IS_EARLIER_THAN(Global_12976.f_16, 0))
	{
		return 1;
	}
	return 0;
}

bool Function_539(int iParam0, int iParam1) //Position: 0x21007 / 135175
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

bool Function_540(int iParam0, int iParam1, bool bParam2) //Position: 0x2106A / 135274
{
	if (!Function_161(bParam2) && iParam1 != 0)
	{
		return 0;
	}
	if ((!iParam1 != (*&Global_26316 + 72)[iParam0] && !iParam1 != 0) && !Function_366(0x1000000))
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

bool Function_541(bool bParam0) //Position: 0x210BD / 135357
{
	if (Function_366(256))
	{
		return 0;
	}
	if (Function_366(262144))
	{
		return 0;
	}
	if (Function_542())
	{
		return 0;
	}
	if (!Function_366(1))
	{
		return 0;
	}
	if (!Function_366(4096))
	{
		return 0;
	}
	if (bParam0 && Function_37(12))
	{
		return 0;
	}
	if (Global_3378)
	{
		return 0;
	}
	if (Function_366(2048))
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

bool Function_542() //Position: 0x21133 / 135475
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

bool Function_543() //Position: 0x2114C / 135500
{
	if (Function_544() != 0 && Global_3365)
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
	if (IS_EARLIER_THAN(Global_12976.f_20, 0) || Global_3400)
	{
		return 1;
	}
	return 0;
}

int Function_544() //Position: 0x211B7 / 135607
{
	return Global_12976.f_156;
}

bool Function_545() //Position: 0x211C2 / 135618
{
	if (!IS_EARLIER_THAN(Global_12976, 0))
	{
		return 0;
	}
	return 1;
}

bool Function_546() //Position: 0x211D6 / 135638
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

bool Function_547(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x21221 / 135713
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
								return Function_548(&Global_6298, &Global_7189, bParam3);
								break;
							
							case 0x00000001:
								return Function_548(&Global_6364, &Global_7287, bParam3);
								break;
							
							case 0x00000002:
								return Function_548(&Global_6351, &Global_7268, bParam3);
								break;
							
							default:
								return Function_548(&Global_6391, &Global_7327, bParam3);
								break;
						}
						break;
					
					case 0x00000001:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_548(&Global_6501, &Global_7490, bParam3);
								break;
							
							case 0x00000001:
								return Function_548(&Global_6402, &Global_7343, bParam3);
								break;
							
							case 0x00000003:
								return Function_548(&Global_6433, &Global_7389, bParam3);
								break;
							
							case 0x00000002:
								return Function_548(&Global_6490, &Global_7474, bParam3);
								break;
							
							case 0x00000004:
								return Function_548(&Global_6537, &Global_7543, bParam3);
								break;
							
							default:
								return Function_548(&Global_6532, &Global_7536, bParam3);
								break;
						}
						break;
					
					case 0x00000002:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_548(&Global_6563, &Global_7581, bParam3);
								break;
							
							case 0x00000001:
								return Function_548(&Global_6614, &Global_7657, bParam3);
								break;
							
							case 0x00000002:
								return Function_548(&Global_6643, &Global_7700, bParam3);
								break;
							
							default:
								return Function_548(&Global_6550, &Global_7562, bParam3);
								break;
						}
						break;
					
					case 0x00000003:
						switch (bVar1)
						{
							case 0x00000001:
								return Function_548(&Global_6667, &Global_7735, bParam3);
								break;
							
							default:
								return Function_548(&Global_6704, &Global_7790, bParam3);
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
								return Function_548(&Global_6709, &Global_7797, bParam3);
								break;
							
							case 0x00000001:
								return Function_548(&Global_6764, &Global_7879, bParam3);
								break;
							
							case 0x00000002:
								return Function_548(&Global_6785, &Global_7910, bParam3);
								break;
							
							default:
								return Function_548(&Global_6810, &Global_7947, bParam3);
								break;
						}
						break;
					
					case 0x00000002:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_548(&Global_6815, &Global_7954, bParam3);
								break;
							
							default:
								return Function_548(&Global_6928, &Global_8122, bParam3);
								break;
						}
						break;
					
					case 0x00000001:
						switch (bVar1)
						{
							case 0x00000002:
								return Function_548(&Global_6933, &Global_8129, bParam3);
								break;
							
							case 0x00000001:
								return Function_548(&Global_6962, &Global_8172, bParam3);
								break;
							
							case 0x00000003:
								return Function_548(&Global_6987, &Global_8209, bParam3);
								break;
							
							default:
								return Function_548(&Global_7027, &Global_8268, bParam3);
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
		return Function_548(&Global_6298, &Global_7189, bParam3);
	}
	if (bVar1 == Global_30640[1])
	{
		return Function_548(&Global_6364, &Global_7287, bParam3);
	}
	if (bVar1 == Global_30640[2])
	{
		return Function_548(&Global_6351, &Global_7268, bParam3);
	}
	if (bVar1 == Global_30658[0])
	{
		return Function_548(&Global_6501, &Global_7490, bParam3);
	}
	if (bVar1 == Global_30658[1])
	{
		return Function_548(&Global_6402, &Global_7343, bParam3);
	}
	if (bVar1 == Global_30658[3])
	{
		return Function_548(&Global_6433, &Global_7389, bParam3);
	}
	if (bVar1 == Global_30658[2])
	{
		return Function_548(&Global_6490, &Global_7474, bParam3);
	}
	if (bVar1 == Global_30658[4])
	{
		return Function_548(&Global_6537, &Global_7543, bParam3);
	}
	if (bVar1 == Global_30668[0])
	{
		return Function_548(&Global_6563, &Global_7581, bParam3);
	}
	if (bVar1 == Global_30668[1])
	{
		return Function_548(&Global_6614, &Global_7657, bParam3);
	}
	if (bVar1 == Global_30668[2])
	{
		return Function_548(&Global_6643, &Global_7700, bParam3);
	}
	if (bVar1 == Global_30679[1])
	{
		return Function_548(&Global_6667, &Global_7735, bParam3);
	}
	if (bVar1 == Global_30685[0])
	{
		return Function_548(&Global_6709, &Global_7797, bParam3);
	}
	if (bVar1 == Global_30685[1])
	{
		return Function_548(&Global_6764, &Global_7879, bParam3);
	}
	if (bVar1 == Global_30685[2])
	{
		return Function_548(&Global_6785, &Global_7910, bParam3);
	}
	if (bVar1 == Global_30693[0])
	{
		return Function_548(&Global_6815, &Global_7954, bParam3);
	}
	if (bVar1 == Global_30707[2])
	{
		return Function_548(&Global_6933, &Global_8129, bParam3);
	}
	if (bVar1 == Global_30707[1])
	{
		return Function_548(&Global_6962, &Global_8172, bParam3);
	}
	if (bVar1 == Global_30707[3])
	{
		return Function_548(&Global_6987, &Global_8209, bParam3);
	}
	if (bVar1 == Global_30628[0])
	{
		return Function_548(&Global_6391, &Global_7327, bParam3);
	}
	if (bVar1 == Global_30628[1])
	{
		return Function_548(&Global_6532, &Global_7536, bParam3);
	}
	if (bVar1 == Global_30628[2])
	{
		return Function_548(&Global_6550, &Global_7562, bParam3);
	}
	if (bVar1 == Global_30628[3])
	{
		return Function_548(&Global_6704, &Global_7790, bParam3);
	}
	if (bVar1 == Global_30633[0])
	{
		return Function_548(&Global_6810, &Global_7947, bParam3);
	}
	if (bVar1 == Global_30633[2])
	{
		return Function_548(&Global_6928, &Global_8122, bParam3);
	}
	if (bVar1 == Global_30633[1])
	{
		return Function_548(&Global_7027, &Global_8268, bParam3);
	}
	return "";
}

var Function_548(var uParam0, var uParam1, bool bParam2) //Position: 0x21836 / 137270
{
	int iVar0;
	
	iVar0 = bParam2;
	if (iVar0 <= *uParam0 || iVar0 > 0)
	{
		return "";
	}
	if (!Function_549(uParam0[iVar02], 2))
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

bool Function_549(var uParam0, int iParam1) //Position: 0x21888 / 137352
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_550(int iParam0) //Position: 0x218A4 / 137380
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
			if (Function_551(GET_SQUAD_FROM_OBJECT(bVar2)) == iParam0)
			{
				iVar0++;
			}
			bVar2 = OBJECT_ITERATOR_NEXT(bVar1);
		}
	}
	DESTROY_ITERATOR(bVar1);
	return iVar0;
}

int Function_551(bool bParam0) //Position: 0x218FF / 137471
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return 4294967295;
	}
	bVar0 = Function_552(bParam0);
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

int Function_552(bool bParam0) //Position: 0x21937 / 137527
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

bool Function_553(int iParam0) //Position: 0x2197D / 137597
{
	if (iParam0 >= 4294967295 && iParam0 <= 4)
	{
		return 0;
	}
	return Global_25965[iParam0];
}

bool Function_554(int iParam0, int iParam1) //Position: 0x21998 / 137624
{
	if ((*iParam1 && iParam0) == iParam0)
	{
		return 1;
	}
	if (Function_510(iParam0))
	{
		*iParam1 = (*iParam1 || iParam0);
		return 1;
	}
	return 0;
}

bool Function_555(bool bParam0) //Position: 0x219C2 / 137666
{
	if (STRING_CONTAINS_STRING(bParam0, "nnotoriety"))
	{
		if (Function_544() >= 1 && Global_3365)
		{
			return 0;
		}
	}
	if (STRING_CONTAINS_STRING(bParam0, "lowhonor"))
	{
		if (Function_92() <= 3 && Global_3365)
		{
			return 0;
		}
	}
	if (!IS_EARLIER_THAN(Global_12976.f_76, 0))
	{
		return 0;
	}
	if (Global_3367)
	{
		return 0;
	}
	return 1;
}

bool Function_556() //Position: 0x21A26 / 137766
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
	if (Function_557())
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
	if (!IS_EARLIER_THAN(Global_12976.f_20, 0) && !Global_3400)
	{
		return 0;
	}
	return 1;
}

bool Function_557() //Position: 0x21ADA / 137946
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
						if (Function_558(StackVal, Global_34573) > IntToFloat(iVar1))
						{
							return 1;
						}
					}
				}
			}
			if (Function_558(StackVal, Global_34573) > IntToFloat(iVar1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

float Function_558(bool bParam0, bool bParam1) //Position: 0x21B95 / 138133
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_OBJECT_VALID(bParam1))
		{
			Function_73(bParam0);
			vVar0 = { StackVal, StackVal, Function_73(bParam0) };
			Function_559(bParam1);
			vVar3 = { StackVal, StackVal, Function_559(bParam1) };
			return VDIST(vVar0, vVar3);
		}
	}
	LOG_ERROR("Attempting to get distance between actor and object, where at least one is INVALID! Returning 0.0!");
	return 0.0f;
}

vector3 Function_559(bool bParam0) //Position: 0x21C35 / 138293
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

void Function_560(int iParam0) //Position: 0x21CA1 / 138401
{
	strcpy(iParam0 + 12, "BEAT VALIDATORB", 16);
	*iParam0 = 84224;
	iParam0->f_4 = 138459;
	iParam0->f_8 = 84224;
	iParam0->f_28 = 1;
	return;
}

int Function_561() //Position: 0x21CDB / 138459
{
	if (Function_5(1024))
	{
		Function_562();
	}
	return 0;
}

void Function_562() //Position: 0x21CEE / 138478
{
	var uVar0;
	
	if (bLocal_510)
	{
		Function_563(&uVar0);
	}
	return;
}

void Function_563(int iParam0) //Position: 0x21CFF / 138495
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
		if (Function_537(iVar2, iParam0))
		{
			Function_536(iVar2);
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

void Function_564(int iParam0) //Position: 0x21D5C / 138588
{
	strcpy(iParam0 + 12, "BEAT VALIDATORA", 16);
	*iParam0 = 84224;
	iParam0->f_4 = 138646;
	iParam0->f_8 = 84224;
	iParam0->f_28 = 1;
	return;
}

int Function_565() //Position: 0x21D96 / 138646
{
	if (Function_5(1024))
	{
		Function_566();
	}
	return 0;
}

void Function_566() //Position: 0x21DA9 / 138665
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
			Function_570(0);
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
		Function_363(0, 0);
		bLocal_510 = false;
		return;
	}
	if (Global_3395)
	{
		Function_363(1, 0);
		bLocal_510 = false;
		return;
	}
	if (!Function_569(Global_29006))
	{
		bLocal_510 = false;
		return;
	}
	bLocal_510 = Function_568();
	if (bLocal_510)
	{
		Function_567(&uVar2);
	}
	return;
}

void Function_567(int iParam0) //Position: 0x21EF3 / 138995
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
		if (Function_537(iVar3, iParam0))
		{
			Function_536(iVar3);
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

int Function_568() //Position: 0x21F76 / 139126
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

bool Function_569(bool bParam0) //Position: 0x21FB5 / 139189
{
	if (!Function_161(bParam0))
	{
		return 1;
	}
	return Function_160(&(Global_29008[bParam0]), 4);
}

void Function_570(bool bParam0) //Position: 0x21FD1 / 139217
{
	if (bParam0)
	{
		Function_354(0x10000000);
	}
	else
	{
		Function_571(0x10000000);
	}
	Global_26316.f_172 = 0;
	return;
}

void Function_571(int iParam0) //Position: 0x21FF5 / 139253
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

void Function_572(int iParam0) //Position: 0x22012 / 139282
{
	strcpy(iParam0 + 12, "JOB HANDLER", 16);
	*iParam0 = 140911;
	iParam0->f_4 = 139342;
	iParam0->f_8 = 139336;
	iParam0->f_28 = 0;
	return;
}

void Function_573() //Position: 0x22048 / 139336
{
	return;
}

int Function_574() //Position: 0x2204E / 139342
{
	if (Function_1() || Global_3419)
	{
		if (Function_589())
		{
			Function_588(0);
		}
	}
	else if (Global_3403 && Function_589())
	{
		Function_588(0);
	}
	else if (!Global_3403 && !Function_589())
	{
		Function_588(1);
	}
	Function_575(&Global_62484);
	return 0;
}

void Function_575(int iParam0) //Position: 0x22093 / 139411
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	
	bVar1 = Function_188();
	if (!IS_ACTOR_VALID(bVar1))
	{
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			if (IS_OBJECT_VALID(iParam0[iVar014]->f_32))
			{
				Function_587(iParam0, iVar0);
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
			iVar2 = GET_ACTOR_FROM_PERS_CHAR(iParam0[iVar014]->f_28);
		}
		if (!Function_589() || Global_3380)
		{
			if (IS_OBJECT_VALID(iParam0[iVar014]->f_32))
			{
				Function_587(iParam0, iVar0);
			}
		}
		else if (Function_586(iParam0[iVar014], 16))
		{
			if ((IS_SCRIPT_VALID(StackVal) || Global_3392) || Function_585(iVar2))
			{
				Function_587(iParam0, iVar0);
			}
			else if (Function_586(iParam0[iVar014], 2))
			{
				Function_584(iParam0[iVar014], 2);
				Function_583(iParam0[iVar014]);
				Function_582(iParam0[iVar014], 8);
			}
			else if (Function_586(iParam0[iVar014], 8))
			{
				if (Function_578(iParam0[iVar014]->f_12, iParam0[iVar014]->f_24, iParam0[iVar014]->f_52) && !IS_ACTOR_RIDING_VEHICLE(bVar1))
				{
					if (IS_PERS_CHAR_VALID(iParam0[iVar014]->f_28))
					{
						if (!IS_PERS_CHAR_ALIVE(iParam0[iVar014]->f_28))
						{
							if (!Function_48(Global_76846, 32768))
							{
								Function_43(Function_188(), 32768, 1, 0);
							}
							Function_587(iParam0, iVar0);
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
							iParam0[iVar014]->f_32 = Function_225(StackVal, StackVal, Global_30616, Function_83(), *(iParam0[iVar014] + 36), 0.0f, 0.0f, 0.0f, Global_34573, 2.0f, 0, 3, iParam0[iVar014]->f_48, 3, 1, 3212836864, 3212836864, 1);
							if (Function_577(iVar0))
							{
								Function_140(StackVal, StackVal, iParam0[iVar014]->f_24, ((10 + iVar0) - 1), *(iParam0[iVar014] + 36), iParam0[iVar014]->f_52);
							}
							UNK_0x1E98AFEC(GET_BLIP_ON_OBJECT(iParam0[iVar014]->f_32), 1);
							SET_BLIP_MAX_DISTANCE(GET_BLIP_ON_OBJECT(iParam0[iVar014]->f_32), 1.25f);
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
					Function_587(iParam0, iVar0);
				}
				if (IS_OBJECT_VALID(iParam0[iVar014]->f_32))
				{
					if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(iParam0[iVar014]->f_32)))
					{
						if (!Function_577(iVar0))
						{
							if (Function_208(StackVal, StackVal, *(iParam0[iVar014] + 36), 1.25f))
							{
								if (Function_576(iVar0, 1))
								{
									Function_140(StackVal, StackVal, iParam0[iVar014]->f_24, ((10 + iVar0) - 1), *(iParam0[iVar014] + 36), iParam0[iVar014]->f_52);
									SET_BLIP_BLINK(GET_BLIP_ON_OBJECT(iParam0[iVar014]->f_32), 1, 0, 10.0f);
								}
							}
						}
					}
				}
			}
			if (!iParam0[iVar014]->f_24 != Global_29006)
			{
				Function_584(iParam0[iVar014], 16);
			}
		}
		else if (iParam0[iVar014]->f_24 == Global_29006)
		{
			Function_582(iParam0[iVar014], 16);
		}
		iVar0++;
	}
	return;
}

bool Function_576(int iParam0, bool bParam1) //Position: 0x223A5 / 140197
{
	int iVar0;
	
	iVar0 = ((10 + iParam0) - 1);
	return Function_206(iVar0, bParam1);
}

bool Function_577(int iParam0) //Position: 0x223BB / 140219
{
	int iVar0;
	
	iVar0 = ((10 + iParam0) - 1);
	if (iVar0 > 0 || iVar0 <= Global_26031)
	{
		return 1;
	}
	return Global_26031[iVar0];
}

int Function_578(bool bParam0, bool bParam1, int iParam2) //Position: 0x223E1 / 140257
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	
	if (!Function_589())
	{
		return 0;
	}
	if (Global_3403 || Global_3404)
	{
		return 0;
	}
	if (!Function_581(bParam0))
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
	iVar0 = Function_100(bParam1, bParam0, 6);
	if (!Function_4(iVar0))
	{
		return 0;
	}
	if (Global_3365)
	{
		bVar1 = Function_223(iVar0);
		if (GET_DAY(bVar1) != 0)
		{
			iVar2 = GET_TIME_OF_DAY();
			if (bParam0 != 1)
			{
				if (GET_DAY(bVar1) > GET_DAY(false))
				{
					return 0;
				}
			}
			iVar3 = Function_223(iVar0);
			ADD_TIME(&iVar3, 0, 16, false, 0);
			if (IS_LATER_THAN(iVar3, 0))
			{
				return 0;
			}
		}
	}
	if (!iParam2 != 63)
	{
		if (!TIME_IS_IN_RANGE(GET_TIME_OF_DAY(), Function_580(iParam2), Function_579(iParam2)))
		{
			return 0;
		}
	}
	if (IS_SCRIPT_VALID(StackVal) || Function_586(&(Global_62484[bParam014]), 2))
	{
		return 0;
	}
	if (Function_586(&(Global_62484[bParam014]), 1))
	{
		return 0;
	}
	return 1;
}

var Function_579(int iParam0) //Position: 0x224D3 / 140499
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 & 33 == 32)
	{
		iVar0 = 5;
	}
	else if (iParam0 & 3 == 1)
	{
		iVar0 = 7;
	}
	else if (iParam0 & 6 == 2)
	{
		iVar0 = 11;
	}
	else if (iParam0 & 12 == 4)
	{
		iVar0 = 14;
	}
	else if (iParam0 & 24 == 8)
	{
		iVar0 = 18;
	}
	else if (iParam0 & 48 == 16)
	{
		iVar0 = 22;
	}
	return MAKE_TIME_OF_DAY(iVar0, 0, 0);
}

var Function_580(int iParam0) //Position: 0x2253F / 140607
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 & 33 == 1)
	{
		iVar0 = 5;
	}
	else if (iParam0 & 3 == 2)
	{
		iVar0 = 7;
	}
	else if (iParam0 & 6 == 4)
	{
		iVar0 = 11;
	}
	else if (iParam0 & 12 == 8)
	{
		iVar0 = 14;
	}
	else if (iParam0 & 24 == 16)
	{
		iVar0 = 18;
	}
	else if (iParam0 & 48 == 32)
	{
		iVar0 = 22;
	}
	return MAKE_TIME_OF_DAY(iVar0, 0, 0);
}

bool Function_581(int iParam0) //Position: 0x225AB / 140715
{
	if (iParam0 >= 0 && iParam0 <= 3)
	{
		return 0;
	}
	return Global_25970[iParam0];
}

void Function_582(var uParam0, int iParam1) //Position: 0x225C6 / 140742
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_583(int iParam0) //Position: 0x225D5 / 140757
{
	*iParam0 = 8;
	return;
}

void Function_584(var uParam0, int iParam1) //Position: 0x225E0 / 140768
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

int Function_585(bool bParam0) //Position: 0x225F7 / 140791
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

bool Function_586(var uParam0, int iParam1) //Position: 0x22613 / 140819
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (iVar0 == 0)
	{
		return 0;
	}
	return 1;
}

void Function_587(var uParam0, int iParam1) //Position: 0x2262A / 140842
{
	if (IS_OBJECT_VALID(uParam0[iParam114]->f_32))
	{
		Function_224(uParam0[iParam114]->f_32);
	}
	return;
}

void Function_588(bool bParam0) //Position: 0x22649 / 140873
{
	if (bParam0)
	{
		Function_226(512);
	}
	else
	{
		Function_426(512);
	}
	return;
}

bool Function_589() //Position: 0x22663 / 140899
{
	return Function_5(512);
}

void Function_590() //Position: 0x2266F / 140911
{
	Function_591(&Global_62484);
	return;
}

void Function_591(int iParam0) //Position: 0x2267B / 140923
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Function_582(iParam0[iVar014], 8);
		iVar0++;
	}
	return;
}

void Function_592(int iParam0) //Position: 0x2269E / 140958
{
	strcpy(iParam0 + 12, "HORSE SERVER", 16);
	*iParam0 = 143640;
	iParam0->f_4 = 141025;
	iParam0->f_8 = 141013;
	iParam0->f_28 = 1;
	return;
}

void Function_593() //Position: 0x226D5 / 141013
{
	DESTROY_LAYOUT(bLocal_498);
	return;
}

int Function_594() //Position: 0x226E1 / 141025
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
					Function_614(bVar1, bLocal_497);
				}
				else
				{
					Function_595(bVar1, bLocal_497);
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

void Function_595(bool bParam0, bool bParam1) //Position: 0x22756 / 141142
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	
	bVar0 = Function_613(bParam0);
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
				Function_612(bParam0, bVar7);
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
	bVar9 = Function_596(StackVal, StackVal, vVar1, 30.0f, bParam0, bParam1);
	if (IS_ACTOR_VALID(bVar9) && IS_ACTOR_VALID(bParam0))
	{
		Function_612(bParam0, bVar9);
		SET_MOST_RECENT_MOUNT(bParam0, bVar9);
	}
	return;
}

var Function_596(var uParam0, var uParam1, var uParam2, float fParam3, bool bParam4, bool bParam5) //Position: 0x22874 / 141428
{
	bool bVar0;
	vector3 vVar1;
	var uVar4;
	bool bVar5;
	var uVar6;
	vector3 vVar9;
	
	bVar0 = Function_610(GET_GC_LAYOUT(), &uParam0, fParam3);
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
		bVar5 = Function_597(&uParam0, &vVar1, &uVar4);
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
					bVar0 = CREATE_ACTOR_IN_LAYOUT(GET_GC_LAYOUT(), Function_83(), 976, vVar1, vVar9);
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

int Function_597(var uParam0, var uParam1, Vector3 vParam2) //Position: 0x22A07 / 141831
{
	var uVar0;
	struct<11> Var3;
	struct<15> Var14;
	
	Function_608(&uVar0);
	*vParam2.x = *vParam2.x;
	Function_607(StackVal, StackVal, &Var3, 0, *uParam0, 0.0f, 0.0f, 50.0f, 250.0f, 0x40a00000, 0);
	Function_606(&Var14, 1, 2.5f, 0, 512);
	Function_605(&Var14, 10.0f);
	Function_598(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var3, Var14);
	*uParam1 = { StackVal, StackVal, Function_598(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var3, Var14) };
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

vector3 Function_598(struct<37> Param0) //Position: 0x22AB1 / 142001
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
	else if (!Function_65(StackVal, StackVal, *(&Param0 + 4)))
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
	Function_604(Param0.f_36);
	if (Param0.f_24 > 1.0f && Param0.f_28 > 1.0f)
	{
		Function_602();
	}
	else
	{
		AMBIENT_SET_DISTANCE_FILTER(Param0.f_24, Param0.f_28);
	}
	Function_601(Param0.f_20);
	Function_600(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param11);
	Function_599(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Param11);
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
	Function_285();
	return StackVal, StackVal, Function_285();
}

void Function_599(struct<33> Param0) //Position: 0x22BE3 / 142307
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

void Function_600(struct<5> Param0, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14) //Position: 0x22D0F / 142607
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

void Function_601(bool bParam0) //Position: 0x22D60 / 142688
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

void Function_602() //Position: 0x22E13 / 142867
{
	float fVar0;
	bool bVar1;
	
	Function_603(&fVar0, &bVar1);
	AMBIENT_SET_DISTANCE_FILTER(fVar0, bVar1);
	return;
}

void Function_603(var uParam0, int iParam1) //Position: 0x22E27 / 142887
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

void Function_604(bool bParam0) //Position: 0x22EB0 / 143024
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

void Function_605(var uParam0, int iParam1) //Position: 0x22EF4 / 143092
{
	uParam0->f_20 = iParam1;
	return;
}

void Function_606(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x22F00 / 143104
{
	*uParam0 = uParam1;
	uParam0->f_4 = uParam2;
	uParam0->f_8 = uParam3;
	uParam0->f_16 = uParam4;
	uParam0->f_20 = 0.0f;
	uParam0->f_12 = 4294967295;
}

void Function_607(int iParam0, var uParam1, vector3 vParam2, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10) //Position: 0x22F29 / 143145
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

void Function_608(int iParam0) //Position: 0x22F65 / 143205
{
	if (!Function_609(iParam0))
	{
		Function_33(iParam0, 0.0f);
	}
	return;
}

bool Function_609(int iParam0) //Position: 0x22F7A / 143226
{
	return Function_19(*iParam0, 1);
}

var Function_610(bool bParam0, var uParam1, float fParam2) //Position: 0x22F87 / 143239
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	bVar0 = CREATE_OBJECT_ITERATOR(bParam0);
	ITERATE_ON_OBJECT_TYPE(bVar0, 15);
	ITERATE_ON_PARTIAL_MODEL_NAME(bVar0, "horse");
	ITERATE_IN_SPHERE(bVar0, *uParam1, fParam2);
	bVar2 = START_OBJECT_ITERATOR(bVar0);
	bVar3 = false;
	if (Function_611(bVar2))
	{
		bVar1 = bVar2;
		bVar3 = true;
	}
	while (IS_OBJECT_VALID(bVar2))
	{
		if (Function_611(bVar2))
		{
			bVar3++;
			if (bVar3 >= 1)
			{
				if (RAND_INT_RANGE(false, bVar3) == 1)
				{
					bVar1 = bVar2;
				}
			}
			else
			{
				bVar1 = bVar2;
			}
		}
		bVar2 = OBJECT_ITERATOR_NEXT(bVar0);
	}
	DESTROY_ITERATOR(bVar0);
	return GET_ACTOR_FROM_OBJECT(bVar1);
}

bool Function_611(bool bParam0) //Position: 0x23011 / 143377
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

void Function_612(bool bParam0, bool bParam1) //Position: 0x2305D / 143453
{
	SET_ACTORS_HORSE(bParam0, bParam1);
	MEMORY_REPORT_POSITION_AUTO(bParam0, bParam1, 1);
	return;
}

var Function_613(bool bParam0) //Position: 0x23072 / 143474
{
	return GET_ACTORS_HORSE(bParam0);
}

void Function_614(bool bParam0, var uParam1) //Position: 0x2307D / 143485
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
	bVar7 = Function_596(StackVal, StackVal, vVar1, 30.0f, bParam0, uParam1);
	if (IS_ACTOR_VALID(bVar7))
	{
		SET_MOST_RECENT_MOUNT(bParam0, bVar7);
	}
	return;
}

void Function_615() //Position: 0x23118 / 143640
{
	bLocal_498 = CREATE_LAYOUT("HorseServer");
	Global_16515 = CREATE_OBJECTSET_IN_LAYOUT("HorseServerSet", bLocal_498, 15, 0);
	bLocal_497 = CREATE_OBJECT_ITERATOR(bLocal_498);
	ITERATE_IN_SET(bLocal_497, Global_16515);
	CLEAN_OBJECTSET(Global_16515);
	START_OBJECT_ITERATOR(bLocal_497);
	return;
}

void Function_616(int iParam0) //Position: 0x2316E / 143726
{
	strcpy(iParam0 + 12, "WEATHER", 16);
	*iParam0 = 147687;
	iParam0->f_4 = 143782;
	iParam0->f_8 = 143776;
	iParam0->f_28 = 1;
	return;
}

void Function_617() //Position: 0x231A0 / 143776
{
	return;
}

int Function_618() //Position: 0x231A6 / 143782
{
	if (!HUD_IS_FADED() || NET_IS_IN_SESSION())
	{
		Function_623(&Global_16524);
	}
	Function_622(&Global_16524);
	Function_620(&Global_16517);
	Function_619(&Global_16517);
	return 0;
}

void Function_619(int iParam0) //Position: 0x231D0 / 143824
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
	vVar0.f_4 = (vVar0.y + 1.5f);
	ROTATE_VECTOR_XZ(StackVal, &vVar3, 0);
	VSCALE(&vVar3, (*iParam0 * 2.0f));
	PRINTFLOAT(*iParam0);
	PRINTSTRING(" ");
	PRINTFLOAT(StackVal);
	PRINTNL();
	VSCALE(&vVar3, (iParam0->f_24 * 2.0f));
	vVar6 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar3, vVar0, StackVal) };
	iParam0->f_24 = (iParam0->f_24 + 0.0666f);
	if (iParam0->f_24 < 1.0f)
	{
		iParam0->f_24 = 0.0f;
	}
	return;
}

void Function_620(int iParam0) //Position: 0x2325E / 143966
{
	bool bVar0;
	float fVar1;
	float fVar2;
	bool bVar3;
	
	Function_621(StackVal, &fVar1, &fVar2);
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
			*iParam0 = (*iParam0 + RAND_FLOAT_RANGE(-0.1f, 0.1f));
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
			if (*iParam0 > 0.25f)
			{
				*iParam0 = 0.25f;
			}
			if (StackVal && (StackVal || (StackVal || (Global_63399 != 32 && *iParam0 < 0.175f) != 0 != 1) != 2))
			{
				*iParam0 = 0.175f;
			}
		}
		SET_WIND(StackVal, *iParam0, 5.0f);
		iParam0->f_20 = GET_CURRENT_GAME_TIME();
	}
	return;
}

void Function_621(int iParam0, var uParam1, int iParam2) //Position: 0x233DE / 144350
{
	switch (iParam0)
	{
		case 0x00000000:
		case 0x00000001:
			*uParam1 = 0.25f;
			*iParam2 = 0.5f;
			break;
		
		case 0x00000002:
		case 0x00000005:
			*uParam1 = 0.25f;
			*iParam2 = 0.75f;
			break;
		
		case 0x00000003:
			*uParam1 = 0.5f;
			*iParam2 = 1.0f;
			break;
		
		case 0x00000004:
			*uParam1 = 1.3f;
			*iParam2 = 1.6f;
			break;
		
		default:
			*uParam1 = 0.25f;
			*iParam2 = 0.5f;
			break;
	}
	return;
}

void Function_622(int iParam0) //Position: 0x2346A / 144490
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
			vVar0.f_8 = 0.25f;
			strcpy(&cVar4, "FAIR", 8);
			break;
		
		case 0x00000003:
			vVar0 = 0.5f;
			vVar0.f_4 = 0.5f;
			vVar0.f_8 = 0.5f;
			strcpy(&cVar4, "RAINY", 8);
			break;
		
		case 0x00000000:
			vVar0 = 0.25f;
			vVar0.f_4 = 0.25f;
			vVar0.f_8 = 1.0f;
			strcpy(&cVar4, "CLEAR", 8);
			break;
		
		case 0x00000002:
			vVar0 = 0.5f;
			vVar0.f_4 = 0.5f;
			vVar0.f_8 = 0.5f;
			strcpy(&cVar4, "CLOUDY", 8);
			break;
		
		case 0x00000004:
			vVar0 = 0.5f;
			vVar0.f_4 = 0.5f;
			vVar0.f_8 = 0.5f;
			strcpy(&cVar4, "STORMY", 8);
			break;
		
		case 0x00000005:
			vVar0 = 0.5f;
			vVar0.f_4 = 0.5f;
			vVar0.f_8 = 0.5f;
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
	Var6.f_4 = (StackVal + 1.75f);
	Var6.f_4 = (StackVal + 0.25f);
	if (Global_16524.f_24 < -1.0f)
	{
	}
	if (Global_16524.f_28 < -1.0f)
	{
	}
	return;
}

void Function_623(int iParam0) //Position: 0x235E2 / 144866
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
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
		Function_233(StackVal);
		if (!StackVal != StackVal)
		{
			if (HUD_IS_FADED())
			{
				Function_232(StackVal, 0);
			}
			else
			{
				Function_229(StackVal, MAKE_TIME_OF_DAY(0, Function_251(300), 0), bVar0);
			}
		}
		return;
	}
	if (iParam0->f_16)
	{
		Function_233(StackVal);
		return;
	}
	Function_233(*iParam0);
	bVar3 = 4294967295;
	iVar4 = 4294967295;
	bVar5 = true;
	if (bVar0)
	{
		if (NET_IS_IN_SESSION())
		{
			bVar3 = GET_LOCAL_SLOT();
			iVar4 = Function_631(Global_29005, 1);
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
		iVar6 = Function_629(iVar4);
		if (!iVar6 != 4294967295)
		{
			Function_233(iVar6);
			*iParam0 = iVar6;
			if (!bVar3 != 4294967295)
			{
				Function_628(*iParam0);
			}
			if (!StackVal != *iParam0)
			{
				if (HUD_IS_FADED())
				{
					Function_232(iVar6, 1);
				}
				else
				{
					fVar7 = NET_GET_NET_TIME();
					bVar8 = (Function_625(iVar4) - fVar7);
					if (bVar8 > 10.0f)
					{
						bVar8 = 10.0f;
					}
					bVar9 = ROUND(bVar8);
					if (!bVar3 != 4294967295)
					{
						Function_624((fVar7 + IntToFloat(bVar9)));
					}
					Function_229(iVar6, MAKE_TIME_OF_DAY(0, Function_251(bVar9), 0), 1);
				}
			}
		}
		return;
	}
	if (IS_EARLIER_THAN(iParam0->f_12, 0))
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
				ADD_TIME(iParam0 + 12, 0, false, Function_251(400), 0);
			}
			else
			{
				ADD_TIME(iParam0 + 12, 0, false, Function_251(1200), 0);
			}
			iParam0->f_20 = 0;
		}
		else if (bVar10 <= 6000 && ((iVar1 > 5 || (iVar1 < 6 && iVar1 > 16)) || iVar1 <= 19))
		{
			iParam0->f_12 = GET_TIME_OF_DAY();
			if ((*iParam0 != 3 || *iParam0 != 4) || *iParam0 != 5)
			{
				ADD_TIME(iParam0 + 12, 0, false, Function_251(400), 0);
			}
			else
			{
				ADD_TIME(iParam0 + 12, 0, false, Function_251(1200), 0);
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
				Function_232(*iParam0, 0);
				if (Function_1() && !bVar3 != 4294967295)
				{
					Function_624(0.0f);
				}
			}
			else
			{
				Function_229(*iParam0, MAKE_TIME_OF_DAY(0, Function_251(300), 0), 0);
				if (Function_1() && !bVar3 != 4294967295)
				{
					Function_624((NET_GET_NET_TIME() + 300.0f));
				}
			}
		}
	}
	if (bVar0 && !bVar3 != 4294967295)
	{
		Function_628(*iParam0);
	}
	return;
}

void Function_624(int iParam0) //Position: 0x23ADE / 146142
{
	Global_78480.f_104 = iParam0;
	if (NET_IS_IN_SESSION())
	{
		Global_76943[GET_LOCAL_SLOT()96].f_104 = iParam0;
	}
	return;
}

float Function_625(bool bParam0) //Position: 0x23AFF / 146175
{
	char* cVar0[64];
	
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return Function_627();
	}
	if (!Function_626(bParam0))
	{
		strcpy(&cVar0, "Tried to get weather from bad slot #", 64);
		stradd(&cVar0, I2STR(bParam0), 64);
	}
	return Global_76943[bParam096].f_104;
}

bool Function_626(bool bParam0) //Position: 0x23B58 / 146264
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

var Function_627() //Position: 0x23BF9 / 146425
{
	return Global_78480.f_104;
}

void Function_628(int iParam0) //Position: 0x23C05 / 146437
{
	Global_78480.f_100 = iParam0;
	if (NET_IS_IN_SESSION())
	{
		Global_76943[GET_LOCAL_SLOT()96].f_100 = iParam0;
	}
	return;
}

var Function_629(bool bParam0) //Position: 0x23C26 / 146470
{
	char* cVar0[64];
	
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return Function_630();
	}
	if (!Function_626(bParam0))
	{
		strcpy(&cVar0, "Tried to get weather from bad slot #", 64);
		stradd(&cVar0, I2STR(bParam0), 64);
	}
	return Global_76943[bParam096].f_100;
}

var Function_630() //Position: 0x23C7F / 146559
{
	return Global_78480.f_100;
}

int Function_631(int iParam0, bool bParam1) //Position: 0x23C8B / 146571
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= Global_76943)
	{
		if (Function_626(iVar0))
		{
			if (iVar0 == GET_LOCAL_SLOT())
			{
				if (bParam1)
				{
					if (StackVal != iParam0 && Function_636(32768, 1))
					{
						return iVar0;
					}
				}
			}
			if (Function_634(iVar0) == iParam0)
			{
				if (Function_632(iVar0, 32768, 1))
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return 4294967295;
}

bool Function_632(bool bParam0, bool bParam1, bool bParam2) //Position: 0x23CF4 / 146676
{
	char* cVar0[64];
	bool bVar16;
	
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return Function_636(bParam1, bParam2);
	}
	if (!Function_626(bParam0))
	{
		strcpy(&cVar0, "Tried to get bit ", 64);
		stradd(&cVar0, Function_633(bParam1), 64);
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

var Function_633(int iParam0) //Position: 0x23D75 / 146805
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
		
		case 0x01000000:
			return "FREE_MODE_DEFENSE_ACTIVE";
			break;
		
		case 0x02000000:
			return "PLAYER_IS_GRIEFER";
			break;
		
		case 0x04000000:
			return "CANNOT_AFFORD_MINIGAME";
			break;
		
		case 0x08000000:
			return "FREE_MODE_DEFENSE_SPOONHOLDER";
			break;
	}
	return "UNKNOWN";
}

int Function_634(bool bParam0) //Position: 0x24094 / 147604
{
	if (!Function_626(bParam0))
	{
		return 4294967295;
	}
	if (bParam0 == GET_LOCAL_SLOT())
	{
		return Function_635();
	}
	return StackVal;
}

bool Function_635() //Position: 0x240BB / 147643
{
	return StackVal;
}

int Function_636(bool bParam0, bool bParam1) //Position: 0x240C7 / 147655
{
	int iVar0;
	
	iVar0 = (Global_78480.f_124 && bParam0);
	if (bParam1)
	{
		return iVar0 != bParam0;
	}
	return iVar0 == 0;
}

void Function_637() //Position: 0x240E7 / 147687
{
	if (Global_3364)
	{
		Function_638(&Global_16517, 0x3ec00000, 0);
	}
	Global_16524.f_24 = -1.0f;
	Global_16524.f_28 = -1.0f;
	return;
}

void Function_638(var uParam0, var uParam1, int iParam2) //Position: 0x2410B / 147723
{
	*uParam0 = uParam1;
	uParam0->f_4 = iParam2;
	uParam0->f_8 = -1.0f;
	uParam0->f_12 = -1.0f;
	uParam0->f_16 = 0;
	uParam0->f_20 = GET_CURRENT_GAME_TIME();
	if (*uParam0 > 0.1f)
	{
		*uParam0 = 0.1f;
	}
	SET_WIND(StackVal, *uParam0, 5.0f);
	return;
}

void Function_639(int iParam0) //Position: 0x24151 / 147793
{
	strcpy(iParam0 + 12, "PASSENGER COACH", 16);
	*iParam0 = 84224;
	iParam0->f_4 = 147851;
	iParam0->f_8 = 84224;
	iParam0->f_28 = 1;
	return;
}

var Function_640() //Position: 0x2418B / 147851
{
	int iVar0;
	vector3 vVar1;
	bool bVar4;
	bool bVar5;
	
	iVar0 = 0;
	Function_763();
	if (Global_28842.f_72 != Global_29004)
	{
		if (Function_762(&Global_28842, 512))
		{
			STREAMING_EVICT_ACTOR(Global_28842.f_64, 4294967295);
		}
		Global_28842.f_64 = Function_761(Global_29005, Global_28842.f_64);
		STREAMING_REQUEST_ACTOR(Global_28842.f_64, 1, false);
		Function_760(&Global_28842, 512);
		if (Function_762(&Global_28842, 2048))
		{
			STREAMING_EVICT_ACTOR(Global_28842.f_68, 4294967295);
		}
		Global_28842.f_68 = Function_759(Global_29005, Global_28842.f_68);
		STREAMING_REQUEST_ACTOR(Global_28842.f_68, 1, false);
		Function_760(&Global_28842, 2048);
		Global_28842.f_72 = Global_29004;
	}
	if (Global_3380)
	{
		if (!Function_384(4))
		{
			if (Function_758(&Global_28903))
			{
				Function_755(&Global_28903, 0);
			}
			return iVar0;
		}
	}
	if (!Function_754(1))
	{
		return iVar0;
	}
	if (Global_3395)
	{
		return iVar0;
	}
	if (Function_754(256) && Function_180(4))
	{
		Function_746();
	}
	if (((Function_754(256) && Function_180(4)) && !Global_3395) && !Global_3410)
	{
		if (Function_644(&Global_28903, 0))
		{
			iVar0 = 1;
		}
		Function_641(&Global_28903, 1);
		if (IS_ACTOR_VALID(Global_28903.f_16))
		{
			if (!IS_BLIP_VALID(GET_BLIP_ON_OBJECT(Global_28903.f_16)))
			{
				if (!Function_360(0, 0, 1, 1))
				{
					GET_POSITION(Function_552(StackVal), &vVar1);
					ADD_BLIP_FOR_ACTOR(Global_28903.f_16, 354, 0, 2, 0);
					UNK_0x1E98AFEC(GET_BLIP_ON_OBJECT(Global_28903.f_16), 1);
					SET_BLIP_MAX_DISTANCE(GET_BLIP_ON_OBJECT(Global_28903.f_16), 1.25f);
					Function_140(StackVal, StackVal, Function_84(StackVal, StackVal, vVar1, 1, 1, 0), 20, vVar1, 63);
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

void Function_641(int iParam0, int iParam1) //Position: 0x24373 / 148339
{
	struct<5> Var0;
	char* cVar6[16];
	struct<13> Var10;
	
	if (!Global_30900[1] && iParam1)
	{
		return;
	}
	if (!Function_758(iParam0))
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
	GET_POSITION(Function_552(StackVal), &Var0);
	vVar14 = { 0.0f, 1.0f, 0.0f };
	if (Function_1())
	{
		fVar17 = 0.0f;
		if (!Function_643(iParam0, &fVar17, 0))
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
	Function_642(iParam0 + 24);
	vVar3 = { StackVal, StackVal, Function_642(iParam0 + 24) };
	return;
}

vector3 Function_642(bool bParam0) //Position: 0x244EC / 148716
{
	vector3 vVar0;
	
	vVar0.x = *bParam0;
	vVar0.f_4 = StackVal;
	vVar0.f_8 = StackVal;
	return StackVal, StackVal, vVar0;
}

bool Function_643(int iParam0, var uParam1, bool bParam2) //Position: 0x2450B / 148747
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	
	if (StackVal || !SQUAD_IS_VALID(!Function_758(iParam0)))
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
	else if (iVar4 <= (iVar3 + bVar5))
	{
		*uParam1 = 0.5f;
	}
	else
	{
		*uParam1 = 0.0f;
	}
	return bVar2;
}

bool Function_644(int iParam0, bool bParam1) //Position: 0x245F1 / 148977
{
	var uVar0;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	
	bVar5 = Global_34573;
	Function_745(iParam0, bParam1);
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
			if (!IS_ACTOR_VALID(Function_552(StackVal)))
			{
				*iParam0 = 16;
				return 1;
			}
			if (Function_735(iParam0))
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
				if (!Function_63(Global_30750[6], 4, 23, 1))
				{
					return 0;
				}
			}
			if (Function_725(iParam0, 0))
			{
				Function_719(iParam0, 0);
				*iParam0 = 7;
			}
			else
			{
				*iParam0 = 16;
				return 1;
			}
			break;
		
		case 0x00000004:
			if (!Function_63(Global_30750[6], 4, 23, 1))
			{
				return 0;
			}
			if (Function_695(iParam0))
			{
				if (IS_ACTOR_VALID(Function_552(StackVal)))
				{
					if (Global_29005 != Global_30628[2] || Global_29005 != Global_30637[0])
					{
						SET_ACTOR_WEAPON_REACTION_NO_FLEE_HACK(Function_552(StackVal), 1);
					}
					SET_ACTOR_ALLOW_PLAYER_GREET_RESPONSES(Function_552(StackVal), 0);
					REGISTER_TRAFFIC_ACTOR(Function_552(StackVal), 0);
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
			if (!Function_694(StackVal))
			{
				Global_28842.f_76 = GET_CURRENT_GAME_TIME();
				*iParam0 = 16;
				return 1;
			}
			GET_POSITION(Function_552(StackVal), &uVar0);
			if (iParam0->f_184 + 5.0f) > GET_CURRENT_GAME_TIME()
			{
				Function_105(bVar5);
				if (Function_691(StackVal, StackVal, iParam0, &uVar0, Function_105(bVar5), 0))
				{
					return 1;
				}
			}
			if (Function_687(iParam0, &bVar5, !Function_1()))
			{
				bVar3 = true;
			}
			break;
		
		case 0x00000006:
			if (!Function_676(iParam0))
			{
				if (Global_34165.f_44)
				{
					if (StackVal || StackVal != 1 != 3)
					{
						*iParam0 = 12;
					}
					else
					{
						Function_105(bVar5);
						if (!Function_691(StackVal, StackVal, iParam0, &uVar0, Function_105(bVar5), 1))
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
			if (Function_71())
			{
				if (Function_675(StackVal, Global_34573, 1))
				{
					Function_674(StackVal, Global_34573, 4);
				}
			}
			if (!Function_669(iParam0, 1, iParam0->f_20 > 4))
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
			if (!Function_694(StackVal))
			{
				*iParam0 = 16;
				return 1;
			}
			GET_POSITION(Function_552(StackVal), &uVar0);
			if (!(Global_3410 && iParam0->f_100))
			{
				if (!Function_663(iParam0, Function_668(iParam0->f_124)))
				{
					if (((StackVal || StackVal != 1 != 2) || iParam0->f_124) && !Global_34165.f_44)
					{
						iParam0->f_120 = 1;
					}
					*iParam0 = 16;
					return 1;
				}
			}
			if (!Function_659(iParam0))
			{
				*iParam0 = 6;
				return 1;
			}
			if (iParam0->f_184 + 5.0f) > GET_CURRENT_GAME_TIME()
			{
				if (Function_691(StackVal, StackVal, iParam0, &uVar0, Global_34574, 1))
				{
					return 1;
				}
			}
			if (Function_657(iParam0))
			{
				bVar3 = true;
			}
			if (Function_687(iParam0, &Global_34573, !Function_1()))
			{
				bVar3 = true;
			}
			if (Function_656(StackVal))
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
				Function_719(iParam0, bLocal_10);
			}
			break;
		
		case 0x00000009:
			Function_655(iParam0);
			*iParam0 = 10;
		
		case 0x0000000A:
			if (Function_654(iParam0))
			{
				*iParam0 = 12;
				return 1;
			}
			break;
		
		case 0x0000000B:
			if (Function_654(iParam0))
			{
				*iParam0 = 12;
				return 1;
			}
			break;
		
		case 0x0000000C:
			if ((Global_29007 != 3 || Global_29007 != 4) && !Global_34165.f_44)
			{
				Function_653(iParam0);
			}
			else
			{
				Function_648(iParam0);
			}
			*iParam0 = 13;
		
		case 0x0000000D:
			*iParam0 = 16;
			return 1;
			break;
		
		case 0x0000000E:
			if (Function_654(iParam0))
			{
				*iParam0 = 15;
				return 1;
			}
			Function_105(bVar5);
			if (Function_691(StackVal, StackVal, iParam0, &uVar0, Function_105(bVar5), 1))
			{
				return 1;
			}
			break;
		
		case 0x0000000F:
			Function_648(iParam0);
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
					Function_647(iParam0 + 8, 0, 1, 1);
				}
				else
				{
					Function_648(iParam0);
					Function_647(iParam0 + 8, 0, 0, 0);
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
					Function_646(iParam0->f_180);
				}
				else
				{
					Function_645(iParam0->f_180);
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
			Function_755(iParam0, 0);
			if (bParam1)
			{
				Global_28842.f_8 = (StackVal - 1);
			}
			return 1;
			break;
	}
	return 0;
}

void Function_645(bool bParam0) //Position: 0x24B86 / 150406
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

void Function_646(bool bParam0) //Position: 0x24BCB / 150475
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

void Function_647(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x24C10 / 150544
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
					if (!Function_79(bVar1, 0x3f800000, 0x42960000, 1, 1, 0))
					{
						DESTROY_ACTOR(bVar1);
					}
					if (!Function_79(bVar2, 0x3f800000, 0x42960000, 1, 1, 0))
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
					if (!Function_79(bVar1, 0x3f800000, 0x42960000, 1, 1, 0))
					{
						DESTROY_ACTOR(bVar1);
					}
					if (!Function_79(bVar2, 0x3f800000, 0x42960000, 1, 1, 0))
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
					if (!Function_79(bVar1, 0x3f800000, 0x42960000, 1, 1, 0))
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

void Function_648(int iParam0) //Position: 0x24E0E / 151054
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	SQUAD_GOALS_CLEAR(StackVal);
	bVar1 = Function_652();
	if (!Global_34165.f_44)
	{
		Function_651(StackVal, Global_34573, 4);
	}
	bVar0 = false;
	while (StackVal <= SQUAD_GET_SIZE(bVar0))
	{
		bVar2 = SQUAD_GET_ACTOR_BY_INDEX(StackVal, bVar0);
		Function_649(bVar2);
		if (!IS_ACTOR_DRAFTED(bVar2))
		{
			TASK_FLEE_ACTORSET(bVar2, bVar1, -1.0f, -1.0f, 0, 0, 0);
			TASK_PRIORITY_SET(bVar2, 1);
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
			Function_649(bVar2);
			TASK_FLEE_ACTORSET(bVar2, bVar1, -1.0f, -1.0f, 0, 0, 0);
			TASK_PRIORITY_SET(bVar2, 0);
		}
		bVar0++;
	}
	return;
}

void Function_649(bool bParam0) //Position: 0x24ED8 / 151256
{
	bool bVar0;
	vector3 vVar1;
	bool bVar4;
	
	if (NET_IS_IN_SESSION())
	{
		bVar4 = false;
		while (bVar4 <= 16)
		{
			if (Function_650(bVar4))
			{
				bVar0 = GET_SLOT_ACTOR(bVar4);
				Function_105(bVar0);
				vVar1 = { StackVal, StackVal, Function_105(bVar0) };
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

bool Function_650(bool bParam0) //Position: 0x24F26 / 151334
{
	if (bParam0 > 0 || bParam0 <= 16)
	{
		return 0;
	}
	return (Global_79297 && SHIFT_LEFT(true, bParam0)) == 0;
}

void Function_651(bool bParam0, bool bParam1, bool bParam2) //Position: 0x24F48 / 151368
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

var Function_652() //Position: 0x24FB6 / 151478
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

void Function_653(int iParam0) //Position: 0x25022 / 151586
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

bool Function_654(int iParam0) //Position: 0x250D4 / 151764
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

void Function_655(int iParam0) //Position: 0x25183 / 151939
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
				MEMORY_PREFER_WALKING(SQUAD_GET_ACTOR_BY_INDEX(StackVal, bVar0), 0);
				bVar0++;
			}
			break;
		
		case 0x00000002:
			bVar0 = false;
			while (StackVal <= SQUAD_GET_SIZE(bVar0))
			{
				TASK_VEHICLE_LEAVE(SQUAD_GET_ACTOR_BY_INDEX(StackVal, bVar0));
				MEMORY_PREFER_WALKING(SQUAD_GET_ACTOR_BY_INDEX(StackVal, bVar0), 0);
				bVar0++;
			}
			break;
		
		default:
			LOG_ERROR("Unknown traffic type in TRAFFIC_TASK_NODE_DISMOUNT");
			break;
	}
	return;
}

bool Function_656(bool bParam0) //Position: 0x25249 / 152137
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

bool Function_657(int iParam0) //Position: 0x25275 / 152181
{
	if (!IS_VOLUME_VALID(Global_28842.f_28))
	{
		return 0;
	}
	if (StackVal || (StackVal || StackVal != 2 != 4) != 1)
	{
		if (Function_658(StackVal, Global_28842.f_28))
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

bool Function_658(bool bParam0, bool bParam1) //Position: 0x252E4 / 152292
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

bool Function_659(int iParam0) //Position: 0x25366 / 152422
{
	vector3 vVar0;
	vector3 vVar3;
	bool bVar6;
	
	if (DECOR_CHECK_EXIST(StackVal, "coachService"))
	{
		return 1;
	}
	Function_642(iParam0 + 24);
	bVar6 = Function_662(StackVal, StackVal, StackVal, Function_642(iParam0 + 24));
	GET_POSITION(bVar6, &vVar0);
	Function_642(iParam0 + 24);
	vVar3 = { StackVal, StackVal, Function_642(iParam0 + 24) };
	if (iParam0->f_156 > 1.0f)
	{
		iParam0->f_156 = Function_661(StackVal, iParam0->f_72);
	}
	if (StackVal > Function_660(VDIST(vVar3, vVar0), Function_661(iParam0->f_156, iParam0->f_72)))
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

float Function_660(bool bParam0, int iParam1) //Position: 0x25410 / 152592
{
	if (bParam0 > iParam1)
	{
		return bParam0;
	}
	return iParam1;
}

int Function_661(bool bParam0, int iParam1) //Position: 0x25423 / 152611
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

var Function_662(vector3 vParam0, bool bParam3) //Position: 0x25534 / 152884
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;
	
	bVar0 = false;
	bVar1 = 4294967295;
	bVar2 = -1.0f;
	if (Function_65(StackVal, StackVal, vParam0))
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

bool Function_663(var uParam0, bool bParam1) //Position: 0x256B5 / 153269
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
	bVar1 = Function_188();
	if (!NET_IS_IN_SESSION())
	{
		if (IS_ACTOR_VALID(bVar1))
		{
			iVar2 = Function_666(bVar0, bVar1, bParam1, 1);
			return iVar2 < 0;
		}
		return 0;
	}
	bVar3 = false;
	while (bVar3 <= 16)
	{
		if (GET_SLOT_POSITION(bVar3, &vVar4))
		{
			iVar2 = Function_664(StackVal, StackVal, bVar0, vVar4, bParam1, 1);
			if (iVar2 >= 0)
			{
				return 1;
			}
		}
		bVar3++;
	}
	return 0;
}

int Function_664(bool bParam0, vector3 vParam1, var uParam4, bool bParam5) //Position: 0x25732 / 153394
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
			if (Function_665(StackVal, StackVal, bVar2, vParam1, uParam4))
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

bool Function_665(bool bParam0, vector3 vParam1, float fParam4) //Position: 0x25796 / 153494
{
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_73(bParam0);
		if (VDIST(Function_73(bParam0), vParam1) >= fParam4)
		{
			return 1;
		}
	}
	LOG_ERROR("Attempting to check whether an INVALID actor is in range of position. Returning FALSE.");
	return 0;
	return 0;
}

int Function_666(bool bParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x25820 / 153632
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
			if (Function_667(bVar2, bParam1, iParam2))
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

bool Function_667(bool bParam0, bool bParam1, int iParam2) //Position: 0x2588F / 153743
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

var Function_668(bool bParam0) //Position: 0x259A0 / 154016
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

bool Function_669(int iParam0, bool bParam1, bool bParam2) //Position: 0x259ED / 154093
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (!Function_758(iParam0))
	{
		Function_641(iParam0, 1);
		return 0;
	}
	if (DECOR_CHECK_EXIST(StackVal, "coachService"))
	{
		return 1;
	}
	AI_CLEAR_NAV_MATERIAL_USAGE(Function_552(StackVal));
	if (!SQUAD_GOAL_IS_VALID(iParam0->f_12))
	{
		SQUAD_GOALS_CLEAR(StackVal);
	}
	Function_642(iParam0 + 24);
	vVar3 = { StackVal, StackVal, Function_642(iParam0 + 24) };
	vVar0 = { StackVal, StackVal, vVar3 };
	Function_673(StackVal, StackVal, vVar0, iParam0 + 24);
	if (bParam1)
	{
		iParam0->f_76 = Function_672(StackVal, iParam0->f_76, iParam0->f_80);
		if (!iParam0->f_96 || iParam0->f_72 != 4294967295)
		{
			iParam0->f_72 = iParam0->f_76;
		}
	}
	if (bParam2)
	{
		AI_SET_NAV_MATERIAL_USAGE(StackVal, Function_671(Function_552(StackVal)), 0);
	}
	Function_670(iParam0);
	return 1;
}

void Function_670(int iParam0) //Position: 0x25AA5 / 154277
{
	int iVar0;
	int iVar1;
	
	if (!SQUAD_IS_VALID(StackVal))
	{
		return;
	}
	iVar1 = 2;
	if (Function_71())
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

int Function_671(int iParam0) //Position: 0x25C45 / 154693
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

int Function_672(int iParam0, int iParam1, int iParam2) //Position: 0x25C6C / 154732
{
	bool bVar0;
	bool bVar1;
	
	if (!Function_71())
	{
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
	if (iParam2 != 0)
	{
		return iParam2;
	}
	bVar1 = RAND_INT_RANGE(true, 10000);
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

void Function_673(vector3 vParam0) //Position: 0x25DAA / 155050
{
	*uParam3 = vParam0.x;
	uParam3->f_4 = vParam0.y;
	uParam3->f_8 = vParam0.z;
}

void Function_674(bool bParam0, bool bParam1, bool bParam2) //Position: 0x25DC7 / 155079
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

bool Function_675(bool bParam0, bool bParam1, int iParam2) //Position: 0x25E0C / 155148
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

bool Function_676(int iParam0) //Position: 0x25E7E / 155262
{
	var uVar0;
	bool bVar3;
	
	if (DECOR_CHECK_EXIST(StackVal, "wasstickup"))
	{
		DECOR_REMOVE(StackVal, "wasstickup");
		return 1;
	}
	Function_642(iParam0 + 24);
	bVar3 = Function_662(StackVal, StackVal, StackVal, Function_642(iParam0 + 24));
	GET_POSITION(bVar3, &uVar0);
	*(iParam0 + 24) = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_678(StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(iParam0 + 24), iParam0->f_152, 2.5f, 0) };
	if (Function_677(iParam0 + 24))
	{
		return 0;
	}
	return 1;
}

bool Function_677(bool bParam0) //Position: 0x25EF1 / 155377
{
	return ((((StackVal && (StackVal && *bParam0 != 0.0f != 0.0f) != 0.0f) && bParam0->f_12 != 0.0f) && bParam0->f_16 != 0.0f) && bParam0->f_20 != 4294967295);
}

struct<24> Function_678(int iParam0, struct<6> Param1, bool bParam7, float fParam8, var uParam9) //Position: 0x25F1F / 155423
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
	
	Function_642(&Param1);
	vVar6 = { StackVal, StackVal, Function_642(&Param1) };
	bVar9 = false;
	uVar11 = Function_686(StackVal, iParam0->f_164);
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
	GET_OBJECT_POSITION(Function_552(StackVal), &uVar15);
	vVar18 = { 0.0f, 0.0f, -1.0f };
	if (!IS_OBJECTSET_VALID(iParam0->f_160))
	{
		iParam0->f_160 = CREATE_OBJECTSET_IN_LAYOUT(Function_83(), Global_28841, 36, 1);
	}
	bVar32 = 4294967295;
	while (!bVar10)
	{
		bVar31 = START_CURVE_QUERY(Global_28841, vVar6, uVar11, fVar12, fVar13, Function_660(Function_685(iParam0), ((fVar13 - fVar12) / 2.0f)), 0);
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
			Function_684(iParam0->f_160);
			ADD_OBJECT_TO_OBJECTSET(bParam7, iParam0->f_160);
			if (uParam9 || iVar14 > 5)
			{
				fVar12 = fVar13;
				fVar13 = (fVar13 + fParam8);
				iVar14++;
			}
			else
			{
				return StackVal, StackVal, StackVal, StackVal, StackVal, Function_683();
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
					Function_642(&Var25);
					Function_642(&Param1);
					vVar21 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_642(&Param1), Function_642(&Var25), StackVal) };
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
		else if (Function_65(StackVal, StackVal, vVar18))
		{
			bVar32 = ROUND((TO_FLOAT(RAND_INT_RANGE(false, (GET_NUM_CURVES_IN_CURVE_QUERY(bVar31) - 1000))) / 1000.0f));
		}
		else if (Global_3386)
		{
			Function_642(&Param1);
			vVar18 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_642(&Param1), Global_34574, StackVal) };
			VNORMALIZE(&vVar18);
			Var35 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_683() };
			Var41 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_683() };
			bVar9 = false;
			while (bVar9 <= GET_NUM_CURVES_IN_CURVE_QUERY(bVar31))
			{
				bVar47 = GET_CURVE_FROM_CURVE_INDEX_IN_CURVE_QUERY(bVar31, bVar9);
				GET_CURVE_POINT(bVar47, 1.0f, &Var35, 0);
				GET_CURVE_POINT(bVar47, 0.0f, &Var41, 0);
				Function_642(&Param1);
				Function_642(&Var35);
				Function_642(&Param1);
				Function_642(&Var41);
				if (StackVal > Function_235(StackVal, StackVal, StackVal, Function_235(StackVal, StackVal, StackVal, StackVal, Function_642(&Param1), Function_642(&Var35)), Function_642(&Param1), Function_642(&Var41)))
				{
					UNK_0x04D89A35(bVar47, 1.0f, 0.0f, -5.0f, &Var25);
				}
				else
				{
					UNK_0x04D89A35(bVar47, 0.0f, 0.0f, 5.0f, &Var25);
				}
				if (Global_30842[12])
				{
					Function_682(StackVal, StackVal, StackVal, StackVal, StackVal, Var25);
					PRINTNL();
				}
				Function_642(&Var25);
				Function_642(&Param1);
				vVar21 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_642(&Param1), Function_642(&Var25), StackVal) };
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
			Var35 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_683() };
			Var41 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_683() };
			Function_642(&Param1);
			vVar18 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_642(&Param1), Global_34574, StackVal) };
			VNORMALIZE(&vVar18);
			bVar9 = false;
			while (bVar9 <= GET_NUM_CURVES_IN_CURVE_QUERY(bVar31))
			{
				bVar47 = GET_CURVE_FROM_CURVE_INDEX_IN_CURVE_QUERY(bVar31, bVar9);
				GET_CURVE_POINT(bVar47, 1.0f, &Var35, 0);
				GET_CURVE_POINT(bVar47, 0.0f, &Var41, 0);
				Function_642(&Param1);
				Function_642(&Var35);
				Function_642(&Param1);
				Function_642(&Var41);
				if (StackVal > Function_235(StackVal, StackVal, StackVal, Function_235(StackVal, StackVal, StackVal, StackVal, Function_642(&Param1), Function_642(&Var35)), Function_642(&Param1), Function_642(&Var41)))
				{
					UNK_0x04D89A35(bVar47, 1.0f, Var35.f_16, 5.0f, &Var25);
				}
				else
				{
					UNK_0x04D89A35(bVar47, 0.0f, Var41.f_16, 5.0f, &Var25);
				}
				Function_642(&Var25);
				Function_642(&Param1);
				vVar21 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_642(&Param1), Function_642(&Var25), StackVal) };
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
				return StackVal, StackVal, StackVal, StackVal, StackVal, Function_683();
			}
		}
		bVar10 = true;
	}
	iParam0->f_152 = GET_CURVE_FROM_CURVE_INDEX_IN_CURVE_QUERY(bVar31, bVar32);
	iParam0->f_156 = CURVE_CALCULATE_DISTANCE_BY_FORCED_COMPONENT_SUBDIVISION_BOUNDS(iParam0->f_152, 0.0f, 1.0f, 10);
	GET_POINT_FROM_CURVE_QUERY(bVar31, bVar32, &Var0);
	Function_642(&Var0);
	vVar48 = { StackVal, StackVal, Function_642(&Var0) };
	GET_CURVE_POINT(iParam0->f_152, 1.0f, &Var51, 0);
	GET_CURVE_POINT(iParam0->f_152, 0.0f, &Var57, 0);
	if (StackVal < Function_681(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_681(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var51, Param1), Var57, Param1))
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
			Function_642(&Var25);
			vVar48 = { StackVal, StackVal, Function_642(&Var25) };
			bVar9++;
		}
		Function_642(&Var0);
		vVar48 = { StackVal, StackVal, Function_642(&Var0) };
	}
	Function_679(iParam0);
	UNK_0xDF93BD7C(bVar31);
	return StackVal, StackVal, StackVal, StackVal, StackVal, Var0;
}

void Function_679(int iParam0) //Position: 0x26415 / 156693
{
	if (!Function_758(iParam0))
	{
		return;
	}
	if (!Function_680(StackVal))
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

bool Function_680(bool bParam0) //Position: 0x264B9 / 156857
{
	if (bParam0 > 0 || bParam0 < 3)
	{
		return 0;
	}
	return 1;
}

float Function_681(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11) //Position: 0x264CE / 156878
{
	vector3 vVar0;
	vector3 vVar3;
	
	Function_642(&iParam0);
	vVar0 = { StackVal, StackVal, Function_642(&iParam0) };
	Function_642(&iParam6);
	vVar3 = { StackVal, StackVal, Function_642(&iParam6) };
	return VDIST(vVar0, vVar3);
}

void Function_682(struct<17> Param0) //Position: 0x264F3 / 156915
{
	Function_642(&Param0);
	PRINTVECTOR(Function_642(&Param0));
	PRINTSTRING(": t=");
	PRINTFLOAT(Param0.f_12);
	PRINTSTRING(" slope=");
	PRINTFLOAT(Param0.f_16);
}

struct<24> Function_683() //Position: 0x26528 / 156968
{
	struct<6> Var0;
	
	Var0.f_20 = 4294967295;
	return StackVal, StackVal, StackVal, StackVal, StackVal, Var0;
}

void Function_684(bool bParam0) //Position: 0x26539 / 156985
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

int Function_685(int iParam0) //Position: 0x26579 / 157049
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

int Function_686(int iParam0, bool bParam1) //Position: 0x26631 / 157233
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

bool Function_687(int iParam0, var uParam1, bool bParam2) //Position: 0x26661 / 157281
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
	if (Function_690(iParam0->f_16, 0))
	{
		if (Function_689(iParam0->f_16) || !bParam2)
		{
			Function_655(iParam0);
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
	bVar0 = Function_552(StackVal);
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
		Function_655(iParam0);
		if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(iParam0->f_16)))
		{
			REMOVE_BLIP(GET_BLIP_ON_OBJECT(iParam0->f_16));
		}
		Global_28842.f_76 = GET_CURRENT_GAME_TIME();
		SAY_SINGLE_LINE_CONTEXT(bVar0, 171, Function_188(), 1, 1, 2, 4294967295, 4294967295, 0, 1);
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
		if (Function_667(bVar0, *uParam1, 7.0f))
		{
			if (!DECOR_CHECK_EXIST(StackVal, "oneshotdialog"))
			{
				DECOR_SET_BOOL(StackVal, "oneshotdialog", true);
				Global_28842.f_76 = GET_CURRENT_GAME_TIME();
				SAY_SINGLE_LINE_CONTEXT(bVar0, 60, Function_188(), 0, 0, 2, 4294967295, 4294967295, 0, 1);
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
				Function_655(iParam0);
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
	if (Function_180(4))
	{
		if (!iParam0->f_92)
		{
			if (iParam0->f_132 > 1.0f)
			{
				if (StackVal != StackVal && Function_667(bVar0, *uParam1, 10.0f))
				{
					iParam0->f_92 = 1;
					iParam0->f_132 = (GET_CURRENT_GAME_TIME() + 20.0f);
					SET_ACTION_NODE_FOR_ACTOR(bVar0, "default_character_Main/Vehicle/Jack/React/Left");
					SAY_SINGLE_LINE_CONTEXT(bVar0, 309, Function_188(), 1, 0, 2, 4294967295, 4294967295, 0, 1);
					return 1;
				}
				if (Function_688(bVar0, 50.0f))
				{
					iParam0->f_92 = 1;
					iParam0->f_132 = (GET_CURRENT_GAME_TIME() + 60.0f);
					SET_ACTION_NODE_FOR_ACTOR(bVar0, "default_character_Main/Vehicle/Jack/React/Left");
					SAY_SINGLE_LINE_CONTEXT(bVar0, 309, Function_188(), 0, 0, 2, 4294967295, 4294967295, 0, 1);
					return 1;
				}
			}
			if (!Function_71())
			{
				if (!Function_48(Global_76846, 64))
				{
					if (Function_667(iParam0->f_16, *uParam1, 35.0f) && Function_79(iParam0->f_16, 0x3f800000, 0x42960000, 1, 1, 0))
					{
						Function_43(Global_34573, 64, 1, 0);
					}
				}
			}
		}
		else
		{
			if (iParam0->f_132 > (GET_CURRENT_GAME_TIME() + 15.0f))
			{
				if (!DECOR_CHECK_EXIST(StackVal, "oneshotdialog"))
				{
					if (Function_667(bVar0, *uParam1, 10.0f))
					{
						DECOR_SET_BOOL(StackVal, "oneshotdialog", true);
						SET_ACTION_NODE_FOR_ACTOR(bVar0, "default_character_Main/Vehicle/Jack/React/Left");
						SAY_SINGLE_LINE_CONTEXT(bVar0, 310, Function_188(), 0, 0, 0, 4294967295, 4294967295, 0, 1);
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
		if (GET_VEHICLE(*uParam1) != iParam0->f_16 && !Function_50())
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

bool Function_688(bool bParam0, int iParam1) //Position: 0x26B1D / 158493
{
	bool bVar0;
	bool bVar1;
	
	if (!NET_IS_IN_SESSION())
	{
		if (IS_ACTOR_WHISTLING(Function_188()))
		{
			if (Function_667(bParam0, Function_188(), iParam1))
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
				bVar1 = Function_188();
			}
			else
			{
				bVar1 = GET_SLOT_ACTOR(bVar0);
			}
			if (IS_ACTOR_VALID(bVar1))
			{
				if (IS_ACTOR_WHISTLING(bVar1))
				{
					if (Function_667(bParam0, bVar1, iParam1))
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

int Function_689(int iParam0) //Position: 0x26B95 / 158613
{
	bool bVar0;
	bool bVar1;
	
	if (!NET_IS_IN_SESSION())
	{
		if (IS_ACTOR_DRIVING_VEHICLE(Function_188()))
		{
			return GET_VEHICLE(Function_188()) != iParam0;
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
				bVar1 = Function_188();
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

bool Function_690(int iParam0, bool bParam1) //Position: 0x26C05 / 158725
{
	bool bVar0;
	bool bVar1;
	
	if (!NET_IS_IN_SESSION())
	{
		return GET_VEHICLE(Function_188()) != iParam0;
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
					bVar1 = Function_188();
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

bool Function_691(int iParam0, var uParam1, vector3 vParam2, bool bParam5) //Position: 0x26C69 / 158825
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
							if (Function_235(StackVal, StackVal, StackVal, StackVal, vVar1, vVar4) < 10.0f)
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
									Function_693(bVar7);
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
									Function_693(bVar8);
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
				Function_655(iParam0);
				*iParam0 = 14;
				return 1;
			}
			if (!IS_ACTOR_VALID(Function_552(StackVal)))
			{
				Function_655(iParam0);
				*iParam0 = 14;
				return 1;
			}
			if (NET_IS_IN_SESSION())
			{
				if (!NET_IS_OBJECT_LOCAL(iParam0->f_16))
				{
					return 0;
				}
				if (!NET_IS_OBJECT_LOCAL(Function_552(StackVal)))
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
					Function_655(iParam0);
					*iParam0 = 14;
					return 1;
				}
			}
			if (!Function_692(iParam0->f_16, 4294967295, 1, 4294967295))
			{
				Function_655(iParam0);
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

bool Function_692(bool bParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x26F07 / 159495
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

void Function_693(bool bParam0) //Position: 0x26FC0 / 159680
{
	bool bVar0;
	
	bVar0 = Function_652();
	Function_649(bParam0);
	TASK_FLEE_ACTORSET(bParam0, bVar0, -1.0f, -1.0f, 0, 0, 0);
	TASK_PRIORITY_SET(bParam0, 1);
	TASK_OVERRIDE_CLEAR_MOVETYPE(bParam0);
	return;
}

bool Function_694(bool bParam0) //Position: 0x26FE7 / 159719
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

bool Function_695(int iParam0) //Position: 0x2703E / 159806
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;
	
	Function_642(iParam0 + 24);
	vVar3 = { StackVal, StackVal, Function_642(iParam0 + 24) };
	*(iParam0 + 24) = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_717(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(iParam0 + 24), iParam0->f_152, vVar0) };
	if (Function_677(iParam0 + 24))
	{
		*iParam0 = 16;
		return 0;
	}
	if (!Function_716(&vVar3, 20.0f, &iVar6, 3))
	{
		*iParam0 = 16;
		return 0;
	}
	Function_642(iParam0 + 24);
	*(iParam0 + 168) = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar3, Function_642(iParam0 + 24), StackVal) };
	*(iParam0 + 168) = { 0.0f, UNK_0x9C40E671(iParam0 + 168), 0.0f };
	iParam0->f_112 = 1;
	iParam0->f_116 = 1;
	Function_696(iParam0);
	return 1;
}

void Function_696(int iParam0) //Position: 0x270C2 / 159938
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	bool bVar7;
	
	if (!Function_754(256) || !Function_180(4))
	{
		return;
	}
	bVar0 = Function_715(StackVal, StackVal, Global_34574);
	if (!IS_OBJECT_VALID(bVar0))
	{
		return;
	}
	if (!Function_758(iParam0))
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
	if (!Function_699(StackVal, StackVal, StackVal, StackVal, StackVal, Global_28841, 2, 64, 512, vVar1, vVar4, iParam0 + 16, bVar7))
	{
		return;
	}
	iParam0->f_100 = 1;
	DECOR_SET_BOOL(StackVal, "coachService", true);
	iParam0->f_180 = CREATE_OBJECTSET_IN_LAYOUT(Function_83(), Global_28841, 15, 1);
	Function_698(StackVal, StackVal, iParam0->f_180);
	iParam0->f_184 = GET_CURRENT_GAME_TIME();
	Function_697(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *iParam0);
	return;
	*StackVal = StackVal;
}

void Function_697(struct<189> Param0) //Position: 0x271B6 / 160182
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

void Function_698(bool bParam0, bool bParam1, bool bParam2) //Position: 0x27234 / 160308
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

bool Function_699(bool bParam0, bool bParam1, int iParam2, int iParam3, int iParam4, vector3 vParam5, vector3 vParam8, var uParam11, bool bParam12) //Position: 0x27440 / 160832
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
	if (!Function_716(&vParam5, 20.0f, &vVar1, 10))
	{
		vVar1 = { StackVal, StackVal, vParam5 };
	}
	if (bParam12 < 0)
	{
		bParam12 = Function_711(iParam4, 0, 0, 4294967295, 0);
		bVar4 = false;
	}
	if (Function_65(StackVal, StackVal, vVar1))
	{
		LOG_ERROR("Attempting to create stagecoach traffic at 0,0,0!");
	}
	Var11 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_709("ntrafcoach", bParam0) };
	if (Function_1())
	{
		*uParam11 = Function_707(StackVal, StackVal, StackVal, StackVal, bParam0, &Var11, bParam12, Function_711(iParam3, 0, 4, 23, 0), vVar1, vParam8, 1, 976, 976, 976, 2);
	}
	else
	{
		*uParam11 = Function_707(StackVal, StackVal, StackVal, StackVal, bParam0, &Var11, bParam12, Function_711(iParam3, 0, 4, 23, 0), vVar1, vParam8, 1, 976, 976, 976, 4);
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
		Var40 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_709("trafpass", bParam0) };
		if ((bVar7 != 0 || bVar7 != 1) && iVar5)
		{
			if (bVar7 == 0)
			{
				Var32 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_709("trafdriver", bParam0) };
				bVar0 = CREATE_ACTOR_IN_LAYOUT(bParam0, &Var32, Global_28842.f_64, vVar29, vParam8);
				if (Function_762(&Global_28842, 512))
				{
					STREAMING_EVICT_ACTOR(Global_28842.f_64, 4294967295);
				}
				bVar19[0] = Global_28842.f_64;
				Global_28842.f_64 = Function_761(Global_29005, Global_28842.f_64);
				STREAMING_REQUEST_ACTOR(Global_28842.f_64, 1, false);
				Function_760(&Global_28842, 512);
			}
			else
			{
				Var32 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_709("trafshotty", bParam0) };
				bVar0 = CREATE_ACTOR_IN_LAYOUT(bParam0, &Var32, Global_28842.f_68, vVar29, vParam8);
				if (Function_762(&Global_28842, 2048))
				{
					STREAMING_EVICT_ACTOR(Global_28842.f_68, 4294967295);
				}
				bVar19[1] = Global_28842.f_68;
				Global_28842.f_68 = Function_759(Global_29005, Global_28842.f_68);
				STREAMING_REQUEST_ACTOR(Global_28842.f_68, 1, false);
				Function_760(&Global_28842, 2048);
			}
		}
		else if (bVar7 != 1 || bVar7 != 0)
		{
			if (iParam2 == 1)
			{
				bVar28 = Function_701();
				STREAMING_REQUEST_ACTOR(bVar28, 1, false);
				bVar0 = CREATE_ACTOR_IN_LAYOUT(bParam0, &Var40, bVar28, vVar29, vParam8);
				STREAMING_EVICT_ACTOR(bVar28, 4294967295);
			}
			else
			{
				bVar28 = Function_711(iParam2, 1, 2, 4294967295, 0);
				if (!Function_700(bVar28, &bVar19))
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
					bVar28 = Function_701();
					STREAMING_REQUEST_ACTOR(bVar28, 1, false);
					bVar0 = CREATE_ACTOR_IN_LAYOUT(bParam0, &Var40, bVar28, vVar29, vParam8);
					STREAMING_EVICT_ACTOR(bVar28, 4294967295);
					iVar8 = (iVar8 - 1);
					iVar9 = 1;
				}
				else
				{
					bVar28 = Function_711(iParam2, 1, 0, 4294967295, 0);
					if (!Function_700(bVar28, &bVar19))
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
			SET_ACTOR_ALLOW_WEAPON_REACTIONS(bVar0, 1);
			REGISTER_TRAFFIC_ACTOR(bVar0, 1);
			SET_ACTOR_IS_AMBIENT(bVar0, 1);
			SQUAD_JOIN(bVar0, bParam1);
			vVar29 = { StackVal, StackVal, Vector(vVar29, StackVal, StackVal) + Vector(1.0f, 0.0f, 1.0f) };
		}
		bVar7++;
	}
	return iVar10;
}

bool Function_700(bool bParam0, bool bParam1) //Position: 0x278EC / 162028
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

bool Function_701() //Position: 0x2791E / 162078
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (!Function_444(&Global_28842 + 84[Global_28842.f_2323], 4) && iVar0 > 20)
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
	Function_704(0);
	Global_28842.f_232++;
	if (Global_28842.f_232 > Global_28842.f_84)
	{
		Global_28842.f_232 = 0;
	}
	Function_702(524288);
	Function_462(&Global_28842 + 84);
	return iVar1;
}

void Function_702(int iParam0) //Position: 0x279BF / 162239
{
	Function_703(&Global_28842, iParam0);
	return;
}

void Function_703(var uParam0, int iParam1) //Position: 0x279CD / 162253
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	*uParam0 |= 1073741824;
	return;
}

void Function_704(bool bParam0) //Position: 0x279F0 / 162288
{
	int iVar0;
	
	if (Function_444(&Global_28842 + 84[Global_28842.f_2323], 4))
	{
		if (Global_28842.f_240 >= 0)
		{
			Global_28842.f_240 = (Global_28842.f_240 - 1);
		}
	}
	Function_442(&Global_28842 + 84, Global_28842.f_232);
	if (bParam0 || Global_28842.f_240 > 5)
	{
		iVar0 = GET_ACTORENUM_IN_POPULATION(Global_30750[0], Global_28842.f_236);
		while (Function_706(iVar0) || iVar0 != 0)
		{
			Global_28842.f_236++;
			if (Global_28842.f_236 > GET_NUM_ACTORENUMS_IN_POPULATION(Global_30750[0]))
			{
				Global_28842.f_236 = 0;
			}
			iVar0 = GET_ACTORENUM_IN_POPULATION(Global_30750[0], Global_28842.f_236);
		}
		Function_705(&Global_28842 + 84, Global_28842.f_232, iVar0);
		Global_28842.f_240++;
		Global_28842.f_236++;
		if (Global_28842.f_236 > GET_NUM_ACTORENUMS_IN_POPULATION(Global_30750[0]))
		{
			Global_28842.f_236 = 0;
		}
	}
	return;
}

void Function_705(var uParam0, int iParam1, int iParam2) //Position: 0x27AC9 / 162505
{
	(*uParam0)[iParam13] = iParam2;
	uParam0[iParam13]->f_4 = 3;
	Function_459(uParam0[iParam13], 4);
	return;
}

int Function_706(int iParam0) //Position: 0x27AEA / 162538
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

var Function_707(bool bParam0, bool bParam1, bool bParam2, int iParam3, vector3 vParam4, vector3 vParam7, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14) //Position: 0x27B72 / 162674
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
			if (Function_63(Global_30750[6], 4, 23, 0) && iParam10)
			{
				bVar16 = Function_708(StackVal, StackVal, Global_30750[6], vParam4, 4, 23, 0);
				if (Function_700(bVar16, &iVar1))
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

var Function_708(bool bParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6) //Position: 0x27DA6 / 163238
{
	return GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam4, bParam5, bParam6, 1, vParam1);
}

struct<32> Function_709(bool bParam0, bool bParam1) //Position: 0x27DBE / 163262
{
	struct<8> Var0;
	bool bVar8;
	
	if (!IS_STRING_VALID(bParam0))
	{
		return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var0;
	}
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_710(bParam0) };
	bVar8 = FIND_OBJECT_IN_LAYOUT(bParam1, &Var0);
	while (IS_OBJECT_VALID(bVar8))
	{
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_710(bParam0) };
		bVar8 = FIND_OBJECT_IN_LAYOUT(bParam1, &Var0);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var0;
}

struct<32> Function_710(bool bParam0) //Position: 0x27E0D / 163341
{
	char* cVar0[32];
	struct<4> Var8;
	bool bVar12;
	
	if (!Function_1())
	{
		return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_67(bParam0);
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
			memcpy(&Var8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_68("0", &Var8, ""), 4);
		}
		bVar12 = GET_LOCAL_SLOT();
		memcpy(&Var8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_68(I2STR(bVar12), &Var8, ""), 4);
		while (STRING_LENGTH(&Var8) <= 6)
		{
			memcpy(&Var8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_68("0", &Var8, ""), 4);
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

int Function_711(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x27EBC / 163516
{
	return Function_712(iParam0, iParam1, iParam2, iParam3, iParam4, 0, 0.0f, 0.0f, 0.0f);
}

var Function_712(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, vector3 vParam6) //Position: 0x27ED5 / 163541
{
	switch (iParam0)
	{
		case 0x00000001:
			return Function_56(StackVal, StackVal, Global_30750[0], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000002:
			return Function_56(StackVal, StackVal, Global_30750[1], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000004:
			return Function_56(StackVal, StackVal, Global_30750[2], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000008:
			return Function_56(StackVal, StackVal, Global_30750[3], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000010:
			return Function_56(StackVal, StackVal, Global_30750[4], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000020:
			return Function_56(StackVal, StackVal, Global_30750[5], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000040:
			return Function_56(StackVal, StackVal, Global_30750[6], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000080:
			return Function_56(StackVal, StackVal, Global_30750[7], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000100:
			return Function_56(StackVal, StackVal, Global_30750[8], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000200:
			return Function_56(StackVal, StackVal, Global_30750[9], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000400:
			return Function_56(StackVal, StackVal, Global_30750[10], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000800:
			return Function_56(StackVal, StackVal, Global_30750[11], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00001000:
			return Function_56(StackVal, StackVal, Global_30750[12], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00002000:
			return Function_56(StackVal, StackVal, Global_30750[13], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x40000000:
			LOG_ERROR("Trying to get a random member of invalid popset_type");
			return 4294967295;
			break;
	}
	return Function_713(StackVal, StackVal, iParam0, bParam1, bParam2, iParam5, vParam6);
}

var Function_713(var uParam0, bool bParam1, bool bParam2, int iParam3, vector3 vParam4) //Position: 0x2812A / 164138
{
	bool bVar0;
	
	bVar0 = CREATE_POPULATION_SET(0);
	if (uParam0 & 1 == 1)
	{
		Function_714(Global_30750[0], bVar0);
	}
	if (uParam0 & 2 == 2)
	{
		Function_714(Global_30750[1], bVar0);
	}
	if (uParam0 & 4 == 4)
	{
		Function_714(Global_30750[2], bVar0);
	}
	if (uParam0 & 8 == 8)
	{
		Function_714(Global_30750[3], bVar0);
	}
	if (uParam0 & 16 == 16)
	{
		Function_714(Global_30750[4], bVar0);
	}
	if (uParam0 & 32 == 32)
	{
		Function_714(Global_30750[5], bVar0);
	}
	if (uParam0 & 64 == 64)
	{
		Function_714(Global_30750[6], bVar0);
	}
	if (uParam0 & 128 == 128)
	{
		Function_714(Global_30750[7], bVar0);
	}
	if (uParam0 & 256 == 256)
	{
		Function_714(Global_30750[8], bVar0);
	}
	if (uParam0 & 512 == 512)
	{
		Function_714(Global_30750[9], bVar0);
	}
	if (uParam0 & 1024 == 1024)
	{
		Function_714(Global_30750[10], bVar0);
	}
	if (uParam0 & 2048 == 2048)
	{
		Function_714(Global_30750[11], bVar0);
	}
	if (uParam0 & 4096 == 4096)
	{
		Function_714(Global_30750[12], bVar0);
	}
	if (uParam0 & 8192 == 8192)
	{
		Function_714(Global_30750[13], bVar0);
	}
	return Function_56(StackVal, StackVal, bVar0, bParam1, bParam2, 4294967295, 0, iParam3, vParam4);
}

void Function_714(bool bParam0, bool bParam1) //Position: 0x2827B / 164475
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

var Function_715(vector3 vParam0) //Position: 0x28339 / 164665
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

bool Function_716(int iParam0, float fParam1, int iParam2, int iParam3) //Position: 0x283A8 / 164776
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
		if (!Function_65(StackVal, StackVal, *iParam2))
		{
			return 1;
		}
	}
	while (!IS_EXITFLAG_SET() && iVar3 > iParam3)
	{
		*iParam0 = (*iParam0 + 0.01f);
		iParam0->f_8 = (StackVal + 0.01f);
		if (FIND_GROUND_INTERSECTION(iParam0, fParam1, iParam2, &uVar0))
		{
			if (!Function_65(StackVal, StackVal, *iParam2))
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

struct<24> Function_717(int iParam0, struct<6> Param1, bool bParam7, vector3 vParam8) //Position: 0x284DA / 165082
{
	int iVar0;
	int iVar6;
	struct<6> Var12;
	
	if (!IS_OBJECT_VALID(bParam7))
	{
		return StackVal, StackVal, StackVal, StackVal, StackVal, Var12;
	}
	iParam0->f_148 = Function_718(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, bParam7, Param1, vParam8);
	if (iParam0->f_148 >= 0)
	{
		GET_CURVE_POINT(bParam7, 1.0f, &Var12, 0);
		UNK_0x19D652F9(bParam7, 1.0f, &Param1, &iVar0);
		Function_642(&iVar0);
		Function_642(&Param1);
		*(iParam0 + 168) = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_642(&Param1), Function_642(&iVar0), StackVal) };
		*(iParam0 + 168) = { 0.0f, UNK_0x9C40E671(iParam0 + 168), 0.0f };
	}
	else
	{
		GET_CURVE_POINT(bParam7, 0.0f, &Var12, 0);
		UNK_0x19D652F9(bParam7, -1.0f, &Param1, &iVar6);
		Function_642(&iVar6);
		Function_642(&Param1);
		*(iParam0 + 168) = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_642(&Param1), Function_642(&iVar6), StackVal) };
		*(iParam0 + 168) = { 0.0f, UNK_0x9C40E671(iParam0 + 168), 0.0f };
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, Var12;
}

int Function_718(bool bParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9) //Position: 0x28578 / 165240
{
	int iVar0;
	int iVar6;
	vector3 vVar12;
	vector3 vVar15;
	float fVar18;
	float fVar19;
	
	UNK_0x19D652F9(bParam0, 1.0f, &iParam1, &iVar0);
	UNK_0x19D652F9(bParam0, -1.0f, &iParam1, &iVar6);
	Function_642(&iVar0);
	Function_642(&iParam1);
	vVar12 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_642(&iParam1), Function_642(&iVar0), StackVal) };
	fVar18 = VDOT(&uParam7, &vVar12);
	Function_642(&iVar6);
	Function_642(&iParam1);
	vVar15 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_642(&iParam1), Function_642(&iVar6), StackVal) };
	fVar19 = VDOT(&uParam7, &vVar15);
	if (fVar19 > fVar18)
	{
		return 1;
	}
	return 4294967295;
}

void Function_719(int iParam0, int iParam1) //Position: 0x285D1 / 165329
{
	if (!Function_71())
	{
		Function_724(StackVal);
		if (Global_28842.f_80 != 0)
		{
			iParam0->f_72 = Global_28842.f_80;
			Function_723(StackVal, iParam0->f_72);
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
			Function_723(StackVal, iParam0->f_72);
			if (StackVal == 2)
			{
				Function_722(StackVal, 1);
			}
		}
		else if (StackVal || Function_656((Global_3404 || Function_754(131072))))
		{
			iParam0->f_72 = 4;
			Function_723(StackVal, iParam0->f_72);
			if (StackVal == 2)
			{
				Function_722(StackVal, 1);
			}
		}
		else if (iParam0->f_92)
		{
			iParam0->f_72 = Function_721(StackVal, iParam0->f_80);
			Function_723(StackVal, iParam0->f_72);
		}
		else if (iParam0->f_96)
		{
			iParam0->f_72 = Function_720(StackVal, iParam0->f_80);
			Function_723(StackVal, iParam0->f_72);
			if (StackVal == 2)
			{
				Function_722(StackVal, 0);
			}
		}
		else
		{
			iParam0->f_72 = iParam0->f_76;
			if (StackVal == 2)
			{
				Function_722(StackVal, 1);
			}
		}
	}
	else
	{
		Function_724(StackVal);
		if (Global_28842.f_80 != 0)
		{
			iParam0->f_72 = Global_28842.f_80;
			Function_723(StackVal, iParam0->f_72);
		}
		else if (StackVal || Function_656(Function_754(131072)))
		{
			iParam0->f_72 = 3;
			Function_723(StackVal, iParam0->f_72);
			if (StackVal == 2)
			{
				Function_722(StackVal, 1);
			}
		}
		else if (iParam0->f_92)
		{
			iParam0->f_72 = Function_721(StackVal, iParam0->f_80);
			Function_723(StackVal, iParam0->f_72);
		}
		else if (iParam0->f_96)
		{
			iParam0->f_72 = Function_720(StackVal, iParam0->f_80);
			Function_723(StackVal, iParam0->f_72);
			if (StackVal == 2)
			{
				Function_722(StackVal, 0);
			}
		}
		else
		{
			iParam0->f_72 = iParam0->f_76;
			if (StackVal == 2)
			{
				Function_722(StackVal, 1);
			}
		}
	}
	return;
}

int Function_720(int iParam0, int iParam1) //Position: 0x287B9 / 165817
{
	bool bVar0;
	bool bVar1;
	
	if (!Function_71())
	{
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
	if (iParam1 != 0)
	{
		return iParam1;
	}
	bVar1 = RAND_INT_RANGE(true, 10000);
	switch (iParam0)
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

int Function_721(int iParam0, bool bParam1) //Position: 0x288A5 / 166053
{
	if (!Function_71())
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

void Function_722(bool bParam0, int iParam1) //Position: 0x28970 / 166256
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

void Function_723(bool bParam0, int iParam1) //Position: 0x28998 / 166296
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

void Function_724(bool bParam0) //Position: 0x289C0 / 166336
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

bool Function_725(int iParam0, bool bParam1) //Position: 0x289E6 / 166374
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	struct<6> Var5;
	
	if (Function_677(iParam0 + 24))
	{
		return 0;
	}
	if (iParam0->f_104 || bParam1)
	{
		if (!IS_ACTOR_VALID(Function_552(StackVal)))
		{
			return 0;
		}
		switch (StackVal)
		{
			case 0x00000001:
			case 0x00000003:
				if (IS_ACTOR_VALID(GET_MOUNT(Function_552(StackVal))))
				{
					GET_ACTOR_VELOCITY(GET_MOUNT(Function_552(StackVal)), &vVar0);
				}
				else
				{
					GET_ACTOR_VELOCITY(Function_552(StackVal), &vVar0);
				}
				break;
			
			case 0x00000002:
				if (IS_ACTOR_VALID(iParam0->f_16))
				{
					GET_ACTOR_VELOCITY(iParam0->f_16, &vVar0);
				}
				else
				{
					GET_ACTOR_VELOCITY(Function_552(StackVal), &vVar0);
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
			ROTATE_VECTOR_XZ(StackVal, GET_HEADING(Function_552(&vVar0)), 0);
		}
		else if (bVar3 > 0.05f)
		{
			VNORMALIZE(&vVar0);
		}
		VSCALE(&vVar0, -1.0f);
	}
	else if (!Function_65(StackVal, StackVal, *(iParam0 + 136)))
	{
		Function_642(iParam0 + 24);
		vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_642(iParam0 + 24), *(iParam0 + 136), StackVal) };
	}
	else if (Function_754(16) || Global_3386)
	{
		Function_642(iParam0 + 24);
		vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_642(iParam0 + 24), Global_34574, StackVal) };
	}
	else
	{
		Function_642(iParam0 + 24);
		if (Function_734(StackVal, StackVal, Global_34573, Function_642(iParam0 + 24)))
		{
			bVar4 = RAND_INT_RANGE(false, 10000);
			if (bVar4 <= 5000)
			{
				Function_642(iParam0 + 24);
				vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Global_34574, Function_642(iParam0 + 24), StackVal) };
			}
			else
			{
				Function_642(iParam0 + 24);
				vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_642(iParam0 + 24), Global_34574, StackVal) };
			}
		}
		else
		{
			Function_642(iParam0 + 24);
			vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_642(iParam0 + 24), Global_34574, StackVal) };
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
		Var5 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_717(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(iParam0 + 24), iParam0->f_152, vVar0) };
		if (Function_677(&Var5))
		{
			*iParam0 = 16;
			return 0;
		}
	}
	if ((!DECOR_CHECK_EXIST(StackVal, "coachService") && !iParam0->f_104) && !bParam1)
	{
		Function_726(iParam0);
	}
	if (!IS_ACTOR_VALID(Function_552(StackVal)))
	{
		return 0;
	}
	if (!iParam0->f_104)
	{
		*(iParam0 + 24) = { StackVal, StackVal, StackVal, StackVal, StackVal, Var5 };
	}
	Function_669(iParam0, 1, iParam0->f_20 > 4);
	return 1;
}

void Function_726(int iParam0) //Position: 0x28C3C / 166972
{
	vector3 vVar0;
	vector3 vVar3;
	bool bVar6;
	bool bVar7;
	
	if (!Function_758(iParam0))
	{
		return;
	}
	Function_642(iParam0 + 24);
	vVar3 = { StackVal, StackVal, Function_642(iParam0 + 24) };
	vVar0 = { StackVal, StackVal, vVar3 };
	if (VDIST(vVar0, Global_34574) > 120.0f)
	{
	}
	Function_673(StackVal, StackVal, vVar0, iParam0 + 24);
	NET_OBJECT_REPLICATION_MODE_START(15, 5);
	switch (StackVal)
	{
		case 0x00000001:
			if (!IS_ACTOR_VALID(Function_552(StackVal)))
			{
				Function_729(StackVal, StackVal, StackVal, StackVal, StackVal, Global_28841, iParam0->f_20, vVar0, *(iParam0 + 168), iParam0 + 52, GET_ACTORENUM_SPECIES(Function_711(64, 0, 0, 4294967295, 0)));
				iParam0->f_20 = SQUAD_GET_SIZE(StackVal);
			}
			iParam0->f_180 = CREATE_OBJECTSET_IN_LAYOUT(Function_83(), Global_28841, 15, 0);
			Function_698(StackVal, StackVal, iParam0->f_180);
			break;
		
		case 0x00000002:
			if (!IS_ACTOR_VALID(Function_552(StackVal)))
			{
				if (Function_699(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_728(Global_28841), 64, 512, vVar0, *(iParam0 + 168), iParam0 + 16, 0))
				{
					iParam0->f_100 = 1;
				}
			}
			iParam0->f_180 = CREATE_OBJECTSET_IN_LAYOUT(Function_83(), Global_28841, 15, 1);
			Function_698(StackVal, StackVal, iParam0->f_180);
			break;
		
		default:
			break;
	}
	NET_OBJECT_REPLICATION_MODE_END(15);
	Function_697(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *iParam0);
	if (IS_OBJECTSET_VALID(iParam0->f_180))
	{
		Global_28842.f_48 = (Global_28842.f_48 + GET_OBJECTSET_SIZE(iParam0->f_180));
	}
	iParam0->f_184 = GET_CURRENT_GAME_TIME();
	if (!IS_ACTOR_VALID(Function_552(StackVal)))
	{
	}
	if (!Function_71())
	{
		bVar6 = false;
		while (StackVal <= SQUAD_GET_SIZE(bVar6))
		{
			MEMORY_ATTACK_ON_SIGHT(SQUAD_GET_ACTOR_BY_INDEX(StackVal, bVar6), 0);
			SET_ACTOR_ALLOW_WEAPON_REACTIONS(SQUAD_GET_ACTOR_BY_INDEX(StackVal, bVar6), 1);
			REGISTER_TRAFFIC_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(StackVal, bVar6), 1);
			SET_ACTOR_IS_AMBIENT(SQUAD_GET_ACTOR_BY_INDEX(StackVal, bVar6), 1);
			SET_ACTOR_OBEY_AMBIENT_MOVE_RESTRICTIONS(SQUAD_GET_ACTOR_BY_INDEX(StackVal, bVar6), 1);
			bVar6++;
		}
	}
	else
	{
		bVar7 = false;
		while (StackVal <= SQUAD_GET_SIZE(bVar7))
		{
			MEMORY_CONSIDER_AS(SQUAD_GET_ACTOR_BY_INDEX(StackVal, bVar7), Global_34573, 5);
			MEMORY_ATTACK_ON_SIGHT(SQUAD_GET_ACTOR_BY_INDEX(StackVal, bVar7), 1);
			Function_727(SQUAD_GET_ACTOR_BY_INDEX(StackVal, bVar7), 100.0f, -1.0f, -1.0f);
			SET_ACTOR_ALLOW_WEAPON_REACTIONS(SQUAD_GET_ACTOR_BY_INDEX(StackVal, bVar7), 1);
			REGISTER_TRAFFIC_ACTOR(SQUAD_GET_ACTOR_BY_INDEX(StackVal, bVar7), 1);
			SET_ACTOR_IS_AMBIENT(SQUAD_GET_ACTOR_BY_INDEX(StackVal, bVar7), 1);
			SET_ACTOR_OBEY_AMBIENT_MOVE_RESTRICTIONS(SQUAD_GET_ACTOR_BY_INDEX(StackVal, bVar7), 1);
			AI_SET_NAV_ACTOR_AVOIDANCE_MODE(SQUAD_GET_ACTOR_BY_INDEX(StackVal, bVar7), 0);
			bVar7++;
		}
	}
	return;
}

void Function_727(bool bParam0, float fParam1, float fParam2, float fParam3) //Position: 0x28E87 / 167559
{
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_ACTOR_ALIVE(bParam0))
		{
			if (fParam2 == -1.0f || fParam3 == -1.0f)
			{
				COMBAT_CLASS_AI_SET_RANGE_BETWEEN_BURSTS_DELAY(bParam0, fParam2, fParam3);
			}
			COMBAT_CLASS_AI_SET_RANGE_ACCURACY(bParam0, fParam1);
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 53, 0.0f);
			COMBAT_CLASS_AI_SET_ATTRIB_FLOAT(bParam0, 54, 0.0f);
		}
	}
}

int Function_728(bool bParam0) //Position: 0x28ECE / 167630
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

void Function_729(bool bParam0, bool bParam1, int iParam2, vector3 vParam3, vector3 vParam6, var uParam9, var uParam10) //Position: 0x28F34 / 167732
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
	if (Function_65(StackVal, StackVal, vParam3))
	{
		return;
	}
	if (!Global_30767[23])
	{
		return;
	}
	if (Function_65(StackVal, StackVal, vParam3))
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
		iVar27 = Function_733(StackVal, StackVal, 64, vParam3, 4, uParam10, 0);
		if (Function_700(iVar27, &bVar10))
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
			Function_731(uParam9, iVar0);
			GET_OBJECT_RELATIVE_POSITION(GET_OBJECT_FROM_ACTOR(bVar2), Function_731(uParam9, iVar0), &vVar6);
		}
		if (!Function_716(&vVar6, 20.0f, &vVar3, 10))
		{
			vVar3 = { StackVal, StackVal, vVar6 };
		}
		bVar9 = Function_701();
		STREAMING_REQUEST_ACTOR(bVar9, 1, false);
		if (!bVar9 != 4294967295)
		{
			Var28 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_709("ntrafrider", bParam0) };
			Var36 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_709("ntrafhorse", bParam0) };
			bVar1 = Function_730(StackVal, StackVal, StackVal, StackVal, bParam0, &Var28, bVar9, &Var36, bVar10[iVar0], vVar3, vParam6);
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

var Function_730(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, vector3 vParam5, vector3 vParam8) //Position: 0x290A1 / 168097
{
	bool bVar0;
	bool bVar1;
	
	if (!IS_LAYOUTREF_VALID(bParam0))
	{
		LOG_ERROR("Layout is not valid in CREATE_ACTOR_MOUNTED_IN_LAYOUT !!!");
		return "";
	}
	if (!Function_54(bParam2))
	{
		LOG_ERROR("riderTypeName is not valid in CREATE_ACTOR_MOUNTED_IN_LAYOUT !!!");
		return "";
	}
	if (!Function_54(bParam4))
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

vector3 Function_731(var uParam0, bool bParam1) //Position: 0x291C6 / 168390
{
	vector3 vVar0;
	
	if (!Function_732(uParam0))
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

bool Function_732(int iParam0) //Position: 0x29307 / 168711
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

var Function_733(int iParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6) //Position: 0x29329 / 168745
{
	return Function_712(StackVal, StackVal, iParam0, 0, bParam4, bParam5, bParam6, 1, vParam1);
}

bool Function_734(bool bParam0, vector3 vParam1) //Position: 0x29342 / 168770
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	
	vVar0 = { 0.0f, 0.0f, -1.0f };
	ROTATE_VECTOR_XZ(&vVar0, Function_64(bParam0), 0);
	GET_POSITION(bParam0, &vVar3);
	vVar6 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar3, vParam1, StackVal) };
	if (VDOT(&vVar0, &vVar6) < 0.0f)
	{
		return 1;
	}
	return 0;
}

bool Function_735(int iParam0) //Position: 0x29381 / 168833
{
	if (StackVal || !IS_ACTOR_VALID(Function_552(!SQUAD_IS_VALID(StackVal))))
	{
		return 0;
	}
	Function_743(iParam0);
	Function_736(iParam0, 4294967294);
	Global_28842.f_8 = StackVal + 1;
	if (!Function_71())
	{
		Global_28842.f_16 = ((GET_CURRENT_GAME_TIME() + (2.0f / 2.0f)) + RAND_FLOAT_RANGE(0.0f, 2.0f));
	}
	else
	{
		Global_28842.f_16 = ((GET_CURRENT_GAME_TIME() + ((2.0f * 40.0f) / 2.0f)) + RAND_FLOAT_RANGE(0.0f, (2.0f * 40.0f)));
	}
	Function_679(iParam0);
	SQUAD_GOALS_CLEAR(StackVal);
	Function_241(StackVal);
	iParam0->f_12 = "";
	if (!IS_OBJECT_VALID(iParam0->f_152))
	{
		return 0;
	}
	if (Function_677(iParam0 + 24))
	{
		return 0;
	}
	iParam0->f_104 = 1;
	return 1;
}

void Function_736(int iParam0, int iParam1) //Position: 0x2942B / 169003
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
			else if (Global_28842.f_44 < 4294967295 && !Function_754(128))
			{
				iParam0->f_20 = CEIL((IntToFloat(bVar0) / (10000.0f / TO_FLOAT(Global_28842.f_44))));
			}
			else if (iVar1 <= 6)
			{
				iParam0->f_20 = 1;
			}
			else if ((iVar1 > 8 || Function_754(128)) || iParam1 != 5)
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
				Function_742(128);
			}
			else
			{
				Function_702(128);
			}
			if (Global_29006 == Global_30668[1])
			{
				Function_741(1.0f);
				*(iParam0 + 52) = { StackVal, Function_741(1.0f) };
			}
			else
			{
				Function_739(1.0f);
				*(iParam0 + 52) = { StackVal, Function_739(1.0f) };
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
		iParam0->f_188 = Function_738();
	}
	if (!SQUAD_IS_VALID(StackVal))
	{
		Function_737();
		Var2 = { StackVal, Function_737() };
		iParam0->f_8 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Global_28841, &Var2));
	}
	if (!IS_OBJECTSET_VALID(iParam0->f_160))
	{
		iParam0->f_160 = CREATE_OBJECTSET_IN_LAYOUT(Function_83(), Global_28841, 36, 1);
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
		iParam0->f_72 = Function_672(StackVal, 0, iParam0->f_80);
	}
	else
	{
		iParam0->f_72 = Function_720(StackVal, iParam0->f_80);
	}
	*iParam0 = 1;
	return;
}

struct<8> Function_737() //Position: 0x29659 / 169561
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

var Function_738() //Position: 0x296B0 / 169648
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

struct<8> Function_739(int iParam0) //Position: 0x296EE / 169710
{
	Function_740(iParam0, 10);
	return StackVal, Function_740(iParam0, 10);
}

struct<8> Function_740(var uParam0, int iParam1) //Position: 0x296FB / 169723
{
	struct<2> Var0;
	
	Var0.f_4 = uParam0;
	Var0 = Global_26121[iParam1];
	return StackVal, Var0;
}

struct<8> Function_741(int iParam0) //Position: 0x29714 / 169748
{
	Function_740(iParam0, 8);
	return StackVal, Function_740(iParam0, 8);
}

void Function_742(int iParam0) //Position: 0x29721 / 169761
{
	Function_760(&Global_28842, iParam0);
	return;
}

void Function_743(int iParam0) //Position: 0x2972F / 169775
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	bool bVar5;
	bool bVar6;
	struct<6> Var7;
	vector3 vVar13;
	
	if (!Function_758(iParam0))
	{
		return;
	}
	iVar0 = Function_686(StackVal, iParam0->f_164);
	GET_POSITION(Function_552(StackVal), &vVar1);
	fVar4 = 0.0f;
	bVar5 = START_CURVE_QUERY(Global_28841, vVar1, iVar0, fVar4, 150.0f, 5.0f, 0);
	if (!GET_NUM_POINTS_IN_CURVE_QUERY(bVar5) < 0)
	{
		UNK_0xDF93BD7C(bVar5);
		return;
	}
	bVar6 = Function_744(StackVal, StackVal, bVar5, vVar1);
	if (bVar6 == 4294967295)
	{
		UNK_0xDF93BD7C(bVar5);
		return;
	}
	iParam0->f_152 = GET_CURVE_FROM_POINT_INDEX_IN_CURVE_QUERY(bVar5, bVar6);
	iParam0->f_156 = CURVE_CALCULATE_DISTANCE_BY_FORCED_COMPONENT_SUBDIVISION_BOUNDS(iParam0->f_152, 0.0f, 1.0f, 10);
	GET_POINT_FROM_CURVE_QUERY(bVar5, bVar6, &Var7);
	*(iParam0 + 168) = { 0.0f, 0.0f, -1.0f };
	ROTATE_VECTOR_XZ(StackVal, GET_HEADING(Function_552(iParam0 + 168)), 0);
	iParam0->f_148 = Function_718(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0->f_152, Var7, *(iParam0 + 168));
	if (iParam0->f_148 >= 0)
	{
		GET_CURVE_POINT(iParam0->f_152, 1.0f, iParam0 + 24, 0);
	}
	else
	{
		GET_CURVE_POINT(iParam0->f_152, 0.0f, iParam0 + 24, 0);
	}
	Function_642(iParam0 + 24);
	vVar13 = { StackVal, StackVal, Function_642(iParam0 + 24) };
	UNK_0xDF93BD7C(bVar5);
	bVar5 = START_CURVE_QUERY(Global_28841, vVar13, iVar0, 0.0f, 10.0f, 2.0f, 0);
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

var Function_744(bool bParam0, vector3 vParam1) //Position: 0x2987F / 170111
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
		Function_642(&iVar1);
		if (VDIST(vParam1, Function_642(&iVar1)) > bVar7)
		{
			bVar8 = bVar0;
			Function_642(&iVar1);
			bVar7 = VDIST(vParam1, Function_642(&iVar1));
		}
		bVar0++;
	}
	return bVar8;
}

void Function_745(int iParam0, bool bParam1) //Position: 0x298D7 / 170199
{
	if (!SQUAD_IS_VALID(StackVal) && !(((*iParam0 != 0 || *iParam0 != 18) || *iParam0 != 16) || *iParam0 != 17))
	{
		Function_755(iParam0, 0);
		if (bParam1)
		{
			Global_28842.f_8 = (StackVal - 1);
		}
		*iParam0 = 0;
	}
	return;
}

void Function_746() //Position: 0x2991F / 170271
{
	vector3 vVar0;
	bool bVar3;
	float fVar4;
	vector3 vVar5;
	var uVar8;
	
	if (Function_758(&Global_28903))
	{
		if (!SQUAD_IS_VALID(StackVal) && Global_28903 == 17)
		{
			Global_28903 = 16;
			return;
		}
		if (!IS_ACTOR_VALID(Function_552(StackVal)) && Global_28903 == 17)
		{
			Global_28903 = 16;
			return;
		}
		GET_POSITION(Function_552(StackVal), &vVar0);
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
		bVar3 = Function_715(StackVal, StackVal, Global_34574);
		if (!IS_OBJECT_VALID(bVar3))
		{
			return;
		}
		GET_OBJECT_POSITION(bVar3, &vVar0);
		fVar4 = Function_235(StackVal, StackVal, StackVal, StackVal, Global_34574, vVar0);
		vVar5 = { StackVal, StackVal, vVar0 };
		vVar5.f_4 = (vVar5.y + 2.0f);
		if (((fVar4 < 10.0f && !CAMERA_IS_VISIBLE_POINT(GET_GAME_CAMERA(), vVar5, 1065353216, 1117126656, 1, 1, 0)) || HUD_IS_FADED()) && fVar4 > (180.0f - 10.0f))
		{
			if (!Function_753(Global_29005))
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
			if (Function_716(&vVar0, 50.0f, &uVar8, 2))
			{
				Function_747(StackVal, StackVal, vVar0);
				DECOR_SET_BOOL(StackVal, "coachService", true);
			}
		}
	}
	return;
}

void Function_747(vector3 vParam0) //Position: 0x29A9F / 170655
{
	var uVar0;
	
	Global_28903.f_152 = Function_749(StackVal, StackVal, vParam0, 16, 0.0f, 35.0f, &uVar0, 1);
	Global_28903.f_156 = CURVE_CALCULATE_DISTANCE_BY_FORCED_COMPONENT_SUBDIVISION_BOUNDS(Global_28903.f_152, 0.0f, 1.0f, 10);
	*(&Global_28903 + 24) = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_748(StackVal, StackVal, vParam0) };
	Global_28903.f_4 = 2;
	Function_736(&Global_28903, 4294967294);
	Function_679(&Global_28903);
	Global_28903 = 4;
	return;
}

struct<24> Function_748(vector3 vParam0) //Position: 0x29AF4 / 170740
{
	struct<6> Var0;
	
	Var0 = vParam0.x;
	Var0.f_4 = vParam0.y;
	Var0.f_8 = vParam0.z;
	return StackVal, StackVal, StackVal, StackVal, StackVal, Var0;
}

var Function_749(vector3 vParam0, int iParam3, float fParam4, float fParam5, var uParam6, bool bParam7) //Position: 0x29B14 / 170772
{
	vector3 vVar0;
	bool bVar3;
	struct<9> Var4;
	
	bVar10 = -1.0f;
	Function_285();
	*uParam6 = { StackVal, StackVal, Function_285() };
	bVar3 = START_CURVE_QUERY(Global_28841, vParam0, uParam3, fParam4, fParam5, Function_660(((fParam5 - fParam4) / 5.0f), 20.0f), 0);
	if (!GET_NUM_POINTS_IN_CURVE_QUERY(bVar3) < 0)
	{
		Function_751(StackVal, StackVal, bVar3, vParam0, iParam3, fParam4, fParam5, Function_660(((fParam5 - fParam4) / 5.0f), 20.0f));
	}
	else
	{
		bVar11 = false;
		while (bVar11 < (GET_NUM_POINTS_IN_CURVE_QUERY(bVar3) - 1))
		{
			GET_POINT_FROM_CURVE_QUERY(bVar3, bVar11, &vVar4);
			if (!bParam7 || !Function_750(&vVar4))
			{
				vVar0.x = vVar4.x;
				vVar0.f_4 = vVar4.y;
				vVar0.f_8 = vVar4.z;
				if (bVar10 > 0.0f || bVar10 < VDIST(vParam0, vVar0))
				{
					bVar10 = VDIST(vParam0, vVar0);
					*uParam6 = { StackVal, StackVal, vVar0 };
					uVar12 = GET_CURVE_FROM_POINT_INDEX_IN_CURVE_QUERY(bVar3, bVar11);
				}
			}
			bVar11++;
		}
	}
	UNK_0xDF93BD7C(bVar3);
	return uVar12;
}

bool Function_750(bool bParam0) //Position: 0x29BF2 / 170994
{
	if (bParam0->f_12 > 0.001f || bParam0->f_12 < 0.999f)
	{
		return 1;
	}
	return 0;
}

void Function_751(bool bParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6, bool bParam7) //Position: 0x29C13 / 171027
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
	Function_752(bParam0);
}

void Function_752(bool bParam0) //Position: 0x29CCA / 171210
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
		Function_682(StackVal, StackVal, StackVal, StackVal, StackVal, Var1);
		PRINTSTRING(" from ");
		PRINTSTRING(GET_CURVE_NAME(GET_CURVE_FROM_POINT_INDEX_IN_CURVE_QUERY(bParam0, bVar0)));
		PRINTNL();
		bVar0++;
	}
	return;
}

bool Function_753(bool bParam0) //Position: 0x29D39 / 171321
{
	if (!Function_161(bParam0))
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

bool Function_754(int iParam0) //Position: 0x29DAA / 171434
{
	return Function_762(&Global_28842, iParam0);
}

void Function_755(int iParam0, bool bParam1) //Position: 0x29DB8 / 171448
{
	*iParam0 = 0;
	iParam0->f_4 = 4294967295;
	if (SQUAD_IS_VALID(StackVal))
	{
		if (!Global_34165.f_44 && !bParam1)
		{
			Function_757(StackVal);
		}
		else
		{
			Function_756(StackVal);
		}
		DESTROY_OBJECT(GET_OBJECT_FROM_SQUAD(StackVal));
	}
	if (IS_OBJECTSET_VALID(iParam0->f_180))
	{
		DESTROY_OBJECTSET(iParam0->f_180);
	}
	if (IS_OBJECTSET_VALID(iParam0->f_48))
	{
		Function_684(iParam0->f_48);
		DESTROY_OBJECTSET(iParam0->f_48);
	}
	if (IS_OBJECTSET_VALID(iParam0->f_160))
	{
		Function_684(iParam0->f_160);
		DESTROY_OBJECTSET(iParam0->f_160);
	}
	iParam0->f_20 = 0;
	*(iParam0 + 24) = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_683() };
	iParam0->f_12 = "";
	iParam0->f_72 = 4294967295;
	iParam0->f_148 = 0;
	Function_285();
	*(iParam0 + 168) = { StackVal, StackVal, Function_285() };
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

void Function_756(bool bParam0) //Position: 0x29E8A / 171658
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

void Function_757(bool bParam0) //Position: 0x29F0D / 171789
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

bool Function_758(int iParam0) //Position: 0x29F90 / 171920
{
	if (*iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

int Function_759(bool bParam0, int iParam1) //Position: 0x29FA0 / 171936
{
	bool bVar0;
	
	if (!Function_161(bParam0))
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

void Function_760(var uParam0, int iParam1) //Position: 0x2A13A / 172346
{
	*uParam0 = (*uParam0 || iParam1);
	*uParam0 |= 1073741824;
	return;
}

int Function_761(bool bParam0, int iParam1) //Position: 0x2A155 / 172373
{
	bool bVar0;
	
	if (!Function_161(bParam0))
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

bool Function_762(int iParam0, int iParam1) //Position: 0x2A2D8 / 172760
{
	int iVar0;
	
	iVar0 = (*iParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_763() //Position: 0x2A2F4 / 172788
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
	Function_764(Global_28841);
	EVENT_TRAP_ON_OWNER(Global_28951, Global_28841);
	Global_28842.f_60 = CREATE_OBJECTSET_IN_LAYOUT("trafficReleased", Global_28841, 15, 1);
	return;
}

int Function_764(int iParam0) //Position: 0x2A377 / 172919
{
	var uVar0;
	
	Function_765(4, 1);
	uVar0 = uVar0;
	bLocal_9 = iParam0;
	CREATE_VOLUME_IN_LAYOUT(bLocal_9, "henv_coach_park", 2, -868.7439f, 91.56226f, 2402.454f, 0.0f, 125.0f, 0.0f, 3.5f, 5.0f, 7.5f);
	CREATE_VOLUME_IN_LAYOUT(bLocal_9, "uprv_coach_park", 2, -205.0147f, 84.28522f, 2066.466f, 0.0f, 107.0f, 0.0f, 3.5f, 5.0f, 7.5f);
	CREATE_VOLUME_IN_LAYOUT(bLocal_9, "armv_coach_park", 2, -2190.632f, 16.368f, 2636.006f, 0.0f, 167.735f, 0.0f, 3.5f, 5.0f, 7.5f);
	CREATE_VOLUME_IN_LAYOUT(bLocal_9, "behv_coach_park", 2, -107.7367f, 119.3326f, 1391.473f, 178.3251f, 238.6079f, -178.0473f, 3.5f, 5.0f, 7.5f);
	CREATE_VOLUME_IN_LAYOUT(bLocal_9, "thiv_coach_park", 2, 108.8806f, 73.286f, 2322.866f, 0.0f, 310.0f, 0.0f, 3.5f, 5.0f, 7.5f);
	CREATE_VOLUME_IN_LAYOUT(bLocal_9, "mtpv_coach_park", 2, -420.042f, 151.043f, 1605.842f, 0.0f, 192.908f, 0.0f, 3.5f, 5.0f, 7.5f);
	CREATE_VOLUME_IN_LAYOUT(bLocal_9, "escv_coach_park", 2, -4277.109f, 18.536f, 4471.96f, 0.0f, 232.328f, 0.0f, 15.0f, 5.0f, 10.0f);
	CREATE_VOLUME_IN_LAYOUT(bLocal_9, "chuv_coach_park", 2, -2754.504f, 32.125f, 4299.976f, 0.0f, -19.10072f, 0.0f, 15.0f, 5.0f, 10.0f);
	CREATE_VOLUME_IN_LAYOUT(bLocal_9, "casv_coach_park", 2, -813.062f, 13.051f, 3756.265f, 0.0f, 15.0f, 0.0f, 15.0f, 5.0f, 10.0f);
	CREATE_VOLUME_IN_LAYOUT(bLocal_9, "blkv_coach_park", 2, 683.303f, 78.179f, 1315.703f, 0.0f, 2.09f, 0.0f, 3.5f, 5.0f, 7.5f);
	CREATE_VOLUME_IN_LAYOUT(bLocal_9, "benv_coach_park", 2, -3710.906f, 9.665366f, 3483.041f, 0.0f, -4.913626f, 0.0f, 3.5f, 5.0f, 7.5f);
	CREATE_VOLUME_IN_LAYOUT(bLocal_9, "henv_coach_stop", 2, -938.686f, 90.353f, 2413.753f, 0.0f, 218.151f, 0.0f, 3.5f, 5.0f, 7.5f);
	CREATE_VOLUME_IN_LAYOUT(bLocal_9, "uprv_coach_stop", 2, -189.567f, 83.897f, 2060.425f, 0.0f, 10.886f, 0.0f, 3.5f, 5.0f, 7.5f);
	CREATE_VOLUME_IN_LAYOUT(bLocal_9, "armv_coach_stop", 2, -2162.952f, 16.325f, 2641.514f, 0.0f, 84.568f, 0.0f, 3.5f, 5.0f, 7.5f);
	CREATE_VOLUME_IN_LAYOUT(bLocal_9, "thiv_coach_stop", 2, 123.918f, 73.286f, 2315.224f, 0.0f, 90.0f, 0.0f, 3.5f, 5.0f, 7.5f);
	CREATE_VOLUME_IN_LAYOUT(bLocal_9, "mtpv_coach_stop", 2, -428.796f, 152.347f, 1658.224f, 0.0f, 283.866f, 0.0f, 3.5f, 5.0f, 7.5f);
	CREATE_VOLUME_IN_LAYOUT(bLocal_9, "escv_coach_stop", 2, -4257.397f, 18.111f, 4434.602f, 0.0f, 262.37f, 0.0f, 15.0f, 5.0f, 10.0f);
	CREATE_VOLUME_IN_LAYOUT(bLocal_9, "casv_coach_stop", 2, -763.787f, 13.051f, 3722.439f, 0.0f, 239.337f, 0.0f, 15.0f, 5.0f, 10.0f);
	CREATE_VOLUME_IN_LAYOUT(bLocal_9, "blkv_coach_stop", 2, 661.257f, 78.312f, 1253.194f, 0.0f, 180.1f, 0.0f, 3.5f, 5.0f, 7.5f);
	CREATE_VOLUME_IN_LAYOUT(bLocal_9, "benv_coach_stop", 2, -3689.169f, 8.032f, 3455.0f, 0.0f, 95.061f, 0.0f, 3.5f, 5.0f, 7.5f);
	CREATE_VOLUME_IN_LAYOUT(bLocal_9, "lshv_coach_stop", 2, -1684.164f, 9.267697f, 4284.834f, 0.0f, 180.1f, 0.0f, 3.5f, 5.0f, 7.5f);
	CREATE_VOLUME_IN_LAYOUT(bLocal_9, "coov_coach_park", 2, -1804.95f, 24.45401f, 2810.315f, 0.0f, 292.5032f, 0.0f, 15.0f, 5.0f, 10.0f);
	CREATE_VOLUME_IN_LAYOUT(bLocal_9, "ratv_coach_park", 2, -3697.875f, 41.429f, 2148.041f, 0.0f, 303.153f, 0.0f, 15.0f, 5.0f, 10.0f);
	CREATE_VOLUME_IN_LAYOUT(bLocal_9, "rwfv_coach_park", 2, -3268.626f, 17.18167f, 2723.903f, -1.887851f, 146.577f, -1.620206f, 15.0f, 5.0f, 10.0f);
	CREATE_VOLUME_IN_LAYOUT(bLocal_9, "plnv_coach_park", 2, -3123.105f, 44.30289f, 3743.079f, -51.50969f, 267.0967f, 51.70138f, 15.0f, 7.261993f, 10.0f);
	CREATE_VOLUME_IN_LAYOUT(bLocal_9, "lshv_coach_park", 2, -1676.463f, 9.493582f, 4276.088f, 0.0f, 252.1856f, 0.0f, 7.926416f, 2.642139f, 5.284277f);
	CREATE_VOLUME_IN_LAYOUT(bLocal_9, "emtv_coach_park", 2, -442.52f, 23.97941f, 3955.329f, -3.804106f, 104.2582f, -3.903749f, 15.0f, 5.0f, 10.0f);
	CREATE_VOLUME_IN_LAYOUT(bLocal_9, "fodv_coach_park", 2, -703.5002f, 65.51284f, 3347.808f, 0.0f, 75.30426f, 0.0f, 15.0f, 5.0f, 10.0f);
	CREATE_VOLUME_IN_LAYOUT(bLocal_9, "torv_coach_park", 2, 381.435f, 31.422f, 3356.736f, 2.753f, -36.2f, 0.0f, 15.0f, 6.160286f, 10.0f);
	CREATE_VOLUME_IN_LAYOUT(bLocal_9, "twrv_coach_park", 2, -2437.578f, 23.85255f, 2201.414f, 0.0f, 264.3128f, 0.0f, 15.0f, 5.0f, 10.0f);
	CREATE_VOLUME_IN_LAYOUT(bLocal_9, "tumv_coach_park", 2, -3960.237f, 28.57524f, 3084.759f, 0.0f, -32.23166f, 0.0f, 15.0f, 5.0f, 10.0f);
	CREATE_VOLUME_IN_LAYOUT(bLocal_9, "gapv_coach_park", 2, -4442.633f, 9.267518f, 3364.521f, 0.0f, 176.2452f, 0.0f, 15.0f, 5.0f, 10.0f);
	CREATE_VOLUME_IN_LAYOUT(bLocal_9, "solv_coach_park", 2, -3816.177f, 9.999077f, 3626.925f, 0.0f, 69.53353f, 0.0f, 15.0f, 5.0f, 10.0f);
	CREATE_VOLUME_IN_LAYOUT(bLocal_9, "fomv_coach_park", 2, -2597.957f, 69.32348f, 3408.867f, 0.0f, 122.3583f, 0.0f, 15.0f, 5.0f, 10.0f);
	CREATE_VOLUME_IN_LAYOUT(bLocal_9, "pikv_coach_park", 2, -1227.648f, 93.50175f, 2110.007f, 0.0f, 1.91647f, 0.0f, 15.0f, 17.4811f, 10.0f);
	CREATE_VOLUME_IN_LAYOUT(bLocal_9, "tesv_coach_park", 2, -3191.454f, 38.39717f, 4544.503f, 0.0f, 180.001f, 0.0f, 15.0f, 5.0f, 10.0f);
	CREATE_VOLUME_IN_LAYOUT(bLocal_9, "nosv_coach_park", 2, -4600.072f, 4.381839f, 3979.659f, 0.0f, -15.76538f, 0.0f, 15.0f, 5.0f, 10.0f);
	CREATE_VOLUME_IN_LAYOUT(bLocal_9, "cocv_coach_park", 2, -698.856f, 170.138f, 743.603f, 0.0f, 152.309f, 0.0f, 15.0f, 5.0f, 10.0f);
	CREATE_VOLUME_IN_LAYOUT(bLocal_9, "serv_coach_park", 2, 285.854f, 91.353f, 1900.771f, 0.0f, 326.7992f, 0.0f, 15.0f, 5.0f, 10.0f);
	CREATE_VOLUME_IN_LAYOUT(bLocal_9, "hen_pasture", 3, -1059.102f, 102.7685f, 2928.799f, 0.0f, 94.725f, 0.0f, 13.05346f, 5.333994f, 13.08851f);
	CREATE_VOLUME_IN_LAYOUT(bLocal_9, "gtr_pasture", 3, -4337.467f, 32.144f, 3076.536f, 0.0f, 331.491f, 0.0f, 14.44081f, 8.806858f, 18.50083f);
	CREATE_VOLUME_IN_LAYOUT(bLocal_9, "rio_pasture", 3, -3382.033f, 38.94137f, 3242.493f, 0.0f, 75.887f, 0.0f, 12.16677f, 6.046849f, 11.78531f);
	CREATE_VOLUME_IN_LAYOUT(bLocal_9, "cho_pasture", 3, -3439.106f, 17.4172f, 3026.709f, 0.0f, 129.618f, 0.0f, 23.05708f, 14.67792f, 18.37475f);
	CREATE_VOLUME_IN_LAYOUT(bLocal_9, "hen_pasture1", 3, -1244.302f, 117.459f, 2664.095f, 0.0f, 54.848f, 0.0f, 21.68487f, 9.704492f, 23.8164f);
	CREATE_VOLUME_IN_LAYOUT(bLocal_9, "prd_pasture", 3, -1149.83f, 22.96783f, 5059.978f, 0.0f, 261.374f, 0.0f, 20.26593f, 9.249132f, 19.49912f);
	CREATE_VOLUME_IN_LAYOUT(bLocal_9, "prd_pasture1", 3, -1444.324f, 22.39532f, 4953.731f, 0.0f, 141.049f, 0.0f, 12.72238f, 4.718087f, 10.57367f);
	CREATE_VOLUME_IN_LAYOUT(bLocal_9, "prd_pasture2", 3, -2912.868f, 25.44674f, 4061.587f, 0.0f, 266.929f, 0.0f, 27.10916f, 13.49337f, 27.49792f);
	CREATE_VOLUME_IN_LAYOUT(bLocal_9, "pun_pasture", 3, -3898.6f, 6.27f, 4245.527f, 0.0f, 121.75f, 0.0f, 24.32381f, 6.558811f, 23.47421f);
	CREATE_VOLUME_IN_LAYOUT(bLocal_9, "agvv_coach_park", 2, -1549.209f, 15.337f, 3939.273f, 0.0f, 315.0f, 0.0f, 3.5f, 5.0f, 7.5f);
	CREATE_VOLUME_IN_LAYOUT(bLocal_9, "criv_coach_park", 2, -2904.775f, 15.70748f, 3004.139f, 0.0f, 16.8946f, 0.0f, 3.5f, 5.0f, 7.5f);
	return 1;
}

void Function_765(int iParam0, int iParam1) //Position: 0x2AF16 / 175894
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

void Function_766(int iParam0) //Position: 0x2AF5F / 175967
{
	strcpy(iParam0 + 12, "TRAFFIC", 16);
	*iParam0 = 183915;
	iParam0->f_4 = 176162;
	iParam0->f_8 = 176017;
	iParam0->f_28 = 1;
	return;
}

void Function_767() //Position: 0x2AF91 / 176017
{
	Function_441(&Global_28842 + 84);
	Global_28842.f_240 = 0;
	if (Function_762(&Global_28842, 512))
	{
		STREAMING_EVICT_ACTOR(Global_28842.f_64, 4294967295);
	}
	if (Function_762(&Global_28842, 2048))
	{
		STREAMING_EVICT_ACTOR(Global_28842.f_68, 4294967295);
	}
	if (Function_762(&Global_28842, 8192))
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

var Function_768() //Position: 0x2B022 / 176162
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
	Function_763();
	iVar1 = Function_808(&Local_11);
	if (!iVar1 != Global_28842.f_48)
	{
		Global_28842.f_48 = iVar1;
	}
	Function_803(0);
	if (!Function_754(1))
	{
		Function_802(&Local_11, 1);
		if (IS_OBJECT_VALID(Global_28951))
		{
			EVENT_TRAP_CLEAR_TRAP_FLAG(Global_28951);
			EVENT_TRAP_CLEAR_EVENTS(Global_28951);
		}
		if (Function_754(262144))
		{
			Function_441(&Global_28842 + 84);
			Function_702(262144);
			Function_702(524288);
			Global_28842.f_240 = 0;
		}
		Function_803(1);
		return iVar0;
	}
	if (Global_3395)
	{
		Function_802(&Local_11, 1);
		return iVar0;
	}
	if (Global_34165.f_44 && !NET_IS_IN_SESSION())
	{
		Function_802(&Local_11, 1);
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
				Function_797(&Local_11, bVar2);
			}
			REMOVE_OBJECT_FROM_OBJECTSET(bVar2, Global_28842.f_60);
			CLEAN_OBJECTSET(Global_28842.f_60);
		}
	}
	if (!Global_34165.f_44)
	{
		Function_802(&Local_11, 0);
	}
	Function_796();
	if (Function_754(1) && Function_754(32768))
	{
		if (Function_754(1048576))
		{
			Function_441(&Global_28842 + 84);
			Function_702(1835008);
			Global_28842.f_240 = 0;
		}
		if (!Function_754(262144))
		{
			if (IS_POPSET_VALID(Global_30750[0]) && GET_NUM_ACTORENUMS_IN_POPULATION(Global_30750[0]) < 0)
			{
				Function_795();
			}
		}
		if (Function_754(262144) && !Function_754(524288))
		{
			if (Function_462(&Global_28842 + 84))
			{
				Function_742(524288);
			}
		}
	}
	else
	{
		Function_441(&Global_28842 + 84);
		Function_702(1835008);
		Global_28842.f_240 = 0;
	}
	iVar3 = 0;
	Function_105(Function_188());
	vVar4 = { StackVal, StackVal, Function_105(Function_188()) };
	if (Function_794(StackVal, StackVal, vVar4))
	{
		while ((Function_754(16384) && Function_791(&Local_11, 0, 0)) && iVar3 > 10)
		{
			iVar7 = 0;
			iVar8 = Function_780(StackVal, StackVal, &Local_11, vVar4, iVar7);
			if (iVar8 < 4294967295 && iVar8 > Local_11)
			{
				Function_644(&(Local_11[iVar848]), 1);
			}
			iVar3++;
		}
	}
	if (Function_754(16384))
	{
	}
	if (Function_791(&Local_11, (Function_1() || !HUD_IS_FADED()), 1))
	{
		if (Function_794(StackVal, StackVal, vVar4))
		{
			iVar9 = 0;
			if (bLocal_494)
			{
				iVar9 = 2;
			}
			Function_780(StackVal, StackVal, &Local_11, vVar4, iVar9);
		}
	}
	bLocal_10 = Function_778();
	iVar10 = 0;
	while (iVar10 <= Local_11)
	{
		if (Function_758(&(Local_11[iVar1048])))
		{
			if (Function_644(&(Local_11[iVar1048]), 1))
			{
				iVar0 = 1;
			}
			Function_641(&(Local_11[iVar1048]), 1);
		}
		Function_777(&(Local_11[iVar1048]), iVar10);
		iVar10++;
	}
	Function_776();
	Function_775();
	Function_769();
	Function_803(1);
	EVENT_TRAP_CLEAR_TRAP_FLAG(Global_28951);
	EVENT_TRAP_CLEAR_EVENTS(Global_28951);
	REGISTER_TRAFFIC_OBJECTSET(Global_28842.f_60);
	return iVar0;
}

void Function_769() //Position: 0x2B2D0 / 176848
{
	if (!Function_1())
	{
		return;
	}
	Function_770();
	return;
}

void Function_770() //Position: 0x2B2E1 / 176865
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
					if (!Function_773(&Local_11, GET_ACTOR_FROM_OBJECT(bVar4), &iVar6))
					{
						if (Function_797(&Local_11, GET_ACTOR_FROM_OBJECT(bVar4)))
						{
						}
						else
						{
							Function_772(GET_ACTOR_FROM_OBJECT(bVar4));
						}
					}
					else if (!bVar2)
					{
						if (Local_11[iVar648] == 1 && Local_11[iVar648] == 3)
						{
							Function_771(&(Local_11[iVar648]));
							Function_743(&(Local_11[iVar648]));
							Local_11[iVar648] = 6;
						}
					}
				}
				else if (bVar2)
				{
					if (Function_773(&Local_11, GET_ACTOR_FROM_OBJECT(bVar4), &iVar6))
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

void Function_771(int iParam0) //Position: 0x2B3F9 / 177145
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

void Function_772(bool bParam0) //Position: 0x2B43A / 177210
{
	bool bVar0;
	bool bVar1;
	
	if (IS_ACTOR_MOUNTED(bParam0))
	{
		bVar0 = GET_RIDER(bParam0);
		if (!IS_ACTOR_PLAYER(bVar0))
		{
			RELEASE_OBJECT_REF(bVar0);
			Function_693(bVar0);
		}
	}
	if (IS_ACTOR_RIDING(bParam0))
	{
		bVar1 = GET_MOUNT(bParam0);
		RELEASE_OBJECT_REF(bVar1);
		Function_693(bVar1);
	}
	if (!IS_ACTOR_PLAYER(bParam0))
	{
		RELEASE_OBJECT_REF(GET_OBJECT_FROM_ACTOR(bParam0));
		Function_693(bParam0);
	}
	return;
}

bool Function_773(int iParam0, bool bParam1, int iParam2) //Position: 0x2B494 / 177300
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= *iParam0)
	{
		if (Function_774(iParam0[iVar048], bParam1))
		{
			*iParam2 = iVar0;
			return 1;
		}
		iVar0++;
	}
	*iParam2 = 4294967295;
	return 0;
}

bool Function_774(int iParam0, bool bParam1) //Position: 0x2B4C8 / 177352
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

void Function_775() //Position: 0x2B52C / 177452
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	vector3 vVar5;
	
	if (bLocal_493)
	{
		if (!IS_SCRIPT_VALID(bLocal_495))
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
			bVar2 = Function_773(&Local_11, GET_ACTOR_FROM_OBJECT(bVar1), &iVar4);
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

void Function_776() //Position: 0x2B61D / 177693
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

void Function_777(int iParam0, int iParam1) //Position: 0x2B6AE / 177838
{
	Global_28952[iParam15] = iParam1;
	Global_28952[iParam15].f_4 = Function_758(iParam0);
	if (StackVal)
	{
		if (SQUAD_IS_VALID(StackVal))
		{
			Global_28952[iParam15].f_8 = Function_552(StackVal);
		}
		Global_28952[iParam15].f_12 = Function_643(iParam0, &Global_28952[iParam15] + 16, 0);
	}
	return;
}

bool Function_778() //Position: 0x2B709 / 177929
{
	bool bVar0;
	
	if (!NET_IS_IN_SESSION())
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 <= 16)
	{
		if ((Global_3386 && Global_76943[bVar096] != Global_29006) || Function_650(bVar0))
		{
			if (Function_779(bVar0) != 4294967295)
			{
				return 1;
			}
		}
		bVar0++;
	}
	return 0;
}

int Function_779(int iParam0) //Position: 0x2B750 / 178000
{
	return Global_76943[iParam096].f_112;
}

var Function_780(int iParam0, vector3 vParam1, int iParam4) //Position: 0x2B760 / 178016
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	
	iVar0 = Function_790(iParam0);
	if (iVar0 == 4294967295)
	{
		return 4294967295;
	}
	iVar1 = Function_686(iParam4, iParam0[iVar048]->f_164);
	fVar2 = Function_789();
	fVar3 = Function_788();
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
	bVar4 = START_CURVE_QUERY(Global_28841, vParam1, iVar1, fVar2, fVar3, 5.0f, 0);
	if (!GET_NUM_POINTS_IN_CURVE_QUERY(bVar4) < 0)
	{
		UNK_0xDF93BD7C(bVar4);
		return 4294967295;
	}
	if (!Function_785(iParam0, bVar4, iVar0))
	{
		UNK_0xDF93BD7C(bVar4);
		return 4294967295;
	}
	if (iParam4 == 0)
	{
		iParam0[iVar048]->f_4 = Function_782(iParam0, GET_CURVE_TYPE(iParam0[iVar048]->f_152));
	}
	else
	{
		iParam0[iVar048]->f_4 = iParam4;
	}
	if (!Function_781(StackVal))
	{
		iParam0[iVar048]->f_4 = 1;
		if (!Function_781(StackVal))
		{
			Function_755(iParam0[iVar048], 0);
			UNK_0xDF93BD7C(bVar4);
			return 4294967295;
		}
	}
	Function_736(iParam0[iVar048], GET_CURVE_TYPE(iParam0[iVar048]->f_152));
	Global_28842.f_8 = StackVal + 1;
	if (!Function_71())
	{
		Global_28842.f_16 = ((GET_CURRENT_GAME_TIME() + (2.0f / 2.0f)) + RAND_FLOAT_RANGE(0.0f, 2.0f));
	}
	else
	{
		Global_28842.f_16 = ((GET_CURRENT_GAME_TIME() + ((2.0f * 40.0f) / 2.0f)) + RAND_FLOAT_RANGE(0.0f, (2.0f * 40.0f)));
	}
	Function_679(iParam0[iVar048]);
	Function_703(&Global_28842, 65536);
	UNK_0xDF93BD7C(bVar4);
	return iVar0;
}

bool Function_781(int iParam0) //Position: 0x2B8DE / 178398
{
	switch (iParam0)
	{
		case 0x00000001:
			if (!Function_762(&Global_28842, 2))
			{
				return 0;
			}
			if (!Global_30767[23])
			{
				return 0;
			}
			break;
		
		case 0x00000002:
			if (!Function_762(&Global_28842, 4))
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
			if (!Function_63(Global_30750[9], 0, 4294967295, 0))
			{
				return 0;
			}
			if (!Function_63(Global_30750[1], 2, 4294967295, 0))
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

int Function_782(int iParam0, int iParam1) //Position: 0x2B9C7 / 178631
{
	bool bVar0;
	
	bVar0 = RAND_INT_RANGE(false, 1000);
	switch (iParam1)
	{
		case 0x00000005:
			return 1;
			break;
		
		case 0x00000004:
			if (IntToFloat(bVar0) > ((Global_28842.f_32 + Global_28842.f_36) * 1000.0f) && Function_783(iParam0, 2))
			{
				return 2;
			}
			return 1;
			break;
		
		case 0x0000000B:
			if (IntToFloat(bVar0) > ((Global_28842.f_32 + Global_28842.f_36) * 1000.0f) && Function_783(iParam0, 2))
			{
				return 2;
			}
			return 1;
			break;
	}
	return 1;
}

int Function_783(int iParam0, int iParam1) //Position: 0x2BA47 / 178759
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
			if (Function_762(&Global_28842, 64))
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
				if (Function_758(iParam0[iVar048]))
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
				iVar1 = Function_784(&iVar2);
				if (iVar1 > 4)
				{
					return 0;
				}
				if (iVar2 >= 1)
				{
					return 0;
				}
				if (IS_ACTOR_RIDING_VEHICLE(Function_188()))
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

var Function_784(int iParam0) //Position: 0x2BB69 / 179049
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

bool Function_785(var uParam0, bool bParam1, int iParam2) //Position: 0x2BBBE / 179134
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
	var uVar31;
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
		Function_642(&Var3);
		vVar10 = { StackVal, StackVal, Function_642(&Var3) };
		bVar22 = VDIST(vVar10, Global_34574);
		if (!Function_754(16384))
		{
			if (bVar22 > Function_789())
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
				if (Function_786(StackVal, StackVal, vVar10))
				{
					bVar9 = false;
				}
			}
		}
		if ((Function_754(32) && !Function_754(16384)) && bVar9)
		{
			vVar19 = { 0.0f, 0.0f, -1.0f };
			ROTATE_VECTOR_XZ(&vVar19, GET_HEADING(Global_34573), 0);
			Function_642(&Var3);
			vVar16 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Global_34574, Function_642(&Var3), StackVal) };
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
					if (Function_758(uParam0[bVar248]))
					{
						if (SQUAD_IS_VALID(StackVal))
						{
							if (SQUAD_GET_SIZE(StackVal) >= 0)
							{
								Function_642(&Var3);
								bVar29 = Function_662(StackVal, StackVal, StackVal, Function_642(&Var3));
								if (IS_ACTOR_VALID(bVar29))
								{
									GET_POSITION(bVar29, &vVar10);
								}
								else
								{
									Function_642(uParam0[bVar248] + 24);
									vVar10 = { StackVal, StackVal, Function_642(uParam0[bVar248] + 24) };
								}
								Function_642(&Var3);
								if (VDIST(vVar10, Function_642(&Var3)) > 20.0f)
								{
									bVar9 = false;
								}
							}
						}
					}
				}
				bVar2++;
			}
			if (Function_758(&Global_28903))
			{
				if (SQUAD_IS_VALID(StackVal))
				{
					if (SQUAD_GET_SIZE(StackVal) >= 0)
					{
						Function_642(&Var3);
						bVar30 = Function_662(StackVal, StackVal, StackVal, Function_642(&Var3));
						if (IS_ACTOR_VALID(bVar30))
						{
							GET_POSITION(bVar30, &vVar10);
						}
						else
						{
							Function_642(&Global_28903 + 24);
							vVar10 = { StackVal, StackVal, Function_642(&Global_28903 + 24) };
						}
						Function_642(&Var3);
						if (VDIST(vVar10, Function_642(&Var3)) > 20.0f)
						{
							bVar9 = false;
						}
					}
				}
			}
		}
		if (bVar9)
		{
			Function_642(&Var3);
			vVar10 = { StackVal, StackVal, Function_642(&Var3) };
			vVar10.f_4 = (vVar10.y + 1.0f);
			uVar31 = GET_MATERIAL_AT_VECTOR(&vVar10);
			if (uVar31 & 1 == 0)
			{
				bVar9 = false;
				iVar1 += 5;
			}
			vVar10.f_4 = (vVar10.y - 1.0f);
		}
		if (Function_750(&Var3))
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
	if (Function_677(&Var3))
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
			Function_642(&iVar32);
			vVar13 = { StackVal, StackVal, Function_642(&iVar32) };
			bVar2++;
		}
		Function_642(&Var3);
		vVar13 = { StackVal, StackVal, Function_642(&Var3) };
	}
	uParam0[iParam248]->f_152 = GET_CURVE_FROM_POINT_INDEX_IN_CURVE_QUERY(bParam1, bVar0);
	uParam0[iParam248]->f_156 = CURVE_CALCULATE_DISTANCE_BY_FORCED_COMPONENT_SUBDIVISION_BOUNDS(uParam0[iParam248]->f_152, 0.0f, 1.0f, 10);
	*(uParam0[iParam248] + 24) = { StackVal, StackVal, StackVal, StackVal, StackVal, Var3 };
	Function_642(uParam0[iParam248] + 24);
	vVar10 = { StackVal, StackVal, Function_642(uParam0[iParam248] + 24) };
	return 1;
}

bool Function_786(vector3 vParam0) //Position: 0x2BF36 / 180022
{
	var uVar0[8];
	bool bVar9;
	int iVar10;
	
	Function_787(&uVar0);
	bVar9 = Function_84(StackVal, StackVal, vParam0, 1, 1, 0);
	if (Function_161(bVar9))
	{
		if (StackVal == 7)
		{
			return 1;
		}
	}
	iVar10 = 0;
	while (iVar10 <= 8)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
			if (IS_POINT_IN_VOLUME(StackVal, vParam0))
			{
				return 1;
			}
		}
		iVar10++;
	}
	return 0;
}

void Function_787(var uParam0) //Position: 0x2BFAA / 180138
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

var Function_788() //Position: 0x2C00B / 180235
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

float Function_789() //Position: 0x2C056 / 180310
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

int Function_790(int iParam0) //Position: 0x2C09A / 180378
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

bool Function_791(int iParam0, bool bParam1, int iParam2) //Position: 0x2C0C7 / 180423
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	
	if (!Function_754(32768))
	{
		return 0;
	}
	if (StackVal > Function_793())
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
	if (!Function_63(Global_30750[6], 4, 23, 1))
	{
		return 0;
	}
	if (!Function_754(524288))
	{
		return 0;
	}
	if (Function_790(iParam0) == 4294967295)
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
		if (!Function_754(2097152))
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
		iVar3 = Function_792();
		if (iVar3 > Function_793())
		{
			return 0;
		}
		if (Function_778())
		{
			return 0;
		}
	}
	return 1;
}

var Function_792() //Position: 0x2C1FB / 180731
{
	return Global_78480.f_16;
}

int Function_793() //Position: 0x2C207 / 180743
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

bool Function_794(vector3 vParam0) //Position: 0x2C2BF / 180927
{
	return ARE_CURVES_IN_RANGE(48, vParam0, 150.0f);
}

void Function_795() //Position: 0x2C2D3 / 180947
{
	int iVar0;
	
	iVar0 = GET_NUM_ACTORENUMS_IN_POPULATION(Global_30750[0]);
	Global_28842.f_236 = RAND_INT_RANGE(false, (iVar0 - 1));
	Global_28842.f_232 = 0;
	Global_28842.f_232 = 0;
	while (Global_28842.f_232 <= Global_28842.f_84)
	{
		Function_704(HUD_IS_FADED());
		Global_28842.f_232++;
	}
	Global_28842.f_232 = 0;
	Function_462(&Global_28842 + 84);
	Function_742(262144);
	return;
}

void Function_796() //Position: 0x2C335 / 181045
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	float fVar5;
	
	if (!Function_1())
	{
		Function_742(2097152);
		return;
	}
	if (!NET_IS_IN_SESSION())
	{
		Function_742(2097152);
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
					Function_702(2097152);
					return;
				}
			}
		}
		bVar0++;
	}
	Function_742(2097152);
	return;
}

bool Function_797(int iParam0, bool bParam1) //Position: 0x2C3B8 / 181176
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
			if (Function_773(iParam0, uVar3, &iVar1))
			{
				Function_801(iParam0[iVar148], bParam1);
			}
			else if (Function_797(iParam0, uVar3))
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
			if (Function_773(iParam0, bVar4, &iVar1))
			{
				Function_801(iParam0[iVar148], bParam1);
				if (!NET_IS_IN_SESSION())
				{
					GIVE_OBJECT_TO_LAYOUT(bParam1, Global_28841);
					REGISTER_TRAFFIC_ACTOR(bParam1, 1);
				}
				return 1;
			}
			if (Function_799(iParam0, bVar4, 1, bVar2, &iVar1))
			{
				Function_801(iParam0[iVar148], bVar4);
				if (!NET_IS_IN_SESSION())
				{
					GIVE_OBJECT_TO_LAYOUT(bParam1, Global_28841);
					REGISTER_TRAFFIC_ACTOR(bParam1, 1);
				}
				return 1;
			}
			if (Function_798(iParam0, bVar4, 1))
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
		if (!Function_692(bParam1, 1, 1, 4294967295))
		{
			return 0;
		}
		if (IS_ACTOR_DRAFT_VEHICLE(bParam1))
		{
			iVar0 = 2;
		}
		if (Function_798(iParam0, bParam1, iVar0))
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
			if (Function_773(iParam0, bVar5, &iVar1))
			{
				Function_801(iParam0[iVar148], bParam1);
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
			if (Function_797(iParam0, bVar5))
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
		if (Function_799(iParam0, bParam1, iVar0, bVar2, &iVar1))
		{
			Function_801(iParam0[iVar148], bParam1);
			if (!NET_IS_IN_SESSION())
			{
				GIVE_OBJECT_TO_LAYOUT(bParam1, Global_28841);
				REGISTER_TRAFFIC_ACTOR(bParam1, 1);
			}
			return 1;
		}
		if (Function_798(iParam0, bParam1, iVar0))
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

bool Function_798(var uParam0, bool bParam1, int iParam2) //Position: 0x2C62D / 181805
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	iVar0 = Function_790(uParam0);
	if (iVar0 == 4294967295)
	{
		return 0;
	}
	uParam0[iVar048]->f_4 = iParam2;
	if (Function_1())
	{
		uParam0[iVar048]->f_188 = NET_ACTOR_GET_SCRIPT_INT(bParam1);
	}
	Function_736(uParam0[iVar048], 4294967294);
	(*uParam0)[iVar048] = 3;
	iVar1 = 0;
	bVar2 = false;
	switch (iParam2)
	{
		case 0x00000002:
			if (!IS_ACTOR_VEHICLE(bParam1))
			{
				Function_755(uParam0[iVar048], 0);
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
			uParam0[iVar048]->f_180 = CREATE_OBJECTSET_IN_LAYOUT(Function_83(), Global_28841, 15, 0);
			Function_698(StackVal, StackVal, uParam0[iVar048]->f_180);
			bVar4 = GET_ACTOR_IN_VEHICLE_SEAT(bParam1, false);
			break;
		
		case 0x00000001:
		case 0x00000003:
			if (!IS_ACTOR_HUMAN(bParam1))
			{
				Function_755(uParam0[iVar048], 0);
				return 0;
			}
			if (IS_ACTOR_PLAYER(bParam1))
			{
				if (IS_ACTOR_RIDING(bParam1))
				{
					RELEASE_ACTOR(GET_MOUNT(bParam1));
				}
				Function_755(uParam0[iVar048], 0);
				return 0;
			}
			SQUAD_JOIN(StackVal, bParam1);
			if (iParam2 == 1)
			{
				uParam0[iVar048]->f_20 = 1;
				uParam0[iVar048]->f_180 = CREATE_OBJECTSET_IN_LAYOUT(Function_83(), Global_28841, 15, 0);
				Function_698(StackVal, StackVal, uParam0[iVar048]->f_180);
			}
			bVar4 = bParam1;
			break;
		
		default:
			break;
	}
	Function_697(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *uParam0[iVar048]);
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

bool Function_799(var uParam0, bool bParam1, int iParam2, bool bParam3, int iParam4) //Position: 0x2C8FD / 182525
{
	int iVar0;
	bool bVar1;
	float fVar2;
	vector3 vVar3;
	vector3 vVar6;
	bool bVar9;
	
	bVar1 = 0.0f;
	fVar2 = 0.0f;
	if (bParam3 && Function_1())
	{
		bVar9 = NET_ACTOR_GET_SCRIPT_INT(bParam1);
		if (bVar9 != 0)
		{
			iVar0 = 0;
			while (iVar0 <= *uParam0)
			{
				if (Function_758(uParam0[iVar048]))
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
		if (Function_758(uParam0[iVar048]))
		{
			if (StackVal == iParam2)
			{
				if (Function_800(uParam0[iVar048], bParam1))
				{
					switch (StackVal)
					{
						case 0x00000001:
						case 0x00000003:
							bVar1 = GET_HEADING(bParam1);
							GET_OBJECT_POSITION(bParam1, &vVar6);
							Function_642(uParam0[iVar048] + 24);
							vVar3 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar6, Function_642(uParam0[iVar048] + 24), StackVal) };
							fVar2 = UNK_0x9C40E671(&vVar3);
							if (FABS((bVar1 - fVar2)) > 45.0f)
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

bool Function_800(int iParam0, bool bParam1) //Position: 0x2CA16 / 182806
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	
	if (!Function_758(iParam0))
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

void Function_801(int iParam0, bool bParam1) //Position: 0x2CA8F / 182927
{
	if (!Function_758(iParam0))
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
			iParam0->f_180 = CREATE_OBJECTSET_IN_LAYOUT(Function_83(), Global_28841, 15, 0);
		}
		Function_698(StackVal, StackVal, iParam0->f_180);
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

void Function_802(int iParam0, int iParam1) //Position: 0x2CB7F / 183167
{
	int iVar0;
	
	if ((((HUD_IS_FADED() && !Function_754(65536)) && !Global_3410) && !Function_754(16384)) || iParam1)
	{
		if (((Global_3391 && !Global_3410) || !STREAMING_IS_WORLD_LOADED()) || iParam1)
		{
			iVar0 = 0;
			while (iVar0 <= *iParam0)
			{
				if (Function_758(iParam0[iVar048]))
				{
					Function_755(iParam0[iVar048], 0);
				}
				iVar0++;
			}
			if (Function_758(&Global_28903))
			{
				Function_755(&Global_28903, 0);
			}
			if (!Function_754(65536))
			{
				if (!Global_34165.f_44)
				{
					DESTROY_LAYOUT_OBJECTS(Global_28841);
				}
				else
				{
					RELEASE_LAYOUT_OBJECTS(Global_28841);
				}
				Function_764(Global_28841);
			}
			Global_28842.f_16 = 0.0f;
			Global_28842.f_8 = 0;
			Global_28842.f_48 = 0;
			Function_742(65536);
		}
	}
	if (StackVal && (!HUD_IS_FADED() && Function_754(16384)) <= Function_793())
	{
		Function_702(16384);
	}
	return;
}

void Function_803(bool bParam0) //Position: 0x2CC52 / 183378
{
	if (!Function_1())
	{
		return;
	}
	Global_78480.f_8 = StackVal;
	Function_807();
	Function_806();
	if (!bParam0)
	{
		return;
	}
	Function_804();
	return;
}

void Function_804() //Position: 0x2CC7B / 183419
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
			if (Function_805(bVar1))
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
			if (Function_805(bVar1))
			{
				Global_78480.f_20++;
			}
			bVar2 = OBJECT_ITERATOR_NEXT(bVar0);
		}
		DESTROY_ITERATOR(bVar0);
	}
	return;
}

bool Function_805(bool bParam0) //Position: 0x2CD2D / 183597
{
	if (!IS_ACTOR_VEHICLE(bParam0))
	{
		return 0;
	}
	if (!NET_IS_OBJECT_LOCAL(bParam0))
	{
		return 0;
	}
	if (!Function_692(bParam0, 4294967295, 1, 4294967295))
	{
		return 0;
	}
	return 1;
}

void Function_806() //Position: 0x2CD58 / 183640
{
	bool bVar0;
	
	Global_78480.f_16 = 0;
	bVar0 = false;
	while (bVar0 <= 16)
	{
		if (IS_SLOT_VALID(bVar0))
		{
			if ((Global_3386 && Global_76943[bVar096] != Global_29006) || Function_650(bVar0))
			{
				Global_78480.f_16 = (Global_78480.f_16 + Global_76943[bVar096].f_12);
			}
		}
		bVar0++;
	}
	return;
}

void Function_807() //Position: 0x2CDB0 / 183728
{
	var uVar0;
	int iVar1;
	
	Global_78480.f_12 = 0;
	iVar1 = 0;
	while (iVar1 <= Local_11)
	{
		if (Function_758(&(Local_11[iVar148])))
		{
			if (Function_643(&(Local_11[iVar148]), &uVar0, 1))
			{
				Global_78480.f_12++;
			}
		}
		iVar1++;
	}
	return;
}

var Function_808(int iParam0) //Position: 0x2CDF9 / 183801
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	iVar2 = 0;
	while (iVar2 <= *iParam0)
	{
		if (Function_758(iParam0[iVar248]))
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

void Function_809() //Position: 0x2CE6B / 183915
{
	Global_28842.f_44 = 4294967295;
	Global_28842.f_72 = 4294967295;
	Global_28842.f_64 = 0;
	Global_28842.f_68 = 0;
	Function_703(&Global_28842, 512);
	Global_28842.f_76 = -500.0f;
	Function_776();
	ENABLE_CURVE("rsdGPSTRAIL_home01_", 0);
	ENABLE_CURVE("rsdGPSTRAIL_home01_1", 0);
	ENABLE_CURVE("rsdGPSTRAIL_home01_2", 0);
	ENABLE_CURVE("rsdGPSTRAIL_home02_ranch01_", 0);
	ENABLE_CURVE("rsdGPSTRAIL_home02_ranch01_1", 0);
	ENABLE_CURVE("rsdGPSTRAIL_home02_ranch01_2", 0);
	ENABLE_CURVE("rsdGPSTRAIL_ranch07_", 0);
	ENABLE_CURVE("rsdGPSTRAIL_ranch08_", 0);
	ENABLE_CURVE("rsdGPSTRAIL_ranch08_1", 0);
	STREAMING_REQUEST_ACTOR(976, 1, false);
	Function_742(8192);
	bLocal_493 = Function_392("trafficDebugLite");
	bLocal_494 = Function_392("trafficForceCoach");
	if (bLocal_494)
	{
		Function_760(&Global_28842, 64);
	}
	Function_742(262144);
	if (Function_392("trafficSpew"))
	{
		Global_30842[43] = 1;
		Global_30842[12] = 1;
		Global_30842[13] = 1;
	}
	return;
}

void Function_810(int iParam0) //Position: 0x2D034 / 184372
{
	strcpy(iParam0 + 12, "LAW", 16);
	*iParam0 = 208359;
	iParam0->f_4 = 184439;
	iParam0->f_8 = 184418;
	iParam0->f_28 = 1;
	return;
}

void Function_811() //Position: 0x2D062 / 184418
{
	if (IS_LAYOUTREF_VALID(Global_26314))
	{
		DESTROY_LAYOUT(Global_26314);
	}
	return;
}

int Function_812() //Position: 0x2D077 / 184439
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	iLocal_8 = 0;
	Function_920(&uLocal_4, &bLocal_5, &bLocal_7, &bLocal_6, &Global_62999);
	Function_912();
	Function_911();
	if (Global_3378)
	{
		if (Global_3403)
		{
			Function_296(0);
		}
		Function_910(bLocal_5, bLocal_7);
	}
	if (Function_366(64))
	{
		Function_909(bLocal_5, bLocal_7, bLocal_6);
		Function_908(bLocal_5, bLocal_7);
		Function_571(64);
	}
	if (Function_366(512))
	{
		Function_907(bLocal_5, bLocal_7, bLocal_6);
		Function_908(bLocal_5, bLocal_7);
		Function_571(512);
	}
	if (Function_366(1024))
	{
		Function_906(bLocal_5, bLocal_7);
		Function_908(bLocal_5, bLocal_7);
		Function_571(1024);
		iLocal_8 = 0;
	}
	Function_880(uLocal_4, bLocal_5, Global_26315, bLocal_7);
	if (Function_865(bLocal_5, bLocal_7, bLocal_6))
	{
		iLocal_8 = 1;
	}
	if (Function_366(1) && Function_366(4096))
	{
		if (iLocal_8 && Function_541(1))
		{
			if (!Global_3403)
			{
				Function_296(1);
				Global_26401.f_2212 = Function_298(StackVal);
			}
		}
	}
	if (Function_366(2) && Function_366(8192))
	{
		Function_908(bLocal_5, bLocal_7);
	}
	if (Function_366(128))
	{
		Function_909(bLocal_5, bLocal_7, bLocal_6);
		Function_908(bLocal_5, bLocal_7);
		Function_853(bLocal_5, bLocal_6);
		Function_571(128);
	}
	if (GET_OBJECTSET_SIZE(bLocal_6) >= 25)
	{
		Function_853(bLocal_5, bLocal_6);
	}
	if (Function_541(1))
	{
		Function_847();
	}
	else if (Global_3403)
	{
		if (!IS_SCRIPT_VALID(Global_26316.f_60) && !IS_SCRIPT_VALID(Global_26316.f_64))
		{
			Function_296(0);
		}
	}
	if (!Function_366(0x1000000))
	{
		Function_285();
		*(&Global_26316 + 156) = { StackVal, StackVal, Function_285() };
	}
	else if (!STREAMING_ARE_BOUNDS_LOADED(*(&Global_26316 + 156), 1.0f))
	{
		if (StackVal > 1000.0f)
		{
			Function_285();
			*(&Global_26316 + 156) = { StackVal, StackVal, Function_285() };
		}
		else if (!STREAMING_ARE_BOUNDS_LOADED(StackVal, StackVal, (Global_26316.f_156 - 1000.0f), 1.0f))
		{
			Function_285();
			*(&Global_26316 + 156) = { StackVal, StackVal, Function_285() };
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
									Function_296(1);
									Global_26401.f_2212 = Function_298(StackVal);
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
	if (Function_846())
	{
		if (IS_EARLIER_THAN((*&Global_26316 + 88)[StackVal], 0) || Function_366(0x1000000))
		{
			bVar2 = false;
			if (Function_1())
			{
				bVar2 = Function_636(131072, 1);
			}
			else
			{
				bVar2 = (*&Global_26401 + 36[12181][35])[StackVal] <= 20;
			}
			if ((StackVal && Function_298(((bVar2 && Function_366(32)) && Function_366(131072))) < 0) && !Function_366(0x1000000))
			{
				Function_844();
			}
			else if (StackVal && Function_298((((StackVal && (((*&Global_26316 + 72)[StackVal] != 3 && !Function_366(0x1000000)) || (Global_63399 != 16 || Global_63399 != 32) > (*&Global_26401 + 36[12181][35])[RAND_INT_RANGE(false, 10000)] * 500)) && Function_366(16)) && Function_366(65536))) < 150)
			{
				Function_840();
			}
			else if (Function_366(8) && Function_366(32768))
			{
				Function_830();
			}
			else
			{
				if (Function_366(0x1000000))
				{
					if (!IS_SCRIPT_VALID(Global_26316.f_60) && !IS_SCRIPT_VALID(Global_26316.f_64))
					{
						if (Global_3403)
						{
							Function_296(0);
						}
						Function_571(0x1000000);
					}
				}
				Function_829(StackVal, 0);
			}
		}
		if (!Function_366(0x1000000))
		{
			Function_819();
		}
	}
	else if (Function_366(0x1000000))
	{
		if (!IS_SCRIPT_VALID(Global_26316.f_60) && !IS_SCRIPT_VALID(Global_26316.f_64))
		{
			if (Global_3403)
			{
				Function_296(0);
			}
			Function_571(0x1000000);
		}
	}
	if (Function_366(2048))
	{
		Function_814();
	}
	Function_813();
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

void Function_813() //Position: 0x2D5BA / 185786
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

void Function_814() //Position: 0x2D5EA / 185834
{
	bool bVar0;
	struct<29> Var1;
	
	if (Global_3380)
	{
		Function_571(2048);
		return;
	}
	if (!IS_ACTOR_VALID(Function_188()))
	{
		return;
	}
	if (!IS_ACTOR_ALIVE(Function_188()))
	{
		return;
	}
	Function_491(Global_26401.f_2216, 0, 0);
	bVar0 = Function_298(Global_26401.f_2216) < Function_186();
	if (bVar0)
	{
		Var1.f_20 = (Function_298(Global_26401.f_2216) - Function_186());
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
		Var1 = Function_818(Global_27772);
		Function_817(Global_27772);
		*(&Var1 + 4) = { StackVal, StackVal, Function_817(Global_27772) };
	}
	bVar9 = false;
	if (Global_27772 == 0)
	{
		if (Var1 == Global_30640[0])
		{
			if (((Function_816(8) || Function_816(9)) || Function_816(23)) || Function_816(21))
			{
				bVar9 = true;
			}
		}
		else if (Var1 == Global_30717[0])
		{
			if ((Function_816(43) || Function_816(47)) || Function_816(42))
			{
				bVar9 = true;
			}
		}
	}
	if (bVar9)
	{
		Var1 = Global_30668[0];
		*(&Var1 + 4) = { -819.6454f, 93.80083f, 2436.405f };
	}
	Var1.f_16 = Global_26401.f_2216;
	Var1.f_24 = bVar0;
	Var1.f_28 = Var1.f_20;
	Global_26316.f_68 = 4;
	Global_26316.f_60 = LAUNCH_NEW_SCRIPT_WITH_ARGS("content/Ambient/CrimeResponse/event_player_in_jail", &Var1, 8, 0);
	bVar10 = Function_298(Global_26401.f_2216);
	Function_815(Global_26401.f_2216, bVar10);
	Global_13111 = 4294967295;
	Global_27772 = 0;
	if (IS_SCRIPT_VALID(Global_26316.f_60))
	{
		Function_571(2048);
		Global_3407 = 1;
		if (bVar0)
		{
			Function_307(Function_186(), 1);
			(*&Global_26401 + 16)[Global_26401.f_2216] = Var1.f_20;
		}
		else
		{
			Function_307(bVar10, 1);
			(*&Global_26401 + 16)[Global_26401.f_2216] = 0;
		}
	}
	return;
}

void Function_815(int iParam0, bool bParam1) //Position: 0x2D7CD / 186317
{
	if (!Function_299(iParam0))
	{
		return;
	}
	if (!bParam1 < 0)
	{
	}
	if (bParam1 > Global_26401[iParam0])
	{
		Function_308(222, Global_26401[iParam0], 0);
		if (Function_187(222) <= 0)
		{
			Function_305(222, 0, 0);
		}
		Global_26401[iParam0] = 0;
		Function_305((*&Global_26401 + 2220)[iParam0], 0, 0);
	}
	else
	{
		Global_26401[iParam0] = (Global_26401[iParam0] - bParam1);
		Function_308((*&Global_26401 + 2220)[iParam0], bParam1, 0);
		Function_308(222, bParam1, 0);
	}
	return;
}

int Function_816(int iParam0) //Position: 0x2D856 / 186454
{
	if (Function_245(StackVal) == 0)
	{
		if (Function_244(&(Global_3422[iParam040])))
		{
			return 1;
		}
	}
	return 0;
}

vector3 Function_817(int iParam0) //Position: 0x2D87C / 186492
{
	switch (iParam0)
	{
		case 0x00000001:
			return -819.6454f, 93.80083f, 2436.405f;
			break;
		
		case 0x00000002:
			return -2080.289f, 16.962f, 2603.609f;
			break;
		
		case 0x00000003:
			return 772.1412f, 79.45659f, 1241.604f;
			break;
		
		case 0x00000004:
			return -2647.498f, 31.386f, 4247.398f;
			break;
		
		case 0x00000005:
			return -724.92f, 63.349f, 3297.469f;
			break;
		
		case 0x00000006:
			return -4355.349f, 30.16f, 4384.089f;
			break;
	}
	Function_285();
	return StackVal, StackVal, Function_285();
}

int Function_818(int iParam0) //Position: 0x2D922 / 186658
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

void Function_819() //Position: 0x2D992 / 186770
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
			Global_26391.f_32 = Function_828();
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
			bVar6 = Function_820(StackVal, StackVal, bVar0, Global_34574, 30.0f, 0, 0);
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
			Function_645(Global_26391.f_28);
		}
	}
	return;
}

var Function_820(bool bParam0, vector3 vParam1, float fParam4, bool bParam5, int iParam6) //Position: 0x2DB0B / 187147
{
	bool bVar0;
	
	if (fParam4 < 100.0f)
	{
		return "";
	}
	bVar0 = "";
	Function_827();
	if (IS_LAYOUTREF_VALID(GET_AMBIENT_LAYOUT()))
	{
		bVar0 = Function_821(StackVal, StackVal, StackVal, GET_AMBIENT_LAYOUT(), 15, bParam0, vParam1, fParam4, 0, iParam6, 0);
		if (IS_OBJECT_VALID(bVar0))
		{
			return bVar0;
		}
	}
	if (IS_LAYOUTREF_VALID(Global_6289))
	{
		bVar0 = Function_821(StackVal, StackVal, StackVal, Global_6289, 24, bParam0, vParam1, fParam4, 0, iParam6, 0);
		if (IS_OBJECT_VALID(bVar0))
		{
			return bVar0;
		}
	}
	if (IS_LAYOUTREF_VALID(Global_6288))
	{
		bVar0 = Function_821(StackVal, StackVal, StackVal, Global_6288, 24, bParam0, vParam1, fParam4, 0, iParam6, 0);
		if (IS_OBJECT_VALID(bVar0))
		{
			return bVar0;
		}
	}
	if (IS_LAYOUTREF_VALID(GET_GC_LAYOUT()))
	{
		bVar0 = Function_821(StackVal, StackVal, StackVal, GET_GC_LAYOUT(), 15, bParam0, vParam1, fParam4, 0, iParam6, 0);
		if (IS_OBJECT_VALID(bVar0))
		{
			return bVar0;
		}
	}
	if (IS_LAYOUTREF_VALID(Global_28841))
	{
		if (bParam5)
		{
			bVar0 = Function_821(StackVal, StackVal, StackVal, Global_28841, 15, bParam0, vParam1, fParam4, 1, iParam6, 0);
			if (IS_OBJECT_VALID(bVar0))
			{
				return bVar0;
			}
		}
	}
	if (IS_LAYOUTREF_VALID(Global_6290))
	{
		bVar0 = Function_821(StackVal, StackVal, StackVal, Global_6290, 15, bParam0, vParam1, fParam4, 0, iParam6, 0);
		if (IS_OBJECT_VALID(bVar0))
		{
			return bVar0;
		}
	}
	return Function_820(StackVal, StackVal, bParam0, vParam1, (fParam4 * 2.0f), bParam5, 0);
}

bool Function_821(bool bParam0, bool bParam1, int iParam2, bool bParam3, vector3 vParam4, float fParam7, bool bParam8, int iParam9, bool bParam10) //Position: 0x2DC65 / 187493
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	int iVar5;
	
	GET_CRIME_POSITION(bParam3, &vVar2);
	Function_826(&Global_26118);
	ITERATE_ON_OBJECT_TYPE(Global_26118, iParam2);
	if (bParam10 == "")
	{
		ITERATE_IN_SPHERE(Global_26118, vVar2, fParam7);
	}
	else
	{
		ITERATE_IN_VOLUME(Global_26118, bParam10);
	}
	ITERATE_IN_LAYOUT(Global_26118, bParam0);
	if (GET_NUM_ITERATOR_MATCHES(Global_26118) >= 0)
	{
		bVar0 = Function_825(StackVal, StackVal, Global_26118, bParam1, GET_CRIME_VICTIM(bParam3), "nnowitness", vParam4, GET_CRIME_CRIMINAL(bParam3));
		bVar1 = Function_822(bVar0, bParam8, iParam9);
		if (IS_OBJECT_VALID(bVar1))
		{
			return bVar1;
		}
		if (bParam1 == 6)
		{
			iVar5 = 4;
		}
		else if (bParam1 == 4)
		{
			iVar5 = 6;
		}
		if (iVar5 != 4 || iVar5 != 6)
		{
			bVar0 = Function_825(StackVal, StackVal, Global_26118, iVar5, GET_CRIME_VICTIM(bParam3), "nnowitness", vParam4, GET_CRIME_CRIMINAL(bParam3));
			bVar1 = Function_822(bVar0, bParam8, iParam9);
			if (IS_OBJECT_VALID(bVar1))
			{
				return bVar1;
			}
		}
	}
	return "";
}

bool Function_822(bool bParam0, bool bParam1, int iParam2) //Position: 0x2DD4F / 187727
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
					MEMORY_PREFER_WALKING(bVar0, 1);
				}
			}
		}
		if (!Function_824(bParam0) && !Function_823(bParam0))
		{
			if (IS_ACTOR_HOGTIED(bVar0))
			{
				DECOR_SET_BOOL(bParam0, "nnowitness", true);
			}
			else
			{
				if (SQUAD_IS_VALID(StackVal))
				{
					if (StackVal == Function_552(bVar0))
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

bool Function_823(bool bParam0) //Position: 0x2DE51 / 187985
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

bool Function_824(bool bParam0) //Position: 0x2DEB7 / 188087
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
					if (Function_549(&(Global_6537[12]), 1))
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

bool Function_825(bool bParam0, int iParam1, int iParam2, bool bParam3, vector3 vParam4, bool bParam7) //Position: 0x2DFC3 / 188355
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
	fVar2 = 1.001638E+07.0f;
	fVar3 = 1.001638E+07.0f;
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

int Function_826(bool bParam0) //Position: 0x2E249 / 189001
{
	if (IS_ITERATOR_VALID(*bParam0))
	{
		ITERATE_EVERYWHERE(*bParam0);
		ITERATE_ON_PARTIAL_NAME(*bParam0, Function_83());
		ITERATE_ON_PARTIAL_MODEL_NAME(*bParam0, Function_83());
		ITERATE_ON_OBJECT_TYPE(*bParam0, 4294967295);
		return 1;
	}
	return 0;
}

void Function_827() //Position: 0x2E27A / 189050
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
	Function_826(&Global_26118);
	ITERATE_IN_LAYOUT(Global_26118, GET_AMBIENT_LAYOUT());
	return;
}

var Function_828() //Position: 0x2E331 / 189233
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

void Function_829(int iParam0, bool bParam1) //Position: 0x2E3B3 / 189363
{
	bool bVar0;
	
	if (bParam1)
	{
		if (IS_EARLIER_THAN((*&Global_26316 + 88)[iParam0], 0))
		{
			bVar0 = RAND_INT_RANGE(60, 180);
		}
		else
		{
			return;
		}
	}
	bVar0 = RAND_INT_RANGE(1800, 2400);
	if (Function_544() > 3)
	{
		bVar0 *= 2;
	}
	if (Function_1() && !bParam1)
	{
		Function_492(iParam0, 0, 0, 300, 0);
	}
	else
	{
		Function_492(iParam0, 0, 0, Function_251(bVar0), 0);
	}
	return;
}

void Function_830() //Position: 0x2E41A / 189466
{
	bool bVar0;
	
	if (!Global_29007 != 2)
	{
		Function_839();
		return;
	}
	if (Function_1())
	{
		if (Function_838(Global_29005) >= 16)
		{
			return;
		}
	}
	if (((Global_3382 || Global_3380) || Global_3385) || Global_3410)
	{
		if (!Function_366(0x1000000))
		{
			if (!Global_3380)
			{
				Function_837();
			}
			return;
		}
	}
	if (Global_3403 && !Function_366(0x1000000))
	{
		return;
	}
	if (Global_3391)
	{
		Function_839();
		return;
	}
	if (Function_361(&Global_63084))
	{
		Function_839();
		return;
	}
	if (GET_CURRENT_CAMERA_TYPE_FROM_CHANNEL(0) != 1)
	{
		return;
	}
	if (Function_37(12))
	{
		Function_839();
		return;
	}
	if (StackVal == 0)
	{
		if (Function_37(10))
		{
			Function_839();
			return;
		}
	}
	if (StackVal == 1)
	{
		if (Function_37(8))
		{
			Function_839();
			return;
		}
	}
	if (Function_366(0x1000000))
	{
		if (Function_298(StackVal) < 0)
		{
			Function_839();
			return;
		}
	}
	if (IS_SCRIPT_VALID(Global_26316.f_60))
	{
		Function_839();
		return;
	}
	bVar0 = StackVal;
	if (!Function_834((Function_836(bVar0, Function_298(bVar0)) * 2 + Function_835(Function_298(bVar0)))))
	{
		Function_839();
		return;
	}
	if (Function_298(bVar0) <= 150 || Function_366(0x1000000))
	{
		if (!Function_48(Global_76847, 65536))
		{
			Function_43(Global_34573, 65536, 2, 0);
		}
		Global_26316.f_60 = Function_831(bVar0);
		Function_329(257, 1, 0, 0);
		if (IS_SCRIPT_VALID(Global_26316.f_60))
		{
			Global_26316.f_68 = 1;
		}
		else if (!IS_SCRIPT_VALID(Global_26316.f_64))
		{
			if (Global_3403)
			{
				Function_296(0);
			}
			Function_571(0x1000000);
		}
	}
	else if (Function_298(bVar0) <= 150)
	{
	}
	return;
}

var Function_831(bool bParam0) //Position: 0x2E5A5 / 189861
{
	struct<89> Var0;
	
	Function_832(bParam0, 4294967295);
	Var0 = 10;
	if (!Function_366(0x1000000))
	{
		Function_297();
	}
	Var0.f_44 = Function_298(bParam0);
	Var0.f_64 = bParam0;
	Var0.f_48 = GET_PLAYER_ACTOR(0);
	Var0.f_52 = (*&Global_26316 + 104)[bParam0];
	Var0.f_88 = 0;
	return LAUNCH_NEW_SCRIPT_WITH_ARGS("content/Ambient/CrimeResponse/event_law_repsonse_posse", &Var0, 23, 0);
}

void Function_832(int iParam0, int iParam1) //Position: 0x2E632 / 190002
{
	(*&Global_26316 + 88)[iParam0] = Function_833();
	iParam1 = iParam1;
	return;
}

var Function_833() //Position: 0x2E648 / 190024
{
	return MAKE_TIME_OF_DAY_EX(0, 0, 0, 1);
}

bool Function_834(int iParam0) //Position: 0x2E655 / 190037
{
	if ((GET_MAX_NUM_OBJECTS_OF_TYPE(15) - GET_NUM_OBJECTS_OF_TYPE(15)) > iParam0)
	{
		return 1;
	}
	return 0;
}

int Function_835(int iParam0) //Position: 0x2E66E / 190062
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

int Function_836(int iParam0, int iParam1) //Position: 0x2E6AB / 190123
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

void Function_837() //Position: 0x2E6FA / 190202
{
	bool bVar0;
	
	if (StackVal || StackVal != 0 != 1)
	{
		if (IS_EARLIER_THAN((*&Global_26316 + 88)[StackVal], 0))
		{
			bVar0 = RAND_INT_RANGE(15, 30);
		}
		else
		{
			return;
		}
		if (Function_544() > 3)
		{
			bVar0 *= 2;
		}
		Function_492(StackVal, 0, 0, Function_251(bVar0), 0);
	}
	return;
}

int Function_838(bool bParam0) //Position: 0x2E74E / 190286
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	if (Function_161(bParam0))
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

void Function_839() //Position: 0x2E79A / 190362
{
	if (Function_366(0x1000000))
	{
		if (!IS_SCRIPT_VALID(Global_26316.f_60) && !IS_SCRIPT_VALID(Global_26316.f_64))
		{
			if (Global_3403)
			{
				Function_296(0);
			}
			Function_571(0x1000000);
		}
	}
	return;
}

void Function_840() //Position: 0x2E7D3 / 190419
{
	bool bVar0;
	
	if (!Global_29007 != 2)
	{
		return;
	}
	if (Function_1())
	{
		if (Function_838(Global_29005) >= 16)
		{
			return;
		}
	}
	if (((Global_3382 || Global_3380) || Global_3385) || Global_3410)
	{
		if (!Global_3380)
		{
			Function_837();
		}
		return;
	}
	if (Global_3403)
	{
		return;
	}
	if (Function_37(12))
	{
		return;
	}
	if (Global_3391)
	{
		return;
	}
	if (Function_361(&Global_63084))
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
	if (!Function_834((Function_843(Function_298(bVar0)) * 2 + Function_842(Function_298(bVar0)))))
	{
		return;
	}
	if (!Function_48(Global_76847, 262144))
	{
		Function_43(Global_34573, 262144, 2, 0);
	}
	Global_26316.f_60 = Function_841(bVar0);
	if (IS_SCRIPT_VALID(Global_26316.f_60))
	{
		Global_26316.f_68 = 3;
	}
	return;
}

var Function_841(int iParam0) //Position: 0x2E8A0 / 190624
{
	struct<89> Var0;
	
	iParam0 = iParam0;
	Function_832(iParam0, 4294967295);
	Var0 = 10;
	if (!Function_366(0x1000000))
	{
		Function_297();
	}
	Var0.f_52 = Global_26361;
	Var0.f_60 = Global_26361.f_12;
	Var0.f_64 = StackVal;
	Var0.f_48 = GET_PLAYER_ACTOR(0);
	Var0.f_88 = 0;
	Var0.f_68 = 4;
	return LAUNCH_NEW_SCRIPT_WITH_ARGS("content/Ambient/CrimeResponse/event_law_repsonse_bounty", &Var0, 23, 0);
}

int Function_842(int iParam0) //Position: 0x2E934 / 190772
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

int Function_843(bool bParam0) //Position: 0x2E964 / 190820
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

void Function_844() //Position: 0x2E9A1 / 190881
{
	bool bVar0;
	
	if (Function_1())
	{
		if (Function_838(Global_29005) >= 16)
		{
			return;
		}
	}
	if (((Global_3382 || Global_3380) || Global_3385) || Global_3410)
	{
		if (!Global_3380)
		{
			Function_837();
		}
		return;
	}
	if (Global_3391)
	{
		return;
	}
	if (Function_361(&Global_63084))
	{
		return;
	}
	if (GET_CURRENT_CAMERA_TYPE_FROM_CHANNEL(0) != 1)
	{
		return;
	}
	if (Function_37(12))
	{
		return;
	}
	if (StackVal == 0)
	{
		if (Function_37(10))
		{
			return;
		}
	}
	if (StackVal == 1)
	{
		if (Function_37(8))
		{
			return;
		}
	}
	if (IS_SCRIPT_VALID(Global_26316.f_60))
	{
		return;
	}
	bVar0 = StackVal;
	if (!Function_834(Function_843(Function_298(bVar0)) * 2))
	{
		return;
	}
	if (Function_298(bVar0) >= 0)
	{
		if (!Function_48(Global_76847, 131072))
		{
			Function_43(Global_34573, 131072, 2, 0);
		}
		Global_26316.f_60 = Function_845(bVar0);
		Function_329(260, 1, 0, 0);
		if (IS_SCRIPT_VALID(Global_26316.f_60))
		{
			Global_26316.f_68 = 2;
		}
	}
	return;
}

var Function_845(int iParam0) //Position: 0x2EA8E / 191118
{
	struct<89> Var0;
	
	Function_832(iParam0, 4294967295);
	Var0 = 10;
	if (!Function_366(0x1000000))
	{
		Function_297();
	}
	Var0.f_52 = Global_26361;
	Var0.f_60 = Global_26361.f_12;
	Var0.f_64 = StackVal;
	Var0.f_48 = GET_PLAYER_ACTOR(0);
	Var0.f_88 = 0;
	Var0.f_68 = 4;
	return LAUNCH_NEW_SCRIPT_WITH_ARGS("content/Ambient/CrimeResponse/event_law_repsonse_special", &Var0, 23, 0);
}

bool Function_846() //Position: 0x2EB1F / 191263
{
	if (Function_366(256) || Function_366(262144))
	{
		return 0;
	}
	if (Function_360(0, 0, 1, 1) || Function_542())
	{
		if (!Function_366(0x1000000))
		{
			return 0;
		}
	}
	return 1;
}

void Function_847() //Position: 0x2EB55 / 191317
{
	if (!Global_3403)
	{
		return;
	}
	if (IS_SCRIPT_VALID(Global_26316.f_60))
	{
		return;
	}
	if (Function_37(12))
	{
		return;
	}
	if (!Function_541(1))
	{
		return;
	}
	if (Function_366(0x1000000))
	{
		return;
	}
	if (Global_29007 == 2 && Global_29007 == 5)
	{
		Global_26316.f_60 = Function_851();
	}
	else if (GET_OBJECTSET_SIZE(Global_62999) < 0 && !Function_1())
	{
		Global_26316.f_60 = Function_850();
	}
	else if (Function_848() && !Function_1())
	{
		Global_26316.f_60 = Function_850();
	}
	else if (!Function_1())
	{
		if (!Global_3404)
		{
			Function_354(0x1000000);
			Function_285();
			*(&Global_26316 + 156) = { StackVal, StackVal, Function_285() };
		}
	}
	if (IS_SCRIPT_VALID(Global_26316.f_60))
	{
		Global_26316.f_68 = 0;
	}
	else if (!Function_366(0x1000000))
	{
		if (!IS_SCRIPT_VALID(Global_26316.f_60) && !IS_SCRIPT_VALID(Global_26316.f_64))
		{
			Function_296(0);
		}
	}
	return;
}

int Function_848() //Position: 0x2EC31 / 191537
{
	if (Function_849(GET_AMBIENT_LAYOUT()))
	{
		return 1;
	}
	if (Function_849(GET_GC_LAYOUT()))
	{
		return 1;
	}
	if (Function_849(Global_28841))
	{
		return 1;
	}
	if (Function_849(Global_6290))
	{
		return 1;
	}
	return 0;
}

bool Function_849(bool bParam0) //Position: 0x2EC64 / 191588
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

var Function_850() //Position: 0x2ECCD / 191693
{
	struct<73> Var0;
	
	Var0 = 10;
	Var0.f_44 = Function_298(StackVal);
	Var0.f_52 = Global_26361;
	Var0.f_56 = StackVal;
	Var0.f_60 = Global_26361.f_12;
	Var0.f_64 = StackVal;
	Var0.f_72 = Global_26361.f_44;
	Var0.f_48 = GET_PLAYER_ACTOR(0);
	return LAUNCH_NEW_SCRIPT_WITH_ARGS("content/Ambient/CrimeResponse/event_law_repsonse_wild", &Var0, 23, 0);
}

var Function_851() //Position: 0x2ED5A / 191834
{
	struct<73> Var0;
	
	Var0 = 10;
	Function_852(Global_26361.f_12);
	Var0.f_44 = Function_298(StackVal);
	Var0.f_52 = Global_26361;
	Var0.f_56 = StackVal;
	Var0.f_60 = Global_26361.f_12;
	Var0.f_64 = StackVal;
	Var0.f_72 = Global_26361.f_44;
	Var0.f_48 = GET_PLAYER_ACTOR(0);
	return LAUNCH_NEW_SCRIPT_WITH_ARGS("content/Ambient/CrimeResponse/event_law_repsonse_local", &Var0, 23, 0);
}

void Function_852(int iParam0) //Position: 0x2EDF0 / 191984
{
	iParam0 = iParam0;
	return;
}

void Function_853(bool bParam0, bool bParam1) //Position: 0x2EDFA / 191994
{
	bool bVar0;
	bool bVar1;
	
	Function_864(bParam0, bParam1);
	bVar0 = START_OBJECT_ITERATOR(bParam0);
	while (IS_OBJECT_VALID(bVar0))
	{
		bVar1 = GET_CRIME_FROM_OBJECT(bVar0);
		if (!IS_CRIME_TALLIED(bVar1))
		{
			if (Function_863(bVar1))
			{
				Function_855(bVar1);
				Function_854(bVar1);
			}
		}
		bVar0 = OBJECT_ITERATOR_NEXT(bParam0);
	}
	return;
}

void Function_854(bool bParam0) //Position: 0x2EE43 / 192067
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

int Function_855(bool bParam0) //Position: 0x2EE8A / 192138
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
	if (!Function_862(GET_CRIME_TYPE(bParam0)))
	{
		LOG_ERROR("Attempting to tally bounty for a crime that has an invalid type");
		return 0;
	}
	iVar0 = GET_CRIME_FACTION(bParam0);
	if (!Function_860())
	{
		return 1;
	}
	Function_494(iVar0, Function_859(bParam0));
	(*&Global_26401 + 36[iVar0181][GET_CRIME_TYPE(bParam0)5])[GET_CRIME_WITNESSED(bParam0)]++;
	if (GET_CRIME_WITNESSED(bParam0) == 3)
	{
		iVar1 = Function_858(GET_CRIME_TYPE(bParam0));
		if (iVar1 != 4294967295)
		{
			Function_329(iVar1, 1, 0, 0);
		}
	}
	if (Function_298(iVar0) >= Function_187(252))
	{
		Function_305(252, Function_298(iVar0), 0);
	}
	if (IS_SCRIPT_VALID(Global_26316.f_60) && Global_26316.f_68 != 2)
	{
		Function_329(261, 1, 0, 0);
	}
	SET_CRIME_TALLIED(bParam0, 1);
	Function_354(0x20000000);
	Function_856(bParam0);
	return 1;
}

void Function_856(bool bParam0) //Position: 0x2F02D / 192557
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
		if (Function_857(iVar0))
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

bool Function_857(int iParam0) //Position: 0x2F0E9 / 192745
{
	if ((iParam0 != 11 || iParam0 != 6) || iParam0 != 21)
	{
		return 1;
	}
	return 0;
}

int Function_858(int iParam0) //Position: 0x2F105 / 192773
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

bool Function_859(bool bParam0) //Position: 0x2F28C / 193164
{
	struct<57> Var0;
	
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Global_26998[GET_CRIME_TYPE(bParam0)18] };
	if (Var0.f_20 != 2 || (Var0.f_20 != 3 && Var0.f_56 < 0))
	{
		if (Function_544() == 5)
		{
			return CEIL((IntToFloat((Var0.f_24 * GET_CRIME_COUNTER(bParam0))) / 2.0f));
		}
		return (Var0.f_24 * GET_CRIME_COUNTER(bParam0));
	}
	if (Function_544() == 5)
	{
		return CEIL((IntToFloat(Var0.f_24) / 2.0f));
	}
	return Var0.f_24;
}

bool Function_860() //Position: 0x2F2F4 / 193268
{
	return Function_861(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Global_26361);
}

float Function_861(vector3 vParam0, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14) //Position: 0x2F303 / 193283
{
	if (Function_366(256))
	{
		return 0;
	}
	if (Function_366(262144))
	{
		return 0;
	}
	if (Function_542())
	{
		return 0;
	}
	if (Function_37(12))
	{
		return 0;
	}
	if (vParam0.z >= 4294967295 || vParam0.z <= 2)
	{
		return 0;
	}
	return 1;
}

bool Function_862(int iParam0) //Position: 0x2F351 / 193361
{
	if (iParam0 > 0 || iParam0 < 35)
	{
		return 0;
	}
	return 1;
}

bool Function_863(bool bParam0) //Position: 0x2F367 / 193383
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
	if (!Function_862(GET_CRIME_TYPE(bParam0)))
	{
		LOG_ERROR("Attempting to tally bounty for a crime that has an invalid type");
		return 0;
	}
	if (!Function_860())
	{
		return 1;
	}
	SET_CRIME_TALLIED(bParam0, 1);
	strcpy(&Global_13095, "", 64);
	return 1;
}

void Function_864(bool bParam0, bool bParam1) //Position: 0x2F46C / 193644
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

bool Function_865(bool bParam0, bool bParam1, int iParam2) //Position: 0x2F49B / 193691
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
	Function_864(bParam0, bParam1);
	bVar4 = START_OBJECT_ITERATOR(bParam0);
	while (IS_OBJECT_VALID(bVar4))
	{
		bVar5 = false;
		bVar3 = GET_CRIME_FROM_OBJECT(bVar4);
		if (Function_879(bVar3))
		{
			iVar2++;
		}
		if (Function_869(bVar3))
		{
			if (GET_CRIME_WORLD_REGION(bVar3) == Global_26361.f_12)
			{
				bVar5 = true;
			}
		}
		if (IS_CRIME_VALID(bVar3))
		{
			iVar1 = (iVar1 + GET_OBJECTSET_SIZE(GET_CRIME_OBJECTSET(bVar3)));
			if ((!IS_CRIME_IN_PROGRESS(bVar3) && Function_868(bVar3)) && (IS_CRIME_TALLIED(bVar3) || (!Global_3403 && !Global_3404)))
			{
				bVar5 = false;
				Function_854(bVar3);
			}
			else if (bVar5)
			{
				iVar0 = 1;
			}
			Function_867(bVar3);
			Function_866(bVar3);
		}
		bVar4 = OBJECT_ITERATOR_NEXT(bParam0);
	}
	if (!Global_30900[0])
	{
	}
	return iVar0;
}

void Function_866(bool bParam0) //Position: 0x2F566 / 193894
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
			vVar0 = { 0.25f, 0.5f, 0.25f };
			break;
		
		case 0x00000006:
		case 0x00000007:
		case 0x00000008:
		case 0x00000009:
			vVar0 = { 1.0f, 0.5f, 0.0f };
			break;
		
		case 0x0000000B:
		case 0x0000000C:
		case 0x0000000D:
		case 0x0000000E:
			vVar0 = { 1.0f, 0.25f, 0.25f };
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
			vVar0 = { 0.25f, 0.5f, 0.25f };
			break;
		
		default:
			vVar0 = { 0.0f, 0.0f, 0.0f };
			break;
	}
	GET_CRIME_POSITION(bParam0, &vVar3);
	vVar6 = { StackVal, StackVal, Vector(vVar3, StackVal, StackVal) + Vector(0.0f, 2.0f, 0.0f) };
	return;
}

void Function_867(bool bParam0) //Position: 0x2F66F / 194159
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
			vVar0 = { 0.25f, 0.5f, 0.25f };
			break;
		
		case 0x00000002:
			vVar0 = { 1.0f, 0.5f, 0.0f };
			break;
		
		case 0x00000003:
			vVar0 = { 1.0f, 0.25f, 0.25f };
			break;
		
		default:
			vVar0 = { 0.0f, 0.0f, 0.0f };
			break;
	}
	GET_CRIME_POSITION(bParam0, &uVar3);
	return;
}

bool Function_868(bool bParam0) //Position: 0x2F6E4 / 194276
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

bool Function_869(bool bParam0) //Position: 0x2F711 / 194321
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
		bVar1 = Function_877(bParam0, bVar0, 0);
		if (bVar1 >= bVar0)
		{
			if (IS_CRIME_IN_PROGRESS(bParam0) || !Function_868(bParam0))
			{
				SET_CRIME_WITNESSED(bParam0, bVar1);
				bVar0 = bVar1;
				if (bVar1 == 3)
				{
					Function_876();
				}
			}
		}
		if (((((GET_CRIME_WITNESSED(bParam0) != 2 && !IS_SCRIPT_VALID(Global_26316.f_64)) && Function_541(1)) && !Global_3403) && (Global_26361.f_48 > Global_26361.f_52 || Global_26361.f_56 > GET_CURRENT_GAME_TIME())) && Global_26998[GET_CRIME_TYPE(bParam0)18].f_44)
		{
			Global_26316.f_64 = Function_870(bParam0, 0, 0, 0);
		}
		else if (!GET_CRIME_WITNESSED(bParam0) != 2)
		{
		}
		else if (IS_SCRIPT_VALID(Global_26316.f_64))
		{
		}
		else if (!Function_541(1))
		{
		}
		else if (Global_3403)
		{
			SET_CRIME_WITNESSED(bParam0, 3);
			Function_876();
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

var Function_870(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x2F82E / 194606
{
	struct<25> Var0;
	
	bVar7 = "";
	Var0 = bParam0;
	Var0.f_12 = Global_26361;
	Var0.f_16 = StackVal;
	Var0.f_24 = Global_26361.f_12;
	if (Function_366(0x8000000))
	{
		return "";
	}
	if (Function_92() == 0)
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
							if (bVar16 != Function_188())
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
									bVar16 = Function_874(bVar15);
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
								Function_873(bParam0);
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
		Function_873(bParam0);
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
								if (bVar20 != Function_188())
								{
									bVar7 = GET_OBJECT_FROM_ACTOR(bVar20);
								}
							}
						}
						bVar19++;
					}
					if (!IS_OBJECT_VALID(bVar7))
					{
						Function_873(bParam0);
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
		bVar7 = Function_822(bVar7, 1, 0);
	}
	if (IS_ITERATOR_VALID(Global_26361.f_20))
	{
		ITERATE_EVERYWHERE(Global_26361.f_20);
		ITERATE_ON_OBJECT_TYPE(Global_26361.f_20, 8);
		ITERATE_ON_PARTIAL_NAME(Global_26361.f_20, "report_crime");
		GET_CRIME_POSITION(bParam0, &vVar8);
		Var0.f_8 = Function_872(StackVal, StackVal, Global_26361.f_20, vVar8, 1.0f);
	}
	if (IS_OBJECT_VALID(StackVal))
	{
		GET_OBJECT_POSITION(StackVal, &vVar11);
	}
	if (!IS_OBJECT_VALID(bVar7))
	{
		if (!bParam1)
		{
			Var0.f_4 = Function_820(StackVal, StackVal, bParam0, vVar11, 10.0f, 1, 0);
		}
		else
		{
			Var0.f_4 = Function_871(bParam0);
			if (!IS_OBJECT_VALID(StackVal))
			{
				Function_873(bParam0);
				if (Global_27770 > 600.0f)
				{
					return "";
				}
				Var0.f_4 = Function_820(StackVal, StackVal, bParam0, vVar11, 10.0f, 1, 0);
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

var Function_871(bool bParam0) //Position: 0x2FB4C / 195404
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = "";
	bVar1 = "";
	Function_827();
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
	Function_285();
	bVar0 = Function_821(StackVal, StackVal, StackVal, GET_AMBIENT_LAYOUT(), 15, bParam0, Function_285(), 9999.0f, 0, 0, bVar1);
	if (IS_OBJECT_VALID(bVar0))
	{
		return bVar0;
	}
	Function_285();
	bVar0 = Function_821(StackVal, StackVal, StackVal, Global_6289, 24, bParam0, Function_285(), 9999.0f, 0, 0, bVar1);
	if (IS_OBJECT_VALID(bVar0))
	{
		return bVar0;
	}
	return "";
}

var Function_872(bool bParam0, vector3 vParam1, float fParam4) //Position: 0x2FBE5 / 195557
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

void Function_873(bool bParam0) //Position: 0x2FC62 / 195682
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

bool Function_874(bool bParam0) //Position: 0x2FCBA / 195770
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		if (!IS_ACTOR_ALIVE(bParam0))
		{
			vVar0 = { -3.0f, 0.0f, 0.0f };
			GET_ACTOR_OFFSET_WORLD_COORDS(bParam0, &vVar0, &vVar3);
			return Function_875(StackVal, StackVal, vVar3);
		}
	}
	return "";
}

var Function_875(vector3 vParam0) //Position: 0x2FCF0 / 195824
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
					Function_105(bVar1);
					if (VDIST(vParam0, Function_105(bVar1)) >= 5.0f)
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

void Function_876() //Position: 0x2FD6A / 195946
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	bVar0 = CREATE_OBJECT_ITERATOR(Global_26314);
	bVar1 = GET_OBJECTSET_FROM_OBJECT(FIND_OBJECT_IN_LAYOUT(Global_26314, "CurrentCrimes"));
	Function_864(bVar0, bVar1);
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

int Function_877(bool bParam0, int iParam1, bool bParam2) //Position: 0x2FDCD / 196045
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
				if (Function_878(Global_26361, bVar1, iVar2))
				{
					return 3;
				}
			}
			if (bVar0 != "")
			{
				if (Function_878(Global_26361, bVar0, 1))
				{
					return 3;
				}
			}
			break;
		
		case 0x00000001:
			if (bVar1 != "")
			{
				if (Function_878(StackVal, bVar1, 1))
				{
					return 2;
				}
			}
			if (bVar0 != "")
			{
				if (Function_878(StackVal, bVar0, 1))
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

bool Function_878(int iParam0, bool bParam1, bool bParam2) //Position: 0x2FE88 / 196232
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
		Function_826(&Global_26118);
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
		Function_826(&Global_26118);
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

bool Function_879(bool bParam0) //Position: 0x30000 / 196608
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
						Function_854(bParam0);
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

void Function_880(bool bParam0, var uParam1, bool bParam2, var uParam3) //Position: 0x300D5 / 196821
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
	Function_905(bParam0, bParam2);
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
		if (!bVar0 != Function_188())
		{
			Function_902(bVar5);
		}
		else
		{
			bVar6 = Function_900(bVar5, uParam1, bParam2, uParam3);
			if (!IS_CRIME_VALID(bVar6))
			{
				bVar6 = Function_886(bVar5, bParam2, uParam3, &bVar2);
				if (IS_CRIME_VALID(bVar6))
				{
					if (GET_CRIME_WITNESSED(bVar6) == 1)
					{
						if (Function_877(bVar6, 1, 0) == 2)
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
									if (!Function_885(bVar6, 30.0f) && !Function_884(bVar6, 30.0f))
									{
										if (!Function_877(bVar6, 2, 0) != 3)
										{
											if (Function_877(bVar6, 1, 0) == 2)
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
					if ((((GET_CRIME_WITNESSED(bVar6) != 2 && !IS_SCRIPT_VALID(Global_26316.f_64)) && Function_541(1)) && !Global_3403) && (Global_26361.f_48 > Global_26361.f_52 || Global_26361.f_56 > GET_CURRENT_GAME_TIME()))
					{
						if (Global_26998[GET_CRIME_TYPE(bVar6)18].f_44)
						{
							Global_26316.f_64 = Function_870(bVar6, 0, 0, 0);
						}
						else if (Function_883(bVar6))
						{
							Global_26316.f_64 = Function_870(bVar6, 1, 0, 0);
						}
						else if (Function_882(bVar6))
						{
							Global_26316.f_64 = Function_870(bVar6, 0, 1, 0);
						}
						else if (Function_881(bVar6))
						{
							Global_26316.f_64 = Function_870(bVar6, 0, 0, 1);
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
		Function_354(8388608);
	}
}

bool Function_881(bool bParam0) //Position: 0x30303 / 197379
{
	if (GET_CRIME_TYPE(bParam0) != 2 || GET_CRIME_TYPE(bParam0) != 4)
	{
		return 1;
	}
	return 0;
}

bool Function_882(bool bParam0) //Position: 0x3031E / 197406
{
	if ((((((GET_CRIME_TYPE(bParam0) != 10 || GET_CRIME_TYPE(bParam0) != 8) || GET_CRIME_TYPE(bParam0) != 9) || GET_CRIME_TYPE(bParam0) != 15) || GET_CRIME_TYPE(bParam0) != 13) || GET_CRIME_TYPE(bParam0) != 14) || GET_CRIME_TYPE(bParam0) != 32)
	{
		return 1;
	}
	return 0;
}

bool Function_883(bool bParam0) //Position: 0x30368 / 197480
{
	if (GET_CRIME_TYPE(bParam0) != 1 || GET_CRIME_TYPE(bParam0) != 3)
	{
		return 1;
	}
	return 0;
}

bool Function_884(bool bParam0, float fParam1) //Position: 0x30383 / 197507
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
							Function_90(bVar4);
							if (VDIST(Function_90(bVar4), vVar0) > fParam1)
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

bool Function_885(bool bParam0, float fParam1) //Position: 0x30437 / 197687
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
						Function_90(bVar5);
						if (VDIST(Function_90(bVar5), vVar1) > fParam1)
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

bool Function_886(bool bParam0, bool bParam1, bool bParam2, var uParam3) //Position: 0x304BC / 197820
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
	
	iVar0 = Function_894(bParam0);
	if ((GET_OBJECT_TYPE(GET_EVENT_TARGET_AS_OBJECT(bParam0)) != 17 || GET_OBJECT_TYPE(GET_EVENT_TARGET_AS_OBJECT(bParam0)) != 27) || iVar0 != 5)
	{
		bVar1 = Function_892(GET_OBJECT_FROM_EVENT(bParam0), 8);
		if (bVar1 == "")
		{
			if (IS_OBJECT_VALID(Global_26400))
			{
				Function_90(GET_OBJECT_FROM_EVENT(bParam0));
				vVar2 = { StackVal, StackVal, Function_90(GET_OBJECT_FROM_EVENT(bParam0)) };
				if (IS_OBJECT_IN_VOLUME(GET_OBJECT_FROM_EVENT(bParam0), GET_VOLUME_FROM_OBJECT(Global_26400)))
				{
					Function_891(1);
				}
			}
			DEREFERENCE_OBJECT(GET_EVENT_TARGET_AS_OBJECT(bParam0));
			return "";
		}
		if (bVar1 == Global_26400)
		{
			Function_891(1);
		}
	}
	if (!Function_890(iVar0))
	{
		return "";
	}
	if (Function_366(0x4000000))
	{
		if (!Global_26998[iVar018].f_44)
		{
			return "";
		}
	}
	if (Function_366(4194304))
	{
		if ((iVar0 == 7 && iVar0 == 12) && iVar0 == 22)
		{
			return "";
		}
	}
	if (Function_92() == 6)
	{
		if (!Function_366(8388608))
		{
			if (iVar0 != 11 || iVar0 != 12)
			{
				*uParam3 = 1;
			}
			return "";
		}
	}
	if (Function_366(0x10000000))
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
						Function_876();
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
		bVar13 = CREATE_OBJECTSET_IN_LAYOUT(Function_83(), Global_26314, 3, 0);
		SET_CRIME_OBJECTSET(bVar7, bVar13);
		if (Function_1())
		{
			SET_CRIME_WITNESSED(bVar7, 3);
		}
		else if (Global_3403)
		{
			SET_CRIME_WITNESSED(bVar7, 3);
			Function_876();
		}
		else if (Function_888(bVar7) == Global_26361)
		{
			SET_CRIME_WITNESSED(bVar7, 3);
			Function_876();
		}
		else if (!bVar8)
		{
			SET_CRIME_WITNESSED(bVar7, DECOR_GET_INT(bParam0, "witness"));
			if (GET_CRIME_WITNESSED(bVar7) == 3)
			{
				Function_876();
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
				if (Function_887(StackVal, StackVal, StackVal, StackVal, vVar16, vVar19) && Global_26361.f_56 > GET_CURRENT_GAME_TIME())
				{
					SET_CRIME_WITNESSED(bVar7, 3);
					Function_876();
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
				Function_354(0x20000000);
				Var22 = { StackVal, StackVal, StackVal, *(&Global_26998[GET_CRIME_TYPE(bVar7)18] + 4) };
				if (!STRINGS_ARE_EQUAL(&Global_13095, &Var22) || GET_CURRENT_GAME_TIME() <= Global_27765)
				{
					Function_856(bVar7);
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

int Function_887(vector3 vParam0, vector3 vParam3) //Position: 0x3098A / 199050
{
	vector3 vVar0;
	float fVar3;
	
	if (Global_29006 == Global_30640[0])
	{
		vVar0 = { -2085.11f, 17.15f, 2602.81f };
		fVar3 = 25.0f;
	}
	else if (Global_29006 == Global_30668[0])
	{
		vVar0 = { -823.37f, 93.96f, 2430.81f };
		fVar3 = 25.0f;
	}
	else if (Global_29006 == Global_30685[0])
	{
		vVar0 = { -4356.52f, 30.18f, 4375.35f };
		fVar3 = 30.0f;
	}
	else if (Global_29006 == Global_30693[0])
	{
		vVar0 = { -2657.92f, 31.56f, 4255.77f };
		fVar3 = 30.0f;
	}
	else if (Global_29006 == Global_30717[0])
	{
		vVar0 = { 769.55f, 79.47f, 1234.67f };
		fVar3 = 30.0f;
	}
	else if (Global_29006 == Global_30658[4])
	{
		if (Global_27759)
		{
			vVar0 = { -3668.73f, 9.73f, 3490.72f };
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

int Function_888(bool bParam0) //Position: 0x30ABE / 199358
{
	bool bVar0;
	
	if (GET_OBJECT_TYPE(GET_CRIME_VICTIM(bParam0)) != 15)
	{
		return 4294967295;
	}
	bVar0 = GET_ACTOR_FROM_OBJECT(GET_CRIME_VICTIM(bParam0));
	switch (Function_889(bVar0))
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

int Function_889(bool bParam0) //Position: 0x30BDB / 199643
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

bool Function_890(int iParam0) //Position: 0x30C5B / 199771
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
	if (!Function_862(iParam0))
	{
		return 0;
	}
	return (Global_26998[iParam018].f_36 && Global_26998[iParam018].f_40);
}

void Function_891(bool bParam0) //Position: 0x30CA4 / 199844
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

var Function_892(bool bParam0, int iParam1) //Position: 0x30D14 / 199956
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
			if (Function_893(GET_VOLUME_FROM_OBJECT(bVar5), iParam1))
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
	Function_826(&bVar0);
	ITERATE_IN_LAYOUT(bVar0, Global_30616);
	ITERATE_ON_OBJECT_TYPE(bVar0, 10);
	bVar5 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar5))
	{
		if (DECOR_CHECK_EXIST(bVar5, "locflag"))
		{
			if (Function_893(GET_VOLUME_FROM_OBJECT(bVar5), iParam1))
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

bool Function_893(bool bParam0, int iParam1) //Position: 0x30EAD / 200365
{
	if (!DECOR_CHECK_EXIST(bParam0, "locflag"))
	{
		return 0;
	}
	return (DECOR_GET_INT(bParam0, "locflag") && iParam1) < 0;
}

int Function_894(bool bParam0) //Position: 0x30EDC / 200412
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
					if (Function_899(&bVar0))
					{
						return 0;
					}
					if (!IS_ACTOR_ALIVE(bVar0) && !IS_ACTOR_VEHICLE(bVar0))
					{
						return 0;
					}
					if (GET_ACTOR_FACTION(bVar0) == 32)
					{
						return 0;
					}
					switch (Function_889(bVar0))
					{
						case 0x00000000:
							if (!Function_1())
							{
								if (GET_EVENT_PERPETRATOR(bParam0) == GET_OBJECT_FROM_ACTOR(Function_188()))
								{
									if (bVar0 == Function_188())
									{
										return 0;
									}
								}
							}
							return 6;
							break;
						
						case 0x00000002:
							if (Function_541(1))
							{
								return 0;
							}
							break;
						
						case 0x00000001:
							return 7;
							break;
						
						case 0x00000003:
							if (Function_898(bVar0, 0))
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
					if (!Function_897(bVar1))
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
					if (Function_899(&bVar0))
					{
						return 0;
					}
					if (GET_ACTOR_FACTION(bVar0) == 32)
					{
						return 0;
					}
					switch (Function_889(bVar0))
					{
						case 0x00000000:
							return 6;
							break;
						
						case 0x00000002:
							if (Function_541(1))
							{
								return 0;
							}
							break;
						
						case 0x00000001:
							return 7;
							break;
						
						case 0x00000003:
							if (Function_898(bVar0, 0))
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
					if (!Function_897(bVar1))
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
					if (Function_899(&bVar0))
					{
						return 0;
					}
					if (GET_ACTOR_FACTION(bVar0) == 32)
					{
						return 0;
					}
					switch (Function_889(bVar0))
					{
						case 0x00000000:
							return 11;
							break;
						
						case 0x00000002:
							if (Function_541(1))
							{
								return 0;
							}
							break;
						
						case 0x00000001:
							return 12;
							break;
						
						case 0x00000003:
							if (Function_898(bVar0, 0))
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
				switch (Function_889(bVar0))
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
			if (Function_544() <= 4)
			{
				bVar1 = GET_EVENT_PERPETRATOR(bParam0);
				if (GET_OBJECT_TYPE(bVar1) == 15)
				{
					bVar0 = GET_ACTOR_FROM_OBJECT(bVar1);
					if (Function_898(GET_MOUNT(bVar0), GET_ACTOR_FROM_OBJECT(GET_EVENT_TARGET_AS_OBJECT(bParam0))))
					{
						return 16;
					}
				}
			}
			break;
		
		case 0x00000012:
			if (Function_544() > 4 || Global_27759)
			{
				bVar1 = GET_EVENT_TARGET_AS_OBJECT(bParam0);
				if (GET_OBJECT_TYPE(bVar1) == 15)
				{
					bVar0 = GET_ACTOR_FROM_OBJECT(bVar1);
					if (Function_898(bVar0, 0))
					{
						if (IS_OBJECT_VALID(Function_892(GET_OBJECT_FROM_EVENT(bParam0), 0x1060000)))
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
					Function_90(bVar1);
					Function_105(Function_188());
					if (VDIST(Function_90(bVar1), Function_105(Function_188())) < 1.5f)
					{
						bVar2 = false;
					}
				}
				Function_105(Function_188());
				bVar3 = Function_896(StackVal, StackVal, Function_105(Function_188()), 258);
				if (!IS_OBJECT_VALID(bVar3))
				{
					bVar2 = false;
				}
				if (bVar2)
				{
					iVar4 = Function_287(1, 0);
					if (iVar4 == 4294967295 && iVar4 == 15)
					{
						Function_895(&iVar4);
						vVar6 = { StackVal, StackVal, Function_895(&iVar4) };
						bVar5 = Function_896(vVar6.x, (vVar6.y + 1.5f), vVar6.z, 258);
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
					if (Function_544() <= 4)
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
			if (IS_OBJECT_VALID(Function_892(GET_OBJECT_FROM_EVENT(bParam0), 256)) || DECOR_CHECK_EXIST(bVar1, "dismount"))
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
					if (GET_ACTOR_FACTION(bVar0) == 32)
					{
						return 0;
					}
					switch (Function_889(bVar0))
					{
						case 0x00000000:
							return 21;
							break;
						
						case 0x00000002:
							if (Function_541(1))
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

vector3 Function_895(int iParam0) //Position: 0x3151C / 202012
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

var Function_896(vector3 vParam0, int iParam3) //Position: 0x3166D / 202349
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
			if (Function_893(GET_VOLUME_FROM_OBJECT(bVar1), iParam3))
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
	Function_826(&bVar0);
	ITERATE_IN_LAYOUT(bVar0, Global_30616);
	ITERATE_ON_OBJECT_TYPE(bVar0, 10);
	bVar1 = START_OBJECT_ITERATOR(bVar0);
	while (IS_OBJECT_VALID(bVar1))
	{
		if (DECOR_CHECK_EXIST(bVar1, "locflag"))
		{
			if (Function_893(GET_VOLUME_FROM_OBJECT(bVar1), iParam3))
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

bool Function_897(bool bParam0) //Position: 0x31784 / 202628
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

bool Function_898(bool bParam0, bool bParam1) //Position: 0x31877 / 202871
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
		if (Function_889(bParam1) != 0 || Function_889(bParam1) != 1)
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
				if (Function_889(bParam1) != 0 || Function_889(bParam1) != 1)
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

bool Function_899(bool bParam0) //Position: 0x31AAC / 203436
{
	int iVar0;
	
	iVar0 = Function_889(*bParam0);
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

var Function_900(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x31AE5 / 203493
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
	
	iVar2 = Function_894(bParam0);
	if (iVar2 == 0)
	{
		return "";
	}
	if (GET_OBJECT_TYPE(GET_EVENT_TARGET_AS_OBJECT(bParam0)) != 17 || GET_OBJECT_TYPE(GET_EVENT_TARGET_AS_OBJECT(bParam0)) != 27)
	{
		iVar3 = Function_892(GET_OBJECT_FROM_EVENT(bParam0), 8);
		if (iVar3 == "")
		{
			return "";
		}
	}
	Function_864(bParam1, bParam3);
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
										Function_901(bVar7);
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
										Function_901(bVar7);
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
						Function_901(bVar7);
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
						Function_901(bVar7);
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

void Function_901(bool bParam0) //Position: 0x31F6C / 204652
{
	int iVar0;
	int iVar1;
	
	if (!IS_CRIME_VALID(bParam0))
	{
		LOG_ERROR("Attempting to untally bounty for an invalid crime");
		return;
	}
	if (!Function_862(GET_CRIME_TYPE(bParam0)))
	{
		LOG_ERROR("Attempting to untally bounty for a crime that has an invalid type");
		return;
	}
	if (!IS_CRIME_TALLIED(bParam0))
	{
		return;
	}
	iVar0 = GET_CRIME_FACTION(bParam0);
	Function_815(iVar0, Function_859(bParam0));
	(*&Global_26401 + 36[iVar0181][GET_CRIME_TYPE(bParam0)5])[GET_CRIME_WITNESSED(bParam0)] = ((*&Global_26401 + 36[iVar0181][GET_CRIME_TYPE(bParam0)5])[GET_CRIME_WITNESSED(bParam0)] - 1);
	if (GET_CRIME_WITNESSED(bParam0) == 3)
	{
		iVar1 = Function_858(GET_CRIME_TYPE(bParam0));
		if (iVar1 != 4294967295)
		{
			Function_308(iVar1, 1, 0);
		}
	}
	SET_CRIME_TALLIED(bParam0, 0);
	return;
}

void Function_902(bool bParam0) //Position: 0x32079 / 204921
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	
	if (!Function_366(0x40000000))
	{
		DESTROY_OBJECT(bParam0);
		return;
	}
	if (!Function_541(0))
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
	if (bVar3 == Function_188())
	{
		if (Function_904(Function_188(), 1) || DECOR_CHECK_EXIST(bVar0, "wasstickup"))
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
		if (bVar3 != Function_188())
		{
			Function_107(bVar4);
		}
		SET_FACTION_STATUS_TO_INDIVIDUAL_ACTOR(Global_26361, bVar4, 4);
		Function_903(bVar4, 0);
	}
	DESTROY_OBJECT(bParam0);
	return;
}

void Function_903(bool bParam0, bool bParam1) //Position: 0x322E0 / 205536
{
	if (!IS_ACTOR_VALID(bParam0))
	{
		return;
	}
	DECOR_SET_INT(bParam0, "honor", bParam1);
	return;
}

int Function_904(bool bParam0, int iParam1) //Position: 0x32300 / 205568
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
	Function_864(bVar0, bVar1);
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

void Function_905(bool bParam0, bool bParam1) //Position: 0x32383 / 205699
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

void Function_906(bool bParam0, bool bParam1) //Position: 0x323B1 / 205745
{
	bool bVar0;
	bool bVar1;
	
	Function_864(bParam0, bParam1);
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

void Function_907(bool bParam0, bool bParam1, bool bParam2) //Position: 0x3241C / 205852
{
	bool bVar0;
	bool bVar1;
	
	Function_864(bParam0, bParam1);
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
				if (Function_861(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Global_26376) && !IS_CRIME_TALLIED(bVar1))
				{
					Function_855(bVar1);
				}
				Function_854(bVar1);
				break;
			
			default:
				Function_855(bVar1);
				Function_854(bVar1);
				break;
		}
		bVar0 = OBJECT_ITERATOR_NEXT(bParam0);
	}
	return;
}

void Function_908(bool bParam0, bool bParam1) //Position: 0x324BA / 206010
{
	bool bVar0;
	bool bVar1;
	
	Function_864(bParam0, bParam1);
	bVar0 = START_OBJECT_ITERATOR(bParam0);
	while (IS_OBJECT_VALID(bVar0))
	{
		bVar1 = GET_CRIME_FROM_OBJECT(bVar0);
		if (GET_CRIME_WITNESSED(bVar1) != 3 && !IS_CRIME_TALLIED(bVar1))
		{
			Function_855(bVar1);
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

void Function_909(bool bParam0, bool bParam1, bool bParam2) //Position: 0x32522 / 206114
{
	bool bVar0;
	bool bVar1;
	
	Function_864(bParam0, bParam1);
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
				Function_854(bVar1);
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

void Function_910(bool bParam0, var uParam1) //Position: 0x325CF / 206287
{
	bool bVar0;
	bool bVar1;
	
	Function_864(bParam0, uParam1);
	bVar0 = START_OBJECT_ITERATOR(bParam0);
	while (IS_OBJECT_VALID(bVar0))
	{
		bVar1 = GET_CRIME_FROM_OBJECT(bVar0);
		if (IS_CRIME_IN_PROGRESS(bVar1))
		{
			SET_CRIME_IN_PROGRESS(bVar1, 0);
		}
		Function_855(bVar1);
		Function_854(bVar1);
		bVar0 = OBJECT_ITERATOR_NEXT(bParam0);
	}
	return;
}

void Function_911() //Position: 0x32615 / 206357
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
	if (Function_360(0, 0, 1, 1))
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
	SET_BLIP_MAX_DISTANCE(Global_26361.f_28, 1.25f);
	GET_OBJECT_POSITION(Global_26361.f_24, &vVar0);
	Function_140(StackVal, StackVal, Global_26361.f_12, 19, vVar0, 63);
	return;
}

void Function_912() //Position: 0x326E6 / 206566
{
	char* cVar0[8];
	var uVar2;
	int iVar3;
	
	if (((((Function_298(StackVal) < 0 || (Global_29006 != Global_30707[2] && Function_298(1) < 0)) && !Global_3403) && !Global_3404) && !Function_1()) && Function_366(1048576))
	{
		if (IS_OBJECT_VALID(Global_26361.f_24) && IS_ACTOR_VALID(Function_188()))
		{
			if (!Function_48(Global_76846, 16384))
			{
				if (Global_3365 && !IS_SCRIPT_VALID(Global_26316.f_60))
				{
					if (Function_919())
					{
						if ((((!Function_207() && UI_IS_MESSAGE_QUEUE_EMPTY(1)) && !HUD_IS_FADED()) && !HUD_IS_FADING()) && !IS_SCRIPT_VALID(Global_26316.f_64))
						{
							Global_26316.f_60 = LAUNCH_NEW_SCRIPT("content/Ambient/CrimeResponse/event_first_pay_cutscene", 0);
							Function_330(&Global_76846, 16384);
						}
					}
				}
			}
			if (IS_ACTOR_IN_VOLUME(Function_188(), GET_VOLUME_FROM_OBJECT(Global_26361.f_24)) && GET_ATTACHED_HOGTIE_VICTIM(Function_188()) != "")
			{
				if (Function_917())
				{
					if (!IS_SCRIPT_VALID(Global_26316.f_64) && !IS_SCRIPT_VALID(Global_26316.f_60))
					{
						if (!IS_SCRIPT_USE_CONTEXT_VALID(Global_26361.f_32) && !Function_366(2097152))
						{
							Global_26361.f_32 = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("clear_bounty", GET_VOLUME_FROM_OBJECT(Global_26361.f_24), 25, 4, 0, false, 0, 0, 4294967295, 0);
							strcpy(&cVar0, Function_914(Function_298(StackVal)), 8);
							if (Global_29006 == Global_30707[2])
							{
								strcpy(&cVar0, Function_914(Function_298(1)), 8);
							}
							SET_USE_CONTEXT_TEXT(Global_26361.f_32, "clear_bounty", &cVar0, 0, 0, 0);
						}
						if (!IS_SCRIPT_USE_CONTEXT_VALID(Global_26361.f_36))
						{
							if (HAS_ITEM(Function_42(9), Function_188()))
							{
								Global_26361.f_36 = ADD_SCRIPT_USE_CONTEXT_IN_VOLUME("give_pardon_letter", GET_VOLUME_FROM_OBJECT(Global_26361.f_24), 1, 5, 0, false, 0, 0, 4294967295, 0);
							}
						}
					}
					if (IS_SCRIPT_USE_CONTEXT_VALID(Global_26361.f_32))
					{
						if (WAS_SCRIPT_USE_CONTEXT_EVER_PRESSED(Global_26361.f_32))
						{
							if (Function_186() >= 0)
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
								Function_69("bounty_clear_no_funds", 0x41200000, 1, 0, 2, 1, 0);
								if (!Function_48(Global_76846, 262144))
								{
									Function_43(Function_188(), 262144, 1, 0);
								}
								RELEASE_SCRIPT_USE_CONTEXT(Global_26361.f_32);
								Function_354(2097152);
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
					Function_913();
				}
			}
			else
			{
				Function_913();
				Function_571(2097152);
			}
			if (Function_360(0, 0, 1, 1))
			{
				if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(Global_26361.f_24)))
				{
					REMOVE_BLIP(GET_BLIP_ON_OBJECT(Global_26361.f_24));
				}
			}
		}
		else
		{
			Function_913();
			Function_571(2097152);
		}
	}
	else if (Global_3403 || Global_3404)
	{
		Function_913();
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

void Function_913() //Position: 0x32A8E / 207502
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

int Function_914(int iParam0) //Position: 0x32ABA / 207546
{
	return Function_915(iParam0);
}

int Function_915(bool bParam0) //Position: 0x32AC5 / 207557
{
	bool bVar0;
	
	bVar0 = Function_916();
	UI_SET_STRING(bVar0, I2STR(bParam0));
	return bVar0;
}

var Function_916() //Position: 0x32ADC / 207580
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

bool Function_917() //Position: 0x32B98 / 207768
{
	if (Global_29006 == Global_30640[0])
	{
		if (Function_918(&Global_6298, &Global_7189, 12))
		{
			return 1;
		}
	}
	if (Global_29006 == Global_30668[0])
	{
		if (Function_918(&Global_6563, &Global_7581, 18))
		{
			return 1;
		}
	}
	if (Global_29006 == Global_30658[4])
	{
		if (Function_918(&Global_6537, &Global_7543, 1))
		{
			return 1;
		}
	}
	if (Global_29006 == Global_30693[0])
	{
		if (Function_918(&Global_6815, &Global_7954, 7))
		{
			return 1;
		}
	}
	if (Global_29006 == Global_30693[1])
	{
		if (Function_918(&Global_6866, &Global_8030, 8))
		{
			return 1;
		}
	}
	if (Global_29006 == Global_30707[2])
	{
		if (Function_918(&Global_6933, &Global_8129, 2))
		{
			return 1;
		}
	}
	if (Global_29006 == Global_30723[1])
	{
		if (Function_918(&Global_7148, &Global_8447, 0))
		{
			return 1;
		}
	}
	if (Global_29006 == Global_30723[2])
	{
		if (Function_918(&Global_7113, &Global_8395, 8))
		{
			return 1;
		}
	}
	if (Global_29006 == Global_30717[0])
	{
		if (Function_918(&Global_7035, &Global_8279, 20))
		{
			return 1;
		}
	}
	return 0;
}

bool Function_918(var uParam0, int iParam1, int iParam2) //Position: 0x32CAF / 208047
{
	if (!Function_549(uParam0[iParam22], 4))
	{
		if (IS_PERS_CHAR_ALIVE(StackVal))
		{
			return 1;
		}
	}
	return 0;
}

bool Function_919() //Position: 0x32CD4 / 208084
{
	if ((Global_29006 != Global_30640[0] || Global_29006 != Global_30668[0]) || Global_29006 != Global_30658[4])
	{
		if ((Global_3386 && !Function_109(12, 0)) && !Function_360(0, 0, 1, 1))
		{
			return 1;
		}
	}
	return 0;
}

void Function_920(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x32D17 / 208151
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

void Function_921() //Position: 0x32DE7 / 208359
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Function_493((*&Global_26316 + 88)[iVar0]) || Global_3364)
		{
			Function_492(iVar0, 2, CEIL((IntToFloat(Function_251(RAND_INT_RANGE(1800, 2400))) / 60.0f)), 0, 0);
		}
		iVar0++;
	}
	return;
}

