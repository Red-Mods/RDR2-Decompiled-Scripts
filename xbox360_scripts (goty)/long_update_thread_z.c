//Decompiled with MagicRDR v1.0
//Function Count : 735
//Statics Count : 713
//Natives Count : 661
//Parameters Count : 0

#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	float fLocal_3 = 0.0f;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = 0;
	bool bLocal_9 = false;
	bool bLocal_10 = false;
	struct<48> Local_11[10];
	bool bLocal_492 = false;
	bool bLocal_493 = false;
	bool bLocal_494 = false;
	bool bLocal_495 = false;
	bool bLocal_496 = false;
	var uLocal_497 = 0;
	var uLocal_498 = 0;
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
	int iLocal_511 = 0;
	int iLocal_512 = 0;
	int iLocal_513 = 0;
	int iLocal_514 = 0;
	int iLocal_515 = 0;
	int iLocal_516 = 0;
	var uLocal_517 = 0;
	bool bLocal_518 = false;
	bool bLocal_519 = false;
	bool bLocal_520 = false;
	bool bLocal_521 = false;
	bool bLocal_522 = false;
	var uLocal_523 = 0;
	var uLocal_524 = 0;
	var uLocal_525 = 0;
	var uLocal_526 = 0;
	var uLocal_527 = 0;
	var uLocal_528 = 0;
	var uLocal_529 = 0;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	var uLocal_538 = 0;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	var uLocal_541 = 0;
	var uLocal_542 = 0;
	var uLocal_543 = 0;
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	vector3 vLocal_548[5] = {{ 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } };
	bool bLocal_564[6] = { false, false, false, false, false, false };
	int iLocal_571 = 0;
	int iLocal_572 = 0;
	bool bLocal_573 = false;
	vector3 vLocal_574 = { 0.0f, 0.0f, 0.0f };
	float fLocal_577 = 0.0f;
	bool bLocal_578 = false;
	bool bLocal_579 = false;
	bool bLocal_580 = false;
	int iLocal_581 = 0;
	vector3 vLocal_582 = { 0.0f, 0.0f, 0.0f };
	vector3 vLocal_585 = { 0.0f, 0.0f, 0.0f };
	bool bLocal_588 = false;
	bool bLocal_589 = false;
	bool bLocal_590 = false;
	bool bLocal_591 = false;
	struct<9> Local_592[13];
	bool bLocal_710 = false;
	bool bLocal_711 = false;
	float fLocal_712 = 0.0f;
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
	iLocal_511 = 1;
	iLocal_512 = 0;
	iLocal_513 = 1;
	iLocal_514 = 1;
	iLocal_515 = 0;
	iLocal_516 = 0;
	iLocal_571 = 0;
	iLocal_572 = 0;
	bLocal_578 = false;
	bLocal_579 = false;
	iLocal_581 = 0;
	Function_731(&(vLocal_592[09]));
	Function_560(&(vLocal_592[19]));
	Function_548(&(vLocal_592[29]));
	Function_516(&(vLocal_592[39]));
	Function_514(&(vLocal_592[49]));
	Function_487(&(vLocal_592[59]));
	Function_464(&(vLocal_592[69]));
	Function_460(&(vLocal_592[79]));
	Function_261(&(vLocal_592[89]));
	Function_187(&(vLocal_592[99]));
	Function_156(&(vLocal_592[109]));
	Function_124(&(vLocal_592[119]));
	Function_5(&(vLocal_592[129]));
	iVar0 = 0;
	while (iVar0 <= vLocal_592)
	{
		if (!IS_EXITFLAG_SET())
		{
			Call_Loc(vLocal_592[iVar09]);
			vLocal_592[iVar09].f_32 = 1;
			if (UNK_0x26884138() <= 50000)
			{
				WAIT(false);
			}
		}
		iVar0++;
	}
	while (!Function_4(256) && !IS_EXITFLAG_SET())
	{
		WAIT(false);
	}
	if (!Global_3364)
	{
		Function_1();
	}
	while (!IS_EXITFLAG_SET())
	{
		bLocal_710 = 1000;
		SET_DEBUG_DRAW((((Global_30900[0] || Global_30900[1]) || Global_30900[2]) || Global_30900[17]));
		if (GET_DEBUG_DRAW_STATE())
		{
			bLocal_710 = false;
		}
		iVar0 = 0;
		while (iVar0 <= vLocal_592)
		{
			if (bLocal_711)
			{
				PRINTSTRING("Time for Exec ");
				PRINTSTRING(&vLocal_592[iVar09] + 12);
				PRINTSTRING(": ");
				fLocal_712 = GET_PROFILE_TIME();
			}
			Call_Loc(vLocal_592[iVar09].y);
			if (StackVal)
			{
				bLocal_710 = false;
			}
			if (bLocal_711)
			{
				PRINTFLOAT((GET_PROFILE_TIME() - fLocal_712));
				PRINTNL();
			}
			if (!IS_EXITFLAG_SET() && !bLocal_710 != 0)
			{
				bLocal_710 = (bLocal_710 - 33);
				WAIT(false);
			}
			iVar0++;
		}
		if (!IS_EXITFLAG_SET())
		{
			WAIT(bLocal_710);
		}
	}
	iVar0 = 0;
	while (iVar0 <= vLocal_592)
	{
		if (vLocal_592[iVar09].f_32)
		{
			Call_Loc(vLocal_592[iVar09].z);
		}
		iVar0++;
	}
	TERMINATE_THIS_SCRIPT();
	return;
}

void Function_1() //Position: 0x21E / 542
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_13172)
	{
		if (StackVal == 2)
		{
			if (Function_2(iVar0) == 1)
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

int Function_2(bool bParam0) //Position: 0x265 / 613
{
	if (!Function_3(bParam0))
	{
		return 0;
	}
	return Global_13172[bParam011] & 15;
}

bool Function_3(int iParam0) //Position: 0x280 / 640
{
	if (iParam0 >= 0 || iParam0 <= 275)
	{
		return 0;
	}
	return 1;
}

bool Function_4(int iParam0) //Position: 0x297 / 663
{
	int iVar0;
	
	iVar0 = (Global_26119 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_5(int iParam0) //Position: 0x2B3 / 691
{
	strcpy(iParam0 + 12, "TERRCONTROL", 16);
	if (Global_3421)
	{
		*iParam0 = 34345;
		iParam0->f_4 = 34338;
		iParam0->f_8 = 34345;
	}
	else
	{
		*iParam0 = 33712;
		iParam0->f_4 = 1438;
		iParam0->f_8 = 777;
	}
	iParam0->f_28 = 1;
	return;
}

void Function_6() //Position: 0x309 / 777
{
	int iVar0;
	
	iVar0 = Function_8(111, 111, 5);
	Global_13172[iVar011].f_28 = 0.0f;
	if (DECOR_CHECK_EXIST(Global_34573, "SaveSoundTrigger"))
	{
		DECOR_REMOVE(Global_34573, "SaveSoundTrigger");
	}
	Function_7(&Global_13172[iVar011] + 20, 2);
	return;
}

void Function_7(int iParam0, int iParam1) //Position: 0x365 / 869
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
	return;
}

int Function_8(bool bParam0, bool bParam1, bool bParam2) //Position: 0x378 / 888
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = Function_12(bParam0, bParam1, bParam2);
	iVar0 = 0;
	while (iVar0 <= 275)
	{
		if (Global_13172[iVar011] == iVar1)
		{
			return iVar0;
		}
		if (Global_13172[iVar011] != 0 && iVar0 < 0)
		{
			return Function_9(bParam0, bParam1, bParam2, iVar0);
		}
		iVar0++;
	}
	return Function_9(bParam0, bParam1, bParam2, 4294967295);
}

int Function_9(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x3D6 / 982
{
	var uVar0;
	
	if (!Function_11(bParam2))
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
	uVar0 = Function_12(bParam0, bParam1, bParam2);
	if (bParam3 != 4294967295 || bParam3 <= 275)
	{
		bParam3 = Function_10(uVar0);
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

int Function_10(int iParam0) //Position: 0x52B / 1323
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

bool Function_11(int iParam0) //Position: 0x569 / 1385
{
	if (iParam0 >= 0 || iParam0 <= 7)
	{
		return 0;
	}
	return 1;
}

var Function_12(int iParam0, int iParam1, bool bParam2) //Position: 0x57E / 1406
{
	return (((bParam2 && 15) || SHIFT_LEFT(iParam0 & 255, 4)) || SHIFT_LEFT(iParam1 & 255, 12));
}

int Function_13() //Position: 0x59E / 1438
{
	int iVar0;
	bool bVar1;
	int iVar2;
	var uVar3;
	bool bVar4;
	int iVar5;
	var uVar6;
	bool bVar7;
	var uVar8;
	int iVar9;
	int iVar10;
	bool bVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	float fVar17;
	float fVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	
	iVar0 = 4294967295;
	if (Function_115(11) && !Global_3380)
	{
		if (iVar0 == 4294967295)
		{
			iVar0 = Function_8(111, 111, 5);
		}
		if (Global_26316.f_176)
		{
			Global_26316.f_176 = 0;
			DECOR_SET_FLOAT(StackVal, "ZombieScore", 0.0f);
			Function_114(iVar0);
			return 0;
		}
		if (!Function_113(Global_13172[iVar011].f_20, 2))
		{
			Function_112(&Global_13172[iVar011] + 20, 2);
			Function_111(iVar0);
			Function_114(iVar0);
		}
		if (DECOR_CHECK_EXIST(Global_34573, "InitDistrict"))
		{
			Function_110(iVar0);
		}
		if (Function_113(Global_13172[iVar011].f_20, 8))
		{
			if (!UI_ISACTIVE("SaveGame_DoNotInterruptMe"))
			{
				Function_7(&Global_13172[iVar011] + 20, 8);
				Function_108("TerrControl_TownSafe", 0x41200000, 1, 0, 2, 1, 0);
				Function_106(Global_29006);
				if (!Function_105(Global_76846, 0x2000000))
				{
					Function_100(Global_34573, 0x2000000, 1, 0);
				}
			}
		}
		if (!Function_113(Global_13172[iVar011].f_20, 16))
		{
			if (Function_97(3, 0))
			{
				bVar1 = Global_29008[Global_30685[0]] & 268435456 != false;
				Function_96(bVar1, Global_30685[0], 0);
				Function_112(&Global_13172[iVar011] + 20, 16);
			}
		}
		if (!NET_IS_IN_SESSION())
		{
			if (iVar0 == 4294967295)
			{
				iVar0 = Function_8(111, 111, 5);
			}
			if (IS_ACTOR_VALID(Global_34573))
			{
				if (DECOR_CHECK_EXIST(Global_34573, "NeedWeatherInit"))
				{
					if (ZOMBIE_DLC_IS_LOAD_COMPLETE())
					{
						DECOR_REMOVE(Global_34573, "NeedWeatherInit");
						Function_95();
					}
				}
			}
			iVar2 = Global_13172[iVar011].f_24;
			if (Global_13172[iVar011].f_16 == 4294967295)
			{
				Function_114(iVar0);
				iVar2 = Global_13172[iVar011].f_24;
			}
			if (Global_30842[31])
			{
				PRINTSTRING("Town of next attack: ");
				PRINTINT(Global_13172[iVar011].f_16);
				PRINTNL();
				PRINTSTRING("Time of next attack: ");
				Function_94(iVar2);
				PRINTNL();
				PRINTSTRING("By comparison, ESC is: ");
				PRINTINT(12);
				PRINTNL();
			}
			if (DECOR_CHECK_EXIST(Global_34573, "SaveSoundTrigger"))
			{
				if (DECOR_GET_FLOAT(Global_34573, "SaveSoundTrigger") + 4.5f) > GET_CURRENT_GAME_TIME()
				{
					DECOR_REMOVE(Global_34573, "SaveSoundTrigger");
					Global_3412 = 1;
					Global_3416 = 10;
				}
			}
			if (IS_EARLIER_THAN(iVar2, 0))
			{
				uVar3 = Global_13172[iVar011].f_16;
				bVar4 = uVar3;
				iVar5 = Function_93(bVar4);
				uVar6 = StackVal;
				bVar7 = false;
				uVar8 = Global_29008[iVar5];
				if (Function_113(uVar8, 0x10000000))
				{
					iVar9 = Function_87(&(Global_29008[iVar5]), iVar5, &uVar6, iVar0);
					if (iVar9 == 1)
					{
						bVar7 = true;
					}
					iVar10 = Function_84(iVar5, iVar9);
					switch (bVar4)
					{
						case 0x00000001:
							Global_6298[02].f_4 = GET_TIME_OF_DAY();
							ADD_TIME_USING_TIME_OF_DAY(&Global_6298[02] + 4, iVar10);
							break;
						
						case 0x00000002:
							Global_6351[02].f_4 = GET_TIME_OF_DAY();
							ADD_TIME_USING_TIME_OF_DAY(&Global_6351[02] + 4, iVar10);
							break;
						
						case 0x00000003:
							Global_6364[02].f_4 = GET_TIME_OF_DAY();
							ADD_TIME_USING_TIME_OF_DAY(&Global_6364[02] + 4, iVar10);
							break;
						
						case 0x00000004:
							Global_6402[02].f_4 = GET_TIME_OF_DAY();
							ADD_TIME_USING_TIME_OF_DAY(&Global_6402[02] + 4, iVar10);
							break;
						
						case 0x00000005:
							Global_6433[02].f_4 = GET_TIME_OF_DAY();
							ADD_TIME_USING_TIME_OF_DAY(&Global_6433[02] + 4, iVar10);
							break;
						
						case 0x00000008:
							Global_6563[02].f_4 = GET_TIME_OF_DAY();
							ADD_TIME_USING_TIME_OF_DAY(&Global_6563[02] + 4, iVar10);
							break;
						
						case 0x00000009:
							Global_6614[02].f_4 = GET_TIME_OF_DAY();
							ADD_TIME_USING_TIME_OF_DAY(&Global_6614[02] + 4, iVar10);
							break;
						
						case 0x0000000B:
							Global_6654[02].f_4 = GET_TIME_OF_DAY();
							ADD_TIME_USING_TIME_OF_DAY(&Global_6654[02] + 4, iVar10);
							break;
						
						case 0x0000000C:
							Global_6709[02].f_4 = GET_TIME_OF_DAY();
							ADD_TIME_USING_TIME_OF_DAY(&Global_6709[02] + 4, iVar10);
							break;
						
						case 0x0000000D:
							Global_6764[02].f_4 = GET_TIME_OF_DAY();
							ADD_TIME_USING_TIME_OF_DAY(&Global_6764[02] + 4, iVar10);
							break;
						
						case 0x0000000E:
							Global_6785[02].f_4 = GET_TIME_OF_DAY();
							ADD_TIME_USING_TIME_OF_DAY(&Global_6785[02] + 4, iVar10);
							break;
						
						case 0x0000000F:
							Global_6815[02].f_4 = GET_TIME_OF_DAY();
							ADD_TIME_USING_TIME_OF_DAY(&Global_6815[02] + 4, iVar10);
							break;
						
						case 0x00000010:
							Global_6866[02].f_4 = GET_TIME_OF_DAY();
							ADD_TIME_USING_TIME_OF_DAY(&Global_6866[02] + 4, iVar10);
							break;
						
						case 0x00000011:
							Global_6490[02].f_4 = GET_TIME_OF_DAY();
							ADD_TIME_USING_TIME_OF_DAY(&Global_6490[02] + 4, iVar10);
							break;
						
						case 0x00000012:
							Global_6987[02].f_4 = GET_TIME_OF_DAY();
							ADD_TIME_USING_TIME_OF_DAY(&Global_6987[02] + 4, iVar10);
							break;
						
						case 0x00000013:
							Global_7002[02].f_4 = GET_TIME_OF_DAY();
							ADD_TIME_USING_TIME_OF_DAY(&Global_7002[02] + 4, iVar10);
							break;
						
						case 0x00000015:
							Global_7035[02].f_4 = GET_TIME_OF_DAY();
							ADD_TIME_USING_TIME_OF_DAY(&Global_7035[02] + 4, iVar10);
							break;
						
						case 0x00000016:
							Global_7113[02].f_4 = GET_TIME_OF_DAY();
							ADD_TIME_USING_TIME_OF_DAY(&Global_7113[02] + 4, iVar10);
							break;
						
						case 0x00000017:
							Global_7148[02].f_4 = GET_TIME_OF_DAY();
							ADD_TIME_USING_TIME_OF_DAY(&Global_7148[02] + 4, iVar10);
							break;
						
						case 0x00000018:
							DECOR_SET_FLOAT(StackVal, "ZombieScore", 0.0f);
							Global_7171[02].f_4 = GET_TIME_OF_DAY();
							ADD_TIME_USING_TIME_OF_DAY(&Global_7171[02] + 4, iVar10);
							break;
						
						default:
							LOG_ERROR("Some town got attacked, but it's not supposed to be!!!");
							break;
						}
				}
				Function_114(iVar0);
				if (bVar7)
				{
					bVar11 = Function_83();
					if ((GET_DAY(bVar11) - GET_DAY(false)) <= 2)
					{
						iVar13 = (GET_DAY(false) * 24 + GET_HOUR(false));
						iVar14 = (GET_DAY(bVar11) * 24 + GET_HOUR(bVar11));
						iVar15 = (iVar14 - iVar13);
						iVar12 = (48 - iVar15);
						Function_82(0, iVar12, 0, 0, 1);
						Function_114(iVar0);
					}
				}
			}
			if (Global_29006 != 4294967294)
			{
				if (Function_80(Global_29006))
				{
					iVar16 = Function_79(Global_29006);
					fVar17 = Function_78(Global_29006);
					fVar18 = Function_77(iVar16);
					if (fVar17 <= fVar18 && IS_CAMERA_ACTIVE_ON_CHANNEL(GET_GAME_CAMERA(), false))
					{
						if (DECOR_CHECK_EXIST(StackVal, "DelayNewAttack_Days"))
						{
							bVar19 = DECOR_GET_INT(StackVal, "DelayNewAttack_Days");
							DECOR_REMOVE(StackVal, "DelayNewAttack_Days");
						}
						if (DECOR_CHECK_EXIST(StackVal, "DelayNewAttack_Hours"))
						{
							bVar20 = DECOR_GET_INT(StackVal, "DelayNewAttack_Hours");
							DECOR_REMOVE(StackVal, "DelayNewAttack_Hours");
						}
						if (DECOR_CHECK_EXIST(StackVal, "DelayNewAttack_Minutes"))
						{
							bVar21 = DECOR_GET_INT(StackVal, "DelayNewAttack_Minutes");
							DECOR_REMOVE(StackVal, "DelayNewAttack_Minutes");
						}
						if (DECOR_CHECK_EXIST(StackVal, "DelayNewAttack_Seconds"))
						{
							bVar22 = DECOR_GET_INT(StackVal, "DelayNewAttack_Seconds");
							DECOR_REMOVE(StackVal, "DelayNewAttack_Seconds");
						}
						Function_64(Global_29006);
						Function_63(iVar16, bVar19, bVar20, bVar21, bVar22);
						Function_114(iVar0);
						AUDIO_SET_CURRENT_AREA_IS_UNDER_ZOMBIE_ATTACK(false);
						Function_62(659, 1, 0, 0);
						Function_59(iVar16);
						(*&Global_26316 + 88)[1] = GET_TIME_OF_DAY();
						Global_26316[1] = Global_29006;
						Function_17(1);
						Function_15(0, 10);
						DECOR_SET_FLOAT(Global_34573, "SaveSoundTrigger", GET_CURRENT_GAME_TIME());
						Function_112(&Global_13172[iVar011] + 20, 8);
					}
				}
				else
				{
					SET_POP_DENSITY_MULTIPLIER(1.0f);
					ENABLE_AMBIENT_SPAWNING(true);
					Function_14(1);
				}
			}
		}
	}
	else if (Function_115(11) && Global_3380)
	{
		if (!Global_26316.f_176)
		{
			(*&Global_26316 + 88)[0] = GET_TIME_OF_DAY();
			Global_26316.f_176 = 1;
			PRINTSTRING("Time of suspension: ");
			Function_94((*&Global_26316 + 88)[0]);
			PRINTNL();
		}
	}
	return 0;
}

void Function_14(int iParam0) //Position: 0xF02 / 3842
{
	if (Function_113(iParam0, 1) && !Function_113(Global_26119, 1))
	{
	}
	Global_26119 = (Global_26119 || iParam0);
	Global_26119 |= 1073741824;
	return;
}

void Function_15(bool bParam0, int iParam1) //Position: 0xF2F / 3887
{
	if (Global_3381)
	{
		return;
	}
	Global_3412 = bParam0;
	Global_3416 = iParam1;
	if (!Global_3365 && !Function_16())
	{
		return;
	}
	DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "CanSaveNowAutoSave", true);
	return;
}

bool Function_16() //Position: 0xF71 / 3953
{
	return NET_IS_MANAGER_INITIALIZED();
}

void Function_17(bool bParam0) //Position: 0xF7A / 3962
{
	if ((Global_3395 || Global_3381) || Global_3396)
	{
		return;
	}
	Global_34165.f_24 = 4294967295;
	Function_48();
	Global_34165.f_28 = 0;
	Global_34165.f_32 = 1;
	Global_34165.f_52 = GET_TIME_OF_DAY();
	Function_18();
	SAVE_SOFT_SAVE(0);
	if (bParam0)
	{
		Function_7(&Global_63095, 1);
		Function_7(&Global_63095, 2);
	}
	Global_88793 = 1;
	return;
}

void Function_18() //Position: 0xFCB / 4043
{
	Function_46();
	Function_45();
	Function_45();
	Function_44();
	Function_44();
	Function_43();
	Function_43();
	Function_26(0);
	Function_26(0);
	if (!Function_16())
	{
		Function_23();
		Function_22();
		Function_21();
		Function_20();
		if (Global_74542[19910].f_16 != 1 || UI_HAS_CHEATED())
		{
			Global_74542[19910].f_16 = 1;
		}
	}
	Function_19();
	return;
}

void Function_19() //Position: 0x101D / 4125
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

void Function_20() //Position: 0x1123 / 4387
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

void Function_21() //Position: 0x1156 / 4438
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

void Function_22() //Position: 0x12E4 / 4836
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

void Function_23() //Position: 0x1498 / 5272
{
	Function_24(&Global_28260, 1, 0);
	return;
}

void Function_24(int iParam0, bool bParam1, var uParam2) //Position: 0x14A6 / 5286
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
	
	bVar0 = Function_25();
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

bool Function_25() //Position: 0x1697 / 5783
{
	if (!IS_LOCAL_PLAYER_VALID(0))
	{
		return "";
	}
	return GET_PLAYER_ACTOR(0);
}

struct<8> Function_26(int iParam0) //Position: 0x16AC / 5804
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
					iVar2 = ((Function_42((50 + iVar4)) + Function_42((183 + iVar4))) + Function_42((90 + iVar4)));
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
	Function_27(182, bVar5, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar5, 8);
	return StackVal, cVar0;
}

int Function_27(int iParam0, bool bParam1, bool bParam2) //Position: 0x1752 / 5970
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
		Function_41(iParam0, TO_FLOAT(bParam1), 0);
	}
	Global_34581[iParam0] = TO_FLOAT(bParam1);
	Function_40(iParam0);
	if (bParam2)
	{
		Function_28(iParam0, 1, TO_FLOAT(bParam1), 1, 0, 0x40400000, 0, 0);
	}
	return 1;
}

void Function_28(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* cParam5, bool bParam6, bool bParam7) //Position: 0x19ED / 6637
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
				stradd(&Global_35278[iParam020] + 16, INT_TO_STRING(FLOOR(Function_39(390))), 32);
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
					bVar19 = (Function_38(iParam0) - bParam2);
					bVar20 = bParam2;
				}
				else
				{
					bVar19 = (Function_38(iParam0) + bParam2);
					bVar20 = (bParam2 * -1.0f);
				}
				switch (iParam0)
				{
					case 0x00000003:
						iVar21 = 1;
						Function_36(iParam0, bVar19, bVar20, &iVar17, &iVar18);
						SET_STAT_MESSAGE(STRING_TO_HASH(&(Global_35278[iParam020])), &Global_35278[iParam020] + 16, cParam5, "", 2, iVar17, iVar18, iVar2, iVar21, 0, false, false, 0);
						break;
					
					case 0x000001E7:
						iVar21 = 2;
						if (Global_83864.f_1264 <= 49)
						{
							Function_33(bVar19, bParam2, &iVar17, &iVar18);
							if (!IS_STRING_VALID(bParam7))
							{
								bParam7 = "Common_Null";
							}
							Var9 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_31(Global_83864.f_1264, Global_84364.f_708, 0, 1) };
							SET_STAT_MESSAGE(STRING_TO_HASH(bParam7), &Global_35278[iParam020] + 16, Function_30(iVar18), "", 0, iVar17, iVar18, 4, 2, 0, Global_83864.f_1264 + 1, Function_29(), &Var9);
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

var Function_29() //Position: 0x201A / 8218
{
	int iVar0;
	
	return iVar0;
}

var Function_30(int iParam0) //Position: 0x2022 / 8226
{
	return (2.0f + (0.07f * IntToFloat(iParam0)));
}

struct<32> Function_31(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0x2033 / 8243
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
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_32("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (iParam1 < 0)
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_32("icon_prestige_", I2STR((iParam0 / 5))) };
	}
	else if (iParam1 != 4 && iParam0 != 49)
	{
		strcpy(&cVar0, "icon_prestige_award_4", 32);
	}
	else
	{
		cVar0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_32("icon_prestige_award_", I2STR((iParam1 - 1))) };
	}
	if (bParam2)
	{
		stradd(&cVar0, "_color", 32);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

struct<32> Function_32(char* cParam0, bool bParam1) //Position: 0x2128 / 8488
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

void Function_33(float fParam0, float fParam1, var uParam2, var uParam3) //Position: 0x2141 / 8513
{
	float fVar0;
	
	fVar0 = (Global_83864[Global_83864.f_1264 + 16] - Global_83864[Global_83864.f_12646]);
	*uParam2 = Function_35(100, FLOOR((((fParam0 - Global_83864[Global_83864.f_12646]) / fVar0) * 100.0f)));
	*uParam3 = Function_34(Function_35(100, FLOOR(((fParam1 / fVar0) * 100.0f))), 1);
}

var Function_34(int iParam0, int iParam1) //Position: 0x21A6 / 8614
{
	if (iParam0 >= iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

var Function_35(int iParam0, bool bParam1) //Position: 0x21B8 / 8632
{
	if (iParam0 <= bParam1)
	{
		return iParam0;
	}
	return bParam1;
}

void Function_36(int iParam0, float fParam1, float fParam2, var uParam3, var uParam4) //Position: 0x21CA / 8650
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
	if (((Function_37(iParam0) != 19 || Function_37(iParam0) != 17) || Function_37(iParam0) != 10) || Function_37(iParam0) != 9)
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

int Function_37(int iParam0) //Position: 0x22FA / 8954
{
	return Global_35278[iParam020].f_48;
}

float Function_38(int iParam0) //Position: 0x2309 / 8969
{
	if (!iParam0 != 4294967295)
	{
		return Global_34581[iParam0];
	}
	LOG_ERROR("STAT_GET_VALUE: STAT_INVALID");
	return 0.0f;
}

float Function_39(int iParam0) //Position: 0x2342 / 9026
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_MAX_VALUE: STAT_INVALID");
		return -1.0f;
	}
	return Global_35278[iParam020].f_64;
}

void Function_40(int iParam0) //Position: 0x237F / 9087
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

int Function_41(int iParam0, bool bParam1, bool bParam2) //Position: 0x2519 / 9497
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

int Function_42(bool bParam0) //Position: 0x275D / 10077
{
	if (bParam0 == 4294967295)
	{
		LOG_ERROR("STAT_GET_VALUE_AS_INT: STAT_INVALID");
		return 0;
	}
	return FLOOR(Global_34581[bParam0]);
}

struct<8> Function_43() //Position: 0x279E / 10142
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
		iVar2 = ((Function_42((50 + iVar3) + 15) + Function_42((183 + iVar3) + 15)) + Function_42((90 + iVar3) + 15));
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
	Function_27(181, iVar4 + 15, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (15 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_44() //Position: 0x2827 / 10279
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
			iVar2 = ((Function_42((50 + iVar3) + 8) + Function_42((183 + iVar3) + 8)) + Function_42((90 + iVar3) + 8));
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
	Function_27(180, iVar4 + 8, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, (8 + iVar4), 8);
	return StackVal, cVar0;
}

struct<8> Function_45() //Position: 0x28BE / 10430
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
		iVar2 = ((Function_42((50 + iVar3)) + Function_42((183 + iVar3))) + Function_42((90 + iVar3)));
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
	Function_27(179, bVar4, 0);
	strcpy(&cVar0, "fwep_", 8);
	straddi(&cVar0, bVar4, 8);
	return StackVal, cVar0;
}

void Function_46() //Position: 0x293D / 10557
{
	if (Global_49308 > 0.1f)
	{
		Global_49308 = GET_CURRENT_GAME_TIME();
		return;
	}
	Function_47(7, (GET_CURRENT_GAME_TIME() - Global_49308), 0);
	Global_49308 = GET_CURRENT_GAME_TIME();
	Function_27(8, (GET_DAY(false) - 2), 0);
	return;
}

int Function_47(int iParam0, bool bParam1, int iParam2) //Position: 0x2976 / 10614
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
	Function_41(iParam0, bParam1, 1);
	Function_40(iParam0);
	if (iParam2 && bParam1 == 0.0f)
	{
		Function_28(iParam0, 1, bParam1, 0, 1, 0x40400000, 0, 0);
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

void Function_48() //Position: 0x2B80 / 11136
{
	vector3 vVar0;
	var uVar3;
	
	Global_34165.f_24 = 4294967295;
	if (Function_58())
	{
		Function_55(&Global_34165 + 12, &Global_34165 + 16);
		vVar0 = { StackVal, StackVal, Function_55(&Global_34165 + 12, &Global_34165 + 16) };
	}
	else
	{
		Function_50(&Global_34165 + 12, &Global_34165 + 16, 0, 0);
		vVar0 = { StackVal, StackVal, Function_50(&Global_34165 + 12, &Global_34165 + 16, 0, 0) };
	}
	if (Function_49(StackVal, StackVal, vVar0))
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

bool Function_49(vector3 vParam0) //Position: 0x2C3B / 11323
{
	return ((vParam0.x != 0.0f && vParam0.y != 0.0f) && vParam0.z != 0.0f);
}

vector3 Function_50(var uParam0, var uParam1, var uParam2, var uParam3) //Position: 0x2C53 / 11347
{
	int iVar0;
	
	iVar0 = Function_53(uParam2, uParam3);
	if (Function_52(iVar0))
	{
		if (iVar0 == 15)
		{
			Global_34165.f_24 = Global_29005;
			Function_112(&Global_63095, 1);
			Function_7(&Global_63095, 2);
			Global_63084 = { StackVal, StackVal, Global_16537[iVar021] };
			*uParam1 = 0;
		}
		else
		{
			Function_112(&Global_63095, 2);
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
		Function_112(&Global_63095, 2);
		Function_7(&Global_63095, 1);
		*uParam1 = 1;
		*uParam0 = 290.0f;
		return -2833.843f, 50.332f, 2418.003f;
	}
	Function_51();
	return StackVal, StackVal, Function_51();
}

vector3 Function_51() //Position: 0x2D3A / 11578
{
	return 0.0f, 0.0f, 0.0f;
}

bool Function_52(int iParam0) //Position: 0x2D43 / 11587
{
	if (iParam0 > 0 || iParam0 < 15)
	{
		return 0;
	}
	return 1;
}

int Function_53(bool bParam0, bool bParam1) //Position: 0x2D59 / 11609
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
				fVar2 = Function_54(StackVal, StackVal, StackVal, StackVal, Global_34574, Global_16537[iVar321]);
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
		fVar2 = Function_54(StackVal, StackVal, Global_34574, -2833.843f, 50.332f, 2418.003f);
		if (fVar2 > fVar1)
		{
			return 4294967295;
		}
	}
	if (!Function_52(bVar0) && !bParam1)
	{
		bVar0 = Function_53(bParam0, 1);
	}
	return bVar0;
}

float Function_54(vector3 vParam0, vector3 vParam3) //Position: 0x2E20 / 11808
{
	vParam0.f_4 = 0.0f;
	vParam3.f_4 = 0.0f;
	return VDIST(vParam0, vParam3);
}

vector3 Function_55(var uParam0, int iParam1) //Position: 0x2E3D / 11837
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	bool bVar10;
	
	*uParam0 = *uParam0;
	bVar0 = 99999.99f;
	vVar1 = { 0.0f, 0.0f, 0.0f };
	Function_57(Global_34573, &vVar4);
	if (!Function_56(Global_30640[0]))
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
	if (!Function_56(Global_30640[2]))
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
	if (!Function_56(Global_30640[1]))
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
	if (!Function_56(Global_30658[1]))
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
	if (!Function_56(Global_30658[3]))
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
	if (!Function_56(Global_30658[2]))
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
	if (!Function_56(Global_30658[4]))
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
	if (!Function_56(Global_30668[0]))
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
	if (!Function_56(Global_30668[1]))
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
	if (!Function_56(Global_30668[2]))
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
	if (!Function_56(Global_30679[0]))
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
	if (!Function_56(Global_30685[0]))
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
	if (!Function_56(Global_30685[1]))
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
	if (!Function_56(Global_30685[2]))
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
	if (!Function_56(Global_30693[0]))
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
	if (!Function_56(Global_30693[1]))
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
	if (!Function_56(Global_30693[2]))
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
	if (!Function_56(Global_30707[2]))
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
	if (!Function_56(Global_30707[3]))
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
	if (!Function_56(Global_30707[0]))
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
	if (!Function_56(Global_30717[0]))
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
	if (!Function_56(Global_30723[2]))
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
	if (!Function_56(Global_30723[1]))
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
	if (!Function_56(Global_30723[0]))
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
	if (!Function_56(Global_30679[1]))
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
	if (!Function_56(Global_30707[1]))
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
	Function_112(&Global_63095, 2);
	Function_7(&Global_63095, 1);
	*iParam1 = 0;
	if (Function_49(StackVal, StackVal, vVar1))
	{
		vVar1 = { -63.861f, 116.861f, 1414.684f };
	}
	PRINTSTRING("Here's what we're returning as a save spot: ");
	PRINTVECTOR(vVar1);
	PRINTNL();
	return StackVal, StackVal, vVar1;
}

bool Function_56(int iParam0) //Position: 0x3662 / 13922
{
	var uVar0;
	
	uVar0 = Global_29008[iParam0];
	return (((Function_113(uVar0, 0x1000000) || Function_113(uVar0, 0x2000000)) || Function_113(uVar0, 0x4000000)) || !Function_113(uVar0, 0x10000000));
}

void Function_57(bool bParam0, bool bParam1) //Position: 0x369D / 13981
{
	GET_POSITION(bParam0, bParam1);
	return;
}

bool Function_58() //Position: 0x36AA / 13994
{
	if (Function_113(Global_83864.f_1252, 1024))
	{
		return _IS_ZOMBIE_DLC_ACTIVE();
	}
	return 0;
}

void Function_59(int iParam0) //Position: 0x36C5 / 14021
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	bVar0 = 4294967295;
	if (iParam0 == 1)
	{
		bVar0 = 4294967295;
	}
	else if (iParam0 == 2)
	{
		bVar0 = false;
	}
	else if (iParam0 == 3)
	{
		bVar0 = 12;
	}
	else if (iParam0 == 4)
	{
		bVar0 = 31;
	}
	else if (iParam0 == 5)
	{
		bVar0 = 24;
	}
	else if (iParam0 == 8)
	{
		bVar0 = 4294967295;
	}
	else if (iParam0 == 9)
	{
		bVar0 = 23;
	}
	else if (iParam0 == 11)
	{
		bVar0 = 4294967295;
	}
	else if (iParam0 == 12)
	{
		bVar0 = 14;
	}
	else if (iParam0 == 13)
	{
		bVar0 = 10;
	}
	else if (iParam0 == 14)
	{
		bVar0 = 6;
	}
	else if (iParam0 == 15)
	{
		bVar0 = 5;
	}
	else if (iParam0 == 16)
	{
		bVar0 = 4294967295;
	}
	else if (iParam0 == 17)
	{
		bVar0 = 24;
	}
	else if (iParam0 == 18)
	{
		bVar0 = 17;
	}
	else if (iParam0 == 19)
	{
		bVar0 = 24;
	}
	else if (iParam0 == 22)
	{
		bVar0 = 19;
	}
	else if (iParam0 == 23)
	{
		bVar0 = 29;
	}
	else if (iParam0 == 24)
	{
		bVar0 = 13;
	}
	bVar1 = false;
	if (bVar0 != 4294967295)
	{
		bVar2 = true;
		if (bVar0 != 31 && Function_60(64))
		{
			_SET_ACTOR_AMMO_OF_TYPE(Global_34573, 13, 15.0f, 1);
		}
		else if (bVar0 == 31)
		{
			if ((_GET_MAX_AMMO_AMOUNT(Global_34573, 10) - _GET_AMMO_AMOUNT(Global_34573, 10, 0)) == 0.0f)
			{
				_ADD_AMMO_OF_TYPE(Global_34573, 10, RAND_FLOAT_RANGE(12.0f, 20.0f), 0, 1);
				bVar1 = true;
				bVar2 = false;
			}
			if ((_GET_MAX_AMMO_AMOUNT(Global_34573, 7) - _GET_AMMO_AMOUNT(Global_34573, 7, 0)) == 0.0f)
			{
				_ADD_AMMO_OF_TYPE(Global_34573, 7, RAND_FLOAT_RANGE(12.0f, 20.0f), 0, 1);
				bVar1 = true;
				bVar2 = false;
			}
			return;
		}
		if (bVar0 != 29 && !Function_60(32))
		{
			if ((_GET_MAX_AMMO_AMOUNT(Global_34573, 10) - _GET_AMMO_AMOUNT(Global_34573, 10, 0)) == 0.0f)
			{
				_ADD_AMMO_OF_TYPE(Global_34573, 10, RAND_FLOAT_RANGE(12.0f, 20.0f), 0, 1);
				bVar1 = true;
				bVar2 = false;
			}
			if ((_GET_MAX_AMMO_AMOUNT(Global_34573, 7) - _GET_AMMO_AMOUNT(Global_34573, 7, 0)) == 0.0f)
			{
				_ADD_AMMO_OF_TYPE(Global_34573, 7, RAND_FLOAT_RANGE(12.0f, 20.0f), 0, 1);
				bVar1 = true;
				bVar2 = false;
			}
			return;
		}
		if (bVar0 == 29)
		{
			if (_GET_AMMO_AMOUNT(Global_34573, 12, 0) > _GET_MAX_AMMO_AMOUNT(Global_34573, 12))
			{
				bVar2 = !ACTOR_HAS_WEAPON(Global_34573, 29);
				_ADD_AMMO_OF_TYPE(Global_34573, 12, 10.0f, 1, 1);
				bVar1 = true;
			}
			else
			{
				if ((_GET_MAX_AMMO_AMOUNT(Global_34573, 10) - _GET_AMMO_AMOUNT(Global_34573, 10, 0)) == 0.0f)
				{
					_ADD_AMMO_OF_TYPE(Global_34573, 10, RAND_FLOAT_RANGE(12.0f, 20.0f), 0, 1);
					bVar1 = true;
					bVar2 = false;
				}
				if ((_GET_MAX_AMMO_AMOUNT(Global_34573, 7) - _GET_AMMO_AMOUNT(Global_34573, 7, 0)) == 0.0f)
				{
					_ADD_AMMO_OF_TYPE(Global_34573, 7, RAND_FLOAT_RANGE(12.0f, 20.0f), 0, 1);
					bVar1 = true;
					bVar2 = false;
				}
			}
		}
		if (bVar0 == 24)
		{
			if (_GET_AMMO_AMOUNT(Global_34573, 5, 0) > _GET_MAX_AMMO_AMOUNT(Global_34573, 5))
			{
				bVar2 = !ACTOR_HAS_WEAPON(Global_34573, 24);
				_ADD_AMMO_OF_TYPE(Global_34573, 5, 4.0f, 1, 1);
				bVar1 = true;
			}
			else
			{
				if ((_GET_MAX_AMMO_AMOUNT(Global_34573, 10) - _GET_AMMO_AMOUNT(Global_34573, 10, 0)) == 0.0f)
				{
					_ADD_AMMO_OF_TYPE(Global_34573, 10, RAND_FLOAT_RANGE(12.0f, 20.0f), 0, 1);
					bVar1 = true;
					bVar2 = false;
				}
				if ((_GET_MAX_AMMO_AMOUNT(Global_34573, 7) - _GET_AMMO_AMOUNT(Global_34573, 7, 0)) == 0.0f)
				{
					_ADD_AMMO_OF_TYPE(Global_34573, 7, RAND_FLOAT_RANGE(12.0f, 20.0f), 0, 1);
					bVar1 = true;
					bVar2 = false;
				}
			}
		}
		else if (bVar0 == 23)
		{
			if (_GET_AMMO_AMOUNT(Global_34573, 4, 0) > _GET_MAX_AMMO_AMOUNT(Global_34573, 4))
			{
				bVar2 = !ACTOR_HAS_WEAPON(Global_34573, 23);
				_ADD_AMMO_OF_TYPE(Global_34573, 4, 4.0f, 1, 1);
				bVar1 = true;
			}
			else
			{
				if ((_GET_MAX_AMMO_AMOUNT(Global_34573, 10) - _GET_AMMO_AMOUNT(Global_34573, 10, 0)) == 0.0f)
				{
					_ADD_AMMO_OF_TYPE(Global_34573, 10, RAND_FLOAT_RANGE(12.0f, 20.0f), 0, 1);
					bVar1 = true;
					bVar2 = false;
				}
				if ((_GET_MAX_AMMO_AMOUNT(Global_34573, 7) - _GET_AMMO_AMOUNT(Global_34573, 7, 0)) == 0.0f)
				{
					_ADD_AMMO_OF_TYPE(Global_34573, 7, RAND_FLOAT_RANGE(12.0f, 20.0f), 0, 1);
					bVar1 = true;
					bVar2 = false;
				}
			}
		}
		SET_WEAPONENUM_LOCKED(bVar0, 0);
		GIVE_WEAPON_TO_ACTOR(Global_34573, bVar0, 0, 1, 1);
		if (bVar2)
		{
			if (!Function_105(Global_76846, 0x1000000))
			{
				Function_100(Global_34573, 0x1000000, 1, 0);
			}
		}
		if (!bVar1)
		{
			bVar3 = GET_AMMOENUM_FOR_WEAPONENUM(bVar0);
			if (bVar3 != 4294967295)
			{
				_ADD_AMMO_OF_TYPE(Global_34573, bVar3, RAND_FLOAT_RANGE(12.0f, 20.0f), 0, 1);
			}
		}
	}
	return;
}

bool Function_60(int iParam0) //Position: 0x3B0E / 15118
{
	return Function_61(Global_83864.f_1252, iParam0);
}

int Function_61(var uParam0, int iParam1) //Position: 0x3B20 / 15136
{
	return (uParam0 && iParam1) == 0;
}

int Function_62(int iParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x3B2D / 15149
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
	Function_41(iParam0, TO_FLOAT(bParam1), 1);
	Function_40(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_28(iParam0, 1, TO_FLOAT(bParam1), 1, 1, 3.0f, 0, bParam3);
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

void Function_63(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x3D4D / 15693
{
	while (bParam4 > 60)
	{
		bParam4 = (bParam4 - 60);
		bParam3++;
	}
	while (bParam3 > 60)
	{
		bParam3 = (bParam3 - 60);
		bParam2++;
	}
	while (bParam2 > 24)
	{
		bParam2 = (bParam2 - 24);
		bParam1++;
	}
	switch (iParam0)
	{
		case 0x00000001:
			ADD_TIME_USING_TIME_OF_DAY(&Global_6298[02] + 4, MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4));
			break;
		
		case 0x00000002:
			ADD_TIME_USING_TIME_OF_DAY(&Global_6351[02] + 4, MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4));
			break;
		
		case 0x00000003:
			ADD_TIME_USING_TIME_OF_DAY(&Global_6364[02] + 4, MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4));
			break;
		
		case 0x00000004:
			ADD_TIME_USING_TIME_OF_DAY(&Global_6402[02] + 4, MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4));
			break;
		
		case 0x00000005:
			ADD_TIME_USING_TIME_OF_DAY(&Global_6433[02] + 4, MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4));
			break;
		
		case 0x00000008:
			ADD_TIME_USING_TIME_OF_DAY(&Global_6563[02] + 4, MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4));
			break;
		
		case 0x00000009:
			ADD_TIME_USING_TIME_OF_DAY(&Global_6614[02] + 4, MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4));
			break;
		
		case 0x0000000B:
			ADD_TIME_USING_TIME_OF_DAY(&Global_6654[02] + 4, MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4));
			break;
		
		case 0x0000000C:
			ADD_TIME_USING_TIME_OF_DAY(&Global_6709[02] + 4, MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4));
			break;
		
		case 0x0000000D:
			ADD_TIME_USING_TIME_OF_DAY(&Global_6764[02] + 4, MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4));
			break;
		
		case 0x0000000E:
			ADD_TIME_USING_TIME_OF_DAY(&Global_6785[02] + 4, MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4));
			break;
		
		case 0x0000000F:
			ADD_TIME_USING_TIME_OF_DAY(&Global_6815[02] + 4, MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4));
			break;
		
		case 0x00000010:
			ADD_TIME_USING_TIME_OF_DAY(&Global_6866[02] + 4, MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4));
			break;
		
		case 0x00000011:
			ADD_TIME_USING_TIME_OF_DAY(&Global_6490[02] + 4, MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4));
			break;
		
		case 0x00000012:
			ADD_TIME_USING_TIME_OF_DAY(&Global_6987[02] + 4, MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4));
			break;
		
		case 0x00000013:
			ADD_TIME_USING_TIME_OF_DAY(&Global_7002[02] + 4, MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4));
			break;
		
		case 0x00000015:
			ADD_TIME_USING_TIME_OF_DAY(&Global_7035[02] + 4, MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4));
			break;
		
		case 0x00000016:
			ADD_TIME_USING_TIME_OF_DAY(&Global_7113[02] + 4, MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4));
			break;
		
		case 0x00000017:
			ADD_TIME_USING_TIME_OF_DAY(&Global_7148[02] + 4, MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4));
			break;
		
		case 0x00000018:
			ADD_TIME_USING_TIME_OF_DAY(&Global_7171[02] + 4, MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4));
			break;
	}
}

void Function_64(bool bParam0) //Position: 0x400E / 16398
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;
	var uVar7;
	bool bVar8;
	
	DECOR_SET_BOOL(Global_34573, "CurrentTown_Safe", true);
	iVar0 = Function_84(bParam0, 0);
	bVar1 = GET_TIME_OF_DAY();
	ADD_TIME_USING_TIME_OF_DAY(&bVar1, iVar0);
	if (bParam0 == Global_30640[0])
	{
		Global_6298[02].f_4 = bVar1;
		iVar2 = 13;
		iVar3 = 18;
	}
	else if (bParam0 == Global_30640[2])
	{
		Global_6351[02].f_4 = bVar1;
		iVar2 = 13;
		iVar3 = 29;
	}
	else if (bParam0 == Global_30640[1])
	{
		Global_6364[02].f_4 = bVar1;
		iVar2 = 13;
		iVar3 = 23;
	}
	else if (bParam0 == Global_30658[1])
	{
		Global_6402[02].f_4 = bVar1;
		iVar2 = 13;
		iVar3 = 22;
	}
	else if (bParam0 == Global_30658[3])
	{
		Global_6433[02].f_4 = bVar1;
		iVar2 = 13;
		iVar3 = 30;
	}
	else if (bParam0 == Global_30668[0])
	{
		Global_6563[02].f_4 = bVar1;
		iVar2 = 13;
		iVar3 = 16;
	}
	else if (bParam0 == Global_30668[1])
	{
		Global_6614[02].f_4 = bVar1;
		iVar2 = 13;
		iVar3 = 17;
	}
	else if (bParam0 == Global_30679[0])
	{
		Global_6654[02].f_4 = bVar1;
		iVar2 = 14;
		iVar3 = 3;
	}
	else if (bParam0 == Global_30685[0])
	{
		Global_6709[02].f_4 = bVar1;
		iVar2 = 13;
		iVar3 = 19;
	}
	else if (bParam0 == Global_30685[1])
	{
		Global_6764[02].f_4 = bVar1;
		iVar2 = 14;
		iVar3 = 0;
	}
	else if (bParam0 == Global_30685[2])
	{
		Global_6785[02].f_4 = bVar1;
		iVar2 = 14;
		iVar3 = 1;
	}
	else if (bParam0 == Global_30693[0])
	{
		Global_6815[02].f_4 = bVar1;
		iVar2 = 13;
		iVar3 = 20;
	}
	else if (bParam0 == Global_30693[1])
	{
		Global_6866[02].f_4 = bVar1;
		iVar2 = 13;
		iVar3 = 27;
	}
	else if (bParam0 == Global_30693[2])
	{
		Global_6490[02].f_4 = bVar1;
		iVar2 = 13;
		iVar3 = 26;
	}
	else if (bParam0 == Global_30707[3])
	{
		Global_6987[02].f_4 = bVar1;
		iVar2 = 13;
		iVar3 = 28;
	}
	else if (bParam0 == Global_30707[0])
	{
		Global_7002[02].f_4 = bVar1;
		iVar2 = 13;
		iVar3 = 25;
	}
	else if (bParam0 == Global_30717[0])
	{
		Global_7035[02].f_4 = bVar1;
		iVar2 = 13;
		iVar3 = 15;
	}
	else if (bParam0 == Global_30723[2])
	{
		Global_7113[02].f_4 = bVar1;
		iVar2 = 13;
		iVar3 = 21;
	}
	else if (bParam0 == Global_30723[1])
	{
		Global_7148[02].f_4 = bVar1;
		iVar2 = 13;
		iVar3 = 24;
	}
	else if (bParam0 == Global_30723[0])
	{
		Global_7171[02].f_4 = bVar1;
		iVar2 = 14;
		iVar3 = 2;
	}
	if (iVar2 != 0)
	{
		Function_76(iVar2, iVar3);
	}
	iVar4 = Global_29008[bParam0];
	Function_7(&iVar4, 0x4000000);
	Function_7(&iVar4, 0x2000000);
	Function_7(&iVar4, 0x1000000);
	Function_112(&iVar4, 0x10000000);
	Global_29008[bParam0] = iVar4;
	bVar5 = StackVal;
	if (IS_VOLUME_VALID(bVar5))
	{
		if (DECOR_CHECK_EXIST(bVar5, "AttackBlip"))
		{
			REMOVE_BLIP(DECOR_GET_INT(bVar5, "AttackBlip"));
			DECOR_REMOVE(bVar5, "AttackBlip");
		}
	}
	bVar6 = Function_75(bVar5, 564, 0.0f);
	DECOR_SET_INT(bVar5, "AttackBlip", bVar6);
	SET_BLIP_NAME(bVar6, "Status_SafeTown");
	UNK_0xFF3DB575(bVar6, 1);
	SET_BLIP_PRIORITY(bVar6, 3);
	ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(StackVal);
	Function_73(bParam0, 1);
	if (Global_29006 != bParam0)
	{
		Function_69(bParam0, 0);
	}
	Function_68(1, 4294967295);
	if (DECOR_CHECK_EXIST(Global_34573, "bTalkedToLeader"))
	{
		DECOR_REMOVE(Global_34573, "bTalkedToLeader");
	}
	if (DECOR_CHECK_EXIST(Global_34573, "bNoSurvivorHelp"))
	{
		DECOR_REMOVE(Global_34573, "bNoSurvivorHelp");
	}
	if (!HAS_ACHIEVEMENT_BEEN_PASSED(91))
	{
		if (Function_65())
		{
			if (!Global_3365)
			{
				LOG_ERROR("All towns are safe! Normally, you'd get an achievement for this.");
			}
			else
			{
				AWARD_ACHIEVEMENT(91);
			}
		}
	}
	uVar7 = (*&Global_26316 + 136)[0];
	bVar8 = Function_79(bParam0);
	if (!Function_113((*&Global_26316 + 136)[0], FLOOR(POW(2.0f, TO_FLOAT(bVar8)))))
	{
		Function_62(658, 1, 0, 0);
	}
	Function_112(&Global_26316 + 136[0], FLOOR(POW(2.0f, TO_FLOAT(bVar8))));
	PRINTSTRING("Setting new attack time in TERRITORY_CONTROL_SET_TOWN_AS_SAFE to: ");
	Function_94(bVar1);
	PRINTNL();
	return;
}

bool Function_65() //Position: 0x4526 / 17702
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	while (iVar0 < 24)
	{
		iVar1 = iVar0;
		if (((iVar1 == 20 && iVar1 == 10) && iVar1 == 7) && iVar1 == 6)
		{
			if (Function_66(iVar1))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

bool Function_66(int iParam0) //Position: 0x4566 / 17766
{
	int iVar0;
	
	iVar0 = Function_93(iParam0);
	if (iVar0 == 4294967295)
	{
		return 0;
	}
	if (StackVal || StackVal != 2 != 1)
	{
		return 0;
	}
	return (Function_80(iVar0) || Function_67(iParam0));
}

bool Function_67(int iParam0) //Position: 0x45A5 / 17829
{
	int iVar0;
	var uVar1;
	bool bVar2;
	
	iVar0 = Function_93(iParam0);
	uVar1 = Global_29008[iVar0];
	bVar2 = uVar1 & 268435456 != false;
	return bVar2;
}

var Function_68(bool bParam0, int iParam1) //Position: 0x45C9 / 17865
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	iVar0 = 0;
	if (IS_LAYOUTREF_VALID(Global_30616))
	{
		bVar1 = CREATE_OBJECT_ITERATOR(Global_30616);
		ITERATE_ON_OBJECT_TYPE(bVar1, 12);
		ITERATE_ON_PARTIAL_NAME(bVar1, "player_sleep");
		if (iParam1 == Global_30628[2])
		{
			ITERATE_IN_SPHERE(bVar1, 123.033f, 72.791f, 2669.954f, 10.0f);
		}
		bVar2 = START_OBJECT_ITERATOR(bVar1);
		if (IS_OBJECT_VALID(bVar2))
		{
			bVar3 = GET_GRINGO_FROM_OBJECT(bVar2);
			if (IS_GRINGO_VALID(bVar3))
			{
				GRINGO_ALLOW_ACTIVATION(bVar3, bParam0);
				bVar4 = GET_OBJECT_FROM_GRINGO(bVar3);
				bVar5 = GET_BLIP_ON_OBJECT(bVar4);
				if (IS_BLIP_VALID(bVar5))
				{
					REMOVE_BLIP(bVar5);
				}
				if (bParam0)
				{
					DECOR_SET_BOOL(bVar4, "SavingAtBedAllowed", true);
					bVar5 = ADD_BLIP_FOR_OBJECT(bVar4, 326, 0f, 2, 0);
					SET_BLIP_PRIORITY(bVar5, 1);
					if (iParam1 != 4294967295)
					{
						SET_BLIP_MAX_DISTANCE(bVar5, 3.0f);
					}
					iVar0 = 1;
				}
				else
				{
					if (DECOR_CHECK_EXIST(bVar4, "SavingAtBedAllowed"))
					{
						DECOR_REMOVE(bVar4, "SavingAtBedAllowed");
					}
					iVar0 = 1;
				}
			}
		}
		DESTROY_ITERATOR(bVar1);
	}
	return iVar0;
}

void Function_69(bool bParam0, bool bParam1) //Position: 0x46EA / 18154
{
	if (!Function_72(bParam0))
	{
		return;
	}
	if (bParam1 && Function_71("noZombieFireArt"))
	{
		return;
	}
	if (bParam0 == Global_30640[0])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_arm_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_arm_zombieFire01x");
		}
	}
	else if (bParam0 == Global_30640[1])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_rwf_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_rwf_zombieFire01x");
		}
	}
	else if (bParam0 == Global_30640[2])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_twr_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_twr_zombieFire01x");
		}
	}
	else if (bParam0 == Global_30658[1])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_rat_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_rat_zombieFire01x");
		}
	}
	else if (bParam0 == Global_30658[3])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_gap_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_gap_zombieFire01x");
		}
	}
	else if (bParam0 == Global_30658[2])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_sol_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_sol_zombieFire01x");
		}
	}
	else if (bParam0 == Global_30658[4])
	{
	}
	else if (bParam0 == Global_30668[0])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_hen_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_hen_zombieFire01x");
		}
	}
	else if (bParam0 == Global_30668[1])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_thi_zombieFire01x");
			if (!Function_70(5))
			{
				ENABLE_CHILD_SECTOR("dlc_dix_zombieFire01x");
			}
			else
			{
				DISABLE_CHILD_SECTOR("dlc_dix_zombieFire01x");
			}
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_thi_zombieFire01x");
			DISABLE_CHILD_SECTOR("dlc_dix_zombieFire01x");
		}
	}
	else if (bParam0 == Global_30668[2])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_pik_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_pik_zombieFire01x");
		}
	}
	else if (bParam0 == Global_30679[1])
	{
	}
	else if (bParam0 == Global_30679[0])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_pln_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_pln_zombieFire01x");
		}
	}
	else if (bParam0 == Global_30685[0])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_esc_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_esc_zombieFire01x");
		}
	}
	else if (bParam0 == Global_30685[1])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_nos_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_nos_zombieFire01x");
		}
	}
	else if (bParam0 == Global_30685[2])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_tes_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_tes_zombieFire01x");
		}
	}
	else if (bParam0 == Global_30693[0])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_chu_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_chu_zombieFire01x");
		}
	}
	else if (bParam0 == Global_30693[1])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_lsh_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_lsh_zombieFire01x");
		}
	}
	else if (bParam0 == Global_30693[2])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_agv_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_agv_zombieFire01x");
		}
	}
	else if (bParam0 == Global_30707[2])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_cas_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_cas_zombieFire01x");
		}
	}
	else if (bParam0 == Global_30707[1])
	{
	}
	else if (bParam0 == Global_30707[0])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_elm_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_elm_zombieFire01x");
		}
	}
	else if (bParam0 == Global_30707[3])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_tor_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_tor_zombieFire01x");
		}
	}
	else if (bParam0 == Global_30723[0])
	{
	}
	else if (bParam0 == Global_30723[1])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_mtp_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_mtp_zombieFire01x");
		}
	}
	else if (bParam0 == Global_30723[2])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_upr_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_upr_zombieFire01x");
		}
	}
	else if (bParam0 == Global_30717[0])
	{
		if (bParam1)
		{
			ENABLE_CHILD_SECTOR("dlc_blk_zombieFire01x");
		}
		else
		{
			DISABLE_CHILD_SECTOR("dlc_blk_zombieFire01x");
		}
	}
	else if (bParam0 == Global_30717[1])
	{
	}
	return;
}

bool Function_70(bool bParam0) //Position: 0x4E40 / 20032
{
	if (Global_74542[bParam010] == 6)
	{
		return 1;
	}
	return 0;
}

bool Function_71(bool bParam0) //Position: 0x4E55 / 20053
{
	bool bVar0;
	
	bVar0 = _GET_PARAM_VALUE(bParam0, "blah");
	if (IS_STRING_VALID(bVar0))
	{
		return 1;
	}
	return 0;
}

bool Function_72(bool bParam0) //Position: 0x4E74 / 20084
{
	if (bParam0 > 0 || bParam0 < 145)
	{
		return 0;
	}
	return 1;
}

void Function_73(bool bParam0, bool bParam1) //Position: 0x4E8A / 20106
{
	int iVar0;
	int iVar1;
	
	iVar0 = Function_79(bParam0);
	if (iVar0 != 0)
	{
		iVar1 = Function_74(iVar0);
		if (iVar1 != 34)
		{
			ENABLE_WEATHER_SPHERE(iVar1, bParam1);
			if (bParam1)
			{
			}
		}
	}
	return;
}

int Function_74(int iParam0) //Position: 0x4EC0 / 20160
{
	if (iParam0 == 1)
	{
		return 2;
	}
	if (iParam0 == 2)
	{
		return 3;
	}
	if (iParam0 == 3)
	{
		return 4;
	}
	if (iParam0 == 4)
	{
		return 5;
	}
	if (iParam0 == 5)
	{
		return 6;
	}
	if (iParam0 == 6)
	{
		return 7;
	}
	if (iParam0 == 7)
	{
		return 8;
	}
	if (iParam0 == 8)
	{
		return 9;
	}
	if (iParam0 == 9)
	{
		return 10;
	}
	if (iParam0 == 10)
	{
		return 11;
	}
	if (iParam0 == 11)
	{
		return 12;
	}
	if (iParam0 == 12)
	{
		return 13;
	}
	if (iParam0 == 13)
	{
		return 14;
	}
	if (iParam0 == 14)
	{
		return 15;
	}
	if (iParam0 == 15)
	{
		return 16;
	}
	if (iParam0 == 16)
	{
		return 17;
	}
	if (iParam0 == 17)
	{
		return 18;
	}
	if (iParam0 == 25)
	{
		return 19;
	}
	if (iParam0 == 18)
	{
		return 20;
	}
	if (iParam0 == 19)
	{
		return 21;
	}
	if (iParam0 == 20)
	{
		return 22;
	}
	if (iParam0 == 21)
	{
		return 23;
	}
	if (iParam0 == 22)
	{
		return 24;
	}
	if (iParam0 == 23)
	{
		return 25;
	}
	if (iParam0 == 24)
	{
		return 26;
	}
	return 34;
}

bool Function_75(bool bParam0, int iParam1, float fParam2) //Position: 0x4FFD / 20477
{
	bool bVar0;
	
	if (!IS_VOLUME_VALID(bParam0))
	{
		return "";
	}
	bVar0 = GET_BLIP_ON_OBJECT(bParam0);
	if (IS_BLIP_VALID(bVar0))
	{
		if (GET_BLIP_ICON(bVar0) == iParam1)
		{
			return bVar0;
		}
		REMOVE_BLIP(bVar0);
	}
	bVar0 = ADD_BLIP_FOR_OBJECT(bParam0, iParam1, fParam2, 2, 0);
	if (IS_BLIP_VALID(bVar0))
	{
		return bVar0;
	}
	return "";
}

void Function_76(int iParam0, bool bParam1) //Position: 0x504A / 20554
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

var Function_77(int iParam0) //Position: 0x50B1 / 20657
{
	if (iParam0 == 1)
	{
		return 70.0f;
	}
	if (iParam0 == 2)
	{
		return 40.0f;
	}
	if (iParam0 == 3)
	{
		return 30.0f;
	}
	if (iParam0 == 4)
	{
		return 50.0f;
	}
	if (iParam0 == 5)
	{
		return 70.0f;
	}
	if (iParam0 == 8)
	{
		return 60.0f;
	}
	if (iParam0 == 9)
	{
		return 50.0f;
	}
	if (iParam0 == 11)
	{
		return 40.0f;
	}
	if (iParam0 == 12)
	{
		return 90.0f;
	}
	if (iParam0 == 13)
	{
		return 30.0f;
	}
	if (iParam0 == 14)
	{
		return 40.0f;
	}
	if (iParam0 == 15)
	{
		return 80.0f;
	}
	if (iParam0 == 16)
	{
		return 100.0f;
	}
	if (iParam0 == 17)
	{
		return 40.0f;
	}
	if (iParam0 == 18)
	{
		return 50.0f;
	}
	if (iParam0 == 19)
	{
		return 50.0f;
	}
	if (iParam0 == 21)
	{
		return 30.0f;
	}
	if (iParam0 == 22)
	{
		return 30.0f;
	}
	if (iParam0 == 23)
	{
		return 30.0f;
	}
	if (iParam0 == 24)
	{
		return 20.0f;
	}
	return 100.0f;
}

var Function_78(int iParam0) //Position: 0x51F4 / 20980
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	
	bVar0 = false;
	iVar1 = -1.0f;
	bVar2 = StackVal;
	if (IS_VOLUME_VALID(bVar2))
	{
		bVar0 = DECOR_GET_FLOAT_VERBOSE(bVar2, "ZombieScore", &iVar1);
		if (!bVar0)
		{
			DECOR_SET_FLOAT(bVar2, "ZombieScore", 0.0f);
			return 0.0f;
		}
		return iVar1;
	}
	return 0.0f;
}

int Function_79(bool bParam0) //Position: 0x524E / 21070
{
	if (bParam0 == Global_30640[0])
	{
		return 1;
	}
	if (bParam0 == Global_30640[2])
	{
		return 2;
	}
	if (bParam0 == Global_30640[1])
	{
		return 3;
	}
	if (bParam0 == Global_30658[1])
	{
		return 4;
	}
	if (bParam0 == Global_30658[3])
	{
		return 5;
	}
	if (bParam0 == Global_30668[0])
	{
		return 8;
	}
	if (bParam0 == Global_30668[1])
	{
		return 9;
	}
	if (bParam0 == Global_30679[0])
	{
		return 11;
	}
	if (bParam0 == Global_30685[0])
	{
		return 12;
	}
	if (bParam0 == Global_30685[1])
	{
		return 13;
	}
	if (bParam0 == Global_30685[2])
	{
		return 14;
	}
	if (bParam0 == Global_30693[0])
	{
		return 15;
	}
	if (bParam0 == Global_30693[1])
	{
		return 16;
	}
	if (bParam0 == Global_30693[2])
	{
		return 17;
	}
	if (bParam0 == Global_30707[2])
	{
		return 25;
	}
	if (bParam0 == Global_30707[3])
	{
		return 18;
	}
	if (bParam0 == Global_30707[0])
	{
		return 19;
	}
	if (bParam0 == Global_30717[0])
	{
		return 21;
	}
	if (bParam0 == Global_30723[2])
	{
		return 22;
	}
	if (bParam0 == Global_30723[1])
	{
		return 23;
	}
	if (bParam0 == Global_30723[0])
	{
		return 24;
	}
	if (bParam0 == Global_30679[1])
	{
		return 26;
	}
	if (bParam0 == Global_30707[1])
	{
		return 27;
	}
	return 0;
}

bool Function_80(int iParam0) //Position: 0x53D4 / 21460
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
	return (((Function_113(uVar0, 0x1000000) || Function_113(uVar0, 0x2000000)) || Function_113(uVar0, 0x4000000)) || Function_81(iParam0));
}

var Function_81(int iParam0) //Position: 0x5447 / 21575
{
	var uVar0;
	bool bVar1;
	
	uVar0 = Global_29008[iParam0];
	bVar1 = uVar0 & 268435456 != false;
	return bVar1;
}

void Function_82(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4) //Position: 0x5464 / 21604
{
	if (!bParam4 || (bParam4 && !Function_66(1)))
	{
		Function_63(1, iParam0, iParam1, iParam2, iParam3);
	}
	if (!bParam4 || (bParam4 && !Function_66(2)))
	{
		Function_63(2, iParam0, iParam1, iParam2, iParam3);
	}
	if (!bParam4 || (bParam4 && !Function_66(3)))
	{
		Function_63(3, iParam0, iParam1, iParam2, iParam3);
	}
	if (!bParam4 || (bParam4 && !Function_66(4)))
	{
		Function_63(4, iParam0, iParam1, iParam2, iParam3);
	}
	if (!bParam4 || (bParam4 && !Function_66(5)))
	{
		Function_63(5, iParam0, iParam1, iParam2, iParam3);
	}
	if (!bParam4 || (bParam4 && !Function_66(8)))
	{
		Function_63(8, iParam0, iParam1, iParam2, iParam3);
	}
	if (!bParam4 || (bParam4 && !Function_66(9)))
	{
		Function_63(9, iParam0, iParam1, iParam2, iParam3);
	}
	if (!bParam4 || (bParam4 && !Function_66(11)))
	{
		Function_63(11, iParam0, iParam1, iParam2, iParam3);
	}
	if (!bParam4 || (bParam4 && !Function_66(12)))
	{
		Function_63(12, iParam0, iParam1, iParam2, iParam3);
	}
	if (!bParam4 || (bParam4 && !Function_66(13)))
	{
		Function_63(13, iParam0, iParam1, iParam2, iParam3);
	}
	if (!bParam4 || (bParam4 && !Function_66(14)))
	{
		Function_63(14, iParam0, iParam1, iParam2, iParam3);
	}
	if (!bParam4 || (bParam4 && !Function_66(15)))
	{
		Function_63(15, iParam0, iParam1, iParam2, iParam3);
	}
	if (!bParam4 || (bParam4 && !Function_66(16)))
	{
		Function_63(16, iParam0, iParam1, iParam2, iParam3);
	}
	if (!bParam4 || (bParam4 && !Function_66(17)))
	{
		Function_63(17, iParam0, iParam1, iParam2, iParam3);
	}
	if (!bParam4 || (bParam4 && !Function_66(18)))
	{
		Function_63(18, iParam0, iParam1, iParam2, iParam3);
	}
	if (!bParam4 || (bParam4 && !Function_66(19)))
	{
		Function_63(19, iParam0, iParam1, iParam2, iParam3);
	}
	if (!bParam4 || (bParam4 && !Function_66(21)))
	{
		Function_63(21, iParam0, iParam1, iParam2, iParam3);
	}
	if (!bParam4 || (bParam4 && !Function_66(22)))
	{
		Function_63(22, iParam0, iParam1, iParam2, iParam3);
	}
	if (!bParam4 || (bParam4 && !Function_66(23)))
	{
		Function_63(23, iParam0, iParam1, iParam2, iParam3);
	}
	if (!bParam4 || (bParam4 && !Function_66(24)))
	{
		Function_63(24, iParam0, iParam1, iParam2, iParam3);
	}
}

var Function_83() //Position: 0x56A6 / 22182
{
	int iVar0;
	
	iVar0 = MAKE_TIME_OF_DAY_EX(9900, 23, 59, 59);
	if (!Function_80(Global_30640[0]))
	{
		if (IS_EARLIER_THAN(StackVal, iVar0))
		{
			iVar0 = StackVal;
		}
	}
	if (!Function_80(Global_30640[2]))
	{
		if (IS_EARLIER_THAN(StackVal, iVar0))
		{
			iVar0 = StackVal;
		}
	}
	if (!Function_80(Global_30640[1]))
	{
		if (IS_EARLIER_THAN(StackVal, iVar0))
		{
			iVar0 = StackVal;
		}
	}
	if (!Function_80(Global_30658[1]))
	{
		if (IS_EARLIER_THAN(StackVal, iVar0))
		{
			iVar0 = StackVal;
		}
	}
	if (!Function_80(Global_30658[3]))
	{
		if (IS_EARLIER_THAN(StackVal, iVar0))
		{
			iVar0 = StackVal;
		}
	}
	if (!Function_80(Global_30668[0]))
	{
		if (IS_EARLIER_THAN(StackVal, iVar0))
		{
			iVar0 = StackVal;
		}
	}
	if (!Function_80(Global_30668[1]))
	{
		if (IS_EARLIER_THAN(StackVal, iVar0))
		{
			iVar0 = StackVal;
		}
	}
	if (!Function_80(Global_30679[0]))
	{
		if (IS_EARLIER_THAN(StackVal, iVar0))
		{
			iVar0 = StackVal;
		}
	}
	if (!Function_80(Global_30685[0]))
	{
		if (IS_EARLIER_THAN(StackVal, iVar0))
		{
			iVar0 = StackVal;
		}
	}
	if (!Function_80(Global_30685[1]))
	{
		if (IS_EARLIER_THAN(StackVal, iVar0))
		{
			iVar0 = StackVal;
		}
	}
	if (!Function_80(Global_30685[2]))
	{
		if (IS_EARLIER_THAN(StackVal, iVar0))
		{
			iVar0 = StackVal;
		}
	}
	if (!Function_80(Global_30693[0]))
	{
		if (IS_EARLIER_THAN(StackVal, iVar0))
		{
			iVar0 = StackVal;
		}
	}
	if (!Function_80(Global_30693[1]))
	{
		if (IS_EARLIER_THAN(StackVal, iVar0))
		{
			iVar0 = StackVal;
		}
	}
	if (!Function_80(Global_30693[2]))
	{
		if (IS_EARLIER_THAN(StackVal, iVar0))
		{
			iVar0 = StackVal;
		}
	}
	if (!Function_80(Global_30707[3]))
	{
		if (IS_EARLIER_THAN(StackVal, iVar0))
		{
			iVar0 = StackVal;
		}
	}
	if (!Function_80(Global_30707[0]))
	{
		if (IS_EARLIER_THAN(StackVal, iVar0))
		{
			iVar0 = StackVal;
		}
	}
	if (!Function_80(Global_30717[0]))
	{
		if (IS_EARLIER_THAN(StackVal, iVar0))
		{
			iVar0 = StackVal;
		}
	}
	if (!Function_80(Global_30723[2]))
	{
		if (IS_EARLIER_THAN(StackVal, iVar0))
		{
			iVar0 = StackVal;
		}
	}
	if (!Function_80(Global_30723[1]))
	{
		if (IS_EARLIER_THAN(StackVal, iVar0))
		{
			iVar0 = StackVal;
		}
	}
	if (!Function_80(Global_30723[0]))
	{
		if (IS_EARLIER_THAN(StackVal, iVar0))
		{
			iVar0 = StackVal;
		}
	}
	return iVar0;
}

var Function_84(int iParam0, int iParam1) //Position: 0x59C6 / 22982
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bool bVar12;
	int iVar13;
	int iVar14;
	int iVar24;
	bool bVar25;
	bool bVar26;
	bool bVar27;
	
	if (iParam1 == 1)
	{
		bVar0 = true;
		bVar1 = false;
	}
	else if (iParam1 != 3 || iParam1 != 2)
	{
		iVar2 = 9;
		bVar12 = Function_86(&iVar2, iParam0);
		bVar0 = false;
		bVar1 = ROUND((48.0f / TO_FLOAT(bVar12)));
	}
	else
	{
		iVar13 = Function_79(iParam0);
		iVar14 = 9;
		iVar24 = Function_86(&iVar14, iParam0);
		bVar25 = Function_85(iVar13);
		if (bVar25 == 0)
		{
			bVar0 = true;
			bVar1 = false;
		}
		else
		{
			bVar26 = (1.0f + ((2.0f * TO_FLOAT(bVar25)) / IntToFloat(iVar24)));
			bVar0 = FLOOR(bVar26);
			bVar1 = ROUND(((bVar26 - TO_FLOAT(bVar0)) * 24.0f));
		}
	}
	while (bVar1 > 24)
	{
		bVar1 = (bVar1 - 24);
		bVar0++;
	}
	bVar27 = MAKE_TIME_OF_DAY_EX(bVar0, bVar1, false, false);
	PRINTSTRING("Time we're adding to cur time to murder a survivor: ");
	Function_94(bVar27);
	PRINTNL();
	return bVar27;
}

int Function_85(int iParam0) //Position: 0x5AC7 / 23239
{
	var uVar0;
	int iVar1[8];
	int iVar10;
	int iVar11;
	int iVar12;
	var uVar13;
	
	uVar0 = Function_93(iParam0);
	iVar10 = 0;
	while (iVar10 < 7)
	{
		iVar1[iVar10] = 4294967295;
		iVar10++;
	}
	iVar11 = Function_86(&iVar1, uVar0);
	iVar12 = 0;
	iVar10 = 0;
	while (iVar10 < (iVar11 - 1))
	{
		if (iVar1[iVar10] != 4294967295)
		{
			switch (iParam0)
			{
				case 0x00000001:
					uVar13 = Global_6298[iVar102];
					break;
				
				case 0x00000002:
					uVar13 = Global_6351[iVar102];
					break;
				
				case 0x00000003:
					uVar13 = Global_6364[iVar102];
					break;
				
				case 0x00000004:
					uVar13 = Global_6402[iVar102];
					break;
				
				case 0x00000005:
					uVar13 = Global_6433[iVar102];
					break;
				
				case 0x00000008:
					uVar13 = Global_6563[iVar102];
					break;
				
				case 0x00000009:
					uVar13 = Global_6614[iVar102];
					break;
				
				case 0x0000000B:
					uVar13 = Global_6654[iVar102];
					break;
				
				case 0x0000000C:
					uVar13 = Global_6709[iVar102];
					break;
				
				case 0x0000000D:
					uVar13 = Global_6764[iVar102];
					break;
				
				case 0x0000000E:
					uVar13 = Global_6785[iVar102];
					break;
				
				case 0x0000000F:
					uVar13 = Global_6815[iVar102];
					break;
				
				case 0x00000010:
					uVar13 = Global_6866[iVar102];
					break;
				
				case 0x00000011:
					uVar13 = Global_6490[iVar102];
					break;
				
				case 0x00000019:
					uVar13 = Global_6933[iVar102];
					break;
				
				case 0x00000012:
					uVar13 = Global_6987[iVar102];
					break;
				
				case 0x00000013:
					uVar13 = Global_7002[iVar102];
					break;
				
				case 0x00000015:
					uVar13 = Global_7035[iVar102];
					break;
				
				case 0x00000016:
					uVar13 = Global_7113[iVar102];
					break;
				
				case 0x00000017:
					uVar13 = Global_7148[iVar102];
					break;
				
				case 0x00000018:
					uVar13 = Global_7171[iVar102];
					break;
			}
			if (!Function_113(uVar13, 4))
			{
				iVar12++;
			}
		}
		iVar10++;
	}
	return iVar12;
}

int Function_86(int iParam0, int iParam1) //Position: 0x5CB1 / 23729
{
	iParam1 = iParam1;
	if (iParam1 == Global_30640[0])
	{
		(*iParam0)[0] = 65;
		(*iParam0)[1] = 68;
		(*iParam0)[2] = 435;
		(*iParam0)[3] = 428;
		(*iParam0)[4] = 107;
		(*iParam0)[5] = 140;
		return 6;
	}
	if (iParam1 == Global_30717[0])
	{
		(*iParam0)[0] = 89;
		(*iParam0)[1] = 95;
		(*iParam0)[2] = 146;
		return 3;
	}
	if (iParam1 == Global_30668[1])
	{
		(*iParam0)[0] = 56;
		(*iParam0)[1] = 24;
		(*iParam0)[2] = 138;
		(*iParam0)[3] = 139;
		return 4;
	}
	if (iParam1 == Global_30668[0])
	{
		(*iParam0)[0] = 54;
		(*iParam0)[1] = 420;
		(*iParam0)[2] = 38;
		(*iParam0)[3] = 213;
		(*iParam0)[4] = 55;
		return 5;
	}
	if (iParam1 == Global_30693[0])
	{
		(*iParam0)[0] = 276;
		(*iParam0)[1] = 237;
		(*iParam0)[2] = 290;
		(*iParam0)[3] = 460;
		(*iParam0)[4] = 269;
		(*iParam0)[5] = 283;
		return 6;
	}
	if (iParam1 == Global_30685[0])
	{
		(*iParam0)[0] = 289;
		(*iParam0)[1] = 392;
		(*iParam0)[2] = 268;
		(*iParam0)[3] = 266;
		(*iParam0)[4] = 382;
		(*iParam0)[5] = 245;
		(*iParam0)[6] = 304;
		return 7;
	}
	if (iParam1 == Global_30640[2])
	{
		(*iParam0)[0] = 487;
		(*iParam0)[1] = 491;
		(*iParam0)[2] = 493;
		return 3;
	}
	if (iParam1 == Global_30707[3])
	{
		(*iParam0)[0] = 379;
		(*iParam0)[1] = 380;
		(*iParam0)[2] = 391;
		(*iParam0)[3] = 455;
		return 4;
	}
	if (iParam1 == Global_30685[2])
	{
		(*iParam0)[0] = 410;
		(*iParam0)[1] = 411;
		(*iParam0)[2] = 465;
		return 3;
	}
	if (iParam1 == Global_30640[1])
	{
		(*iParam0)[0] = 152;
		(*iParam0)[1] = 176;
		return 2;
	}
	if (iParam1 == Global_30658[1])
	{
		(*iParam0)[0] = 133;
		(*iParam0)[1] = 144;
		return 2;
	}
	if (iParam1 == Global_30723[2])
	{
		(*iParam0)[0] = 29;
		(*iParam0)[1] = 30;
		(*iParam0)[2] = 28;
		return 3;
	}
	if (iParam1 == Global_30685[1])
	{
		(*iParam0)[0] = 516;
		(*iParam0)[1] = 529;
		return 2;
	}
	if (iParam1 == Global_30723[1])
	{
		(*iParam0)[0] = 169;
		(*iParam0)[1] = 39;
		(*iParam0)[2] = 149;
		return 3;
	}
	if (iParam1 == Global_30693[1])
	{
		(*iParam0)[0] = 62;
		(*iParam0)[1] = 242;
		(*iParam0)[2] = 244;
		(*iParam0)[3] = 296;
		(*iParam0)[4] = 297;
		(*iParam0)[5] = 260;
		(*iParam0)[6] = 295;
		(*iParam0)[7] = 141;
		return 8;
	}
	if (iParam1 == Global_30658[3])
	{
		(*iParam0)[0] = 505;
		(*iParam0)[1] = 506;
		(*iParam0)[2] = 507;
		(*iParam0)[3] = 508;
		(*iParam0)[4] = 510;
		(*iParam0)[5] = 509;
		return 6;
	}
	if (iParam1 == Global_30658[4])
	{
		(*iParam0)[0] = 400;
		return 1;
	}
	if (iParam1 == Global_30707[2])
	{
		(*iParam0)[0] = 281;
		(*iParam0)[1] = 282;
		(*iParam0)[2] = 456;
		return 3;
	}
	if (iParam1 == Global_30707[0])
	{
		(*iParam0)[0] = 396;
		(*iParam0)[1] = 462;
		(*iParam0)[2] = 15;
		(*iParam0)[3] = 11;
		(*iParam0)[4] = 461;
		return 5;
	}
	if (iParam1 == Global_30693[2])
	{
		(*iParam0)[0] = 238;
		(*iParam0)[1] = 530;
		(*iParam0)[2] = 294;
		return 3;
	}
	if (iParam1 == Global_30723[0])
	{
		(*iParam0)[0] = 404;
		return 1;
	}
	if (iParam1 == Global_30679[0])
	{
		(*iParam0)[0] = 168;
		(*iParam0)[1] = 176;
		(*iParam0)[2] = 177;
		return 3;
	}
	return 0;
}

var Function_87(var uParam0, bool bParam1, var uParam2, int iParam3) //Position: 0x608D / 24717
{
	int iVar0;
	var uVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	char* cVar8[32];
	char* cVar16[32];
	
	iVar0 = 0;
	uVar1 = *uParam0;
	iVar2 = Function_79(bParam1);
	if (Function_113(uVar1, 0x8000000))
	{
		Function_92(iVar2, 9999, 23, 59, 59);
		return iVar0;
	}
	bVar3 = false;
	iVar5 = 4294967295;
	iVar6 = Function_85(iVar2);
	iVar6 = (iVar6 - FLOOR(Global_13172[Function_8(0, bParam1, 3)11].f_28));
	if (!Function_113(uVar1, 0x1000000))
	{
		if (Function_85(iVar2) != 0)
		{
			Function_112(&uVar1, 0x10000000);
			Function_112(&uVar1, 0x1000000);
			*uParam0 = uVar1;
			if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_VOLUME(*uParam2))))
			{
				if (GET_BLIP_ICON(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_VOLUME(*uParam2))) != 566)
				{
					iVar5 = 563;
				}
			}
			else
			{
				iVar5 = 563;
			}
			Function_73(bParam1, 0);
			Function_69(bParam1, 1);
			Function_91(bParam1);
			iVar0 = 1;
		}
		else
		{
			Function_112(&uVar1, 0x4000000);
			*uParam0 = uVar1;
			Function_73(bParam1, 0);
			Function_69(bParam1, 1);
			iVar5 = 318;
			iVar0 = 4;
		}
	}
	else if (Function_113(uVar1, 0x1000000) && !Function_113(uVar1, 0x2000000))
	{
		if (bParam1 != Global_29006)
		{
			if (iVar6 >= 0)
			{
				iVar7 = Function_8(0, bParam1, 3);
				if (Function_113(Global_13172[iVar711].f_24, 0x40000000))
				{
					Function_112(&uVar1, 0x2000000);
					*uParam0 = uVar1;
					Function_69(bParam1, 1);
					iVar5 = 562;
					iVar0 = 2;
				}
			}
			else
			{
				Function_112(&uVar1, 0x4000000);
				*uParam0 = uVar1;
				Function_69(bParam1, 1);
				iVar5 = 318;
				iVar0 = 4;
			}
			Function_73(bParam1, 0);
		}
		else
		{
			Function_92(iVar2, GET_DAY(false), GET_HOUR(false), GET_MINUTE(false), GET_SECOND(false));
			Function_63(iVar2, 0, (RAND_INT_RANGE(false, 100000) % 3), (RAND_INT_RANGE(false, 100000) % 60), 0);
			Function_114(iParam3);
			iVar0 = 0;
		}
	}
	else if (Function_113(uVar1, 0x2000000) && !Function_113(uVar1, 0x4000000))
	{
		if (bParam1 != Global_29006)
		{
			if (iVar6 >= 0)
			{
				Function_89(iVar2);
				iVar6 = (iVar6 - 1);
				Function_69(bParam1, 1);
				if (iVar6 < 0)
				{
					bVar3 = true;
					Function_112(&uVar1, 0x4000000);
					*uParam0 = uVar1;
					iVar5 = 318;
					iVar0 = 4;
				}
				else
				{
					cVar8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_88(bParam1) };
					if (bParam1 == Global_30717[0])
					{
						strcpy(&cVar8, "grtv_blackwater", 32);
					}
					else if (bParam1 == Global_30723[0])
					{
						strcpy(&cVar8, "cocv_region", 32);
					}
					PRINT_HELP_FORMAT(10.0f, "TerrCont_TownLostSurv", &cVar8, false, 0, 0, 2, 0, 0);
					if (!Function_105(Global_76846, 0x20000000))
					{
						Function_100(Global_34573, 0x20000000, 1, 0);
					}
					iVar0 = 3;
				}
			}
			else
			{
				Function_112(&uVar1, 0x4000000);
				*uParam0 = uVar1;
				Function_69(bParam1, 1);
				iVar5 = 318;
				iVar0 = 4;
			}
			Function_73(bParam1, 0);
		}
		else
		{
			Function_92(iVar2, GET_DAY(false), GET_HOUR(false), GET_MINUTE(false), GET_SECOND(false));
			Function_63(iVar2, (RAND_INT_RANGE(false, 100000) % 3) + 1, (RAND_INT_RANGE(false, 100000) % 12), (RAND_INT_RANGE(false, 100000) % 60), 0);
			Function_114(iParam3);
		}
	}
	else if (Function_113(uVar1, 0x4000000))
	{
	}
	if (iVar5 != 4294967295)
	{
		if (IS_VOLUME_VALID(*uParam2))
		{
			DECOR_SET_FLOAT(*uParam2, "ZombieScore", 0.0f);
			if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_VOLUME(*uParam2))))
			{
				REMOVE_BLIP(GET_BLIP_ON_OBJECT(GET_OBJECT_FROM_VOLUME(*uParam2)));
			}
			bVar4 = Function_75(*uParam2, iVar5, 0.0f);
			if (iVar5 != 564)
			{
				REMOVE_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(*uParam2);
			}
			cVar16 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_88(bParam1) };
			if (bParam1 == Global_30717[0])
			{
				strcpy(&cVar16, "grtv_blackwater", 32);
			}
			else if (bParam1 == Global_30723[0])
			{
				strcpy(&cVar16, "cocv_region", 32);
			}
			if (iVar5 == 563)
			{
				PRINT_HELP_FORMAT(10.0f, "TerrCont_TownUnderAttack", &cVar16, false, 0, 0, 2, 0, 0);
				SET_BLIP_NAME(bVar4, "Status_UnderAttack");
				if (!Function_105(Global_76846, 0x8000000))
				{
					Function_100(Global_34573, 0x8000000, 1, 0);
				}
			}
			else if (iVar5 == 562)
			{
				PRINT_HELP_FORMAT(10.0f, "TerrCont_TownOverrun", &cVar16, false, 0, 0, 2, 0, 0);
				SET_BLIP_NAME(bVar4, "Status_Overrun");
				if (!Function_105(Global_76846, 0x10000000))
				{
					Function_100(Global_34573, 0x10000000, 1, 0);
				}
			}
			else if (iVar5 == 318)
			{
				if (bVar3)
				{
					PRINT_HELP_FORMAT(10.0f, "TerrCont_TownLost", &cVar16, false, 0, 0, 2, 0, 0);
				}
				else
				{
					PRINT_HELP_FORMAT(10.0f, "TerrCont_TownLost_NoSurv", &cVar16, false, 0, 0, 2, 0, 0);
				}
				SET_BLIP_NAME(bVar4, "Status_Lost");
				if (!Function_105(Global_76846, 0x40000000))
				{
					Function_100(Global_34573, 0x40000000, 1, 0);
				}
			}
		}
		if (IS_BLIP_VALID(bVar4))
		{
			UNK_0xFF3DB575(bVar4, 1);
			if (iVar5 != 318)
			{
				SET_BLIP_PRIORITY(bVar4, 3);
			}
		}
	}
	return iVar0;
}

struct<32> Function_88(bool bParam0) //Position: 0x65D2 / 26066
{
	char* cVar0[32];
	
	strcpy(&cVar0, "INVALID REGION", 32);
	if (!Function_72(bParam0))
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
			memcpy(&cVar0, Global_29155[bParam010].f_20, 8);
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

void Function_89(int iParam0) //Position: 0x668F / 26255
{
	bool bVar0;
	int iVar1;
	
	bVar0 = Function_93(iParam0);
	iVar1 = Function_8(0, bVar0, 3);
	Global_13172[iVar111].f_28 = (Global_13172[iVar111].f_28 + 1.0f);
	Function_90(660, 1, 0);
	return;
}

int Function_90(int iParam0, bool bParam1, int iParam2) //Position: 0x66C2 / 26306
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
	Function_40(iParam0);
	if (iParam2 && bParam1 == 0)
	{
		Function_28(iParam0, 0, TO_FLOAT(bParam1), 1, 1, 0x40400000, 0, 0);
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

void Function_91(bool bParam0) //Position: 0x68BD / 26813
{
	if (StackVal && StackVal == 2 == 1)
	{
		Global_13172[Function_8(0, bParam0, 3)11].f_20 = 0;
	}
	return;
}

void Function_92(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x68EC / 26860
{
	switch (iParam0)
	{
		case 0x00000001:
			Global_6298[02].f_4 = MAKE_TIME_OF_DAY_EX(iParam1, iParam2, iParam3, iParam4);
			break;
		
		case 0x00000002:
			Global_6351[02].f_4 = MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4);
			break;
		
		case 0x00000003:
			Global_6364[02].f_4 = MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4);
			break;
		
		case 0x00000004:
			Global_6402[02].f_4 = MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4);
			break;
		
		case 0x00000005:
			Global_6433[02].f_4 = MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4);
			break;
		
		case 0x00000008:
			Global_6563[02].f_4 = MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4);
			break;
		
		case 0x00000009:
			Global_6614[02].f_4 = MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4);
			break;
		
		case 0x0000000B:
			Global_6654[02].f_4 = MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4);
			break;
		
		case 0x0000000C:
			Global_6709[02].f_4 = MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4);
			break;
		
		case 0x0000000D:
			Global_6764[02].f_4 = MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4);
			break;
		
		case 0x0000000E:
			Global_6785[02].f_4 = MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4);
			break;
		
		case 0x0000000F:
			Global_6815[02].f_4 = MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4);
			break;
		
		case 0x00000010:
			Global_6866[02].f_4 = MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4);
			break;
		
		case 0x00000011:
			Global_6490[02].f_4 = MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4);
			break;
		
		case 0x00000012:
			Global_6987[02].f_4 = MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4);
			break;
		
		case 0x00000013:
			Global_7002[02].f_4 = MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4);
			break;
		
		case 0x00000015:
			Global_7035[02].f_4 = MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4);
			break;
		
		case 0x00000016:
			Global_7113[02].f_4 = MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4);
			break;
		
		case 0x00000017:
			Global_7148[02].f_4 = MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4);
			break;
		
		case 0x00000018:
			Global_7171[02].f_4 = MAKE_TIME_OF_DAY_EX(bParam1, bParam2, bParam3, bParam4);
			break;
	}
}

var Function_93(int iParam0) //Position: 0x6B2B / 27435
{
	if (iParam0 == 1)
	{
		return Global_30640[0];
	}
	if (iParam0 == 2)
	{
		return Global_30640[2];
	}
	if (iParam0 == 3)
	{
		return Global_30640[1];
	}
	if (iParam0 == 4)
	{
		return Global_30658[1];
	}
	if (iParam0 == 5)
	{
		return Global_30658[3];
	}
	if (iParam0 == 8)
	{
		return Global_30668[0];
	}
	if (iParam0 == 9)
	{
		return Global_30668[1];
	}
	if (iParam0 == 11)
	{
		return Global_30679[0];
	}
	if (iParam0 == 12)
	{
		return Global_30685[0];
	}
	if (iParam0 == 13)
	{
		return Global_30685[1];
	}
	if (iParam0 == 14)
	{
		return Global_30685[2];
	}
	if (iParam0 == 15)
	{
		return Global_30693[0];
	}
	if (iParam0 == 16)
	{
		return Global_30693[1];
	}
	if (iParam0 == 17)
	{
		return Global_30693[2];
	}
	if (iParam0 == 25)
	{
		return Global_30707[2];
	}
	if (iParam0 == 18)
	{
		return Global_30707[3];
	}
	if (iParam0 == 19)
	{
		return Global_30707[0];
	}
	if (iParam0 == 21)
	{
		return Global_30717[0];
	}
	if (iParam0 == 22)
	{
		return Global_30723[2];
	}
	if (iParam0 == 23)
	{
		return Global_30723[1];
	}
	if (iParam0 == 24)
	{
		return Global_30723[0];
	}
	if (iParam0 == 26)
	{
		return Global_30679[1];
	}
	if (iParam0 == 27)
	{
		return Global_30707[1];
	}
	return 4294967295;
}

void Function_94(bool bParam0) //Position: 0x6CB1 / 27825
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

void Function_95() //Position: 0x6CF7 / 27895
{
	Function_73(Global_30640[0], !Function_80(Global_30640[0]));
	Function_73(Global_30640[2], !Function_80(Global_30640[2]));
	Function_73(Global_30640[1], !Function_80(Global_30640[1]));
	Function_73(Global_30658[1], !Function_80(Global_30658[1]));
	Function_73(Global_30658[3], !Function_80(Global_30658[3]));
	Function_73(Global_30658[2], !Function_80(Global_30658[2]));
	Function_73(Global_30658[4], 0);
	Function_73(Global_30668[0], !Function_80(Global_30668[0]));
	Function_73(Global_30668[1], !Function_80(Global_30668[1]));
	Function_73(Global_30668[2], 0);
	Function_73(Global_30679[0], !Function_80(Global_30679[0]));
	Function_73(Global_30685[0], !Function_80(Global_30685[0]));
	Function_73(Global_30685[1], !Function_80(Global_30685[1]));
	Function_73(Global_30685[2], !Function_80(Global_30685[2]));
	Function_73(Global_30693[0], !Function_80(Global_30693[0]));
	Function_73(Global_30693[1], !Function_80(Global_30693[1]));
	Function_73(Global_30693[2], !Function_80(Global_30693[2]));
	Function_73(Global_30707[2], 0);
	Function_73(Global_30707[3], !Function_80(Global_30707[3]));
	Function_73(Global_30707[0], !Function_80(Global_30707[0]));
	Function_73(Global_30717[1], 0);
	Function_73(Global_30717[0], !Function_80(Global_30717[0]));
	Function_73(Global_30723[2], !Function_80(Global_30723[2]));
	Function_73(Global_30723[1], !Function_80(Global_30723[1]));
	Function_73(Global_30723[0], !Function_80(Global_30723[0]));
	return;
}

void Function_96(bool bParam0, int iParam1, bool bParam2) //Position: 0x6EB4 / 28340
{
	var uVar0;
	bool bVar1;
	
	uVar0 = Global_29008[iParam1];
	if (bParam2)
	{
		if (bParam0)
		{
			bVar1 = Function_75(StackVal, 566, 0.0f);
			SET_BLIP_NAME(bVar1, "Status_Unknown");
			Function_7(&uVar0, 0x1000000);
			Function_7(&uVar0, 0x2000000);
			Function_7(&uVar0, 0x4000000);
			Function_7(&uVar0, 0x10000000);
			Global_29008[iParam1] = uVar0;
		}
		else
		{
			bVar1 = Function_75(StackVal, 564, 0.0f);
			SET_BLIP_NAME(bVar1, "Status_SafeZone");
			SET_BLIP_PRIORITY(bVar1, 3);
		}
	}
	else if (bParam0)
	{
		bVar1 = Function_75(StackVal, 566, 0.0f);
		SET_BLIP_NAME(bVar1, "Status_Unknown");
		Function_7(&uVar0, 0x1000000);
		Function_7(&uVar0, 0x2000000);
		Function_7(&uVar0, 0x4000000);
		Function_7(&uVar0, 0x10000000);
		Global_29008[iParam1] = uVar0;
	}
	else if (Function_113(uVar0, 0x4000000))
	{
		bVar1 = Function_75(StackVal, 318, 0.0f);
		SET_BLIP_NAME(bVar1, "Status_Lost");
	}
	else if (Function_113(uVar0, 0x2000000))
	{
		bVar1 = Function_75(StackVal, 562, 0.0f);
		SET_BLIP_NAME(bVar1, "Status_Overrun");
	}
	else if (Function_113(uVar0, 0x1000000))
	{
		bVar1 = Function_75(StackVal, 563, 0.0f);
		SET_BLIP_NAME(bVar1, "Status_UnderAttack");
	}
	else if (Function_113(uVar0, 0x10000000))
	{
		bVar1 = Function_75(StackVal, 564, 0.0f);
		SET_BLIP_NAME(bVar1, "Status_SafeTown");
	}
	if (IS_BLIP_VALID(bVar1))
	{
		UNK_0xFF3DB575(bVar1, 1);
	}
	return;
}

bool Function_97(bool bParam0, bool bParam1) //Position: 0x70A9 / 28841
{
	int iVar0;
	
	iVar0 = Function_98(bParam0);
	if (!Function_3(iVar0))
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

int Function_98(int iParam0) //Position: 0x70E6 / 28902
{
	if (!Function_99(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

bool Function_99(bool bParam0) //Position: 0x7100 / 28928
{
	if (bParam0 >= 0 || bParam0 <= 58)
	{
		return 0;
	}
	return 1;
}

void Function_100(bool bParam0, int iParam1, int iParam2, bool bParam3) //Position: 0x7116 / 28950
{
	bool bVar0;
	char* cVar1[16];
	
	if (!Function_102(bParam0, iParam1, iParam2) && !bParam3)
	{
		return;
	}
	if (!IS_OBJECT_VALID(bParam0))
	{
		return;
	}
	bVar0 = iParam1;
	strcpy(&cVar1, "tutorial", 16);
	Function_101(&cVar1, iParam2);
	if (!DECOR_CHECK_EXIST(bParam0, &cVar1))
	{
		DECOR_SET_INT(bParam0, &cVar1, bVar0);
	}
	else
	{
		DECOR_SET_INT(bParam0, &cVar1, (DECOR_GET_INT(bParam0, &cVar1) || bVar0));
	}
}

void Function_101(char* cParam0, int iParam1) //Position: 0x7182 / 29058
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

bool Function_102(bool bParam0, var uParam1, int iParam2) //Position: 0x71B9 / 29113
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
		if (Function_104(DECOR_GET_INT(bParam0, &cVar1)) > 3)
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
		switch (Function_103(uVar0))
		{
			case 0x00000002:
				if (!Function_105(Global_76847, 1577004))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

int Function_103(char* cParam0) //Position: 0x7231 / 29233
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

int Function_104(int iParam0) //Position: 0x72D2 / 29394
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

bool Function_105(var uParam0, int iParam1) //Position: 0x730F / 29455
{
	if ((uParam0 && iParam1) == iParam1)
	{
		return 1;
	}
	return 0;
}

void Function_106(int iParam0) //Position: 0x7322 / 29474
{
	char* cVar0;
	
	if (Global_3380 || Function_4(0x8000000))
	{
		return;
	}
	cVar0 = Function_107(iParam0);
	AUDIO_MUSIC_FORCE_TRACK(cVar0, "IDLE_LIGHT", 0, 4294967295, 4294967295, 3212836864, 0);
	return;
}

var Function_107(int iParam0) //Position: 0x735A / 29530
{
	int iVar0;
	
	iVar0 = "";
	if (iParam0 == Global_30679[1])
	{
		iVar0 = "FTR_ZMB_SONG_01";
	}
	else if (iParam0 == Global_30707[1])
	{
		iVar0 = "MEX_ZMB_SONG_01";
	}
	else if (iParam0 == Global_30717[1])
	{
		iVar0 = "NRT_ZMB_SONG_01";
	}
	else if (iParam0 == Global_30717[0])
	{
		iVar0 = "TC_NRT_SONG_01";
	}
	else if (iParam0 == Global_30723[0])
	{
		iVar0 = "TC_NRT_SONG_01";
	}
	else if (iParam0 == Global_30723[1])
	{
		iVar0 = "TC_NRT_SONG_02";
	}
	else if (iParam0 == Global_30723[2])
	{
		iVar0 = "TC_NRT_SONG_02";
	}
	else if (iParam0 == Global_30685[0])
	{
		iVar0 = "TC_MEX_SONG_01";
	}
	else if (iParam0 == Global_30685[1])
	{
		iVar0 = "TC_MEX_SONG_02";
	}
	else if (iParam0 == Global_30685[2])
	{
		iVar0 = "TC_MEX_SONG_01";
	}
	else if (iParam0 == Global_30693[0])
	{
		iVar0 = "TC_MEX_SONG_02";
	}
	else if (iParam0 == Global_30693[1])
	{
		iVar0 = "TC_MEX_SONG_01";
	}
	else if (iParam0 == Global_30693[2])
	{
		iVar0 = "TC_MEX_SONG_02";
	}
	else if (iParam0 == Global_30707[2])
	{
		iVar0 = "TC_MEX_SONG_01";
	}
	else if (iParam0 == Global_30707[3])
	{
		iVar0 = "TC_MEX_SONG_01";
	}
	else if (iParam0 == Global_30707[0])
	{
		iVar0 = "TC_MEX_SONG_02";
	}
	else if (iParam0 == Global_30640[0])
	{
		iVar0 = "TC_FTR_SONG_01";
	}
	else if (iParam0 == Global_30640[2])
	{
		iVar0 = "TC_FTR_SONG_03";
	}
	else if (iParam0 == Global_30640[1])
	{
		iVar0 = "TC_FTR_SONG_04";
	}
	else if (iParam0 == Global_30658[3])
	{
		iVar0 = "TC_FTR_SONG_01";
	}
	else if (iParam0 == Global_30658[1])
	{
		iVar0 = "TC_FTR_SONG_02";
	}
	else if (iParam0 == Global_30668[0])
	{
		iVar0 = "TC_FTR_SONG_02";
	}
	else if (iParam0 == Global_30668[1])
	{
		iVar0 = "TC_FTR_SONG_03";
	}
	else if (iParam0 == Global_30679[0])
	{
		iVar0 = "TC_FTR_SONG_04";
	}
	else
	{
		iVar0 = "";
	}
	return iVar0;
}

void Function_108(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0x7687 / 30343
{
	struct<4> Var0;
	int iVar4;
	
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_109(Global_6269) };
		}
		PRINT_HELP_B(bParam0, iParam1, iParam2, iParam3, iParam4, iParam5, &Var0, iParam6);
	}
	else
	{
		iVar4 = "";
		PRINT_HELP_B(bParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iVar4, iParam6);
	}
}

struct<16> Function_109(bool bParam0) //Position: 0x7702 / 30466
{
	char* cVar0[16];
	
	if (!Function_58())
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

void Function_110(int iParam0) //Position: 0x7741 / 30529
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = DECOR_GET_INT(Global_34573, "InitDistrict");
	DECOR_REMOVE(Global_34573, "InitDistrict");
	if (bVar0 == Global_30628[0])
	{
		Function_108("TerrCont_FoundNewDistrict", 0x41200000, 1, 0, 2, 1, 0);
		bVar1 = Global_29008[Global_30640[0]] & 268435456 != false;
		Function_96(bVar1, Global_30640[0], 0);
		bVar1 = Global_29008[Global_30640[2]] & 268435456 != false;
		Function_96(bVar1, Global_30640[2], 0);
		bVar1 = Global_29008[Global_30640[1]] & 268435456 != false;
		Function_96(bVar1, Global_30640[1], 0);
		Function_112(&Global_13172[iParam011] + 20, 8388608);
	}
	else if (bVar0 == Global_30628[2])
	{
		Function_108("TerrCont_FoundNewDistrict", 0x41200000, 1, 0, 2, 1, 0);
		bVar1 = Global_29008[Global_30668[0]] & 268435456 != false;
		Function_96(bVar1, Global_30668[0], 0);
		bVar1 = Global_29008[Global_30668[1]] & 268435456 != false;
		Function_96(bVar1, Global_30668[1], 0);
		Function_112(&Global_13172[iParam011] + 20, 4194304);
	}
	else if (bVar0 == Global_30628[1])
	{
		Function_108("TerrCont_FoundNewDistrict", 0x41200000, 1, 0, 2, 1, 0);
		bVar1 = Global_29008[Global_30658[1]] & 268435456 != false;
		Function_96(bVar1, Global_30658[1], 0);
		bVar1 = Global_29008[Global_30658[3]] & 268435456 != false;
		Function_96(bVar1, Global_30658[3], 0);
		Function_112(&Global_13172[iParam011] + 20, 0x1000000);
	}
	else if (bVar0 == Global_30628[3])
	{
		Function_108("TerrCont_FoundNewDistrict", 0x41200000, 1, 0, 2, 1, 0);
		bVar1 = Global_29008[Global_30679[0]] & 268435456 != false;
		Function_96(bVar1, Global_30679[0], 0);
		bVar1 = Global_29008[Global_30679[1]] & 268435456 != false;
		Function_96(bVar1, Global_30679[1], 1);
		Function_112(&Global_13172[iParam011] + 20, 0x2000000);
	}
	else if (bVar0 == Global_30633[2])
	{
		Function_108("TerrCont_FoundNewDistrict", 0x41200000, 1, 0, 2, 1, 0);
		bVar1 = Global_29008[Global_30693[0]] & 268435456 != false;
		Function_96(bVar1, Global_30693[0], 0);
		bVar1 = Global_29008[Global_30693[1]] & 268435456 != false;
		Function_96(bVar1, Global_30693[1], 0);
		bVar1 = Global_29008[Global_30693[2]] & 268435456 != false;
		Function_96(bVar1, Global_30693[2], 0);
		Function_112(&Global_13172[iParam011] + 20, 0x40000000);
	}
	else if (bVar0 == Global_30633[0])
	{
		Function_108("TerrCont_FoundNewDistrict", 0x41200000, 1, 0, 2, 1, 0);
		if (Function_97(3, 0))
		{
			bVar1 = Global_29008[Global_30685[0]] & 268435456 != false;
			Function_96(bVar1, Global_30685[0], 0);
		}
		bVar1 = Global_29008[Global_30685[1]] & 268435456 != false;
		Function_96(bVar1, Global_30685[1], 0);
		bVar1 = Global_29008[Global_30685[2]] & 268435456 != false;
		Function_96(bVar1, Global_30685[2], 0);
		Function_112(&Global_13172[iParam011] + 20, 0x10000000);
	}
	else if (bVar0 == Global_30633[1])
	{
		Function_108("TerrCont_FoundNewDistrict", 0x41200000, 1, 0, 2, 1, 0);
		bVar1 = Global_29008[Global_30707[2]] & 268435456 != false;
		Function_96(bVar1, Global_30707[2], 1);
		bVar1 = Global_29008[Global_30707[3]] & 268435456 != false;
		Function_96(bVar1, Global_30707[3], 0);
		bVar1 = Global_29008[Global_30707[0]] & 268435456 != false;
		Function_96(bVar1, Global_30707[0], 0);
		bVar1 = Global_29008[Global_30707[1]] & 268435456 != false;
		Function_96(bVar1, Global_30707[1], 1);
		Function_112(&Global_13172[iParam011] + 20, 0x20000000);
	}
	else if (bVar0 == Global_30637[0])
	{
		Function_112(&Global_13172[iParam011] + 20, 0x8000000);
	}
	else if (bVar0 == Global_30637[1])
	{
		Function_108("TerrCont_FoundNewDistrict", 0x41200000, 1, 0, 2, 1, 0);
		bVar1 = Global_29008[Global_30723[2]] & 268435456 != false;
		Function_96(bVar1, Global_30723[2], 0);
		bVar1 = Global_29008[Global_30723[1]] & 268435456 != false;
		Function_96(bVar1, Global_30723[1], 0);
		bVar1 = Global_29008[Global_30723[0]] & 268435456 != false;
		Function_96(bVar1, Global_30723[0], 0);
		Function_112(&Global_13172[iParam011] + 20, 0x4000000);
	}
	return;
}

void Function_111(int iParam0) //Position: 0x7CAC / 31916
{
	bool bVar0;
	
	if (Function_113(Global_13172[iParam011].f_20, 0x8000000))
	{
		bVar0 = Global_29008[Global_30717[0]] & 268435456 != false;
		Function_96(bVar0, Global_30717[0], 0);
	}
	if (Function_113(Global_13172[iParam011].f_20, 0x4000000))
	{
		bVar0 = Global_29008[Global_30723[2]] & 268435456 != false;
		Function_96(bVar0, Global_30723[2], 0);
		bVar0 = Global_29008[Global_30723[1]] & 268435456 != false;
		Function_96(bVar0, Global_30723[1], 0);
		bVar0 = Global_29008[Global_30723[0]] & 268435456 != false;
		Function_96(bVar0, Global_30723[0], 0);
	}
	if (Function_113(Global_13172[iParam011].f_20, 8388608))
	{
		bVar0 = Global_29008[Global_30640[0]] & 268435456 != false;
		Function_96(bVar0, Global_30640[0], 0);
		bVar0 = Global_29008[Global_30640[2]] & 268435456 != false;
		Function_96(bVar0, Global_30640[2], 0);
		bVar0 = Global_29008[Global_30640[1]] & 268435456 != false;
		Function_96(bVar0, Global_30640[1], 0);
	}
	if (Function_113(Global_13172[iParam011].f_20, 0x1000000))
	{
		bVar0 = Global_29008[Global_30658[1]] & 268435456 != false;
		Function_96(bVar0, Global_30658[1], 0);
		bVar0 = Global_29008[Global_30658[3]] & 268435456 != false;
		Function_96(bVar0, Global_30658[3], 0);
	}
	if (Function_113(Global_13172[iParam011].f_20, 4194304))
	{
		bVar0 = Global_29008[Global_30668[0]] & 268435456 != false;
		Function_96(bVar0, Global_30668[0], 0);
		bVar0 = Global_29008[Global_30668[1]] & 268435456 != false;
		Function_96(bVar0, Global_30668[1], 0);
	}
	if (Function_113(Global_13172[iParam011].f_20, 0x2000000))
	{
		bVar0 = Global_29008[Global_30679[0]] & 268435456 != false;
		Function_96(bVar0, Global_30679[0], 0);
		bVar0 = Global_29008[Global_30679[1]] & 268435456 != false;
		Function_96(bVar0, Global_30679[1], 1);
	}
	if (Function_113(Global_13172[iParam011].f_20, 0x10000000))
	{
		if (Function_97(3, 0))
		{
			bVar0 = Global_29008[Global_30685[0]] & 268435456 != false;
			Function_96(bVar0, Global_30685[0], 0);
		}
		bVar0 = Global_29008[Global_30685[1]] & 268435456 != false;
		Function_96(bVar0, Global_30685[1], 0);
		bVar0 = Global_29008[Global_30685[2]] & 268435456 != false;
		Function_96(bVar0, Global_30685[2], 0);
	}
	if (Function_113(Global_13172[iParam011].f_20, 0x40000000))
	{
		bVar0 = Global_29008[Global_30693[0]] & 268435456 != false;
		Function_96(bVar0, Global_30693[0], 0);
		bVar0 = Global_29008[Global_30693[1]] & 268435456 != false;
		Function_96(bVar0, Global_30693[1], 0);
		bVar0 = Global_29008[Global_30693[2]] & 268435456 != false;
		Function_96(bVar0, Global_30693[2], 0);
	}
	if (Function_113(Global_13172[iParam011].f_20, 0x20000000))
	{
		bVar0 = Global_29008[Global_30707[2]] & 268435456 != false;
		Function_96(bVar0, Global_30707[2], 1);
		bVar0 = Global_29008[Global_30707[3]] & 268435456 != false;
		Function_96(bVar0, Global_30707[3], 0);
		bVar0 = Global_29008[Global_30707[0]] & 268435456 != false;
		Function_96(bVar0, Global_30707[0], 0);
		bVar0 = Global_29008[Global_30707[1]] & 268435456 != false;
		Function_96(bVar0, Global_30707[1], 1);
	}
	return;
}

void Function_112(int iParam0, bool bParam1) //Position: 0x8064 / 32868
{
	*iParam0 = (*iParam0 || bParam1);
	return;
}

bool Function_113(bool bParam0, bool bParam1) //Position: 0x8073 / 32883
{
	return (bParam0 && bParam1) == 0;
}

void Function_114(int iParam0) //Position: 0x8080 / 32896
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 4294967295)
	{
		iParam0 = Function_8(111, 111, 5);
	}
	iVar0 = 4294967295;
	iVar1 = MAKE_TIME_OF_DAY_EX(9900, 23, 59, 59);
	if (IS_EARLIER_THAN(StackVal, iVar1) && !Function_67(1))
	{
		iVar0 = 1;
		iVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, iVar1) && !Function_67(2))
	{
		iVar0 = 2;
		iVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, iVar1) && !Function_67(3))
	{
		iVar0 = 3;
		iVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, iVar1) && !Function_67(4))
	{
		iVar0 = 4;
		iVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, iVar1) && !Function_67(5))
	{
		iVar0 = 5;
		iVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, iVar1) && !Function_67(8))
	{
		iVar0 = 8;
		iVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, iVar1) && !Function_67(9))
	{
		iVar0 = 9;
		iVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, iVar1) && !Function_67(11))
	{
		iVar0 = 11;
		iVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, iVar1) && !Function_67(12))
	{
		iVar0 = 12;
		iVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, iVar1) && !Function_67(13))
	{
		iVar0 = 13;
		iVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, iVar1) && !Function_67(14))
	{
		iVar0 = 14;
		iVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, iVar1) && !Function_67(15))
	{
		iVar0 = 15;
		iVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, iVar1) && !Function_67(16))
	{
		iVar0 = 16;
		iVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, iVar1) && !Function_67(17))
	{
		iVar0 = 17;
		iVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, iVar1) && !Function_67(18))
	{
		iVar0 = 18;
		iVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, iVar1) && !Function_67(19))
	{
		iVar0 = 19;
		iVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, iVar1) && !Function_67(21))
	{
		iVar0 = 21;
		iVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, iVar1) && !Function_67(22))
	{
		iVar0 = 22;
		iVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, iVar1) && !Function_67(23))
	{
		iVar0 = 23;
		iVar1 = StackVal;
	}
	if (IS_EARLIER_THAN(StackVal, iVar1) && !Function_67(24))
	{
		iVar0 = 24;
		iVar1 = StackVal;
	}
	Global_13172[iParam011].f_16 = iVar0;
	Global_13172[iParam011].f_24 = iVar1;
	return;
}

bool Function_115(int iParam0) //Position: 0x8394 / 33684
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return 0;
	}
	return Global_25986[iParam0];
}

void Function_116() //Position: 0x83B0 / 33712
{
	int iVar0;
	
	Global_7032[02].f_4 = MAKE_TIME_OF_DAY_EX(9999, 9, 9, 9);
	Global_26316[1] = 4294967295;
	iVar0 = Function_8(111, 111, 5);
	Global_13172[iVar011].f_28 = 0.0f;
	Function_7(&Global_13172[iVar011] + 20, 8);
	Function_119(1);
	DECOR_SET_BOOL(Global_34573, "NeedWeatherInit", true);
	DECOR_SET_INT(Global_34573, "TerrCont_NextDayMod", GET_DAY(false));
	SET_FACTIONS_STATUS_TWO_WAY(4, 32, 4);
	SET_FACTIONS_STATUS_TWO_WAY(8, 32, 4);
	Function_7(&Global_13172[iVar011] + 20, 2);
	if (Function_118() || !Global_3365)
	{
		Function_117(11, 1);
	}
	else
	{
		Function_117(11, 0);
	}
	Function_114(iVar0);
	Global_26316.f_176 = 0;
	return;
}

void Function_117(int iParam0, int iParam1) //Position: 0x846F / 33903
{
	if (iParam0 > 0 && iParam0 <= 16)
	{
		return;
	}
	Global_25986[iParam0] = iParam1;
	return;
}

bool Function_118() //Position: 0x848C / 33932
{
	return Function_113(Global_13172[Function_8(111, 111, 5)11].f_20, 4);
}

void Function_119(bool bParam0) //Position: 0x84A4 / 33956
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Global_16537 - 1))
	{
		if (IS_DOOR_VALID(Global_16537[iVar021].f_68))
		{
			if (bParam0)
			{
				Function_121(Global_16537[iVar021].f_68, 0);
			}
			else
			{
				Function_120(Global_16537[iVar021].f_68, 0);
			}
		}
		if (IS_DOOR_VALID(Global_16537[iVar021].f_72))
		{
			if (bParam0)
			{
				Function_121(Global_16537[iVar021].f_72, 0);
			}
			else
			{
				Function_120(Global_16537[iVar021].f_72, 0);
			}
		}
		if (IS_OBJECT_VALID(Global_16537[iVar021].f_80))
		{
			GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(Global_16537[iVar021].f_80), false);
		}
		Global_16537[iVar021].f_40 = 6;
		if (IS_OBJECT_VALID(Global_16537[iVar021].f_80))
		{
			DECOR_SET_BOOL(Global_16537[iVar021].f_80, "SavingAtBedAllowed", false);
		}
		iVar0++;
	}
	return;
}

void Function_120(bool bParam0, bool bParam1) //Position: 0x857D / 34173
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

void Function_121(bool bParam0, bool bParam1) //Position: 0x85D1 / 34257
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

int Function_122() //Position: 0x8622 / 34338
{
	return 0;
}

void Function_123() //Position: 0x8629 / 34345
{
	return;
}

void Function_124(int iParam0) //Position: 0x862F / 34351
{
	strcpy(iParam0 + 12, "ITEMEFFECTS", 16);
	*iParam0 = 40487;
	iParam0->f_4 = 34426;
	iParam0->f_8 = 34405;
	iParam0->f_28 = 1;
	return;
}

void Function_125() //Position: 0x8665 / 34405
{
	if (IS_OBJECT_VALID(bLocal_591))
	{
		DESTROY_OBJECT(bLocal_591);
	}
	return;
}

int Function_126() //Position: 0x867A / 34426
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = 0;
	iVar2 = 0;
	bVar0 = false;
	while (bVar0 <= vLocal_548)
	{
		switch (bVar0)
		{
			case 0x00000000:
				if (vLocal_548[bVar03].z)
				{
					if (vLocal_548[bVar03].y + vLocal_548[bVar03]) > GET_CURRENT_GAME_TIME()
					{
						SET_INFINITE_DEADEYE(0, 0);
						SET_DEADEYE_BLINK(0.0f);
						DECOR_REMOVE(Global_34573, "nmoonshine");
						vLocal_548[bVar03].f_8 = 0;
					}
				}
				else if (DECOR_CHECK_EXIST(Global_34573, "nmoonshine"))
				{
					vLocal_548[bVar03] = DECOR_GET_FLOAT(Global_34573, "nmoonshine");
					vLocal_548[bVar03].f_4 = GET_CURRENT_GAME_TIME();
					vLocal_548[bVar03].f_8 = 1;
					SET_INFINITE_DEADEYE(0, 1);
					SET_DEADEYE_BLINK(10.0f);
				}
				break;
			
			case 0x00000001:
				if (vLocal_548[bVar03].z)
				{
					if (vLocal_548[bVar03].y + vLocal_548[bVar03]) > GET_CURRENT_GAME_TIME()
					{
						if (IS_ACTOR_VALID(bLocal_590) && DECOR_CHECK_EXIST(bLocal_590, "horse_pills_effect"))
						{
							if (HORSE_UNLOCK_FRESHNESS(bLocal_590))
							{
								DECOR_REMOVE(bLocal_590, "horse_pills_effect");
								vLocal_548[bVar03].f_8 = 0;
							}
						}
						else
						{
							vLocal_548[bVar03].f_8 = 0;
						}
					}
				}
				else if (DECOR_CHECK_EXIST(Global_34573, "horse_pills"))
				{
					vLocal_548[bVar03] = DECOR_GET_FLOAT(Global_34573, "horse_pills");
					vLocal_548[bVar03].f_4 = GET_CURRENT_GAME_TIME();
					vLocal_548[bVar03].f_8 = 1;
					bLocal_590 = GET_MOUNT(Global_34573);
					if (IS_ACTOR_VALID(bLocal_590))
					{
						HORSE_SET_CURR_FRESHNESS(bLocal_590, 1.0f);
						HORSE_LOCK_FRESHNESS(bLocal_590);
						DECOR_SET_BOOL(bLocal_590, "horse_pills_effect", true);
					}
					DECOR_REMOVE(Global_34573, "horse_pills");
				}
				break;
			
			case 0x00000002:
				if (vLocal_548[bVar03].z)
				{
					if (DECOR_CHECK_EXIST(Global_34573, "CreateDecal"))
					{
						Function_154();
						if (!DECOR_CHECK_EXIST(Global_34573, "fakeBait"))
						{
							bLocal_573 = ADD_BLIP_FOR_COORD(&vLocal_574, 335, 0f, 2, 0);
						}
						DECOR_REMOVE(Global_34573, "CreateDecal");
					}
					if (Function_152(StackVal, StackVal, Global_34573, vLocal_574) > 5.0f && !HUD_IS_SHOWING_HELP_TEXT())
					{
						Function_108("item_bait_move", 10.0f, 1, 0, 0, 0, 0);
					}
					if (!iLocal_581)
					{
						if (Function_149(StackVal, StackVal, vLocal_582))
						{
						}
						else
						{
							if (IS_BLIP_VALID(bLocal_573))
							{
								REMOVE_BLIP(bLocal_573);
							}
							DECOR_REMOVE(Global_34573, "bait");
							DECOR_REMOVE(Global_34573, "baitSafePos");
							vLocal_548[bVar03].f_8 = 0;
						}
					}
					else if (iLocal_581)
					{
						iVar3 = 1;
						iVar2 = 0;
						while (iVar2 <= bLocal_564)
						{
							if (IS_ACTOR_VALID(bLocal_564[iVar2]))
							{
								iVar3 = 0;
								if (Function_152(StackVal, StackVal, bLocal_564[iVar1], vLocal_574) > 4.0f)
								{
									TASK_PRIORITY_SET(bLocal_564[iVar2], 2);
									SET_ACTOR_UPDATE_PRIORITY(bLocal_564[iVar2], false);
								}
							}
							iVar2++;
						}
					}
					if ((vLocal_548[bVar03].y + vLocal_548[bVar03]) > GET_CURRENT_GAME_TIME() || iVar3)
					{
						if (IS_BLIP_VALID(bLocal_573))
						{
							REMOVE_BLIP(bLocal_573);
						}
						iVar1 = 0;
						while (iVar1 <= bLocal_564)
						{
							if (IS_OBJECT_VALID(bLocal_564[iVar1]))
							{
								RELEASE_ACTOR_AS_AMBIENT(bLocal_564[iVar1]);
							}
							iVar1++;
						}
						iLocal_581 = 0;
						DECOR_REMOVE(Global_34573, "bait");
						DECOR_REMOVE(Global_34573, "baitSafePos");
						vLocal_548[bVar03].f_8 = 0;
					}
					else if (StackVal && Function_152(StackVal, !Function_49(StackVal, StackVal, vLocal_574), Global_34573, vLocal_574) < 200.0f)
					{
						if (IS_BLIP_VALID(bLocal_573))
						{
							REMOVE_BLIP(bLocal_573);
						}
						iVar1 = 0;
						while (iVar1 <= bLocal_564)
						{
							if (IS_OBJECT_VALID(bLocal_564[iVar1]))
							{
								RELEASE_ACTOR_AS_AMBIENT(bLocal_564[iVar1]);
							}
							iVar1++;
						}
						iLocal_581 = 0;
						DECOR_REMOVE(Global_34573, "bait");
						DECOR_REMOVE(Global_34573, "baitSafePos");
						vLocal_548[bVar03].f_8 = 0;
					}
				}
				else if (DECOR_CHECK_EXIST(Global_34573, "bait"))
				{
					if (DECOR_CHECK_EXIST(Global_34573, "CreateDecal"))
					{
						Function_154();
						bLocal_573 = ADD_BLIP_FOR_COORD(&vLocal_574, 335, 0f, 2, 0);
						DECOR_REMOVE(Global_34573, "CreateDecal");
					}
					if (iLocal_572 == 0)
					{
						Function_131(bVar0);
					}
					if (iLocal_572 <= 5)
					{
						if (Function_130(&vLocal_582))
						{
							if (Function_129(StackVal, StackVal, vLocal_582))
							{
								bLocal_578 = true;
							}
						}
					}
					else if (iLocal_572 <= 10)
					{
						if (Function_128(&vLocal_582))
						{
							if (Function_129(StackVal, StackVal, vLocal_582))
							{
								bLocal_578 = true;
							}
						}
					}
					iLocal_572++;
					if (bLocal_578)
					{
						if (IS_OBJECT_VALID(bLocal_580))
						{
							if (NAV_QUERY_IS_DONE(bLocal_580))
							{
								NAV_QUERY_RECEIVE_CAN_PATH_TO_POINT(bLocal_580, &bLocal_579);
								NAV_QUERY_STOP(bLocal_580);
								DESTROY_OBJECT(bLocal_580);
							}
							else
							{
								break;
							}
						}
						if (bLocal_579)
						{
							vLocal_582 = { StackVal, StackVal, vLocal_585 };
						}
						else
						{
							bLocal_580 = CREATE_NAV_QUERY(Global_30616, "item_bait_navquery");
							vLocal_585 = { StackVal, StackVal, vLocal_582 };
							NAV_QUERY_START_CAN_PATH_TO_POINT(bLocal_580, vLocal_585, vLocal_574, bLocal_588);
						}
					}
					if (iLocal_572 < 10 && !bLocal_579)
					{
						DECOR_GET_VECTOR(Global_34573, "baitSafePos", &vLocal_582);
						bLocal_579 = true;
					}
					if (bLocal_579)
					{
						iLocal_572 = 0;
						if (IS_OBJECT_VALID(bLocal_580))
						{
							NAV_QUERY_STOP(bLocal_580);
							DESTROY_OBJECT(bLocal_580);
						}
						AMBIENT_RESET_USED_CELLS();
						vLocal_548[bVar03] = DECOR_GET_FLOAT(Global_34573, "bait");
						vLocal_548[bVar03].f_4 = GET_CURRENT_GAME_TIME();
						vLocal_548[bVar03].f_8 = 1;
					}
				}
				break;
			
			case 0x00000003:
				if (vLocal_548[bVar03].z)
				{
					if (vLocal_548[bVar03].y + vLocal_548[bVar03]) > GET_CURRENT_GAME_TIME()
					{
						DECOR_REMOVE(Global_34573, "survivalist");
						Function_108("item_herbs_end", 10.0f, 1, 0, 0, 0, 0);
						vLocal_548[bVar03].f_8 = 0;
					}
				}
				else if (DECOR_CHECK_EXIST(Global_34573, "survivalist"))
				{
					vLocal_548[bVar03] = DECOR_GET_FLOAT(Global_34573, "survivalist");
					vLocal_548[bVar03].f_4 = GET_CURRENT_GAME_TIME();
					vLocal_548[bVar03].f_8 = 1;
				}
				break;
			
			case 0x00000004:
				if (vLocal_548[bVar03].z)
				{
					if (vLocal_548[bVar03].y + vLocal_548[bVar03]) > GET_CURRENT_GAME_TIME()
					{
						DECOR_REMOVE(Global_34573, "phosphorous");
						Function_108("phosphorous_end", 10.0f, 1, 0, 0, 0, 0);
						vLocal_548[bVar03].f_8 = 0;
						SET_PHOSPHORUS_AMMO_ACTIVE(0);
					}
				}
				else if (DECOR_CHECK_EXIST(Global_34573, "phosphorous"))
				{
					vLocal_548[bVar03] = DECOR_GET_FLOAT(Global_34573, "phosphorous");
					vLocal_548[bVar03].f_4 = GET_CURRENT_GAME_TIME();
					vLocal_548[bVar03].f_8 = 1;
					if (Function_127(19) || Function_127(22))
					{
						vLocal_548[bVar03] = (vLocal_548[bVar03] * 2.0f);
					}
					Function_108("phosphorous_start", 10.0f, 1, 0, 0, 0, 0);
					SET_PHOSPHORUS_AMMO_ACTIVE(1);
				}
				break;
			
			default:
				if (vLocal_548[bVar03].z)
				{
					LOG_ERROR("Melissa needs to build an item effect for this!");
					if (vLocal_548[bVar03].y + vLocal_548[bVar03]) > GET_CURRENT_GAME_TIME()
					{
						vLocal_548[bVar03].f_8 = 1;
					}
				}
				break;
		}
		bVar0++;
	}
	return 0;
}

int Function_127(int iParam0) //Position: 0x8E8F / 36495
{
	if (Global_28178 == iParam0)
	{
		return 1;
	}
	return 0;
}

bool Function_128(int iParam0) //Position: 0x8EA0 / 36512
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

bool Function_129(vector3 vParam0) //Position: 0x8F0C / 36620
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

bool Function_130(int iParam0) //Position: 0x8F89 / 36745
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

void Function_131(int iParam0) //Position: 0x8FF9 / 36857
{
	iLocal_581 = 0;
	bLocal_578 = false;
	bLocal_579 = false;
	vLocal_582 = { 0.0f, 0.0f, 0.0f };
	vLocal_585 = { 0.0f, 0.0f, 0.0f };
	vLocal_574 = { StackVal, StackVal, Global_34574 };
	fLocal_577 = Function_148(Global_34573);
	Function_137(&bLocal_588);
	if (IS_OBJECT_VALID(bLocal_580))
	{
		NAV_QUERY_STOP(bLocal_580);
		DESTROY_OBJECT(bLocal_580);
	}
	if (IS_BLIP_VALID(bLocal_573))
	{
		REMOVE_BLIP(bLocal_573);
	}
	if (!Function_133(Global_34573, 0, 0))
	{
		if (IS_OBJECT_VALID(bLocal_591))
		{
			DESTROY_OBJECT(bLocal_591);
		}
		if (IS_LAYOUTREF_VALID(Global_30616))
		{
			bLocal_591 = CREATE_GRINGO_IN_LAYOUT(Global_30616, "nitem_bait", "nitem_bait", vLocal_574, 0.0f, fLocal_577, 0.0f);
			SNAP_ACTOR_TO_GRINGO(Global_34573, bLocal_591, "UseCase1", 0, 0, 0);
			TASK_USE_GRINGO(Global_34573, GET_GRINGO_FROM_OBJECT(bLocal_591), "UseCase1", 1, 1);
			if (DECOR_CHECK_EXIST(Global_34573, "CreateDecal"))
			{
				Function_154();
				bLocal_573 = ADD_BLIP_FOR_COORD(&vLocal_574, 335, 0f, 2, 0);
				DECOR_REMOVE(Global_34573, "CreateDecal");
			}
		}
		else
		{
			Function_154();
			bLocal_573 = ADD_BLIP_FOR_COORD(&vLocal_574, 335, 0f, 2, 0);
		}
		if (!Function_105(Global_76849, 32))
		{
			HUD_CLEAR_HELP();
			Function_100(Global_34573, 32, 4, 0);
		}
	}
	else
	{
		Function_108("item_bait_disabled", 0x41200000, 1, 0, 2, 1, 0);
		DECOR_REMOVE(Global_34573, "bait");
		DECOR_REMOVE(Global_34573, "baitSafePos");
		ADD_ITEM(Function_132(6), Global_34573, 0);
		vLocal_548[iParam03].f_8 = 0;
	}
	return;
}

var Function_132(bool bParam0) //Position: 0x91A3 / 37283
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

bool Function_133(bool bParam0, bool bParam1, bool bParam2) //Position: 0x9294 / 37524
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
	if (Function_136(bParam0))
	{
		return 1;
	}
	if (Function_135(bParam0))
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
	if (Function_134())
	{
		return 1;
	}
	return 0;
}

bool Function_134() //Position: 0x934A / 37706
{
	return ((Global_34578 != 0 || Global_34578 != 2) || Global_34578 != 3);
}

bool Function_135(bool bParam0) //Position: 0x9361 / 37729
{
	return IS_ACTOR_IN_HOGTIE(bParam0);
}

bool Function_136(bool bParam0) //Position: 0x936C / 37740
{
	return IS_ACTOR_VALID(GET_LASSO_USER(bParam0));
}

void Function_137(int iParam0) //Position: 0x937A / 37754
{
	if (Function_147(Global_30750[10], 0, 4294967295, 0))
	{
		if (Function_146(Global_30750[10], 0, 0, 0) == 4294967295 && Function_146(Global_30750[10], 0, 0, 0) == 0)
		{
			if (DECOR_CHECK_EXIST(Global_34573, "fakeBait"))
			{
				*iParam0 = DECOR_GET_INT(Global_34573, "fakeBait");
			}
			else
			{
				*iParam0 = Function_139(Global_30750[10], 0, 0, 4294967295, 0);
			}
		}
		else
		{
			Function_108("item_bait_no_animals", 0x41200000, 1, 0, 2, 1, 0);
			return;
		}
	}
	Function_108("item_bait_no_animals", 0x41200000, 1, 0, 2, 1, 0);
	return;
	if (Function_138(*iParam0))
	{
		bLocal_589 = GET_ACTOR_ENUM_STRING_FROM_ENUM(*iParam0);
		if ((STRING_CONTAINS_STRING(bLocal_589, "Cougar") || STRING_CONTAINS_STRING(bLocal_589, "Bobcat")) || STRING_CONTAINS_STRING(bLocal_589, "Bear"))
		{
			iLocal_571 = 1;
			if (DECOR_CHECK_EXIST(Global_34573, "fakeBait"))
			{
				if (STRING_CONTAINS_STRING(bLocal_589, "Bobcat"))
				{
					iLocal_571 = 3;
				}
			}
		}
		else if (STRING_CONTAINS_STRING(bLocal_589, "Wolf") || STRING_CONTAINS_STRING(bLocal_589, "Coyote"))
		{
			iLocal_571 = RAND_INT_RANGE(2, 4);
			if (DECOR_CHECK_EXIST(Global_34573, "fakeBait"))
			{
				iLocal_571 = 4;
			}
		}
		else if (STRING_CONTAINS_STRING(bLocal_589, "Buck") || STRING_CONTAINS_STRING(bLocal_589, "Fox"))
		{
			iLocal_571 = RAND_INT_RANGE(true, 2);
			if (DECOR_CHECK_EXIST(Global_34573, "fakeBait"))
			{
				iLocal_571 = 3;
			}
		}
		else if (STRING_CONTAINS_STRING(bLocal_589, "Deer"))
		{
			iLocal_571 = RAND_INT_RANGE(3, 5);
		}
		else if (STRING_CONTAINS_STRING(bLocal_589, "Boar"))
		{
			iLocal_571 = RAND_INT_RANGE(true, 3);
			if (DECOR_CHECK_EXIST(Global_34573, "fakeBait"))
			{
				iLocal_571 = 2;
			}
		}
		else
		{
			iLocal_571 = RAND_INT_RANGE(3, 6);
			if (DECOR_CHECK_EXIST(Global_34573, "fakeBait"))
			{
				iLocal_571 = 4;
			}
		}
	}
	return;
}

bool Function_138(bool bParam0) //Position: 0x95A2 / 38306
{
	if (bParam0 > 0 || bParam0 <= 1311)
	{
		return 0;
	}
	return 1;
}

var Function_139(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0x95B9 / 38329
{
	return Function_140(uParam0, uParam1, uParam2, uParam3, uParam4, 0, 0.0f, 0.0f, 0.0f);
}

var Function_140(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, vector3 vParam6) //Position: 0x95D2 / 38354
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
		Function_145();
	}
	bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, bParam4, iParam5, vParam6);
	if (!Function_138(bVar1))
	{
		if (!Global_30837 && !Global_30838)
		{
			Function_144(bParam0, bParam1, bParam2, bParam3, bParam4);
			LOG_ERROR("Did a random on popset, and got back a -1");
		}
		Function_144(bParam0, bParam1, bParam2, bParam3, bParam4);
		LOG_ERROR("Did a random on popset, and got back a -1");
		return 4294967295;
	}
	bVar0 = bVar1;
	if (bParam1 || (!bParam3 != 4294967295 && !bParam3 != GET_ACTORENUM_SPECIES(bVar1)))
	{
		if (bParam1 && bParam3 != 4294967295)
		{
			while (Function_143(bVar0) && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, false, iParam5, vParam6);
				if (Function_138(bVar1))
				{
					bVar0 = bVar1;
				}
				iVar2++;
			}
			if (bParam1)
			{
				if (Function_143(bVar0))
				{
					Function_142();
				}
				Function_141(bVar0);
			}
		}
		else if (!bParam3 != 4294967295)
		{
			while (!GET_ACTORENUM_SPECIES(bVar1) != bParam3 && iVar2 > 20)
			{
				bVar1 = GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam2, bParam3, false, iParam5, vParam6);
				if (Function_138(bVar1))
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

void Function_141(int iParam0) //Position: 0x98C5 / 39109
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

void Function_142() //Position: 0x9979 / 39289
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

bool Function_143(bool bParam0) //Position: 0x99B3 / 39347
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

void Function_144(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x99E0 / 39392
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

void Function_145() //Position: 0x9B31 / 39729
{
	int iVar0;
	
	if (Global_3402)
	{
		if (StackVal || !Global_30742 != GET_THIS_SCRIPT_ID() < GET_CURRENT_GAME_TIME())
		{
			Function_142();
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
	Function_142();
	return;
}

int Function_146(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x9B7C / 39804
{
	return GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam1, bParam2, bParam3, 0, 0.0f, 0.0f, 0.0f);
}

bool Function_147(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x9B93 / 39827
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

var Function_148(bool bParam0) //Position: 0x9BBA / 39866
{
	return GET_HEADING(bParam0);
}

bool Function_149(vector3 vParam0) //Position: 0x9BC5 / 39877
{
	int iVar0;
	struct<8> Var1;
	
	if (Function_138(bLocal_588))
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 <= iLocal_571)
		{
			Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_150("BAIT_ANIMAL") };
			vLocal_582.f_8 = (vLocal_582.z + 0.25f);
			bLocal_564[iVar0] = CREATE_ACTOR_IN_LAYOUT(Global_30616, &Var1, bLocal_588, vParam0, 0.0f, 0.0f, 0.0f);
			DECOR_SET_BOOL(bLocal_564[iVar0], "bShopDontKill", true);
			TASK_GO_NEAR_COORD(bLocal_564[iVar0], &vLocal_574, 1.0f, 4);
			TASK_PRIORITY_SET(bLocal_564[iVar0], 0);
			SET_ACTOR_UPDATE_PRIORITY(bLocal_564[iVar0], false);
			iVar0++;
		}
		iLocal_581 = 1;
		return 1;
	}
	return 0;
}

struct<32> Function_150(bool bParam0) //Position: 0x9C75 / 40053
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
			memcpy(&cVar8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_151("0", &cVar8, ""), 4);
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

struct<32> Function_151(char* cParam0, bool bParam1, char* cParam2) //Position: 0x9CDF / 40159
{
	char* cVar0[32];
	
	strcpy(&cVar0, cParam0, 32);
	stradd(&cVar0, bParam1, 32);
	stradd(&cVar0, cParam2, 32);
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0;
}

float Function_152(bool bParam0, vector3 vParam1) //Position: 0x9CFE / 40190
{
	vector3 vVar0;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_153(bParam0);
		vVar0 = { StackVal, StackVal, Function_153(bParam0) };
		return VDIST(vVar0, vParam1);
	}
	LOG_ERROR("Attempting to get distance from INVALID actor to location. Returning 0.0!");
	return 0.0f;
}

vector3 Function_153(bool bParam0) //Position: 0x9D78 / 40312
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

void Function_154() //Position: 0x9DE2 / 40418
{
	vector3 vVar0;
	vector3 vVar3;
	
	vVar0 = { StackVal, StackVal, vLocal_574 };
	UNK_0x44986367(&vVar3, Function_148(Global_34573));
	VNORMALIZE(&vVar3);
	VSCALE(&vVar3, 0.4f);
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) + Vector(vVar3, vVar0, StackVal) };
	CREATE_DECAL(2, vVar0, 0.8f, 0, 0);
	return;
}

void Function_155() //Position: 0x9E27 / 40487
{
	return;
}

void Function_156(int iParam0) //Position: 0x9E2D / 40493
{
	strcpy(iParam0 + 12, "PLAYER HORSE", 16);
	*iParam0 = 46596;
	iParam0->f_4 = 40616;
	iParam0->f_8 = 40548;
	iParam0->f_28 = 1;
	return;
}

void Function_157() //Position: 0x9E64 / 40548
{
	Function_7(&Global_12976 + 36 + 20, 1);
	Function_7(&Global_12976 + 36 + 20, 32);
	Function_7(&Global_12976 + 36 + 20, 0x40000000);
	Function_7(&Global_12976 + 36 + 20, 128);
	Function_7(&Global_12976 + 36 + 20, 64);
	return;
}

int Function_158() //Position: 0x9EA8 / 40616
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	vector3 vVar15;
	vector3 vVar18;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	bool bVar25;
	bool bVar26;
	char* cVar27[16];
	bool bVar31;
	vector3 vVar32;
	bool bVar35;
	bool bVar36;
	
	if (Global_3365 && !Function_97(1, 0))
	{
		return 0;
	}
	if (IS_ACTOR_VALID(GET_MOUNT(Global_34573)))
	{
		if (IS_ACTOR_MULE(GET_MOUNT(Global_34573)) && IS_ACTOR_RIDING_AND_IN_SADDLE(Global_34573))
		{
			if (!Function_58())
			{
				if (!Function_105(Global_76846, 0x8000000))
				{
					Function_100(Global_34573, 0x8000000, 1, 0);
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
		if (!Function_185(Global_12976.f_36))
		{
			Function_184(Global_12976.f_36);
		}
		if (!IS_ACTOR_ALIVE(Global_34573))
		{
			if (HUD_IS_FADED() || !Function_183(Global_12976.f_36))
			{
				(&Global_12976 + 36)->f_24 = 4294967294;
				RELEASE_ACTOR(Global_12976.f_36);
				Global_12976.f_36 = "";
			}
			return 0;
		}
		Function_182(Global_12976.f_36);
		if ((((((!STREAMING_ARE_BOUNDS_LOADED(Function_182(Global_12976.f_36), 5.0f) && !Global_3379) && !Global_3380) && !HUD_IS_FADED()) && !HUD_IS_FADING()) && !GET_RIDER(Global_12976.f_36) != Global_34573) && Function_152(Global_12976.f_36, 0.0f, 0.0f, 0.0f) < 75.0f)
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
				if (NET_IS_IN_SESSION() || Function_16())
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
				if (!(NET_IS_IN_SESSION() || Function_16()))
				{
					bVar2 = true;
					if ((Function_181(Global_12976.f_36) || Function_180(Global_12976.f_36)) || Function_179(Global_12976.f_36))
					{
						bVar2 = false;
					}
					if (bVar2)
					{
						iVar4 = Function_8(7, 0, 5);
						iVar5 = Function_8(8, 0, 5);
						iVar3 = ((ROUND(GET_CURRENT_GAME_TIME()) - Function_176(iVar4)) + Function_176(iVar5));
						if (!Global_3381)
						{
							if (iVar3 == 3600)
							{
								SET_STAMINA_BLINK(3.0f);
								SET_ACTOR_MAX_FRESHNESS(Global_12976.f_36, 100.0f);
								Function_108("mount_bond_stage3", 0x41200000, 1, 0, 2, 1, 0);
							}
							else if (iVar3 == 900)
							{
								SET_STAMINA_BLINK(3.0f);
								SET_ACTOR_MAX_FRESHNESS(Global_12976.f_36, 85.0f);
								Function_108("mount_bond_stage2", 0x41200000, 1, 0, 2, 1, 0);
							}
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
		if (CUTSCENE_MANAGER_IS_CUTSCENE_PLAYING())
		{
			if (((GET_ACTOR_ENUM(Global_12976.f_36) != 1268 || GET_ACTOR_ENUM(Global_12976.f_36) != 1271) || GET_ACTOR_ENUM(Global_12976.f_36) != 1270) || GET_ACTOR_ENUM(Global_12976.f_36) != 1269)
			{
				if (!DECOR_CHECK_EXIST(Global_12976.f_36, "bHiddenForCutscene"))
				{
					bVar6 = FIND_OBJECT_IN_OBJECT(Global_12976.f_36, "emitter_set");
					if (IS_OBJECT_VALID(bVar6))
					{
						bVar7 = GET_OBJECTSET_FROM_OBJECT(bVar6);
						bVar8 = false;
						while (bVar8 <= GET_OBJECTSET_SIZE(bVar7))
						{
							bVar9 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar8, bVar7);
							if (IS_OBJECT_VALID(bVar9))
							{
								HIDE_RMPTFX_EFFECT(bVar9);
							}
							bVar8++;
						}
					}
					DECOR_SET_BOOL(Global_12976.f_36, "bHiddenForCutscene", true);
				}
			}
		}
		else if (((GET_ACTOR_ENUM(Global_12976.f_36) != 1268 || GET_ACTOR_ENUM(Global_12976.f_36) != 1271) || GET_ACTOR_ENUM(Global_12976.f_36) != 1270) || GET_ACTOR_ENUM(Global_12976.f_36) != 1269)
		{
			if (DECOR_CHECK_EXIST(Global_12976.f_36, "bHiddenForCutscene"))
			{
				bVar10 = FIND_OBJECT_IN_OBJECT(Global_12976.f_36, "emitter_set");
				if (IS_OBJECT_VALID(bVar10))
				{
					bVar11 = GET_OBJECTSET_FROM_OBJECT(bVar10);
					bVar12 = false;
					while (bVar12 <= GET_OBJECTSET_SIZE(bVar11))
					{
						bVar13 = GET_INDEXED_OBJECT_IN_OBJECTSET(bVar12, bVar11);
						if (IS_OBJECT_VALID(bVar13))
						{
							SHOW_RMPTFX_EFFECT(bVar13);
						}
						bVar12++;
					}
				}
				DECOR_REMOVE(Global_12976.f_36, "bHiddenForCutscene");
			}
		}
	}
	if (IS_ACTOR_VALID(GET_MOUNT(Global_34573)))
	{
		if (IS_ACTOR_VALID(Global_12976.f_36))
		{
			if (GET_TASK_STATUS(Global_12976.f_36, 86) != 1 && (Function_16() || NET_IS_IN_SESSION()))
			{
				Function_173(0, 0x40400000);
			}
		}
		Global_12976.f_236 = 0;
		return 0;
	}
	if (Function_16() || NET_IS_IN_SESSION())
	{
		return 0;
	}
	if (!IS_LAYOUTREF_VALID(Global_30616))
	{
		return 0;
	}
	if (!Function_172())
	{
		return 0;
	}
	if (((&Global_12976 + 36)->f_24 == Global_29006 || (&Global_12976 + 36)->f_24 != 4294967294) && !DECOR_CHECK_EXIST(Global_34573, "TempDisableRespawn"))
	{
		if (StackVal && (Function_171() < 1 && !DECOR_CHECK_EXIST(Global_34573, "PlayerHorse_DontResetHorseEnum")) + 976 != 993)
		{
			Function_170(StackVal, 0, 1);
		}
		bVar14 = FIND_OBJECT_IN_LAYOUT(Global_30616, "f_playerHorse");
		if (!IS_OBJECT_VALID(bVar14))
		{
			return 0;
		}
		if (DECOR_CHECK_EXIST(bVar14, "PlayerHouse_NoHorse") && !DECOR_CHECK_EXIST(Global_34573, "OnLoad_ForceSpawnPlayerHorse"))
		{
			return 0;
		}
		Function_169(bVar14);
		vVar15 = { StackVal, StackVal, Function_169(bVar14) };
		Function_168(bVar14);
		vVar18 = { StackVal, StackVal, Function_168(bVar14) };
		if (StackVal && Function_152(StackVal, (!IS_ACTOR_VALID(Global_12976.f_36) && STREAMING_ARE_BOUNDS_LOADED(vVar15, 5.0f)), Global_34573, vVar15) > 60.0f)
		{
			bVar23 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/simpleGringo/HitchingPost", &vVar15, 6.0f, 0);
			if (IS_GRINGO_VALID(bVar23))
			{
				GET_OBJECT_POSITION(GET_OBJECT_FROM_GRINGO(bVar23), &vVar15);
				Function_167(StackVal, StackVal, vVar15, &bVar21, &bVar22);
				bVar23 = "";
				if (!IS_OBJECT_VALID(Function_166(bVar21, "UseCase1")))
				{
					bVar23 = bVar21;
				}
				if (!IS_GRINGO_VALID(bVar23))
				{
					if (!IS_OBJECT_VALID(Function_166(bVar22, "UseCase1")))
					{
						bVar23 = bVar22;
					}
				}
				if (IS_GRINGO_VALID(bVar23))
				{
					Function_161(1, 0, 0, 0, 0, 0, 1, 0);
					bVar24 = Global_12976.f_36;
					if (IS_ACTOR_VALID(bVar24))
					{
						SNAP_ACTOR_TO_GRINGO(bVar24, GET_OBJECT_FROM_GRINGO(bVar23), "UseCase1", 1, 0, 0);
						TASK_PRIORITY_SET(bVar24, 1);
						TASK_USE_GRINGO(bVar24, bVar23, "UseCase1", 4294967295, 1);
						if (DECOR_CHECK_EXIST(bVar14, "PlayerHouse_NoHorse") && DECOR_CHECK_EXIST(Global_34573, "OnLoad_ForceSpawnPlayerHorse"))
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
		else if (StackVal && Function_152(StackVal, (!IS_ACTOR_VALID(Global_12976.f_36) && STREAMING_ARE_BOUNDS_LOADED(vVar15, 5.0f)), Global_34573, vVar15) > 60.0f)
		{
			bVar25 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/simpleGringo/horseHitch", &vVar15, 6.0f, 0);
			if (IS_GRINGO_VALID(bVar25))
			{
				Function_161(1, 0, 0, 0, 0, 0, 1, 0);
				bVar26 = Global_12976.f_36;
				if (IS_ACTOR_VALID(bVar26))
				{
					SNAP_ACTOR_TO_GRINGO(bVar26, GET_OBJECT_FROM_GRINGO(bVar25), "UseCase1", 1, 0, 0);
					TASK_PRIORITY_SET(bVar26, 1);
					TASK_USE_GRINGO(bVar26, bVar25, "UseCase1", 4294967295, 1);
					if (DECOR_CHECK_EXIST(bVar14, "PlayerHouse_NoHorse") && DECOR_CHECK_EXIST(Global_34573, "OnLoad_ForceSpawnPlayerHorse"))
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
		if (Function_160(Global_12976.f_36, Global_34573) < 20.0f)
		{
			memcpy(&cVar27, Global_29155[Global_2900610].f_20, 4);
			stradd(&cVar27, "_playerHorse", 16);
			bVar31 = FIND_OBJECT_IN_LAYOUT(Global_30616, &cVar27);
			if (!IS_OBJECT_VALID(bVar31))
			{
				return 0;
			}
			if (DECOR_CHECK_EXIST(bVar31, "PlayerHouse_NoHorse"))
			{
				return 0;
			}
			Function_169(bVar31);
			vVar32 = { StackVal, StackVal, Function_169(bVar31) };
			if (Function_160(Global_12976.f_36, Global_34573) < 60.0f && !Function_159(Global_12976.f_36, 0x3f800000, 0x42960000, 1, 1, 0))
			{
				bVar35 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/simpleGringo/horseHitch", &vVar32, 6.0f, 0);
				if (IS_GRINGO_VALID(bVar35))
				{
					SNAP_ACTOR_TO_GRINGO(Global_12976.f_36, GET_OBJECT_FROM_GRINGO(bVar35), "UseCase1", 1, 0, 0);
					TASK_PRIORITY_SET(Global_12976.f_36, 1);
					TASK_USE_GRINGO(Global_12976.f_36, bVar35, "UseCase1", 4294967295, 1);
				}
				if (!DOES_HORSE_HAVE_ACCESSORY(Global_12976.f_36, 4))
				{
					ACCESSORIZE_HORSE(Global_12976.f_36, 4);
				}
			}
			else if (Function_160(Global_12976.f_36, Global_34573) < 60.0f)
			{
				bVar36 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/simpleGringo/horseHitch", &vVar32, 6.0f, 0);
				if (IS_GRINGO_VALID(bVar36))
				{
					TASK_PRIORITY_SET(Global_12976.f_36, 1);
					TASK_USE_GRINGO(Global_12976.f_36, bVar36, "UseCase1", 4294967295, 1);
				}
			}
		}
	}
	return 0;
}

bool Function_159(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) //Position: 0xAAD5 / 43733
{
	return CAMERA_IS_VISIBLE_ACTOR(GET_GAME_CAMERA(), bParam0, iParam1, iParam2, iParam3, iParam4, iParam5);
}

float Function_160(bool bParam0, bool bParam1) //Position: 0xAAEF / 43759
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

var Function_161(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7) //Position: 0xABE0 / 44000
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
		Function_170(976, 0, 1);
	}
	bParam7 = bParam7;
	if (!bParam7)
	{
		if (!Function_172())
		{
			return "";
		}
	}
	if (!Function_165())
	{
		return "";
	}
	bVar1 = false;
	if (IS_ACTOR_VALID(Global_12976.f_36))
	{
		bVar1 = IS_ACTOR_ALIVE(Global_12976.f_36);
	}
	Function_164();
	if ((bVar1 && iParam6) && iParam0)
	{
		Function_169(GET_OBJECT_FROM_ACTOR(Global_12976.f_36));
		vVar2 = { StackVal, StackVal, Function_169(GET_OBJECT_FROM_ACTOR(Global_12976.f_36)) };
		Function_169(GET_OBJECT_FROM_ACTOR(Global_34573));
		vVar5 = { StackVal, StackVal, Function_169(GET_OBJECT_FROM_ACTOR(Global_34573)) };
		iVar8 = Function_163(StackVal, StackVal, vVar2, 0, 1, 1);
		if (iVar8 != 4294967294 || iVar8 != 4294967295)
		{
		}
		else
		{
			iVar9 = Function_163(StackVal, StackVal, vVar5, 0, 1, 1);
			if (iVar8 != iVar9)
			{
				if (Function_16() || NET_IS_IN_SESSION())
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
						Global_12976.f_36 = CREATE_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("PlayerLayout"), Function_29(), bVar0, bParam2, bParam3, bParam4, 0.0f, bParam5, 0.0f);
						SNAP_OBJECT_TO_GROUND(Global_12976.f_36, 15.0f, true, 1092616192);
					}
					else
					{
						Global_12976.f_36 = CREATE_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("PlayerLayout"), Function_29(), 993, bParam2, bParam3, bParam4, 0.0f, bParam5, 0.0f);
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
				if (!Function_49(StackVal, StackVal, vVar10))
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
			Global_12976.f_36 = CREATE_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("PlayerLayout"), Function_29(), bVar0, bParam2, bParam3, bParam4, 0.0f, bParam5, 0.0f);
			SNAP_OBJECT_TO_GROUND(Global_12976.f_36, 15.0f, true, 1092616192);
		}
		else
		{
			if (bVar0 != 993)
			{
				(&Global_12976 + 36)->f_8 = (bVar0 - 976);
			}
			Global_12976.f_36 = CREATE_ACTOR_IN_LAYOUT(FIND_NAMED_LAYOUT("PlayerLayout"), Function_29(), 993, bParam2, bParam3, bParam4, 0.0f, bParam5, 0.0f);
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
		Function_162(Global_12976.f_36, 0, 0, 0, 0, 0, 0);
	}
	if (Function_16() || NET_IS_IN_SESSION())
	{
		if (IS_ACTOR_VALID(Global_12976.f_36))
		{
			NET_ACTOR_SET_ALLOW_BLIP_SYNC(Global_12976.f_36, 0);
		}
	}
	return Global_12976.f_36;
}

void Function_162(bool bParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) //Position: 0xAF36 / 44854
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

var Function_163(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5) //Position: 0xAF73 / 44915
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

void Function_164() //Position: 0xB00E / 45070
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

bool Function_165() //Position: 0xB080 / 45184
{
	if (Function_171() >= 1)
	{
		return 0;
	}
	return STREAMING_IS_ACTOR_LOADED(993, 4294967295);
}

var Function_166(bool bParam0, bool bParam1) //Position: 0xB096 / 45206
{
	return GRINGO_QUERY_NAMED_COMPONENT_USER(bParam0, bParam1);
}

void Function_167(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) //Position: 0xB0A3 / 45219
{
	bool bVar0;
	
	bVar0 = LOCATE_GRINGO_OF_TYPE("hitchingPost", &uParam0, 2.0f, 1);
	if (IS_GRINGO_VALID(bVar0))
	{
		GET_OBJECT_POSITION(GET_OBJECT_FROM_GRINGO(bVar0), &uParam0);
		if (!Function_58())
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

vector3 Function_168(bool bParam0) //Position: 0xB1E6 / 45542
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

vector3 Function_169(bool bParam0) //Position: 0xB20D / 45581
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

void Function_170(int iParam0, bool bParam1, bool bParam2) //Position: 0xB234 / 45620
{
	Global_13038 = iParam0;
	if (bParam1)
	{
		Function_112(&Global_12976 + 36 + 20, 128);
	}
	if (bParam2)
	{
		Function_112(&Global_12976 + 36 + 20, 64);
	}
	return;
}

int Function_171() //Position: 0xB261 / 45665
{
	return Global_12976.f_152;
}

bool Function_172() //Position: 0xB26C / 45676
{
	bool bVar0;
	
	bVar0 = STREAMING_IS_ACTOR_LOADED(StackVal + 976, 4294967295);
	if (bVar0)
	{
	}
	return bVar0;
}

void Function_173(bool bParam0, float fParam1) //Position: 0xB28C / 45708
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
	Function_175();
	Function_174();
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

void Function_174() //Position: 0xB38A / 45962
{
	if (DECOR_CHECK_EXIST(Global_34573, "HorseStolen"))
	{
		DECOR_REMOVE(Global_34573, "HorseStolen");
	}
	return;
}

void Function_175() //Position: 0xB3BC / 46012
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

int Function_176(int iParam0) //Position: 0xB4B9 / 46265
{
	if (!Function_177(iParam0))
	{
		return 4294967295;
	}
	return Global_13172[iParam011].f_16;
}

bool Function_177(int iParam0) //Position: 0xB4D3 / 46291
{
	if (!Function_3(iParam0))
	{
		return 0;
	}
	if (!Function_178(StackVal))
	{
		return 0;
	}
	return 1;
}

bool Function_178(int iParam0) //Position: 0xB4F7 / 46327
{
	if (iParam0 >= 4294967295 || iParam0 < 5)
	{
		return 0;
	}
	return 1;
}

int Function_179(bool bParam0) //Position: 0xB50C / 46348
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_ENUM(bParam0);
	if (bVar0 <= 1268 && bVar0 >= 1271)
	{
		return 1;
	}
	return 0;
}

int Function_180(bool bParam0) //Position: 0xB52C / 46380
{
	if (GET_ACTOR_ENUM(bParam0) == 1267)
	{
		return 1;
	}
	return 0;
}

int Function_181(bool bParam0) //Position: 0xB540 / 46400
{
	bool bVar0;
	
	bVar0 = GET_ACTOR_ENUM(bParam0);
	if (bVar0 <= 1248 && bVar0 >= 1251)
	{
		return 1;
	}
	return 0;
}

vector3 Function_182(bool bParam0) //Position: 0xB560 / 46432
{
	vector3 vVar0;
	
	GET_POSITION(bParam0, &vVar0);
	return StackVal, StackVal, vVar0;
}

bool Function_183(bool bParam0) //Position: 0xB571 / 46449
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

void Function_184(bool bParam0) //Position: 0xB59C / 46492
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

bool Function_185(bool bParam0) //Position: 0xB5D0 / 46544
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

void Function_186() //Position: 0xB604 / 46596
{
	Global_12976.f_240 = "";
	Global_12976.f_244 = "";
	Global_12976.f_72 = "";
	if (IS_ACTOR_VALID(Global_12976.f_36))
	{
		DESTROY_ACTOR(Global_12976.f_36);
	}
	Function_112(&Global_12976 + 36 + 20, 0x40000000);
	(&Global_12976 + 36)->f_24 = 4294967294;
	return;
}

void Function_187(int iParam0) //Position: 0xB64B / 46667
{
	strcpy(iParam0 + 12, "QUESTMANAGER", 16);
	if (Global_3421)
	{
		*iParam0 = 34345;
		iParam0->f_4 = 34338;
		iParam0->f_8 = 34345;
	}
	else
	{
		*iParam0 = 68145;
		iParam0->f_4 = 48818;
		iParam0->f_8 = 46754;
	}
	iParam0->f_28 = 0;
	return;
}

void Function_188() //Position: 0xB6A2 / 46754
{
	Function_189(&Global_63541);
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

void Function_189(int iParam0) //Position: 0xB6EC / 46828
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= *iParam0)
	{
		Function_190(iParam0[iVar055], iVar0, 0, 1, 1);
		iVar0++;
	}
	return;
}

void Function_190(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4) //Position: 0xB714 / 46868
{
	int iVar0;
	
	iVar0 = 0;
	iParam2 = iParam2;
	if (IS_BLIP_VALID(iParam0->f_184))
	{
		if ((!Function_113(Global_63541[bParam155].f_144, 64) || Function_70(bParam1)) || Function_197(bParam1))
		{
			if (((((bParam1 != 2 || bParam1 != 6) || bParam1 != 8) || bParam1 != 24) && !Function_70(bParam1)) && !Function_197(bParam1))
			{
			}
			else
			{
				if (IS_BLIP_VALID(iParam0->f_184))
				{
					REMOVE_BLIP(iParam0->f_184);
				}
				if (IS_BLIP_VALID(iParam0->f_188))
				{
					REMOVE_BLIP(iParam0->f_188);
				}
			}
		}
	}
	else
	{
		if (Function_113(Global_63541[bParam155].f_144, 64))
		{
			Function_192(iParam0, bParam1);
		}
		if (!(Function_70(bParam1) || Function_197(bParam1)))
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
		if (!Function_113(iParam0->f_144, 32))
		{
			DESTROY_OBJECT(GET_OBJECT_FROM_GRINGO(iParam0->f_208));
		}
		else
		{
			iParam0->f_208 = "";
		}
		Function_7(iParam0 + 144, 32);
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
		Function_191(iParam0);
	}
	Function_7(iParam0 + 144, 256);
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

void Function_191(int iParam0) //Position: 0xB8FF / 47359
{
	if (Function_113(iParam0->f_144, 1))
	{
		STREAMING_EVICT_ACTOR(iParam0->f_136, 4294967295);
		Function_7(iParam0 + 144, 1);
	}
	if (Function_113(iParam0->f_144, 8))
	{
		REMOVE_STRING_TABLE("dlc_zombiepack_rcm");
		Function_7(iParam0 + 144, 8);
	}
	if (Function_113(iParam0->f_144, 2))
	{
		STREAMING_EVICT_GRINGO(iParam0->f_60);
		Function_7(iParam0 + 144, 2);
	}
	if (Function_113(iParam0->f_144, 4))
	{
		STREAMING_EVICT_PROP(iParam0->f_64);
		Function_7(iParam0 + 144, 4);
	}
	return;
}

void Function_192(int iParam0, int iParam1) //Position: 0xB981 / 47489
{
	vector3 vVar0;
	float fVar3;
	float fVar4;
	struct<9> Var5;
	
	vVar0 = { StackVal, StackVal, *(iParam0 + 112) };
	vVar0.f_4 = (vVar0.y + 0.5f);
	fVar3 = 1.0f;
	fVar4 = 50.0f;
	if ((((StackVal && Function_195(StackVal, Function_196(iParam1), vVar0, 0x3f800000, 0x42960000, 1, 1, 0)) || Function_194(iParam1)) || Global_74542[iParam110].f_12 != 1) || Function_113(Global_63541[iParam155].f_144, 64))
	{
		if (((iParam0->f_80 != 4294967295 || iParam1 != 10) || iParam1 != 17) || iParam1 != 5)
		{
			fVar3 = 0.5f;
			fVar8 = 70.0f;
			vVar5 = { StackVal, StackVal, *(iParam0 + 112) };
			vVar5 = (vVar5.x + RAND_FLOAT_RANGE(10.0f, 20.0f));
			vVar5.f_8 = (vVar5.z + RAND_FLOAT_RANGE(10.0f, 20.0f));
			iParam0->f_184 = ADD_BLIP_FOR_COORD(&vVar5, 440, 0.0f, 2, 0);
			SET_BLIP_SCALE(iParam0->f_184, fVar8);
			SET_BLIP_NAME(iParam0->f_184, iParam0 + 4);
			SET_BLIP_COLOR(iParam0->f_184, 0.63f, 0.85f, 0.0f, fVar3);
			SET_BLIP_PRIORITY(iParam0->f_184, 3);
		}
		else if (iParam1 == 13)
		{
			fVar3 = 0.5f;
			fVar9 = 30.0f;
			iParam0->f_184 = ADD_BLIP_FOR_COORD(iParam0 + 112, 440, 0.0f, 2, 0);
			SET_BLIP_SCALE(iParam0->f_184, fVar9);
			SET_BLIP_NAME(iParam0->f_184, iParam0 + 4);
			SET_BLIP_COLOR(iParam0->f_184, 0.63f, 0.85f, 0.0f, fVar3);
			SET_BLIP_PRIORITY(iParam0->f_184, 3);
		}
		else if (iParam1 == 23 || !IS_OBJECT_VALID(iParam0->f_212))
		{
			iParam0->f_184 = ADD_BLIP_FOR_COORD(iParam0 + 112, iParam0->f_80, 0.0f, 2, 0);
			if (((((((((((iParam0->f_80 == 312 && iParam0->f_80 == 311) && iParam1 == 24) && iParam1 == 6) && iParam1 == 7) && iParam1 == 8) && iParam1 == 2) && iParam1 == 20) && iParam1 == 21) && iParam1 == 25) && iParam1 == 26) && iParam1 == 27)
			{
				SET_BLIP_MAX_DISTANCE(iParam0->f_184, 3.0f);
			}
			iParam0->f_188 = ADD_BLIP_FOR_COORD(iParam0 + 112, iParam0->f_80, 0.0f, 2, 0);
			if (((iParam1 != 24 || iParam1 != 6) || iParam1 != 8) || iParam1 != 2)
			{
				SET_BLIP_NAME(iParam0->f_188, "ZOMBIE_STORY");
			}
			else
			{
				SET_BLIP_NAME(iParam0->f_188, iParam0 + 4);
			}
			UNK_0xFF3DB575(iParam0->f_188, 1);
			if (iParam0->f_80 == 312 && iParam0->f_80 == 311)
			{
				SET_BLIP_PRIORITY(iParam0->f_188, 3);
			}
			if (Function_113(Global_74542[iParam110].f_24, 1))
			{
				SET_BLIP_COLOR(iParam0->f_188, 0.63f, 0.85f, 0.0f, 0.5f);
				if (Global_29006 != Global_63541[iParam155].f_132 && !Function_193())
				{
					Function_108("TerrCont_RCM", 0x41200000, 1, 0, 2, 1, 0);
				}
			}
			else
			{
				SET_BLIP_COLOR(iParam0->f_188, 0.63f, 0.85f, 0.0f, fVar3);
			}
			Global_74542[iParam110].f_12 = 1;
		}
		if (IS_BLIP_VALID(iParam0->f_184))
		{
			if (((iParam1 != 24 || iParam1 != 6) || iParam1 != 8) || iParam1 != 2)
			{
				SET_BLIP_NAME(iParam0->f_184, "ZOMBIE_STORY");
				if (iParam1 == 2)
				{
					SET_BLIP_BLINK(iParam0->f_184, 1, 0, (7.5f + 5.0f));
				}
				else
				{
					SET_BLIP_BLINK(iParam0->f_184, 1, 0, 7.5f);
				}
			}
			else
			{
				SET_BLIP_NAME(iParam0->f_184, iParam0 + 4);
			}
			if (Function_113(Global_74542[iParam110].f_24, 1))
			{
				SET_BLIP_COLOR(iParam0->f_184, 0.63f, 0.85f, 0.0f, 0.5f);
				if (Global_29006 != Global_63541[iParam155].f_132 && !Function_193())
				{
					Function_108("TerrCont_RCM", 0x41200000, 1, 0, 2, 1, 0);
				}
			}
			else
			{
				SET_BLIP_COLOR(iParam0->f_184, 0.63f, 0.85f, 0.0f, fVar3);
			}
			SET_BLIP_PRIORITY(iParam0->f_184, 3);
		}
	}
	else
	{
		fVar3 = 0.5f;
		vVar5 = { StackVal, StackVal, *(iParam0 + 112) };
		vVar5 = (vVar5.x + RAND_FLOAT_RANGE(10.0f, 20.0f));
		vVar5.f_8 = (vVar5.z + RAND_FLOAT_RANGE(10.0f, 20.0f));
		iParam0->f_184 = ADD_BLIP_FOR_COORD(&vVar5, 440, 0.0f, 2, 0);
		SET_BLIP_SCALE(iParam0->f_184, fVar4);
		SET_BLIP_NAME(iParam0->f_184, iParam0 + 4);
		SET_BLIP_PRIORITY(iParam0->f_184, 3);
	}
	if (iParam1 == 19)
	{
		SET_BLIP_COLOR(iParam0->f_184, 1.0f, 1.0f, 1.0f, 1.0f);
		SET_BLIP_COLOR(iParam0->f_188, 1.0f, 1.0f, 1.0f, 1.0f);
	}
	else if (iParam1 == 20)
	{
		SET_BLIP_COLOR(iParam0->f_184, 0.34f, 0.58f, 0.74f, 1.0f);
		SET_BLIP_COLOR(iParam0->f_188, 0.34f, 0.58f, 0.74f, 1.0f);
	}
	else if (iParam1 == 21)
	{
		SET_BLIP_COLOR(iParam0->f_184, 0.79f, 0.69f, 0.0f, 1.0f);
		SET_BLIP_COLOR(iParam0->f_188, 0.79f, 0.69f, 0.0f, 1.0f);
	}
	return;
}

bool Function_193() //Position: 0xBE13 / 48659
{
	return ((((HUD_IS_SHOWING_BIG_TEXT() || HUD_IS_SHOWING_HELP_TEXT()) || HUD_IS_SHOWING_OBJECTIVE()) || HUD_IS_SHOWING_SMALL_TEXT()) || UI_ISACTIVE("MissionFailedMenu"));
}

bool Function_194(bool bParam0) //Position: 0xBE40 / 48704
{
	if ((Global_74542[bParam010] != 3 || Global_74542[bParam010] != 4) || Global_74542[bParam010] != 5)
	{
		return 1;
	}
	return 0;
}

bool Function_195(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7) //Position: 0xBE6C / 48748
{
	return CAMERA_IS_VISIBLE_POINT(GET_GAME_CAMERA(), vParam0, iParam3, iParam4, iParam5, iParam6, iParam7);
}

int Function_196(int iParam0) //Position: 0xBE88 / 48776
{
	if (Global_74542[iParam010] == 2)
	{
		return 1;
	}
	return 0;
}

bool Function_197(bool bParam0) //Position: 0xBE9D / 48797
{
	if (Global_74542[bParam010] == 7)
	{
		return 1;
	}
	return 0;
}

int Function_198() //Position: 0xBEB2 / 48818
{
	if (!Global_3366)
	{
		return 0;
	}
	if (!Function_115(10) && !Function_4(1048576))
	{
		return 0;
	}
	if (Function_199(&Global_63541) >= 0)
	{
		return 0;
	}
	return 1;
}

int Function_199(int iParam0) //Position: 0xBEE2 / 48866
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	iVar1 = 1000;
	fVar2 = GET_PROFILE_TIME();
	iVar3 = 77;
	iVar3 = 38;
	if (Function_16())
	{
		iVar0 = StackVal;
		while (iVar0 < (iVar3 - 1))
		{
			if ((GET_PROFILE_TIME() - fVar2) < 1000.0f && !Global_30842[30])
			{
				Global_63535.f_8 = iVar0;
				return iVar1;
			}
			Function_190(iParam0[iVar055], iVar0, 0, 1, 1);
			iVar0++;
		}
		Global_63535.f_8 = 0;
		return iVar1;
	}
	iVar0 = StackVal;
	while (iVar0 < (iVar3 - 1))
	{
		if ((GET_PROFILE_TIME() - fVar2) < 1000.0f && !Global_30842[30])
		{
			Global_63535.f_8 = iVar0;
			return iVar1;
		}
		Function_200(iParam0[iVar055], iVar0);
		iVar0++;
	}
	Global_63535.f_8 = 0;
	return iVar1;
}

void Function_200(int iParam0, bool bParam1) //Position: 0xBFA0 / 49056
{
	char* cVar0[64];
	char* cVar16[64];
	bool bVar32;
	
	if (Function_259(bParam1))
	{
		Function_7(iParam0 + 144, 64);
		Function_190(iParam0, bParam1, 0, 0, 1);
		return;
	}
	strcpy(&cVar16, "Checking quest: ", 64);
	stradd(&cVar16, iParam0 + 4, 64);
	stradd(&cVar16, " ", 64);
	stradd(&cVar16, INT_TO_STRING(bParam1), 64);
	if (!IS_ACTOR_VALID(Global_34573))
	{
		stradd(&cVar0, "DA: Player invalid.", 64);
		Function_190(iParam0, bParam1, 0, 0, 1);
		return;
	}
	Function_241(iParam0, bParam1);
	if (Function_49(StackVal, StackVal, *(iParam0 + 100)))
	{
		PRINTSTRING("QUEST INDEX: ");
		PRINTINT(bParam1);
		PRINTNL();
		LOG_ERROR("Invalid quest position given. Check TTY for quest index.");
		return;
	}
	if (Function_70(bParam1))
	{
		Function_7(iParam0 + 144, 64);
		if (CONVERT_TIME_OF_DAY_TO_INT(iParam0->f_88) >= 0)
		{
			Function_240(iParam0, bParam1);
		}
		if (!Function_113(iParam0->f_144, 256))
		{
			stradd(&cVar0, "DA: Quest already completed.", 64);
			Function_190(iParam0, bParam1, 0, 0, 1);
			return;
		}
	}
	if (Function_197(bParam1))
	{
		stradd(&cVar0, "DA: Quest failed.", 64);
		Function_7(iParam0 + 144, 64);
		Function_190(iParam0, bParam1, 0, 0, 1);
		if (CONVERT_TIME_OF_DAY_TO_INT(iParam0->f_84) >= 0)
		{
			Function_240(iParam0, bParam1);
		}
		return;
	}
	if (!Function_70(bParam1))
	{
		if (!Function_194(bParam1))
		{
			Function_237(bParam1);
			if (!Function_234(iParam0, bParam1, 0, 1, 0))
			{
				stradd(&cVar0, "DA: Quest conditions not met.", 64);
				Function_190(iParam0, bParam1, 0, 0, 1);
				return;
			}
		}
	}
	if (iParam0->f_160)
	{
		if (IS_EARLIER_THAN(GET_TIME_OF_DAY(), iParam0->f_156))
		{
			stradd(&cVar0, "DA: Not time for quest to start yet.", 64);
			Function_190(iParam0, bParam1, 0, 0, 1);
			Function_7(iParam0 + 144, 64);
			return;
		}
		iParam0->f_160 = 0;
	}
	if ((((Global_3380 || Global_3382) || Global_3392) || Global_34165.f_28) && bParam1 == iParam0->f_20)
	{
		stradd(&cVar0, "DA: Story or proc mission running.", 64);
		Function_7(iParam0 + 144, 64);
		Function_190(iParam0, bParam1, 0, 1, 1);
		return;
	}
	if (!Function_70(bParam1))
	{
		Function_112(iParam0 + 144, 64);
	}
	if (Function_72(iParam0->f_132))
	{
		if (Function_233(&(Global_29008[iParam0->f_132]), 256))
		{
			stradd(&cVar0, "DA: Quest region has pers chars disabled.", 64);
			Function_190(iParam0, bParam1, 0, 1, 1);
			return;
		}
	}
	if (IS_ACTOR_VALID(iParam0->f_204))
	{
		if (!Function_230(iParam0, bParam1, 1))
		{
			return;
		}
	}
	if (Function_229(bParam1))
	{
		stradd(&cVar0, "DA: Quests should deactivate.", 64);
		Function_190(iParam0, bParam1, 0, 0, 1);
		return;
	}
	if (!Function_70(bParam1))
	{
		if (!(Function_194(bParam1) || Function_227(iParam0)))
		{
			if (IS_JOURNAL_ENTRY_IN_LIST(iParam0->f_140, 0))
			{
				if (VDIST(*(iParam0 + 100), Global_34574) > 15.0f)
				{
					if (!Function_113(iParam0->f_144, 8192))
					{
						Function_224(iParam0);
						Function_112(iParam0 + 144, 8192);
					}
				}
				else
				{
					Function_7(iParam0 + 144, 8192);
				}
			}
			stradd(&cVar0, "DA: Quest time conditions not met.", 64);
			Function_190(iParam0, bParam1, 1, 0, 1);
			return;
		}
	}
	bVar32 = VDIST(*(iParam0 + 100), Global_34574);
	if (bVar32 < iParam0->f_76)
	{
		if (bParam1 == 20)
		{
			if (Global_74542[2010].f_36 != 1.0f)
			{
				return;
			}
		}
		stradd(&cVar0, "DA: Quest too far, not within ", 64);
		stradd(&cVar0, FLOAT_TO_STRING_VERBOSE(bVar32), 64);
		stradd(&cVar0, " meters.", 64);
		Function_190(iParam0, bParam1, 1, 1, 1);
		return;
	}
	if (bVar32 < iParam0->f_72)
	{
		return;
	}
	if (Function_70(bParam1))
	{
		stradd(&cVar0, "DA: Quest already completed.", 64);
		return;
	}
	Function_201(iParam0, bParam1);
	return;
}

void Function_201(int iParam0, bool bParam1) //Position: 0xC44D / 50253
{
	bool bVar0;
	char* cVar1[64];
	int iVar17;
	
	Function_223(iParam0);
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
	Function_218(iParam0);
	iVar17 = 1;
	switch (*iParam0)
	{
		case 0x00000001:
			if (!IS_ACTOR_VALID(iParam0->f_204))
			{
				if (!Function_113(iParam0->f_144, 512))
				{
					if (STREAMING_IS_ACTOR_LOADED(iParam0->f_136, 4294967295))
					{
						memcpy(&cVar1, StackVal, StackVal, StackVal, *(iParam0 + 4), 16);
						stradd(&cVar1, INT_TO_STRING(bParam1), 64);
						iParam0->f_204 = CREATE_ACTOR_IN_LAYOUT(Global_63535, &cVar1, iParam0->f_136, *(iParam0 + 100), 0.0f, iParam0->f_124, 0.0f);
						Function_209(iParam0, bParam1);
						Function_203(iParam0, bParam1, 1);
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
					Function_203(iParam0, bParam1, 0);
				}
				Function_182(iParam0->f_204);
				if (VDIST(Function_182(iParam0->f_204), *(iParam0 + 100)) > 2.0f)
				{
					Function_209(iParam0, bParam1);
				}
			}
			if (!IS_GRINGO_VALID(iParam0->f_208))
			{
				if (UNK_0x214AFB8C(iParam0->f_60))
				{
					if (Function_72(iParam0->f_132))
					{
						if (Function_113(iParam0->f_144, 65536) && !Function_233(&(Global_29008[iParam0->f_132]), 32))
						{
							iVar17 = 0;
						}
					}
					if (STREAMING_IS_GRINGO_LOADED(iParam0->f_60) && iVar17)
					{
						iParam0->f_208 = LOCATE_GRINGO_OF_TYPE_BY_ID(iParam0->f_60, iParam0 + 100, 2.0f);
						if (IS_GRINGO_VALID(iParam0->f_208))
						{
							Function_112(iParam0 + 144, 32);
						}
						else
						{
							iParam0->f_208 = GET_GRINGO_FROM_OBJECT(CREATE_GRINGO_IN_LAYOUT_BY_ID(Global_63535, Function_29(), iParam0->f_60, *(iParam0 + 100), 0.0f, iParam0->f_124, 0.0f));
							Function_7(iParam0 + 144, 32);
						}
						Function_202(iParam0, 0);
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
					iParam0->f_212 = CREATE_PROP_IN_LAYOUT_BY_ID(Global_63535, Function_29(), iParam0->f_64, *(iParam0 + 100), 0.0f, iParam0->f_124, 0.0f, 1);
					Function_209(iParam0, bParam1);
				}
				else
				{
					return;
				}
			}
			break;
		
		case 0x00000003:
			Function_209(iParam0, bParam1);
			break;
	}
	return;
}

void Function_202(int iParam0, bool bParam1) //Position: 0xC699 / 50841
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
		if (!Function_113(iParam0->f_144, 16384))
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

void Function_203(int iParam0, bool bParam1, int iParam2) //Position: 0xC7C8 / 51144
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
	Function_182(iParam0->f_204);
	vVar0 = { StackVal, StackVal, Function_182(iParam0->f_204) };
	bVar3 = WOULD_ACTOR_BE_VISIBLE(GET_ACTOR_ENUM(iParam0->f_204), &vVar0, 3212836864);
	bVar4 = Function_195(StackVal, StackVal, *(iParam0 + 100), 0x3f800000, 0x42960000, 1, 1, 0);
	if (!UNK_0x214AFB8C(iParam0->f_60))
	{
		if (!Function_113(iParam0->f_144, 16384))
		{
			if (!(bVar3 || bVar4))
			{
				TELEPORT_ACTOR(iParam0->f_204, iParam0 + 100, 1, 1, 1);
			}
		}
		Function_208(iParam0);
	}
	else if (!IS_GRINGO_VALID(iParam0->f_208))
	{
		if (!Function_113(iParam0->f_144, 16384))
		{
			if (!(bVar3 || bVar4))
			{
				TELEPORT_ACTOR(iParam0->f_204, iParam0 + 100, 1, 1, 1);
			}
		}
		TASK_PRIORITY_SET(iParam0->f_204, 2);
		TASK_STAND_STILL(iParam0->f_204, -1.0f, 0, 0);
	}
	else
	{
		Function_202(iParam0, iParam2);
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
		SQUAD_JOIN(iParam0->f_204, GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Global_63535, Function_29())));
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
	uVar6 = Function_206(iParam0);
	SET_RCM_WAS_JOHN_NOW_JACK(iParam0->f_204, uVar6);
	Function_205(bParam1, &iVar7, &iVar8, &iVar9, &iVar10, &iVar11, &iVar12);
	iVar13 = Function_204(bParam1);
	switch (iVar13)
	{
		case 0x00000001:
			SET_RCM_ACTOR_CALL_OVER_ENABLE(iParam0->f_204, 1, 0, 1, iVar7, iVar8, iVar9, iVar10, iVar11, iVar12);
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
	AI_GOAL_LOOK_AT_PLAYER_WHEN_WITHIN(iParam0->f_204, 15.0f);
	MEMORY_CLEAR_EVENTS(iParam0->f_204, 1);
	return;
}

int Function_204(int iParam0) //Position: 0xCAC4 / 51908
{
	if (Function_58())
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

void Function_205(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) //Position: 0xCD43 / 52547
{
	*uParam3 = 2;
	*uParam4 = 20.0f;
	*uParam5 = 7.0f;
	*uParam6 = 1;
	if (Function_58())
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

int Function_206(int iParam0) //Position: 0xCF23 / 53027
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
		if (Function_207(Global_63541[iVar155].f_136, uVar0))
		{
			return 0;
		}
		iVar1 = Global_63541[iVar155].f_168;
	}
	return 0;
}

bool Function_207(int iParam0, int iParam1) //Position: 0xCF7D / 53117
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

void Function_208(int iParam0) //Position: 0xCFC7 / 53191
{
	if (IS_ACTOR_VALID(iParam0->f_204))
	{
		TASK_CLEAR(iParam0->f_204);
		TASK_PRIORITY_SET(iParam0->f_204, 2);
		TASK_GO_TO_COORD_AND_STAY(iParam0->f_204, iParam0 + 100, 1, iParam0->f_124);
	}
	return;
}

void Function_209(int iParam0, bool bParam1) //Position: 0xCFF6 / 53238
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	vector3 vVar3;
	float fVar6;
	float fVar7;
	struct<9> Var8;
	float fVar17;
	
	if (Function_113(iParam0->f_144, 2048))
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
		Function_217(iParam0, iVar2);
	}
	else if (bVar0 && bVar1)
	{
		DESTROY_OBJECT(iParam0->f_192);
	}
	if (IS_BLIP_VALID(iParam0->f_184))
	{
		if (iParam0->f_80 == 4294967295)
		{
		}
		else if (GET_BLIP_ICON(iParam0->f_184) == 440)
		{
			vVar3 = { StackVal, StackVal, *(iParam0 + 100) };
			vVar3.f_4 = (vVar3.y + 0.5f);
			if (bParam1 == 5)
			{
				vVar3.f_4 = (vVar3.y + 1.5f);
				if (StackVal || !Function_195(StackVal, VDIST(Global_34574, *(iParam0 + 100)) < 50.0f, vVar3, 0x3f800000, 0x42960000, 1, 1, 0))
				{
					return;
				}
			}
			if (bParam1 == 17)
			{
				vVar3.f_4 = (vVar3.y + 5.0f);
				if (StackVal || !Function_195(StackVal, VDIST(Global_34574, *(iParam0 + 100)) < 40.0f, vVar3, 0x3f800000, 0x42960000, 1, 1, 0))
				{
					return;
				}
			}
			if (bParam1 == 13)
			{
				return;
			}
			if (bParam1 > 2 || bParam1 < 5)
			{
				if (!Function_195(StackVal, StackVal, vVar3, 0x3f800000, 0x42960000, 1, 1, 0) && VDIST(Global_34574, *(iParam0 + 100)) < 42.0f)
				{
					return;
				}
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
				if (Function_72(iParam0->f_132))
				{
					Function_214(StackVal, StackVal, iParam0->f_132, 23, *(iParam0 + 100), 63);
				}
				else
				{
					Function_214(StackVal, StackVal, Global_29006, 23, *(iParam0 + 100), 63);
				}
			}
		}
		else
		{
			if (bParam1 == iParam0->f_20)
			{
				if (Function_72(iParam0->f_132))
				{
					Function_210(StackVal, iParam0->f_132, 23, iParam0->f_100);
				}
				else
				{
					Function_210(StackVal, Global_29006, 23, iParam0->f_100);
				}
				Function_7(iParam0 + 144, 4096);
			}
			if (iParam0->f_80 == 4294967295)
			{
				fVar6 = 0.5f;
				fVar7 = 70.0f;
				vVar8 = { StackVal, StackVal, *(iParam0 + 112) };
				vVar8 = (vVar8.x + RAND_FLOAT_RANGE(10.0f, 20.0f));
				vVar8.f_8 = (vVar8.z + RAND_FLOAT_RANGE(10.0f, 20.0f));
				iParam0->f_184 = ADD_BLIP_FOR_COORD(&vVar8, 440, 0.0f, 3, 7);
				SET_BLIP_SCALE(iParam0->f_184, fVar7);
				SET_BLIP_NAME(iParam0->f_184, iParam0 + 4);
				SET_BLIP_COLOR(iParam0->f_184, 0.63f, 0.85f, 0.0f, fVar6);
				SET_BLIP_PRIORITY(iParam0->f_184, 3);
			}
			else if (bParam1 == 23 || !IS_OBJECT_VALID(iParam0->f_212))
			{
				if ((bParam1 != 5 && VDIST(Global_34574, *(iParam0 + 100)) < 40.0f) || (bParam1 != 17 && VDIST(Global_34574, *(iParam0 + 100)) < 40.0f))
				{
					fVar11 = 0.5f;
					fVar12 = 50.0f;
					vVar13 = { StackVal, StackVal, *(iParam0 + 112) };
					vVar13 = (vVar13.x + RAND_FLOAT_RANGE(5.0f, 15.0f));
					vVar13.f_8 = (vVar13.z + RAND_FLOAT_RANGE(5.0f, 15.0f));
					iParam0->f_184 = ADD_BLIP_FOR_COORD(&vVar13, 440, 0.0f, 3, 7);
					SET_BLIP_SCALE(iParam0->f_184, fVar12);
					SET_BLIP_NAME(iParam0->f_184, iParam0 + 4);
					SET_BLIP_COLOR(iParam0->f_184, 0.63f, 0.85f, 0.0f, fVar11);
					SET_BLIP_PRIORITY(iParam0->f_184, 3);
				}
				else if (bParam1 == 13)
				{
					fVar16 = 0.5f;
					fVar17 = 30.0f;
					iParam0->f_184 = ADD_BLIP_FOR_COORD(iParam0 + 112, 440, 0.0f, 3, 7);
					SET_BLIP_SCALE(iParam0->f_184, fVar17);
					SET_BLIP_NAME(iParam0->f_184, iParam0 + 4);
					SET_BLIP_COLOR(iParam0->f_184, 0.63f, 0.85f, 0.0f, fVar16);
					SET_BLIP_PRIORITY(iParam0->f_184, 3);
				}
				else
				{
					iParam0->f_184 = ADD_BLIP_FOR_COORD(iParam0 + 100, iParam0->f_80, 0.0f, 3, 7);
					SET_BLIP_NAME(iParam0->f_184, iParam0 + 4);
					iParam0->f_188 = ADD_BLIP_FOR_COORD(iParam0 + 100, iParam0->f_80, 0.0f, 3, 7);
					SET_BLIP_NAME(iParam0->f_188, iParam0 + 4);
					if (bParam1 == 19)
					{
						SET_BLIP_COLOR(iParam0->f_184, 1.0f, 1.0f, 1.0f, 1.0f);
						SET_BLIP_COLOR(iParam0->f_188, 1.0f, 1.0f, 1.0f, 1.0f);
					}
					else if (bParam1 == 20)
					{
						SET_BLIP_COLOR(iParam0->f_184, 0.34f, 0.58f, 0.74f, 1.0f);
						SET_BLIP_COLOR(iParam0->f_188, 0.34f, 0.58f, 0.74f, 1.0f);
					}
					else if (bParam1 == 21)
					{
						SET_BLIP_COLOR(iParam0->f_184, 0.79f, 0.69f, 0.0f, 1.0f);
						SET_BLIP_COLOR(iParam0->f_188, 0.79f, 0.69f, 0.0f, 1.0f);
					}
					else
					{
						SET_BLIP_COLOR(iParam0->f_184, 0.63f, 0.85f, 0.0f, 1.0f);
						SET_BLIP_COLOR(iParam0->f_188, 0.63f, 0.85f, 0.0f, 1.0f);
					}
					if (iParam0->f_80 == 312 || iParam0->f_80 == 311)
					{
						UNK_0xFF3DB575(iParam0->f_188, 1);
						SET_BLIP_PRIORITY(iParam0->f_188, 3);
						SET_BLIP_MAX_DISTANCE(iParam0->f_184, 3.0f);
					}
				}
			}
		}
	}
	return;
}

void Function_210(int iParam0, int iParam1, int iParam2, bool bParam3) //Position: 0xD4C8 / 54472
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
		Function_212(Function_213(iParam2, 0.0f, bParam3));
		vVar4 = { StackVal, StackVal, Function_212(Function_213(iParam2, 0.0f, bParam3)) };
		iVar0 = 0;
		while (iVar0 <= Global_9724)
		{
			if (StackVal == iParam1)
			{
				Function_212(StackVal);
				vVar1 = { StackVal, StackVal, Function_212(StackVal) };
				if (Function_211(StackVal, StackVal, StackVal, StackVal, vVar1, vVar4))
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

bool Function_211(vector3 vParam0, vector3 vParam3) //Position: 0xD5CE / 54734
{
	vector3 vVar0;
	
	vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vParam0, vParam3, StackVal) };
	if (VMAG(vVar0) < 1E-05f)
	{
		return 0;
	}
	return 1;
}

vector3 Function_212(bool bParam0) //Position: 0xD5FB / 54779
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

bool Function_213(vector3 vParam0) //Position: 0xD652 / 54866
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

int Function_214(int iParam0, int iParam1, vector3 vParam2, int iParam5) //Position: 0xD6A0 / 54944
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	vector3 vVar4;
	vector3 vVar7;
	
	if (!Function_72(iParam0))
	{
		return 0;
	}
	if (iParam1 == 0)
	{
		return 0;
	}
	if (Function_49(StackVal, StackVal, vParam2))
	{
		return 0;
	}
	iVar2 = Function_216(iParam1);
	iVar1 = 4294967295;
	uVar3 = Function_213(StackVal, StackVal, vParam2);
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
		Function_212(uVar3);
		vVar7 = { StackVal, StackVal, Function_212(uVar3) };
		iVar0 = 0;
		while (iVar0 <= Global_9724)
		{
			if (StackVal != 0 && iVar1 != 4294967295)
			{
				iVar1 = iVar0;
			}
			else if (StackVal == iParam1)
			{
				Function_212(StackVal);
				vVar4 = { StackVal, StackVal, Function_212(StackVal) };
				if (Function_211(StackVal, StackVal, StackVal, StackVal, vVar4, vVar7))
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
		Global_9724[iVar1] = ADD_BLIP_FOR_COORD(&vParam2, Function_215(iParam1), 0.0f, 2, iVar2);
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

int Function_215(int iParam0) //Position: 0xD883 / 55427
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

int Function_216(int iParam0) //Position: 0xD9BA / 55738
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

void Function_217(int iParam0, int iParam1) //Position: 0xDA72 / 55922
{
	float fVar0;
	bool bVar1;
	
	if (IS_OBJECT_VALID(iParam0->f_192))
	{
		LOG_ERROR("Called CREATE_QUEST_GATEWAY with an already valid gateway");
		return;
	}
	if ((((Function_113(iParam0->f_144, 2048) || Global_3380) || Global_3382) || Global_3392) || Global_34165.f_28)
	{
		return;
	}
	fVar0 = iParam0->f_96;
	iParam0->f_192 = CREATE_GATEWAY_FROM_PARAMS_IN_LAYOUT(Global_63535, Function_29(), *(iParam0 + 112), 0.0f, 0.0f, 0.0f, fVar0, fVar0, fVar0, 0, Global_34573, iParam1, iParam0->f_92, 0, 1, 1);
	Function_218(iParam0);
	bVar1 = GATEWAY_GET_MARKER(iParam0->f_192);
	if (IS_OBJECT_VALID(bVar1))
	{
		DESTROY_OBJECT(bVar1);
	}
	return;
}

void Function_218(int iParam0) //Position: 0xDB2C / 56108
{
	float fVar0;
	bool bVar1;
	
	if (IS_VOLUME_VALID(iParam0->f_216))
	{
		return;
	}
	iParam0->f_216 = CREATE_VOLUME_IN_LAYOUT(Global_63535, Function_29(), 2, *(iParam0 + 112), 0.0f, 0.0f, 0.0f, 2.0f, 2.0f, 2.0f);
	ADD_AMBIENT_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(iParam0->f_216);
	ADD_AMBIENT_SPAWN_RESTRICTION_STAY_OUTSIDE_OF_VOLUME(iParam0->f_216);
	fVar0 = 20.0f;
	if (Function_72(iParam0->f_132))
	{
		if (StackVal || StackVal != 3 != 4)
		{
			fVar0 = 5.0f;
		}
	}
	bVar1 = CREATE_VOLUME_IN_LAYOUT(iParam0->f_216, Function_29(), 2, *(iParam0 + 112), 0.0f, 0.0f, 0.0f, fVar0, fVar0, fVar0);
	DECOR_SET_INT(bVar1, "category", 512);
	Function_219(&bVar1, 0);
	return;
}

int Function_219(var uParam0, int iParam1) //Position: 0xDBCE / 56270
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
	Function_221(DECOR_GET_INT(*uParam0, "script"));
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (IS_VOLUME_VALID(StackVal))
		{
		}
		else
		{
			Function_220(iVar0, uParam0, &uVar1, iParam1);
			return 1;
		}
		iVar0++;
	}
	LOG_ERROR("No room to add another volume... this really shouldn't happen tell steve");
	RELEASE_VOLUME(*uParam0);
	return 0;
}

void Function_220(int iParam0, var uParam1, int iParam2, bool bParam3) //Position: 0xDD2F / 56623
{
	struct<8> Var0;
	
	Global_26155[iParam05].f_8 = *uParam1;
	Global_26155[iParam05].f_16 = GET_CURRENT_GAME_TIME();
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_150("stayout") };
	Global_26155[iParam05].f_12 = CREATE_VOLUME_IN_LAYOUT(Global_26150, &Var0, 3, *iParam2, 0.0f, 0.0f, 0.0f, 12.0f, 5.0f, 12.0f);
	ADD_AI_MOVE_RESTRICTION_STAY_OUTSIDE_OF_VOLUME_SET(Global_26155[iParam05].f_12, 0);
	ADD_CORPSE_PREVENT_INTERFERENCE_VOLUME_OBJ(Global_26155[iParam05].f_12);
	if (bParam3)
	{
		Global_26155[iParam05].f_4 = ADD_BLIP_FOR_COORD(iParam2, 403, 0f, 2, 0);
		SET_BLIP_BLINK(StackVal, 1, 1, 20.0f);
	}
}

int Function_221(bool bParam0) //Position: 0xDDCA / 56778
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
						Function_222(iVar0);
					}
					else if (Global_3386)
					{
						if (Function_152(StackVal, StackVal, Global_34573, vVar1) < 25.0f)
						{
							Function_222(iVar0);
						}
					}
					else if (Function_152(StackVal, StackVal, Global_34573, vVar1) < 55.0f)
					{
						Function_222(iVar0);
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
			Function_222(iVar0);
		}
		iVar0++;
	}
	return 0;
}

void Function_222(int iParam0) //Position: 0xDF2B / 57131
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

void Function_223(int iParam0) //Position: 0xDF8C / 57228
{
	if (!Function_113(iParam0->f_144, 1))
	{
		if (iParam0->f_136 != 4294967295)
		{
			STREAMING_REQUEST_ACTOR(iParam0->f_136, 1, true);
			Function_112(iParam0 + 144, 1);
		}
	}
	if (!Function_113(iParam0->f_144, 8))
	{
		REQUEST_STRING_TABLE("dlc_zombiepack_rcm");
		Function_112(iParam0 + 144, 8);
	}
	if (!Function_113(iParam0->f_144, 2))
	{
		if (UNK_0x214AFB8C(iParam0->f_60))
		{
			STREAMING_REQUEST_GRINGO(iParam0->f_60);
			Function_112(iParam0 + 144, 2);
		}
	}
	if (!Function_113(iParam0->f_144, 4))
	{
		if (UNK_0x214AFB8C(iParam0->f_64))
		{
			STREAMING_REQUEST_PROP(iParam0->f_64, false);
			Function_112(iParam0 + 144, 4);
		}
	}
	return;
}

void Function_224(int iParam0) //Position: 0xE031 / 57393
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
		iVar0 = Function_226(iParam0->f_172);
		iVar1 = Function_225(iParam0->f_172);
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

int Function_225(int iParam0) //Position: 0xE193 / 57747
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

int Function_226(int iParam0) //Position: 0xE1FC / 57852
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

int Function_227(int iParam0) //Position: 0xE265 / 57957
{
	if (!iParam0->f_172 != 0)
	{
		switch (Global_63399)
		{
			case 0x00000001:
				if (!Function_228(iParam0 + 172, 32))
				{
					return 0;
				}
				break;
			
			case 0x00000002:
				if (!Function_228(iParam0 + 172, 64))
				{
					return 0;
				}
				break;
			
			case 0x00000004:
				if (!Function_228(iParam0 + 172, 128))
				{
					return 0;
				}
				break;
			
			case 0x00000008:
				if (!Function_228(iParam0 + 172, 256))
				{
					return 0;
				}
				break;
			
			case 0x00000010:
				if (!Function_228(iParam0 + 172, 512))
				{
					return 0;
				}
				break;
			
			case 0x00000020:
				if (!Function_228(iParam0 + 172, 1024))
				{
					return 0;
				}
				break;
			}
	}
	return 1;
}

bool Function_228(var uParam0, int iParam1) //Position: 0xE311 / 58129
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_229(int iParam0) //Position: 0xE32D / 58157
{
	if (!Function_4(1048576) || Global_3381)
	{
		return 1;
	}
	if (!Function_113(Global_63541[iParam055].f_144, 32768))
	{
		if ((Global_3403 || Global_3405) || Global_3404)
		{
			if (!Function_105(Global_76847, 0x8000000))
			{
				Function_100(Global_34573, 0x8000000, 2, 0);
			}
			return 1;
		}
	}
	return 0;
}

bool Function_230(int iParam0, bool bParam1, bool bParam2) //Position: 0xE386 / 58246
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
		if (!Function_232(iParam0))
		{
			stradd(&cVar0, ": DA: Quest helper now hostile with player.", 64);
			TASK_CLEAR(iParam0->f_204);
			Function_190(iParam0, bParam1, 0, 0, bParam2);
			bVar16 = IS_JOURNAL_ENTRY_IN_LIST(Global_63541[bParam155].f_140, 1);
			if (!bVar16)
			{
				bVar17 = IS_JOURNAL_ENTRY_IN_LIST(Global_63541[bParam155].f_140, 0);
				if (bVar17)
				{
					Function_231(bParam1, 1);
				}
				else
				{
					Function_108("RCM_NPC_Attack_Fail", 10.0f, 1, 0, 0, 1, 0);
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
			Function_190(iParam0, bParam1, 0, 0, bParam2);
			return 0;
		}
		if (FIRE_IS_ACTOR_ON_FIRE(iParam0->f_204))
		{
			stradd(&cVar0, "DA: Quest helper is ablaze.", 64);
			TASK_CLEAR(iParam0->f_204);
			Function_190(iParam0, bParam1, 0, 0, bParam2);
			return 0;
		}
		if (IS_ACTOR_DEAD(iParam0->f_204))
		{
			stradd(&cVar0, "DA: Quest helper is dead.", 64);
			TASK_CLEAR(iParam0->f_204);
			Function_190(iParam0, bParam1, 0, 0, bParam2);
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
						Function_231(bParam1, 1);
					}
					else
					{
						stradd(&cVar0, "DA: Printing help message RCM_NPC_Attack_Fail", 64);
						Function_108("RCM_NPC_Attack_Fail", 10.0f, 1, 0, 0, 1, 0);
						Global_74542[bParam110] = 7;
						Global_74542[bParam110].f_4 = GET_TIME_OF_DAY();
						ADD_TIME_USING_TIME_OF_DAY(&Global_74542[bParam110] + 4, Global_63541[bParam155].f_84);
					}
				}
				else
				{
					Function_108("RCM_NPC_Dead", 10.0f, 1, 0, 0, 1, 0);
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
			Function_190(iParam0, bParam1, 0, 0, bParam2);
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

void Function_231(bool bParam0, bool bParam1) //Position: 0xE78B / 59275
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
	if (!Function_105(Global_76846, 8192))
	{
		Function_100(Global_34573, 8192, 1, 0);
	}
	if (IS_JOURNAL_ENTRY_IN_LIST(Global_63541[bParam055].f_140, 0))
	{
		SET_JOURNAL_ENTRY_PROGRESS(Global_63541[bParam055].f_140, -1.0f, 0, "RCM_FailedJournal");
	}
	return;
}

bool Function_232(int iParam0) //Position: 0xE90B / 59659
{
	if (!iParam0->f_152)
	{
		if (Function_58())
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

bool Function_233(var uParam0, int iParam1) //Position: 0xE9AF / 59823
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_234(int iParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4) //Position: 0xE9CB / 59851
{
	if (!iParam0->f_172 != 0)
	{
		if (Function_228(iParam0 + 172, 4) && !bParam4)
		{
			if (!Function_236(bParam1))
			{
				return 0;
			}
		}
		if (Function_228(iParam0 + 172, 1))
		{
			if (Global_63541[iParam0->f_16855].f_20 != Global_63541[bParam155].f_20 || iParam3)
			{
				if (!Function_70(iParam0->f_168))
				{
					return 0;
				}
			}
		}
		if (Function_228(iParam0 + 172, 2) && Global_3365)
		{
			if (!Function_97(iParam0->f_176, 0))
			{
				return 0;
			}
		}
		if (Function_228(iParam0 + 172, 8) && Global_3365)
		{
			if (!Function_235(iParam0->f_164, 0))
			{
				return 0;
			}
		}
		if (!bParam2)
		{
			return 1;
		}
		return Function_227(iParam0);
	}
	return 1;
}

bool Function_235(int iParam0, bool bParam1) //Position: 0xEA80 / 60032
{
	if (!Function_177(iParam0))
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

bool Function_236(int iParam0) //Position: 0xEAB6 / 60086
{
	return StackVal;
}

bool Function_237(bool bParam0) //Position: 0xEAC6 / 60102
{
	if (((((((((((bParam0 != 31 && Function_70(5)) || (bParam0 != 12 && Function_70(7))) || (bParam0 != 15 && Function_238(1))) || (bParam0 != 16 && Function_70(15))) || (bParam0 != 0 && Function_238(3))) || (bParam0 != 19 && Function_70(9))) || ((bParam0 != 8 || bParam0 != 6) && Function_70(5))) || ((bParam0 != 24 || bParam0 != 22) && Function_97(2, 0))) || (bParam0 != 25 && Function_70(24))) || (bParam0 != 26 && Function_70(25))) || ((((bParam0 != 27 && Function_70(26)) && Function_70(1)) && Function_70(23)) && Function_238(4)))
	{
		if (!Global_74542[bParam010].f_12)
		{
			Global_74542[bParam010].f_12 = 1;
		}
		if (!Function_113(Global_63541[bParam055].f_144, 64))
		{
			Function_112(&Global_63541[bParam055] + 144, 64);
		}
		return 1;
	}
	return 0;
}

bool Function_238(int iParam0) //Position: 0xEBA3 / 60323
{
	if (iParam0 > 0 || iParam0 < 4)
	{
		LOG_ERROR("HAS_GRAVEYARD_EVER_BEEN_COMPLETED: iDeedIndex is out of range!");
		return 0;
	}
	return Global_13172[Function_239(iParam0)11].f_12 < 0;
}

int Function_239(int iParam0) //Position: 0xEC09 / 60425
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

void Function_240(int iParam0, bool bParam1) //Position: 0xECCB / 60619
{
	if (IS_LATER_THAN(StackVal, GET_TIME_OF_DAY()))
	{
		if (IS_ACTOR_VALID(Global_34573))
		{
			if (bParam1 != 3 || bParam1 != 5)
			{
				if (VDIST(*(iParam0 + 100), Global_34574) < 35.0f)
				{
					if (!Function_195(StackVal, StackVal, *(iParam0 + 100), 0x3f800000, 0x42960000, 1, 1, 0))
					{
						Global_74542[bParam110] = 1;
						SET_JOURNAL_ENTRY_PROGRESS(Global_63541[bParam155].f_140, -1.0f, 0, 0);
					}
				}
			}
			else if (VDIST(*(iParam0 + 100), Global_34574) < iParam0->f_76)
			{
				Global_74542[bParam110] = 1;
				SET_JOURNAL_ENTRY_PROGRESS(Global_63541[bParam155].f_140, -1.0f, 0, 0);
			}
		}
	}
	return;
}

void Function_241(var uParam0, int iParam1) //Position: 0xED73 / 60787
{
	Function_253(uParam0, iParam1);
	Function_252(uParam0, iParam1);
	Function_248(uParam0, iParam1);
	if ((Function_70(5) && !Function_70(31)) && !Function_113(Global_63541[3155].f_144, 64))
	{
		Function_112(&Global_63541[3155] + 144, 64);
	}
	Function_247(iParam1);
	if (iParam1 != 12 || iParam1 != 14)
	{
		Function_245(iParam1, Global_30668[0], 0, 0);
	}
	if (((Function_70(5) && !Function_70(15)) && Function_238(1)) && !Function_113(Global_63541[1555].f_144, 64))
	{
		Function_112(&Global_63541[1555] + 144, 64);
	}
	if (iParam1 == 16)
	{
		Function_245(iParam1, Global_30640[0], 0, 0);
	}
	if (iParam1 != 0 || iParam1 != 1)
	{
		Function_245(iParam1, Global_30679[0], 0, 0);
	}
	if (iParam1 != 25 || iParam1 != 26)
	{
		Function_245(iParam1, Global_30693[1], 0, 0);
	}
	Function_243(uParam0, iParam1);
	if ((iParam1 != 28 || iParam1 != 29) && Function_236(iParam1))
	{
		Function_242(29, 0);
	}
	return;
}

void Function_242(int iParam0, int iParam1) //Position: 0xEE74 / 61044
{
	if (Function_259(iParam0))
	{
		LOG_ERROR("SET_QUEST_SCRIPT_ACTIVATED: invalid quest!!");
		return;
	}
	Global_74542[iParam010].f_8 = iParam1;
	return;
}

void Function_243(var uParam0, int iParam1) //Position: 0xEEC0 / 61120
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	if (iParam1 == 27)
	{
		if (!Function_236(iParam1))
		{
			if (Function_238(4))
			{
				if (IS_BLIP_VALID(bLocal_518))
				{
					REMOVE_BLIP(bLocal_518);
				}
				if (Function_70(1) && Function_70(23))
				{
					if (!Function_113(Global_63541[iParam155].f_144, 64))
					{
						Function_112(&Global_63541[iParam155] + 144, 64);
					}
					Function_245(27, Global_30693[1], 0, 0);
				}
				else
				{
					if (Function_113(Global_63541[iParam155].f_144, 64))
					{
						Function_7(&Global_63541[iParam155] + 144, 64);
					}
					if (!Function_105(Global_76847, 4))
					{
						Function_100(Global_34573, 4, 2, 1);
					}
				}
				iVar0 = GET_JOURNAL_ENTRY_NUM_DETAILS(uParam0->f_140);
				iVar1 = 0;
				while (iVar1 <= iVar0)
				{
					if (GET_JOURNAL_ENTRY_DETAIL_STYLE_BY_HASH(uParam0->f_140, GET_JOURNAL_ENTRY_DETAIL_HASH_BY_INDEX(uParam0->f_140, iVar1)) != 4)
					{
						SET_JOURNAL_ENTRY_DETAIL_STYLE_BY_HASH(uParam0->f_140, GET_JOURNAL_ENTRY_DETAIL_HASH_BY_INDEX(uParam0->f_140, iVar1), 4, 0);
					}
					iVar1++;
				}
			}
			else if (Function_70(26))
			{
				if ((!IS_BLIP_VALID(bLocal_518) && Function_152(Global_34573, -1361.986f, 13.066f, 4298.754f) < 40.0f) && !Global_3385)
				{
					bVar2 = FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "sepulcro_gy_blip_vol");
					Function_244(&bLocal_518, bVar2, &Global_63541[2655] + 4, 393);
				}
				if (IS_BLIP_VALID(bLocal_518) && Function_152(Global_34573, -1361.986f, 13.066f, 4298.754f) > 30.0f)
				{
					REMOVE_BLIP(bLocal_518);
				}
			}
		}
	}
	else if (iParam1 != 25 && !Function_70(25))
	{
		if (Function_80(Global_30693[1]) && Function_70(24))
		{
			*(&Global_63541[2555] + 112) = { -1700.197f, 8.07f, 4227.0f };
			if (IS_BLIP_VALID(Global_63541[2555].f_184))
			{
				SET_BLIP_POS(Global_63541[2555].f_184, &Global_63541[2555] + 112);
				if (VDIST(Global_34574, *(&Global_63541[2555] + 112)) > 30.0f)
				{
					SET_BLIP_VISIBLE(Global_63541[2555].f_184, false);
				}
				else if (VDIST(Global_34574, *(&Global_63541[2555] + 112)) < 35.0f)
				{
					SET_BLIP_VISIBLE(Global_63541[2555].f_184, true);
				}
			}
		}
		else
		{
			*(&Global_63541[2555] + 112) = { -1663.993f, 8.501f, 4282.997f };
			if (IS_BLIP_VALID(Global_63541[2555].f_184))
			{
				SET_BLIP_VISIBLE(Global_63541[2555].f_184, true);
				SET_BLIP_POS(Global_63541[2555].f_184, &Global_63541[2555] + 112);
			}
		}
	}
	return;
}

void Function_244(bool bParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0xF149 / 61769
{
	float fVar0;
	float fVar1;
	
	fVar0 = 1.0f;
	fVar1 = 50.0f;
	if (IS_VOLUME_VALID(bParam1))
	{
		*bParam0 = Function_75(bParam1, iParam3, 0.0f);
		SET_BLIP_NAME(*bParam0, bParam2);
		SET_BLIP_PRIORITY(*bParam0, 3);
		if (iParam3 == 440)
		{
			SET_BLIP_SCALE(*bParam0, fVar1);
			fVar0 = 0.5f;
		}
		SET_BLIP_COLOR(*bParam0, 0.63f, 0.85f, 0.0f, fVar0);
	}
	else
	{
		LOG_ERROR("Passed invalid volume to ADD_BLIP_FOR_GRAVEYARD!");
	}
}

void Function_245(int iParam0, int iParam1, bool bParam2, bool bParam3) //Position: 0xF1E0 / 61920
{
	int iVar0;
	
	iVar0 = 0;
	if (!Function_234(&(Global_63541[iParam055]), iParam0, 1, 1, 1))
	{
		if (Function_113(Global_63541[iParam055].f_144, 64))
		{
			Function_7(&Global_63541[iParam055] + 144, 64);
		}
		return;
	}
	if (Function_246(iParam1) || Function_237(iParam0))
	{
		if (!Function_113(Global_63541[iParam055].f_144, 64))
		{
			Function_112(&Global_63541[iParam055] + 144, 64);
		}
	}
	else if (!Function_237(iParam0) && Function_113(Global_63541[iParam055].f_144, 64))
	{
		Function_7(&Global_63541[iParam055] + 144, 64);
	}
	if (Function_80(iParam1))
	{
		if (Function_236(iParam0))
		{
			Function_242(iParam0, 0);
		}
		if (!Function_113(Global_74542[iParam010].f_24, 1))
		{
			Function_112(&Global_74542[iParam010] + 24, 1);
			if (IS_BLIP_VALID(Global_63541[iParam055].f_184))
			{
				SET_BLIP_COLOR(Global_63541[iParam055].f_184, 0.63f, 0.85f, 0.0f, 0.5f);
				if (Global_29006 != Global_63541[iParam055].f_132 && !Function_193())
				{
					Function_108("TerrCont_RCM", 0x41200000, 1, 0, 2, 1, 0);
				}
			}
		}
	}
	else if (!Function_236(iParam0))
	{
		if (!bParam2)
		{
			Function_242(iParam0, 1);
		}
		else if (Function_70(iParam0))
		{
			if (!IS_ACTOR_VALID(bParam3))
			{
				Function_242(iParam0, 1);
			}
		}
		if (Function_113(Global_74542[iParam010].f_24, 1))
		{
			Function_7(&Global_74542[iParam010] + 24, 1);
			if (IS_BLIP_VALID(Global_63541[iParam055].f_184))
			{
				SET_BLIP_COLOR(Global_63541[iParam055].f_184, 0.63f, 0.85f, 0.0f, 1.0f);
			}
		}
	}
}

bool Function_246(int iParam0) //Position: 0xF387 / 62343
{
	if (!Function_72(iParam0))
	{
		return 1;
	}
	return Function_233(&(Global_29008[iParam0]), 4);
}

void Function_247(int iParam0) //Position: 0xF3A3 / 62371
{
	if ((((((iParam0 != 32 && Function_70(31)) || (iParam0 != 33 && Function_70(32))) || (iParam0 != 34 && Function_70(33))) || (iParam0 != 35 && Function_70(34))) || (iParam0 != 36 && Function_70(35))) || (iParam0 != 37 && Function_70(36)))
	{
		if (!Global_74542[iParam010].f_12)
		{
			Global_74542[iParam010].f_12 = 1;
		}
		if (!Function_113(Global_63541[iParam055].f_144, 64))
		{
			Function_112(&Global_63541[iParam055] + 144, 64);
		}
	}
	return;
}

void Function_248(var uParam0, int iParam1) //Position: 0xF42C / 62508
{
	int iVar0;
	int iVar1;
	char* cVar2[24];
	char* cVar8[24];
	char* cVar14[24];
	char* cVar20[24];
	int iVar26;
	int iVar27;
	
	if (iParam1 == 9)
	{
		if (!Function_236(iParam1))
		{
			if (Function_70(8))
			{
				if (!Function_251(uParam0, iParam1, 1, 1))
				{
					iVar0 = Function_42(491);
					iVar1 = Function_42(497);
					strcpy(&cVar2, "dyn_sage", 24);
					strcpy(&cVar8, "dyn_snowdrop", 24);
					if (Function_113(Global_74542[810].f_16, 32))
					{
						if (iVar0 == 1)
						{
							strcpy(&cVar14, INT_TO_STRING((5 - iVar0)), 24);
							UI_SET_STRING(&cVar2, &cVar14);
							Function_250("Merchant_2_MoreSage", 0x40f00000, 1, 2, 0, 0, 0, 0);
							Function_7(&Global_74542[810] + 16, 32);
							Function_112(&Global_74542[810] + 16, 128);
						}
					}
					else if (Function_113(Global_74542[810].f_16, 128))
					{
						if (iVar0 == 2)
						{
							strcpy(&cVar14, INT_TO_STRING((5 - iVar0)), 24);
							UI_SET_STRING(&cVar2, &cVar14);
							Function_250("Merchant_2_MoreSage", 0x40f00000, 1, 2, 0, 0, 0, 0);
							Function_7(&Global_74542[810] + 16, 128);
							Function_112(&Global_74542[810] + 16, 256);
						}
					}
					else if (Function_113(Global_74542[810].f_16, 256))
					{
						if (iVar0 == 3)
						{
							strcpy(&cVar14, INT_TO_STRING((5 - iVar0)), 24);
							UI_SET_STRING(&cVar2, &cVar14);
							Function_250("Merchant_2_MoreSage", 0x40f00000, 1, 2, 0, 0, 0, 0);
							Function_7(&Global_74542[810] + 16, 256);
							Function_112(&Global_74542[810] + 16, 512);
						}
					}
					else if (Function_113(Global_74542[810].f_16, 512))
					{
						if (iVar0 == 4)
						{
							strcpy(&cVar14, INT_TO_STRING((5 - iVar0)), 24);
							UI_SET_STRING(&cVar2, &cVar14);
							Function_250("Merchant_2_MoreSage", 0x40f00000, 1, 2, 0, 0, 0, 0);
							Function_7(&Global_74542[810] + 16, 512);
							Function_112(&Global_74542[810] + 16, 1024);
						}
					}
					else if (Function_113(Global_74542[810].f_16, 1024))
					{
						if (iVar0 == 5)
						{
							strcpy(&cVar14, "", 24);
							SET_JOURNAL_ENTRY_DETAIL_STYLE(uParam0->f_140, "Merchant_2_MoreSage", 4, 0);
							UI_SET_STRING(&cVar2, &cVar14);
						}
					}
					if (Function_113(Global_74542[810].f_16, 1))
					{
						if (iVar1 == 1)
						{
							strcpy(&cVar20, INT_TO_STRING((5 - iVar1)), 24);
							UI_SET_STRING(&cVar8, &cVar20);
							Function_250("Merchant_2_MoreSnowdrop", 0x40f00000, 1, 2, 0, 0, 0, 0);
							Function_7(&Global_74542[810] + 16, 1);
							Function_112(&Global_74542[810] + 16, 2);
						}
					}
					else if (Function_113(Global_74542[810].f_16, 2))
					{
						if (iVar1 == 2)
						{
							strcpy(&cVar20, INT_TO_STRING((5 - iVar1)), 24);
							UI_SET_STRING(&cVar8, &cVar20);
							Function_250("Merchant_2_MoreSnowdrop", 0x40f00000, 1, 2, 0, 0, 0, 0);
							Function_7(&Global_74542[810] + 16, 2);
							Function_112(&Global_74542[810] + 16, 4);
						}
					}
					else if (Function_113(Global_74542[810].f_16, 4))
					{
						if (iVar1 == 3)
						{
							strcpy(&cVar20, INT_TO_STRING((5 - iVar1)), 24);
							UI_SET_STRING(&cVar8, &cVar20);
							Function_250("Merchant_2_MoreSnowdrop", 0x40f00000, 1, 2, 0, 0, 0, 0);
							Function_7(&Global_74542[810] + 16, 4);
							Function_112(&Global_74542[810] + 16, 8);
						}
					}
					else if (Function_113(Global_74542[810].f_16, 8))
					{
						if (iVar1 == 4)
						{
							strcpy(&cVar20, INT_TO_STRING((5 - iVar1)), 24);
							UI_SET_STRING(&cVar8, &cVar20);
							Function_250("Merchant_2_MoreSnowdrop", 0x40f00000, 1, 2, 0, 0, 0, 0);
							Function_7(&Global_74542[810] + 16, 8);
							Function_112(&Global_74542[810] + 16, 16);
						}
					}
					else if (Function_113(Global_74542[810].f_16, 16))
					{
						if (iVar1 == 5)
						{
							strcpy(&cVar20, "", 24);
							SET_JOURNAL_ENTRY_DETAIL_STYLE(uParam0->f_140, "Merchant_2_MoreSnowdrop", 4, 0);
							UI_SET_STRING(&cVar8, &cVar20);
						}
					}
					if (iVar0 <= 5 && iVar1 <= 5)
					{
						iVar26 = GET_JOURNAL_ENTRY_NUM_DETAILS(uParam0->f_140);
						iVar27 = 0;
						while (iVar27 <= iVar26)
						{
							SET_JOURNAL_ENTRY_DETAIL_STYLE_BY_HASH(uParam0->f_140, GET_JOURNAL_ENTRY_DETAIL_HASH_BY_INDEX(uParam0->f_140, iVar27), 4, 0);
							iVar27++;
						}
						APPEND_JOURNAL_ENTRY_DETAIL(uParam0->f_140, "ZOMBIE_STORY_2_ReturnNigel", 0, 3, false);
						Function_249(uParam0->f_140, 0);
						Function_250("ZOMBIE_STORY_2_ReturnNigel", 0x40f00000, 1, 2, 0, 0, 0, 0);
						if (!Function_113(Global_63541[iParam155].f_144, 64))
						{
							Function_112(&Global_63541[iParam155] + 144, 64);
						}
						Function_242(iParam1, 1);
					}
				}
			}
		}
	}
	return;
}

void Function_249(char* cParam0, bool bParam1) //Position: 0xF959 / 63833
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

void Function_250(bool bParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7) //Position: 0xF97E / 63870
{
	struct<4> Var0;
	int iVar4;
	
	if (bParam4)
	{
		HUD_CLEAR_OBJECTIVE();
		HUD_CLEAR_OBJECTIVE_QUEUE();
	}
	if (Global_3380 != 1 && Global_6269 == 4294967295)
	{
		Var0 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var0 = { StackVal, StackVal, StackVal, Function_109(Global_6269) };
		}
		PRINT_OBJECTIVE_B(bParam0, iParam1, iParam7, iParam3, bParam2, &Var0, 0, iParam6);
	}
	else
	{
		iVar4 = "";
		PRINT_OBJECTIVE_B(bParam0, iParam1, iParam7, iParam3, bParam2, iVar4, iParam5, iParam6);
	}
}

bool Function_251(int iParam0, int iParam1, bool bParam2, int iParam3) //Position: 0xFA03 / 64003
{
	if (!iParam0->f_172 != 0)
	{
		if (Function_228(iParam0 + 172, 4))
		{
			if (!Function_236(iParam1))
			{
				return 0;
			}
		}
		if (Function_228(iParam0 + 172, 1))
		{
			if (Global_63541[iParam0->f_16855].f_20 != Global_63541[iParam155].f_20 || iParam3)
			{
				if (!Function_70(iParam0->f_168))
				{
					return 0;
				}
			}
		}
		if (Function_228(iParam0 + 172, 2) && Global_3365)
		{
			if (!Function_97(iParam0->f_176, 0))
			{
				return 0;
			}
		}
		if (Function_228(iParam0 + 172, 8) && Global_3365)
		{
			if (!Function_235(iParam0->f_164, 0))
			{
				return 0;
			}
		}
		if (!bParam2)
		{
			return 1;
		}
		return Function_227(iParam0);
	}
	return 1;
}

void Function_252(var uParam0, int iParam1) //Position: 0xFAB7 / 64183
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	
	if (iParam1 != 7 && !Function_236(iParam1))
	{
		if (Function_238(1))
		{
			if (IS_BLIP_VALID(bLocal_519))
			{
				REMOVE_BLIP(bLocal_519);
			}
		}
		if (Function_238(2))
		{
			if (IS_BLIP_VALID(bLocal_522))
			{
				REMOVE_BLIP(bLocal_522);
			}
		}
		if (Function_238(3))
		{
			if (IS_BLIP_VALID(bLocal_520))
			{
				REMOVE_BLIP(bLocal_520);
			}
		}
		if ((Function_238(1) && Function_238(2)) && Function_238(3))
		{
			iVar0 = GET_JOURNAL_ENTRY_NUM_DETAILS(uParam0->f_140);
			iVar1 = 0;
			while (iVar1 <= iVar0)
			{
				SET_JOURNAL_ENTRY_DETAIL_STYLE_BY_HASH(uParam0->f_140, GET_JOURNAL_ENTRY_DETAIL_HASH_BY_INDEX(uParam0->f_140, iVar1), 4, 0);
				iVar1++;
			}
			APPEND_JOURNAL_ENTRY_DETAIL(uParam0->f_140, "Seth1_OBJ_ReturnToSeth", 0, 3, false);
			Function_249(uParam0->f_140, 0);
			Function_250("Seth1_OBJ_ReturnToSeth", 0x40f00000, 1, 2, 0, 0, 0, 0);
			Function_242(iParam1, 1);
		}
		else if (Function_70(6))
		{
			if (((!IS_BLIP_VALID(bLocal_519) && !Function_238(1)) && Function_152(Global_34573, -1792.576f, 24.675f, 2850.352f) < 50.0f) && !Global_3385)
			{
				bVar2 = FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "coots_gy_blip_vol");
				Function_244(&bLocal_519, bVar2, &Global_63541[655] + 4, 393);
			}
			if (IS_BLIP_VALID(bLocal_519) && Function_152(Global_34573, -1792.576f, 24.675f, 2850.352f) > 30.0f)
			{
				REMOVE_BLIP(bLocal_519);
			}
			if (((!IS_BLIP_VALID(bLocal_522) && !Function_238(2)) && Function_152(Global_34573, -2908.823f, 19.075f, 2689.178f) < 50.0f) && !Global_3385)
			{
				bVar3 = FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "oddfellows_gy_blip_vol");
				Function_244(&bLocal_522, bVar3, &Global_63541[655] + 4, 393);
			}
			if (IS_BLIP_VALID(bLocal_522) && Function_152(Global_34573, -2908.823f, 19.075f, 2689.178f) > 30.0f)
			{
				REMOVE_BLIP(bLocal_522);
			}
			if (((!IS_BLIP_VALID(bLocal_520) && !Function_238(3)) && Function_152(Global_34573, -3908.769f, 31.114f, 2912.107f) < 50.0f) && !Global_3385)
			{
				bVar4 = FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "tumbleweed_gy_blip_vol");
				Function_244(&bLocal_520, bVar4, &Global_63541[655] + 4, 393);
			}
			if (IS_BLIP_VALID(bLocal_520) && Function_152(Global_34573, -3908.769f, 31.114f, 2912.107f) > 30.0f)
			{
				REMOVE_BLIP(bLocal_520);
			}
		}
	}
	return;
}

void Function_253(var uParam0, int iParam1) //Position: 0xFD8C / 64908
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (iParam1 != 3 && !Function_70(3))
	{
		if (Function_238(0))
		{
			if (Function_80(Global_30717[0]))
			{
				if (IS_BLIP_VALID(bLocal_521))
				{
					REMOVE_BLIP(bLocal_521);
				}
				if (Function_236(3))
				{
					Function_242(3, 0);
				}
				if (((Global_13172[Function_239(0)11].f_12 != 1 && !Function_70(3)) && !IS_BLIP_VALID(GET_BLIP_ON_OBJECT(FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "blackwater_surv_blip_vol")))) && !DECOR_CHECK_EXIST(FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "blackwater_surv_blip_vol"), "bDontBlipMe"))
				{
					bVar0 = Function_75(FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "blackwater_surv_blip_vol"), 312, 0.0f);
					if (IS_BLIP_VALID(bVar0))
					{
						SET_BLIP_COLOR(bVar0, 0.63f, 0.85f, 0.0f, 1.0f);
						SET_BLIP_BLINK(bVar0, 1, 0, 5f);
						SET_BLIP_NAME(bVar0, &Global_63541[255] + 4);
					}
				}
			}
			else if (!Function_236(3))
			{
				Function_242(3, 1);
				iVar1 = GET_JOURNAL_ENTRY_NUM_DETAILS(uParam0->f_140);
				iVar2 = 0;
				while (iVar2 <= iVar1)
				{
					SET_JOURNAL_ENTRY_DETAIL_STYLE_BY_HASH(uParam0->f_140, GET_JOURNAL_ENTRY_DETAIL_HASH_BY_INDEX(uParam0->f_140, iVar2), 4, 0);
					iVar2++;
				}
				if (IS_BLIP_VALID(bLocal_521))
				{
					REMOVE_BLIP(bLocal_521);
				}
				APPEND_JOURNAL_ENTRY_DETAIL(Global_63541[355].f_140, "ZOMBIE_STORY_1Survivor_OBJ", 0, 3, false);
				Function_249(Global_63541[355].f_140, 0);
				Function_242(3, 1);
				Function_250("ZOMBIE_STORY_1Survivor_OBJ", 0x40f00000, 1, 2, 0, 0, 0, 0);
				Function_254(0);
				if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "blackwater_surv_blip_vol"))))
				{
					REMOVE_BLIP(GET_BLIP_ON_OBJECT(FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "blackwater_surv_blip_vol")));
				}
			}
		}
		else if (Function_70(4) && !Function_70(3))
		{
			if (!IS_BLIP_VALID(bLocal_521) && Function_152(Global_34573, 530.885f, 94.369f, 1198.078f) < 70.0f)
			{
				bVar3 = FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "blackwater_gy_blip_vol");
				Function_244(&bLocal_521, bVar3, &Global_63541[455] + 4, 393);
			}
			if (IS_BLIP_VALID(bLocal_521) && Function_152(Global_34573, 530.885f, 94.369f, 1198.078f) > 40.0f)
			{
				REMOVE_BLIP(bLocal_521);
			}
		}
	}
	return;
}

void Function_254(int iParam0) //Position: 0x100A4 / 65700
{
	bool bVar0;
	bool bVar1;
	char* cVar2[64];
	char* cVar18[24];
	char* cVar24[24];
	char* cVar30[24];
	char* cVar36[24];
	
	if (Function_97(1, 0))
	{
		Function_258("ZOMBIE_STORY_1_OBJ");
		if (!Function_70(2))
		{
			bVar0 = "ZOMBIE_STORY_1_SHORT";
		}
	}
	if (Function_70(4) && !Function_238(0))
	{
		bVar0 = "ZOMBIE_STORY_1a_SHORT";
	}
	if (Function_70(5))
	{
		SET_JOURNAL_ENTRY_DETAIL_STYLE(Function_256(), "ZOMBIE_STORY_1_OBJ", 4, 0);
		Function_258("ZOMBIE_STORY_2Nigel_OBJ");
		Function_258("ZOMBIE_STORY_2Seth_OBJ");
		if (!Function_70(8) && !Function_70(6))
		{
			bVar0 = "ZOMBIE_STORY_2_SHORT";
		}
	}
	if (Function_70(6))
	{
		SET_JOURNAL_ENTRY_DETAIL_STYLE(Function_256(), "ZOMBIE_STORY_2Seth_OBJ", 4, 0);
		if (!Function_70(8))
		{
			bVar0 = "ZOMBIE_STORY_2Nigel_SHORT";
		}
	}
	if (Function_70(8))
	{
		SET_JOURNAL_ENTRY_DETAIL_STYLE(Function_256(), "ZOMBIE_STORY_2Nigel_OBJ", 4, 0);
		if (!Function_70(6))
		{
			bVar0 = "ZOMBIE_STORY_2Seth_SHORT";
		}
	}
	if (!Function_228(&Global_3422[240] + 128, 2) || ((((((Function_70(14) && Function_70(18)) && Function_70(37)) && Function_70(7)) && Function_70(11)) && Function_70(5)) && Function_70(21)))
	{
		Function_258("ZOMBIE_STORY_3_OBJ");
		if (!Function_97(2, 0))
		{
			bVar0 = "ZOMBIE_STORY_3_SHORT";
		}
	}
	if (Function_97(2, 0))
	{
		SET_JOURNAL_ENTRY_DETAIL_STYLE(Function_256(), "ZOMBIE_STORY_3_OBJ", 4, 0);
		Function_258("ZOMBIE_STORY_4_OBJ");
		if (!Function_70(24))
		{
			bVar0 = "ZOMBIE_STORY_4_SHORT";
		}
	}
	if (!Function_228(&Global_3422[340] + 128, 2) || ((Function_70(27) && Function_70(1)) && Function_70(23)))
	{
		SET_JOURNAL_ENTRY_DETAIL_STYLE(Function_256(), "ZOMBIE_STORY_4_OBJ", 4, 0);
		Function_258("ZOMBIE_STORY_5_OBJ");
		if (!Function_97(3, 0))
		{
			bVar0 = "ZOMBIE_STORY_5_SHORT";
		}
	}
	if (Function_97(3, 0))
	{
		SET_JOURNAL_ENTRY_DETAIL_STYLE(Function_256(), "ZOMBIE_STORY_5_OBJ", 4, 0);
	}
	if (!Function_70(5))
	{
		CLEAR_JOURNAL_ENTRY(Global_63541[255].f_140);
		CLEAR_JOURNAL_ENTRY(Global_63541[455].f_140);
		CLEAR_JOURNAL_ENTRY(Global_63541[355].f_140);
		bVar1 = false;
		if (Function_70(2))
		{
			PRINTSTRING("Loading Active Quests Journal entry created");
			PRINTNL();
			PRINTSTRING("Current quest is : ");
			PRINTSTRING(&Global_63541[255] + 4);
			PRINTNL();
			APPEND_JOURNAL_ENTRY_DETAIL(Global_63541[255].f_140, "blackwater1_OBJ", 0, 3, !bVar1);
			if (Function_70(4))
			{
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_63541[455].f_140, "blackwater1_OBJ", 4, 0);
			}
		}
		if (Function_70(4))
		{
			PRINTSTRING("Loading Active Quests Journal entry created");
			PRINTNL();
			PRINTSTRING("Current quest is : ");
			PRINTSTRING(&Global_63541[455] + 4);
			PRINTNL();
			strcpy(&cVar2, "Blackwater graveyard deed is ", 64);
			stradd(&cVar2, I2STR(Function_255(Global_30734)), 64);
			APPEND_JOURNAL_ENTRY_DETAIL(Global_63541[455].f_140, "blackwater3_OBJ", 0, 3, !bVar1);
			if (Function_255(Global_30734) >= 0)
			{
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_63541[455].f_140, "blackwater3_OBJ", 4, 0);
			}
			if (Function_255(Global_30734) >= 0)
			{
				APPEND_JOURNAL_ENTRY_DETAIL(Global_63541[355].f_140, "GY_RETURN_BLK", 0, 3, !bVar1);
				if (Function_42(658) >= 0)
				{
					SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_63541[355].f_140, "GY_RETURN_BLK", 4, 0);
				}
			}
			if (Function_42(658) >= 0)
			{
				APPEND_JOURNAL_ENTRY_DETAIL(Global_63541[355].f_140, "ZOMBIE_STORY_1Survivor_OBJ", 0, 3, !bVar1);
				if (Function_70(3))
				{
					SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_63541[355].f_140, "ZOMBIE_STORY_1Survivor_OBJ", 4, 0);
				}
				else
				{
					SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_63541[355].f_140, "ZOMBIE_STORY_1Survivor_OBJ", 3, 0);
				}
			}
			if (Function_70(3))
			{
				APPEND_JOURNAL_ENTRY_DETAIL(Global_63541[355].f_140, "blackwater2_OBJ", 0, 3, !bVar1);
			}
		}
	}
	if (!Function_70(7))
	{
		CLEAR_JOURNAL_ENTRY(Global_63541[655].f_140);
		CLEAR_JOURNAL_ENTRY(Global_63541[755].f_140);
		if (Function_70(6))
		{
			APPEND_JOURNAL_ENTRY_DETAIL(Global_63541[655].f_140, "nseth1_OBJ", 0, 3, false);
		}
		if (((Function_70(6) && Function_255(Global_30735) < 0) && Function_255(Global_30737) < 0) && Function_255(Global_30738) < 0)
		{
			SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_63541[655].f_140, "nseth1_OBJ", 4, 0);
			APPEND_JOURNAL_ENTRY_DETAIL(Global_63541[755].f_140, "Seth1_OBJ_ReturnToSeth", 0, 3, false);
		}
	}
	if (!Function_70(11))
	{
		if (Function_70(8))
		{
			CLEAR_JOURNAL_ENTRY(Global_63541[855].f_140);
			strcpy(&cVar18, "dyn_sage", 24);
			strcpy(&cVar24, "dyn_snowdrop", 24);
			strcpy(&cVar30, INT_TO_STRING((5 - Function_42(491))), 24);
			stradd(&cVar30, " ", 24);
			strcpy(&cVar36, INT_TO_STRING((5 - Function_42(497))), 24);
			stradd(&cVar36, " ", 24);
			UI_SET_STRING(&cVar18, &cVar30);
			UI_SET_STRING(&cVar24, &cVar36);
			APPEND_JOURNAL_ENTRY_DETAIL(Global_63541[855].f_140, "merchant1_OBJ", 0, 3, false);
			APPEND_JOURNAL_ENTRY_DETAIL(Global_63541[855].f_140, "Merchant_2_MoreSage", 0, 3, false);
			if (Function_42(491) > 5)
			{
				strcpy(&cVar30, "", 24);
				UI_SET_STRING(&cVar18, &cVar30);
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_63541[855].f_140, "Merchant_2_MoreSage", 4, 0);
			}
			APPEND_JOURNAL_ENTRY_DETAIL(Global_63541[855].f_140, "Merchant_2_MoreSnowdrop", 0, 3, false);
			if (Function_42(497) > 5)
			{
				strcpy(&cVar36, "", 24);
				UI_SET_STRING(&cVar24, &cVar36);
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_63541[855].f_140, "Merchant_2_MoreSnowdrop", 4, 0);
			}
			if (Function_42(491) <= 5 && Function_42(497) <= 5)
			{
				APPEND_JOURNAL_ENTRY_DETAIL(Global_63541[955].f_140, "ZOMBIE_STORY_2_ReturnNigel", 0, 3, false);
				SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_63541[855].f_140, "merchant1_OBJ", 4, 0);
			}
		}
		if (Function_70(9))
		{
			SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_63541[855].f_140, "merchant1_OBJ", 4, 0);
			SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_63541[955].f_140, "ZOMBIE_STORY_2_ReturnNigel", 4, 0);
			APPEND_JOURNAL_ENTRY_DETAIL(Global_63541[955].f_140, "merchant2_OBJ", 0, 3, false);
		}
		if (Function_70(10))
		{
			SET_JOURNAL_ENTRY_DETAIL_STYLE(Global_63541[955].f_140, "merchant2_OBJ", 4, 0);
			APPEND_JOURNAL_ENTRY_DETAIL(Global_63541[1055].f_140, "merchant3_OBJ", 0, 3, false);
		}
	}
	if (iParam0 && IS_STRING_VALID(bVar0))
	{
		Function_250(bVar0, 0x40f00000, 1, 2, 0, 0, 0, 0);
	}
	return;
}

int Function_255(bool bParam0) //Position: 0x10999 / 67993
{
	if (!Function_3(bParam0))
	{
		return 4294967295;
	}
	return Global_13172[bParam011].f_12;
}

var Function_256() //Position: 0x109B3 / 68019
{
	return STRING_TO_HASH(Function_257());
}

var Function_257() //Position: 0x109BF / 68031
{
	return "ZOMBIE_STORY";
}

void Function_258(char* cParam0) //Position: 0x109D4 / 68052
{
	if (!IS_JOURNAL_ENTRY_IN_LIST(Function_256(), 0))
	{
		CREATE_JOURNAL_ENTRY(Function_257(), 2, 38, "Mission_Strangers");
		PREPEND_JOURNAL_ENTRY(Function_256(), false);
	}
	APPEND_JOURNAL_ENTRY_DETAIL(Function_256(), cParam0, 0, 3, false);
	Function_249(Function_256(), 0);
	return;
}

bool Function_259(int iParam0) //Position: 0x10A1C / 68124
{
	if (Global_74542[iParam010] == 0)
	{
		return 1;
	}
	return 0;
}

void Function_260() //Position: 0x10A31 / 68145
{
	Global_63535 = CREATE_LAYOUT("QuestLayout");
	return;
}

void Function_261(int iParam0) //Position: 0x10A4B / 68171
{
	strcpy(iParam0 + 12, "MISSIONS", 16);
	if (Global_3421)
	{
		*iParam0 = 34345;
		iParam0->f_4 = 34338;
		iParam0->f_8 = 34345;
	}
	else
	{
		*iParam0 = 106962;
		iParam0->f_4 = 68696;
		iParam0->f_8 = 68254;
	}
	iParam0->f_28 = 0;
	return;
}

void Function_262() //Position: 0x10A9E / 68254
{
	Function_263(&Global_3422);
	return;
}

void Function_263(int iParam0) //Position: 0x10AAA / 68266
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= *iParam0)
	{
		if (iParam0[iVar040]->f_92)
		{
			Function_264(iParam0[iVar040], iVar0);
		}
		iVar0++;
	}
	return;
}

void Function_264(int iParam0, int iParam1) //Position: 0x10ADA / 68314
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
				Function_265(iParam0->f_44);
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

void Function_265(bool bParam0) //Position: 0x10BCE / 68558
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

int Function_266() //Position: 0x10C58 / 68696
{
	if (!Global_3366)
	{
		return 0;
	}
	if (Function_267(&Global_3422, 1) >= 0)
	{
		Global_3390 = 1;
		return 0;
	}
	Global_3390 = 1;
	return 1;
}

int Function_267(int iParam0, bool bParam1) //Position: 0x10C7D / 68733
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
				Function_405();
			}
			else if (Global_62481 == 4294967294)
			{
				Function_404();
			}
			DECOR_SET_BOOL(GET_PLAYER_ACTOR(0), "launchedmissiontester", true);
			return bVar1;
		}
	}
	if (!Global_30923 != 0)
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (IS_SCRIPT_VALID(iParam0[iVar040]->f_108))
			{
				TERMINATE_SCRIPT(iParam0[iVar040]->f_108);
			}
			iVar0++;
		}
		Global_30923 = 0;
	}
	if (Function_16())
	{
		Function_263(iParam0);
		return bVar1;
	}
	Function_403(iParam0);
	if (Global_3382)
	{
		Function_263(iParam0);
		return bVar1;
	}
	if (Global_3380)
	{
		Function_263(iParam0);
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
	if (Global_3379)
	{
		Function_263(iParam0);
		Global_3380 = 1;
		Function_401(1, 0);
		return bVar1;
	}
	if (Global_63096 && !Function_399(&Global_63084))
	{
		Function_263(iParam0);
		return bVar1;
	}
	if (Function_398(1, 0, 0, 5) && !Global_3380)
	{
		Function_263(iParam0);
		return bVar1;
	}
	if (bParam1)
	{
		if (!Global_30938 != 0)
		{
			iVar2 = Function_8(StackVal, StackVal, Global_30938);
			if (Function_177(iVar2))
			{
				Var3 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_397(iParam0, iVar2) };
				if (!Var3.f_104 != 0)
				{
					Function_322(&Var3, 0, 0, 0);
				}
			}
			Global_30938 = 0;
		}
	}
	if (Global_34165.f_36 && Global_3366)
	{
		if (Function_99(Global_34165.f_20))
		{
			if (!Global_3422[Global_34165.f_2040].f_104 != 0)
			{
				Function_322(&(Global_3422[Global_34165.f_2040]), 0, 1, 1);
				Global_34165.f_36 = 0;
			}
		}
	}
	iVar0 = 0;
	while (iVar0 <= 4 + 1)
	{
		if ((*iParam0)[iVar040] != Global_29003 || !bParam1)
		{
			Function_268(iParam0[iVar040], iVar0, bParam1);
		}
		iVar0++;
	}
	if ((Global_26281 + 5.0f) - 1.0f) > GET_CURRENT_GAME_TIME()
	{
		Global_3406 = 0;
	}
	return bVar1;
}

void Function_268(bool bParam0, int iParam1, bool bParam2) //Position: 0x10EAA / 69290
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
			Function_264(bParam0, iParam1);
			return;
		}
	}
	if (Function_97(iParam1, 0) && !bParam0->f_104 != 2)
	{
		Function_264(bParam0, iParam1);
		return;
	}
	iVar0 = Function_321(StackVal);
	if (iVar0 != 1)
	{
		if (!Function_320(bParam0))
		{
			Function_264(bParam0, iParam1);
			return;
		}
	}
	if (IS_SCRIPT_VALID(bParam0->f_108))
	{
		Function_264(bParam0, iParam1);
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
					if (!Function_319(bParam0))
					{
						bParam0->f_124 = 0;
						Function_318(bParam0->f_100, 0, bParam0->f_128, bParam0 + 12);
						if ((IS_GRINGO_VALID(GET_GRINGO_FROM_OBJECT(bParam0->f_40)) && iParam1 == 11) && iParam1 == 54)
						{
							if (GRINGO_IS_ACTIVATION_ALLOWED(GET_GRINGO_FROM_OBJECT(bParam0->f_40)))
							{
								GRINGO_ALLOW_ACTIVATION(GET_GRINGO_FROM_OBJECT(bParam0->f_40), false);
							}
						}
					}
					else if (Function_313(bParam0))
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
							Function_318(bParam0->f_100, 0, bParam0->f_128, bParam0 + 12);
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
						Function_318(bParam0->f_100, 1, bParam0->f_128, bParam0 + 12);
						if (Function_228(bParam0 + 128, 4096))
						{
							Function_312(bParam0 + 128, 4096);
						}
					}
					fVar14 = Function_54(StackVal, StackVal, StackVal, StackVal, Global_34574, *(bParam0 + 52));
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
								bParam0->f_40 = CREATE_GRINGO_IN_LAYOUT_BY_ID(Global_6287, Function_29(), bParam0->f_28, vVar11, 0.0f, 0.0f, 0.0f);
								if (fVar14 > 175.0f)
								{
									Function_312(bParam0 + 128, 8388608);
								}
								else
								{
									Function_311(bParam0 + 128, 8388608);
								}
							}
						}
					}
					if ((((!IS_OBJECT_VALID(bParam0->f_44) && (!bParam0->f_116 || bParam0->f_124)) && ((!iParam1 != 14 || fVar14 < 100.0f) || Global_3406)) && ((fVar14 < 7.5f || (bParam0->f_116 && bParam0->f_124)) || Global_3406)) && (!Function_228(bParam0 + 128, 1048576) || bParam0->f_124))
					{
						Function_305(bParam0);
						if (bParam0->f_128 & 524288 >= 0)
						{
							Function_14(4194304);
						}
						if (bParam0->f_124)
						{
							if (IS_BLIP_VALID(bParam0->f_100))
							{
								REMOVE_BLIP(bParam0->f_100);
							}
							bParam0->f_44 = Function_304(StackVal, StackVal, Global_6287, bParam0 + 12, *(bParam0 + 52), 0.0f, 0.0f, 0.0f, Global_34573, bParam0->f_64, 0, 3, bParam0->f_96, 3, 1, 3212836864, 3212836864, 1);
							bParam0->f_100 = GET_BLIP_ON_OBJECT(bParam0->f_44);
						}
						else if (!IS_BLIP_VALID(bParam0->f_100))
						{
							bParam0->f_100 = ADD_BLIP_FOR_COORD(bParam0 + 52, bParam0->f_96, 0f, 2, 0);
						}
						SET_BLIP_PRIORITY(bParam0->f_100, 3);
						Function_318(bParam0->f_100, bParam0->f_124, bParam0->f_128, bParam0 + 12);
					}
					else if (!bParam0->f_124 && IS_OBJECT_VALID(bParam0->f_44))
					{
						if (IS_BLIP_VALID(bParam0->f_100))
						{
							REMOVE_BLIP(bParam0->f_100);
						}
						Function_265(bParam0->f_44);
						bParam0->f_100 = ADD_BLIP_FOR_COORD(bParam0 + 52, bParam0->f_96, 0f, 2, 0);
						SET_BLIP_PRIORITY(bParam0->f_100, 3);
						Function_318(bParam0->f_100, bParam0->f_124, bParam0->f_128, bParam0 + 12);
					}
					else if (!bParam0->f_124 && !IS_BLIP_VALID(bParam0->f_100))
					{
						bParam0->f_100 = ADD_BLIP_FOR_COORD(bParam0 + 52, bParam0->f_96, 0f, 2, 0);
						SET_BLIP_PRIORITY(bParam0->f_100, 3);
						Function_318(bParam0->f_100, bParam0->f_124, bParam0->f_128, bParam0 + 12);
					}
					if ((!bParam0->f_112 && !bParam0->f_124) && iVar0 == 1)
					{
						if (fVar14 > 5.0f)
						{
							if (!bParam0->f_116)
							{
								Function_302(bParam0);
								if (IS_OBJECT_VALID(bParam0->f_44))
								{
									Function_265(bParam0->f_44);
									bParam0->f_100 = ADD_BLIP_FOR_COORD(bParam0 + 52, bParam0->f_96, 0f, 2, 0);
									SET_BLIP_PRIORITY(bParam0->f_100, 3);
									Function_318(bParam0->f_100, bParam0->f_124, bParam0->f_128, bParam0 + 12);
								}
								bParam0->f_116 = 1;
							}
						}
						else if (bParam0->f_116)
						{
							bParam0->f_116 = 0;
						}
					}
					else if ((Function_228(bParam0 + 128, 4194304) && !bParam0->f_112) && bParam0->f_124)
					{
						if (fVar14 > 5.0f && !Function_228(bParam0 + 128, 8388608))
						{
							Function_108("mission_later_family", 0x41200000, 1, 0, 2, 1, 0);
						}
					}
					if ((!bParam0->f_112 && bParam0->f_124) && iVar0 == 1)
					{
						if ((!bParam0->f_120 && IS_OBJECT_VALID(bParam0->f_44)) && fVar14 > 5.0f)
						{
							if (IS_ACTOR_DRIVING_VEHICLE(Global_34573))
							{
								Function_108("mission_no_vehicle", 0x41200000, 1, 0, 2, 1, 0);
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
			if (!Function_319(bParam0))
			{
				bParam0->f_124 = 0;
				Function_318(bParam0->f_100, 0, bParam0->f_128, bParam0 + 12);
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
			else if (Function_313(bParam0))
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
					Function_318(bParam0->f_100, 0, bParam0->f_128, bParam0 + 12);
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
				Function_318(bParam0->f_100, 1, bParam0->f_128, bParam0 + 12);
				if (Function_228(bParam0 + 128, 4096))
				{
					Function_312(bParam0 + 128, 4096);
				}
			}
			fVar14 = Function_54(StackVal, StackVal, StackVal, StackVal, Global_34574, *(bParam0 + 52));
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
						bParam0->f_40 = CREATE_GRINGO_IN_LAYOUT_BY_ID(Global_6287, Function_29(), bParam0->f_28, vVar11, 0.0f, 0.0f, 0.0f);
						if (fVar14 > 175.0f)
						{
							Function_312(bParam0 + 128, 8388608);
						}
						else
						{
							Function_311(bParam0 + 128, 8388608);
						}
					}
				}
			}
			if (((!bParam0->f_116 && !IS_BLIP_VALID(bParam0->f_100)) && !bVar9) && (!Function_228(bParam0 + 128, 1048576) || bParam0->f_124))
			{
				Function_305(bParam0);
				if (bParam0->f_128 & 524288 >= 0)
				{
					Function_14(4194304);
				}
				bParam0->f_100 = ADD_BLIP_FOR_COORD(bParam0 + 52, bParam0->f_96, 0f, 2, 0);
				SET_BLIP_PRIORITY(bParam0->f_100, 3);
				Function_318(bParam0->f_100, bParam0->f_124, bParam0->f_128, bParam0 + 12);
			}
			if (((!IS_OBJECT_VALID(bParam0->f_44) && !bVar9) && bParam0->f_124) && (!Function_228(bParam0 + 128, 4194304) || Function_228(bParam0 + 128, 8388608)))
			{
				bParam0->f_44 = Function_304(StackVal, StackVal, Global_6287, bParam0 + 12, *(bParam0 + 52), 0.0f, 0.0f, 0.0f, Global_34573, 2.5f, 0, 3, 4294967295, 3, 1, 3212836864, 3212836864, 1);
			}
			if (!bParam0->f_112 && !bParam0->f_124)
			{
				if (IS_OBJECT_VALID(bParam0->f_44))
				{
					Function_265(bParam0->f_44);
				}
				if (bVar9)
				{
					if (!bParam0->f_116)
					{
						bParam0->f_116 = 1;
						Function_302(bParam0);
					}
				}
				else if (bParam0->f_116)
				{
					bParam0->f_116 = 0;
				}
			}
			else if ((Function_228(bParam0 + 128, 4194304) && !bParam0->f_112) && bParam0->f_124)
			{
				if (bVar9 && !Function_228(bParam0 + 128, 8388608))
				{
					Function_108("mission_later_family", 0x41200000, 1, 0, 2, 1, 0);
				}
			}
			if ((!bParam0->f_112 && bParam0->f_124) && iVar0 == 1)
			{
				if ((!bParam0->f_120 && IS_OBJECT_VALID(bParam0->f_44)) && bVar9)
				{
					if (IS_ACTOR_DRIVING_VEHICLE(Global_34573))
					{
						Function_108("mission_no_vehicle", 0x41200000, 1, 0, 2, 1, 0);
						bParam0->f_120 = 1;
					}
				}
			}
			break;
		
		case 0x00000005:
			iVar15 = iParam1;
			if (!Function_319(bParam0) || Global_3403)
			{
				bParam0->f_124 = 0;
			}
			else
			{
				bParam0->f_124 = 1;
			}
			iVar17 = Function_301();
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
					bVar18 = Function_300(bParam0->f_72, &bVar19, &(Global_62968[iVar15]), 0);
					break;
				
				case 0x00000001:
					bVar18 = Function_300(bParam0->f_72, &bVar19, &(Global_62968[iVar15]), 1);
					break;
				
				case 0x00000007:
					bVar18 = Function_299(bParam0->f_72, &bVar19, &(Global_62968[iVar15]));
					break;
				
				case 0x00000002:
					bVar18 = Function_297(bParam0->f_72, &bVar19, &(Global_62968[iVar15]));
					break;
				
				case 0x00000008:
					bVar18 = Function_295(bParam0->f_72, &bVar19, &(Global_62968[iVar15]));
					break;
				
				case 0x00000004:
					bVar18 = Function_292(bParam0->f_72, &bVar19, &(Global_62968[iVar15]));
					break;
				
				case 0x00000005:
					bVar18 = Function_291(bParam0->f_72, &bVar19, &(Global_62968[iVar15]));
					break;
			}
			if (iVar15 == 1)
			{
				if (Global_28178 != 1)
				{
					bVar20 = true;
				}
			}
			if (((IS_ACTOR_VALID(Global_34573) && Function_290(iParam1)) && !bVar16) && !bVar20)
			{
				if (!bParam0->f_112 && ((Global_26281 + 5.0f) - 1.0f) > GET_CURRENT_GAME_TIME())
				{
					if (!IS_OBJECT_VALID(bParam0->f_40) && IS_LAYOUTREF_VALID(Global_30616))
					{
						bParam0->f_40 = CREATE_POINT_IN_LAYOUT(Global_30616, Function_29(), *(bParam0 + 52), 0.0f, 0.0f, 0.0f);
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
						if (!Function_289(iParam1))
						{
							if (Function_288(StackVal, StackVal, *(bParam0 + 52), 1.25f))
							{
								if (Function_286(iParam1, 1))
								{
									Function_214(StackVal, StackVal, bParam0->f_72, (1 + iParam1), *(bParam0 + 52), Function_285(bParam0->f_128));
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
					if ((bVar19 && bVar16) && !Function_105(Global_76848, 8388608))
					{
						Function_100(Global_34573, 8388608, 1, 1);
					}
					if (bVar21)
					{
						switch (iVar15)
						{
							case 0x00000000:
								Function_282(bParam0->f_72, bParam0 + 28, 0);
								break;
							
							case 0x00000001:
								Function_282(bParam0->f_72, bParam0 + 28, 1);
								break;
							
							case 0x00000007:
								Function_280(bParam0->f_72, bParam0 + 28);
								break;
							
							case 0x00000002:
								Function_276(bParam0->f_72, bParam0 + 28);
								break;
							
							case 0x00000008:
								Function_274(bParam0->f_72, bParam0 + 28);
								break;
							
							case 0x00000004:
								Function_272(bParam0->f_72, bParam0 + 28);
								break;
							
							case 0x00000005:
								Function_270(bParam0->f_72, bParam0 + 28);
								break;
							}
					}
					if (bVar19)
					{
						if (bVar18)
						{
							if (!bVar16)
							{
								if (!Function_133(Function_25(), 0, 0))
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
							if (Function_228(bParam0 + 128, 8192))
							{
								if (Function_269() <= bParam0->f_140)
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

int Function_269() //Position: 0x11C0A / 72714
{
	return Function_42(0);
}

void Function_270(int iParam0, int iParam1) //Position: 0x11C14 / 72724
{
	bool bVar0;
	int iVar1;
	vector3 vVar2;
	bool bVar5;
	
	if (!Global_3384)
	{
		if (FLOOR(GET_CURRENT_GAME_TIME()) - *iParam1) >= RAND_INT_RANGE(25, 35)
		{
			Function_271(iParam0, 0);
			Function_271(iParam0, 1);
			if (StackVal > Function_54(StackVal, StackVal, StackVal, Function_54(StackVal, StackVal, StackVal, StackVal, Global_34574, Function_271(iParam0, 0)), Global_34574, Function_271(iParam0, 1)))
			{
				iVar1 = 0;
			}
			else
			{
				iVar1 = 1;
			}
			Function_271(iParam0, iVar1);
			vVar2 = { StackVal, StackVal, Function_271(iParam0, iVar1) };
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

vector3 Function_271(int iParam0, int iParam1) //Position: 0x11CF6 / 72950
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

void Function_272(int iParam0, int iParam1) //Position: 0x11E0D / 73229
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
			Function_273(iParam0);
			vVar2 = { StackVal, StackVal, Function_273(iParam0) };
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

vector3 Function_273(int iParam0) //Position: 0x11ECE / 73422
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

void Function_274(int iParam0, int iParam1) //Position: 0x11F79 / 73593
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
			Function_275(iParam0);
			vVar2 = { StackVal, StackVal, Function_275(iParam0) };
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

vector3 Function_275(int iParam0) //Position: 0x1203E / 73790
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

void Function_276(int iParam0, int iParam1) //Position: 0x1210C / 73996
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
			Function_279(iParam0);
			vVar2 = { StackVal, StackVal, Function_279(iParam0) };
			bVar0 = LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fake_blackjack_dealer", &vVar2, 1.0f, 0);
			if (IS_GRINGO_VALID(bVar0))
			{
				bVar5 = GET_ACTOR_FROM_OBJECT(GRINGO_QUERY_NAMED_COMPONENT_USER(bVar0, "UseCase1"));
				if (IS_ACTOR_VALID(bVar5))
				{
					if (Function_277(GET_OBJECT_FROM_ACTOR(bVar5), GET_OBJECT_FROM_ACTOR(Global_34573)))
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

bool Function_277(var uParam0, bool bParam1) //Position: 0x12239 / 74297
{
	vector3 vVar0;
	
	GET_OBJECT_POSITION(GET_ACTOR_FROM_OBJECT(bParam1), &vVar0);
	return Function_278(StackVal, StackVal, uParam0, vVar0);
}

int Function_278(bool bParam0, vector3 vParam1) //Position: 0x12253 / 74323
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

vector3 Function_279(int iParam0) //Position: 0x12294 / 74388
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

void Function_280(int iParam0, int iParam1) //Position: 0x12334 / 74548
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
					Function_281(iParam0, bVar6);
					vVar0 = { StackVal, StackVal, Function_281(iParam0, bVar6) };
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
					Function_281(iParam0, bVar6);
					vVar0 = { StackVal, StackVal, Function_281(iParam0, bVar6) };
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

vector3 Function_281(int iParam0, bool bParam1) //Position: 0x124BA / 74938
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

void Function_282(int iParam0, var uParam1, bool bParam2) //Position: 0x1278E / 75662
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
					Function_284(iParam0, bVar3, bParam2);
					bVar0 = Function_283(StackVal, StackVal, Function_284(iParam0, bVar3, bParam2));
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
					Function_284(iParam0, bVar3, bParam2);
					bVar0 = Function_283(StackVal, StackVal, Function_284(iParam0, bVar3, bParam2));
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

bool Function_283(var uParam0, var uParam1, int iParam2) //Position: 0x1291A / 76058
{
	return LOCATE_GRINGO_OF_TYPE("$/content/scripting/gringo/SimpleGringo/fake_poker", &uParam0, 1.0f, 0);
}

vector3 Function_284(int iParam0, bool bParam1, bool bParam2) //Position: 0x1295C / 76124
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

int Function_285(int iParam0) //Position: 0x12ED6 / 77526
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

bool Function_286(int iParam0, int iParam1) //Position: 0x12F3E / 77630
{
	int iVar0;
	
	iVar0 = (1 + iParam0);
	return Function_287(iVar0, iParam1);
}

int Function_287(int iParam0, bool bParam1) //Position: 0x12F51 / 77649
{
	bool bVar0;
	struct<8> Var1;
	
	if ((!Global_26031[iParam0] && (!bParam1 || !Function_193())) && !bVar0)
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
		Function_108(&Var1, 0x41200000, 1, 0, 2, 1, 0);
		return 1;
	}
	return 0;
}

bool Function_288(vector3 vParam0, float fParam3) //Position: 0x13199 / 78233
{
	return VDIST(vParam0, Global_34574) > (GET_RADAR_RADIUS() * fParam3);
}

bool Function_289(int iParam0) //Position: 0x131B4 / 78260
{
	int iVar0;
	
	iVar0 = (1 + iParam0);
	if (iVar0 > 0 || iVar0 <= Global_26031)
	{
		return 1;
	}
	return Global_26031[iVar0];
}

int Function_290(int iParam0) //Position: 0x131D7 / 78295
{
	if (iParam0 >= 4294967295 && iParam0 <= 11)
	{
		return 0;
	}
	return Global_25974[iParam0];
}

int Function_291(int iParam0, var uParam1, int iParam2) //Position: 0x131F3 / 78323
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	float fVar6;
	bool bVar7;
	
	if (!IS_OBJECTSET_VALID(*iParam2))
	{
		*iParam2 = CREATE_OBJECTSET_IN_LAYOUT(Function_29(), GET_AMBIENT_LAYOUT(), 12, 0);
	}
	Function_271(iParam0, 0);
	vVar0 = { StackVal, StackVal, Function_271(iParam0, 0) };
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
	Function_271(iParam0, 1);
	vVar0 = { StackVal, StackVal, Function_271(iParam0, 1) };
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
			Function_271(iParam0, 0);
			fVar6 = Function_54(StackVal, StackVal, StackVal, StackVal, Global_34574, Function_271(iParam0, 0));
		}
	}
	if (IS_GRINGO_VALID(bVar5))
	{
		if (IS_ACTOR_VALID(GET_ACTOR_FROM_OBJECT(GRINGO_QUERY_NAMED_COMPONENT_USER(bVar5, "UseCase1"))))
		{
			bVar7 = bVar5;
			Function_271(iParam0, 1);
			fVar6 = Function_54(StackVal, StackVal, StackVal, StackVal, Global_34574, Function_271(iParam0, 1));
		}
	}
	if (!IS_GRINGO_VALID(bVar7))
	{
		return 0;
	}
	if (fVar6 > 2.0f)
	{
		if (!Function_133(Global_34573, 1, 1))
		{
			*uParam1 = 1;
		}
	}
	return 1;
}

int Function_292(float fParam0, float fParam1, int iParam2) //Position: 0x133D8 / 78808
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
		*iParam2 = CREATE_OBJECTSET_IN_LAYOUT(Function_29(), GET_AMBIENT_LAYOUT(), 12, 0);
	}
	Function_273(fParam0);
	vVar6 = { StackVal, StackVal, Function_273(fParam0) };
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
	Function_294(fParam0);
	vVar6 = { StackVal, StackVal, Function_294(fParam0) };
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
		fVar10 = Function_54(StackVal, StackVal, StackVal, StackVal, Global_34574, vVar6);
		if (fVar10 > 2.0f && !Function_133(Global_34573, 1, 1))
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
		Function_293(fParam0, iVar11);
		vVar6 = { StackVal, StackVal, Function_293(fParam0, iVar11) };
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

vector3 Function_293(int iParam0, int iParam1) //Position: 0x1382A / 79914
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

vector3 Function_294(int iParam0) //Position: 0x13951 / 80209
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

int Function_295(var uParam0, float fParam1, int iParam2) //Position: 0x13A00 / 80384
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
		*iParam2 = CREATE_OBJECTSET_IN_LAYOUT(Function_29(), GET_AMBIENT_LAYOUT(), 12, 0);
	}
	Function_275(uParam0);
	vVar4 = { StackVal, StackVal, Function_275(uParam0) };
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
	Function_296(uParam0);
	vVar4 = { StackVal, StackVal, Function_296(uParam0) };
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
		fVar9 = Function_54(StackVal, StackVal, StackVal, StackVal, Global_34574, vVar4);
		if (fVar9 > 2.0f)
		{
			if (!Function_133(Global_34573, 1, 1))
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

vector3 Function_296(int iParam0) //Position: 0x13CC6 / 81094
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

int Function_297(int iParam0, float fParam1, int iParam2) //Position: 0x13D98 / 81304
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
	
	Function_279(iParam0);
	vVar4 = { StackVal, StackVal, Function_279(iParam0) };
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
		*iParam2 = CREATE_OBJECTSET_IN_LAYOUT(Function_29(), GET_AMBIENT_LAYOUT(), 12, 0);
	}
	bVar9 = true;
	iVar15 = 0;
	fVar16 = -1.0f;
	bVar14 = false;
	while (bVar14 <= 3)
	{
		Function_298(iParam0, bVar14);
		vVar4 = { StackVal, StackVal, Function_298(iParam0, bVar14) };
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
				fVar20 = Function_54(StackVal, StackVal, StackVal, StackVal, Global_34574, vVar4);
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
	else if (!Function_133(Global_34573, 1, 1))
	{
		*fParam1 = 1;
	}
	return 1;
}

vector3 Function_298(int iParam0, bool bParam1) //Position: 0x1405A / 82010
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

int Function_299(int iParam0, float fParam1, int iParam2) //Position: 0x14202 / 82434
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
		*iParam2 = CREATE_OBJECTSET_IN_LAYOUT(Function_29(), GET_AMBIENT_LAYOUT(), 12, 0);
	}
	bVar13 = true;
	bVar0 = false;
	while (bVar0 <= 6)
	{
		Function_281(iParam0, bVar0);
		vVar3 = { StackVal, StackVal, Function_281(iParam0, bVar0) };
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
				fVar24 = Function_54(StackVal, StackVal, StackVal, StackVal, Global_34574, vVar3);
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
	else if (!Function_133(Global_34573, 1, 1))
	{
		*fParam1 = 1;
	}
	return 1;
}

int Function_300(var uParam0, var uParam1, var uParam2, int iParam3) //Position: 0x14431 / 82993
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
		*uParam2 = CREATE_OBJECTSET_IN_LAYOUT(Function_29(), GET_AMBIENT_LAYOUT(), 12, 0);
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
			Function_284(uParam0, bVar0, iParam3);
			bVar14[bVar0] = Function_283(StackVal, StackVal, Function_284(uParam0, bVar0, iParam3));
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
				fVar24 = Function_54(StackVal, StackVal, StackVal, StackVal, Global_34574, vVar3);
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
	else if (!Function_133(Global_34573, 1, 1))
	{
		*uParam1 = 1;
	}
	return 1;
}

int Function_301() //Position: 0x14616 / 83478
{
	return StackVal;
}

void Function_302(bool bParam0) //Position: 0x14621 / 83489
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
		if (Function_313(bParam0))
		{
			if (Function_228(bParam0 + 128, 4194304))
			{
				Function_108("mission_later_family", 0x41200000, 1, 0, 2, 1, 0);
			}
			else
			{
				Function_108("mission_later_tomorrow_no_time", 0x41200000, 1, 0, 2, 1, 0);
			}
			return;
		}
		iVar0 = Function_226(bParam0->f_128);
		iVar1 = Function_225(bParam0->f_128);
		if (Function_228(bParam0 + 128, 4096) && !Function_228(bParam0 + 128, 4194304))
		{
			if (Function_228(bParam0 + 128, 1))
			{
				bVar8 = Function_303(Function_98(bParam0->f_132));
				bVar9 = MAKE_TIME_OF_DAY_EX(GET_DAY(bVar8), GET_HOUR(bVar8), false, false);
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

var Function_303(int iParam0) //Position: 0x149F3 / 84467
{
	if (!Function_177(iParam0))
	{
		return MAKE_TIME_OF_DAY(0, 0, 0);
	}
	return Global_13172[iParam011].f_36;
}

var Function_304(bool bParam0, bool bParam1, vector3 vParam2, vector3 vParam5, bool bParam8, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, float fParam15, float fParam16, int iParam17) //Position: 0x14A12 / 84498
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

void Function_305(bool bParam0) //Position: 0x14ADD / 84701
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
			Function_306(0, 4, 0, 0, 1);
		}
	}
	return;
}

void Function_306(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4) //Position: 0x14B48 / 84808
{
	int iVar0;
	bool bVar1;
	
	Function_310(iParam0);
	Global_16524.f_4 = iParam0;
	Global_16524.f_16 = 1;
	iVar0 = GET_HOUR(false);
	if (!StackVal != StackVal && (((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19) || bParam4))
	{
		if (HUD_IS_FADED())
		{
			Function_309(StackVal, bParam4);
		}
		else
		{
			bVar1 = MAKE_TIME_OF_DAY(iParam1, iParam2, iParam3);
			Function_307(StackVal, bVar1, bParam4);
		}
	}
}

void Function_307(int iParam0, bool bParam1, bool bParam2) //Position: 0x14BBA / 84922
{
	int iVar0;
	
	Function_310(iParam0);
	Function_94(bParam1);
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
	Function_308();
	Global_16524.f_40 = StackVal;
	Global_16524.f_44 = GET_TIME_OF_DAY();
	Global_16524.f_48 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_16524 + 48, 0, false, GET_MINUTES_FROM_TIME_OF_DAY(bParam1), 0);
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

void Function_308() //Position: 0x14D33 / 85299
{
	Global_16517.f_20 = 0.0f;
	return;
}

void Function_309(int iParam0, bool bParam1) //Position: 0x14D3F / 85311
{
	bool bVar0;
	
	bVar0 = MAKE_TIME_OF_DAY_EX(false, false, false, false);
	Function_310(iParam0);
	Function_94(bVar0);
	PRINTNL();
	Function_307(iParam0, bVar0, bParam1);
	return;
}

void Function_310(int iParam0) //Position: 0x14D64 / 85348
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

void Function_311(var uParam0, int iParam1) //Position: 0x14DAA / 85418
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_312(var uParam0, int iParam1) //Position: 0x14DB9 / 85433
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

bool Function_313(bool bParam0) //Position: 0x14DD0 / 85456
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
							Function_317(bParam0->f_156);
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
						if (Function_314(bVar4, &uVar2, &uVar1, 0, 0, 0x40400000) && ((bParam0->f_36 != 11 || bParam0->f_36 != 12) || bParam0->f_36 != 13))
						{
							Function_317(bParam0->f_156);
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
						Function_317(bParam0->f_156);
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
	else if (Function_152(StackVal, StackVal, Global_34573, *(bParam0 + 52)) < 100.0f)
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

int Function_314(bool bParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, float fParam5) //Position: 0x14FA6 / 85926
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
		fVar0 = Function_160(bParam0, Global_34573);
		if (!Function_113(bParam3, 8))
		{
			if (GET_LAST_ATTACKER(bParam0) == Global_34573)
			{
				*uParam1 = 8;
				Function_315(bParam0);
				return 1;
			}
		}
		if (!Function_113(bParam3, 2))
		{
			if (AI_HAS_PLAYER_PROJECTILE_IMPACTED_WITHIN(bParam0, 1.0f))
			{
				*uParam1 = 2;
				Function_315(bParam0);
				return 1;
			}
			if (AI_HAS_PLAYER_PROJECTILE_NEAR_MISSED_WITHIN(bParam0, 1.0f, 1.0f))
			{
				*uParam1 = 2;
				Function_315(bParam0);
				return 1;
			}
		}
		if (!Function_113(bParam3, 4))
		{
			if ((IS_ACTOR_HANDSUP(bParam0) || (((GET_ACTOR_UNDER_RETICLE(Global_34573, 0) != bParam0 && IS_PLAYER_WEAPON_ZOOMED(Global_34573)) && MEMORY_GET_IS_VISIBLE(bParam0, Global_34573)) && fVar0 > 20.0f)) || ((GET_ACTOR_MELEE_TARGETED_BY(Global_34573) != bParam0 && MEMORY_GET_IS_VISIBLE(bParam0, Global_34573)) && fVar0 > 20.0f))
			{
				if (*uParam2 > 0.0f)
				{
					*uParam1 = 4;
					Function_315(bParam0);
					return 1;
				}
				if (*uParam2 < 0.0f)
				{
					if ((GET_CURRENT_GAME_TIME() - *uParam2) < 1.3f)
					{
						*uParam1 = 4;
						Function_315(bParam0);
						return 1;
					}
				}
				*uParam2 = GET_CURRENT_GAME_TIME();
			}
		}
		if (!Function_113(bParam3, 1))
		{
			if (Global_3403 || Global_3404)
			{
				*uParam1 = 1;
				Function_315(bParam0);
				return 1;
			}
		}
		if (!Function_113(bParam3, 16))
		{
			if (UNK_0x7F454A92(bParam0) < 0.0f)
			{
				if ((GET_CURRENT_GAME_TIME() - UNK_0x7F454A92(bParam0)) > 2.0f && fVar0 > 18.0f)
				{
					*uParam1 = 16;
					Function_315(bParam0);
					return 1;
				}
			}
		}
	}
	return 0;
}

void Function_315(bool bParam0) //Position: 0x1513D / 86333
{
	CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(bParam0);
	AI_SPEECH_SET_ALLOW_FOR_ACTOR(bParam0, 1);
	UNK_0x99AFD2D1(bParam0, 0, 0);
	Function_316(bParam0);
	MEMORY_CONSIDER_AS(Global_34573, bParam0, 2);
	MEMORY_CONSIDER_AS(bParam0, Global_34573, 2);
	AI_GOAL_LOOK_CLEAR(bParam0);
	return;
}

void Function_316(bool bParam0) //Position: 0x15171 / 86385
{
	SAY_SINGLE_LINE_CONTEXT(bParam0, 60, Global_34573, 1, 0, 2, 4294967295, 4294967295, 0, 1);
	return;
}

void Function_317(bool bParam0) //Position: 0x15188 / 86408
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

void Function_318(bool bParam0, bool bParam1, var uParam2, bool bParam3) //Position: 0x151BA / 86458
{
	if (!IS_BLIP_VALID(bParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (Function_228(&uParam2, 4194304) && !Function_228(&uParam2, 8388608))
		{
			bParam1 = false;
		}
	}
	if (bParam1)
	{
		SET_BLIP_COLOR(bParam0, 0.63f, 0.85f, 0.0f, 1.0f);
		SET_BLIP_SCALE(bParam0, 1.25f);
	}
	else
	{
		SET_BLIP_COLOR(bParam0, 0.63f, 0.85f, 0.0f, 0.75f);
		SET_BLIP_SCALE(bParam0, 1.0f);
	}
	SET_BLIP_NAME(bParam0, bParam3);
}

bool Function_319(bool bParam0) //Position: 0x15232 / 86578
{
	bool bVar0;
	int iVar1;
	
	if (!bParam0->f_128 != 0)
	{
		switch (Global_63399)
		{
			case 0x00000001:
				if (!Function_228(bParam0 + 128, 32))
				{
					return 0;
				}
				break;
			
			case 0x00000002:
				if (!Function_228(bParam0 + 128, 64))
				{
					return 0;
				}
				break;
			
			case 0x00000004:
				if (!Function_228(bParam0 + 128, 128))
				{
					return 0;
				}
				break;
			
			case 0x00000008:
				if (!Function_228(bParam0 + 128, 256))
				{
					return 0;
				}
				break;
			
			case 0x00000010:
				if (!Function_228(bParam0 + 128, 512))
				{
					return 0;
				}
				break;
			
			case 0x00000020:
				if (!Function_228(bParam0 + 128, 1024))
				{
					return 0;
				}
				break;
		}
		if (Function_228(bParam0 + 128, 4096))
		{
			if (Function_228(bParam0 + 128, 1))
			{
				bVar0 = Function_303(Function_98(bParam0->f_132));
				iVar1 = MAKE_TIME_OF_DAY_EX(GET_DAY(bVar0), GET_HOUR(bVar0), false, false);
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

bool Function_320(int iParam0) //Position: 0x1532C / 86828
{
	var uVar0;
	
	if (!iParam0->f_128 != 0)
	{
		uVar0 = iParam0->f_128;
		if (uVar0 & 1 >= 0)
		{
			if (!Function_97(iParam0->f_132, 0))
			{
				return 0;
			}
		}
		if (uVar0 & 2 >= 0)
		{
			if (!Function_97(iParam0->f_136, 0))
			{
				return 0;
			}
		}
		if (uVar0 & 4 >= 0)
		{
			if (!Function_97(iParam0->f_140, 0))
			{
				return 0;
			}
		}
		if (uVar0 & 8 >= 0)
		{
			if (!Function_97(iParam0->f_144, 0))
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

int Function_321(int iParam0) //Position: 0x153C5 / 86981
{
	if (!Function_177(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

void Function_322(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x153DF / 87007
{
	struct<4> Var0;
	
	if ((Function_396(StackVal) != 4 && !bParam2) && !Global_3381)
	{
		bParam1 = false;
	}
	if (Function_2(StackVal) == 1)
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
			if (Function_2(StackVal) == 1)
			{
				Global_3379 = 1;
				Global_3378 = 0;
				SET_RICH_PRESENCE(StackVal, Function_396(3), 0, 0, 0);
				Function_394(&(Global_3422[Function_396(StackVal)40]));
			}
			else if (Function_2(StackVal) == 4)
			{
				Function_393(StackVal, iParam0->f_140);
				Global_3383 = 1;
				SET_RICH_PRESENCE(StackVal, (3 + Function_396(58)), 0, 0, 0);
			}
			Function_391();
			Function_401(0, 0);
			iParam0->f_108 = Function_324(StackVal, StackVal, bParam2, 0, iParam3, 0);
			iParam0->f_112 = 0;
			iParam0->f_124 = 0;
		}
		else if (!HUD_IS_FADING())
		{
			if (Function_2(StackVal) == 1)
			{
				Var0 = { StackVal, StackVal, StackVal, Function_323(Function_396(StackVal)) };
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
		if (Function_2(StackVal) == 1)
		{
			Global_3379 = 1;
			Global_3378 = 0;
			Var0 = { StackVal, StackVal, StackVal, Function_323(Function_396(StackVal)) };
			if (HUD_IS_FADED())
			{
				if (Function_396(StackVal) != 4)
				{
					UNK_0xC6E36B1D(&Var0);
				}
				else
				{
					UNK_0xEF270DC9();
				}
			}
			Function_394(&(Global_3422[Function_396(StackVal)40]));
		}
		else if (Function_2(StackVal) == 4)
		{
			Function_393(StackVal, iParam0->f_140);
			Global_3383 = 1;
		}
		SET_ACTOR_INVULNERABILITY(Global_34573, 1);
		Function_391();
		Function_401(0, 0);
		iParam0->f_108 = Function_324(StackVal, StackVal, bParam2, 0, 1, 0);
		iParam0->f_112 = 0;
		iParam0->f_124 = 0;
	}
}

struct<16> Function_323(bool bParam0) //Position: 0x15598 / 87448
{
	char* cVar0[16];
	
	strcpy(&cVar0, "fav_non", 16);
	if (!Function_99(bParam0))
	{
		return StackVal, StackVal, StackVal, cVar0;
	}
	return StackVal, StackVal, StackVal, *(&Global_3422[bParam040] + 12);
}

var Function_324(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5) //Position: 0x155C9 / 87497
{
	var uVar0;
	bool bVar1;
	var uVar2;
	int iVar61;
	struct<25> Var62;
	
	if (Function_2(iParam1) == 1)
	{
		Function_401(1, 0);
	}
	else
	{
		Function_401(0, 0);
	}
	bVar1 = Function_396(iParam1);
	if (!Global_3365 || Global_3381)
	{
		if (Function_2(iParam1) == 1)
		{
			uVar2 = 58;
			if (!bParam2)
			{
				Function_354(bVar1, &uVar2, &uVar0, 1);
			}
			if (bVar1 == 1)
			{
				iVar61 = 0;
				while (iVar61 <= 4)
				{
					Function_353(iVar61, 0);
					iVar61++;
				}
				iVar61 = 0;
				while (iVar61 <= 3)
				{
					Function_352(iVar61, 0);
					iVar61++;
				}
				iVar61 = 0;
				while (iVar61 <= 11)
				{
					Function_351(iVar61, 0);
					iVar61++;
				}
				iVar61 = 0;
				while (iVar61 <= 16)
				{
					Function_117(iVar61, 0);
					iVar61++;
				}
				iVar61 = 0;
				while (iVar61 <= 58)
				{
					if (Function_177(Function_98(iVar61)))
					{
						Function_349(Function_98(iVar61));
					}
					iVar61++;
				}
				Function_347();
				Function_346(Function_269(), 0);
				Function_345();
				if (bVar1 == 1)
				{
					Function_349(Function_98(2));
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
			PRINTINT(Function_2(iParam1));
			PRINTNL();
		}
	}
	if (Function_2(iParam1) == 1)
	{
		Function_27(18, bVar1, 0);
		Function_343(18, &Global_3422[bVar140] + 12, 0, 1);
		if (!bParam2)
		{
			Function_341(bVar1);
			AUDIO_RESET_SPEECH_HISTORY();
		}
		else
		{
			Global_34165.f_136 = GET_CURRENT_GAME_TIME();
		}
	}
	Var62 = iParam1;
	Var69 = { StackVal, StackVal, StackVal, Function_340(bVar1) };
	strcpy(&Var62 + 4, UI_GET_STRING(&Var69), 16);
	Var62.f_20 = bParam2;
	Var62.f_24 = iParam3;
	Function_336(0);
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
	if (((IS_OBJECT_VALID(Global_63084.f_28) || Function_113(Global_63084.f_32, 2)) || Function_113(Global_63084.f_32, 1)) || Function_113(Global_63084.f_32, 65536))
	{
		Function_7(&Global_63084 + 32, 2);
		Function_7(&Global_63084 + 32, 1);
		Function_7(&Global_63084 + 32, 65536);
		Function_112(&Global_63084 + 32, 4);
	}
	if (Function_2(iParam1) == 4)
	{
		PLAY_SOUND("HUD_MENU_SELECT_MASTER");
	}
	Global_3414 = 0;
	bVar73 = LAUNCH_NEW_SCRIPT_WITH_ARGS(GET_ASSET_NAME(iParam0, 4), &Var62, 7, 0);
	if (IS_SCRIPT_VALID(bVar73))
	{
		if (Function_177(iParam1))
		{
			if (bParam5)
			{
				Function_335(iParam1, iParam4);
			}
			else if (Function_321(iParam1) == 1)
			{
				Function_334(iParam1, iParam4);
			}
			else
			{
				Function_329(iParam1, iParam4);
			}
		}
		Function_327(2);
		Function_325((15 - Function_326(105)));
		return bVar73;
	}
	return "";
}

void Function_325(int iParam0) //Position: 0x158F5 / 88309
{
	Global_12976.f_4 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 4, 0, false, (iParam0 + Function_326(105)), 0);
	return;
}

int Function_326(int iParam0) //Position: 0x15916 / 88342
{
	return CEIL(((IntToFloat(iParam0) * Global_63398) / 60.0f));
}

void Function_327(bool bParam0) //Position: 0x1592C / 88364
{
	PRINTSTRING("Old TOD after LAST MISSION - ");
	Function_94(Global_12976.f_24);
	PRINTNL();
	Global_12976.f_24 = GET_TIME_OF_DAY();
	PRINTSTRING("Current Time - ");
	Function_94(Global_12976.f_24);
	PRINTNL();
	ADD_TIME(&Global_12976 + 24, 0, false, bParam0, 0);
	PRINTSTRING("New TOD after LAST MISSION - ");
	Function_94(Global_12976.f_24);
	PRINTNL();
	Function_328(bParam0);
	return;
}

void Function_328(int iParam0) //Position: 0x159C8 / 88520
{
	Global_12976.f_12 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 12, 0, false, (iParam0 + Function_326(90)), 0);
	return;
}

void Function_329(int iParam0, int iParam1) //Position: 0x159E9 / 88553
{
	int iVar0;
	bool bVar1;
	struct<6> Var2;
	struct<4> Var8;
	char* cVar12;
	
	if (!Function_177(iParam0))
	{
		Function_332();
		return;
	}
	if (StackVal == 1)
	{
		return;
	}
	iVar0 = Function_2(iParam0);
	if (StackVal != 2)
	{
		Function_331("DEED_START", iParam0);
	}
	Global_13172[iParam011].f_8 = StackVal + 1;
	Global_13172[iParam011].f_4 = 2;
	Global_6271 = iParam0;
	if (!Global_34165.f_36 && iParam1)
	{
		Function_17(1);
	}
	if (iVar0 == 1)
	{
		bVar1 = Function_396(iParam0);
		Global_6269 = bVar1;
		Var2 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_330(Global_6269) };
		Var8 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var8 = { StackVal, StackVal, StackVal, Function_109(Global_6269) };
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

struct<24> Function_330(bool bParam0) //Position: 0x15AF9 / 88825
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

void Function_331(char* cParam0, bool bParam1) //Position: 0x15D4F / 89423
{
	struct<4> Var0;
	
	if (!Function_177(bParam1))
	{
		return;
	}
	switch (Function_2(bParam1))
	{
		case 0x00000001:
			Var0 = { StackVal, StackVal, StackVal, Function_340(Function_396(bParam1)) };
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, &Var0, Function_2(bParam1), Function_396(bParam1));
			break;
		
		case 0x00000002:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "PROCEDURAL", Function_2(bParam1), bParam1);
			break;
		
		case 0x00000003:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "LOCATION", Function_2(bParam1), bParam1);
			break;
		
		case 0x00000004:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "MINIGAME", Function_2(bParam1), bParam1);
			break;
		
		case 0x00000005:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "ACTIONAREA_EVENT", Function_2(bParam1), bParam1);
			break;
		
		case 0x00000006:
			PLAYSTAT_DEED_NAMED(StackVal, cParam0, "JOB", Function_2(bParam1), bParam1);
			break;
		
		case 0x00000000:
			break;
	}
	return;
}

void Function_332() //Position: 0x15E73 / 89715
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
			Function_333(Global_13172[iVar011], &iVar18, &iVar19, &iVar20);
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

void Function_333(bool bParam0, var uParam1, var uParam2, var uParam3) //Position: 0x160BA / 90298
{
	*uParam3 = (bParam0 && 15);
	*uParam1 = (SHIFT_RIGHT(bParam0, 4) && 255);
	*uParam2 = (SHIFT_RIGHT(bParam0, 12) && 255);
}

void Function_334(int iParam0, int iParam1) //Position: 0x160E3 / 90339
{
	int iVar0;
	
	if (!Function_177(iParam0))
	{
		Function_332();
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
	iVar0 = Function_2(iParam0);
	Global_13172[iParam011].f_4 = 2;
	if (!Global_34165.f_36 && iParam1)
	{
		Function_17(1);
	}
	if (iVar0 == 1)
	{
		Global_6269 = Function_396(iParam0);
	}
	Global_3376 = 1;
	return;
}

void Function_335(int iParam0, int iParam1) //Position: 0x1614A / 90442
{
	int iVar0;
	struct<6> Var1;
	struct<4> Var7;
	char* cVar11;
	
	if (!Function_177(iParam0))
	{
		Function_332();
		return;
	}
	iVar0 = Function_2(iParam0);
	Global_13172[iParam011].f_4 = 1;
	if (!Global_34165.f_36 && iParam1)
	{
		Function_17(1);
	}
	if (iVar0 == 1)
	{
		Global_6269 = Function_396(iParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_330(Global_6269) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_109(Global_6269) };
		}
		cVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		SET_JOURNAL_ENTRY_PROGRESS(cVar11, -2.0f, 0, 0);
		CLEAR_JOURNAL_ENTRY(cVar11);
		APPEND_JOURNAL_ENTRY(cVar11, 0);
	}
	return;
}

void Function_336(bool bParam0) //Position: 0x161F0 / 90608
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
		Function_337();
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

void Function_337() //Position: 0x1627B / 90747
{
	int iVar0;
	
	Global_26960 = Function_338(StackVal);
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

int Function_338(int iParam0) //Position: 0x162C9 / 90825
{
	if (!Function_339(iParam0))
	{
		return 0;
	}
	return Global_26401[iParam0];
}

bool Function_339(int iParam0) //Position: 0x162E1 / 90849
{
	if (iParam0 > 0 || iParam0 < 2)
	{
		return 0;
	}
	return 1;
}

struct<16> Function_340(bool bParam0) //Position: 0x162F6 / 90870
{
	char* cVar0[16];
	
	if (!Function_58())
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

void Function_341(int iParam0) //Position: 0x16330 / 90928
{
	int iVar0;
	
	iVar0 = Function_342(iParam0);
	Global_34165.f_136 = GET_CURRENT_GAME_TIME();
	Global_34165.f_140 = 0.0f;
	switch (iVar0)
	{
		case 0x00000000:
			Global_34165.f_120 = Function_42(27);
			Global_34165.f_116 = Function_42(42);
			Global_34165.f_124 = CEIL(Function_39(49));
			Global_34165.f_128 = Function_42(49);
			break;
		
		case 0x00000002:
			Global_34165.f_116 = Function_42(355);
			break;
		
		case 0x00000001:
			Global_34165.f_124 = CEIL(Function_39(49));
			Global_34165.f_128 = Function_42(49);
			break;
	}
	return;
}

int Function_342(bool bParam0) //Position: 0x163BA / 91066
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

int Function_343(int iParam0, bool bParam1, bool bParam2, int iParam3) //Position: 0x1644F / 91215
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
		Function_344(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(&Global_35278[iParam020] + 16), 3.0f, iParam3);
	}
	return 1;
}

void Function_344(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, char* cParam9, bool bParam10) //Position: 0x167A1 / 92065
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

void Function_345() //Position: 0x16824 / 92196
{
	WRITE_TO_FILE("New Game Progression Started\n", "C:/MoneyData.csv", 1);
	return;
}

int Function_346(bool bParam0, bool bParam1) //Position: 0x16861 / 92257
{
	bool bVar0;
	
	bVar0 = Function_42(0);
	if ((Function_42(0) - bParam0) <= 0)
	{
		bParam0 = bVar0;
	}
	if (bParam0 >= 0)
	{
		Function_90(0, bParam0, 0);
	}
	else
	{
		return 0;
	}
	if (bParam1)
	{
		PRINT_MONEY(&(Global_35278[020]), bVar0, (bParam0 * 4294967295), 7.5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_42(0));
	return 1;
}

void Function_347() //Position: 0x168F1 / 92401
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
	Function_348();
	ACTOR_SET_NEXT_WEAPON(GET_PLAYER_ACTOR(0), 22);
	ACTOR_SET_NEXT_WEAPON(GET_PLAYER_ACTOR(0), 4);
	return;
}

void Function_348() //Position: 0x16A74 / 92788
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
	bVar2 = Function_25();
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

void Function_349(int iParam0) //Position: 0x16B45 / 92997
{
	Function_350(iParam0);
	return;
}

void Function_350(int iParam0) //Position: 0x16B50 / 93008
{
	int iVar0;
	
	if (!Function_177(iParam0))
	{
		Function_332();
		return;
	}
	iVar0 = Function_2(iParam0);
	Global_13172[iParam011].f_4 = 0;
	return;
}

void Function_351(int iParam0, int iParam1) //Position: 0x16B74 / 93044
{
	if (iParam0 >= 4294967295 && iParam0 <= 11)
	{
		return;
	}
	Global_25974[iParam0] = iParam1;
	return;
}

void Function_352(int iParam0, int iParam1) //Position: 0x16B91 / 93073
{
	if (iParam0 >= 0 && iParam0 <= 3)
	{
		return;
	}
	Global_25970[iParam0] = iParam1;
	return;
}

void Function_353(int iParam0, int iParam1) //Position: 0x16BAD / 93101
{
	if (iParam0 >= 4294967295 && iParam0 <= 4)
	{
		return;
	}
	Global_25965[iParam0] = iParam1;
	return;
}

void Function_354(int iParam0, var uParam1, var uParam2, bool bParam3) //Position: 0x16BC9 / 93129
{
	if (Global_3365 && !Global_3381)
	{
		return;
	}
	if (!bParam3)
	{
		if (!Function_58())
		{
			Function_358(iParam0, uParam2, 0);
		}
		else
		{
			Function_355(iParam0, uParam2, 0);
		}
		(*uParam1)[iParam0] = 1;
	}
	if (Global_3422[iParam040].f_132 != 4294967295)
	{
		if (!(*uParam1)[Global_3422[iParam040].f_132])
		{
			Function_354(Global_3422[iParam040].f_132, uParam1, uParam2, 0);
		}
	}
	if (Global_3422[iParam040].f_136 != 4294967295)
	{
		if (!(*uParam1)[Global_3422[iParam040].f_136])
		{
			Function_354(Global_3422[iParam040].f_136, uParam1, uParam2, 0);
		}
	}
	if (Global_3422[iParam040].f_140 != 4294967295)
	{
		if (!(*uParam1)[Global_3422[iParam040].f_140])
		{
			Function_354(Global_3422[iParam040].f_140, uParam1, uParam2, 0);
		}
	}
	if (Global_3422[iParam040].f_144 != 4294967295)
	{
		if (!(*uParam1)[Global_3422[iParam040].f_144])
		{
			Function_354(Global_3422[iParam040].f_144, uParam1, uParam2, 0);
		}
	}
}

void Function_355(int iParam0, var uParam1, bool bParam2) //Position: 0x16CC2 / 93378
{
	struct<4> Var0;
	
	*uParam1 = *uParam1;
	if (!Function_99(iParam0))
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
			Function_356(21, bParam2, 0);
			Function_356(16, bParam2, 0);
			SET_DISABLE_DEADEYE(0, 0);
			SET_DEADEYE_MULTILOCK_ENABLE(0, 1);
			SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
			break;
	}
	Var0 = { StackVal, StackVal, StackVal, Function_340(iParam0) };
	PRINTSTRING("MISSION LAUNCH: Giving stuff for debug passing ");
	PRINTSTRING(UI_GET_STRING(&Var0));
	PRINTNL();
	return;
}

int Function_356(bool bParam0, bool bParam1, int iParam2) //Position: 0x16D60 / 93536
{
	if (!Function_357(bParam0))
	{
		return 0;
	}
	if (IS_WEAPONENUM_LOCKED(bParam0))
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	if (!ACTOR_HAS_WEAPON(Function_25(), bParam0))
	{
		GIVE_WEAPON_TO_ACTOR(Function_25(), bParam0, 1.0f, iParam2, 1);
		return 1;
	}
	if (bParam1)
	{
		_ADD_AMMO_OF_TYPE(Function_25(), GET_AMMO_ENUM(bParam0), GET_WEAPON_MAX_AMMO(bParam0), 0, iParam2);
		return 1;
	}
	return 1;
}

bool Function_357(int iParam0) //Position: 0x16DB7 / 93623
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return 1;
}

void Function_358(bool bParam0, var uParam1, bool bParam2) //Position: 0x16DC9 / 93641
{
	struct<4> Var0;
	
	if (!Function_99(bParam0))
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
			Function_356(4, bParam2, 0);
			if (*uParam1 <= 1)
			{
				*uParam1 = 1;
				SET_DISABLE_DEADEYE(0, 1);
				SET_DEADEYE_MULTILOCK_ENABLE(0, 0);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_389(Global_30640[0]);
			Function_389(Global_30679[1]);
			break;
		
		case 0x00000002:
			if (*uParam1 <= 2)
			{
				*uParam1 = 2;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, 0);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_387(8, bParam2, 4);
			EQUIP_ACCESSORY(Global_34573, 0, 1);
			Function_389(Global_30668[0]);
			Function_381(0);
			Function_379(2, 1);
			Function_379(0, 1);
			Function_379(1, 1);
			break;
		
		case 0x00000003:
			Function_389(Global_30668[0]);
			break;
		
		case 0x00000004:
			Function_389(Global_30668[0]);
			Function_389(Global_30640[0]);
			Function_377(0, 1);
			Function_377(15, 1);
			Function_377(9, 1);
			Function_377(12, 1);
			Function_377(16, 1);
			Function_379(3, 1);
			break;
		
		case 0x00000005:
			Function_389(Global_30668[0]);
			break;
		
		case 0x00000006:
			Function_387(21, bParam2, 4);
			Function_389(Global_30668[0]);
			Function_379(39, 1);
			break;
		
		case 0x00000007:
			Function_389(Global_30668[0]);
			break;
		
		case 0x00000016:
			Function_389(Global_30668[0]);
			break;
		
		case 0x00000008:
			if (!bParam2)
			{
				if (IS_PS3() || Function_376())
				{
					if (!Function_375(4))
					{
						Function_369(4, 0, 0, 1, 0);
					}
				}
			}
			Function_389(Global_30640[0]);
			Function_389(Global_30640[10]);
			break;
		
		case 0x00000009:
			Function_389(Global_30640[0]);
			Function_389(Global_30668[2]);
			Function_368(&(Global_29008[Global_30668[2]]), 32768);
			Function_367(&(Global_29008[Global_30668[2]]), 256);
			break;
		
		case 0x00000015:
			Function_387(9, bParam2, 4);
			Function_389(Global_30640[0]);
			break;
		
		case 0x00000017:
			Function_389(Global_30640[0]);
			Function_389(Global_30658[0]);
			Function_368(&(Global_29008[Global_30658[0]]), 32768);
			Function_367(&(Global_29008[Global_30658[0]]), 256);
			break;
		
		case 0x0000000A:
			Function_389(Global_30640[0]);
			break;
		
		case 0x0000000B:
			if (*uParam1 <= 3)
			{
				*uParam1 = 3;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, 1);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
			}
			Function_389(Global_30640[0]);
			Function_389(Global_30640[1]);
			break;
		
		case 0x0000000F:
			Function_389(Global_30640[1]);
			Function_389(Global_30679[0]);
			break;
		
		case 0x00000010:
			Function_389(Global_30679[0]);
			Function_389(Global_30658[5]);
			break;
		
		case 0x00000011:
			Function_389(Global_30658[5]);
			Function_389(Global_30658[1]);
			break;
		
		case 0x0000000C:
			Function_387(21, bParam2, 4);
			Function_389(Global_30640[4]);
			Function_389(Global_30658[4]);
			Function_366(&Global_76847, 0x2000000);
			Function_366(&Global_76847, 0x4000000);
			Function_366(&Global_76847, 4096);
			Function_366(&Global_76847, 8);
			Function_366(&Global_76847, 8388608);
			Function_366(&Global_76847, 524288);
			Function_366(&Global_76847, 1048576);
			break;
		
		case 0x0000000D:
			Function_389(Global_30640[4]);
			Function_389(Global_30658[0]);
			break;
		
		case 0x0000000E:
			Function_367(&(Global_29008[Global_30640[4]]), 256);
			Function_389(Global_30640[4]);
			Function_389(Global_30658[0]);
			Function_368(&(Global_29008[Global_30658[0]]), 32768);
			Function_367(&(Global_29008[Global_30658[0]]), 256);
			break;
		
		case 0x00000012:
			Function_389(Global_30640[0]);
			Function_389(Global_30640[5]);
			Function_387(16, bParam2, 4);
			break;
		
		case 0x00000013:
			Function_389(Global_30658[3]);
			Function_368(&(Global_29008[Global_30658[3]]), 32768);
			Function_367(&(Global_29008[Global_30658[3]]), 256);
			break;
		
		case 0x00000014:
			Function_387(9, bParam2, 4);
			Function_389(Global_30668[1]);
			break;
		
		case 0x00000018:
			Function_368(&(Global_29008[Global_30679[1]]), 32768);
			Function_389(Global_30679[1]);
			break;
		
		case 0x00000019:
			Function_387(12, bParam2, 4);
			Function_367(&(Global_29008[Global_30679[1]]), 256);
			Function_389(Global_30668[3]);
			Function_389(Global_30693[0]);
			Function_389(Global_30685[0]);
			Function_381(4);
			Function_377(13, 1);
			Function_377(1, 1);
			Function_377(18, 1);
			Function_379(34, 1);
			Function_379(44, 1);
			Function_379(47, 1);
			Global_26031[10] = 1;
			break;
		
		case 0x0000001E:
			Function_387(5, bParam2, 4);
			if (*uParam1 <= 4)
			{
				*uParam1 = 4;
				SET_DISABLE_DEADEYE(0, 0);
				SET_DEADEYE_MULTILOCK_ENABLE(0, 1);
				SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
			}
			Function_389(Global_30693[0]);
			break;
		
		case 0x0000001F:
			Function_389(Global_30693[0]);
			break;
		
		case 0x00000020:
			Function_389(Global_30693[0]);
			Function_389(Global_30707[0]);
			break;
		
		case 0x00000021:
			Function_389(Global_30693[0]);
			break;
		
		case 0x0000001A:
			Function_389(Global_30685[0]);
			Function_389(Global_30693[0]);
			Function_389(Global_30693[1]);
			Function_389(Global_30707[2]);
			break;
		
		case 0x0000001B:
			Function_387(23, bParam2, 3);
			Function_377(23, 1);
			Function_389(Global_30685[0]);
			Function_389(Global_30685[2]);
			Function_368(&(Global_29008[Global_30685[2]]), 32768);
			Function_367(&(Global_29008[Global_30685[2]]), 256);
			break;
		
		case 0x0000001C:
			Function_387(19, bParam2, 4);
			Function_389(Global_30685[0]);
			Function_389(Global_30707[3]);
			break;
		
		case 0x0000001D:
			Function_387(24, bParam2, 3);
			Function_377(24, 1);
			Function_389(Global_30685[0]);
			break;
		
		case 0x00000024:
			Function_389(Global_30685[0]);
			Function_389(Global_30685[3]);
			break;
		
		case 0x00000022:
			Function_389(Global_30693[12]);
			Function_389(Global_30685[1]);
			break;
		
		case 0x00000023:
			Function_389(Global_30693[12]);
			Function_389(Global_30707[1]);
			break;
		
		case 0x00000025:
			Function_387(25, bParam2, 10);
			Function_389(Global_30693[2]);
			break;
		
		case 0x00000026:
			Function_389(Global_30693[12]);
			break;
		
		case 0x00000027:
			Function_389(Global_30693[12]);
			break;
		
		case 0x00000028:
			Function_387(13, bParam2, 4);
			Function_389(Global_30693[2]);
			Function_389(Global_30707[1]);
			break;
		
		case 0x00000029:
			if (!bParam2)
			{
				if (!Function_375(8))
				{
					Function_369(8, 0, 0, 1, 0);
				}
			}
			Function_389(Global_30685[0]);
			Function_381(9);
			Function_377(7, 1);
			Function_377(11, 1);
			Function_377(3, 1);
			Function_377(20, 1);
			Function_379(57, 1);
			break;
		
		case 0x0000002A:
			Function_387(2, bParam2, 4);
			Function_389(Global_30717[0]);
			Function_389(Global_30717[3]);
			break;
		
		case 0x0000002B:
			Function_389(Global_30717[0]);
			break;
		
		case 0x0000002C:
			Function_389(Global_30717[0]);
			Function_389(Global_30723[0]);
			break;
		
		case 0x0000002D:
			Function_389(Global_30717[0]);
			break;
		
		case 0x0000002E:
			Function_389(Global_30717[0]);
			break;
		
		case 0x0000002F:
			Function_389(Global_30717[0]);
			break;
		
		case 0x00000030:
			Function_387(17, bParam2, 4);
			Function_389(Global_30723[0]);
			Function_389(Global_30717[0]);
			break;
		
		case 0x00000031:
			if (!bParam2)
			{
				if (!Function_364(15))
				{
					Function_360(15, 0, 1);
				}
			}
			Function_76(2, 26);
			Function_367(&(Global_29008[Global_30717[1]]), 256);
			Function_381(11);
			Function_389(Global_30717[1]);
			Function_389(Global_30668[0]);
			break;
		
		case 0x00000032:
			Function_389(Global_30717[1]);
			break;
		
		case 0x00000033:
			Function_389(Global_30717[1]);
			Function_389(Global_30717[0]);
			break;
		
		case 0x00000034:
			Function_389(Global_30717[1]);
			break;
		
		case 0x00000035:
			Function_389(Global_30717[1]);
			break;
		
		case 0x00000036:
			Function_389(Global_30717[1]);
			break;
		
		case 0x00000037:
			Function_389(Global_30717[1]);
			break;
		
		case 0x00000038:
			Function_389(Global_30717[1]);
			break;
		
		case 0x00000039:
			Function_389(Global_30717[1]);
			Function_359(11);
			Function_381(12);
			Global_16537[1121].f_40 = 0;
			Function_379(56, 1);
			if (!bParam2)
			{
				if (!Function_375(9))
				{
					Function_369(9, 0, 0, 0, 0);
				}
				if (!Function_375(10))
				{
					Function_369(10, 0, 0, 1, 0);
				}
			}
			break;
	}
	Var0 = { StackVal, StackVal, StackVal, Function_340(bParam0) };
	PRINTSTRING("MISSION LAUNCH: Giving stuff for debug passing ");
	PRINTSTRING(UI_GET_STRING(&Var0));
	PRINTNL();
	return;
}

void Function_359(int iParam0) //Position: 0x176C7 / 95943
{
	bool bVar0;
	
	if (!Function_52(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_68))
	{
		Function_120(Global_16537[iParam021].f_68, 0);
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_72))
	{
		Function_120(Global_16537[iParam021].f_72, 0);
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
			Function_210(Global_16537[iParam021].f_48, 16, 0, 0);
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

void Function_360(bool bParam0, bool bParam1, bool bParam2) //Position: 0x17836 / 96310
{
	char* cVar0[32];
	char* cVar8[32];
	
	if (!Function_363(bParam0))
	{
		LOG_ERROR("Attempting to mostly complete an invalid outfit");
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_364(bParam0))
	{
		if (!Function_375(bParam0))
		{
			Function_369(bParam0, 1, 0, 0, 1);
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
			SET_JOURNAL_ENTRY_PROGRESS(Global_27774[bParam013].f_48, -1.0f, 0, 0);
			if (!bParam1)
			{
				PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Finish", &cVar0, false, false, false, 0, 2, 0, 0, 0);
			}
		}
		Function_62(457, 1, 0, 0);
		Function_362(bParam0, 6);
		if (bParam0 == 3)
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(23))
			{
				AWARD_ACHIEVEMENT(23);
			}
		}
		if (bParam2)
		{
			if (!Function_398(0, 0, 1, 1))
			{
				Function_17(1);
				Function_15(1, 0);
			}
			else
			{
				Function_361();
			}
		}
	}
	return;
}

void Function_361() //Position: 0x179D5 / 96725
{
	return;
}

void Function_362(bool bParam0, int iParam1) //Position: 0x179DB / 96731
{
	if (!Function_363(bParam0))
	{
		LOG_ERROR("Attempting to set status on invalid outfit");
		return;
	}
	Global_27774[bParam013].f_8 = (StackVal || iParam1);
	return;
}

bool Function_363(int iParam0) //Position: 0x17A30 / 96816
{
	if (iParam0 > 0 || iParam0 < 30)
	{
		return 0;
	}
	return 1;
}

bool Function_364(int iParam0) //Position: 0x17A46 / 96838
{
	if (!Function_363(iParam0))
	{
		LOG_ERROR("Attempting to check wearable on invalid outfit");
		return 0;
	}
	if (Function_365(iParam0, 4))
	{
		return 1;
	}
	return 0;
}

bool Function_365(int iParam0, int iParam1) //Position: 0x17A97 / 96919
{
	int iVar0;
	
	if (!Function_363(iParam0))
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

void Function_366(var uParam0, int iParam1) //Position: 0x17AC4 / 96964
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_367(var uParam0, int iParam1) //Position: 0x17AD3 / 96979
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	return;
}

void Function_368(var uParam0, int iParam1) //Position: 0x17AEA / 97002
{
	*uParam0 = (*uParam0 || iParam1);
	return;
}

void Function_369(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x17AF9 / 97017
{
	struct<8> Var0;
	
	if (!Function_363(bParam0))
	{
		LOG_ERROR("Attempting to discover invalid outfit");
		return;
	}
	if (!Function_115(3) && !bParam4)
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_375(bParam0))
	{
		Function_62(456, 1, 0, 0);
		Function_362(bParam0, 2);
		if (bParam2)
		{
			if (!Function_398(0, 0, 1, 1))
			{
				Function_17(1);
				Function_15(1, 5);
			}
			else
			{
				Function_361();
			}
		}
		Function_370(bParam0);
		strcpy(&Var0, "OUT_", 32);
		stradd(&Var0, &Global_27774[bParam013] + 32, 32);
		if ((!Function_193() && !bParam1) && !Global_3380)
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Add", &Var0, false, false, false, 0, 2, 0, 0, 0);
		}
		else if (Function_193() || Global_3380)
		{
			if (!DECOR_CHECK_EXIST(Global_34573, "outfitDisc"))
			{
				DECOR_SET_INT(Global_34573, "outfitDisc", bParam0);
			}
		}
		if (bParam3)
		{
			stradd(&Var0, "_tip", 32);
			Function_108(&Var0, 10.0f, 1, 0, 0, 1, 0);
		}
		if (!Function_58())
		{
			if (!Function_105(Global_76846, 2))
			{
				Function_100(Global_34573, 2, 1, 0);
			}
		}
	}
}

void Function_370(bool bParam0) //Position: 0x17C4E / 97358
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
			if (Function_373(bParam0, Function_374(bVar24)))
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
			if (Function_373(bParam0, Function_374(bVar24)))
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
		SET_JOURNAL_ENTRY_PROGRESS(Global_27774[bParam013].f_48, (TO_FLOAT(Function_372(bParam0)) / TO_FLOAT(Global_27774[bParam013].f_28)), 0, 0);
		Function_249(Global_27774[bParam013].f_48, 0);
		straddi(&cVar8, Function_371(bParam0), 32);
		SET_JOURNAL_ENTRY_CURRENT_OBJECTIVE(Global_27774[bParam013].f_48, &cVar8, 3);
	}
	return;
}

int Function_371(int iParam0) //Position: 0x17DFE / 97790
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_363(iParam0))
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

var Function_372(int iParam0) //Position: 0x17E55 / 97877
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Function_363(iParam0))
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

bool Function_373(bool bParam0, int iParam1) //Position: 0x17EAB / 97963
{
	int iVar0;
	
	if (!Function_363(bParam0))
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

int Function_374(bool bParam0) //Position: 0x17F0A / 98058
{
	return SHIFT_LEFT(true, bParam0);
}

bool Function_375(int iParam0) //Position: 0x17F16 / 98070
{
	if (!Function_363(iParam0))
	{
		LOG_ERROR("Attempting to check discovery of invalid outfit");
		return 0;
	}
	if (Function_365(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

bool Function_376() //Position: 0x17F68 / 98152
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return Function_113(GET_GAME_EDITION(), 16);
	}
	return 0;
}

int Function_377(int iParam0, int iParam1) //Position: 0x17F98 / 98200
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_WEAPON_AVAILABLE_FOR_SALE: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_59354[iParam08].f_24 = iParam1;
	Function_378(iParam0, iParam1);
	Function_100(Global_34573, 1, 4, 1);
	return 1;
}

int Function_378(int iParam0, int iParam1) //Position: 0x1800C / 98316
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_WEAPON_AVAILABLILITY: theWeaponEnum = WE_INVALID!");
		return 0;
	}
	Global_62337[iParam0] = iParam1;
	return 1;
}

int Function_379(int iParam0, int iParam1) //Position: 0x18068 / 98408
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SET_AMMO_AVAILABLE_FOR_SALE: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_59675[iParam08].f_24 = iParam1;
	Function_380(iParam0, iParam1);
	Function_100(Global_34573, 1, 4, 1);
	return 1;
}

int Function_380(int iParam0, int iParam1) //Position: 0x180D9 / 98521
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("SK_SHOP_SAVE_ITEM_AVAILABLILITY: theItemEnum = ITEM_INVALID!");
		return 0;
	}
	Global_62378[iParam0] = iParam1;
	return 1;
}

void Function_381(int iParam0) //Position: 0x18133 / 98611
{
	bool bVar0;
	bool bVar1;
	
	if (!Function_52(iParam0))
	{
		return;
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_68))
	{
		Function_121(Global_16537[iParam021].f_68, 0);
	}
	if (IS_DOOR_VALID(Global_16537[iParam021].f_72))
	{
		Function_121(Global_16537[iParam021].f_72, 0);
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
			Function_62(468, 1, 0, 0);
			Function_76(6, (16 + iParam0));
			Global_16537[iParam021].f_40 = 3;
			Function_108("house_purchased", 0x41200000, 1, 0, 2, 1, 0);
			Function_210(Global_16537[iParam021].f_48, 17, 0, 0);
			if (((iParam0 != 5 || iParam0 != 8) || iParam0 != 6) || iParam0 != 7)
			{
				Function_369(14, 1, 0, 0, 0);
				Function_382(14, 1, 0, 0, 0);
			}
			if (!Function_398(0, 0, 1, 1))
			{
				Function_17(1);
				Function_15(1, 6);
			}
			else
			{
				Function_361();
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
			Function_108("house_rented", 0x41200000, 1, 0, 2, 1, 0);
			break;
		
		case 0x00000006:
			Function_62(468, 1, 0, 0);
			Global_16537[iParam021].f_40 = 3;
			Function_76(6, (16 + iParam0));
			break;
	}
	return;
}

void Function_382(bool bParam0, bool bParam1, bool bParam2, var uParam3, bool bParam4) //Position: 0x183E0 / 99296
{
	char* cVar0[32];
	struct<8> Var8;
	
	strcpy(&cVar0, "OUT_", 32);
	stradd(&cVar0, &Global_27774[bParam013] + 32, 32);
	if (!Function_363(bParam0))
	{
		LOG_ERROR("Attempting to add scrap to invalid outfit");
		return;
	}
	if (!Function_115(3) || uParam3)
	{
		return;
	}
	if (Global_3381)
	{
		return;
	}
	if (!Function_365(bParam0, 2))
	{
		Function_62(456, 1, 0, 0);
		Function_362(bParam0, 2);
		if (!bParam2)
		{
			Var8 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, cVar0 };
			stradd(&Var8, "_tip", 32);
			Function_108(&Var8, 10.0f, 1, 0, 0, 1, 0);
		}
	}
	bParam2 = bParam2;
	if (!Function_373(bParam0, bParam1))
	{
		Global_27774[bParam013].f_4 = (StackVal || bParam1);
		Function_362(bParam0, 1048576);
		if (bParam4)
		{
			if (!Function_398(0, 0, 1, 1))
			{
				Function_17(1);
				Function_15(1, 0);
			}
			else
			{
				Function_361();
			}
		}
		Function_370(bParam0);
		if (StackVal && !Function_113(((((!Function_193() && !Global_3380) && !Global_3392) && !Global_3384) && !bParam2), 1))
		{
			PRINT_OBJECTIVE_FORMAT(15.0f, "out_Journal_Edit", &cVar0, false, false, false, 0, 2, 0, 0, 0);
		}
		else if (StackVal || Function_113((((Function_193() || Global_3380) || Global_3392) || Global_3384), 1))
		{
			if (!DECOR_CHECK_EXIST(Global_34573, "outfitScrap"))
			{
				DECOR_SET_INT(Global_34573, "outfitScrap", bParam0);
			}
		}
		if (!Function_58())
		{
			if (!Function_105(Global_76846, 2))
			{
				Function_100(Global_34573, 2, 1, 0);
			}
		}
		if (Global_28180 == bParam0)
		{
			Global_28180.f_12 = 1;
			Function_384();
		}
		Global_28180.f_12 = 1;
		switch (bParam0)
		{
			case 0x00000004:
				Function_383(3, bParam1);
				break;
			
			case 0x00000005:
				Function_383(3, SHIFT_LEFT(bParam1, 6));
				break;
			
			case 0x00000006:
				Function_383(3, SHIFT_LEFT(bParam1, 12));
				break;
			
			case 0x00000007:
				Function_383(3, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x00000008:
				Function_383(3, SHIFT_LEFT(bParam1, 24));
				break;
			
			case 0x00000009:
				Function_383(2, SHIFT_LEFT(bParam1, 18));
				break;
			
			case 0x0000000A:
				Function_76(2, 24);
				break;
			
			case 0x00000003:
				Function_76(2, 25);
				break;
			
			case 0x0000000F:
				Function_76(2, 26);
				break;
			
			case 0x0000000D:
				Function_76(2, 27);
				break;
			
			case 0x0000000E:
				Function_76(2, 28);
				break;
			}
	}
}

void Function_383(int iParam0, bool bParam1) //Position: 0x18676 / 99958
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

void Function_384() //Position: 0x186E1 / 100065
{
	if (Function_363(Global_28180))
	{
		if (Global_28180.f_12)
		{
			if (IS_BLIP_VALID(StackVal))
			{
				REMOVE_BLIP(StackVal);
			}
			Global_28180.f_4 = Function_386(Global_28180);
			Global_28180.f_8 = Function_385(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
		else if (!IS_BLIP_VALID(StackVal))
		{
			Global_28180.f_4 = Function_386(Global_28180);
			Global_28180.f_8 = Function_385(StackVal, Global_28180);
			Global_28180.f_12 = 0;
		}
	}
	return;
}

var Function_385(int iParam0, int iParam1) //Position: 0x1875C / 100188
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
					if (Function_97(6, 0) || Function_97(12, 0))
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
					if (Function_70(13) && iVar16)
					{
						bVar6 = StackVal;
						iVar16 = 0;
					}
					else if (iVar16 && Function_97(5, 0))
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
					if (Function_70(26) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_70(25) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_70(24) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (Function_70(23) && iVar17)
					{
						bVar6 = StackVal;
						iVar17 = 0;
					}
					else if (iVar17 && Function_97(26, 0))
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
					if (Function_70(55) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_70(54) && iVar18)
					{
						bVar6 = StackVal;
						iVar18 = 0;
					}
					else if (Function_70(27) && iVar18)
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
					if (Function_70(52) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_70(51) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_70(50) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_70(49) && iVar15)
					{
						bVar6 = StackVal;
						iVar15 = 0;
					}
					else if (Function_97(17, 0) && iVar15)
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
					if (Function_70(19) && iVar19)
					{
						vVar0 = { -1708.36f, 46.18f, 2175.89f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_97(6, 0) && Function_70(18)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_70(17) && iVar19)
					{
						vVar0 = { -1687.208f, 53.208f, 2140.491f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if ((Function_97(9, 0) && Function_70(16)) && iVar19)
					{
						bVar6 = StackVal;
						iVar19 = 0;
					}
					else if (Function_70(15) && iVar19)
					{
						vVar0 = { -1709.084f, 55.216f, 2104.631f };
						vVar3 = { 125.0f, 125.0f, 125.0f };
						iVar19 = 0;
					}
					else if (Function_97(8, 0) && iVar19)
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
	if (Function_49(StackVal, StackVal, vVar0))
	{
		if (IS_OBJECT_VALID(bVar6))
		{
			GET_OBJECT_POSITION(bVar6, &vVar0);
			if (Function_49(StackVal, StackVal, vVar3))
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
	if (!Function_49(StackVal, StackVal, vVar3))
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

int Function_386(int iParam0) //Position: 0x1934D / 103245
{
	int iVar0;
	int iVar1;
	
	if (!Function_363(iParam0))
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

void Function_387(bool bParam0, bool bParam1, int iParam2) //Position: 0x1939C / 103324
{
	bool bVar0;
	
	if (bParam1)
	{
		SET_WEAPONENUM_LOCKED(bParam0, 0);
	}
	else
	{
		bVar0 = (GET_WEAPON_MAX_AMMO(bParam0) * IntToFloat(iParam2));
		if (Function_388(GET_AMMOENUM_FOR_WEAPONENUM(bParam0), 1))
		{
			_ADD_AMMO_OF_TYPE(Global_34573, GET_AMMOENUM_FOR_WEAPONENUM(bParam0), bVar0, 1, 0);
		}
		if (4294967295 != bParam0)
		{
			if (!ACTOR_HAS_WEAPON(Global_34573, bParam0))
			{
				Function_356(bParam0, 0, 0);
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

bool Function_388(int iParam0, int iParam1) //Position: 0x1940A / 103434
{
	return !(iParam0 != 4294967295 || (iParam1 && iParam0 != 0));
}

void Function_389(int iParam0) //Position: 0x1941D / 103453
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	if (NET_IS_IN_SESSION())
	{
		return;
	}
	if (Function_233(&(Global_29008[iParam0]), 4096))
	{
		return;
	}
	Function_368(&(Global_29008[iParam0]), 4096);
	if (StackVal != 1)
	{
		Function_62(473, 1, 0, 0);
		iVar0 = Function_390(iParam0);
		if (iVar0 == Global_30621[0])
		{
			Function_62(474, 1, 0, 0);
		}
		else if (iVar0 == Global_30621[1])
		{
			Function_62(475, 1, 0, 0);
		}
		else if (iVar0 == Global_30621[2])
		{
			Function_62(476, 1, 0, 0);
		}
	}
	bVar1 = (Global_29155[iParam010].f_36 - 5);
	iVar2 = 8;
	while (bVar1 >= 30)
	{
		bVar1 = (bVar1 - 31);
		iVar2++;
	}
	if (iVar2 < 10)
	{
		Function_76(iVar2, bVar1);
	}
	else if (iParam0 == Global_30723[9])
	{
		Function_76(7, 30);
	}
	if (Function_38(473) <= Function_39(473))
	{
		if (!Function_16())
		{
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(30))
			{
				AWARD_ACHIEVEMENT(30);
			}
		}
	}
	return;
}

var Function_390(int iParam0) //Position: 0x1951C / 103708
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (!iParam0 != 4294967295 && Function_72(iParam0))
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

void Function_391() //Position: 0x19574 / 103796
{
	Function_392(512);
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

void Function_392(int iParam0) //Position: 0x195B0 / 103856
{
	Global_26316.f_56 = (Global_26316.f_56 || iParam0);
	return;
}

void Function_393(int iParam0, int iParam1) //Position: 0x195C3 / 103875
{
	if (!Function_177(iParam0))
	{
		return;
	}
	Global_13172[iParam011].f_16 = iParam1;
	return;
}

void Function_394(int iParam0) //Position: 0x195DE / 103902
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
			Function_395(4, 0, 0);
		}
	}
	return;
}

void Function_395(int iParam0, int iParam1, int iParam2) //Position: 0x19645 / 104005
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
		bVar0 = MAKE_TIME_OF_DAY(iParam0, iParam1, iParam2);
		Function_307(Global_16524, bVar0, 1);
	}
	return;
}

bool Function_396(bool bParam0) //Position: 0x1972B / 104235
{
	if (!Function_3(bParam0))
	{
		return 4294967295;
	}
	return (SHIFT_RIGHT(Global_13172[bParam011], 12) && 255);
}

struct<160> Function_397(var uParam0, int iParam1) //Position: 0x1974B / 104267
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

bool Function_398(int iParam0, int iParam1, int iParam2, int iParam3) //Position: 0x19785 / 104325
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

bool Function_399(int iParam0) //Position: 0x19829 / 104489
{
	return IS_OBJECT_VALID(Function_400(iParam0));
}

var Function_400(int iParam0) //Position: 0x19837 / 104503
{
	return iParam0->f_28;
}

void Function_401(int iParam0, int iParam1) //Position: 0x19841 / 104513
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
			Function_402(&(Global_25267[iVar058]));
		}
		iVar0++;
	}
	return;
}

void Function_402(int iParam0) //Position: 0x198C3 / 104643
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

void Function_403(var uParam0) //Position: 0x19911 / 104721
{
	int iVar0;
	
	if (!Global_30842[5])
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= *uParam0)
	{
		PRINTSTRING(UI_GET_STRING(uParam0[iVar040] + 12));
		PRINTSTRING(" - ");
		switch (Function_321(StackVal))
		{
			case 0x00000003:
				PRINTSTRING("nCompleted");
				break;
			
			case 0x00000004:
				PRINTSTRING("Completed(Cheated)");
				break;
			
			case 0x00000000:
				if (Function_320(uParam0[iVar040]))
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

void Function_404() //Position: 0x19A1E / 104990
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

void Function_405() //Position: 0x19BC6 / 105414
{
	SET_ACTOR_INVULNERABILITY(GET_PLAYER_ACTOR(0), 1);
	Function_412(4294967295, 4294967295);
	Function_409();
	Global_62478 = 1;
	PRINTSTRING("TEST: Currently Testing Region 0 - FRONTIER");
	PRINTNL();
	if (Global_62482 > 0 || Global_62482 <= Global_3422)
	{
		Global_62481 = 4294967197;
		Global_62482 = 0;
		return;
	}
	Function_407();
	Global_62478 = 1;
	Function_406();
	LAUNCH_NEW_SCRIPT("content/scripting/DesignerDefined/AutomatedTester/MissionTester", 0);
	return;
}

int Function_406() //Position: 0x19C81 / 105601
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

void Function_407() //Position: 0x19CA8 / 105640
{
	Function_408(25, 2);
	return;
}

void Function_408(int iParam0, int iParam1) //Position: 0x19CB4 / 105652
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

void Function_409() //Position: 0x19EB2 / 106162
{
	GRINGO_DEBUG_CHECK_SOUND(1);
	SET_DEBUG_FADE_STATE(0);
	SET_HUD_MAP_DRAW_ENABLED(1);
	if (Function_411())
	{
		Function_410(10, 3);
	}
	else
	{
		Function_407();
	}
	Global_30920 = 0;
	SET_PLAYER_CONTROL(0, 1, 0, 0);
	SET_ACTOR_INVULNERABILITY(Function_25(), 0);
	AI_CLEAR_DONT_HARM_ACTOR(Function_25());
	UI_POP("nDebugMenu");
	return;
}

void Function_410(int iParam0, int iParam1) //Position: 0x19EFD / 106237
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

bool Function_411() //Position: 0x1A034 / 106548
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
				if (!Function_113(Global_78480.f_124, 1))
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

void Function_412(int iParam0, int iParam1) //Position: 0x1A09B / 106651
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

void Function_413() //Position: 0x1A1D2 / 106962
{
	bool bVar0;
	
	Function_459(&Global_3422, 1, 0, "$/content/DLC/ZombiePack/Missions/Zombie01/Zombie01", 4294967295, 0, -99.751f, 119.489f, 1358.906f);
	Function_457(&Global_3422, 2, 0, "$/content/DLC/ZombiePack/Missions/Zombie02/Zombie02", 1, 2, 311, 2, "$/content/DLC/ZombiePack/gringos/Zombie_Camp02", -3858.379f, 5.354f, 3667.161f, FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_Zombie02"), -3859.997f, 7.974345f, 3665.969f);
	Function_457(&Global_3422, 3, 0, "$/content/DLC/ZombiePack/Missions/Zombie03/Zombie03", 2, 2, 310, 7, "$/content/DLC/ZombiePack/gringos/Zombie_Camp03", -4348.098f, 50.12865f, 4322.852f, FIND_VOLUME_IN_LAYOUT(FIND_NAMED_LAYOUT("regions_layout"), "launch_Zombie03"), -4348.098f, 50.12865f, 4322.852f);
	Function_459(&Global_3422, 4, 0, "$/content/DLC/ZombiePack/Missions/Zombie04/Zombie04", 3, 1, -99.751f, 119.489f, 1358.906f);
	if (Global_3381)
	{
		Function_424(Global_6267, 1);
		Function_420(0);
	}
	else
	{
		bVar0 = Function_418();
		if (bVar0 != 4294967295)
		{
			if (Function_99(bVar0))
			{
				Function_343(25, &Global_3422[bVar040] + 12, 0, 1);
				Function_27(25, bVar0, 0);
				Function_62(10, 1, 0, 0);
			}
		}
		else
		{
			bVar0 = Function_42(25);
			if (Function_99(bVar0))
			{
				Function_343(25, &Global_3422[bVar040] + 12, 0, 1);
			}
			else
			{
				Function_343(25, "fav_non", 0, 1);
			}
		}
		bVar0 = Function_42(18);
		if (Function_99(bVar0))
		{
			Function_343(18, &Global_3422[bVar040] + 12, 0, 1);
		}
		else
		{
			Function_343(18, "fav_non", 0, 1);
		}
		bVar0 = Function_42(24);
		if (Function_99(bVar0))
		{
			Function_343(24, &Global_3422[bVar040] + 12, 0, 1);
		}
		else
		{
			Function_343(24, "fav_non", 0, 1);
		}
		Function_416();
	}
	Function_414();
	ENABLE_JOURNAL_REPLAY(1);
	Global_3374 = 1;
	return;
}

void Function_414() //Position: 0x1A4E8 / 107752
{
	int iVar0;
	
	if (Function_16())
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
					if (Function_97(25, 0))
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
					if (Function_97(25, 0) && !Function_97(26, 0))
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
					if ((Function_97(25, 0) && Function_97(26, 0)) && !Function_97(29, 0))
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
					if ((Function_97(25, 0) && Function_97(26, 0)) && Function_97(29, 0))
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
					if (Function_97(41, 0))
					{
						Global_26003[iVar0] = 1;
						DISABLE_WORLD_SECTOR("tannersSpanBefore");
						ENABLE_WORLD_SECTOR("tannersSpanAfter");
					}
					break;
				
				case 0x00000005:
					if (Function_97(41, 0))
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
					if (Function_97(22, 0) && !Function_97(41, 0))
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
					if (Function_97(22, 0) && Function_97(41, 0))
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
					if (Function_97(34, 0))
					{
						Global_26003[iVar0] = 1;
						DISABLE_WORLD_SECTOR("campoMiradaBefore");
						ENABLE_WORLD_SECTOR("campoMiradaAfter");
					}
					break;
				
				case 0x00000009:
					if (Function_97(26, 0) || Function_97(30, 0))
					{
						Global_26003[iVar0] = 1;
						DISABLE_WORLD_SECTOR("fronteraBridgeBefore");
						ENABLE_WORLD_SECTOR("fronteraBridgeAfter");
					}
					break;
				
				case 0x0000000A:
					if (Function_97(40, 0))
					{
						Global_26003[iVar0] = 1;
						DISABLE_CHILD_SECTOR("fod_gates01x");
						ENABLE_CHILD_SECTOR("fod_gates02x");
						ENABLE_CHILD_SECTOR("fod_gates02Doors01x");
					}
					break;
				
				case 0x0000000B:
					if (Function_97(48, 0))
					{
						Global_26003[iVar0] = 1;
						DISABLE_CHILD_SECTOR("coc_fence01x");
						ENABLE_CHILD_SECTOR("coc_fence01bx");
						ENABLE_CHILD_SECTOR("coc_gates02x");
						DISABLE_CHILD_SECTOR("coc_gates01x");
					}
					break;
				
				case 0x0000000C:
					if (Function_97(41, 0))
					{
						Global_26003[iVar0] = 1;
						DISABLE_WORLD_SECTOR("masonBridgeBefore");
						ENABLE_WORLD_SECTOR("masonBridgeAfter");
					}
					break;
				
				case 0x0000000D:
					if (Function_97(41, 0))
					{
						Global_26003[iVar0] = 1;
						DISABLE_CHILD_SECTOR("lmf_troughBefore01x");
						ENABLE_CHILD_SECTOR("lmf_troughAfter01x");
					}
					break;
				
				case 0x0000000E:
					break;
				
				case 0x0000000F:
					if (Function_97(21, 0))
					{
						Global_26003[iVar0] = 1;
						DISABLE_CHILD_SECTOR("rwf_barn01xprops02x");
						ENABLE_CHILD_SECTOR("rwf_barn01xprops01x");
					}
					break;
				
				case 0x00000010:
					if (Function_97(57, 0) || Function_415(57))
					{
						Global_26003[iVar0] = 1;
						DISABLE_CHILD_SECTOR("beh_silo02x");
						ENABLE_CHILD_SECTOR("beh_silo01x");
					}
					break;
				
				case 0x00000011:
					if (Function_97(48, 0))
					{
						Global_26003[iVar0] = 1;
						DISABLE_CHILD_SECTOR("beh_house02x");
						DISABLE_CHILD_SECTOR("beh_house02props01x");
						ENABLE_CHILD_SECTOR("beh_house01x");
						ENABLE_CHILD_SECTOR("beh_house01props01x");
					}
					break;
				
				case 0x00000012:
					if (Function_97(28, 0))
					{
						Global_26003[iVar0] = 1;
						DISABLE_CHILD_SECTOR("tor_militaryCamp01x");
						ENABLE_CHILD_SECTOR("tor_militaryCamp02x");
					}
					break;
				
				case 0x00000013:
					if (Function_97(41, 0))
					{
						Global_26003[iVar0] = 1;
						DISABLE_CHILD_SECTOR("esc_villaWall04x");
						ENABLE_CHILD_SECTOR("esc_villaWall05x");
					}
					break;
				
				case 0x00000014:
					if (Function_70(37))
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
					if (Function_97(57, 0))
					{
						Global_26003[iVar0] = 1;
						ENABLE_CHILD_SECTOR("beh_grave02x");
						ENABLE_CHILD_SECTOR("beh_grave03x");
						DISABLE_CHILD_SECTOR("beh_grave01x");
					}
					break;
				
				case 0x00000018:
					if (Function_97(25, 0))
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
					if (Function_97(32, 0))
					{
						Global_26003[iVar0] = 1;
						ENABLE_CHILD_SECTOR("emt_caveDoor02x");
						DISABLE_CHILD_SECTOR("emt_caveDoor01x");
					}
					break;
				
				case 0x0000001A:
					if (Function_97(20, 0))
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

bool Function_415(int iParam0) //Position: 0x1BCC4 / 113860
{
	int iVar0;
	
	if (!Function_99(iParam0))
	{
		return 0;
	}
	iVar0 = Function_98(iParam0);
	if (!Function_177(Function_98(iParam0)))
	{
		return 0;
	}
	if (StackVal == 2)
	{
		return 1;
	}
	return 0;
}

void Function_416() //Position: 0x1BCFA / 113914
{
	int iVar0;
	int iVar1;
	
	if (!Function_99(Global_6269))
	{
		return;
	}
	iVar0 = Function_42(24);
	iVar1 = Function_98(Global_6269);
	if (!Function_99(iVar0) && Function_417(iVar1) < 0)
	{
		Function_27(24, Global_6269, 0);
		Function_343(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	else if (StackVal <= Function_417(Function_98(iVar0)))
	{
		Function_27(24, Global_6269, 0);
		Function_343(24, &Global_3422[Global_626940] + 12, 0, 1);
	}
	return;
}

int Function_417(int iParam0) //Position: 0x1BD7A / 114042
{
	if (!Function_177(iParam0))
	{
		return 4294967295;
	}
	return StackVal;
}

var Function_418() //Position: 0x1BD94 / 114068
{
	struct<145> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	iVar44 = Var0.f_136;
	Function_27(11, Var0.f_140, 0);
	Function_419(Function_98(Global_6269), Var0.f_144);
	if (iVar44 != 4294967295)
	{
	}
	return iVar44;
}

void Function_419(int iParam0, int iParam1) //Position: 0x1BDD1 / 114129
{
	if (!Function_177(iParam0))
	{
		return;
	}
	Global_13172[iParam011].f_8 = iParam1;
	return;
}

void Function_420(bool bParam0) //Position: 0x1BDEC / 114156
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	struct<8> Var3;
	struct<8> Var11;
	
	iVar0 = 0;
	while (iVar0 <= Global_25986)
	{
		if ((!Global_25986[iVar0] && (!bParam0 || !Function_193())) && !bVar1)
		{
			switch (iVar0)
			{
				case 0x00000000:
					if (Function_97(2, 0))
					{
						bVar1 = false;
						Global_25986[iVar0] = 1;
						SET_DISABLE_DEADEYE(0, 0);
						SET_DEADEYE_MULTILOCK_ENABLE(0, 0);
						SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
						Function_423(390, 3.0f);
						Function_27(390, 1, bParam0);
					}
					break;
				
				case 0x00000001:
					if (Function_97(11, 0))
					{
						bVar1 = false;
						Global_25986[iVar0] = 1;
						SET_DISABLE_DEADEYE(0, 0);
						SET_DEADEYE_MULTILOCK_ENABLE(0, 1);
						SET_DEADEYE_TARGETPAINT_ENABLE(0, 0);
						Function_423(390, 3.0f);
						Function_27(390, 2, bParam0);
					}
					break;
				
				case 0x00000002:
					if (Function_97(30, 0))
					{
						bVar1 = false;
						Global_25986[iVar0] = 1;
						SET_DISABLE_DEADEYE(0, 0);
						SET_DEADEYE_MULTILOCK_ENABLE(0, 1);
						SET_DEADEYE_TARGETPAINT_ENABLE(0, 1);
						Function_423(390, 3.0f);
						Function_27(390, 3, bParam0);
					}
					break;
				
				case 0x00000003:
					Global_25986[iVar0] = 1;
					break;
				
				case 0x00000004:
					if (Function_97(4, 0))
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
					if (Function_97(2, 0))
					{
						Global_25986[iVar0] = 1;
						bVar1 = true;
						bVar2 = true;
						strcpy(&Var3, "shop_feature_1", 32);
						strcpy(&Var11, "shop_feature_2", 32);
					}
					break;
				
				case 0x00000006:
					if (Function_97(2, 0))
					{
						Global_25986[iVar0] = 1;
						bVar1 = false;
					}
					break;
				
				case 0x00000007:
					if (Function_97(2, 0))
					{
						Global_25986[iVar0] = 1;
						bVar1 = false;
					}
					break;
				
				case 0x00000008:
					if (Function_97(37, 0))
					{
						Global_25986[iVar0] = 1;
					}
					break;
				
				case 0x0000000A:
					if (Function_97(2, 0) && !Function_71("npressDemo"))
					{
						Global_25986[iVar0] = 1;
						bVar1 = false;
					}
					break;
				
				case 0x0000000B:
					if (Function_97(4, 0))
					{
						Global_25986[iVar0] = 1;
						bVar1 = true;
						bVar2 = true;
						strcpy(&Var3, "house_feature_1", 32);
						strcpy(&Var11, "house_feature_2", 32);
					}
					break;
				
				case 0x0000000C:
					if (!Function_415(1))
					{
						Function_422(1);
						Global_25986[iVar0] = 1;
					}
					else
					{
						Function_422(0);
						Global_25986[iVar0] = 0;
					}
					break;
				
				case 0x0000000D:
					if (Function_421(0) == 10)
					{
						Global_25986[iVar0] = 1;
						bVar1 = true;
						strcpy(&Var3, "nAM_SS_RW2", 32);
						SET_DEADEYE_POINT_MODIFIER(0, 2.0f);
					}
					break;
				
				case 0x0000000E:
					if (Function_421(1) > 5)
					{
						Global_25986[iVar0] = 1;
						bVar1 = true;
						strcpy(&Var3, "nAM_MH_RW1", 32);
						SET_WEAPONENUM_LOCKED(14, 0);
						Function_377(14, 1);
					}
					break;
				
				case 0x0000000F:
					if (((Function_421(0) != 10 && Function_421(1) != 10) && Function_421(2) != 10) && Function_421(3) != 10)
					{
						Global_25986[iVar0] = 1;
						bVar1 = true;
						strcpy(&Var3, "AM_LOTW_RW1", 32);
						SET_MAX_DEADEYE_POINTS(0, 150.0f);
						Function_360(11, 0, 1);
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
		Function_108(&Var3, 0x41200000, 1, 0, 2, 1, 0);
		if (bVar2)
		{
			stradd(&Var11, "_help", 32);
			Function_108(&Var11, 0x41200000, 1, 0, 2, 1, 0);
		}
	}
	return;
}

int Function_421(int iParam0) //Position: 0x1C1BE / 115134
{
	if (Function_16() || Global_34165.f_44)
	{
		return StackVal;
	}
	return StackVal;
}

void Function_422(bool bParam0) //Position: 0x1C1E6 / 115174
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

int Function_423(int iParam0, int iParam1) //Position: 0x1C25A / 115290
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MAX_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_64 = iParam1;
	return 1;
}

void Function_424(int iParam0, bool bParam1) //Position: 0x1C29A / 115354
{
	if (!bParam1)
	{
		Global_13172[411].f_4 = StackVal;
	}
	if (Global_3422[iParam040].f_132 != 4294967295)
	{
		if (!Function_97(Global_3422[iParam040].f_132, 0))
		{
			Function_424(Global_3422[iParam040].f_132, 0);
		}
	}
	if (Global_3422[iParam040].f_136 != 4294967295)
	{
		if (!Function_97(Global_3422[iParam040].f_136, 0))
		{
			Function_424(Global_3422[iParam040].f_136, 0);
		}
	}
	if (Global_3422[iParam040].f_140 != 4294967295)
	{
		if (!Function_97(Global_3422[iParam040].f_140, 0))
		{
			Function_424(Global_3422[iParam040].f_140, 0);
		}
	}
	if (Global_3422[iParam040].f_144 != 4294967295)
	{
		if (!Function_97(Global_3422[iParam040].f_144, 0))
		{
			Function_424(Global_3422[iParam040].f_144, 0);
		}
	}
	if (!bParam1)
	{
		Global_13172[011].f_4 = StackVal;
		Function_425(StackVal, 0, 0, 1, 0);
	}
	return;
}

void Function_425(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4) //Position: 0x1C38A / 115594
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	
	Function_456(12);
	Function_327(2);
	Function_325((15 - Function_326(105)));
	if (Function_2(bParam0) == 1)
	{
		bVar2 = Function_396(bParam0);
		Function_394(&(Global_3422[bVar240]));
		Function_455(4194304);
		if (bParam3)
		{
			Function_358(bVar2, &uVar0, 0);
			if (!Global_3379)
			{
				Function_450(bVar2);
			}
		}
		else if (bParam4)
		{
			Function_358(bVar2, &uVar0, 0);
		}
		bVar1 = Function_449();
		if (bParam1)
		{
			Function_435(bVar2, bParam0, bVar1);
			Function_434();
		}
	}
	Function_428(bParam0, bParam1, uParam2, bVar1);
	if (Function_2(bParam0) == 1)
	{
		if (bParam1)
		{
			if (!Global_3381)
			{
				Function_427(bVar2, bVar1);
			}
		}
	}
	if ((!HAS_ACHIEVEMENT_BEEN_PASSED(33) && bParam1) && !bVar1)
	{
		if (Function_2(bParam0) == 1)
		{
			bVar2 = Function_396(bParam0);
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
	Function_426();
}

void Function_426() //Position: 0x1C477 / 115831
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 41)
	{
		AI_SPEECH_SET_ALLOW_CONTEXT_GLOBAL(StackVal, Function_97(Global_63315[iVar02], 0));
		iVar0++;
	}
	return;
}

void Function_427(int iParam0, bool bParam1) //Position: 0x1C4A7 / 115879
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
							Function_100(Global_34573, 0x1000000, 3, 0);
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
							Function_100(Global_34573, 0x1000000, 3, 0);
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
							Function_100(Global_34573, 0x1000000, 3, 0);
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
							Function_100(Global_34573, 0x1000000, 3, 0);
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
							Function_100(Global_34573, 0x1000000, 3, 0);
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
							Function_100(Global_34573, 0x1000000, 3, 0);
						}
					}
				}
				iVar1++;
			}
			break;
		
		case 0xFFFFFFFF:
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(2))
			{
				Function_427(24, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(3))
			{
				Function_427(40, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(4))
			{
				Function_427(41, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(5))
			{
				Function_427(44, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(6))
			{
				Function_427(24, 0);
			}
			if (!HAS_ACHIEVEMENT_BEEN_PASSED(7))
			{
				Function_427(57, 0);
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

void Function_428(bool bParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x1C79E / 116638
{
	bool bVar0;
	struct<6> Var1;
	struct<4> Var7;
	char* cVar11;
	int iVar12;
	int iVar13;
	struct<25> Var14;
	
	if (!Function_177(bParam0))
	{
		Function_332();
		return;
	}
	bVar0 = Function_2(bParam0);
	if (!bVar0 != 1)
	{
		Global_13172[bParam011].f_12++;
		if (Function_433())
		{
			PLAYSTAT_INT("HC_NONSTORY_DEED", bVar0);
		}
	}
	else
	{
		Global_6269 = Function_396(bParam0);
		Var1 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_330(Global_6269) };
		Var7 = { StackVal, StackVal, StackVal, *(&Global_3422[Global_626940] + 12) };
		if (((Global_6269 != 11 || Global_6269 != 16) || Global_6269 != 15) || Global_6269 != 43)
		{
			Var7 = { StackVal, StackVal, StackVal, Function_109(Global_6269) };
		}
		if (Function_433())
		{
			PLAYSTAT_STRING("HC_STORY_DEED", &Var7);
		}
		cVar11 = CREATE_JOURNAL_ENTRY(&Var7, 1, false, &Var1);
		Function_416();
		CLEAR_JOURNAL_ENTRY(cVar11);
		SET_JOURNAL_ENTRY_PROGRESS(cVar11, -2.0f, 0, 0);
		if (!IS_JOURNAL_ENTRY_IN_LIST(cVar11, 1))
		{
			PREPEND_JOURNAL_ENTRY(cVar11, true);
		}
	}
	if (Function_433())
	{
		Function_432();
	}
	Global_13172[bParam011].f_36 = GET_TIME_OF_DAY();
	if (StackVal == 2)
	{
		Function_331("DEED_COMPLETE", bParam0);
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
			Function_430(bParam0);
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
						switch (Function_396(bParam0))
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
			Function_17(1);
			Function_15(bParam2, iVar13);
		}
	}
	if (Global_3381 && bParam1)
	{
		*(&Var14 + 80) = 3;
		Var14.f_16 = 0;
		if (!bParam3)
		{
			Function_429(bParam0, &Var14);
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

void Function_429(int iParam0, int iParam1) //Position: 0x1C9F2 / 117234
{
	iParam1->f_28 = Global_13172[iParam011].f_20;
	iParam1->f_32 = Global_13172[iParam011].f_24;
	iParam1->f_36 = Global_13172[iParam011].f_28;
	iParam1->f_40 = Global_13172[iParam011].f_32;
	return;
}

void Function_430(bool bParam0) //Position: 0x1CA2C / 117292
{
	bool bVar0;
	bool bVar1;
	
	if (!Function_3(bParam0))
	{
		return;
	}
	switch (Function_2(bParam0))
	{
		case 0x00000001:
			bVar1 = Function_396(bParam0);
			if (bVar1 <= 1 && bVar1 >= 24)
			{
				Function_62(12, 1, 0, 0);
				Function_76(0, (bVar1 - 1));
			}
			else if (bVar1 <= 25 && bVar1 >= 41)
			{
				Function_62(13, 1, 0, 0);
				Function_76(1, (bVar1 - 25));
			}
			else if (bVar1 <= 42 && bVar1 >= 48)
			{
				Function_62(14, 1, 0, 0);
				Function_76(1, (bVar1 - 25));
			}
			else if (bVar1 <= 49 && bVar1 >= 57)
			{
				Function_62(15, 1, 0, 0);
				Function_76(1, (bVar1 - 49));
			}
			if (bVar1 <= 1 && bVar1 >= 57)
			{
				Function_62(9, 1, 0, 0);
			}
			break;
		
		case 0x00000002:
			switch (Function_396(bParam0))
			{
				case 0x00000000:
					if (Function_255(bParam0) == 1)
					{
						bVar0 = Function_431(bParam0);
						if (Function_72(bVar0))
						{
							if (bVar0 == Global_30723[5])
							{
								Function_76(4, 18);
							}
							else if (bVar0 == Global_30693[3])
							{
								Function_76(4, 10);
							}
							else if (bVar0 == Global_30723[6])
							{
								Function_76(4, 16);
							}
							else if (bVar0 == Global_30668[3])
							{
								Function_76(4, 6);
							}
							else if (bVar0 == Global_30640[13])
							{
								Function_76(4, 3);
							}
							else if (bVar0 == Global_30693[7])
							{
								Function_76(4, 11);
							}
							else if (bVar0 == Global_30640[6])
							{
								Function_76(4, 0);
							}
							else if (bVar0 == Global_30693[10])
							{
								Function_76(4, 15);
							}
							else if (bVar0 == Global_30693[8])
							{
								Function_76(4, 14);
							}
							else if (bVar0 == Global_30640[11])
							{
								Function_76(4, 2);
							}
							else if (bVar0 == Global_30668[6])
							{
								Function_76(4, 7);
							}
							else if (bVar0 == Global_30723[3])
							{
								Function_76(4, 17);
							}
							else if (bVar0 == Global_30685[5])
							{
								Function_76(4, 8);
							}
							else if (bVar0 == Global_30693[9])
							{
								Function_76(4, 13);
							}
							else if (bVar0 == Global_30693[11])
							{
								Function_76(4, 12);
							}
							else if (bVar0 == Global_30640[7])
							{
								Function_76(4, 1);
							}
							else if (bVar0 == Global_30679[3])
							{
								Function_76(4, 5);
							}
							else if (bVar0 == Global_30693[4])
							{
								Function_76(4, 9);
							}
							else if (bVar0 == Global_30658[7])
							{
								Function_76(4, 4);
							}
							else if (bVar0 == Global_30723[4])
							{
								Function_76(4, 19);
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
								Function_62(363, 1, 0, 0);
							}
							else if (bVar0 == Global_30621[1])
							{
								Function_62(364, 1, 0, 0);
							}
							else if (bVar0 == Global_30621[2])
							{
								Function_62(365, 1, 0, 0);
							}
						}
					}
					break;
			}
			break;
		
		case 0x00000003:
			if (Function_431(bParam0) == 0)
			{
				if (Function_255(bParam0) == 1)
				{
					Function_62(458, 1, 0, 0);
					bVar0 = Function_396(bParam0);
					if (Function_72(bVar0))
					{
						if (bVar0 == Global_30668[2])
						{
							Function_76(2, 10);
						}
						else if (bVar0 == Global_30658[2])
						{
							Function_76(2, 11);
						}
						else if (bVar0 == Global_30640[2])
						{
							Function_76(2, 12);
						}
						else if (bVar0 == Global_30658[0])
						{
							Function_76(2, 13);
						}
						else if (bVar0 == Global_30658[3])
						{
							Function_76(2, 14);
						}
						else if (bVar0 == Global_30685[2])
						{
							Function_76(2, 15);
						}
						else if (bVar0 == Global_30685[1])
						{
							Function_76(2, 16);
						}
						else if (bVar0 == Global_30679[1])
						{
							Function_76(2, 17);
						}
					}
				}
			}
			break;
		
		case 0x00000004:
			break;
		
		case 0x00000006:
			if (Function_255(bParam0) == 1)
			{
				Function_62(400, 1, 0, 0);
			}
			switch (Function_396(bParam0))
			{
				case 0x00000001:
					Function_62(402, 1, 0, 0);
					if (Global_29006 == Global_30668[0])
					{
						Function_76(6, 5);
					}
					else if (Global_29006 == Global_30693[0])
					{
						Function_76(6, 6);
					}
					else if (Global_29006 == Global_30717[0])
					{
						Function_76(6, 7);
					}
					break;
				
				case 0x00000002:
					Function_62(403, 1, 0, 0);
					if (Global_29006 == Global_30640[1])
					{
						Function_76(6, 8);
					}
					else if (Global_29006 == Global_30693[0])
					{
						Function_76(6, 9);
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

int Function_431(bool bParam0) //Position: 0x1CF08 / 118536
{
	if (!Function_3(bParam0))
	{
		return 4294967295;
	}
	return (SHIFT_RIGHT(Global_13172[bParam011], 4) && 255);
}

void Function_432() //Position: 0x1CF27 / 118567
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
	PLAYSTAT_INT("HC_MONEY", Function_42(0));
	PLAYSTAT_INT("HC_FAME", Function_42(3));
	PLAYSTAT_INT("HC_HONOR", Function_42(1));
	return;
}

bool Function_433() //Position: 0x1D07F / 118911
{
	if (IS_STRING_VALID(UI_GET_STRING("HAS_GET_GAME_EDITION")))
	{
		return IS_HARDCORE_ACTIVE();
	}
	return 0;
}

void Function_434() //Position: 0x1D0AA / 118954
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

void Function_435(bool bParam0, int iParam1, bool bParam2) //Position: 0x1D0D8 / 119000
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
	
	if (!Function_99(bParam0))
	{
		return;
	}
	if (!bParam2)
	{
		iVar14 = Function_342(bParam0);
		Global_34165.f_140 = (Global_34165.f_140 + (GET_CURRENT_GAME_TIME() - Global_34165.f_136));
		if (Global_13172[iParam111].f_32 != 0.0f || Global_34165.f_140 > Global_13172[iParam111].f_32)
		{
			Global_13172[iParam111].f_32 = Global_34165.f_140;
			cVar10 = { StackVal, StackVal, StackVal, Function_340(bParam0) };
			stradd(&cVar10, "_Float2", 16);
			UPDATE_PROFILE_STAT(&cVar10, Global_34165.f_140, 1);
		}
		switch (iVar14)
		{
			case 0x00000000:
				bVar0 = (Function_42(42) - Global_34165.f_116);
				bVar1 = (Function_42(27) - Global_34165.f_120);
				fVar7 = (TO_FLOAT(bVar0) / TO_FLOAT(bVar1));
				if (bVar0 >= Global_13172[iParam111].f_20)
				{
					Global_13172[iParam111].f_20 = bVar0;
					cVar10 = { StackVal, StackVal, StackVal, Function_340(bParam0) };
					stradd(&cVar10, "_Int1", 16);
					UPDATE_PROFILE_STAT(&cVar10, TO_FLOAT(bVar0), 1);
				}
			
			case 0x00000001:
				bVar2 = (CEIL(Function_39(49)) - Global_34165.f_124);
				bVar3 = (Function_42(49) - Global_34165.f_128);
				bVar8 = (TO_FLOAT(bVar3) / TO_FLOAT(bVar2));
				if (bVar8 < Global_13172[iParam111].f_28)
				{
					Global_13172[iParam111].f_28 = bVar8;
					cVar10 = { StackVal, StackVal, StackVal, Function_340(bParam0) };
					stradd(&cVar10, "_Float1", 16);
					UPDATE_PROFILE_STAT(&cVar10, bVar8, 1);
				}
				break;
			
			case 0x00000002:
				bVar4 = (Function_42(355) - Global_34165.f_116);
				bVar5 = Global_34165.f_124;
				bVar6 = Global_34165.f_128;
				bVar9 = (TO_FLOAT(bVar6) / TO_FLOAT(bVar5));
				if (bVar4 >= Global_13172[iParam111].f_20)
				{
					Global_13172[iParam111].f_20 = bVar4;
					cVar10 = { StackVal, StackVal, StackVal, Function_340(bParam0) };
					stradd(&cVar10, "_Int1", 16);
					UPDATE_PROFILE_STAT(&cVar10, TO_FLOAT(bVar4), 1);
				}
				if (bVar9 < Global_13172[iParam111].f_28)
				{
					Global_13172[iParam111].f_28 = bVar9;
					cVar10 = { StackVal, StackVal, StackVal, Function_340(bParam0) };
					stradd(&cVar10, "_Float1", 16);
					UPDATE_PROFILE_STAT(&cVar10, bVar9, 1);
				}
				bVar8 = bVar9;
				bVar0 = bVar4;
				break;
		}
		iVar15 = Function_448(bParam0, iVar14, Global_34165.f_140, bVar8, bVar0);
		if (iVar15 == 1)
		{
			Function_436(50, 1, 0);
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
			Var16 = { StackVal, StackVal, StackVal, Function_109(bParam0) };
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

void Function_436(int iParam0, bool bParam1, bool bParam2) //Position: 0x1D374 / 119668
{
	int iVar0;
	bool bVar1;
	
	if (Function_447(0) && (!Global_3380 || iParam0 == 100))
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_433())
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
	iVar0 = Function_42(3);
	Function_445();
	if ((iVar0 + bVar1) >= 10000)
	{
		bVar1 = (10000 - iVar0);
	}
	if (bParam1)
	{
		Function_443(3, bVar1);
		if (!bParam2)
		{
			if (!Function_105(Global_76848, 4))
			{
				Function_100(Global_34573, 4, 3, 0);
			}
		}
	}
	else
	{
		Function_62(3, bVar1, 0, 0);
	}
	SET_PLAYER_CURRENT_NOTORIETY(0, Function_38(3));
	iVar0 = Function_42(3);
	switch (Global_12976.f_156)
	{
		case 0x00000000:
			if (iVar0 > 1000)
			{
				Global_12976.f_156 = 1;
				Function_438(4, Function_442(Global_12976.f_156), 1);
				Function_437(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000001:
			if (iVar0 > 2000)
			{
				Global_12976.f_156 = 2;
				Function_438(4, Function_442(Global_12976.f_156), 1);
				Function_437(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000002:
			if (iVar0 > 4000)
			{
				Global_12976.f_156 = 3;
				Function_438(4, Function_442(Global_12976.f_156), 1);
				Function_437(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000003:
			if (iVar0 > 7000)
			{
				Global_12976.f_156 = 4;
				Function_438(4, Function_442(Global_12976.f_156), 1);
				Function_437(Global_12976.f_152, Global_12976.f_156);
			}
			break;
		
		case 0x00000004:
			if (iVar0 > 10000)
			{
				Global_12976.f_156 = 5;
				Function_438(4, Function_442(Global_12976.f_156), 1);
				Function_437(Global_12976.f_152, Global_12976.f_156);
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

void Function_437(int iParam0, int iParam1) //Position: 0x1D543 / 120131
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

int Function_438(int iParam0, char* cParam1, bool bParam2) //Position: 0x1D7A1 / 120737
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
	Function_343(iParam0, cParam1, 0, 1);
	iVar1 = Function_439();
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

int Function_439() //Position: 0x1D926 / 121126
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
	Function_440();
	return 0;
}

void Function_440() //Position: 0x1D9C5 / 121285
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
		Function_441(iVar1);
		iVar0 = iVar1;
		iVar1 = (iVar1 - 1);
	}
	return;
}

void Function_441(int iParam0) //Position: 0x1DA74 / 121460
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

var Function_442(int iParam0) //Position: 0x1DAD2 / 121554
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

int Function_443(int iParam0, bool bParam1) //Position: 0x1DB61 / 121697
{
	bool bVar0;
	int iVar1;
	
	Function_62(iParam0, bParam1, 0, 0);
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
	iVar1 = Function_444(iParam0, 4294967295);
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
	iVar1 = Function_439();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME+INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 1;
	return 1;
}

var Function_444(int iParam0, int iParam1) //Position: 0x1DCFE / 122110
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

void Function_445() //Position: 0x1DD3F / 122175
{
	Function_446(3, 0.0f);
	Function_423(3, 10000.0f);
	return;
}

int Function_446(int iParam0, int iParam1) //Position: 0x1DD55 / 122197
{
	if (iParam0 == 4294967295)
	{
		LOG_ERROR("STAT_SET_MIN_VALUE: STAT_INVALID");
		return 0;
	}
	Global_35278[iParam020].f_60 = iParam1;
	return 1;
}

var Function_447(int iParam0) //Position: 0x1DD95 / 122261
{
	return (*&Global_12976 + 104)[iParam0];
}

int Function_448(bool bParam0, int iParam1, float fParam2, bool bParam3, bool bParam4) //Position: 0x1DDA4 / 122276
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

var Function_449() //Position: 0x1DF6C / 122732
{
	struct<73> Var0;
	
	*(&Var0 + 80) = 3;
	RETRIEVE_GAME_STATE(&Var0, 44, 1);
	if (Var0.f_72)
	{
	}
	return Var0.f_72;
}

void Function_450(int iParam0) //Position: 0x1DF91 / 122769
{
	if (!Function_99(iParam0))
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
			Function_436(25, 1, 0);
			break;
		
		case 0x0000000B:
			Function_436(25, 1, 0);
			Function_454(1, 1);
			break;
		
		case 0x00000015:
			Function_454(50, 1);
			Function_436(250, 1, 0);
			Function_451(200, 1, 0);
			break;
		
		case 0x0000000A:
			Function_436(75, 1, 0);
			Function_451(100, 1, 0);
			break;
		
		case 0x00000017:
			Function_436(150, 1, 0);
			break;
		
		case 0x00000018:
			Function_454(50, 1);
			Function_436(150, 1, 0);
			break;
		
		case 0x00000007:
			Function_454(5, 1);
			Function_451(100, 1, 0);
			break;
		
		case 0x00000016:
			Function_436(75, 1, 0);
			Function_451(150, 1, 0);
			break;
		
		case 0x00000011:
			Function_454(5, 1);
			Function_436(200, 1, 0);
			break;
		
		case 0x00000001:
			Function_436(150, 1, 0);
			break;
		
		case 0x00000006:
			Function_451(150, 1, 0);
			break;
		
		case 0x00000010:
			Function_454(25, 1);
			Function_436(75, 1, 0);
			break;
		
		case 0x0000000D:
			Function_454(10, 1);
			Function_436(75, 1, 0);
			break;
		
		case 0x00000012:
			Function_436(50, 1, 0);
			Function_451(100, 1, 0);
			break;
		
		case 0x00000014:
			Function_436(150, 1, 0);
			break;
		
		case 0x00000003:
			Function_436(20, 1, 0);
			break;
		
		case 0x00000004:
			Function_451(50, 1, 0);
			break;
		
		case 0x00000008:
			Function_454(20, 1);
			Function_436(75, 1, 0);
			Function_451(100, 1, 0);
			break;
		
		case 0x00000009:
			Function_454(25, 1);
			Function_436(150, 1, 0);
			Function_451(100, 1, 0);
			break;
		
		case 0x0000000E:
			Function_454(10, 1);
			Function_436(150, 1, 0);
			Function_451(100, 1, 0);
			break;
		
		case 0x00000013:
			Function_436(250, 1, 0);
			break;
		
		case 0x00000002:
			Function_451(50, 1, 0);
			break;
		
		case 0x00000005:
			Function_451(100, 1, 0);
			Function_454(5, 1);
			break;
		
		case 0x0000000F:
			Function_454(3, 1);
			Function_436(200, 1, 0);
			break;
		
		case 0x00000025:
			Function_451(125, 1, 0);
			Function_436(150, 1, 0);
			break;
		
		case 0x0000001F:
			Function_454(50, 1);
			Function_436(100, 1, 0);
			Function_451(125, 1, 0);
			break;
		
		case 0x0000001A:
			Function_454(50, 1);
			Function_436(250, 1, 0);
			break;
		
		case 0x0000001D:
			Function_454(75, 1);
			Function_436(200, 1, 0);
			break;
		
		case 0x00000021:
			Function_436(150, 1, 0);
			break;
		
		case 0x00000022:
			Function_436(75, 1, 0);
			Function_451(100, 1, 0);
			break;
		
		case 0x00000024:
			Function_436(250, 1, 0);
			Function_451(50, 1, 0);
			break;
		
		case 0x00000020:
			Function_436(75, 1, 0);
			Function_451(50, 1, 0);
			break;
		
		case 0x00000023:
			Function_436(200, 1, 0);
			Function_451(50, 1, 0);
			break;
		
		case 0x0000001E:
			Function_436(75, 1, 0);
			Function_451(100, 1, 0);
			break;
		
		case 0x00000019:
			Function_436(150, 1, 0);
			break;
		
		case 0x0000001B:
			Function_454(50, 1);
			Function_436(250, 1, 0);
			break;
		
		case 0x0000001C:
			Function_454(100, 1);
			Function_436(300, 1, 0);
			break;
		
		case 0x00000026:
			Function_436(200, 1, 0);
			Function_451(125, 1, 0);
			break;
		
		case 0x00000027:
			Function_436(300, 1, 0);
			Function_451(125, 1, 0);
			break;
		
		case 0x00000028:
			Function_436(300, 1, 0);
			Function_451(125, 1, 0);
			break;
		
		case 0x00000029:
			Function_436(300, 1, 0);
			Function_451(125, 1, 0);
			break;
		
		case 0x00000030:
			Function_436(500, 1, 0);
			Function_451(250, 1, 0);
			break;
		
		case 0x0000002B:
			Function_436(150, 1, 0);
			Function_451(125, 1, 0);
			break;
		
		case 0x0000002E:
			Function_451(25, 1, 0);
			Function_454(100, 1);
			break;
		
		case 0x0000002A:
			Function_436(150, 1, 0);
			Function_451(25, 1, 0);
			break;
		
		case 0x0000002D:
			Function_451(25, 1, 0);
			break;
		
		case 0x0000002C:
			Function_451(25, 1, 0);
			break;
		
		case 0x0000002F:
			break;
		
		case 0x00000037:
			break;
		
		case 0x00000034:
			Function_451(150, 1, 0);
			break;
		
		case 0x00000031:
			Function_451(150, 1, 0);
			Function_454(100, 1);
			break;
		
		case 0x00000035:
			Function_451(150, 1, 0);
			break;
		
		case 0x00000036:
			Function_451(150, 1, 0);
			break;
		
		case 0x00000038:
			Function_451(150, 1, 0);
			Function_454(100, 1);
			break;
		
		case 0x00000032:
			Function_451(150, 1, 0);
			break;
		
		case 0x00000033:
			Function_451(150, 1, 0);
			break;
		
		case 0x00000039:
			break;
		
		default:
			break;
	}
	return;
}

void Function_451(int iParam0, bool bParam1, bool bParam2) //Position: 0x1E44C / 123980
{
	int iVar0;
	bool bVar1;
	
	if (Function_447(0) && !Global_3380)
	{
		return;
	}
	bVar1 = iParam0;
	if (Function_433())
	{
		bVar1 = (bVar1 / 2);
	}
	if (Global_3380)
	{
		Global_12976.f_160 = (Global_12976.f_160 + iParam0);
		return;
	}
	iVar0 = Function_42(1);
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
			Function_443(1, bVar1);
			if (!bParam2)
			{
				if (!Function_105(Global_76848, 1))
				{
					Function_100(Global_34573, 1, 3, 0);
				}
			}
		}
		else
		{
			Function_453(1, (4294967295 * bVar1));
			if (!Global_3380)
			{
				if (!Function_105(Global_76848, 2))
				{
					Function_100(Global_34573, 2, 3, 0);
				}
			}
		}
	}
	else if (bVar1 >= 0)
	{
		Function_62(1, bVar1, 0, 0);
	}
	else
	{
		Function_90(1, (4294967295 * bVar1), 0);
	}
	if (Function_42(1) <= 4294962296)
	{
		Function_27(1, 4294962296, 0);
	}
	else if (Function_42(1) >= 5000)
	{
		Function_27(1, 5000, 0);
	}
	SET_PLAYER_CURRENT_HONOR(0, Function_38(1));
	iVar0 = Function_42(1);
	switch (Global_12976.f_152)
	{
		case 0x00000000:
			if (iVar0 >= 4294962796)
			{
				Global_12976.f_152 = 1;
				Function_438(2, Function_452(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000001:
			if (iVar0 < 4294962796)
			{
				Global_12976.f_152 = 0;
				Function_438(2, Function_452(Global_12976.f_152), 0);
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
				Function_438(2, Function_452(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000002:
			if (iVar0 < 4294964796)
			{
				Global_12976.f_152 = 1;
				Function_438(2, Function_452(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4294966296)
			{
				Global_12976.f_152 = 3;
				Function_438(2, Function_452(Global_12976.f_152), 1);
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
				Function_438(2, Function_452(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 1000)
			{
				Global_12976.f_152 = 4;
				Function_438(2, Function_452(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000004:
			if (iVar0 < 1000)
			{
				Global_12976.f_152 = 3;
				Function_438(2, Function_452(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 2500)
			{
				Global_12976.f_152 = 5;
				Function_438(2, Function_452(Global_12976.f_152), 1);
			}
			break;
		
		case 0x00000005:
			if (iVar0 < 2500)
			{
				Global_12976.f_152 = 4;
				Function_438(2, Function_452(Global_12976.f_152), 0);
			}
			else if (iVar0 >= 4500)
			{
				Global_12976.f_152 = 6;
				Function_438(2, Function_452(Global_12976.f_152), 1);
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
				Function_438(2, Function_452(Global_12976.f_152), 0);
			}
			break;
	}
	Function_437(Global_12976.f_152, Global_12976.f_156);
	return;
}

var Function_452(int iParam0) //Position: 0x1E76D / 124781
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

int Function_453(int iParam0, bool bParam1) //Position: 0x1E810 / 124944
{
	bool bVar0;
	int iVar1;
	
	Function_90(iParam0, bParam1, 0);
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
	iVar1 = Function_444(iParam0, 4294967295);
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
	iVar1 = Function_439();
	Global_49199[iVar1] = TO_FLOAT(bParam1);
	strcpy(&Global_49205[iVar120] + 8, "QME-INT", 8);
	strcpy(&(Global_49205[iVar120]), INT_TO_STRING(bVar0), 8);
	Global_49205[iVar120].f_48 = 26;
	Global_49205[iVar120].f_68 = iParam0;
	Global_49205[iVar120].f_72 = 3;
	return 1;
}

int Function_454(bool bParam0, bool bParam1) //Position: 0x1E9AC / 125356
{
	bool bVar0;
	
	bVar0 = Function_42(0);
	if ((Function_42(0) + bParam0) >= 999999)
	{
		bParam0 = (999999 - bVar0);
	}
	if (bParam0 >= 0)
	{
		Function_62(0, bParam0, 0, 0);
	}
	else
	{
		return 0;
	}
	UI_SET_MONEY("nMoneyText", "Dmoney_amount", Function_42(0));
	if (bParam1)
	{
		PRINT_MONEY(&(Global_35278[020]), bVar0, bParam0, 7.5f, 0f, "HUD_MENU_MESSAGE_BOX_ALERT_MASTER");
	}
	if (!Global_3384)
	{
		Function_62(597, bParam0, 0, 0);
	}
	if ((Function_42(597) + Function_42(450)) >= 10000)
	{
		if (!HAS_ACHIEVEMENT_BEEN_PASSED(24))
		{
			AWARD_ACHIEVEMENT(24);
		}
	}
	return 1;
}

void Function_455(bool bParam0) //Position: 0x1EA77 / 125559
{
	bool bVar0;
	
	if (Function_113(bParam0, 1) && Function_113(Global_26119, 1))
	{
	}
	bVar0 = (Global_26119 && bParam0);
	Global_26119 = (Global_26119 - bVar0);
	Global_26119 |= 1073741824;
	return;
}

void Function_456(bool bParam0) //Position: 0x1EAAB / 125611
{
	Global_12976.f_20 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976 + 20, 0, false, bParam0, 0);
	return;
}

void Function_457(var uParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4, int iParam5, int iParam6, int iParam7, bool bParam8, vector3 vParam9, bool bParam12, vector3 vParam13) //Position: 0x1EAC6 / 125638
{
	struct<6> Var0;
	char* cVar6;
	int iVar7;
	int iVar8;
	
	if (Function_16())
	{
		return;
	}
	if (!IS_VOLUME_VALID(bParam12))
	{
		return;
	}
	(*uParam0)[bParam140] = bParam2;
	uParam0[bParam140]->f_4 = Function_8(bParam2, bParam1, 1);
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
	if (!Function_58())
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
	if (Function_97(bParam1, 0))
	{
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_330(bParam1) };
		cVar6 = CREATE_JOURNAL_ENTRY(uParam0[bParam140] + 12, 1, false, &Var0);
		CLEAR_JOURNAL_ENTRY(cVar6);
		PREPEND_JOURNAL_ENTRY(cVar6, true);
		SET_JOURNAL_ENTRY_PROGRESS(cVar6, -1.0f, 0, 0);
		SET_JOURNAL_ENTRY_UPDATED(cVar6, 0);
		if (Function_97(bParam1, 1))
		{
			iVar7 = Function_342(bParam1);
			iVar8 = Function_448(StackVal, StackVal, StackVal, bParam1, Global_13172[Global_13172[Global_13172[iVar711].f_3211].f_2811].f_20);
			SET_JOURNAL_ENTRY_TROPHY(cVar6, iVar8);
			Function_458(bParam1);
		}
	}
}

void Function_458(bool bParam0) //Position: 0x1ECA2 / 126114
{
	char* cVar0[16];
	int iVar4;
	int iVar5;
	
	if (!Function_99(bParam0))
	{
		return;
	}
	iVar4 = StackVal;
	iVar5 = Function_342(bParam0);
	cVar0 = { StackVal, StackVal, StackVal, Function_340(bParam0) };
	stradd(&cVar0, "_Float2", 16);
	UPDATE_PROFILE_STAT(&cVar0, Global_13172[iVar411].f_32, 1);
	switch (iVar5)
	{
		case 0x00000000:
			cVar0 = { StackVal, StackVal, StackVal, Function_340(bParam0) };
			stradd(&cVar0, "_Int1", 16);
			UPDATE_PROFILE_STAT(&cVar0, TO_FLOAT(Global_13172[iVar411].f_20), 1);
		
		case 0x00000001:
			cVar0 = { StackVal, StackVal, StackVal, Function_340(bParam0) };
			stradd(&cVar0, "_Float1", 16);
			UPDATE_PROFILE_STAT(&cVar0, Global_13172[iVar411].f_28, 1);
			break;
		
		case 0x00000002:
			cVar0 = { StackVal, StackVal, StackVal, Function_340(bParam0) };
			stradd(&cVar0, "_Int1", 16);
			UPDATE_PROFILE_STAT(&cVar0, TO_FLOAT(Global_13172[iVar411].f_20), 1);
			cVar0 = { StackVal, StackVal, StackVal, Function_340(bParam0) };
			stradd(&cVar0, "_Float1", 16);
			UPDATE_PROFILE_STAT(&cVar0, Global_13172[iVar411].f_28, 1);
			break;
	}
	return;
}

void Function_459(var uParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, vector3 vParam6) //Position: 0x1EDA3 / 126371
{
	struct<6> Var0;
	char* cVar6;
	int iVar7;
	int iVar8;
	
	if (Function_16())
	{
		return;
	}
	(*uParam0)[bParam140] = bParam2;
	uParam0[bParam140]->f_4 = Function_8(bParam2, bParam1, 1);
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
	if (!Function_58())
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
	if (Function_97(bParam1, 0))
	{
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_330(bParam1) };
		cVar6 = CREATE_JOURNAL_ENTRY(uParam0[bParam140] + 12, 1, false, &Var0);
		CLEAR_JOURNAL_ENTRY(cVar6);
		PREPEND_JOURNAL_ENTRY(cVar6, true);
		SET_JOURNAL_ENTRY_PROGRESS(cVar6, -1.0f, 0, 0);
		SET_JOURNAL_ENTRY_UPDATED(cVar6, 0);
		if (Function_97(bParam1, 1))
		{
			iVar7 = Function_342(bParam1);
			iVar8 = Function_448(StackVal, StackVal, StackVal, bParam1, Global_13172[Global_13172[Global_13172[iVar711].f_3211].f_2811].f_20);
			SET_JOURNAL_ENTRY_TROPHY(cVar6, iVar8);
			Function_458(bParam1);
		}
	}
}

void Function_460(int iParam0) //Position: 0x1EF40 / 126784
{
	strcpy(iParam0 + 12, "VOL RESTRICT", 16);
	*iParam0 = 126872;
	iParam0->f_4 = 126860;
	iParam0->f_8 = 126839;
	iParam0->f_28 = 1;
	return;
}

void Function_461() //Position: 0x1EF77 / 126839
{
	if (IS_LAYOUTREF_VALID(Global_26150))
	{
		DESTROY_LAYOUT(Global_26150);
	}
	return;
}

int Function_462() //Position: 0x1EF8C / 126860
{
	Function_221(4294967295);
	return 0;
}

void Function_463() //Position: 0x1EF98 / 126872
{
	if (!IS_LAYOUTREF_VALID(Global_26150))
	{
		Global_26150 = CREATE_LAYOUT("AmbientVol");
	}
	return;
}

void Function_464(int iParam0) //Position: 0x1EFBB / 126907
{
	strcpy(iParam0 + 12, "BEAT LAUNCHER", 16);
	*iParam0 = 128055;
	iParam0->f_4 = 126984;
	iParam0->f_8 = 126963;
	iParam0->f_28 = 1;
	return;
}

void Function_465() //Position: 0x1EFF3 / 126963
{
	Function_466();
	return;
}

void Function_466() //Position: 0x1EFFC / 126972
{
	DESTROY_OBJECTSET(Global_25964);
	return;
}

int Function_467() //Position: 0x1F008 / 126984
{
	if (Function_4(4))
	{
		Function_469(&Global_25267);
		if (Function_16())
		{
			if (NET_IS_IN_SESSION())
			{
				Function_468(&Global_25267);
			}
		}
	}
	return 0;
}

void Function_468(int iParam0) //Position: 0x1F02E / 127022
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

void Function_469(int iParam0) //Position: 0x1F085 / 127109
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= *iParam0)
	{
		if (IS_SCRIPT_VALID(iParam0[iVar058]->f_44))
		{
		}
		else if (Function_474(iParam0[iVar058], 1))
		{
			if (!Global_3391)
			{
				if (Function_472(iParam0[iVar058]))
				{
					Function_471(iParam0[iVar058], 1);
					Function_470(iParam0[iVar058], 2);
				}
			}
		}
		else if (Function_474(iParam0[iVar058], 2))
		{
			if (iParam0[iVar058]->f_88 + 2.0f) < GET_CURRENT_GAME_TIME()
			{
			}
			Function_471(iParam0[iVar058], 2);
			Function_470(iParam0[iVar058], 4);
			Function_402(iParam0[iVar058]);
		}
		else if (Function_474(iParam0[iVar058], 4))
		{
		}
		iVar0++;
	}
	return;
}

void Function_470(var uParam0, int iParam1) //Position: 0x1F135 / 127285
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

void Function_471(var uParam0, int iParam1) //Position: 0x1F146 / 127302
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_472(int iParam0) //Position: 0x1F160 / 127328
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
	Function_473(iParam0 + 92, &Var0 + 64);
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

void Function_473(int iParam0, int iParam1) //Position: 0x1F2AE / 127662
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

bool Function_474(int iParam0, int iParam1) //Position: 0x1F41A / 128026
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_475() //Position: 0x1F437 / 128055
{
	struct<35> Var0;
	
	Function_486(&Global_25267);
	if (Function_485() == 1)
	{
		if (!Function_484())
		{
			*(&Var0 + 20) = 1;
			Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var0 };
			if (!Function_58())
			{
				Function_51();
				Function_51();
				if (Function_483(StackVal, StackVal, StackVal, StackVal, 128, 1, GET_ASSET_ID("$/content/Ambient/PointOfInterest/event_bountyhunter", 4), Function_51(), Function_51(), 0, 0, 0, Global_26303.f_24, 0, 0, 0, &Var0, 1, 1, 0x40a00000, 4294967295, 0, 0))
				{
				}
				else
				{
					LOG_ERROR("Problem initializing bounty hunter beat");
				}
			}
			else
			{
				Function_51();
				Function_51();
				if (Function_483(StackVal, StackVal, StackVal, StackVal, 128, 1, GET_ASSET_ID("$/content/DLC/ZombiePack/MissingPersons/event_bountyhunter_z.sc", 4), Function_51(), Function_51(), 0, 0, 0, Global_26303.f_24, 0, 0, 0, &Var0, 1, 1, 0x40a00000, 4294967295, 0, 0))
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
			Function_480(0);
			Function_337();
			Function_476(0, 0, 0);
			Function_476(1, 0, 0);
		}
	}
	return;
}

void Function_476(int iParam0, bool bParam1, bool bParam2) //Position: 0x1F5B4 / 128436
{
	if ((*&Global_26401 + 16)[iParam0] >= 0)
	{
		Function_479(iParam0, (*&Global_26401 + 16)[iParam0]);
		(*&Global_26401 + 16)[iParam0] = 0;
		if (bParam2)
		{
			Function_477(iParam0, 0, 0, Function_326(30), 0);
		}
		if (bParam1)
		{
			if (IS_ACTOR_ALIVE(Global_34573))
			{
				Function_108("community_fail", 0x41200000, 1, 0, 2, 1, 0);
			}
		}
	}
	return;
}

void Function_477(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4) //Position: 0x1F61D / 128541
{
	int iVar0;
	
	iVar0 = GET_TIME_OF_DAY();
	ADD_TIME(&iVar0, iParam1, bParam2, bParam3, iParam4);
	if (IS_EARLIER_THAN((*&Global_26316 + 88)[iParam0], iVar0) || Function_478((*&Global_26316 + 88)[iParam0]))
	{
		(*&Global_26316 + 88)[iParam0] = iVar0;
	}
}

var Function_478(bool bParam0) //Position: 0x1F663 / 128611
{
	return (((GET_DAY(bParam0) != 0 && GET_HOUR(bParam0) != 0) && GET_MINUTE(bParam0) != 0) && GET_SECOND(bParam0) != 1);
}

void Function_479(int iParam0, bool bParam1) //Position: 0x1F688 / 128648
{
	if (!Function_339(iParam0))
	{
		return;
	}
	if (!bParam1 < 0)
	{
	}
	Global_26401[iParam0] = (Global_26401[iParam0] + bParam1);
	Function_62((*&Global_26401 + 2220)[iParam0], bParam1, 0, 0);
	Function_62(222, bParam1, 0, 0);
	return;
}

void Function_480(int iParam0) //Position: 0x1F6CD / 128717
{
	Function_482(0);
	Function_481();
	Global_26303.f_12 = 4294967295;
	Global_26303.f_16 = 0;
	Global_26303.f_20 = 4294967295;
	Global_26303.f_24 = 4294967295;
	Global_26303.f_32 = 0;
	Global_26303.f_36 = 0;
	Global_26303.f_40 = 0;
	if (iParam0 == 1)
	{
		Function_7(&Global_26303 + 8, 4096);
	}
	return;
}

void Function_481() //Position: 0x1F715 / 128789
{
	Function_7(&Global_26303 + 8, 2);
	Function_7(&Global_26303 + 8, 4);
	Function_7(&Global_26303 + 8, 8);
	Function_7(&Global_26303 + 8, 16);
	Function_7(&Global_26303 + 8, 32);
	Function_7(&Global_26303 + 8, 64);
	Function_7(&Global_26303 + 8, 128);
	Function_7(&Global_26303 + 8, 256);
	Function_7(&Global_26303 + 8, 512);
	Function_7(&Global_26303 + 8, 1024);
	Function_7(&Global_26303 + 8, 2048);
	Function_7(&Global_26303 + 8, 131072);
	Function_7(&Global_26303 + 8, 262144);
	Function_7(&Global_26303 + 8, 524288);
	return;
}

void Function_482(bool bParam0) //Position: 0x1F7AF / 128943
{
	if (bParam0 == 1)
	{
		Function_112(&Global_26303 + 8, 1);
	}
	else
	{
		Function_7(&Global_26303 + 8, 1);
	}
	return;
}

bool Function_483(int iParam0, int iParam1, var uParam2, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11, var uParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22) //Position: 0x1F7D0 / 128976
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
			if (Function_474(&(Global_25267[iVar058]), 4))
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
					Function_473(iParam16, &Global_25267[iVar058] + 92);
					Global_25267[iVar058].f_92 = iParam1;
					Function_470(&(Global_25267[iVar058]), 1);
					Function_471(&(Global_25267[iVar058]), 4);
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool Function_484() //Position: 0x1F912 / 129298
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

int Function_485() //Position: 0x1F940 / 129344
{
	return Function_113(StackVal, 1);
}

void Function_486(int iParam0) //Position: 0x1F94F / 129359
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
	Function_402(iParam0[058]);
	Function_402(iParam0[158]);
	Function_402(iParam0[258]);
	Function_402(iParam0[358]);
	Function_402(iParam0[458]);
	Function_402(iParam0[558]);
	Function_402(iParam0[658]);
	Function_402(iParam0[758]);
	Function_402(iParam0[858]);
	Function_402(iParam0[958]);
	Function_402(iParam0[1058]);
	Function_402(iParam0[1158]);
	Function_470(iParam0[058], 4);
	Function_470(iParam0[158], 4);
	Function_470(iParam0[258], 4);
	Function_470(iParam0[358], 4);
	Function_470(iParam0[458], 4);
	Function_470(iParam0[558], 4);
	Function_470(iParam0[658], 4);
	Function_470(iParam0[758], 4);
	Function_470(iParam0[858], 4);
	Function_470(iParam0[958], 4);
	Function_470(iParam0[1058], 4);
	Function_470(iParam0[1158], 4);
	if (!IS_LAYOUTREF_VALID(Global_6288))
	{
		Global_6288 = CREATE_LAYOUT("RegionChar");
	}
	Global_79335 = 0;
	Global_79334 = 0.0f;
	Global_25964 = CREATE_OBJECTSET_IN_LAYOUT("DisallowedVols", Global_6288, 9, 1);
	return;
}

void Function_487(int iParam0) //Position: 0x1FAC6 / 129734
{
	strcpy(iParam0 + 12, "BEAT MANAGER", 16);
	*iParam0 = 131083;
	iParam0->f_4 = 129795;
	iParam0->f_8 = 129789;
	iParam0->f_28 = 1;
	return;
}

void Function_488() //Position: 0x1FAFD / 129789
{
	return;
}

int Function_489() //Position: 0x1FB03 / 129795
{
	if (Function_4(1024))
	{
		Function_490();
	}
	return 0;
}

void Function_490() //Position: 0x1FB16 / 129814
{
	int iVar0;
	
	if (bLocal_510)
	{
		if (Global_25264 <= 1)
		{
			return;
		}
		if (Function_498(&iVar0))
		{
		}
		else
		{
			iVar0 = Function_497(&Global_25059, Global_25264);
		}
		if (Global_26147 == 1)
		{
			iVar0 = Global_26148;
		}
		if (Function_491(iVar0, 0))
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

bool Function_491(int iParam0, bool bParam1) //Position: 0x1FBA8 / 129960
{
	struct<49> Var0;
	int iVar51;
	
	if (!Function_496(iParam0))
	{
		return 0;
	}
	if (!bParam1)
	{
		if (!Function_495(Global_17483[iParam075].f_84))
		{
			return 0;
		}
		if (!Function_494(Global_17483[iParam075].f_96))
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
	if (!Function_483(StackVal, StackVal, StackVal, StackVal, StackVal, iVar51, Global_17483[iParam075].f_120, Global_17483[iParam075].f_96, *(&Var0 + 8), *(&Var0 + 20), Global_17483[iParam075].f_80, 0, Global_17483[iParam075].f_92, (*&Global_17483[iParam075] + 32)[0], (*&Global_17483[iParam075] + 32)[1], (*&Global_17483[iParam075] + 32)[2], &Global_17483[iParam075] + 120, Var0.f_48, Global_17483[iParam075].f_288, Global_17483[iParam075].f_72, iParam0, Global_17483[iParam075].f_76, Global_17483[iParam075].f_292))
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
		Function_493(0);
	}
	if (Global_17483[iParam075].f_280)
	{
		Function_492(iParam0);
	}
	return 1;
}

void Function_492(int iParam0) //Position: 0x1FD40 / 130368
{
	if (!Function_496(iParam0))
	{
		return;
	}
	Global_17483[iParam075].f_120 = 0;
	Global_25263 = (Global_25263 - 1);
	return;
}

void Function_493(int iParam0) //Position: 0x1FD62 / 130402
{
	Global_12976 = GET_TIME_OF_DAY();
	ADD_TIME(&Global_12976, 0, false, (iParam0 + Function_326(90)), 0);
	return;
}

bool Function_494(int iParam0) //Position: 0x1FD7F / 130431
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

bool Function_495(int iParam0) //Position: 0x1FDAA / 130474
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < (Global_25267 - 1))
	{
		if (Global_25267[iVar058] != iParam0 || iParam0 != 4096)
		{
			if (Function_474(&(Global_25267[iVar058]), 4) && !IS_SCRIPT_VALID(Global_25267[iVar058].f_44))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool Function_496(int iParam0) //Position: 0x1FDF9 / 130553
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	return 1;
}

var Function_497(var uParam0, bool bParam1) //Position: 0x1FE0F / 130575
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

bool Function_498(int iParam0) //Position: 0x1FE7C / 130684
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= Global_25264)
	{
		if (Function_113(StackVal, 2))
		{
			if (Global_17483[Global_25059[iVar0]75].f_88 != 0)
			{
				if (!Function_321(Global_17483[Global_25059[iVar0]75].f_88) != 3)
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
				if (Function_375(7) && !Function_373(7, 16))
				{
					*iParam0 = Global_25059[iVar0];
					return 1;
				}
			}
			if (Global_29005 == Global_30628[2])
			{
				if (Function_375(5) && !Function_373(5, 16))
				{
					*iParam0 = Global_25059[iVar0];
					return 1;
				}
			}
			if (Global_29005 == Global_30628[0])
			{
				if (Function_375(4) && !Function_373(4, 16))
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
				if (Function_375(7) && !Function_373(7, 16))
				{
					*iParam0 = Global_25059[iVar0];
					return 1;
				}
			}
			if (Global_29005 == Global_30628[2])
			{
				if (Function_375(5) && !Function_373(5, 16))
				{
					*iParam0 = Global_25059[iVar0];
					return 1;
				}
			}
			if (Global_29005 == Global_30628[0])
			{
				if (Function_375(4) && !Function_373(4, 16))
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

void Function_499() //Position: 0x2000B / 131083
{
	Function_513();
	Function_501();
	Function_500();
	return;
}

void Function_500() //Position: 0x2001A / 131098
{
	return;
}

void Function_501() //Position: 0x20020 / 131104
{
	Global_25263 = 0;
	Function_511(56, 2, 60, 0, 70, 2, 96, 0, 4, "$/content/DLC/ZombiePack/Beats/beat_zombie_chase", 63, 2, 190.0f, 1, 55, 0);
	Function_510(&Global_17483[5675] + 120, 2, 4.0f, 1, 640);
	Function_509(&Global_17483[5675] + 120, 19.9f, 0.6f);
	Function_508(&Global_17483[5675] + 120, 8.0f);
	Function_507(&Global_17483[5675] + 120, 0.0f, 4);
	Function_506(&Global_17483[5675] + 120);
	Function_511(70, 2, 100, 4294967271, 100, 2, 32, 0, 4, "$/content/DLC/ZombiePack/Beats/beat_sharpshooter", 63, 2, 190.0f, 1, 55, 0);
	Function_510(&Global_17483[7075] + 120, 0, 8.0f, 1, 752);
	Function_508(&Global_17483[7075] + 120, 4.0f);
	Function_509(&Global_17483[7075] + 120, 19.9f, 0.6f);
	Function_507(&Global_17483[7075] + 120, -8.0f, 4);
	Function_506(&Global_17483[7075] + 120);
	Function_511(65, 2, 100, 4294967271, 100, 2, 96, 0, 4, "$/content/DLC/ZombiePack/Beats/beat_lone_zombie", 63, 2, 190.0f, 1, 55, 0);
	Function_510(&Global_17483[6575] + 120, 3, 4.0f, 1, 752);
	Function_509(&Global_17483[6575] + 120, 19.9f, 0.6f);
	Function_508(&Global_17483[6575] + 120, 4.0f);
	Function_507(&Global_17483[6575] + 120, -1.0f, 2);
	Function_511(54, 2, 25, 4294967146, 100, 1, 8, 0, 4, "$/content/DLC/ZombiePack/Beats/beat_burning_bodies", 63, 2, 180.0f, 1, 30, 0);
	Function_510(&Global_17483[5475] + 120, 1, 4.0f, 64, 752);
	Function_505(&Global_17483[5475] + 120, 40.0f);
	Function_508(&Global_17483[5475] + 120, 4.0f);
	Function_509(&Global_17483[5475] + 120, 8.9f, 0.3f);
	Function_507(&Global_17483[5475] + 120, 0.0f, 2);
	Function_511(57, 2, 25, 4294967146, 100, 1, 8, 0, 4, "$/content/DLC/ZombiePack/Beats/beat_dead_pile_a", 63, 2, 180.0f, 1, 55, 0);
	Function_510(&Global_17483[5775] + 120, 1, 4.0f, 64, 752);
	Function_505(&Global_17483[5775] + 120, 20.0f);
	Function_508(&Global_17483[5775] + 120, 4.0f);
	Function_509(&Global_17483[5775] + 120, 5.9f, 0.3f);
	Function_507(&Global_17483[5775] + 120, -1.0f, 2);
	Function_511(58, 2, 25, 4294967146, 100, 1, 8, 0, 4, "$/content/DLC/ZombiePack/Beats/beat_dead_pile_b", 63, 2, 180.0f, 1, 30, 0);
	Function_510(&Global_17483[5875] + 120, 1, 4.0f, 64, 752);
	Function_505(&Global_17483[5875] + 120, 20.0f);
	Function_508(&Global_17483[5875] + 120, 5.0f);
	Function_509(&Global_17483[5875] + 120, 8.9f, 0.3f);
	Function_507(&Global_17483[5875] + 120, -1.0f, 4);
	Function_511(64, 2, 100, 4294967271, 100, 2, 96, 0, 4, "$/content/DLC/ZombiePack/Beats/beat_lone_stranded", 63, 2, 190.0f, 1, 50, 0);
	Function_510(&Global_17483[6475] + 120, 3, 4.0f, 1, 752);
	Function_509(&Global_17483[6475] + 120, 19.9f, 0.6f);
	Function_508(&Global_17483[6475] + 120, 4.0f);
	Function_507(&Global_17483[6475] + 120, -1.0f, 2);
	Function_511(68, 2, 100, 4294967271, 100, 2, 32, 0, 4, "$/content/DLC/ZombiePack/Beats/beat_overrun", 63, 2, 190.0f, 1, 38, 0);
	Function_510(&Global_17483[6875] + 120, 3, 9.0f, 1, 752);
	Function_509(&Global_17483[6875] + 120, 19.9f, 0.5f);
	Function_508(&Global_17483[6875] + 120, 8.0f);
	Function_507(&Global_17483[6875] + 120, -4.0f, 4);
	Function_511(72, 2, 25, 4294967146, 100, 1, 8, 0, 4, "$/content/DLC/ZombiePack/Beats/beat_survivor_fight", 63, 2, 180.0f, 1, 55, 0);
	Function_510(&Global_17483[7275] + 120, 0, 4.0f, 1, 752);
	Function_508(&Global_17483[7275] + 120, 8.0f);
	Function_504(&Global_17483[7275] + 120, 8.9f, 4.0f);
	Function_503(&Global_17483[7275] + 120, 0.5f, 8.0f);
	Function_507(&Global_17483[7275] + 120, -4.0f, 4);
	Function_511(73, 2, 100, 50, 50, 1, 32832, 1, 4, "$/content/DLC/ZombiePack/Beats/beat_trapped_survivor", 63, 2, 55.0f, 1, 55, 0);
	Function_510(&Global_17483[7375] + 120, 1, 5.0f, 1, 640);
	Function_508(&Global_17483[7375] + 120, 4.0f);
	Function_509(&Global_17483[7375] + 120, 19.9f, 0.6f);
	Function_507(&Global_17483[7375] + 120, -1.0f, 2);
	Function_511(61, 2, 100, 50, 50, 1, 32832, 1, 4, "$/content/DLC/ZombiePack/Beats/beat_homestead_trap", 63, 2, 55.0f, 8, 55, 0);
	Function_510(&Global_17483[6175] + 120, 1, 5.0f, 1, 640);
	Function_508(&Global_17483[6175] + 120, 5.0f);
	Function_509(&Global_17483[6175] + 120, 19.9f, 0.6f);
	Function_507(&Global_17483[6175] + 120, -4.0f, 2);
	Function_511(55, 2, 100, 4294967271, 100, 2, 32784, 0, 4, "$/content/DLC/ZombiePack/Beats/beat_cannibal_camp", 63, 2, 190.0f, 1, 35, 0);
	Function_510(&Global_17483[5575] + 120, 1, 6.0f, 1, 240);
	Function_509(&Global_17483[5575] + 120, 5.9f, 0.3f);
	Function_508(&Global_17483[5575] + 120, 4.0f);
	Function_507(&Global_17483[5575] + 120, -4.0f, 2);
	Function_511(59, 2, 100, 4294967271, 100, 2, 32768, 0, 4, "$/content/DLC/ZombiePack/Beats/beat_family_camp", 63, 2, 190.0f, 1, 50, 0);
	Function_510(&Global_17483[5975] + 120, 1, 6.0f, 1, 240);
	Function_509(&Global_17483[5975] + 120, 5.9f, 0.3f);
	Function_508(&Global_17483[5975] + 120, 4.0f);
	Function_507(&Global_17483[5975] + 120, -4.0f, 2);
	Function_511(67, 0, 30, 10, 10, 2, 131080, 0, 4, "$/content/DLC/ZombiePack/Beats/beat_mourn_zombie", 63, 2, 190.0f, 1, 40, 0);
	Function_510(&Global_17483[6775] + 120, 1, 3.0f, 64, 752);
	Function_508(&Global_17483[6775] + 120, 0.0f);
	Function_505(&Global_17483[6775] + 120, 8.0f);
	Function_509(&Global_17483[6775] + 120, 5.9f, 0.3f);
	Function_507(&Global_17483[6775] + 120, 0.0f, 2);
	Function_506(&Global_17483[6775] + 120);
	Function_511(63, 2, 100, 4294967271, 100, 2, 16, 0, 4, "$/content/DLC/ZombiePack/Beats/beat_hunter", 63, 2, 190.0f, 1, 50, 0);
	Function_510(&Global_17483[6375] + 120, 2, 6.0f, 1, 752);
	Function_508(&Global_17483[6375] + 120, 8.0f);
	Function_503(&Global_17483[6375] + 120, 0.45f, 9.0f);
	Function_504(&Global_17483[6375] + 120, 8.9f, 6.0f);
	Function_507(&Global_17483[6375] + 120, -4.0f, 4);
	Function_506(&Global_17483[6375] + 120);
	Function_511(74, 1, 30, 10, 10, 2, 131080, 0, 4, "$/content/DLC/ZombiePack/Beats/beat_thieves", 63, 2, 190.0f, 1, 60, 0);
	Function_510(&Global_17483[7475] + 120, 0, 4.0f, 64, 752);
	Function_508(&Global_17483[7475] + 120, 0.0f);
	Function_505(&Global_17483[7475] + 120, 16.0f);
	Function_509(&Global_17483[7475] + 120, 4.5f, 0.3f);
	Function_507(&Global_17483[7475] + 120, 0.0f, 2);
	Function_506(&Global_17483[7475] + 120);
	Function_511(60, 1, 30, 10, 10, 2, 131080, 0, 4, "$/content/DLC/ZombiePack/Beats/beat_family_overrun", 63, 2, 190.0f, 1, 60, 0);
	Function_510(&Global_17483[6075] + 120, 0, 4.0f, 64, 640);
	Function_508(&Global_17483[6075] + 120, 4.0f);
	Function_505(&Global_17483[6075] + 120, 16.0f);
	Function_509(&Global_17483[6075] + 120, 4.5f, 0.3f);
	Function_507(&Global_17483[6075] + 120, -4.0f, 2);
	Function_506(&Global_17483[6075] + 120);
	Function_511(71, 1, 30, 10, 10, 2, 131080, 0, 4, "$/content/DLC/ZombiePack/Beats/beat_zombie_struggle", 63, 2, 190.0f, 1, 60, 0);
	Function_510(&Global_17483[7175] + 120, 0, 4.0f, 64, 640);
	Function_508(&Global_17483[7175] + 120, 4.0f);
	Function_505(&Global_17483[7175] + 120, 16.0f);
	Function_509(&Global_17483[7175] + 120, 4.5f, 0.3f);
	Function_507(&Global_17483[7175] + 120, -4.0f, 2);
	Function_506(&Global_17483[7175] + 120);
	Function_511(62, 2, 25, 4294967276, 50, 5, 16, 0, 4, "$/content/DLC/ZombiePack/Beats/beat_homestead_zombies", 63, 2, 100.0f, 1, 55, 0);
	Function_510(&Global_17483[6275] + 120, 2, 5.0f, 1, 4294967295);
	Function_511(66, 2, 100, 4294967271, 100, 2, 96, 0, 4, "$/content/DLC/ZombiePack/Beats/beat_magical_animals", 63, 2, 170.0f, 1, 45, 0);
	Function_510(&Global_17483[6675] + 120, 3, 8.0f, 1, 752);
	Function_509(&Global_17483[6675] + 120, 19.9f, 0.6f);
	Function_508(&Global_17483[6675] + 120, 35.0f);
	Function_507(&Global_17483[6675] + 120, -1.0f, 2);
	Function_502(75, "$/content/DLC/ZombiePack/Beats/beat_unicorn");
	Function_502(69, "$/content/DLC/ZombiePack/Beats/beat_sasquatch");
	return;
}

void Function_502(int iParam0, bool bParam1) //Position: 0x20D28 / 134440
{
	if (!Function_496(iParam0))
	{
		return;
	}
	Global_17483[iParam075].f_96 = GET_ASSET_ID(bParam1, 4);
	return;
}

void Function_503(int iParam0, float fParam1, int iParam2) //Position: 0x20D47 / 134471
{
	(iParam0 + 60)->f_52 = fParam1;
	(iParam0 + 60)->f_56 = iParam2;
	return;
}

void Function_504(int iParam0, float fParam1, int iParam2) //Position: 0x20D5D / 134493
{
	(iParam0 + 60)->f_44 = fParam1;
	(iParam0 + 60)->f_48 = iParam2;
	return;
}

void Function_505(int iParam0, int iParam1) //Position: 0x20D73 / 134515
{
	(iParam0 + 60)->f_20 = iParam1;
	return;
}

void Function_506(int iParam0) //Position: 0x20D81 / 134529
{
	iParam0->f_16 = 1;
	return;
}

void Function_507(int iParam0, float fParam1, int iParam2) //Position: 0x20D8C / 134540
{
	(iParam0 + 60)->f_24 = fParam1;
	(iParam0 + 60)->f_12 = iParam2;
	return;
}

void Function_508(int iParam0, int iParam1) //Position: 0x20DA2 / 134562
{
	(iParam0 + 60)->f_32 = iParam1;
	return;
}

void Function_509(int iParam0, float fParam1, int iParam2) //Position: 0x20DB0 / 134576
{
	(iParam0 + 60)->f_44 = fParam1;
	(iParam0 + 60)->f_52 = iParam2;
	return;
}

void Function_510(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4) //Position: 0x20DC6 / 134598
{
	iParam0->f_60 = iParam1;
	(iParam0 + 60)->f_4 = fParam2;
	(iParam0 + 60)->f_8 = iParam3;
	(iParam0 + 60)->f_16 = iParam4;
}

void Function_511(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9, int iParam10, int iParam11, float fParam12, int iParam13, bool bParam14, int iParam15) //Position: 0x20DEC / 134636
{
	var uVar0;
	int iVar1;
	bool bVar2;
	char* cVar3[64];
	
	if (!Function_496(iParam0))
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
	if (!Function_58())
	{
		Global_63398 = 30.0f;
	}
	else
	{
		Global_63398 = (30.0f * 0.8f);
	}
	if (!UNK_0x214AFB8C(Global_16876[iParam06].f_20))
	{
		iVar1 = MAKE_TIME_OF_DAY_EX(true, false, false, false);
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
					bVar2 = Function_326(1200);
					bVar2 = RAND_INT_RANGE(30, bVar2);
				}
				ADD_TIME(&iVar1, 0, 7, bVar2, 0);
			}
		}
		Function_512(iParam0, Global_17483[iParam075].f_96);
		Global_17483[iParam075].f_264 = iVar1;
		Global_16876[iParam06] = iVar1;
	}
	else
	{
		Global_17483[iParam075].f_264 = Global_16876[iParam06];
	}
	bParam14 = Function_326(bParam14 * 60);
	ADD_TIME(&uVar0, 0, false, bParam14, 0);
	Global_17483[iParam075].f_260 = uVar0;
	Global_17483[iParam075].f_268 = -1.0f;
	Global_17483[iParam075].f_276 = 4294967295;
	Global_17483[iParam075].f_272 = 4294967295;
	strcpy(&cVar3, "RUN ", 64);
	stradd(&cVar3, bParam9, 64);
	Global_25263++;
}

int Function_512(int iParam0, int iParam1) //Position: 0x21194 / 135572
{
	if (iParam0 >= 4294967295 || iParam0 <= 100)
	{
		return 0;
	}
	Global_16876[iParam06].f_20 = iParam1;
	return 1;
}

void Function_513() //Position: 0x211B5 / 135605
{
	return;
}

void Function_514(int iParam0) //Position: 0x211BB / 135611
{
	strcpy(iParam0 + 12, "BEAT VALIDATORA", 16);
	*iParam0 = 34345;
	iParam0->f_4 = 135669;
	iParam0->f_8 = 34345;
	iParam0->f_28 = 1;
	return;
}

int Function_515() //Position: 0x211F5 / 135669
{
	return 0;
}

void Function_516(int iParam0) //Position: 0x211FC / 135676
{
	strcpy(iParam0 + 12, "BEAT VALIDATORA", 16);
	*iParam0 = 34345;
	iParam0->f_4 = 135734;
	iParam0->f_8 = 34345;
	iParam0->f_28 = 1;
	return;
}

int Function_517() //Position: 0x21236 / 135734
{
	if (Function_4(1024))
	{
		Function_518();
	}
	return 0;
}

void Function_518() //Position: 0x21249 / 135753
{
	float fVar0;
	int iVar1;
	var uVar2;
	
	bLocal_510 = true;
	if (!IS_SCRIPT_VALID(Global_6281))
	{
		Global_3367 = 0;
	}
	if (!Function_4(4))
	{
		bLocal_510 = false;
		return;
	}
	if (HUD_IS_FADED() || HUD_IS_FADING())
	{
		bLocal_510 = false;
		return;
	}
	if (Function_4(4194304))
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
			Function_546(0);
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
		Function_401(0, 0);
		bLocal_510 = false;
		return;
	}
	if (Global_3395)
	{
		Function_401(1, 0);
		bLocal_510 = false;
		return;
	}
	if (!Function_246(Global_29006))
	{
		bLocal_510 = false;
		return;
	}
	bLocal_510 = Function_545();
	if (bLocal_510)
	{
		Function_519(&uVar2);
	}
	return;
}

void Function_519(int iParam0) //Position: 0x21393 / 136083
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = 53;
	iVar1 = 53;
	iVar2 = 100;
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
		if (Function_521(iVar3, iParam0))
		{
			Function_520(iVar3);
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

void Function_520(int iParam0) //Position: 0x21418 / 136216
{
	if (Global_25264 > 55)
	{
		LOG_ERROR("giNumValidBeats is higher than CONST_MaxNumValidBeats");
	}
	Global_25059[Global_25264] = iParam0;
	Global_25264++;
	return;
}

bool Function_521(int iParam0, int iParam1) //Position: 0x21473 / 136307
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
	if (!Function_70(5) && Global_3365)
	{
		return 0;
	}
	if (Global_17483[iParam075].f_120 == 0)
	{
		return 0;
	}
	if (Global_17483[iParam075].f_292)
	{
		Global_26147 = 1;
		Global_26148 = iParam0;
		Function_401(0, 0);
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
	if (!Function_97(StackVal, 0) && Global_3365)
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
		if (Function_255(Global_17483[iParam075].f_88) == 1)
		{
			return 0;
		}
	}
	if (iVar1 & 8192 == 8192)
	{
		if (Function_171() <= 6)
		{
			return 0;
		}
	}
	if (iVar1 & 16384 == 16384)
	{
		if (Function_171() >= 0)
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
		if (!Function_541())
		{
			return 0;
		}
	}
	if (iVar1 & 2048 == 2048)
	{
		if (!Function_540(GET_ASSET_NAME(Global_17483[iParam075].f_96, 4)))
		{
			return 0;
		}
	}
	if (Global_17483[iParam075].f_92 == 4294967294)
	{
		Global_17483[iParam075].f_92 = Global_29006;
	}
	if (!Function_539(Global_17483[iParam075].f_84, iParam1))
	{
		return 0;
	}
	if (!Function_494(Global_17483[iParam075].f_96))
	{
		return 0;
	}
	if (!Global_17483[iParam075].f_272 != 4294967295)
	{
		if (!Function_538(Global_17483[iParam075].f_272))
		{
			return 0;
		}
	}
	switch (Global_17483[iParam075].f_120)
	{
		case 0x00000004:
			if (!Function_535((&Global_17483[iParam075] + 120)->f_120) < 0)
			{
				return 0;
			}
			break;
		
		case 0x00000007:
			switch ((&Global_17483[iParam075] + 120)->f_128)
			{
				case 0x00000001:
					bVar3 = Function_532(Global_29004, Global_29005, Global_29006, bVar2, 1);
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
						bVar3 = Function_532(Global_29004, Global_29005, Global_29006, (bVar2 + iVar5), 1);
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
			iVar0 = (*&Global_26316 + 88)[1];
			ADD_TIME(&iVar0, 0, true, false, 0);
			if (Function_72(Global_26316[1]))
			{
				if (Global_26316[1] == Global_29006)
				{
					if (IS_EARLIER_THAN(GET_TIME_OF_DAY(), iVar0))
					{
						return 0;
					}
				}
			}
			if (iVar1 & 2 == 2)
			{
				if (!Function_531())
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
		
		case 0x00000000:
			iVar0 = (*&Global_26316 + 88)[1];
			ADD_TIME(&iVar0, 0, true, false, 0);
			if (Function_72(Global_26316[1]))
			{
				if (Global_26316[1] == Global_29006)
				{
					if (IS_EARLIER_THAN(GET_TIME_OF_DAY(), iVar0))
					{
						return 0;
					}
				}
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
			if (!Function_530())
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
			if (!Function_528())
			{
				return 0;
			}
			break;
		
		case 0x00000004:
			if (Global_3403 || Global_3405)
			{
				return 0;
			}
			if (!Function_526(1))
			{
				return 0;
			}
			if (!Function_524(StackVal, 0, Global_26361.f_12))
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
			if (!Function_523(1, 0))
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
			if (!Function_522())
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
	if (!Global_17483[iParam075].f_276 != 4294967295 && !Global_17483[iParam075].f_276 != Function_301())
	{
		return 0;
	}
	return 1;
}

bool Function_522() //Position: 0x21A50 / 137808
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

bool Function_523(int iParam0, int iParam1) //Position: 0x21AAB / 137899
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

bool Function_524(int iParam0, int iParam1, bool bParam2) //Position: 0x21B0E / 137998
{
	if (!Function_72(bParam2) && iParam1 != 0)
	{
		return 0;
	}
	if ((!iParam1 != (*&Global_26316 + 72)[iParam0] && !iParam1 != 0) && !Function_525(0x1000000))
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

bool Function_525(int iParam0) //Position: 0x21B61 / 138081
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

bool Function_526(bool bParam0) //Position: 0x21B7F / 138111
{
	if (Function_525(256))
	{
		return 0;
	}
	if (Function_525(262144))
	{
		return 0;
	}
	if (Function_527())
	{
		return 0;
	}
	if (!Function_525(1))
	{
		return 0;
	}
	if (!Function_525(4096))
	{
		return 0;
	}
	if (bParam0 && Function_127(12))
	{
		return 0;
	}
	if (Global_3378)
	{
		return 0;
	}
	if (Function_525(2048))
	{
		return 0;
	}
	if (Function_16() || !bParam0)
	{
		if (Global_29007 != 2 || Global_29007 != 5)
		{
			return 0;
		}
	}
	return 1;
}

bool Function_527() //Position: 0x21BF5 / 138229
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

bool Function_528() //Position: 0x21C0E / 138254
{
	if (Function_529() != 0 && Global_3365)
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

int Function_529() //Position: 0x21C79 / 138361
{
	return Global_12976.f_156;
}

bool Function_530() //Position: 0x21C84 / 138372
{
	if (!IS_EARLIER_THAN(Global_12976, 0))
	{
		return 0;
	}
	return 1;
}

bool Function_531() //Position: 0x21C98 / 138392
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

bool Function_532(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4) //Position: 0x21CE3 / 138467
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
								return Function_533(&Global_6298, &Global_7189, bParam3);
								break;
							
							case 0x00000001:
								return Function_533(&Global_6364, &Global_7287, bParam3);
								break;
							
							case 0x00000002:
								return Function_533(&Global_6351, &Global_7268, bParam3);
								break;
							
							default:
								return Function_533(&Global_6391, &Global_7327, bParam3);
								break;
						}
						break;
					
					case 0x00000001:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_533(&Global_6501, &Global_7490, bParam3);
								break;
							
							case 0x00000001:
								return Function_533(&Global_6402, &Global_7343, bParam3);
								break;
							
							case 0x00000003:
								return Function_533(&Global_6433, &Global_7389, bParam3);
								break;
							
							case 0x00000002:
								return Function_533(&Global_6490, &Global_7474, bParam3);
								break;
							
							case 0x00000004:
								return Function_533(&Global_6537, &Global_7543, bParam3);
								break;
							
							default:
								return Function_533(&Global_6532, &Global_7536, bParam3);
								break;
						}
						break;
					
					case 0x00000002:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_533(&Global_6563, &Global_7581, bParam3);
								break;
							
							case 0x00000001:
								return Function_533(&Global_6614, &Global_7657, bParam3);
								break;
							
							case 0x00000002:
								return Function_533(&Global_6643, &Global_7700, bParam3);
								break;
							
							default:
								return Function_533(&Global_6550, &Global_7562, bParam3);
								break;
						}
						break;
					
					case 0x00000003:
						switch (bVar1)
						{
							case 0x00000001:
								return Function_533(&Global_6667, &Global_7735, bParam3);
								break;
							
							default:
								return Function_533(&Global_6704, &Global_7790, bParam3);
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
								return Function_533(&Global_6709, &Global_7797, bParam3);
								break;
							
							case 0x00000001:
								return Function_533(&Global_6764, &Global_7879, bParam3);
								break;
							
							case 0x00000002:
								return Function_533(&Global_6785, &Global_7910, bParam3);
								break;
							
							default:
								return Function_533(&Global_6810, &Global_7947, bParam3);
								break;
						}
						break;
					
					case 0x00000002:
						switch (bVar1)
						{
							case 0x00000000:
								return Function_533(&Global_6815, &Global_7954, bParam3);
								break;
							
							default:
								return Function_533(&Global_6928, &Global_8122, bParam3);
								break;
						}
						break;
					
					case 0x00000001:
						switch (bVar1)
						{
							case 0x00000002:
								return Function_533(&Global_6933, &Global_8129, bParam3);
								break;
							
							case 0x00000001:
								return Function_533(&Global_6962, &Global_8172, bParam3);
								break;
							
							case 0x00000003:
								return Function_533(&Global_6987, &Global_8209, bParam3);
								break;
							
							default:
								return Function_533(&Global_7027, &Global_8268, bParam3);
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
		return Function_533(&Global_6298, &Global_7189, bParam3);
	}
	if (bVar1 == Global_30640[1])
	{
		return Function_533(&Global_6364, &Global_7287, bParam3);
	}
	if (bVar1 == Global_30640[2])
	{
		return Function_533(&Global_6351, &Global_7268, bParam3);
	}
	if (bVar1 == Global_30658[0])
	{
		return Function_533(&Global_6501, &Global_7490, bParam3);
	}
	if (bVar1 == Global_30658[1])
	{
		return Function_533(&Global_6402, &Global_7343, bParam3);
	}
	if (bVar1 == Global_30658[3])
	{
		return Function_533(&Global_6433, &Global_7389, bParam3);
	}
	if (bVar1 == Global_30658[2])
	{
		return Function_533(&Global_6490, &Global_7474, bParam3);
	}
	if (bVar1 == Global_30658[4])
	{
		return Function_533(&Global_6537, &Global_7543, bParam3);
	}
	if (bVar1 == Global_30668[0])
	{
		return Function_533(&Global_6563, &Global_7581, bParam3);
	}
	if (bVar1 == Global_30668[1])
	{
		return Function_533(&Global_6614, &Global_7657, bParam3);
	}
	if (bVar1 == Global_30668[2])
	{
		return Function_533(&Global_6643, &Global_7700, bParam3);
	}
	if (bVar1 == Global_30679[1])
	{
		return Function_533(&Global_6667, &Global_7735, bParam3);
	}
	if (bVar1 == Global_30685[0])
	{
		return Function_533(&Global_6709, &Global_7797, bParam3);
	}
	if (bVar1 == Global_30685[1])
	{
		return Function_533(&Global_6764, &Global_7879, bParam3);
	}
	if (bVar1 == Global_30685[2])
	{
		return Function_533(&Global_6785, &Global_7910, bParam3);
	}
	if (bVar1 == Global_30693[0])
	{
		return Function_533(&Global_6815, &Global_7954, bParam3);
	}
	if (bVar1 == Global_30707[2])
	{
		return Function_533(&Global_6933, &Global_8129, bParam3);
	}
	if (bVar1 == Global_30707[1])
	{
		return Function_533(&Global_6962, &Global_8172, bParam3);
	}
	if (bVar1 == Global_30707[3])
	{
		return Function_533(&Global_6987, &Global_8209, bParam3);
	}
	if (bVar1 == Global_30628[0])
	{
		return Function_533(&Global_6391, &Global_7327, bParam3);
	}
	if (bVar1 == Global_30628[1])
	{
		return Function_533(&Global_6532, &Global_7536, bParam3);
	}
	if (bVar1 == Global_30628[2])
	{
		return Function_533(&Global_6550, &Global_7562, bParam3);
	}
	if (bVar1 == Global_30628[3])
	{
		return Function_533(&Global_6704, &Global_7790, bParam3);
	}
	if (bVar1 == Global_30633[0])
	{
		return Function_533(&Global_6810, &Global_7947, bParam3);
	}
	if (bVar1 == Global_30633[2])
	{
		return Function_533(&Global_6928, &Global_8122, bParam3);
	}
	if (bVar1 == Global_30633[1])
	{
		return Function_533(&Global_7027, &Global_8268, bParam3);
	}
	return "";
}

var Function_533(var uParam0, var uParam1, bool bParam2) //Position: 0x222F8 / 140024
{
	int iVar0;
	
	iVar0 = bParam2;
	if (iVar0 <= *uParam0 || iVar0 > 0)
	{
		return "";
	}
	if (!Function_534(uParam0[iVar02], 2))
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

bool Function_534(var uParam0, int iParam1) //Position: 0x2234A / 140106
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

int Function_535(int iParam0) //Position: 0x22366 / 140134
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
			if (Function_536(GET_SQUAD_FROM_OBJECT(bVar2)) == iParam0)
			{
				iVar0++;
			}
			bVar2 = OBJECT_ITERATOR_NEXT(bVar1);
		}
	}
	DESTROY_ITERATOR(bVar1);
	return iVar0;
}

int Function_536(bool bParam0) //Position: 0x223C1 / 140225
{
	bool bVar0;
	
	if (!SQUAD_IS_VALID(bParam0))
	{
		return 4294967295;
	}
	bVar0 = Function_537(bParam0);
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

var Function_537(bool bParam0) //Position: 0x223F9 / 140281
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

bool Function_538(int iParam0) //Position: 0x2243F / 140351
{
	if (iParam0 >= 4294967295 && iParam0 <= 4)
	{
		return 0;
	}
	return Global_25965[iParam0];
}

bool Function_539(int iParam0, int iParam1) //Position: 0x2245A / 140378
{
	if ((*iParam1 && iParam0) == iParam0)
	{
		return 1;
	}
	if (Function_495(iParam0))
	{
		*iParam1 = (*iParam1 || iParam0);
		return 1;
	}
	return 0;
}

bool Function_540(bool bParam0) //Position: 0x22484 / 140420
{
	if (STRING_CONTAINS_STRING(bParam0, "nnotoriety"))
	{
		if (Function_529() >= 1 && Global_3365)
		{
			return 0;
		}
	}
	if (STRING_CONTAINS_STRING(bParam0, "lowhonor"))
	{
		if (Function_171() <= 3 && Global_3365)
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

bool Function_541() //Position: 0x224E8 / 140520
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
	if (Function_542())
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

bool Function_542() //Position: 0x2259C / 140700
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
						if (Function_543(StackVal, Global_34573) > IntToFloat(iVar1))
						{
							return 1;
						}
					}
				}
			}
			if (Function_543(StackVal, Global_34573) > IntToFloat(iVar1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

float Function_543(bool bParam0, bool bParam1) //Position: 0x22657 / 140887
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (IS_ACTOR_VALID(bParam0))
	{
		if (IS_OBJECT_VALID(bParam1))
		{
			Function_153(bParam0);
			vVar0 = { StackVal, StackVal, Function_153(bParam0) };
			Function_544(bParam1);
			vVar3 = { StackVal, StackVal, Function_544(bParam1) };
			return VDIST(vVar0, vVar3);
		}
	}
	LOG_ERROR("Attempting to get distance between actor and object, where at least one is INVALID! Returning 0.0!");
	return 0.0f;
}

vector3 Function_544(bool bParam0) //Position: 0x226F7 / 141047
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

int Function_545() //Position: 0x22763 / 141155
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

void Function_546(bool bParam0) //Position: 0x227A2 / 141218
{
	if (bParam0)
	{
		Function_392(0x10000000);
	}
	else
	{
		Function_547(0x10000000);
	}
	Global_26316.f_172 = 0;
	return;
}

void Function_547(int iParam0) //Position: 0x227C6 / 141254
{
	int iVar0;
	
	iVar0 = (Global_26316.f_56 && iParam0);
	Global_26316.f_56 = (Global_26316.f_56 - iVar0);
	return;
}

void Function_548(int iParam0) //Position: 0x227E3 / 141283
{
	strcpy(iParam0 + 12, "WEATHER", 16);
	*iParam0 = 143400;
	iParam0->f_4 = 141339;
	iParam0->f_8 = 141333;
	iParam0->f_28 = 1;
	return;
}

void Function_549() //Position: 0x22815 / 141333
{
	return;
}

int Function_550() //Position: 0x2281B / 141339
{
	if (!HUD_IS_FADED())
	{
		Function_555(&Global_16524);
	}
	Function_554(&Global_16524);
	Function_552(&Global_16517);
	Function_551(&Global_16517);
	return 0;
}

void Function_551(int iParam0) //Position: 0x22841 / 141377
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

void Function_552(int iParam0) //Position: 0x228CF / 141519
{
	bool bVar0;
	float fVar1;
	float fVar2;
	bool bVar3;
	
	Function_553(StackVal, &fVar1, &fVar2);
	if (iParam0->f_16)
	{
		if (StackVal == *iParam0)
		{
			*iParam0 = StackVal;
			iParam0->f_4 = iParam0->f_12;
			bVar0 = true;
		}
	}
	else if (GET_CURRENT_GAME_TIME() < (iParam0->f_20 + (2.0f * (60.0f / 3.0f))))
	{
		bVar3 = RAND_INT_RANGE(false, 10000);
		if (bVar3 <= 500)
		{
			*iParam0 = (*iParam0 + RAND_FLOAT_RANGE(-0.3f, 0.3f));
			bVar0 = true;
		}
		else if (bVar3 <= 2500)
		{
			*iParam0 = (*iParam0 + RAND_FLOAT_RANGE(-0.1f, 0.1f));
			bVar0 = true;
		}
		bVar3 = RAND_INT_RANGE(false, 10000);
		if (bVar3 <= 500)
		{
			iParam0->f_4 = (StackVal + RAND_FLOAT_RANGE(-30.0f, 30.0f));
			bVar0 = true;
		}
		else if (bVar3 <= 2500)
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
			if (StackVal && (StackVal || (Global_63399 != 32 && *iParam0 < 0.175f) != 0 != 1))
			{
				*iParam0 = 0.175f;
			}
		}
		SET_WIND(StackVal, *iParam0, 2.5f);
		iParam0->f_20 = GET_CURRENT_GAME_TIME();
	}
	return;
}

void Function_553(int iParam0, var uParam1, int iParam2) //Position: 0x22A94 / 141972
{
	switch (iParam0)
	{
		case 0x00000000:
		case 0x00000001:
			*uParam1 = 0.25f;
			*iParam2 = 0.5f;
			break;
		
		case 0x00000002:
		case 0x0000000D:
		case 0x00000011:
		case 0x00000005:
			*uParam1 = 1.1f;
			*iParam2 = 1.6f;
			break;
		
		case 0x00000003:
			*uParam1 = 1.3f;
			*iParam2 = 1.8f;
			break;
		
		case 0x00000004:
			*uParam1 = 1.6f;
			*iParam2 = 2.1f;
			break;
		
		default:
			*uParam1 = 1.1f;
			*iParam2 = 1.6f;
			break;
	}
	return;
}

void Function_554(int iParam0) //Position: 0x22B30 / 142128
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

void Function_555(int iParam0) //Position: 0x22CA8 / 142504
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = GET_HOUR(false);
	iVar1 = 0;
	if ((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19)
	{
		iVar1 = 1;
	}
	if (iParam0->f_16 && iVar1)
	{
		Function_557(StackVal);
		if (StackVal != StackVal)
		{
			if (HUD_IS_FADED())
			{
				Function_309(StackVal, 0);
			}
			else
			{
				Function_307(StackVal, MAKE_TIME_OF_DAY(0, Function_326(300), 0), 0);
			}
		}
		return;
	}
	if (iParam0->f_16)
	{
		Function_557(StackVal);
		return;
	}
	Function_557(*iParam0);
	if (IS_EARLIER_THAN(iParam0->f_12, 0))
	{
		bVar2 = RAND_INT_RANGE(false, 10000);
		if ((StackVal != 4294967295 || iParam0->f_20) && ((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19))
		{
			switch (*iParam0)
			{
				case 0x00000000:
				case 0x00000001:
				case 0x00000004:
					*iParam0 = 13;
					iParam0->f_32 = 0;
					break;
				
				case 0x0000000D:
					if (Function_70(2))
					{
						if (bVar2 <= 3000)
						{
							if (Function_556())
							{
								*iParam0 = 17;
							}
							else
							{
								*iParam0 = 2;
							}
						}
						else if (bVar2 <= (6000 + iParam0->f_36 * 120))
						{
							*iParam0 = 3;
						}
					}
					break;
				
				case 0x00000011:
					if (bVar2 <= 3000)
					{
						if (Function_556())
						{
							*iParam0 = 13;
						}
						else
						{
							*iParam0 = 2;
						}
					}
					else if (bVar2 <= (6000 + iParam0->f_36 * 120))
					{
						*iParam0 = 3;
					}
					break;
				
				case 0x00000002:
					if (bVar2 <= 3000)
					{
						if (Function_556())
						{
							*iParam0 = 13;
						}
						else
						{
							*iParam0 = 17;
						}
					}
					else if (bVar2 <= (6000 + iParam0->f_36 * 120))
					{
						*iParam0 = 3;
					}
					break;
				
				case 0x00000003:
					if (bVar2 <= 3000)
					{
						*iParam0 = 13;
					}
					else if (bVar2 <= 6000)
					{
						*iParam0 = 17;
					}
					else
					{
						*iParam0 = 2;
					}
					iParam0->f_32 = 1;
					iParam0->f_36 = 0;
					break;
				
				case 0x00000005:
					if (bVar2 <= 3000)
					{
						*iParam0 = 13;
					}
					else if (bVar2 <= 6000)
					{
						*iParam0 = 17;
					}
					else
					{
						*iParam0 = 2;
					}
					iParam0->f_32 = 1;
					iParam0->f_36 = 0;
					break;
				
				default:
					*iParam0 = 13;
					break;
			}
			iParam0->f_12 = GET_TIME_OF_DAY();
			if ((*iParam0 != 3 || *iParam0 != 4) || *iParam0 != 5)
			{
				ADD_TIME(iParam0 + 12, 0, false, Function_326(400), 0);
			}
			else
			{
				ADD_TIME(iParam0 + 12, 0, false, Function_326(800), 0);
			}
			iParam0->f_20 = 0;
		}
		else if (bVar2 <= 6000 && ((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19))
		{
			iParam0->f_12 = GET_TIME_OF_DAY();
			if ((*iParam0 != 3 || *iParam0 != 4) || *iParam0 != 5)
			{
				ADD_TIME(iParam0 + 12, 0, false, Function_326(400), 0);
			}
			else
			{
				ADD_TIME(iParam0 + 12, 0, false, Function_326(800), 0);
			}
			iParam0->f_20 = 1;
		}
		else if (!((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19))
		{
		}
		if (StackVal == *iParam0 && ((iVar0 > 5 || (iVar0 < 6 && iVar0 > 16)) || iVar0 <= 19))
		{
			if (HUD_IS_FADED())
			{
				Function_309(*iParam0, 0);
			}
			else
			{
				Function_307(*iParam0, MAKE_TIME_OF_DAY(0, Function_326(300), 0), 0);
			}
		}
	}
	return;
}

bool Function_556() //Position: 0x22FBD / 143293
{
	return (RAND_INT_RANGE(false, 1999) / 1000) != 0;
}

void Function_557(int iParam0) //Position: 0x22FD0 / 143312
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
		
		case 0x0000000D:
			break;
		
		case 0x00000011:
			break;
		
		default:
			break;
	}
	return;
}

void Function_558() //Position: 0x23028 / 143400
{
	if (Global_3364)
	{
		Function_559(&Global_16517, 0x3ec00000, 0);
	}
	Global_16524.f_24 = -1.0f;
	Global_16524.f_28 = -1.0f;
	return;
}

void Function_559(var uParam0, var uParam1, int iParam2) //Position: 0x2304C / 143436
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

void Function_560(int iParam0) //Position: 0x23092 / 143506
{
	strcpy(iParam0 + 12, "TRAFFIC", 16);
	*iParam0 = 179431;
	iParam0->f_4 = 144124;
	iParam0->f_8 = 143556;
	iParam0->f_28 = 1;
	return;
}

void Function_561() //Position: 0x230C4 / 143556
{
	Function_563(&Global_28842 + 84);
	Global_28842.f_240 = 0;
	if (Function_562(&Global_28842, 512))
	{
		STREAMING_EVICT_ACTOR(Global_28842.f_64, 4294967295);
	}
	if (Function_562(&Global_28842, 2048))
	{
		STREAMING_EVICT_ACTOR(Global_28842.f_68, 4294967295);
	}
	if (Function_562(&Global_28842, 8192))
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

bool Function_562(var uParam0, int iParam1) //Position: 0x23155 / 143701
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void Function_563(int iParam0) //Position: 0x23171 / 143729
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		Function_564(iParam0, iVar0);
		iVar0++;
	}
	return;
}

void Function_564(var uParam0, int iParam1) //Position: 0x23197 / 143767
{
	if (Function_566(uParam0[iParam13], 4))
	{
		if (Function_566(uParam0[iParam13], 1))
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
			Function_565(uParam0[iParam13], 1);
			Function_565(uParam0[iParam13], 2);
			Function_565(uParam0[iParam13], 4);
		}
	}
	return;
}

void Function_565(var uParam0, int iParam1) //Position: 0x232C5 / 144069
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	uParam0->f_8 = (StackVal - iVar0);
	return;
}

bool Function_566(int iParam0, int iParam1) //Position: 0x232DF / 144095
{
	int iVar0;
	
	iVar0 = (StackVal && iParam1);
	if (!iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

var Function_567() //Position: 0x232FC / 144124
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
	Function_729();
	iVar1 = Function_728(&Local_11);
	if (!iVar1 != Global_28842.f_48)
	{
		Global_28842.f_48 = iVar1;
	}
	Function_723(0);
	if (!Function_722(1))
	{
		Function_719(&Local_11, 1);
		if (IS_OBJECT_VALID(Global_28951))
		{
			EVENT_TRAP_CLEAR_TRAP_FLAG(Global_28951);
			EVENT_TRAP_CLEAR_EVENTS(Global_28951);
		}
		if (Function_722(262144))
		{
			Function_563(&Global_28842 + 84);
			Function_718(262144);
			Function_718(524288);
			Global_28842.f_240 = 0;
		}
		Function_723(1);
		return iVar0;
	}
	if (Global_3395)
	{
		Function_719(&Local_11, 1);
		return iVar0;
	}
	if (Global_34165.f_44 && !NET_IS_IN_SESSION())
	{
		Function_719(&Local_11, 1);
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
				Function_713(&Local_11, bVar2);
			}
			REMOVE_OBJECT_FROM_OBJECTSET(bVar2, Global_28842.f_60);
			CLEAN_OBJECTSET(Global_28842.f_60);
		}
	}
	if (!Global_34165.f_44)
	{
		Function_719(&Local_11, 0);
	}
	Function_712();
	if (Function_722(1) && Function_722(32768))
	{
		if (Function_722(1048576))
		{
			Function_563(&Global_28842 + 84);
			Function_718(1835008);
			Global_28842.f_240 = 0;
		}
		if (!Function_722(262144))
		{
			if (IS_POPSET_VALID(Global_30750[0]) && GET_NUM_ACTORENUMS_IN_POPULATION(Global_30750[0]) < 0)
			{
				Function_711();
			}
		}
		if (Function_722(262144) && !Function_722(524288))
		{
			if (Function_707(&Global_28842 + 84))
			{
				Function_706(524288);
			}
		}
	}
	else
	{
		Function_563(&Global_28842 + 84);
		Function_718(1835008);
		Global_28842.f_240 = 0;
	}
	iVar3 = 0;
	Function_182(Function_25());
	vVar4 = { StackVal, StackVal, Function_182(Function_25()) };
	if (Function_705(StackVal, StackVal, vVar4))
	{
		while ((Function_722(16384) && Function_702(&Local_11, 0, 0)) && iVar3 > 10)
		{
			iVar7 = 0;
			iVar8 = Function_689(StackVal, StackVal, &Local_11, vVar4, iVar7);
			if (iVar8 < 4294967295 && iVar8 > Local_11)
			{
				Function_591(&(Local_11[iVar848]), 1);
			}
			iVar3++;
		}
	}
	if (Function_722(16384))
	{
	}
	if (Function_702(&Local_11, (Function_16() || !HUD_IS_FADED()), 1))
	{
		if (Function_705(StackVal, StackVal, vVar4))
		{
			iVar9 = 0;
			if (bLocal_494)
			{
				iVar9 = 2;
			}
			Function_689(StackVal, StackVal, &Local_11, vVar4, iVar9);
		}
	}
	bLocal_10 = Function_589();
	iVar10 = 0;
	while (iVar10 <= Local_11)
	{
		if (Function_588(&(Local_11[iVar1048])))
		{
			if (Function_591(&(Local_11[iVar1048]), 1))
			{
				iVar0 = 1;
			}
			Function_587(&(Local_11[iVar1048]), 1);
		}
		Function_585(&(Local_11[iVar1048]), iVar10);
		iVar10++;
	}
	Function_584();
	Function_583();
	Function_568();
	Function_723(1);
	EVENT_TRAP_CLEAR_TRAP_FLAG(Global_28951);
	EVENT_TRAP_CLEAR_EVENTS(Global_28951);
	REGISTER_TRAFFIC_OBJECTSET(Global_28842.f_60);
	return iVar0;
}

void Function_568() //Position: 0x235AA / 144810
{
	if (!Function_16())
	{
		return;
	}
	Function_569();
	return;
}

void Function_569() //Position: 0x235BB / 144827
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
					if (!Function_581(&Local_11, GET_ACTOR_FROM_OBJECT(bVar4), &iVar6))
					{
						if (Function_713(&Local_11, GET_ACTOR_FROM_OBJECT(bVar4)))
						{
						}
						else
						{
							Function_576(GET_ACTOR_FROM_OBJECT(bVar4));
						}
					}
					else if (!bVar2)
					{
						if (Local_11[iVar648] == 1 && Local_11[iVar648] == 3)
						{
							Function_575(&(Local_11[iVar648]));
							Function_570(&(Local_11[iVar648]));
							Local_11[iVar648] = 6;
						}
					}
				}
				else if (bVar2)
				{
					if (Function_581(&Local_11, GET_ACTOR_FROM_OBJECT(bVar4), &iVar6))
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

void Function_570(int iParam0) //Position: 0x236D3 / 145107
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	bool bVar5;
	bool bVar6;
	struct<6> Var7;
	vector3 vVar13;
	
	if (!Function_588(iParam0))
	{
		return;
	}
	iVar0 = Function_574(StackVal, iParam0->f_164);
	GET_POSITION(Function_537(StackVal), &vVar1);
	fVar4 = 0.0f;
	bVar5 = START_CURVE_QUERY(Global_28841, vVar1, iVar0, fVar4, 150.0f, 5.0f, 0);
	if (!GET_NUM_POINTS_IN_CURVE_QUERY(bVar5) < 0)
	{
		UNK_0xDF93BD7C(bVar5);
		return;
	}
	bVar6 = Function_573(StackVal, StackVal, bVar5, vVar1);
	if (bVar6 == 4294967295)
	{
		UNK_0xDF93BD7C(bVar5);
		return;
	}
	iParam0->f_152 = GET_CURVE_FROM_POINT_INDEX_IN_CURVE_QUERY(bVar5, bVar6);
	iParam0->f_156 = CURVE_CALCULATE_DISTANCE_BY_FORCED_COMPONENT_SUBDIVISION_BOUNDS(iParam0->f_152, 0.0f, 1.0f, 10);
	GET_POINT_FROM_CURVE_QUERY(bVar5, bVar6, &Var7);
	*(iParam0 + 168) = { 0.0f, 0.0f, -1.0f };
	ROTATE_VECTOR_XZ(StackVal, GET_HEADING(Function_537(iParam0 + 168)), 0);
	iParam0->f_148 = Function_572(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0->f_152, Var7, *(iParam0 + 168));
	if (iParam0->f_148 >= 0)
	{
		GET_CURVE_POINT(iParam0->f_152, 1.0f, iParam0 + 24, 0);
	}
	else
	{
		GET_CURVE_POINT(iParam0->f_152, 0.0f, iParam0 + 24, 0);
	}
	Function_571(iParam0 + 24);
	vVar13 = { StackVal, StackVal, Function_571(iParam0 + 24) };
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

vector3 Function_571(bool bParam0) //Position: 0x23823 / 145443
{
	vector3 vVar0;
	
	vVar0.x = *bParam0;
	vVar0.f_4 = StackVal;
	vVar0.f_8 = StackVal;
	return StackVal, StackVal, vVar0;
}

int Function_572(bool bParam0, bool bParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9) //Position: 0x23842 / 145474
{
	bool bVar0;
	bool bVar6;
	vector3 vVar12;
	vector3 vVar15;
	float fVar18;
	float fVar19;
	
	UNK_0x19D652F9(bParam0, 1.0f, &bParam1, &bVar0);
	UNK_0x19D652F9(bParam0, -1.0f, &bParam1, &bVar6);
	Function_571(&bVar0);
	Function_571(&bParam1);
	vVar12 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_571(&bParam1), Function_571(&bVar0), StackVal) };
	fVar18 = VDOT(&uParam7, &vVar12);
	Function_571(&bVar6);
	Function_571(&bParam1);
	vVar15 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_571(&bParam1), Function_571(&bVar6), StackVal) };
	fVar19 = VDOT(&uParam7, &vVar15);
	if (fVar19 > fVar18)
	{
		return 1;
	}
	return 4294967295;
}

var Function_573(bool bParam0, vector3 vParam1) //Position: 0x2389B / 145563
{
	bool bVar0;
	bool bVar1;
	bool bVar7;
	bool bVar8;
	
	bVar7 = 100000.0f;
	bVar8 = 4294967295;
	bVar0 = false;
	while (bVar0 <= GET_NUM_POINTS_IN_CURVE_QUERY(bParam0))
	{
		GET_POINT_FROM_CURVE_QUERY(bParam0, bVar0, &bVar1);
		Function_571(&bVar1);
		if (VDIST(vParam1, Function_571(&bVar1)) > bVar7)
		{
			bVar8 = bVar0;
			Function_571(&bVar1);
			bVar7 = VDIST(vParam1, Function_571(&bVar1));
		}
		bVar0++;
	}
	return bVar8;
}

int Function_574(int iParam0, int iParam1) //Position: 0x238F3 / 145651
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

void Function_575(int iParam0) //Position: 0x23923 / 145699
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

void Function_576(bool bParam0) //Position: 0x23964 / 145764
{
	bool bVar0;
	bool bVar1;
	
	if (IS_ACTOR_MOUNTED(bParam0))
	{
		bVar0 = GET_RIDER(bParam0);
		if (!IS_ACTOR_PLAYER(bVar0))
		{
			RELEASE_OBJECT_REF(bVar0);
			Function_577(bVar0);
		}
	}
	if (IS_ACTOR_RIDING(bParam0))
	{
		bVar1 = GET_MOUNT(bParam0);
		RELEASE_OBJECT_REF(bVar1);
		Function_577(bVar1);
	}
	if (!IS_ACTOR_PLAYER(bParam0))
	{
		RELEASE_OBJECT_REF(GET_OBJECT_FROM_ACTOR(bParam0));
		Function_577(bParam0);
	}
	return;
}

void Function_577(bool bParam0) //Position: 0x239BE / 145854
{
	bool bVar0;
	
	bVar0 = Function_580();
	Function_578(bParam0);
	TASK_FLEE_ACTORSET(bParam0, bVar0, -1.0f, -1.0f, 0, 0, 0);
	TASK_PRIORITY_SET(bParam0, 1);
	TASK_OVERRIDE_CLEAR_MOVETYPE(bParam0);
	return;
}

void Function_578(bool bParam0) //Position: 0x239E5 / 145893
{
	bool bVar0;
	vector3 vVar1;
	bool bVar4;
	
	if (NET_IS_IN_SESSION())
	{
		bVar4 = false;
		while (bVar4 <= 16)
		{
			if (Function_579(bVar4))
			{
				bVar0 = GET_SLOT_ACTOR(bVar4);
				Function_182(bVar0);
				vVar1 = { StackVal, StackVal, Function_182(bVar0) };
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

bool Function_579(bool bParam0) //Position: 0x23A33 / 145971
{
	if (bParam0 > 0 || bParam0 <= 16)
	{
		return 0;
	}
	return (Global_79297 && SHIFT_LEFT(true, bParam0)) == 0;
}

var Function_580() //Position: 0x23A55 / 146005
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

bool Function_581(int iParam0, bool bParam1, int iParam2) //Position: 0x23AC1 / 146113
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= *iParam0)
	{
		if (Function_582(iParam0[iVar048], bParam1))
		{
			*iParam2 = iVar0;
			return 1;
		}
		iVar0++;
	}
	*iParam2 = 4294967295;
	return 0;
}

bool Function_582(int iParam0, bool bParam1) //Position: 0x23AF5 / 146165
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

void Function_583() //Position: 0x23B59 / 146265
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
	if (!Function_16())
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
			bVar2 = Function_581(&Local_11, GET_ACTOR_FROM_OBJECT(bVar1), &iVar4);
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

void Function_584() //Position: 0x23C4A / 146506
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

void Function_585(int iParam0, int iParam1) //Position: 0x23CDB / 146651
{
	Global_28952[iParam15] = iParam1;
	Global_28952[iParam15].f_4 = Function_588(iParam0);
	if (StackVal)
	{
		if (SQUAD_IS_VALID(StackVal))
		{
			Global_28952[iParam15].f_8 = Function_537(StackVal);
		}
		Global_28952[iParam15].f_12 = Function_586(iParam0, &Global_28952[iParam15] + 16, 0);
	}
	return;
}

bool Function_586(int iParam0, float fParam1, bool bParam2) //Position: 0x23D36 / 146742
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	
	if (StackVal || !SQUAD_IS_VALID(!Function_588(iParam0)))
	{
		*fParam1 = 0.0f;
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
		*fParam1 = 1.0f;
	}
	else if (iVar4 <= (iVar3 + bVar5))
	{
		*fParam1 = 0.5f;
	}
	else
	{
		*fParam1 = 0.0f;
	}
	return bVar2;
}

void Function_587(int iParam0, int iParam1) //Position: 0x23E1C / 146972
{
	struct<5> Var0;
	char* cVar6[16];
	struct<13> Var10;
	
	if (!Global_30900[1] && iParam1)
	{
		return;
	}
	if (!Function_588(iParam0))
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
	GET_POSITION(Function_537(StackVal), &Var0);
	vVar14 = { 0.0f, 1.0f, 0.0f };
	if (Function_16())
	{
		fVar17 = 0.0f;
		if (!Function_586(iParam0, &fVar17, 0))
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
	Function_571(iParam0 + 24);
	vVar3 = { StackVal, StackVal, Function_571(iParam0 + 24) };
	return;
}

bool Function_588(int iParam0) //Position: 0x23F95 / 147349
{
	if (*iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

bool Function_589() //Position: 0x23FA5 / 147365
{
	bool bVar0;
	
	if (!NET_IS_IN_SESSION())
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 <= 16)
	{
		if ((Global_3386 && Global_76943[bVar096] != Global_29006) || Function_579(bVar0))
		{
			if (Function_590(bVar0) != 4294967295)
			{
				return 1;
			}
		}
		bVar0++;
	}
	return 0;
}

int Function_590(int iParam0) //Position: 0x23FEC / 147436
{
	return Global_76943[iParam096].f_112;
}

bool Function_591(int iParam0, bool bParam1) //Position: 0x24000 / 147456
{
	var uVar0;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	
	bVar5 = Global_34573;
	Function_688(iParam0, bParam1);
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
			if (!IS_ACTOR_VALID(Function_537(StackVal)))
			{
				*iParam0 = 16;
				return 1;
			}
			if (Function_681(iParam0))
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
				if (!Function_147(Global_30750[6], 4, 23, 1))
				{
					return 0;
				}
			}
			if (Function_671(iParam0, 0))
			{
				Function_665(iParam0, 0);
				*iParam0 = 7;
			}
			else
			{
				*iParam0 = 16;
				return 1;
			}
			break;
		
		case 0x00000004:
			if (!Function_147(Global_30750[6], 4, 23, 1))
			{
				return 0;
			}
			if (Function_640(iParam0))
			{
				if (IS_ACTOR_VALID(Function_537(StackVal)))
				{
					if (Global_29005 != Global_30628[2] || Global_29005 != Global_30637[0])
					{
						SET_ACTOR_WEAPON_REACTION_NO_FLEE_HACK(Function_537(StackVal), 1);
					}
					SET_ACTOR_ALLOW_PLAYER_GREET_RESPONSES(Function_537(StackVal), 0);
					REGISTER_TRAFFIC_ACTOR(Function_537(StackVal), 0);
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
			if (!Function_639(StackVal))
			{
				Global_28842.f_76 = GET_CURRENT_GAME_TIME();
				*iParam0 = 16;
				return 1;
			}
			GET_POSITION(Function_537(StackVal), &uVar0);
			if (iParam0->f_184 + 5.0f) > GET_CURRENT_GAME_TIME()
			{
				Function_182(bVar5);
				if (Function_637(StackVal, StackVal, iParam0, &uVar0, Function_182(bVar5), 0))
				{
					return 1;
				}
			}
			if (Function_633(iParam0, &bVar5, !Function_16()))
			{
				bVar3 = true;
			}
			break;
		
		case 0x00000006:
			if (!Function_625(iParam0))
			{
				if (Global_34165.f_44)
				{
					if (StackVal || StackVal != 1 != 3)
					{
						*iParam0 = 12;
					}
					else
					{
						Function_182(bVar5);
						if (!Function_637(StackVal, StackVal, iParam0, &uVar0, Function_182(bVar5), 1))
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
			if (Function_58())
			{
				if (Function_624(StackVal, Global_34573, 1))
				{
					Function_623(StackVal, Global_34573, 4);
				}
			}
			if (!Function_618(iParam0, 1, iParam0->f_20 > 4))
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
			if (!Function_639(StackVal))
			{
				*iParam0 = 16;
				return 1;
			}
			GET_POSITION(Function_537(StackVal), &uVar0);
			if (!(Global_3410 && iParam0->f_100))
			{
				if (!Function_612(iParam0, Function_617(iParam0->f_124)))
				{
					if (((StackVal || StackVal != 1 != 2) || iParam0->f_124) && !Global_34165.f_44)
					{
						iParam0->f_120 = 1;
					}
					*iParam0 = 16;
					return 1;
				}
			}
			if (!Function_608(iParam0))
			{
				*iParam0 = 6;
				return 1;
			}
			if (iParam0->f_184 + 5.0f) > GET_CURRENT_GAME_TIME()
			{
				if (Function_637(StackVal, StackVal, iParam0, &uVar0, Global_34574, 1))
				{
					return 1;
				}
			}
			if (Function_606(iParam0))
			{
				bVar3 = true;
			}
			if (Function_633(iParam0, &Global_34573, !Function_16()))
			{
				bVar3 = true;
			}
			if (Function_605(StackVal))
			{
				bVar3 = true;
			}
			if (StackVal != 3 && Function_16())
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
				Function_665(iParam0, bLocal_10);
			}
			break;
		
		case 0x00000009:
			Function_604(iParam0);
			*iParam0 = 10;
		
		case 0x0000000A:
			if (Function_603(iParam0))
			{
				*iParam0 = 12;
				return 1;
			}
			break;
		
		case 0x0000000B:
			if (Function_603(iParam0))
			{
				*iParam0 = 12;
				return 1;
			}
			break;
		
		case 0x0000000C:
			if ((Global_29007 != 3 || Global_29007 != 4) && !Global_34165.f_44)
			{
				Function_602(iParam0);
			}
			else
			{
				Function_600(iParam0);
			}
			*iParam0 = 13;
		
		case 0x0000000D:
			*iParam0 = 16;
			return 1;
			break;
		
		case 0x0000000E:
			if (Function_603(iParam0))
			{
				*iParam0 = 15;
				return 1;
			}
			Function_182(bVar5);
			if (Function_637(StackVal, StackVal, iParam0, &uVar0, Function_182(bVar5), 1))
			{
				return 1;
			}
			break;
		
		case 0x0000000F:
			Function_600(iParam0);
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
					Function_599(iParam0 + 8, 0, 1, 1);
				}
				else
				{
					Function_600(iParam0);
					Function_599(iParam0 + 8, 0, 0, 0);
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
					Function_598(iParam0->f_180);
				}
				else
				{
					Function_597(iParam0->f_180);
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
			Function_592(iParam0, 0);
			if (bParam1)
			{
				Global_28842.f_8 = (StackVal - 1);
			}
			return 1;
			break;
	}
	return 0;
}

void Function_592(int iParam0, bool bParam1) //Position: 0x24595 / 148885
{
	*iParam0 = 0;
	iParam0->f_4 = 4294967295;
	if (SQUAD_IS_VALID(StackVal))
	{
		if (!Global_34165.f_44 && !bParam1)
		{
			Function_596(StackVal);
		}
		else
		{
			Function_595(StackVal);
		}
		DESTROY_OBJECT(GET_OBJECT_FROM_SQUAD(StackVal));
	}
	if (IS_OBJECTSET_VALID(iParam0->f_180))
	{
		DESTROY_OBJECTSET(iParam0->f_180);
	}
	if (IS_OBJECTSET_VALID(iParam0->f_48))
	{
		Function_594(iParam0->f_48);
		DESTROY_OBJECTSET(iParam0->f_48);
	}
	if (IS_OBJECTSET_VALID(iParam0->f_160))
	{
		Function_594(iParam0->f_160);
		DESTROY_OBJECTSET(iParam0->f_160);
	}
	iParam0->f_20 = 0;
	*(iParam0 + 24) = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_593() };
	iParam0->f_12 = "";
	iParam0->f_72 = 4294967295;
	iParam0->f_148 = 0;
	Function_51();
	*(iParam0 + 168) = { StackVal, StackVal, Function_51() };
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

struct<24> Function_593() //Position: 0x24667 / 149095
{
	struct<6> Var0;
	
	Var0.f_20 = 4294967295;
	return StackVal, StackVal, StackVal, StackVal, StackVal, Var0;
}

void Function_594(bool bParam0) //Position: 0x24678 / 149112
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

void Function_595(bool bParam0) //Position: 0x246B8 / 149176
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

void Function_596(bool bParam0) //Position: 0x2473B / 149307
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

void Function_597(bool bParam0) //Position: 0x247BE / 149438
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

void Function_598(bool bParam0) //Position: 0x24803 / 149507
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

void Function_599(var uParam0, bool bParam1, bool bParam2, bool bParam3) //Position: 0x24848 / 149576
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
					if (!Function_159(bVar1, 0x3f800000, 0x42960000, 1, 1, 0))
					{
						DESTROY_ACTOR(bVar1);
					}
					if (!Function_159(bVar2, 0x3f800000, 0x42960000, 1, 1, 0))
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
					if (!Function_159(bVar1, 0x3f800000, 0x42960000, 1, 1, 0))
					{
						DESTROY_ACTOR(bVar1);
					}
					if (!Function_159(bVar2, 0x3f800000, 0x42960000, 1, 1, 0))
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
					if (!Function_159(bVar1, 0x3f800000, 0x42960000, 1, 1, 0))
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

void Function_600(int iParam0) //Position: 0x24A46 / 150086
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	SQUAD_GOALS_CLEAR(StackVal);
	bVar1 = Function_580();
	if (!Global_34165.f_44)
	{
		Function_601(StackVal, Global_34573, 4);
	}
	bVar0 = false;
	while (StackVal <= SQUAD_GET_SIZE(bVar0))
	{
		bVar2 = SQUAD_GET_ACTOR_BY_INDEX(StackVal, bVar0);
		Function_578(bVar2);
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
			Function_578(bVar2);
			TASK_FLEE_ACTORSET(bVar2, bVar1, -1.0f, -1.0f, 0, 0, 0);
			TASK_PRIORITY_SET(bVar2, 0);
		}
		bVar0++;
	}
	return;
}

void Function_601(bool bParam0, bool bParam1, bool bParam2) //Position: 0x24B10 / 150288
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

void Function_602(int iParam0) //Position: 0x24B7E / 150398
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

bool Function_603(int iParam0) //Position: 0x24C30 / 150576
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

void Function_604(int iParam0) //Position: 0x24CDF / 150751
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

bool Function_605(bool bParam0) //Position: 0x24DA5 / 150949
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

bool Function_606(int iParam0) //Position: 0x24DD1 / 150993
{
	if (!IS_VOLUME_VALID(Global_28842.f_28))
	{
		return 0;
	}
	if (StackVal || (StackVal || StackVal != 2 != 4) != 1)
	{
		if (Function_607(StackVal, Global_28842.f_28))
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

bool Function_607(bool bParam0, bool bParam1) //Position: 0x24E40 / 151104
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

bool Function_608(int iParam0) //Position: 0x24EC2 / 151234
{
	vector3 vVar0;
	vector3 vVar3;
	bool bVar6;
	
	if (DECOR_CHECK_EXIST(StackVal, "coachService"))
	{
		return 1;
	}
	Function_571(iParam0 + 24);
	bVar6 = Function_611(StackVal, StackVal, StackVal, Function_571(iParam0 + 24));
	GET_POSITION(bVar6, &vVar0);
	Function_571(iParam0 + 24);
	vVar3 = { StackVal, StackVal, Function_571(iParam0 + 24) };
	if (iParam0->f_156 > 1.0f)
	{
		iParam0->f_156 = Function_610(StackVal, iParam0->f_72);
	}
	if (StackVal > Function_609(VDIST(vVar3, vVar0), Function_610(iParam0->f_156, iParam0->f_72)))
	{
		*iParam0 = 6;
		return 0;
	}
	if (Function_16())
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

float Function_609(bool bParam0, int iParam1) //Position: 0x24F6C / 151404
{
	if (bParam0 > iParam1)
	{
		return bParam0;
	}
	return iParam1;
}

int Function_610(bool bParam0, int iParam1) //Position: 0x24F7F / 151423
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

var Function_611(vector3 vParam0, bool bParam3) //Position: 0x25090 / 151696
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;
	
	bVar0 = false;
	bVar1 = 4294967295;
	bVar2 = -1.0f;
	if (Function_49(StackVal, StackVal, vParam0))
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

bool Function_612(var uParam0, bool bParam1) //Position: 0x25211 / 152081
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
	bVar1 = Function_25();
	if (!NET_IS_IN_SESSION())
	{
		if (IS_ACTOR_VALID(bVar1))
		{
			iVar2 = Function_615(bVar0, bVar1, bParam1, 1);
			return iVar2 < 0;
		}
		return 0;
	}
	bVar3 = false;
	while (bVar3 <= 16)
	{
		if (GET_SLOT_POSITION(bVar3, &vVar4))
		{
			iVar2 = Function_613(StackVal, StackVal, bVar0, vVar4, bParam1, 1);
			if (iVar2 >= 0)
			{
				return 1;
			}
		}
		bVar3++;
	}
	return 0;
}

int Function_613(bool bParam0, vector3 vParam1, var uParam4, bool bParam5) //Position: 0x2528E / 152206
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
			if (Function_614(StackVal, StackVal, bVar2, vParam1, uParam4))
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

bool Function_614(bool bParam0, vector3 vParam1, float fParam4) //Position: 0x252F2 / 152306
{
	if (IS_ACTOR_VALID(bParam0))
	{
		Function_153(bParam0);
		if (VDIST(Function_153(bParam0), vParam1) >= fParam4)
		{
			return 1;
		}
	}
	LOG_ERROR("Attempting to check whether an INVALID actor is in range of position. Returning FALSE.");
	return 0;
	return 0;
}

int Function_615(bool bParam0, bool bParam1, int iParam2, bool bParam3) //Position: 0x2537C / 152444
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
			if (Function_616(bVar2, bParam1, iParam2))
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

bool Function_616(bool bParam0, bool bParam1, int iParam2) //Position: 0x253EB / 152555
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

var Function_617(bool bParam0) //Position: 0x254FC / 152828
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

bool Function_618(int iParam0, bool bParam1, bool bParam2) //Position: 0x25549 / 152905
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (!Function_588(iParam0))
	{
		Function_587(iParam0, 1);
		return 0;
	}
	if (DECOR_CHECK_EXIST(StackVal, "coachService"))
	{
		return 1;
	}
	AI_CLEAR_NAV_MATERIAL_USAGE(Function_537(StackVal));
	if (!SQUAD_GOAL_IS_VALID(iParam0->f_12))
	{
		SQUAD_GOALS_CLEAR(StackVal);
	}
	Function_571(iParam0 + 24);
	vVar3 = { StackVal, StackVal, Function_571(iParam0 + 24) };
	vVar0 = { StackVal, StackVal, vVar3 };
	Function_622(StackVal, StackVal, vVar0, iParam0 + 24);
	if (bParam1)
	{
		iParam0->f_76 = Function_621(StackVal, iParam0->f_76, iParam0->f_80);
		if (!iParam0->f_96 || iParam0->f_72 != 4294967295)
		{
			iParam0->f_72 = iParam0->f_76;
		}
	}
	if (bParam2)
	{
		AI_SET_NAV_MATERIAL_USAGE(StackVal, Function_620(Function_537(StackVal)), 0);
	}
	Function_619(iParam0);
	return 1;
}

void Function_619(int iParam0) //Position: 0x25601 / 153089
{
	int iVar0;
	int iVar1;
	
	if (!SQUAD_IS_VALID(StackVal))
	{
		return;
	}
	iVar1 = 2;
	if (Function_58())
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

int Function_620(int iParam0) //Position: 0x257A1 / 153505
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

int Function_621(int iParam0, int iParam1, int iParam2) //Position: 0x257C8 / 153544
{
	bool bVar0;
	bool bVar1;
	
	if (!Function_58())
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

void Function_622(vector3 vParam0) //Position: 0x25906 / 153862
{
	*uParam3 = vParam0.x;
	uParam3->f_4 = vParam0.y;
	uParam3->f_8 = vParam0.z;
}

void Function_623(bool bParam0, bool bParam1, bool bParam2) //Position: 0x25923 / 153891
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

bool Function_624(bool bParam0, bool bParam1, int iParam2) //Position: 0x25968 / 153960
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

bool Function_625(int iParam0) //Position: 0x259DA / 154074
{
	var uVar0;
	bool bVar3;
	
	if (DECOR_CHECK_EXIST(StackVal, "wasstickup"))
	{
		DECOR_REMOVE(StackVal, "wasstickup");
		return 1;
	}
	Function_571(iParam0 + 24);
	bVar3 = Function_611(StackVal, StackVal, StackVal, Function_571(iParam0 + 24));
	GET_POSITION(bVar3, &uVar0);
	*(iParam0 + 24) = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_627(StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(iParam0 + 24), iParam0->f_152, 2.5f, 0) };
	if (Function_626(iParam0 + 24))
	{
		return 0;
	}
	return 1;
}

bool Function_626(bool bParam0) //Position: 0x25A4D / 154189
{
	return ((((StackVal && (StackVal && *bParam0 != 0.0f != 0.0f) != 0.0f) && bParam0->f_12 != 0.0f) && bParam0->f_16 != 0.0f) && bParam0->f_20 != 4294967295);
}

struct<24> Function_627(int iParam0, struct<6> Param1, bool bParam7, float fParam8, var uParam9) //Position: 0x25A7B / 154235
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
	
	Function_571(&Param1);
	vVar6 = { StackVal, StackVal, Function_571(&Param1) };
	bVar9 = false;
	uVar11 = Function_574(StackVal, iParam0->f_164);
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
	GET_OBJECT_POSITION(Function_537(StackVal), &uVar15);
	vVar18 = { 0.0f, 0.0f, -1.0f };
	if (!IS_OBJECTSET_VALID(iParam0->f_160))
	{
		iParam0->f_160 = CREATE_OBJECTSET_IN_LAYOUT(Function_29(), Global_28841, 36, 1);
	}
	bVar32 = 4294967295;
	while (!bVar10)
	{
		bVar31 = START_CURVE_QUERY(Global_28841, vVar6, uVar11, fVar12, fVar13, Function_609(Function_632(iParam0), ((fVar13 - fVar12) / 2.0f)), 0);
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
			Function_594(iParam0->f_160);
			ADD_OBJECT_TO_OBJECTSET(bParam7, iParam0->f_160);
			if (uParam9 || iVar14 > 5)
			{
				fVar12 = fVar13;
				fVar13 = (fVar13 + fParam8);
				iVar14++;
			}
			else
			{
				return StackVal, StackVal, StackVal, StackVal, StackVal, Function_593();
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
					Function_571(&Var25);
					Function_571(&Param1);
					vVar21 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_571(&Param1), Function_571(&Var25), StackVal) };
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
		else if (Function_49(StackVal, StackVal, vVar18))
		{
			bVar32 = ROUND((TO_FLOAT(RAND_INT_RANGE(false, (GET_NUM_CURVES_IN_CURVE_QUERY(bVar31) - 1000))) / 1000.0f));
		}
		else if (Global_3386)
		{
			Function_571(&Param1);
			vVar18 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_571(&Param1), Global_34574, StackVal) };
			VNORMALIZE(&vVar18);
			Var35 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_593() };
			Var41 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_593() };
			bVar9 = false;
			while (bVar9 <= GET_NUM_CURVES_IN_CURVE_QUERY(bVar31))
			{
				bVar47 = GET_CURVE_FROM_CURVE_INDEX_IN_CURVE_QUERY(bVar31, bVar9);
				GET_CURVE_POINT(bVar47, 1.0f, &Var35, 0);
				GET_CURVE_POINT(bVar47, 0.0f, &Var41, 0);
				Function_571(&Param1);
				Function_571(&Var35);
				Function_571(&Param1);
				Function_571(&Var41);
				if (StackVal > Function_54(StackVal, StackVal, StackVal, Function_54(StackVal, StackVal, StackVal, StackVal, Function_571(&Param1), Function_571(&Var35)), Function_571(&Param1), Function_571(&Var41)))
				{
					UNK_0x04D89A35(bVar47, 1.0f, 0.0f, -5.0f, &Var25);
				}
				else
				{
					UNK_0x04D89A35(bVar47, 0.0f, 0.0f, 5.0f, &Var25);
				}
				if (Global_30842[12])
				{
					Function_631(StackVal, StackVal, StackVal, StackVal, StackVal, Var25);
					PRINTNL();
				}
				Function_571(&Var25);
				Function_571(&Param1);
				vVar21 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_571(&Param1), Function_571(&Var25), StackVal) };
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
			Var35 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_593() };
			Var41 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_593() };
			Function_571(&Param1);
			vVar18 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_571(&Param1), Global_34574, StackVal) };
			VNORMALIZE(&vVar18);
			bVar9 = false;
			while (bVar9 <= GET_NUM_CURVES_IN_CURVE_QUERY(bVar31))
			{
				bVar47 = GET_CURVE_FROM_CURVE_INDEX_IN_CURVE_QUERY(bVar31, bVar9);
				GET_CURVE_POINT(bVar47, 1.0f, &Var35, 0);
				GET_CURVE_POINT(bVar47, 0.0f, &Var41, 0);
				Function_571(&Param1);
				Function_571(&Var35);
				Function_571(&Param1);
				Function_571(&Var41);
				if (StackVal > Function_54(StackVal, StackVal, StackVal, Function_54(StackVal, StackVal, StackVal, StackVal, Function_571(&Param1), Function_571(&Var35)), Function_571(&Param1), Function_571(&Var41)))
				{
					UNK_0x04D89A35(bVar47, 1.0f, Var35.f_16, 5.0f, &Var25);
				}
				else
				{
					UNK_0x04D89A35(bVar47, 0.0f, Var41.f_16, 5.0f, &Var25);
				}
				Function_571(&Var25);
				Function_571(&Param1);
				vVar21 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_571(&Param1), Function_571(&Var25), StackVal) };
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
				return StackVal, StackVal, StackVal, StackVal, StackVal, Function_593();
			}
		}
		bVar10 = true;
	}
	iParam0->f_152 = GET_CURVE_FROM_CURVE_INDEX_IN_CURVE_QUERY(bVar31, bVar32);
	iParam0->f_156 = CURVE_CALCULATE_DISTANCE_BY_FORCED_COMPONENT_SUBDIVISION_BOUNDS(iParam0->f_152, 0.0f, 1.0f, 10);
	GET_POINT_FROM_CURVE_QUERY(bVar31, bVar32, &Var0);
	Function_571(&Var0);
	vVar48 = { StackVal, StackVal, Function_571(&Var0) };
	GET_CURVE_POINT(iParam0->f_152, 1.0f, &Var51, 0);
	GET_CURVE_POINT(iParam0->f_152, 0.0f, &Var57, 0);
	if (StackVal < Function_630(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_630(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var51, Param1), Var57, Param1))
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
			Function_571(&Var25);
			vVar48 = { StackVal, StackVal, Function_571(&Var25) };
			bVar9++;
		}
		Function_571(&Var0);
		vVar48 = { StackVal, StackVal, Function_571(&Var0) };
	}
	Function_628(iParam0);
	UNK_0xDF93BD7C(bVar31);
	return StackVal, StackVal, StackVal, StackVal, StackVal, Var0;
}

void Function_628(int iParam0) //Position: 0x25F71 / 155505
{
	if (!Function_588(iParam0))
	{
		return;
	}
	if (!Function_629(StackVal))
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

bool Function_629(bool bParam0) //Position: 0x26015 / 155669
{
	if (bParam0 > 0 || bParam0 < 3)
	{
		return 0;
	}
	return 1;
}

float Function_630(bool bParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, bool bParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11) //Position: 0x2602A / 155690
{
	vector3 vVar0;
	vector3 vVar3;
	
	Function_571(&bParam0);
	vVar0 = { StackVal, StackVal, Function_571(&bParam0) };
	Function_571(&bParam6);
	vVar3 = { StackVal, StackVal, Function_571(&bParam6) };
	return VDIST(vVar0, vVar3);
}

void Function_631(struct<17> Param0) //Position: 0x2604F / 155727
{
	Function_571(&Param0);
	PRINTVECTOR(Function_571(&Param0));
	PRINTSTRING(": t=");
	PRINTFLOAT(Param0.f_12);
	PRINTSTRING(" slope=");
	PRINTFLOAT(Param0.f_16);
}

var Function_632(int iParam0) //Position: 0x26084 / 155780
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

bool Function_633(int iParam0, var uParam1, bool bParam2) //Position: 0x2613C / 155964
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
	if (Function_636(iParam0->f_16, 0))
	{
		if (Function_635(iParam0->f_16) || !bParam2)
		{
			Function_604(iParam0);
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
	bVar0 = Function_537(StackVal);
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
		Function_604(iParam0);
		if (IS_BLIP_VALID(GET_BLIP_ON_OBJECT(iParam0->f_16)))
		{
			REMOVE_BLIP(GET_BLIP_ON_OBJECT(iParam0->f_16));
		}
		Global_28842.f_76 = GET_CURRENT_GAME_TIME();
		SAY_SINGLE_LINE_CONTEXT(bVar0, 171, Function_25(), 1, 1, 2, 4294967295, 4294967295, 0, 1);
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
		if (Function_616(bVar0, *uParam1, 7.0f))
		{
			if (!DECOR_CHECK_EXIST(StackVal, "oneshotdialog"))
			{
				DECOR_SET_BOOL(StackVal, "oneshotdialog", true);
				Global_28842.f_76 = GET_CURRENT_GAME_TIME();
				SAY_SINGLE_LINE_CONTEXT(bVar0, 60, Function_25(), 0, 0, 2, 4294967295, 4294967295, 0, 1);
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
				Function_604(iParam0);
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
	if (Function_115(4))
	{
		if (!iParam0->f_92)
		{
			if (iParam0->f_132 > 1.0f)
			{
				if (StackVal != StackVal && Function_616(bVar0, *uParam1, 10.0f))
				{
					iParam0->f_92 = 1;
					iParam0->f_132 = (GET_CURRENT_GAME_TIME() + 20.0f);
					SET_ACTION_NODE_FOR_ACTOR(bVar0, "default_character_Main/Vehicle/Jack/React/Left");
					SAY_SINGLE_LINE_CONTEXT(bVar0, 309, Function_25(), 1, 0, 2, 4294967295, 4294967295, 0, 1);
					return 1;
				}
				if (Function_634(bVar0, 50.0f))
				{
					iParam0->f_92 = 1;
					iParam0->f_132 = (GET_CURRENT_GAME_TIME() + 60.0f);
					SET_ACTION_NODE_FOR_ACTOR(bVar0, "default_character_Main/Vehicle/Jack/React/Left");
					SAY_SINGLE_LINE_CONTEXT(bVar0, 309, Function_25(), 0, 0, 2, 4294967295, 4294967295, 0, 1);
					return 1;
				}
			}
			if (!Function_58())
			{
				if (!Function_105(Global_76846, 64))
				{
					if (Function_616(iParam0->f_16, *uParam1, 35.0f) && Function_159(iParam0->f_16, 0x3f800000, 0x42960000, 1, 1, 0))
					{
						Function_100(Global_34573, 64, 1, 0);
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
					if (Function_616(bVar0, *uParam1, 10.0f))
					{
						DECOR_SET_BOOL(StackVal, "oneshotdialog", true);
						SET_ACTION_NODE_FOR_ACTOR(bVar0, "default_character_Main/Vehicle/Jack/React/Left");
						SAY_SINGLE_LINE_CONTEXT(bVar0, 310, Function_25(), 0, 0, 0, 4294967295, 4294967295, 0, 1);
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
		if (GET_VEHICLE(*uParam1) != iParam0->f_16 && !Function_134())
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

bool Function_634(bool bParam0, int iParam1) //Position: 0x265F8 / 157176
{
	bool bVar0;
	bool bVar1;
	
	if (!NET_IS_IN_SESSION())
	{
		if (IS_ACTOR_WHISTLING(Function_25()))
		{
			if (Function_616(bParam0, Function_25(), iParam1))
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
				bVar1 = Function_25();
			}
			else
			{
				bVar1 = GET_SLOT_ACTOR(bVar0);
			}
			if (IS_ACTOR_VALID(bVar1))
			{
				if (IS_ACTOR_WHISTLING(bVar1))
				{
					if (Function_616(bParam0, bVar1, iParam1))
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

int Function_635(int iParam0) //Position: 0x26670 / 157296
{
	bool bVar0;
	bool bVar1;
	
	if (!NET_IS_IN_SESSION())
	{
		if (IS_ACTOR_DRIVING_VEHICLE(Function_25()))
		{
			return GET_VEHICLE(Function_25()) != iParam0;
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
				bVar1 = Function_25();
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

bool Function_636(int iParam0, bool bParam1) //Position: 0x266E0 / 157408
{
	bool bVar0;
	bool bVar1;
	
	if (!NET_IS_IN_SESSION())
	{
		return GET_VEHICLE(Function_25()) != iParam0;
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
					bVar1 = Function_25();
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

bool Function_637(int iParam0, var uParam1, vector3 vParam2, bool bParam5) //Position: 0x26744 / 157508
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
							if (Function_54(StackVal, StackVal, StackVal, StackVal, vVar1, vVar4) < 10.0f)
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
									Function_577(bVar7);
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
									Function_577(bVar8);
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
				Function_604(iParam0);
				*iParam0 = 14;
				return 1;
			}
			if (!IS_ACTOR_VALID(Function_537(StackVal)))
			{
				Function_604(iParam0);
				*iParam0 = 14;
				return 1;
			}
			if (NET_IS_IN_SESSION())
			{
				if (!NET_IS_OBJECT_LOCAL(iParam0->f_16))
				{
					return 0;
				}
				if (!NET_IS_OBJECT_LOCAL(Function_537(StackVal)))
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
					Function_604(iParam0);
					*iParam0 = 14;
					return 1;
				}
			}
			if (!Function_638(iParam0->f_16, 4294967295, 1, 4294967295))
			{
				Function_604(iParam0);
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

bool Function_638(bool bParam0, int iParam1, bool bParam2, int iParam3) //Position: 0x269E2 / 158178
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

bool Function_639(bool bParam0) //Position: 0x26A9B / 158363
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

bool Function_640(int iParam0) //Position: 0x26AF2 / 158450
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;
	
	Function_571(iParam0 + 24);
	vVar3 = { StackVal, StackVal, Function_571(iParam0 + 24) };
	*(iParam0 + 24) = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_664(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(iParam0 + 24), iParam0->f_152, vVar0) };
	if (Function_626(iParam0 + 24))
	{
		*iParam0 = 16;
		return 0;
	}
	if (!Function_663(&vVar3, 20.0f, &iVar6, 3))
	{
		*iParam0 = 16;
		return 0;
	}
	Function_571(iParam0 + 24);
	*(iParam0 + 168) = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar3, Function_571(iParam0 + 24), StackVal) };
	*(iParam0 + 168) = { 0.0f, UNK_0x9C40E671(iParam0 + 168), 0.0f };
	iParam0->f_112 = 1;
	iParam0->f_116 = 1;
	Function_641(iParam0);
	return 1;
}

void Function_641(int iParam0) //Position: 0x26B76 / 158582
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	bool bVar7;
	
	if (!Function_722(256) || !Function_115(4))
	{
		return;
	}
	bVar0 = Function_662(StackVal, StackVal, Global_34574);
	if (!IS_OBJECT_VALID(bVar0))
	{
		return;
	}
	if (!Function_588(iParam0))
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
	if (!Function_644(StackVal, StackVal, StackVal, StackVal, StackVal, Global_28841, 2, 64, 512, vVar1, vVar4, iParam0 + 16, bVar7))
	{
		return;
	}
	iParam0->f_100 = 1;
	DECOR_SET_BOOL(StackVal, "coachService", true);
	iParam0->f_180 = CREATE_OBJECTSET_IN_LAYOUT(Function_29(), Global_28841, 15, 1);
	Function_643(StackVal, StackVal, iParam0->f_180);
	iParam0->f_184 = GET_CURRENT_GAME_TIME();
	Function_642(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *iParam0);
	return;
	*StackVal = StackVal;
}

void Function_642(struct<189> Param0) //Position: 0x26C6A / 158826
{
	bool bVar0;
	
	if (!Function_16())
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

void Function_643(bool bParam0, bool bParam1, bool bParam2) //Position: 0x26CE8 / 158952
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

bool Function_644(bool bParam0, bool bParam1, int iParam2, int iParam3, int iParam4, vector3 vParam5, vector3 vParam8, var uParam11, bool bParam12) //Position: 0x26EF4 / 159476
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
	if (!Function_663(&vParam5, 20.0f, &vVar1, 10))
	{
		vVar1 = { StackVal, StackVal, vParam5 };
	}
	if (bParam12 < 0)
	{
		bParam12 = Function_658(iParam4, 0, 0, 4294967295, 0);
		bVar4 = false;
	}
	if (Function_49(StackVal, StackVal, vVar1))
	{
		LOG_ERROR("Attempting to create stagecoach traffic at 0,0,0!");
	}
	Var11 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_656("ntrafcoach", bParam0) };
	if (Function_16())
	{
		*uParam11 = Function_654(StackVal, StackVal, StackVal, StackVal, bParam0, &Var11, bParam12, Function_658(iParam3, 0, 4, 23, 0), vVar1, vParam8, 1, 976, 976, 976, 2);
	}
	else
	{
		*uParam11 = Function_654(StackVal, StackVal, StackVal, StackVal, bParam0, &Var11, bParam12, Function_658(iParam3, 0, 4, 23, 0), vVar1, vParam8, 1, 976, 976, 976, 4);
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
	else if (iVar6 < 2 && Function_16())
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
		Var40 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_656("trafpass", bParam0) };
		if ((bVar7 != 0 || bVar7 != 1) && iVar5)
		{
			if (bVar7 == 0)
			{
				Var32 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_656("trafdriver", bParam0) };
				bVar0 = CREATE_ACTOR_IN_LAYOUT(bParam0, &Var32, Global_28842.f_64, vVar29, vParam8);
				if (Function_562(&Global_28842, 512))
				{
					STREAMING_EVICT_ACTOR(Global_28842.f_64, 4294967295);
				}
				bVar19[0] = Global_28842.f_64;
				Global_28842.f_64 = Function_653(Global_29005, Global_28842.f_64);
				STREAMING_REQUEST_ACTOR(Global_28842.f_64, 1, false);
				Function_652(&Global_28842, 512);
			}
			else
			{
				Var32 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_656("trafshotty", bParam0) };
				bVar0 = CREATE_ACTOR_IN_LAYOUT(bParam0, &Var32, Global_28842.f_68, vVar29, vParam8);
				if (Function_562(&Global_28842, 2048))
				{
					STREAMING_EVICT_ACTOR(Global_28842.f_68, 4294967295);
				}
				bVar19[1] = Global_28842.f_68;
				Global_28842.f_68 = Function_651(Global_29005, Global_28842.f_68);
				STREAMING_REQUEST_ACTOR(Global_28842.f_68, 1, false);
				Function_652(&Global_28842, 2048);
			}
		}
		else if (bVar7 != 1 || bVar7 != 0)
		{
			if (iParam2 == 1)
			{
				bVar28 = Function_646();
				STREAMING_REQUEST_ACTOR(bVar28, 1, false);
				bVar0 = CREATE_ACTOR_IN_LAYOUT(bParam0, &Var40, bVar28, vVar29, vParam8);
				STREAMING_EVICT_ACTOR(bVar28, 4294967295);
			}
			else
			{
				bVar28 = Function_658(iParam2, 1, 2, 4294967295, 0);
				if (!Function_645(bVar28, &bVar19))
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
					bVar28 = Function_646();
					STREAMING_REQUEST_ACTOR(bVar28, 1, false);
					bVar0 = CREATE_ACTOR_IN_LAYOUT(bParam0, &Var40, bVar28, vVar29, vParam8);
					STREAMING_EVICT_ACTOR(bVar28, 4294967295);
					iVar8 = (iVar8 - 1);
					iVar9 = 1;
				}
				else
				{
					bVar28 = Function_658(iParam2, 1, 0, 4294967295, 0);
					if (!Function_645(bVar28, &bVar19))
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

bool Function_645(bool bParam0, bool bParam1) //Position: 0x273A0 / 160672
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

bool Function_646() //Position: 0x273D2 / 160722
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (!Function_566(&Global_28842 + 84[Global_28842.f_2323], 4) && iVar0 > 20)
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
	Function_647(0);
	Global_28842.f_232++;
	if (Global_28842.f_232 > Global_28842.f_84)
	{
		Global_28842.f_232 = 0;
	}
	Function_718(524288);
	Function_707(&Global_28842 + 84);
	return iVar1;
}

void Function_647(int iParam0) //Position: 0x27473 / 160883
{
	int iVar0;
	
	if (Function_566(&Global_28842 + 84[Global_28842.f_2323], 4))
	{
		if (Global_28842.f_240 >= 0)
		{
			Global_28842.f_240 = (Global_28842.f_240 - 1);
		}
	}
	Function_564(&Global_28842 + 84, Global_28842.f_232);
	if (iParam0 || Global_28842.f_240 > 5)
	{
		iVar0 = GET_ACTORENUM_IN_POPULATION(Global_30750[0], Global_28842.f_236);
		while (Function_650(iVar0) || iVar0 != 0)
		{
			Global_28842.f_236++;
			if (Global_28842.f_236 > GET_NUM_ACTORENUMS_IN_POPULATION(Global_30750[0]))
			{
				Global_28842.f_236 = 0;
			}
			iVar0 = GET_ACTORENUM_IN_POPULATION(Global_30750[0], Global_28842.f_236);
		}
		Function_648(&Global_28842 + 84, Global_28842.f_232, iVar0);
		Global_28842.f_240++;
		Global_28842.f_236++;
		if (Global_28842.f_236 > GET_NUM_ACTORENUMS_IN_POPULATION(Global_30750[0]))
		{
			Global_28842.f_236 = 0;
		}
	}
	return;
}

void Function_648(var uParam0, int iParam1, int iParam2) //Position: 0x2754C / 161100
{
	(*uParam0)[iParam13] = iParam2;
	uParam0[iParam13]->f_4 = 3;
	Function_649(uParam0[iParam13], 4);
	return;
}

void Function_649(var uParam0, int iParam1) //Position: 0x2756D / 161133
{
	uParam0->f_8 = (StackVal || iParam1);
	return;
}

int Function_650(int iParam0) //Position: 0x2757E / 161150
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

int Function_651(bool bParam0, int iParam1) //Position: 0x27606 / 161286
{
	bool bVar0;
	
	if (!Function_72(bParam0))
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

void Function_652(var uParam0, int iParam1) //Position: 0x277A0 / 161696
{
	*uParam0 = (*uParam0 || iParam1);
	*uParam0 |= 1073741824;
	return;
}

int Function_653(bool bParam0, int iParam1) //Position: 0x277BB / 161723
{
	bool bVar0;
	
	if (!Function_72(bParam0))
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

var Function_654(bool bParam0, bool bParam1, bool bParam2, int iParam3, vector3 vParam4, vector3 vParam7, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14) //Position: 0x2793E / 162110
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
			if (Function_147(Global_30750[6], 4, 23, 0) && iParam10)
			{
				bVar16 = Function_655(StackVal, StackVal, Global_30750[6], vParam4, 4, 23, 0);
				if (Function_645(bVar16, &iVar1))
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

var Function_655(bool bParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6) //Position: 0x27B72 / 162674
{
	return GET_RAND_ACTORENUM_FROM_POPULATION_NATIVE(bParam0, bParam4, bParam5, bParam6, 1, vParam1);
}

struct<32> Function_656(bool bParam0, bool bParam1) //Position: 0x27B8A / 162698
{
	struct<8> Var0;
	bool bVar8;
	
	if (!IS_STRING_VALID(bParam0))
	{
		return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var0;
	}
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_657(bParam0) };
	bVar8 = FIND_OBJECT_IN_LAYOUT(bParam1, &Var0);
	while (IS_OBJECT_VALID(bVar8))
	{
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_657(bParam0) };
		bVar8 = FIND_OBJECT_IN_LAYOUT(bParam1, &Var0);
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Var0;
}

struct<32> Function_657(bool bParam0) //Position: 0x27BD9 / 162777
{
	char* cVar0[32];
	struct<4> Var8;
	bool bVar12;
	
	if (!Function_16())
	{
		return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_150(bParam0);
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
			memcpy(&Var8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_151("0", &Var8, ""), 4);
		}
		bVar12 = GET_LOCAL_SLOT();
		memcpy(&Var8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_151(I2STR(bVar12), &Var8, ""), 4);
		while (STRING_LENGTH(&Var8) <= 6)
		{
			memcpy(&Var8, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_151("0", &Var8, ""), 4);
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

int Function_658(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) //Position: 0x27C88 / 162952
{
	return Function_659(iParam0, iParam1, iParam2, iParam3, iParam4, 0, 0.0f, 0.0f, 0.0f);
}

var Function_659(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, vector3 vParam6) //Position: 0x27CA1 / 162977
{
	switch (iParam0)
	{
		case 0x00000001:
			return Function_140(StackVal, StackVal, Global_30750[0], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000002:
			return Function_140(StackVal, StackVal, Global_30750[1], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000004:
			return Function_140(StackVal, StackVal, Global_30750[2], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000008:
			return Function_140(StackVal, StackVal, Global_30750[3], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000010:
			return Function_140(StackVal, StackVal, Global_30750[4], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000020:
			return Function_140(StackVal, StackVal, Global_30750[5], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000040:
			return Function_140(StackVal, StackVal, Global_30750[6], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000080:
			return Function_140(StackVal, StackVal, Global_30750[7], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000100:
			return Function_140(StackVal, StackVal, Global_30750[8], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000200:
			return Function_140(StackVal, StackVal, Global_30750[9], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000400:
			return Function_140(StackVal, StackVal, Global_30750[10], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00000800:
			return Function_140(StackVal, StackVal, Global_30750[11], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00001000:
			return Function_140(StackVal, StackVal, Global_30750[12], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x00002000:
			return Function_140(StackVal, StackVal, Global_30750[13], bParam1, bParam2, bParam3, bParam4, iParam5, vParam6);
			break;
		
		case 0x40000000:
			LOG_ERROR("Trying to get a random member of invalid popset_type");
			return 4294967295;
			break;
	}
	return Function_660(StackVal, StackVal, iParam0, bParam1, bParam2, iParam5, vParam6);
}

var Function_660(var uParam0, bool bParam1, bool bParam2, int iParam3, vector3 vParam4) //Position: 0x27EF6 / 163574
{
	bool bVar0;
	
	bVar0 = CREATE_POPULATION_SET(0);
	if (uParam0 & 1 == 1)
	{
		Function_661(Global_30750[0], bVar0);
	}
	if (uParam0 & 2 == 2)
	{
		Function_661(Global_30750[1], bVar0);
	}
	if (uParam0 & 4 == 4)
	{
		Function_661(Global_30750[2], bVar0);
	}
	if (uParam0 & 8 == 8)
	{
		Function_661(Global_30750[3], bVar0);
	}
	if (uParam0 & 16 == 16)
	{
		Function_661(Global_30750[4], bVar0);
	}
	if (uParam0 & 32 == 32)
	{
		Function_661(Global_30750[5], bVar0);
	}
	if (uParam0 & 64 == 64)
	{
		Function_661(Global_30750[6], bVar0);
	}
	if (uParam0 & 128 == 128)
	{
		Function_661(Global_30750[7], bVar0);
	}
	if (uParam0 & 256 == 256)
	{
		Function_661(Global_30750[8], bVar0);
	}
	if (uParam0 & 512 == 512)
	{
		Function_661(Global_30750[9], bVar0);
	}
	if (uParam0 & 1024 == 1024)
	{
		Function_661(Global_30750[10], bVar0);
	}
	if (uParam0 & 2048 == 2048)
	{
		Function_661(Global_30750[11], bVar0);
	}
	if (uParam0 & 4096 == 4096)
	{
		Function_661(Global_30750[12], bVar0);
	}
	if (uParam0 & 8192 == 8192)
	{
		Function_661(Global_30750[13], bVar0);
	}
	return Function_140(StackVal, StackVal, bVar0, bParam1, bParam2, 4294967295, 0, iParam3, vParam4);
}

void Function_661(bool bParam0, bool bParam1) //Position: 0x28049 / 163913
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

var Function_662(vector3 vParam0) //Position: 0x28107 / 164103
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

bool Function_663(int iParam0, float fParam1, int iParam2, int iParam3) //Position: 0x28176 / 164214
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
		if (!Function_49(StackVal, StackVal, *iParam2))
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
			if (!Function_49(StackVal, StackVal, *iParam2))
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

struct<24> Function_664(int iParam0, struct<6> Param1, bool bParam7, vector3 vParam8) //Position: 0x282A8 / 164520
{
	bool bVar0;
	bool bVar6;
	struct<6> Var12;
	
	if (!IS_OBJECT_VALID(bParam7))
	{
		return StackVal, StackVal, StackVal, StackVal, StackVal, Var12;
	}
	iParam0->f_148 = Function_572(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, bParam7, Param1, vParam8);
	if (iParam0->f_148 >= 0)
	{
		GET_CURVE_POINT(bParam7, 1.0f, &Var12, 0);
		UNK_0x19D652F9(bParam7, 1.0f, &Param1, &bVar0);
		Function_571(&bVar0);
		Function_571(&Param1);
		*(iParam0 + 168) = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_571(&Param1), Function_571(&bVar0), StackVal) };
		*(iParam0 + 168) = { 0.0f, UNK_0x9C40E671(iParam0 + 168), 0.0f };
	}
	else
	{
		GET_CURVE_POINT(bParam7, 0.0f, &Var12, 0);
		UNK_0x19D652F9(bParam7, -1.0f, &Param1, &bVar6);
		Function_571(&bVar6);
		Function_571(&Param1);
		*(iParam0 + 168) = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_571(&Param1), Function_571(&bVar6), StackVal) };
		*(iParam0 + 168) = { 0.0f, UNK_0x9C40E671(iParam0 + 168), 0.0f };
	}
	return StackVal, StackVal, StackVal, StackVal, StackVal, Var12;
}

void Function_665(int iParam0, int iParam1) //Position: 0x28346 / 164678
{
	if (!Function_58())
	{
		Function_670(StackVal);
		if (Global_28842.f_80 != 0)
		{
			iParam0->f_72 = Global_28842.f_80;
			Function_669(StackVal, iParam0->f_72);
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
			Function_669(StackVal, iParam0->f_72);
			if (StackVal == 2)
			{
				Function_668(StackVal, 1);
			}
		}
		else if (StackVal || Function_605((Global_3404 || Function_722(131072))))
		{
			iParam0->f_72 = 4;
			Function_669(StackVal, iParam0->f_72);
			if (StackVal == 2)
			{
				Function_668(StackVal, 1);
			}
		}
		else if (iParam0->f_92)
		{
			iParam0->f_72 = Function_667(StackVal, iParam0->f_80);
			Function_669(StackVal, iParam0->f_72);
		}
		else if (iParam0->f_96)
		{
			iParam0->f_72 = Function_666(StackVal, iParam0->f_80);
			Function_669(StackVal, iParam0->f_72);
			if (StackVal == 2)
			{
				Function_668(StackVal, 0);
			}
		}
		else
		{
			iParam0->f_72 = iParam0->f_76;
			if (StackVal == 2)
			{
				Function_668(StackVal, 1);
			}
		}
	}
	else
	{
		Function_670(StackVal);
		if (Global_28842.f_80 != 0)
		{
			iParam0->f_72 = Global_28842.f_80;
			Function_669(StackVal, iParam0->f_72);
		}
		else if (StackVal || Function_605(Function_722(131072)))
		{
			iParam0->f_72 = 3;
			Function_669(StackVal, iParam0->f_72);
			if (StackVal == 2)
			{
				Function_668(StackVal, 1);
			}
		}
		else if (iParam0->f_92)
		{
			iParam0->f_72 = Function_667(StackVal, iParam0->f_80);
			Function_669(StackVal, iParam0->f_72);
		}
		else if (iParam0->f_96)
		{
			iParam0->f_72 = Function_666(StackVal, iParam0->f_80);
			Function_669(StackVal, iParam0->f_72);
			if (StackVal == 2)
			{
				Function_668(StackVal, 0);
			}
		}
		else
		{
			iParam0->f_72 = iParam0->f_76;
			if (StackVal == 2)
			{
				Function_668(StackVal, 1);
			}
		}
	}
	return;
}

int Function_666(int iParam0, int iParam1) //Position: 0x2852E / 165166
{
	bool bVar0;
	bool bVar1;
	
	if (!Function_58())
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

int Function_667(int iParam0, bool bParam1) //Position: 0x2861A / 165402
{
	if (!Function_58())
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

void Function_668(bool bParam0, int iParam1) //Position: 0x286E5 / 165605
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

void Function_669(bool bParam0, int iParam1) //Position: 0x2870D / 165645
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

void Function_670(bool bParam0) //Position: 0x28735 / 165685
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

bool Function_671(int iParam0, bool bParam1) //Position: 0x2875B / 165723
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	struct<6> Var5;
	
	if (Function_626(iParam0 + 24))
	{
		return 0;
	}
	if (iParam0->f_104 || bParam1)
	{
		if (!IS_ACTOR_VALID(Function_537(StackVal)))
		{
			return 0;
		}
		switch (StackVal)
		{
			case 0x00000001:
			case 0x00000003:
				if (IS_ACTOR_VALID(GET_MOUNT(Function_537(StackVal))))
				{
					GET_ACTOR_VELOCITY(GET_MOUNT(Function_537(StackVal)), &vVar0);
				}
				else
				{
					GET_ACTOR_VELOCITY(Function_537(StackVal), &vVar0);
				}
				break;
			
			case 0x00000002:
				if (IS_ACTOR_VALID(iParam0->f_16))
				{
					GET_ACTOR_VELOCITY(iParam0->f_16, &vVar0);
				}
				else
				{
					GET_ACTOR_VELOCITY(Function_537(StackVal), &vVar0);
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
			ROTATE_VECTOR_XZ(StackVal, GET_HEADING(Function_537(&vVar0)), 0);
		}
		else if (bVar3 > 0.05f)
		{
			VNORMALIZE(&vVar0);
		}
		VSCALE(&vVar0, -1.0f);
	}
	else if (!Function_49(StackVal, StackVal, *(iParam0 + 136)))
	{
		Function_571(iParam0 + 24);
		vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_571(iParam0 + 24), *(iParam0 + 136), StackVal) };
	}
	else if (Function_722(16) || Global_3386)
	{
		Function_571(iParam0 + 24);
		vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_571(iParam0 + 24), Global_34574, StackVal) };
	}
	else
	{
		Function_571(iParam0 + 24);
		if (Function_680(StackVal, StackVal, Global_34573, Function_571(iParam0 + 24)))
		{
			bVar4 = RAND_INT_RANGE(false, 10000);
			if (bVar4 <= 5000)
			{
				Function_571(iParam0 + 24);
				vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Global_34574, Function_571(iParam0 + 24), StackVal) };
			}
			else
			{
				Function_571(iParam0 + 24);
				vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_571(iParam0 + 24), Global_34574, StackVal) };
			}
		}
		else
		{
			Function_571(iParam0 + 24);
			vVar0 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Function_571(iParam0 + 24), Global_34574, StackVal) };
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
		Var5 = { StackVal, StackVal, StackVal, StackVal, StackVal, Function_664(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, iParam0, *(iParam0 + 24), iParam0->f_152, vVar0) };
		if (Function_626(&Var5))
		{
			*iParam0 = 16;
			return 0;
		}
	}
	if ((!DECOR_CHECK_EXIST(StackVal, "coachService") && !iParam0->f_104) && !bParam1)
	{
		Function_672(iParam0);
	}
	if (!IS_ACTOR_VALID(Function_537(StackVal)))
	{
		return 0;
	}
	if (!iParam0->f_104)
	{
		*(iParam0 + 24) = { StackVal, StackVal, StackVal, StackVal, StackVal, Var5 };
	}
	Function_618(iParam0, 1, iParam0->f_20 > 4);
	return 1;
}

void Function_672(int iParam0) //Position: 0x289B1 / 166321
{
	vector3 vVar0;
	vector3 vVar3;
	bool bVar6;
	bool bVar7;
	
	if (!Function_588(iParam0))
	{
		return;
	}
	Function_571(iParam0 + 24);
	vVar3 = { StackVal, StackVal, Function_571(iParam0 + 24) };
	vVar0 = { StackVal, StackVal, vVar3 };
	if (VDIST(vVar0, Global_34574) > 120.0f)
	{
	}
	Function_622(StackVal, StackVal, vVar0, iParam0 + 24);
	NET_OBJECT_REPLICATION_MODE_START(15, 5);
	switch (StackVal)
	{
		case 0x00000001:
			if (!IS_ACTOR_VALID(Function_537(StackVal)))
			{
				Function_675(StackVal, StackVal, StackVal, StackVal, StackVal, Global_28841, iParam0->f_20, vVar0, *(iParam0 + 168), iParam0 + 52, GET_ACTORENUM_SPECIES(Function_658(64, 0, 0, 4294967295, 0)));
				iParam0->f_20 = SQUAD_GET_SIZE(StackVal);
			}
			iParam0->f_180 = CREATE_OBJECTSET_IN_LAYOUT(Function_29(), Global_28841, 15, 0);
			Function_643(StackVal, StackVal, iParam0->f_180);
			break;
		
		case 0x00000002:
			if (!IS_ACTOR_VALID(Function_537(StackVal)))
			{
				if (Function_644(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_674(Global_28841), 64, 512, vVar0, *(iParam0 + 168), iParam0 + 16, 0))
				{
					iParam0->f_100 = 1;
				}
			}
			iParam0->f_180 = CREATE_OBJECTSET_IN_LAYOUT(Function_29(), Global_28841, 15, 1);
			Function_643(StackVal, StackVal, iParam0->f_180);
			break;
		
		default:
			break;
	}
	NET_OBJECT_REPLICATION_MODE_END(15);
	Function_642(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *iParam0);
	if (IS_OBJECTSET_VALID(iParam0->f_180))
	{
		Global_28842.f_48 = (Global_28842.f_48 + GET_OBJECTSET_SIZE(iParam0->f_180));
	}
	iParam0->f_184 = GET_CURRENT_GAME_TIME();
	if (!IS_ACTOR_VALID(Function_537(StackVal)))
	{
	}
	if (!Function_58())
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
			Function_673(SQUAD_GET_ACTOR_BY_INDEX(StackVal, bVar7), 100.0f, -1.0f, -1.0f);
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

void Function_673(bool bParam0, float fParam1, float fParam2, float fParam3) //Position: 0x28BFC / 166908
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

int Function_674(bool bParam0) //Position: 0x28C43 / 166979
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

void Function_675(bool bParam0, bool bParam1, int iParam2, vector3 vParam3, vector3 vParam6, var uParam9, var uParam10) //Position: 0x28CA9 / 167081
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
	if (Function_49(StackVal, StackVal, vParam3))
	{
		return;
	}
	if (!Global_30767[23])
	{
		return;
	}
	if (Function_49(StackVal, StackVal, vParam3))
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
		iVar27 = Function_679(StackVal, StackVal, 64, vParam3, 4, uParam10, 0);
		if (Function_645(iVar27, &bVar10))
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
			Function_677(uParam9, iVar0);
			GET_OBJECT_RELATIVE_POSITION(GET_OBJECT_FROM_ACTOR(bVar2), Function_677(uParam9, iVar0), &vVar6);
		}
		if (!Function_663(&vVar6, 20.0f, &vVar3, 10))
		{
			vVar3 = { StackVal, StackVal, vVar6 };
		}
		bVar9 = Function_646();
		STREAMING_REQUEST_ACTOR(bVar9, 1, false);
		if (!bVar9 != 4294967295)
		{
			Var28 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_656("ntrafrider", bParam0) };
			Var36 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, Function_656("ntrafhorse", bParam0) };
			bVar1 = Function_676(StackVal, StackVal, StackVal, StackVal, bParam0, &Var28, bVar9, &Var36, bVar10[iVar0], vVar3, vParam6);
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

var Function_676(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, vector3 vParam5, vector3 vParam8) //Position: 0x28E16 / 167446
{
	bool bVar0;
	bool bVar1;
	
	if (!IS_LAYOUTREF_VALID(bParam0))
	{
		LOG_ERROR("Layout is not valid in CREATE_ACTOR_MOUNTED_IN_LAYOUT !!!");
		return "";
	}
	if (!Function_138(bParam2))
	{
		LOG_ERROR("riderTypeName is not valid in CREATE_ACTOR_MOUNTED_IN_LAYOUT !!!");
		return "";
	}
	if (!Function_138(bParam4))
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

vector3 Function_677(var uParam0, bool bParam1) //Position: 0x28F3B / 167739
{
	vector3 vVar0;
	
	if (!Function_678(uParam0))
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

bool Function_678(int iParam0) //Position: 0x2907C / 168060
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

var Function_679(int iParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6) //Position: 0x2909E / 168094
{
	return Function_659(StackVal, StackVal, iParam0, 0, bParam4, bParam5, bParam6, 1, vParam1);
}

bool Function_680(bool bParam0, vector3 vParam1) //Position: 0x290B7 / 168119
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	
	vVar0 = { 0.0f, 0.0f, -1.0f };
	ROTATE_VECTOR_XZ(&vVar0, Function_148(bParam0), 0);
	GET_POSITION(bParam0, &vVar3);
	vVar6 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar3, vParam1, StackVal) };
	if (VDOT(&vVar0, &vVar6) < 0.0f)
	{
		return 1;
	}
	return 0;
}

bool Function_681(int iParam0) //Position: 0x290F6 / 168182
{
	if (StackVal || !IS_ACTOR_VALID(Function_537(!SQUAD_IS_VALID(StackVal))))
	{
		return 0;
	}
	Function_570(iParam0);
	Function_682(iParam0, 4294967294);
	Global_28842.f_8 = StackVal + 1;
	if (!Function_58())
	{
		Global_28842.f_16 = ((GET_CURRENT_GAME_TIME() + (2.0f / 2.0f)) + RAND_FLOAT_RANGE(0.0f, 2.0f));
	}
	else
	{
		Global_28842.f_16 = ((GET_CURRENT_GAME_TIME() + ((2.0f * 40.0f) / 2.0f)) + RAND_FLOAT_RANGE(0.0f, (2.0f * 40.0f)));
	}
	Function_628(iParam0);
	SQUAD_GOALS_CLEAR(StackVal);
	Function_317(StackVal);
	iParam0->f_12 = "";
	if (!IS_OBJECT_VALID(iParam0->f_152))
	{
		return 0;
	}
	if (Function_626(iParam0 + 24))
	{
		return 0;
	}
	iParam0->f_104 = 1;
	return 1;
}

void Function_682(int iParam0, int iParam1) //Position: 0x291A0 / 168352
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
			else if (Global_28842.f_44 < 4294967295 && !Function_722(128))
			{
				iParam0->f_20 = CEIL((IntToFloat(bVar0) / (10000.0f / TO_FLOAT(Global_28842.f_44))));
			}
			else if (iVar1 <= 6)
			{
				iParam0->f_20 = 1;
			}
			else if ((iVar1 > 8 || Function_722(128)) || iParam1 != 5)
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
				Function_706(128);
			}
			else
			{
				Function_718(128);
			}
			if (Global_29006 == Global_30668[1])
			{
				Function_687(1.0f);
				*(iParam0 + 52) = { StackVal, Function_687(1.0f) };
			}
			else
			{
				Function_685(1.0f);
				*(iParam0 + 52) = { StackVal, Function_685(1.0f) };
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
		iParam0->f_188 = Function_684();
	}
	if (!SQUAD_IS_VALID(StackVal))
	{
		Function_683();
		Var2 = { StackVal, Function_683() };
		iParam0->f_8 = GET_SQUAD_FROM_OBJECT(CREATE_SQUAD_IN_LAYOUT(Global_28841, &Var2));
	}
	if (!IS_OBJECTSET_VALID(iParam0->f_160))
	{
		iParam0->f_160 = CREATE_OBJECTSET_IN_LAYOUT(Function_29(), Global_28841, 36, 1);
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
		iParam0->f_72 = Function_621(StackVal, 0, iParam0->f_80);
	}
	else
	{
		iParam0->f_72 = Function_666(StackVal, iParam0->f_80);
	}
	*iParam0 = 1;
	return;
}

struct<8> Function_683() //Position: 0x293CE / 168910
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

var Function_684() //Position: 0x29425 / 168997
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	
	NET_GET_MAC_ADDRESS32(&iVar0);
	iVar1 = 0;
	if (Function_16())
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

struct<8> Function_685(int iParam0) //Position: 0x29463 / 169059
{
	Function_686(iParam0, 10);
	return StackVal, Function_686(iParam0, 10);
}

struct<8> Function_686(var uParam0, int iParam1) //Position: 0x29470 / 169072
{
	struct<2> Var0;
	
	Var0.f_4 = uParam0;
	Var0 = Global_26121[iParam1];
	return StackVal, Var0;
}

struct<8> Function_687(int iParam0) //Position: 0x29489 / 169097
{
	Function_686(iParam0, 8);
	return StackVal, Function_686(iParam0, 8);
}

void Function_688(int iParam0, bool bParam1) //Position: 0x29496 / 169110
{
	if (!SQUAD_IS_VALID(StackVal) && !(((*iParam0 != 0 || *iParam0 != 18) || *iParam0 != 16) || *iParam0 != 17))
	{
		Function_592(iParam0, 0);
		if (bParam1)
		{
			Global_28842.f_8 = (StackVal - 1);
		}
		*iParam0 = 0;
	}
	return;
}

var Function_689(int iParam0, vector3 vParam1, int iParam4) //Position: 0x294DE / 169182
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	
	iVar0 = Function_701(iParam0);
	if (iVar0 == 4294967295)
	{
		return 4294967295;
	}
	iVar1 = Function_574(iParam4, iParam0[iVar048]->f_164);
	fVar2 = Function_700();
	fVar3 = Function_699();
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
	if (!Function_695(iParam0, bVar4, iVar0))
	{
		UNK_0xDF93BD7C(bVar4);
		return 4294967295;
	}
	if (iParam4 == 0)
	{
		iParam0[iVar048]->f_4 = Function_692(iParam0, GET_CURVE_TYPE(iParam0[iVar048]->f_152));
	}
	else
	{
		iParam0[iVar048]->f_4 = iParam4;
	}
	if (!Function_691(StackVal))
	{
		iParam0[iVar048]->f_4 = 1;
		if (!Function_691(StackVal))
		{
			Function_592(iParam0[iVar048], 0);
			UNK_0xDF93BD7C(bVar4);
			return 4294967295;
		}
	}
	Function_682(iParam0[iVar048], GET_CURVE_TYPE(iParam0[iVar048]->f_152));
	Global_28842.f_8 = StackVal + 1;
	if (!Function_58())
	{
		Global_28842.f_16 = ((GET_CURRENT_GAME_TIME() + (2.0f / 2.0f)) + RAND_FLOAT_RANGE(0.0f, 2.0f));
	}
	else
	{
		Global_28842.f_16 = ((GET_CURRENT_GAME_TIME() + ((2.0f * 40.0f) / 2.0f)) + RAND_FLOAT_RANGE(0.0f, (2.0f * 40.0f)));
	}
	Function_628(iParam0[iVar048]);
	Function_690(&Global_28842, 65536);
	UNK_0xDF93BD7C(bVar4);
	return iVar0;
}

void Function_690(var uParam0, int iParam1) //Position: 0x2965C / 169564
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
	*uParam0 |= 1073741824;
	return;
}

bool Function_691(int iParam0) //Position: 0x2967F / 169599
{
	switch (iParam0)
	{
		case 0x00000001:
			if (!Function_562(&Global_28842, 2))
			{
				return 0;
			}
			if (!Global_30767[23])
			{
				return 0;
			}
			break;
		
		case 0x00000002:
			if (!Function_562(&Global_28842, 4))
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
			if (!Function_147(Global_30750[9], 0, 4294967295, 0))
			{
				return 0;
			}
			if (!Function_147(Global_30750[1], 2, 4294967295, 0))
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

int Function_692(int iParam0, int iParam1) //Position: 0x29768 / 169832
{
	bool bVar0;
	
	bVar0 = RAND_INT_RANGE(false, 1000);
	switch (iParam1)
	{
		case 0x00000005:
			return 1;
			break;
		
		case 0x00000004:
			if (IntToFloat(bVar0) > ((Global_28842.f_32 + Global_28842.f_36) * 1000.0f) && Function_693(iParam0, 2))
			{
				return 2;
			}
			return 1;
			break;
		
		case 0x0000000B:
			if (IntToFloat(bVar0) > ((Global_28842.f_32 + Global_28842.f_36) * 1000.0f) && Function_693(iParam0, 2))
			{
				return 2;
			}
			return 1;
			break;
	}
	return 1;
}

int Function_693(int iParam0, int iParam1) //Position: 0x297E8 / 169960
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
			if (Function_562(&Global_28842, 64))
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
				if (Function_588(iParam0[iVar048]))
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
				iVar1 = Function_694(&iVar2);
				if (iVar1 > 4)
				{
					return 0;
				}
				if (iVar2 >= 1)
				{
					return 0;
				}
				if (IS_ACTOR_RIDING_VEHICLE(Function_25()))
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

var Function_694(int iParam0) //Position: 0x2990A / 170250
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

bool Function_695(var uParam0, bool bParam1, int iParam2) //Position: 0x2995F / 170335
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
	bool bVar32;
	
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
		Function_571(&Var3);
		vVar10 = { StackVal, StackVal, Function_571(&Var3) };
		bVar22 = VDIST(vVar10, Global_34574);
		if (!Function_722(16384))
		{
			if (bVar22 > Function_700())
			{
				bVar9 = false;
			}
		}
		if (bVar9 && Function_16())
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
				if (Function_697(StackVal, StackVal, vVar10))
				{
					bVar9 = false;
				}
			}
		}
		if ((Function_722(32) && !Function_722(16384)) && bVar9)
		{
			vVar19 = { 0.0f, 0.0f, -1.0f };
			ROTATE_VECTOR_XZ(&vVar19, GET_HEADING(Global_34573), 0);
			Function_571(&Var3);
			vVar16 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(Global_34574, Function_571(&Var3), StackVal) };
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
					if (Function_588(uParam0[bVar248]))
					{
						if (SQUAD_IS_VALID(StackVal))
						{
							if (SQUAD_GET_SIZE(StackVal) >= 0)
							{
								Function_571(&Var3);
								bVar29 = Function_611(StackVal, StackVal, StackVal, Function_571(&Var3));
								if (IS_ACTOR_VALID(bVar29))
								{
									GET_POSITION(bVar29, &vVar10);
								}
								else
								{
									Function_571(uParam0[bVar248] + 24);
									vVar10 = { StackVal, StackVal, Function_571(uParam0[bVar248] + 24) };
								}
								Function_571(&Var3);
								if (VDIST(vVar10, Function_571(&Var3)) > 20.0f)
								{
									bVar9 = false;
								}
							}
						}
					}
				}
				bVar2++;
			}
			if (Function_588(&Global_28903))
			{
				if (SQUAD_IS_VALID(StackVal))
				{
					if (SQUAD_GET_SIZE(StackVal) >= 0)
					{
						Function_571(&Var3);
						bVar30 = Function_611(StackVal, StackVal, StackVal, Function_571(&Var3));
						if (IS_ACTOR_VALID(bVar30))
						{
							GET_POSITION(bVar30, &vVar10);
						}
						else
						{
							Function_571(&Global_28903 + 24);
							vVar10 = { StackVal, StackVal, Function_571(&Global_28903 + 24) };
						}
						Function_571(&Var3);
						if (VDIST(vVar10, Function_571(&Var3)) > 20.0f)
						{
							bVar9 = false;
						}
					}
				}
			}
		}
		if (bVar9)
		{
			Function_571(&Var3);
			vVar10 = { StackVal, StackVal, Function_571(&Var3) };
			vVar10.f_4 = (vVar10.y + 1.0f);
			uVar31 = GET_MATERIAL_AT_VECTOR(&vVar10);
			if (uVar31 & 1 == 0)
			{
				bVar9 = false;
				iVar1 += 5;
			}
			vVar10.f_4 = (vVar10.y - 1.0f);
		}
		if (Function_696(&Var3))
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
	if (Function_626(&Var3))
	{
		return 0;
	}
	if (Global_30900[1])
	{
		bVar2 = false;
		bVar2 = false;
		while (bVar2 <= GET_NUM_POINTS_IN_CURVE_QUERY(bParam1))
		{
			GET_POINT_FROM_CURVE_QUERY(bParam1, bVar2, &bVar32);
			Function_571(&bVar32);
			vVar13 = { StackVal, StackVal, Function_571(&bVar32) };
			bVar2++;
		}
		Function_571(&Var3);
		vVar13 = { StackVal, StackVal, Function_571(&Var3) };
	}
	uParam0[iParam248]->f_152 = GET_CURVE_FROM_POINT_INDEX_IN_CURVE_QUERY(bParam1, bVar0);
	uParam0[iParam248]->f_156 = CURVE_CALCULATE_DISTANCE_BY_FORCED_COMPONENT_SUBDIVISION_BOUNDS(uParam0[iParam248]->f_152, 0.0f, 1.0f, 10);
	*(uParam0[iParam248] + 24) = { StackVal, StackVal, StackVal, StackVal, StackVal, Var3 };
	Function_571(uParam0[iParam248] + 24);
	vVar10 = { StackVal, StackVal, Function_571(uParam0[iParam248] + 24) };
	return 1;
}

bool Function_696(int iParam0) //Position: 0x29CD7 / 171223
{
	if (iParam0->f_12 > 0.001f || iParam0->f_12 < 0.999f)
	{
		return 1;
	}
	return 0;
}

bool Function_697(vector3 vParam0) //Position: 0x29CF8 / 171256
{
	var uVar0[8];
	bool bVar9;
	int iVar10;
	
	Function_698(&uVar0);
	bVar9 = Function_163(StackVal, StackVal, vParam0, 1, 1, 0);
	if (Function_72(bVar9))
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

void Function_698(var uParam0) //Position: 0x29D6C / 171372
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

var Function_699() //Position: 0x29DCA / 171466
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

float Function_700() //Position: 0x29E15 / 171541
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

int Function_701(int iParam0) //Position: 0x29E59 / 171609
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

bool Function_702(int iParam0, bool bParam1, int iParam2) //Position: 0x29E86 / 171654
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	
	if (!Function_722(32768))
	{
		return 0;
	}
	if (StackVal > Function_704())
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
	if (!Function_147(Global_30750[6], 4, 23, 1))
	{
		return 0;
	}
	if (!Function_722(524288))
	{
		return 0;
	}
	if (Function_701(iParam0) == 4294967295)
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
	if (Function_16())
	{
		if (!NET_IS_IN_SESSION())
		{
			return 0;
		}
		if (!Function_722(2097152))
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
		iVar3 = Function_703();
		if (iVar3 > Function_704())
		{
			return 0;
		}
		if (Function_589())
		{
			return 0;
		}
	}
	return 1;
}

var Function_703() //Position: 0x29FBA / 171962
{
	return Global_78480.f_16;
}

int Function_704() //Position: 0x29FC6 / 171974
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

bool Function_705(vector3 vParam0) //Position: 0x2A07E / 172158
{
	return ARE_CURVES_IN_RANGE(48, vParam0, 150.0f);
}

void Function_706(int iParam0) //Position: 0x2A092 / 172178
{
	Function_652(&Global_28842, iParam0);
	return;
}

bool Function_707(int iParam0) //Position: 0x2A0A0 / 172192
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	Function_710();
	iVar1 = 0;
	if (!Function_566(iParam0[iVar03], 16))
	{
		if (IS_MISSION_SCRIPT())
		{
			iVar1 = 1;
			Function_649(iParam0[iVar03], 8);
		}
		else if (Function_709())
		{
			iVar1 = 1;
			Function_649(iParam0[iVar03], 8);
		}
		Function_649(iParam0[iVar03], 16);
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_566(iParam0[iVar03], 4))
		{
			if (!Function_566(iParam0[iVar03], 1))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (!STREAMING_REQUEST_PROP((*iParam0)[iVar03], (Function_566(iParam0[03], 8) || iVar1)))
						{
						}
						break;
					
					case 0x00000007:
						STREAMING_REQUEST_PROPSET((*iParam0)[iVar03]);
						break;
					
					case 0x00000002:
					case 0x00000003:
						STREAMING_REQUEST_ACTOR((*iParam0)[iVar03], 1, (Function_566(iParam0[03], 8) || iVar1));
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
				Function_649(iParam0[iVar03], 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < (*iParam0 - 1))
	{
		if (Function_566(iParam0[iVar03], 4))
		{
			if (!Function_566(iParam0[iVar03], 2))
			{
				switch (StackVal)
				{
					case 0x00000000:
						if (STREAMING_IS_PROP_LOADED((*iParam0)[iVar03]))
						{
							Function_649(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000007:
						if (STREAMING_IS_PROPSET_LOADED((*iParam0)[iVar03]))
						{
							Function_649(iParam0[iVar03], 2);
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
							Function_649(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000005:
						if (HAS_ANIM_SET_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_649(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000001:
						if (STREAMING_IS_GRINGO_LOADED((*iParam0)[iVar03]))
						{
							Function_649(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000008:
						if (HAS_ACTION_TREE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_649(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000A:
						if (HAS_STRING_TABLE_LOADED(GET_ASSET_NAME(StackVal, (*iParam0)[iVar03])))
						{
							Function_649(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000004:
						if (STREAMING_IS_SCRIPT_LOADED((*iParam0)[iVar03]))
						{
							Function_649(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x00000006:
						if (STREAMING_IS_MOVABLE_NAV_MESH_RESIDENT(GET_ASSET_NAME((*iParam0)[iVar03], 6)))
						{
							Function_649(iParam0[iVar03], 2);
						}
						else
						{
							return 0;
						}
						break;
					
					case 0x0000000C:
						if (STREAMING_IS_GRINGO_DICTIONARY_LOADED((*iParam0)[iVar03]))
						{
							Function_649(iParam0[iVar03], 2);
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
	Function_708();
	return 1;
}

void Function_708() //Position: 0x2A41B / 173083
{
	if (!Function_4(128))
	{
		return;
	}
	strcpy(&Global_13152, "Done Streaming", 64);
	Global_13152.f_68 = 2;
	Global_13152.f_64 = GET_CURRENT_GAME_TIME();
	Global_13152.f_72 = (Global_13133.f_64 + 3.0f);
	return;
}

bool Function_709() //Position: 0x2A45B / 173147
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

void Function_710() //Position: 0x2A486 / 173190
{
	if (!Function_4(128))
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

void Function_711() //Position: 0x2A4C8 / 173256
{
	int iVar0;
	
	iVar0 = GET_NUM_ACTORENUMS_IN_POPULATION(Global_30750[0]);
	Global_28842.f_236 = RAND_INT_RANGE(false, (iVar0 - 1));
	Global_28842.f_232 = 0;
	Global_28842.f_232 = 0;
	while (Global_28842.f_232 <= Global_28842.f_84)
	{
		Function_647(HUD_IS_FADED());
		Global_28842.f_232++;
	}
	Global_28842.f_232 = 0;
	Function_707(&Global_28842 + 84);
	Function_706(262144);
	return;
}

void Function_712() //Position: 0x2A52A / 173354
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	float fVar5;
	
	if (!Function_16())
	{
		Function_706(2097152);
		return;
	}
	if (!NET_IS_IN_SESSION())
	{
		Function_706(2097152);
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
					Function_718(2097152);
					return;
				}
			}
		}
		bVar0++;
	}
	Function_706(2097152);
	return;
}

bool Function_713(int iParam0, bool bParam1) //Position: 0x2A5AD / 173485
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	iVar0 = 4294967295;
	iVar1 = 4294967295;
	bVar2 = Function_16();
	if (IS_ACTOR_HORSE(bParam1))
	{
		if (IS_ACTOR_DRAFTED(bParam1))
		{
			iVar0 = 2;
			bVar3 = GET_ACTOR_DRAFTED_TO(bParam1);
			if (Function_581(iParam0, bVar3, &iVar1))
			{
				Function_717(iParam0[iVar148], bParam1);
			}
			else if (Function_713(iParam0, bVar3))
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
			if (Function_581(iParam0, bVar4, &iVar1))
			{
				Function_717(iParam0[iVar148], bParam1);
				if (!NET_IS_IN_SESSION())
				{
					GIVE_OBJECT_TO_LAYOUT(bParam1, Global_28841);
					REGISTER_TRAFFIC_ACTOR(bParam1, 1);
				}
				return 1;
			}
			if (Function_715(iParam0, bVar4, 1, bVar2, &iVar1))
			{
				Function_717(iParam0[iVar148], bVar4);
				if (!NET_IS_IN_SESSION())
				{
					GIVE_OBJECT_TO_LAYOUT(bParam1, Global_28841);
					REGISTER_TRAFFIC_ACTOR(bParam1, 1);
				}
				return 1;
			}
			if (Function_714(iParam0, bVar4, 1))
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
		if (!Function_638(bParam1, 1, 1, 4294967295))
		{
			return 0;
		}
		if (IS_ACTOR_DRAFT_VEHICLE(bParam1))
		{
			iVar0 = 2;
		}
		if (Function_714(iParam0, bParam1, iVar0))
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
			if (Function_581(iParam0, bVar5, &iVar1))
			{
				Function_717(iParam0[iVar148], bParam1);
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
			if (Function_713(iParam0, bVar5))
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
		if (Function_715(iParam0, bParam1, iVar0, bVar2, &iVar1))
		{
			Function_717(iParam0[iVar148], bParam1);
			if (!NET_IS_IN_SESSION())
			{
				GIVE_OBJECT_TO_LAYOUT(bParam1, Global_28841);
				REGISTER_TRAFFIC_ACTOR(bParam1, 1);
			}
			return 1;
		}
		if (Function_714(iParam0, bParam1, iVar0))
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

bool Function_714(var uParam0, bool bParam1, int iParam2) //Position: 0x2A822 / 174114
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	iVar0 = Function_701(uParam0);
	if (iVar0 == 4294967295)
	{
		return 0;
	}
	uParam0[iVar048]->f_4 = iParam2;
	if (Function_16())
	{
		uParam0[iVar048]->f_188 = NET_ACTOR_GET_SCRIPT_INT(bParam1);
	}
	Function_682(uParam0[iVar048], 4294967294);
	(*uParam0)[iVar048] = 3;
	iVar1 = 0;
	bVar2 = false;
	switch (iParam2)
	{
		case 0x00000002:
			if (!IS_ACTOR_VEHICLE(bParam1))
			{
				Function_592(uParam0[iVar048], 0);
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
			uParam0[iVar048]->f_180 = CREATE_OBJECTSET_IN_LAYOUT(Function_29(), Global_28841, 15, 0);
			Function_643(StackVal, StackVal, uParam0[iVar048]->f_180);
			bVar4 = GET_ACTOR_IN_VEHICLE_SEAT(bParam1, false);
			break;
		
		case 0x00000001:
		case 0x00000003:
			if (!IS_ACTOR_HUMAN(bParam1))
			{
				Function_592(uParam0[iVar048], 0);
				return 0;
			}
			if (IS_ACTOR_PLAYER(bParam1))
			{
				if (IS_ACTOR_RIDING(bParam1))
				{
					RELEASE_ACTOR(GET_MOUNT(bParam1));
				}
				Function_592(uParam0[iVar048], 0);
				return 0;
			}
			SQUAD_JOIN(StackVal, bParam1);
			if (iParam2 == 1)
			{
				uParam0[iVar048]->f_20 = 1;
				uParam0[iVar048]->f_180 = CREATE_OBJECTSET_IN_LAYOUT(Function_29(), Global_28841, 15, 0);
				Function_643(StackVal, StackVal, uParam0[iVar048]->f_180);
			}
			bVar4 = bParam1;
			break;
		
		default:
			break;
	}
	Function_642(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, *uParam0[iVar048]);
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

bool Function_715(var uParam0, bool bParam1, int iParam2, bool bParam3, int iParam4) //Position: 0x2AAF2 / 174834
{
	int iVar0;
	bool bVar1;
	float fVar2;
	vector3 vVar3;
	vector3 vVar6;
	bool bVar9;
	
	bVar1 = 0.0f;
	fVar2 = 0.0f;
	if (bParam3 && Function_16())
	{
		bVar9 = NET_ACTOR_GET_SCRIPT_INT(bParam1);
		if (bVar9 != 0)
		{
			iVar0 = 0;
			while (iVar0 <= *uParam0)
			{
				if (Function_588(uParam0[iVar048]))
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
		if (Function_588(uParam0[iVar048]))
		{
			if (StackVal == iParam2)
			{
				if (Function_716(uParam0[iVar048], bParam1))
				{
					switch (StackVal)
					{
						case 0x00000001:
						case 0x00000003:
							bVar1 = GET_HEADING(bParam1);
							GET_OBJECT_POSITION(bParam1, &vVar6);
							Function_571(uParam0[iVar048] + 24);
							vVar3 = { StackVal, StackVal, Vector(StackVal, StackVal, StackVal) - Vector(vVar6, Function_571(uParam0[iVar048] + 24), StackVal) };
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

bool Function_716(int iParam0, bool bParam1) //Position: 0x2AC0B / 175115
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	
	if (!Function_588(iParam0))
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

void Function_717(int iParam0, bool bParam1) //Position: 0x2AC84 / 175236
{
	if (!Function_588(iParam0))
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
			iParam0->f_180 = CREATE_OBJECTSET_IN_LAYOUT(Function_29(), Global_28841, 15, 0);
		}
		Function_643(StackVal, StackVal, iParam0->f_180);
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

void Function_718(int iParam0) //Position: 0x2AD74 / 175476
{
	Function_690(&Global_28842, iParam0);
	return;
}

void Function_719(int iParam0, int iParam1) //Position: 0x2AD82 / 175490
{
	int iVar0;
	
	if ((((HUD_IS_FADED() && !Function_722(65536)) && !Global_3410) && !Function_722(16384)) || iParam1)
	{
		if (((Global_3391 && !Global_3410) || !STREAMING_IS_WORLD_LOADED()) || iParam1)
		{
			iVar0 = 0;
			while (iVar0 <= *iParam0)
			{
				if (Function_588(iParam0[iVar048]))
				{
					Function_592(iParam0[iVar048], 0);
				}
				iVar0++;
			}
			if (Function_588(&Global_28903))
			{
				Function_592(&Global_28903, 0);
			}
			if (!Function_722(65536))
			{
				if (!Global_34165.f_44)
				{
					DESTROY_LAYOUT_OBJECTS(Global_28841);
				}
				else
				{
					RELEASE_LAYOUT_OBJECTS(Global_28841);
				}
				Function_720(Global_28841);
			}
			Global_28842.f_16 = 0.0f;
			Global_28842.f_8 = 0;
			Global_28842.f_48 = 0;
			Function_706(65536);
		}
	}
	if (StackVal && (!HUD_IS_FADED() && Function_722(16384)) <= Function_704())
	{
		Function_718(16384);
	}
	return;
}

int Function_720(int iParam0) //Position: 0x2AE55 / 175701
{
	var uVar0;
	
	Function_721(4, 1);
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

void Function_721(int iParam0, int iParam1) //Position: 0x2B9F4 / 178676
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

bool Function_722(int iParam0) //Position: 0x2BA3D / 178749
{
	return Function_562(&Global_28842, iParam0);
}

void Function_723(bool bParam0) //Position: 0x2BA4B / 178763
{
	if (!Function_16())
	{
		return;
	}
	Global_78480.f_8 = StackVal;
	Function_727();
	Function_726();
	if (!bParam0)
	{
		return;
	}
	Function_724();
	return;
}

void Function_724() //Position: 0x2BA74 / 178804
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
			if (Function_725(bVar1))
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
			if (Function_725(bVar1))
			{
				Global_78480.f_20++;
			}
			bVar2 = OBJECT_ITERATOR_NEXT(bVar0);
		}
		DESTROY_ITERATOR(bVar0);
	}
	return;
}

bool Function_725(bool bParam0) //Position: 0x2BB26 / 178982
{
	if (!IS_ACTOR_VEHICLE(bParam0))
	{
		return 0;
	}
	if (!NET_IS_OBJECT_LOCAL(bParam0))
	{
		return 0;
	}
	if (!Function_638(bParam0, 4294967295, 1, 4294967295))
	{
		return 0;
	}
	return 1;
}

void Function_726() //Position: 0x2BB51 / 179025
{
	bool bVar0;
	
	Global_78480.f_16 = 0;
	bVar0 = false;
	while (bVar0 <= 16)
	{
		if (IS_SLOT_VALID(bVar0))
		{
			if ((Global_3386 && Global_76943[bVar096] != Global_29006) || Function_579(bVar0))
			{
				Global_78480.f_16 = (Global_78480.f_16 + Global_76943[bVar096].f_12);
			}
		}
		bVar0++;
	}
	return;
}

void Function_727() //Position: 0x2BBA9 / 179113
{
	var uVar0;
	int iVar1;
	
	Global_78480.f_12 = 0;
	iVar1 = 0;
	while (iVar1 <= Local_11)
	{
		if (Function_588(&(Local_11[iVar148])))
		{
			if (Function_586(&(Local_11[iVar148]), &uVar0, 1))
			{
				Global_78480.f_12++;
			}
		}
		iVar1++;
	}
	return;
}

var Function_728(int iParam0) //Position: 0x2BBF2 / 179186
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	iVar2 = 0;
	while (iVar2 <= *iParam0)
	{
		if (Function_588(iParam0[iVar248]))
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

void Function_729() //Position: 0x2BC64 / 179300
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
	Function_720(Global_28841);
	EVENT_TRAP_ON_OWNER(Global_28951, Global_28841);
	Global_28842.f_60 = CREATE_OBJECTSET_IN_LAYOUT("trafficReleased", Global_28841, 15, 1);
	return;
}

void Function_730() //Position: 0x2BCE7 / 179431
{
	Global_28842.f_44 = 4294967295;
	Global_28842.f_72 = 4294967295;
	Global_28842.f_64 = 0;
	Global_28842.f_68 = 0;
	Function_690(&Global_28842, 512);
	Global_28842.f_76 = -500.0f;
	Function_584();
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
	Function_706(8192);
	bLocal_493 = Function_71("trafficDebugLite");
	bLocal_494 = Function_71("trafficForceCoach");
	if (bLocal_494)
	{
		Function_652(&Global_28842, 64);
	}
	Function_706(262144);
	if (Function_71("trafficSpew"))
	{
		Global_30842[43] = 1;
		Global_30842[12] = 1;
		Global_30842[13] = 1;
	}
	return;
}

void Function_731(int iParam0) //Position: 0x2BEB0 / 179888
{
	strcpy(iParam0 + 12, "LAW", 16);
	*iParam0 = 179947;
	iParam0->f_4 = 179940;
	iParam0->f_8 = 179934;
	iParam0->f_28 = 1;
	return;
}

void Function_732() //Position: 0x2BEDE / 179934
{
	return;
}

int Function_733() //Position: 0x2BEE4 / 179940
{
	return 0;
}

void Function_734() //Position: 0x2BEEB / 179947
{
	return;
}

